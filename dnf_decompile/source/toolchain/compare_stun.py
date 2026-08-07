#!/usr/bin/env python3
import re, os, subprocess, sys
from collections import defaultdict
from pathlib import Path

ORIG = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/stun/df_stun_r')
NEW = Path(sys.argv[1] if len(sys.argv) > 1 else "/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/build-stun/df_stun_r")

def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)

def demangle(name):
    try:
        return subprocess.run(['c++filt','-n'], input=name, text=True, capture_output=True, check=True).stdout.strip()
    except Exception:
        return name

def text_symbols(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    result = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4: continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in {'T','t','W','w'}: continue
        if name.startswith('.L'): continue
        result[name] = (typ, int(size,16), demangle(name), int(addr,16))
    return result

_sym = {}
def syms(b):
    if b not in _sym: _sym[b] = text_symbols(b)
    return _sym[b]

BRANCH_RE = re.compile(r'^(.*?\b(?:j[a-z]*|call)\b.*?)\b0x[0-9a-f]+(<[^>]*>)?$')

def disasm(bin_path, symbol):
    info = syms(bin_path).get(symbol)
    if not info: return []
    start = info[3]; stop = start + info[1]
    out = run("objdump -d --no-show-raw-insn --start-address=0x{:x} --stop-address=0x{:x} '{}'".format(start, stop, bin_path))
    lines = []
    for line in out.splitlines():
        m = re.match(r'^\s*[0-9a-f]+:\s*(.*)$', line)
        if m: lines.append(m.group(1).strip())
    return lines

def norm(l):
    out = []
    for x in l:
        x = re.sub(r'0x[0-9a-f]+<[^>]*>', '<T>', x)
        x = re.sub(r'0x[0-9a-f]+', '0xX', x)
        out.append(x)
    return out

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
    na, nb = norm(a), norm(b)
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
