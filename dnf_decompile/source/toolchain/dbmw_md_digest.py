#!/usr/bin/env python3
"""把 dbmw md 的伪代码化 diff 压缩成「变更行摘要」，便于批量排查。

用法:
  python3 dbmw_md_digest.py [--min N] [--max N] [--sym 子串]
"""
import argparse
import os
import re


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--min', type=int, default=0)
    ap.add_argument('--max', type=int, default=10**9)
    ap.add_argument('--sym')
    args = ap.parse_args()
    d = 'function_reports/dbmw'
    rows = []
    for f in sorted(os.listdir(d)):
        if not f.endswith('.md') or f == 'README.md':
            continue
        if args.sym and args.sym not in f:
            continue
        txt = open(os.path.join(d, f), errors='replace').read()
        m = re.search(r'\|\s*dbmw\s*\|\s*(\w+)\s*\|', txt)
        status = m.group(1) if m else '?'
        diff = txt.split('```diff', 1)[1].split('```', 1)[0] if '```diff' in txt else ''
        chg = [l for l in diff.splitlines()
               if l.startswith(('+', '-')) and not l.startswith(('+++', '---'))]
        if args.min <= len(chg) <= args.max:
            rows.append((len(chg), status, f[:-3], chg))
    for n, status, sym, chg in sorted(rows):
        print('==== {} [{}] {} lines'.format(sym, status, n))
        for l in chg[:40]:
            print('   ', l)


if __name__ == '__main__':
    main()
