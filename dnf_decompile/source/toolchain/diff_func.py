#!/usr/bin/env python3
"""Normalized instruction-level diff of symbol(s): original vs our build.

Normalization: strips address prefixes, normalizes only direct branch/call
target addresses (unified caliber, compare_common.py), and marks the differing
lines so a reviewer can focus on real differences (constants, registers, field
offsets, call targets, structure) instead of layout shifts.

反汇编走 compare_common.load_disasm_cached（mtime 缓存），逐符号审查不再
重复起 objdump 子进程；批量模式单进程内连续输出多个符号。

Usage:
  diff_func.py <symbol> [--bin monitor|guild|...]
  diff_func.py --batch <symbols.txt> [--bin monitor] [--out DIR]
"""
import re
import subprocess
import sys
import difflib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import norm_line, load_disasm_cached

ROOT = Path('/home/loyieking/dnf_workspace')
BINS = {
    'monitor': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r',
                ROOT / 'dnf_decompile/build/monitor/df_monitor_r'),
    'guild': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/guild/df_guild_r',
              ROOT / 'dnf_decompile/build/guild/df_guild_r'),
    'auction': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/auction/df_auction_r',
                ROOT / 'dnf_decompile/build/auction/df_auction_r'),
    'point': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/point/df_point_r',
              ROOT / 'dnf_decompile/build/point/df_point_r'),
    'stun': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/stun/df_stun_r',
             ROOT / 'dnf_decompile/build/stun/df_stun_r'),
    'channel': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/channel/df_channel_r',
                ROOT / 'dnf_decompile/build/channel/df_channel_r'),
    'bridge': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/bridge/df_bridge_r',
               ROOT / 'dnf_decompile/build/bridge/df_bridge_r'),
    'statics': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/statics/df_statics_r',
                ROOT / 'dnf_decompile/build/statics/df_statics_r'),
    'relay': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/relay/df_relay_r',
              ROOT / 'dnf_decompile/build/relay/df_relay_r'),
    'coserver': (ROOT / 'dnf_installer/build/dnf_data/home/template/neople/coserver/df_coserver_r',
                 ROOT / 'dnf_decompile/build/coserver/df_coserver_r'),
    'game': (ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r',
             ROOT / 'dnf_decompile/build/game/df_game_r'),
}
DEFAULT_BIN = 'monitor'


def mnemonic(t):
    return t.split()[0]


def diff_symbol(orig, new):
    """给定两侧 (addr, 指令文本) 列表，返回标注 diff 的文本行列表。"""
    out = []
    if not orig and not new:
        return ['NO DISASSEMBLY IN EITHER']
    out.append('orig={} insns, new={} insns'.format(len(orig), len(new)))
    o_lines = [norm_line(x[1]) for x in orig]
    n_lines = [norm_line(x[1]) for x in new]
    sm = difflib.SequenceMatcher(a=o_lines, b=n_lines, autojunk=False)
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            for k in range(i1, i2):
                out.append('  same  {:6s} | {}'.format(orig[k][0], o_lines[k]))
            continue
        o = [(o_lines[x], orig[x][0]) for x in range(i1, i2)]
        n = [(n_lines[x], new[x][0]) for x in range(j1, j2)]
        oi = ni = 0
        while oi < len(o) or ni < len(n):
            if oi < len(o) and ni < len(n) and mnemonic(o[oi][0]) == mnemonic(n[ni][0]):
                out.append('! opnd  {:6s} | orig: {}'.format(o[oi][1], o[oi][0]))
                out.append('!       {:6s} | new : {}'.format(n[ni][1], n[ni][0]))
                oi += 1
                ni += 1
            elif oi < len(o) and (ni >= len(n) or mnemonic(o[oi][0]) != mnemonic(n[ni][0])):
                out.append('! only  {:6s} | orig: {}'.format(o[oi][1], o[oi][0]))
                oi += 1
            elif ni < len(n):
                out.append('! only  {:6s} | new : {}'.format(n[ni][1], n[ni][0]))
                ni += 1
            else:
                break
    return out


def main():
    args = sys.argv[1:]
    bin_name = DEFAULT_BIN
    symbols = []
    batch_file = None
    out_dir = None
    new_bin_override = None
    i = 0
    while i < len(args):
        if args[i] == '--bin' and i + 1 < len(args):
            bin_name = args[i + 1]
            i += 2
        elif args[i] == '--batch' and i + 1 < len(args):
            batch_file = args[i + 1]
            i += 2
        elif args[i] == '--out' and i + 1 < len(args):
            out_dir = args[i + 1]
            i += 2
        elif args[i] == '--new-bin' and i + 1 < len(args):
            new_bin_override = args[i + 1]
            i += 2
        else:
            symbols.append(args[i])
            i += 1
    if batch_file:
        with open(batch_file, encoding='utf-8') as f:
            symbols = [ln.strip() for ln in f if ln.strip() and not ln.startswith('#')]
    if not symbols:
        print(__doc__)
        return
    if bin_name not in BINS:
        print('unknown bin: {} (use {})'.format(bin_name, ', '.join(sorted(BINS))))
        return
    orig_path, new_path = BINS[bin_name]
    if new_bin_override:
        new_path = Path(new_bin_override).resolve()
    o_dis = load_disasm_cached(str(orig_path))
    n_dis = load_disasm_cached(str(new_path))
    if out_dir:
        from pathlib import Path as _P
        _P(out_dir).mkdir(parents=True, exist_ok=True)
    for symbol in symbols:
        if out_dir:
            fname = symbol.replace('/', '_').replace('*', '_')
            with open(str(_P(out_dir) / (fname + '.diff')), 'w', encoding='utf-8') as f:
                f.write('############ {} ############\n'.format(symbol))
                f.write('\n'.join(diff_symbol(o_dis.get(symbol, []), n_dis.get(symbol, []))) + '\n')
        else:
            print('############ {} ############'.format(symbol))
            for ln in diff_symbol(o_dis.get(symbol, []), n_dis.get(symbol, [])):
                print(ln)


if __name__ == '__main__':
    main()
