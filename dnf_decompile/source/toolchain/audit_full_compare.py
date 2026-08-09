#!/usr/bin/env python3
"""Full per-function audit comparison: original df_community_r vs rebuilt.

Improvements over compare_df_community_functions.py:
  - deduplicates alias symbols (C1/C2 at same address) by address;
  - disassembles by address range, not by symbol name;
  - reports call-target symbol mismatches in addition to mnemonic overlap.
"""
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import (
    demangle_batch,
    disasm_slice,
    load_disasm,
    norm_line,
)

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/source/build-c6/df_community_r'
OBJ_DIR = ROOT / 'dnf_decompile/source/build-c6/CMakeFiles/df_community_r.dir'
OUT_DIR = ROOT / 'dnf_decompile/source/toolchain/audit'
OUT_TSV = ROOT / 'dnf_decompile/docs/data/df_community_r_function_compare_full.tsv'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def nm_map(bin_path):
    """symbol -> (addr, size, demangled); code symbols only."""
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = []
    for line in out.splitlines():
        parts = line.split(None, 3)
        if len(parts) < 4:
            continue
        addr, size, sym_type, name = parts[0], parts[1], parts[2], parts[3]
        if sym_type not in {'T', 't', 'W', 'w'}:
            continue
        rows.append((name, int(addr, 16), int(size, 16)))
    dem = demangle_batch([r[0] for r in rows])
    return {r[0]: (r[1], r[2], dem.get(r[0], r[0])) for r in rows}


def obj_funcs(obj_path):
    out = run("nm --defined-only '{}'".format(obj_path))
    return [
        parts[2] for line in out.splitlines()
        if len((parts := line.split())) == 3 and parts[1] in {'T', 't', 'W', 'w'}
    ]


def disasm_range(bin_path, start, size):
    """Return (normalized_texts, mnemonics, call_target_addrs)."""
    try:
        loaded = _DIS_CACHE.get(bin_path)
        if loaded is None:
            loaded = _DIS_CACHE[bin_path] = load_disasm(bin_path)
    except Exception:
        return [], [], []
    texts, mnems, calls = [], [], []
    for ins in disasm_slice(loaded, start, start + size):
        texts.append(norm_line(ins))
        mnems.append(ins.split()[0])
        cm = re.search(r'\bcall\b\s+([0-9a-fA-F]{8})', ins)
        if cm:
            calls.append(int(cm.group(1), 16))
    return texts, mnems, calls


_DIS_CACHE = {}


def addr_to_symbol(map_, addr):
    """Nearest function start <= addr within its size, or None."""
    best = None
    for name, (a, sz, _d) in map_.items():
        if a <= addr < a + sz:
            if best is None or a > best[1][0]:
                best = (name, (a, sz))
    return best[0] if best else None


def main():
    orig_nm = nm_map(ORIG)
    new_nm = nm_map(NEW)

    # unique function starts per binary (dedupe aliases)
    def uniq_by_addr(m):
        by_addr = {}
        for name, (a, sz, d) in m.items():
            if a not in by_addr or sz > by_addr[a][1][1]:
                by_addr[a] = (name, (a, sz, d))
        return by_addr

    orig_addr = uniq_by_addr(orig_nm)
    new_addr = uniq_by_addr(new_nm)

    rows = []
    for obj in sorted(OBJ_DIR.rglob('*.cpp.o')):
        rel = obj.relative_to(OBJ_DIR).as_posix()
        seen = set()
        for sym in sorted(set(obj_funcs(obj))):
            if sym not in new_nm or sym in seen:
                continue
            n_addr, n_size, n_dem = new_nm[sym]
            if n_addr in seen:
                continue
            seen.add(n_addr)
            in_orig = sym in orig_nm
            if in_orig:
                o_addr, o_size, o_dem = orig_nm[sym]
                # aliases: keep one row per pair of addresses
                if o_addr in rows and False:
                    pass
            else:
                o_addr = o_size = o_dem = None

            n_texts, n_mnems, n_calls = disasm_range(NEW, n_addr, n_size)
            if in_orig:
                o_texts, o_mnems, o_calls = disasm_range(ORIG, o_addr, o_size)
                # 统一严格口径：除直接跳转/调用目标地址外，指令文本逐条一致
                exact = bool(n_texts) and n_texts == o_texts
                if n_mnems and o_mnems:
                    c1, c2 = Counter(n_mnems), Counter(o_mnems)
                    common = sum((c1 & c2).values())
                    overlap = common / max(len(n_mnems), len(o_mnems))
                else:
                    overlap = 0.0
                # call target comparison
                n_call_syms = sorted({
                    addr_to_symbol(orig_addr, c) or addr_to_symbol(new_addr, c) or hex(c)
                    for c in n_calls
                })
                o_call_syms = sorted({
                    addr_to_symbol(orig_addr, c) or hex(c)
                    for c in o_calls
                })
                call_mismatch = (n_call_syms != o_call_syms) if (n_calls or o_calls) else False
                # direct absolute immediate comparison (constants),
                # 复用已取出的指令文本，不再二次 objdump
                n_imm = sorted(re.findall(r'\$0x[0-9a-fA-F]+|\$[0-9]+', ' '.join(n_texts)))
                o_imm = sorted(re.findall(r'\$0x[0-9a-fA-F]+|\$[0-9]+', ' '.join(o_texts)))
                imm_mismatch = (n_imm != o_imm) if (n_imm or o_imm) else False
            else:
                o_texts, o_mnems, o_calls = [], [], []
                exact = False
                overlap = 0.0
                call_mismatch = False
                imm_mismatch = False

            rows.append({
                'file': rel,
                'symbol': sym,
                'demangled': n_dem,
                'in_original': 1 if in_orig else 0,
                'orig_addr': hex(o_addr) if o_addr is not None else '',
                'orig_size': o_size if o_size is not None else '',
                'new_addr': hex(n_addr),
                'new_size': n_size,
                'orig_insns': len(o_mnems),
                'new_insns': len(n_mnems),
                'identical': 'yes' if exact else 'no',
                'mnemonic_overlap': overlap,
                'call_mismatch': 'yes' if call_mismatch else 'no',
                'imm_mismatch': 'yes' if imm_mismatch else 'no',
            })

    with OUT_TSV.open('w', encoding='utf-8') as f:
        cols = ['file', 'symbol', 'demangled', 'in_original', 'orig_addr', 'orig_size',
                'new_addr', 'new_size', 'orig_insns', 'new_insns', 'identical',
                'mnemonic_overlap', 'call_mismatch', 'imm_mismatch']
        f.write('\t'.join(cols) + '\n')
        for r in rows:
            f.write('\t'.join(str(r[c]) for c in cols) + '\n')

    in_orig = [r for r in rows if r['in_original']]
    exact = [r for r in in_orig if r['identical'] == 'yes']
    call_bad = [r for r in in_orig if r['call_mismatch'] == 'yes']
    imm_bad = [r for r in in_orig if r['imm_mismatch'] == 'yes']
    print('rows={} in_orig={} exact={} call_mismatch={} imm_mismatch={}'
          .format(len(rows), len(in_orig), len(exact), len(call_bad), len(imm_bad)))
    print('avg overlap = {:.2f}%'.format(
        sum(r['mnemonic_overlap'] for r in in_orig) / len(in_orig) * 100))


if __name__ == '__main__':
    main()
