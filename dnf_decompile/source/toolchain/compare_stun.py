#!/usr/bin/env python3
import re, os, subprocess, sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import demangle_batch, disasm_slice, load_disasm, norm_identical

ORIG = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/stun/df_stun_r')
NEW = Path(sys.argv[1] if len(sys.argv) > 1 else "/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/build-stun/df_stun_r")

def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)

def text_symbols(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = []
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4: continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in {'T','t','W','w'}: continue
        if name.startswith('.L'): continue
        rows.append((name, typ, int(size, 16), int(addr, 16)))
    dem = demangle_batch([r[0] for r in rows])
    return {r[0]: (r[1], r[2], dem.get(r[0], r[0]), r[3]) for r in rows}

_sym = {}
_dis = {}
def syms(b):
    if b not in _sym: _sym[b] = text_symbols(b)
    return _sym[b]

def disasm(bin_path, symbol):
    info = syms(bin_path).get(symbol)
    if not info: return []
    loaded = _dis.get(bin_path)
    if loaded is None:
        loaded = _dis[bin_path] = load_disasm(bin_path)
    return disasm_slice(loaded, info[3], info[3] + info[1])

def mnemonics(l):
    return [x.split()[0] for x in l if x.split()]

orig = syms(ORIG)
new = syms(NEW)
stats = defaultdict(int)
diffs = []
for name, (typ, size, dname, addr) in sorted(orig.items()):
    if name in ('_init','_fini','_start','_dl_relocate_static_pie','__libc_csu_init','__libc_csu_fini','deregister_tm_clones','register_tm_clones','__do_global_dtors_aux','frame_dummy'):
        continue
    if name not in new:
        stats['MISSING'] += 1
        diffs.append((name, dname, 'MISSING'))
        continue
    a = disasm(ORIG, name)
    b = disasm(NEW, name)
    if not a or not b:
        stats['MISSING'] += 1
        diffs.append((name, dname, 'EMPTY'))
        continue
    na, nb = norm_identical(a), norm_identical(b)
    if na == nb:
        cls = 'IDENTICAL'
    elif mnemonics(a) == mnemonics(b):
        cls = 'NEAR'
    else:
        cls = 'DIFF'
    stats[cls] += 1
    if cls == 'DIFF':
        diffs.append((name, dname, 'DIFF'))

extra = [n for n in new if n not in orig and not n.startswith('_') and n not in ('_init','_fini','_start','_dl_relocate_static_pie','__libc_csu_init','__libc_csu_fini','deregister_tm_clones','register_tm_clones','__do_global_dtors_aux','frame_dummy')]
print("=== stun compare: orig {} funcs ===".format(len(orig)))
print("IDENTICAL:", stats['IDENTICAL'], " NEAR:", stats['NEAR'], " DIFF:", stats['DIFF'], " MISSING:", stats['MISSING'])
print("EXTRA symbols in new:", len(extra))
for n in sorted(extra)[:20]: print("  EXTRA:", n)
print("--- DIFF/MISSING list ---")
for name, dname, cls in diffs:
    print("  {} {} ({})".format(cls, name, dname))
