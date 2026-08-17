#!/usr/bin/env python3
"""Run semantic_compare for all review symbols and emit a classified TSV."""
import csv
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

_DECOMP = Path(__file__).resolve().parent.parent.parent          # .../dnf_decompile
ROOT = _DECOMP.parent                                            # 工作区根：<workspace>/
MANIFEST_DIR = _DECOMP / 'build/community'
TOOL = _DECOMP / 'source/toolchain/semantic_compare.py'
OUT = Path('/tmp/review_all_diffs/semantic_classified.tsv')


def run_one(args):
    batch, symbol = args
    try:
        r = subprocess.run([sys.executable, str(TOOL), symbol],
                           capture_output=True, text=True, timeout=60)
        text = r.stdout + r.stderr
    except Exception as e:
        text = 'ERROR: {}'.format(e)
    return batch, symbol, text


def parse(text):
    lines = text.splitlines()
    verdict = 'ERROR'
    for line in lines:
        if line.startswith('VERDICT '):
            verdict = line.split(None, 1)[1]
        elif line.startswith('NOCODE'):
            verdict = 'NOCODE'
        elif line.startswith('ONLY_ONE_HAS_CODE'):
            verdict = 'ONLY_ONE'
        elif line.startswith('ERROR:'):
            verdict = 'ERROR'
            return verdict, line
    calls = '?'
    consts = '?'
    branch = '?'
    size = ''
    for line in text.splitlines():
        if line.startswith('CALLS '):
            calls = line.split(None, 1)[1]
        elif line.startswith('CONSTS '):
            consts = line.split(None, 1)[1]
        elif line.startswith('BRANCH '):
            branch = line.split(None, 1)[1]
        elif line.startswith('SIZE '):
            size = line.split(None, 2)[2]
    detail = '; '.join(t for t in (
        'CALLS=' + calls if calls == 'DIFF' else '',
        'CONSTS=' + consts if consts == 'DIFF' else '',
        'BRANCH=' + branch if branch.startswith('DIFF') else '',
        size) if t)
    return verdict, detail


def main():
    tasks = []
    with open('/tmp/review_all_diffs/classified.tsv') as f:
        # reuse batch/file/class/name/overlap from prior classification
        pass
    with open(OUT, 'w') as out:
        out.write('batch\tfile\tclass\tname\toverlap\tverdict\tdetail\n')
        with ThreadPoolExecutor(max_workers=8) as ex:
            futures = []
            for tsv in sorted(MANIFEST_DIR.glob('dc_review_B*.tsv')):
                batch = tsv.stem.replace('dc_review_', '')
                with tsv.open() as f:
                    for row in csv.DictReader(f, delimiter='\t'):
                        futures.append((batch, row, ex.submit(run_one, (batch, row['name']))))
            for batch, row, fut in futures:
                _b, _s, text = fut.result()
                verdict, detail = parse(text)
                out.write('{}\t{}\t{}\t{}\t{}\t{}\t{}\n'.format(
                    batch, row['file'], row['class'], row['name'], row['overlap'],
                    verdict, detail.replace('\t', ' ')))
    print('OUT={}'.format(OUT))


if __name__ == '__main__':
    main()
