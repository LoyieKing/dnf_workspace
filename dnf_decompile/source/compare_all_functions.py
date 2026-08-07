#!/usr/bin/env python3
"""Full function-level comparison between original df_community_r and our rebuild.

For every named text symbol in the ORIGINAL binary (excluding .L locals), check
whether our binary provides it, and if so classify the alignment:
  - IDENTICAL: instruction text (mnemonic+operands, normalized) equal
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

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = Path(os.environ.get('DF_NEW_BIN', ROOT / 'dnf_decompile/source/build-verify-community/df_community_r'))
OUT_TSV = ROOT / 'dnf_decompile/source/build-verify-community/df_community_r_all_function_compare.tsv'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def demangle(name):
    try:
        p = subprocess.run(['c++filt', '-n'], input=name, text=True,
                           capture_output=True, check=True)
        return p.stdout.strip()
    except Exception:
        return name


def text_symbols(bin_path):
    """Return {name: (type, size)} for defined text symbols (T/t/W/w)."""
    out = run("nm -S --defined-only '{}'".format(bin_path))
    result = {}
    for line in out.splitlines():
        parts = line.split(None, 3)
        if len(parts) < 4:
            continue
        addr, size, sym_type, name = parts
        if sym_type not in {'T', 't', 'W', 'w'}:
            continue
        if name.startswith('.L'):
            continue
        result[name] = (sym_type, int(size, 16), demangle(name), int(addr, 16))
    return result


BRANCH_RE = re.compile(r'^(.*?\b(?:j[a-z]*|call)\b.*?)\b0x[0-9a-f]+(<[^>]*>)?$')

_SYM_CACHE = {}


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
    start = info[3]
    stop = start + info[1]
    cmd = ("objdump -d --no-show-raw-insn --start-address=0x{:x} "
           "--stop-address=0x{:x} '{}'".format(start, stop, bin_path))
    try:
        out = run(cmd)
    except Exception:
        return []
    lines = []
    for line in out.splitlines():
        m = re.match(r'^\s*[0-9a-fA-F]+:\s*(.*)$', line)
        if not m:
            continue
        txt = m.group(1).strip()
        if not txt:
            continue
        # normalize branch/call target addresses to <target> so layout shifts
        # do not count as differences; keep the symbol name if present
        txt = re.sub(r'\b0x[0-9a-f]+(<[^>]*>)?$', r'<target>\1', txt)
        lines.append(txt)
    return lines


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
    obj_dir = ROOT / 'dnf_decompile/source/build-verify-community/CMakeFiles/df_community_r.dir'
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
