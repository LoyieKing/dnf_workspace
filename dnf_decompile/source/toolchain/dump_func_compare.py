#!/usr/bin/env python3
"""Dump side-by-side disassembly of one symbol from original vs our rebuild.

Usage: dump_func_compare.py <symbol> [--decompile]
  --decompile: also run Ghidra headless decompile of the original function
               and print it (uses a cached project decompile when available).
"""
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/community/df_community_r'
NEW = ROOT / 'dnf_decompile/build/community/df_community_r'
GHIDRA = Path('/mnt/d/Works/ghidra/support/analyzeHeadless')
PROJ = ROOT / 'dnf_decompile/dnf_project.rep'
SCRIPT = ROOT / 'dnf_decompile/source/toolchain/ghidra_decompile_targets.java'
DECOMP_DIR = Path('/tmp/dfc_decomp')


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def disasm(bin_path, symbol):
    try:
        out = run("objdump -d --no-show-raw-insn --disassemble='{}' '{}'".format(symbol, bin_path))
    except Exception as e:
        return 'ERROR: {}'.format(e)
    return out


def decompile_original(symbol):
    """Decompile one function from the original via Ghidra headless."""
    DECOMP_DIR.mkdir(exist_ok=True)
    targets = DECOMP_DIR / 'targets.txt'
    out = DECOMP_DIR / 'out.txt'
    targets.write_text(symbol + '\n')
    if out.exists():
        out.unlink()
    cmd = ("'{}' '{}' dnf_project -process df_community_r -readOnly "
           "-noanalysis -postScript '{}' '{}' '{}' -scriptPath '{}'").format(
        GHIDRA, PROJ, SCRIPT, targets, out, SCRIPT.parent)
    subprocess.run(cmd, shell=True, check=False,
                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=300)
    if out.exists():
        return out.read_text(errors='replace')
    return '/* decompile failed */\n'


def main():
    symbol = sys.argv[1]
    want_decomp = '--decompile' in sys.argv[2:]
    print('############ {} ############'.format(symbol))
    print('==== ORIGINAL ({}) ===='.format(ORIG))
    print(disasm(ORIG, symbol))
    print('==== OUR BUILD ({}) ===='.format(NEW))
    print(disasm(NEW, symbol))
    if want_decomp:
        print('==== ORIGINAL DECOMPILED (Ghidra) ====')
        print(decompile_original(symbol))


if __name__ == '__main__':
    main()
