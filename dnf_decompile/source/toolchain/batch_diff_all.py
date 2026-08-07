#!/usr/bin/env python3
"""Batch-generate normalized diffs for all review batches (parallel).

Usage: batch_diff_all.py
Output: /tmp/review_all_diffs/<batch>/<symbol>.diff
"""
import csv
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile')
MANIFEST_DIR = ROOT / 'source/build-verify-community'
OUT_DIR = Path('/tmp/review_all_diffs')
DIFF_TOOL = ROOT / 'source/toolchain/diff_func.py'


def gen_diff(args):
    batch, symbol = args
    out_dir = OUT_DIR / batch
    out_dir.mkdir(parents=True, exist_ok=True)
    out_file = out_dir / (symbol.replace('/', '_').replace('*', '_') + '.diff')
    try:
        result = subprocess.run(
            [sys.executable, str(DIFF_TOOL), symbol],
            capture_output=True, text=True, timeout=60)
        text = result.stdout + result.stderr
    except Exception as e:
        text = 'ERROR: {}'.format(e)
    out_file.write_text(text, encoding='utf-8')
    return len(text)


def main():
    tasks = []
    for tsv in sorted(MANIFEST_DIR.glob('dc_review_B*.tsv')):
        batch = tsv.stem.replace('dc_review_', '')
        with tsv.open() as f:
            for row in csv.DictReader(f, delimiter='\t'):
                tasks.append((batch, row['name']))
    print('total symbols: {}'.format(len(tasks)))
    with ThreadPoolExecutor(max_workers=8) as ex:
        sizes = list(ex.map(gen_diff, tasks))
    print('done, avg bytes: {:.0f}'.format(sum(sizes) / max(1, len(sizes))))


if __name__ == '__main__':
    main()
