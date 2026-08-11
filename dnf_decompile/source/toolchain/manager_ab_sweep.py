#!/usr/bin/env python3
"""manager per-TU compiler A/B sweep (round 5).

For each md-target function, locate its TU (cpp), compile that TU with
GCC 4.4.7 (c6), 4.4.6-3 (c6446r), 4.4.4-13 (c6444r) and 4.1.2-52 (c5r52),
then compare the function's disassembly against ORIG under the same
normalization as compare_common.norm_identical (branch/call targets -> <T>).
"""
import bisect
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/manager/df_manager_r')
AB = Path('/tmp/manager_ab')

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm, norm_identical


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True,
                                   stderr=subprocess.DEVNULL)


def syms(bin_path):
    out = run("nm -S --defined-only '{}'".format(bin_path))
    rows = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        addr, size, typ, name = p[0], p[1], p[2], p[3]
        if typ not in {'T', 't', 'W', 'w'}:
            continue
        rows[name] = (int(addr, 16), int(size, 16))
    return rows


_ORIG_DIS = None


def orig_disasm(name):
    global _ORIG_DIS
    if _ORIG_DIS is None:
        _ORIG_DIS = load_disasm(str(ORIG))
    s = syms(str(ORIG)).get(name)
    if not s:
        return []
    insn, addrs = _ORIG_DIS
    lo = bisect.bisect_left(addrs, s[0])
    hi = bisect.bisect_left(addrs, s[0] + s[1])
    return [insn[addrs[i]] for i in range(lo, hi)]


def obj_disasm(obj, name):
    s = syms(obj).get(name)
    if not s:
        return []
    out = run("objdump -d --no-show-raw-insn '{}'".format(obj))
    by_addr = {}
    for line in out.splitlines():
        m2 = re.match(r'^\s*([0-9a-f]+):\s+([^\t]+)', line)
        if m2:
            by_addr[int(m2.group(1), 16)] = m2.group(2).strip()
    return [by_addr[a] for a in sorted(by_addr) if s[0] <= a < s[0] + s[1]]


def mnemonics(insns):
    return [x.split()[0] for x in insns]


SRC = ROOT / 'source'
COMMON = SRC / 'DNFServer/ServerCommon'
SVC = SRC / 'DNFServer/GameServer/Manager'
PACKET = SRC / 'shared/packet'
SHARED = SRC / 'shared'
MYSQL = SRC / 'Library3rd/MySQL'

INCLUDES = ("-I{common} -I{svc} -I{packet}/include -I{shared} "
            "-I{shared}/common/include -I{mysql}/include "
            "-I{mysql}/mysys -I{mysql}/strings").format(
                common=COMMON, svc=SVC, packet=PACKET, shared=SHARED,
                mysql=MYSQL)
DEFINES = "-DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MANAGER"

C6_HDRS = ("-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
           "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
           "-isystem /tmp/c6root/usr/include/c++/4.4.7 "
           "-isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux "
           "-isystem /tmp/c6root/usr/include/c++/4.4.7/backward "
           "-isystem /tmp/c6root/usr/include")
C444_HDRS = ("-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
             "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
             "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4 "
             "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/i686-redhat-linux "
             "-isystem /tmp/lsd44/v4.4.4/usr/include/c++/4.4.4/backward "
             "-isystem /tmp/c6root/usr/include")
C5_HDRS = ("-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include "
           "-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed "
           "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2 "
           "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux "
           "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/backward "
           "-isystem /tmp/c5r52tool/usr/include")


def variant_flags(variant):
    if variant == 'c6':
        return (C6_HDRS, '-std=gnu++0x', 'dnf_c6_gxx.sh')
    if variant == 'c6446r':
        return (C6_HDRS, '-std=gnu++0x', 'dnf_c6446r_gxx.sh')
    if variant == 'c6444r':
        return (C444_HDRS, '-std=gnu++0x', 'dnf_c6444r_gxx.sh')
    if variant == 'c5r52':
        return (C5_HDRS, '-std=gnu++98', 'dnf_c5r52_gxx.sh')
    raise ValueError(variant)


def compile_tu(cpp, variant):
    out_dir = AB / variant
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(cpp).stem + '.o')
    hdrs, std, wrapper = variant_flags(variant)
    wrapper = TOOL / 'cmake' / wrapper
    cmd = ("'{}' -m32 -O0 -fno-enforce-eh-specs -nostdinc {} {} {} {} "
           "-c '{}' -o '{}'").format(wrapper, hdrs, INCLUDES, DEFINES, std,
                                     cpp, obj)
    subprocess.check_output(cmd, shell=True, text=True,
                            stderr=subprocess.STDOUT)
    return obj


def main():
    md_dir = ROOT / 'function_reports/manager'
    targets = [p.name[:-3] for p in sorted(md_dir.glob('*.md'))
               if p.name != 'README.md']
    cmake_objs = list((ROOT / 'build/manager/CMakeFiles/manager.dir').rglob('*.o'))
    tu_of = {}
    for name in targets:
        for obj in cmake_objs:
            if name in syms(obj):
                rel = obj.relative_to(ROOT / 'build/manager/CMakeFiles/manager.dir')
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
        print('no TU for:', missing)

    variants = ('c6', 'c6446r', 'c6444r', 'c5r52')
    per_tu = defaultdict(lambda: defaultdict(int))
    per_fun = {}
    for name, src in sorted(tu_of.items()):
        o_ins = norm_identical(orig_disasm(name))
        if not o_ins:
            per_fun[name] = ('NO_ORIG', None)
            continue
        best = None
        for variant in variants:
            try:
                obj = compile_tu(src, variant)
            except subprocess.CalledProcessError as e:
                per_fun.setdefault(name, ('COMPILE_FAIL', variant))
                per_tu[src.name][variant + ':FAIL'] += 1
                continue
            b = norm_identical(obj_disasm(obj, name))
            if not b:
                per_tu[src.name][variant + ':NOOBJ'] += 1
                continue
            if o_ins == b:
                cls = 'IDENT'
            elif mnemonics(o_ins) == mnemonics(b):
                cls = 'NEAR'
            else:
                cls = 'DIFF'
            per_tu[src.name][variant + ':' + cls] += 1
            order = {'IDENT': 0, 'NEAR': 1, 'DIFF': 2}
            if best is None or order[cls] < order[best[1]]:
                best = (variant, cls)
        per_fun[name] = best

    print('\n=== per-TU summary ===')
    for tu, cnt in sorted(per_tu.items()):
        print(tu, dict(cnt))
    print('\n=== per-function best verdict ===')
    for name in sorted(targets):
        v = per_fun.get(name)
        print(v[0] if v else '??', v[1] if v else '??', '\t', name)


if __name__ == '__main__':
    main()
