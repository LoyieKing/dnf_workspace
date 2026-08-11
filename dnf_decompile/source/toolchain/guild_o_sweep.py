#!/usr/bin/env python3
"""guild per-TU optimization-level sweep (round 3).

For each TU that defines md targets, compile it at -O0/-O1/-O2 with the
c6444r (4.4.4-13 backend) wrapper and classify each md function against ORIG
under a layout-insensitive normalized text (branch/call targets -> <T>,
<sym+off> suffixes stripped).  Reports per-TU per-level IDENT/NEAR counts so
the right optimization level can be assigned per cpp file.
"""
import os
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r')
AB = Path('/tmp/guild_o_sweep')
OBJ_ROOT = ROOT / 'build/guild/CMakeFiles/guild.dir'

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm


def run(cmd):
    return subprocess.run(cmd, shell=True, text=True,
                          capture_output=True).stdout


def syms(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in ('T', 't', 'W', 'w'):
            continue
        rows[name] = (int(addr, 16), int(size, 16))
    return rows


_ORIG_DIS = None
_ORIG_SYMS = None


def orig_disasm(name):
    global _ORIG_DIS, _ORIG_SYMS
    if _ORIG_DIS is None:
        _ORIG_DIS = load_disasm(str(ORIG))
        _ORIG_SYMS = syms(str(ORIG))
    s = _ORIG_SYMS.get(name)
    if not s:
        return []
    insn, addrs = _ORIG_DIS
    import bisect
    lo = bisect.bisect_left(addrs, s[0])
    hi = bisect.bisect_left(addrs, s[0] + s[1])
    return [insn[addrs[i]] for i in range(lo, hi)]


def obj_syms(obj_path):
    return syms(obj_path)


def obj_disasm(obj, name):
    s = obj_syms(obj).get(name)
    if not s:
        return []
    out = run("objdump -d --no-show-raw-insn '{}'".format(obj))
    by_addr = {}
    for line in out.splitlines():
        m2 = re.match(r'^\s*([0-9a-f]+):\s+([^\t]+)', line)
        if m2:
            by_addr[int(m2.group(1), 16)] = m2.group(2).strip()
    return [by_addr[a] for a in sorted(by_addr) if s[0] <= a < s[0] + s[1]]


_BRANCH_RE = re.compile(r"^(j[a-z]*|callq?|loop[a-z]*)\b")


def norm_o(line):
    if not _BRANCH_RE.match(line):
        return line
    line = re.sub(r'\s*<[^>]*>', '', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])0x[0-9a-f]+(?=$|\s)', '<T>', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])[0-9a-f]+(?=$|\s)', '<T>', line)
    return line


def mnemonics(insns):
    return [x.split()[0] for x in insns]


FLAGS_BASE = ("-m32 -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL "
              "-DBOOST_DISABLE_ASSERTS -DDNF_SVC_GUILD -std=gnu++0x "
              "-isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
              "-isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
              "-isystem/tmp/lsd44/v4.4.4/usr/include/c++/4.4.4 "
              "-isystem/tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/i686-redhat-linux "
              "-isystem/tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/backward "
              "-isystem/tmp/c6root/usr/include "
              "-I{ROOT}/source/DNFServer/ServerCommon "
              "-I{ROOT}/source/DNFServer/GameServer/Guild "
              "-I{ROOT}/source/shared/packet/include "
              "-I{ROOT}/source/shared -I{ROOT}/source/shared/common/include")


def compile_tu(src, level):
    out_dir = AB / level
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(src).stem + '.o')
    if obj.exists():
        return obj
    wrapper = TOOL / 'cmake' / 'dnf_c6444r_gxx.sh'
    flags = FLAGS_BASE.format(ROOT=ROOT) + ' -O' + level
    cmd = "'{}' {} -c '{}' -o '{}'".format(wrapper, flags, src, obj)
    r = subprocess.run(cmd, shell=True, text=True,
                       capture_output=True)
    if r.returncode != 0:
        return None
    return obj


def main():
    md_dir = ROOT / 'function_reports/guild'
    targets = {p.name[:-3] for p in md_dir.glob('*.md')
               if p.name != 'README.md'}
    cmake_objs = list(OBJ_ROOT.rglob('*.o'))
    tu_of = {}
    for name in targets:
        for obj in cmake_objs:
            if name in obj_syms(obj):
                rel = obj.relative_to(OBJ_ROOT)
                parts = rel.parts
                try:
                    idx = parts.index('source')
                except ValueError:
                    continue
                src = ROOT / Path(re.sub(r'\.o$', '', str(Path(*parts[idx:]))))
                tu_of[name] = src
                break
    missing = [n for n in targets if n not in tu_of]
    if missing:
        print('no TU for:', missing[:20])

    per_tu = defaultdict(lambda: defaultdict(lambda: defaultdict(int)))
    verdicts = {}
    tu_srcs = sorted(set(tu_of.values()), key=str)
    for src in tu_srcs:
        fn = [n for n, s in tu_of.items() if s == src]
        for level in ('0', '1', '2'):
            obj = compile_tu(src, level)
            if obj is None:
                continue
            for name in fn:
                o_ins = [norm_o(x) for x in orig_disasm(name)]
                if not o_ins:
                    verdicts[name] = ('NO_ORIG', None)
                    continue
                b = [norm_o(x) for x in obj_disasm(obj, name)]
                if not b:
                    verdicts[name] = ('NO_OBJ', level)
                    continue
                if o_ins == b:
                    cls = 'IDENT'
                elif mnemonics(o_ins) == mnemonics(b):
                    cls = 'NEAR'
                else:
                    cls = 'DIFF'
                per_tu[src.name][level][cls] += 1
    print('\n=== per-TU -O sweep (IDENT/NEAR per level) ===')
    for tu in sorted(per_tu):
        d = per_tu[tu]
        best = max(d, key=lambda l: (d[l]['IDENT'], d[l]['NEAR']))
        print('{:<32} O0={} O1={} O2={}  best={}'.format(
            tu[:32],
            dict(d.get('0', {})), dict(d.get('1', {})),
            dict(d.get('2', {})), best))


if __name__ == '__main__':
    main()
