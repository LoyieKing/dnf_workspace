#!/usr/bin/env python3
"""Normalized instruction-level diff of one symbol: original vs our build.

Normalization: strips address prefixes, normalizes only direct branch/call
target addresses (unified caliber, compare_common.py), and marks the differing
lines so a reviewer can focus on real differences (constants, registers, field
offsets, call targets, structure) instead of layout shifts.

Usage: diff_func.py <symbol> [--decompile]
"""
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_line

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/source/build-verify-community/df_community_r'


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def disasm_insns(bin_path, symbol):
    try:
        out = run("objdump -d --no-show-raw-insn --disassemble='{}' '{}'".format(symbol, bin_path))
    except Exception:
        return []
    insns = []
    for line in out.splitlines():
        m = re.match(r'^\s*([0-9a-fA-F]+):\s+(.*)$', line)
        if not m:
            continue
        txt = m.group(2).strip()
        if not txt:
            continue
        txt = norm_line(txt)
        insns.append((m.group(1), txt))
    return insns


def mnemonic(t):
    return t.split()[0]


def main():
    symbol = sys.argv[1]
    orig = disasm_insns(ORIG, symbol)
    new = disasm_insns(NEW, symbol)
    print('############ {} ############'.format(symbol))
    print('orig={} insns, new={} insns'.format(len(orig), len(new)))
    if not orig and not new:
        print('NO DISASSEMBLY IN EITHER')
        return

    # diff with a simple alignment on mnemonics, keeping positional context
    i = j = 0
    while i < len(orig) or j < len(new):
        if i < len(orig) and j < len(new) and orig[i][1] == new[j][1]:
            print('  {}  {:6s} | {}'.format('same', orig[i][0], orig[i][1]))
            i += 1
            j += 1
        elif i < len(orig) and j < len(new) and mnemonic(orig[i][1]) == mnemonic(new[j][1]):
            print('! {}  {:6s} | orig: {}'.format('opnd', orig[i][0], orig[i][1]))
            print('! {}  {:6s} | new : {}'.format('', new[j][0], new[j][1]))
            i += 1
            j += 1
        elif j < len(new) and (i >= len(orig) or j < len(new)) and (i < len(orig) and mnemonic(new[j][1]) == mnemonic(orig[i][1])):
            # new has same mnemonic as next orig insn but orig may have extra insns
            if i < len(orig):
                print('! {}  {:6s} | orig: {}'.format('only', orig[i][0], orig[i][1]))
                i += 1
            else:
                print('! {}  {:6s} | new : {}'.format('only', new[j][0], new[j][1]))
                j += 1
        elif i < len(orig) and (j >= len(new) or mnemonic(orig[i][1]) != mnemonic(new[j][1])):
            print('! {}  {:6s} | orig: {}'.format('only', orig[i][0], orig[i][1]))
            i += 1
        elif j < len(new):
            print('! {}  {:6s} | new : {}'.format('only', new[j][0], new[j][1]))
            j += 1
        else:
            break


if __name__ == '__main__':
    main()
