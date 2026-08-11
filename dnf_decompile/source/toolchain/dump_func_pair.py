#!/usr/bin/env python3
"""Dump one function from ORIG and OURS binaries side by side (raw objdump text).

Usage: python3 dump_func_pair.py coserver <mangled> [--raw] [--norm]
"""
import argparse
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
SERVICES = {
    'coserver': ('coserver/df_coserver_r', 'build/coserver/df_coserver_r'),
}

_BRANCH_RE = re.compile(r"^(j[a-z]*|callq?|loop[a-z]*)\b")


def norm(line):
    if not _BRANCH_RE.match(line):
        return line
    line = re.sub(r'\s*<[^>]*>', '', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])0x[0-9a-f]+(?=$|\s)', '<T>', line)
    line = re.sub(r'(?<![0-9a-zA-Z$*#])[0-9a-f]+(?=$|\s)', '<T>', line)
    return line


def syms(bin_path):
    out = subprocess.check_output(
        ["nm", "-S", "--defined-only", str(bin_path)], text=True)
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


def disasm(bin_path, name):
    s = syms(bin_path).get(name)
    if not s:
        return []
    out = subprocess.check_output(
        ["objdump", "-d", "--no-show-raw-insn", "--start-address=0x%x"
         % s[0], "--stop-address=0x%x" % (s[0] + s[1]), str(bin_path)],
        text=True)
    lines = []
    for line in out.splitlines():
        m = re.match(r'^\s*[0-9a-f]+:\s+(.*)$', line)
        if m:
            lines.append(m.group(1).strip())
    return lines


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('svc')
    ap.add_argument('name')
    ap.add_argument('--norm', action='store_true')
    ap.add_argument('--side', action='store_true')
    args = ap.parse_args()
    orel, nrel = SERVICES[args.svc]
    orig = ROOT.parent / 'dnf_installer' / 'build' / 'dnf_data' / 'home' / \
        'template' / 'neople' / orel
    ours = ROOT / nrel
    o = disasm(orig, args.name)
    n = disasm(ours, args.name)
    if args.norm:
        o = [norm(x) for x in o]
        n = [norm(x) for x in n]
    print('==== ORIG (%d insns) ====' % len(o))
    for i, x in enumerate(o):
        print('%3d %s' % (i, x))
    print('==== OURS (%d insns) ====' % len(n))
    for i, x in enumerate(n):
        print('%3d %s' % (i, x))


if __name__ == '__main__':
    main()
