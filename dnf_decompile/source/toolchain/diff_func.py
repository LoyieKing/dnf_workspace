#!/usr/bin/env python3
"""Normalized instruction-level diff of one symbol: original vs our build.

Normalization: strips address prefixes, normalizes only direct branch/call
target addresses (unified caliber, compare_common.py), and marks the differing
lines so a reviewer can focus on real differences (constants, registers, field
offsets, call targets, structure) instead of layout shifts.

Usage: diff_func.py <symbol> [--bin monitor|guild|auction|point|stun|channel|bridge|statics|relay|coserver] [--decompile]
"""
import re
import subprocess
import sys
import difflib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_line

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
BINS = {
    'monitor': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r',
                ROOT / 'dnf_decompile/source/build-monitor/df_monitor_r'),
    'guild': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r',
              ROOT / 'dnf_decompile/source/build-guild/df_guild_r'),
    'auction': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/auction/df_auction_r',
                ROOT / 'dnf_decompile/source/build-auction/df_auction_r'),
    'point': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/point/df_point_r',
              ROOT / 'dnf_decompile/source/build-point/df_point_r'),
    'stun': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/stun/df_stun_r',
             ROOT / 'dnf_decompile/source/build-stun/df_stun_r'),
    'channel': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/channel/df_channel_r',
                ROOT / 'dnf_decompile/source/build-channel/df_channel_r'),
    'bridge': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/bridge/df_bridge_r',
               ROOT / 'dnf_decompile/source/build-bridge/df_bridge_r'),
    'statics': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/statics/df_statics_r',
                ROOT / 'dnf_decompile/source/build-statics/df_statics_r'),
    'relay': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/relay/df_relay_r',
              ROOT / 'dnf_decompile/source/build-relay/df_relay_r'),
    'coserver': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/coserver/df_coserver_r',
                 ROOT / 'dnf_decompile/source/build-coserver/df_coserver_r'),
}
DEFAULT_BIN = 'monitor'


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
    args = sys.argv[1:]
    bin_name = DEFAULT_BIN
    symbol = None
    i = 0
    while i < len(args):
        if args[i] == '--bin' and i + 1 < len(args):
            bin_name = args[i + 1]
            i += 2
        else:
            symbol = args[i]
            i += 1
    if not symbol:
        print(__doc__)
        return
    if bin_name not in BINS:
        print('unknown bin: {} (use {})'.format(bin_name, ', '.join(sorted(BINS))))
        return
    orig_path, new_path = BINS[bin_name]
    orig = disasm_insns(str(orig_path), symbol)
    new = disasm_insns(str(new_path), symbol)
    print('############ {} ############'.format(symbol))
    print('orig={} insns, new={} insns'.format(len(orig), len(new)))
    if not orig and not new:
        print('NO DISASSEMBLY IN EITHER')
        return

    # 序列对齐：以严格口径归一化文本为单元，difflib 求最长公共子序列；
    # 相同行 -> same，同助记符不同操作数 -> opnd，单侧存在 -> only
    o_lines = [x[1] for x in orig]
    n_lines = [x[1] for x in new]
    sm = difflib.SequenceMatcher(a=o_lines, b=n_lines, autojunk=False)
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            for k in range(i1, i2):
                print('  same  {:6s} | {}'.format(orig[k][0], orig[k][1]))
            continue
        # 先尝试按助记符配对（opnd），剩余为 only
        o = [(x[1], x[0]) for x in orig[i1:i2]]
        n = [(x[1], x[0]) for x in new[j1:j2]]
        oi = ni = 0
        while oi < len(o) or ni < len(n):
            if oi < len(o) and ni < len(n) and mnemonic(o[oi][0]) == mnemonic(n[ni][0]):
                print('! opnd  {:6s} | orig: {}'.format(o[oi][1], o[oi][0]))
                print('!       {:6s} | new : {}'.format(n[ni][1], n[ni][0]))
                oi += 1
                ni += 1
            elif oi < len(o) and (ni >= len(n) or mnemonic(o[oi][0]) != mnemonic(n[ni][0])):
                print('! only  {:6s} | orig: {}'.format(o[oi][1], o[oi][0]))
                oi += 1
            elif ni < len(n):
                print('! only  {:6s} | new : {}'.format(n[ni][1], n[ni][0]))
                ni += 1
            else:
                break


if __name__ == '__main__':
    main()
