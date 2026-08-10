#!/usr/bin/env python3
"""Generate a detailed misalignment report for project MISALIGN functions."""
import csv
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile')
TOOL = ROOT / 'source/toolchain/semantic_compare.py'
ALL_TSV = ROOT / 'build/community/df_community_r_all_function_compare.tsv'
SEM_TSV = Path('/tmp/review_all_diffs/semantic_classified.tsv')
OUT = ROOT / 'docs/data/misalign_details.txt'


def run_one(symbol):
    try:
        r = subprocess.run([sys.executable, str(TOOL), symbol],
                           capture_output=True, text=True, timeout=60)
        return r.stdout
    except Exception as e:
        return 'ERROR: {}'.format(e)


def main():
    origin = {}
    with ALL_TSV.open() as f:
        for row in csv.DictReader(f, delimiter='\t'):
            origin[row['name']] = row['origin']

    mis = []
    with SEM_TSV.open() as f:
        for row in csv.DictReader(f, delimiter='\t'):
            if row['verdict'] == 'MISALIGN' and origin.get(row['name']) == 'project':
                mis.append(row['name'])

    with OUT.open('w') as out:
        out.write('PROJECT MISALIGN FUNCTIONS: {}\n\n'.format(len(mis)))
        for sym in sorted(mis):
            out.write('=' * 30 + ' {} '.format(sym) + '=' * 30 + '\n')
            out.write(run_one(sym))
            out.write('\n')
    print('OUT={} ({} functions)'.format(OUT, len(mis)))


if __name__ == '__main__':
    main()
