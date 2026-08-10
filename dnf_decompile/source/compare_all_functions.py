#!/usr/bin/env python3
"""Full function-level comparison between original df_community_r and our rebuild.

For every named text symbol in the ORIGINAL binary (excluding .L locals), check
whether our binary provides it, and if so classify the alignment:
  - IDENTICAL: instruction text (mnemonic+operands) equal under the unified
    caliber (see compare_common.py): immediates, field/stack offsets and
    global addresses are preserved strictly; only direct branch/call target
    addresses are normalized
  - NEAR:     mnemonic sequence equal but operand-level differences
  - DIFF:     structural differences (mnemonic sequence differs)
  - MISSING:  present in original, absent from our binary
  - EXTRA:    present in our binary, absent from original
"""
import re
import os
import subprocess
import sys
from collections import defaultdict
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parent / 'toolchain'))
from compare_common import demangle_batch, disasm_slice, load_disasm, norm_line


ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = Path(os.environ.get('DF_NEW_BIN', ROOT / 'dnf_decompile/build/community/df_community_r'))
OUT_TSV = ROOT / 'dnf_decompile/build/community/df_community_r_all_function_compare.tsv'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def text_symbols(bin_path):
    """Return {name: (type, size)} for defined text symbols (T/t/W/w)."""
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = []
    for line in out.splitlines():
        parts = line.split(None, 3)
        if len(parts) < 4:
            continue
        addr, size, sym_type, name = parts
        if sym_type not in {'T', 't', 'W', 'w'}:
            continue
        if name.startswith('.L'):
            continue
        rows.append((name, sym_type, int(size, 16), int(addr, 16)))
    dem = demangle_batch([r[0] for r in rows])
    return {r[0]: (r[1], r[2], dem.get(r[0], r[0]), r[3]) for r in rows}


BRANCH_RE = re.compile(r'^(.*?\b(?:j[a-z]*|call)\b.*?)\b0x[0-9a-f]+(<[^>]*>)?$')

_SYM_CACHE = {}
_DIS_CACHE = {}


def syms_cached(bin_path):
    if bin_path not in _SYM_CACHE:
        _SYM_CACHE[bin_path] = text_symbols(bin_path)
    return _SYM_CACHE[bin_path]


def disasm(bin_path, symbol):
    """Full instruction lines for a symbol, with address prefixes stripped."""
    # Resolve the symbol to an address+size range so aliased symbols
    # (e.g. C1/C2 constructor aliases at the same address) still disassemble.
    info = syms_cached(bin_path).get(symbol)
    if not info:
        return []
    loaded = _DIS_CACHE.get(bin_path)
    if loaded is None:
        loaded = _DIS_CACHE[bin_path] = load_disasm(bin_path)
    # 统一口径：仅归一化直接跳转/调用目标地址；
    # 立即数、字段偏移等常量严格保留
    return [norm_line(x) for x in disasm_slice(loaded, info[3], info[3] + info[1])]


def mnemonic_list(insns):
    return [i.split()[0] for i in insns]


def classify(orig_insns, new_insns):
    if not orig_insns or not new_insns:
        return 'NOCODE', 0.0
    if orig_insns == new_insns:
        return 'IDENTICAL', 1.0
    if mnemonic_list(orig_insns) == mnemonic_list(new_insns):
        return 'NEAR', 1.0
    # sequence overlap on mnemonics
    from collections import Counter
    c1 = Counter(mnemonic_list(new_insns))
    c2 = Counter(mnemonic_list(orig_insns))
    common = sum((c1 & c2).values())
    return 'DIFF', common / max(len(orig_insns), len(new_insns))


def main():
    orig_syms = syms_cached(ORIG)
    new_syms = syms_cached(NEW)
    rows = []

    # project-object symbols from our build (the code we actually wrote)
    obj_dir = ROOT / 'dnf_decompile/build/community/CMakeFiles/df_community_r.dir'
    project_syms = set()
    for obj in sorted(obj_dir.rglob('*.cpp.o')):
        for sym in run("nm --defined-only '{}'".format(obj)).splitlines():
            parts = sym.split()
            if len(parts) == 3 and parts[1] in {'T', 't', 'W', 'w'}:
                project_syms.add(parts[2])

    # 1) all original named functions
    for name, (stype, size, dm, _addr) in sorted(orig_syms.items()):
        if name in new_syms:
            cls, overlap = classify(disasm(ORIG, name), disasm(NEW, name))
            origin = 'project' if name in project_syms else 'libstdcxx/system'
        else:
            cls, overlap, origin = 'MISSING', 0.0, ('project' if name in project_syms else 'libstdcxx/system')
        rows.append({
            'name': name, 'demangled': dm, 'orig_type': stype, 'orig_size': size,
            'in_orig': 1, 'new_size': new_syms.get(name, ('', 0, '', 0))[1],
            'class': cls, 'overlap': overlap, 'origin': origin,
        })

    # 2) extras: in our binary but not in original
    for name, (stype, size, dm, _addr) in sorted(new_syms.items()):
        if name in orig_syms:
            continue
        origin = 'project' if name in project_syms else 'libstdcxx/system'
        rows.append({
            'name': name, 'demangled': dm, 'orig_type': '', 'orig_size': 0,
            'in_orig': 0, 'new_size': size,
            'class': 'EXTRA', 'overlap': 0.0, 'origin': origin,
        })

    with OUT_TSV.open('w', encoding='utf-8') as f:
        f.write('name\tdemangled\torig_type\torig_size\tnew_size\tclass\toverlap\torigin\tin_orig\n')
        for r in rows:
            f.write('{}\t{}\t{}\t{}\t{}\t{}\t{:.4f}\t{}\t{}\n'.format(
                r['name'], r['demangled'].replace('\t', ' '), r['orig_type'],
                r['orig_size'], r['new_size'], r['class'], r['overlap'],
                r['origin'], r['in_orig']))

    from collections import Counter
    cls_count = Counter(r['class'] for r in rows)
    proj_orig = sum(1 for r in rows if r['in_orig'] and r['origin'] == 'project')
    missing_proj = sum(1 for r in rows if r['class'] == 'MISSING' and r['origin'] == 'project')
    extra_proj = sum(1 for r in rows if r['class'] == 'EXTRA' and r['origin'] == 'project')
    print('OUT={}'.format(OUT_TSV))
    print('CLASSES={}'.format(dict(cls_count)))
    print('ORIG_PROJECT={} MISSING_PROJECT={} EXTRA_PROJECT={}'.format(proj_orig, missing_proj, extra_proj))


if __name__ == '__main__':
    main()
