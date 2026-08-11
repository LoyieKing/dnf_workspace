#!/usr/bin/env python3
"""coserver per-TU compiler A/B harness (round 2).

For each md-target function, locate its TU (cpp), compile that TU with
GCC 4.4.6-3 (c6446r) and GCC 4.1.2-52 (c5r52), then compare the function's
disassembly against ORIG under a layout-insensitive normalized text
(branch/call targets -> <T>, including any <sym+off> suffix).
"""
import os
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/coserver/df_coserver_r')
AB = Path('/tmp/coserver_ab')

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


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


def obj_syms(obj_path):
    return syms(obj_path)


_ORIG_DIS = None


def orig_disasm(name):
    global _ORIG_DIS
    if _ORIG_DIS is None:
        _ORIG_DIS = load_disasm(str(ORIG))
    s = syms(str(ORIG)).get(name)
    if not s:
        return []
    insn, addrs = _ORIG_DIS
    import bisect
    lo = bisect.bisect_left(addrs, s[0])
    hi = bisect.bisect_left(addrs, s[0] + s[1])
    return [insn[addrs[i]] for i in range(lo, hi)]


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
    # strip <sym+off> suffix and any hex/bare target
    line = re.sub(r'\s*<[^>]*>', '', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])0x[0-9a-f]+(?=$|\s)', '<T>', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])[0-9a-f]+(?=$|\s)', '<T>', line)
    return line


def mnemonics(insns):
    return [x.split()[0] for x in insns]


C6_FLAGS = ("-m32 -O0 -std=gnu++0x -fno-enforce-eh-specs -nostdinc "
            "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include "
            "-isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed "
            "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6 "
            "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux "
            "-isystem /tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward "
            "-isystem /tmp/c6root/usr/include "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/ServerCommon "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/COServer "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/packet/include "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/common/include "
            "-DDF_NO_CODEPAGE")

C5_FLAGS = ("-m32 -O0 -fno-enforce-eh-specs -nostdinc "
            "-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include "
            "-isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed "
            "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2 "
            "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux "
            "-isystem /tmp/c5r52tool/usr/include/c++/4.1.2/backward "
            "-isystem /tmp/c5r52tool/usr/include "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/ServerCommon "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/COServer "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/packet/include "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared "
            "-I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/common/include "
            "-DDF_NO_CODEPAGE")


def compile_tu(cpp, variant):
    """Compile one cpp to /tmp/coserver_ab/<variant>/<basename>.o; returns path."""
    out_dir = AB / variant
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(cpp).stem + '.o')
    flags = C6_FLAGS if variant == 'c6' else C5_FLAGS
    wrapper = TOOL / 'cmake' / ('dnf_c6446r_gxx.sh' if variant == 'c6' else 'dnf_c5r52_gxx.sh')
    cmd = "'{}' {} -c '{}' -o '{}'".format(wrapper, flags, cpp, obj)
    subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.STDOUT)
    return obj


def main():
    md_dir = ROOT / 'function_reports/coserver'
    targets = [p.name[:-3] for p in sorted(md_dir.glob('*.md'))
               if p.name != 'README.md']
    # find TU per target from the c6 objects already compiled by CMake
    cmake_objs = list((ROOT / 'build/coserver/CMakeFiles/coserver.dir').rglob('*.o'))
    tu_of = {}
    for name in targets:
        for obj in cmake_objs:
            if name in obj_syms(obj):
                # map object path -> source cpp
                rel = obj.relative_to(ROOT / 'build/coserver/CMakeFiles/coserver.dir')
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

    verdicts = {}
    per_tu = defaultdict(lambda: defaultdict(int))
    for name, src in sorted(tu_of.items()):
        o_ins = norm_o_line_list(orig_disasm(name))
        if not o_ins:
            verdicts[name] = ('NO_ORIG', None)
            continue
        best = None
        for variant in ('c6', 'c5'):
            try:
                obj = compile_tu(src, variant)
            except subprocess.CalledProcessError as e:
                verdicts[name] = ('COMPILE_FAIL', variant)
                print('compile fail {} {}: {}'.format(variant, src.name,
                                                      e.output[:300]))
                continue
            b = norm_o_line_list(obj_disasm(obj, name))
            if not b:
                verdicts[name] = ('NO_OBJ', variant)
                continue
            if o_ins == b:
                cls = 'IDENT'
            elif mnemonics(o_ins) == mnemonics(b):
                cls = 'NEAR'
            else:
                cls = 'DIFF'
            per_tu[src.name][variant + ':' + cls] += 1
            if best is None or (cls == 'IDENT' and best[1] != 'IDENT') or \
               (cls == 'NEAR' and best[1] == 'DIFF'):
                best = (variant, cls)
        verdicts[name] = best
    print('\n=== per-TU summary ===')
    for tu, cnt in sorted(per_tu.items()):
        print(tu, dict(cnt))
    print('\n=== per-function verdict (c6 vs c5) ===')
    for name in sorted(targets):
        if name in verdicts:
            print(verdicts[name][0], verdicts[name][1], '\t', name)
        else:
            print('??', name)


def norm_o_line_list(insns):
    return [norm_o(x) for x in insns]


if __name__ == '__main__':
    main()
