#!/usr/bin/env python3
"""把“统计口径问题”记录到 function_reports/<svc>/caliber_issues.csv。

用法: record_issue.py <svc> <symbol> [category] [reason...]
自动从该函数的 md 中提取 demangled 名与 diff 摘录作为 detail。
"""
import csv
import re
import sys
from datetime import date
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile')


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    svc = sys.argv[1]
    symbol = sys.argv[2]
    category = sys.argv[3] if len(sys.argv) > 3 else 'caliber_issue'
    reason = ' '.join(sys.argv[4:])
    svc_dir = ROOT / 'function_reports' / svc
    csv_path = svc_dir / 'caliber_issues.csv'
    demangled = ''
    excerpt = ''
    md_path = svc_dir / (symbol + '.md')
    if not md_path.exists():
        for f in svc_dir.glob('*.md'):
            if f.stem == symbol:
                md_path = f
                break
    if md_path.exists():
        text = md_path.read_text(encoding='utf-8', errors='replace')
        m = re.search(r'^`(.+)`\s*$', text, re.M)
        if m:
            demangled = m.group(1)
        m = re.search(r'```diff.*?```', text, re.S)
        if m:
            lines = m.group(0).splitlines()
            excerpt = '\n'.join(lines[:12])
    new = not csv_path.exists()
    with csv_path.open('a', newline='', encoding='utf-8') as fh:
        w = csv.writer(fh)
        if new:
            w.writerow(['symbol', 'demangled', 'category', 'reason',
                        'diff_excerpt', 'date'])
        w.writerow([symbol, demangled, category, reason, excerpt,
                    date.today().isoformat()])
    print('recorded', svc, symbol, '->', csv_path)
    return 0


if __name__ == '__main__':
    sys.exit(main())
