#!/usr/bin/env python3
"""Targeted per-TU A/B for coserver: compile chosen TUs with c5r52 vs c6446r
and compare target functions against ORIG (layout-insensitive normalized text)."""
import os
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/coserver/df_coserver_r')
AB = Path('/tmp/coserver_ab_t')

sys.path.insert(0, str(TOOL))
from compare_common import load_disasm

_BRANCH_RE = re.compile(r"^(j[a-z]*|callq?|loop[a-z]*)\b")


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


def norm_o(line):
    if not _BRANCH_RE.match(line):
        return line
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
    out_dir = AB / variant
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(cpp).stem + '.o')
    flags = C6_FLAGS if variant == 'c6' else C5_FLAGS
    wrapper = TOOL / 'cmake' / ('dnf_c6446r_gxx.sh' if variant == 'c6' else 'dnf_c5r52_gxx.sh')
    cmd = "'{}' {} -c '{}' -o '{}'".format(wrapper, flags, cpp, obj)
    r = subprocess.run(cmd, shell=True, text=True,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if r.returncode != 0:
        raise RuntimeError(r.stdout[:300])
    return obj


def main():
    tus = sys.argv[1:]
    if not tus:
        print('usage: coserver_tu_ab_target.py <cpp basename>...')
        return
    src_dir = ROOT / 'source/DNFServer/GameServer/COServer'
    common_dir = ROOT / 'source/DNFServer/ServerCommon'
    per_tu = defaultdict(lambda: defaultdict(int))
    for base in tus:
        cpp = src_dir / (base + '.cpp')
        if not cpp.exists():
            cpp = common_dir / (base + '.cpp')
        print('# TU', cpp.name, flush=True)
        for variant in ('c6', 'c5'):
            try:
                obj = compile_tu(cpp, variant)
            except RuntimeError as e:
                print('  compile fail', variant, str(e)[:120], flush=True)
                continue
            for name in sorted(syms(str(obj))):
                if not name.startswith('_ZN') and not name.startswith('_ZNK') \
                   and not name.startswith('_Z'):
                    continue
                o_ins = [norm_o(x) for x in orig_disasm(name)]
                if not o_ins:
                    continue
                b = [norm_o(x) for x in obj_disasm(obj, name)]
                if not b:
                    continue
                if o_ins == b:
                    cls = 'IDENT'
                elif mnemonics(o_ins) == mnemonics(b):
                    cls = 'NEAR'
                else:
                    cls = 'DIFF'
                per_tu[base][variant + ':' + cls] += 1
                if variant == 'c5':
                    tag = 'BEST5' if cls in ('IDENT', 'NEAR') else ''
                    print('  %-8s %-5s %s %s' % (variant, cls, name, tag),
                          flush=True)
        print(dict(per_tu[base]), flush=True)


if __name__ == '__main__':
    main()
