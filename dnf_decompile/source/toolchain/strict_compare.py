#!/usr/bin/env python3
"""严格口径（compare_common.CALIBER_VERSION=3）全量比对驱动。
用法: python3 strict_compare.py <orig> <new> <fnlist_prefix> [output_tag]
fnlist_prefix: /tmp 下 CU 函数表文件名前缀（如 'br_'、'ch_'、'auc_'）。
"""
import re, subprocess, sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_identical, norm_identical_ext, norm_identical_full

ORIG, NEW, PREFIX = sys.argv[1], sys.argv[2], sys.argv[3]
TAG = sys.argv[4] if len(sys.argv) > 4 else Path(NEW).stem

def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)

def syms(b):
    out = run("nm -S --defined-only '{}'".format(b))
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4 or p[2] not in 'TtWw':
            continue
        if p[3].startswith('.L'):
            continue
        r[p[3]] = (int(p[0], 16), int(p[1], 16))
    return r

def dis(b, name):
    info = syms(b).get(name)
    if not info:
        return []
    out = run("objdump -d --no-show-raw-insn --start-address=0x{:x} --stop-address=0x{:x} '{}'".format(
        info[0], info[0] + info[1], b))
    return [re.sub(r'^\s*[0-9a-f]+:\s*', '', l).strip()
            for l in out.splitlines() if re.match(r'\s*[0-9a-f]+:\s', l)]

proj = set()
for f in Path('/tmp').glob(PREFIX + '*_fns.txt'):
    for line in f.read_text(errors='replace').splitlines():
        m = re.match(r'\s*\d+\s+0x[0-9a-f]+\s+line=\s*\d+\s+.*\[(_Z[^]]*|main)\]', line)
        if m:
            proj.add(m.group(1))

def mnem(l):
    return [x.split()[0] for x in l if x.split()]

osym, nsym = syms(ORIG), syms(NEW)
stats = defaultdict(int)
stats_ext = defaultdict(int)
stats_full = defaultdict(int)
diffs = []
for name in sorted(proj):
    if name.startswith('_GLOBAL__I_') or name == '_Z41__static_initialization_and_destruction_0ii':
        continue
    if name not in osym:
        continue
    if name not in nsym:
        stats['MISSING'] += 1
        diffs.append((name, 'MISSING'))
        continue
    a, b = dis(ORIG, name), dis(NEW, name)
    if not a or not b:
        stats['EMPTY'] += 1
        continue
    if norm_identical(a) == norm_identical(b):
        stats['IDENTICAL'] += 1
        stats_ext['IDENTICAL'] += 1
        stats_full['IDENTICAL'] += 1
    elif mnem(a) == mnem(b):
        stats['NEAR'] += 1
        diffs.append((name, 'NEAR'))
        if norm_identical_ext(a) == norm_identical_ext(b):
            stats_ext['IDENTICAL'] += 1
        else:
            stats_ext['NEAR'] += 1
        if norm_identical_full(a) == norm_identical_full(b):
            stats_full['IDENTICAL'] += 1
        else:
            stats_full['NEAR'] += 1
    else:
        stats['DIFF'] += 1
        diffs.append((name, 'DIFF'))
        stats_ext['DIFF'] += 1
        stats_full['DIFF'] += 1

print('==', Path(ORIG).name, 'vs', Path(NEW).name)
print('project symbols:', len(proj))
print('strict :', dict(stats))
print('extended:', dict(stats_ext))
print('full    :', dict(stats_full))
out = Path('/tmp/dwarf_validate/strict_{}.txt'.format(TAG))
with out.open('w') as fh:
    for n, c in diffs:
        fh.write('{}\t{}\n'.format(c, n))
print('diffs written to', out)
