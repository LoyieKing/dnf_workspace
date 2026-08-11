#!/usr/bin/env python3
"""Compile one coserver TU with c5r52 (4.1.2-52) and report per-function
verdicts vs ORIG for the target md functions (lenient normalization)."""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain'
ORIG = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/coserver/df_coserver_r')
OBJ = Path('/tmp/coserver_c5_one.o')

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


def disasm_slice(bin_path, name):
    s = syms(bin_path).get(name)
    if not s:
        return []
    out = run("objdump -d --no-show-raw-insn --start-address=0x%x --stop-address=0x%x '%s'"
              % (s[0], s[0] + s[1], bin_path))
    lines = []
    for line in out.splitlines():
        m = re.match(r'^\s*[0-9a-f]+:\s+(.*)$', line)
        if m:
            lines.append(m.group(1).strip())
    return lines


def norm_o(line):
    if not _BRANCH_RE.match(line):
        return line
    line = re.sub(r'\s*<[^>]*>', '', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])0x[0-9a-f]+(?=$|\s)', '<T>', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])[0-9a-f]+(?=$|\s)', '<T>', line)
    return line


def mnemonics(insns):
    return [x.split()[0] for x in insns]


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


def main():
    base = sys.argv[1]
    cpp = ROOT / 'source/DNFServer/GameServer/COServer' / (base + '.cpp')
    if not cpp.exists():
        cpp = ROOT / 'source/DNFServer/ServerCommon' / (base + '.cpp')
    wrapper = TOOL / 'cmake/dnf_c5r52_gxx.sh'
    r = subprocess.run("cd '{}' && '{}' {} -c '{}' -o '{}'".format(
        cpp.parent, wrapper, C5_FLAGS, cpp.name, OBJ),
        shell=True, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if r.returncode != 0:
        print('COMPILE FAIL:', r.stdout[:400])
        return 1
    md_dir = ROOT / 'function_reports/coserver'
    targets = [p.name[:-3] for p in sorted(md_dir.glob('*.md')) if p.name != 'README.md']
    obj_syms = syms(str(OBJ))
    ours_bin = ROOT / 'build/coserver/df_coserver_r'
    ours_syms = syms(str(ours_bin))
    print('%-14s %-6s %-6s %s' % ('func', 'c5now', 'c6now', 'name'))
    for name in sorted(targets):
        if name not in obj_syms:
            continue
        o_ins = [norm_o(x) for x in disasm_slice(str(ORIG), name)]
        b5 = [norm_o(x) for x in disasm_slice(str(OBJ), name)]
        b6 = [norm_o(x) for x in disasm_slice(str(ours_bin), name)]

        def cls(b):
            if o_ins == b:
                return 'IDENT'
            if mnemonics(o_ins) == mnemonics(b):
                return 'NEAR'
            return 'DIFF'
        print('%-14s %-6s %-6s %s' % (name, cls(b5), cls(b6), base), flush=True)
    return 0


if __name__ == '__main__':
    sys.exit(main())
