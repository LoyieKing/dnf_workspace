#!/usr/bin/env python3
"""Classify per-symbol diffs into ALIGNED / MINOR / MISALIGNED candidates.

Rules:
  - ALIGNED: no '!' lines in diff (identical after normalization)
  - MINOR:   only opnd-level diffs involving same mnemonic, OR only
             differences in pure address/register spilling patterns
  - MISALIGNED-CANDIDATE: any 'only' structural difference, or opnd diff
             where the operand text differs beyond a <tgt> normalization
             (constants, call targets, displacements)

Usage: classify_diffs.py
Output: /tmp/review_all_diffs/classified.tsv
"""
import csv
import re
from collections import defaultdict
from pathlib import Path

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile')
MANIFEST_DIR = ROOT / 'source/build-verify-community'
DIFF_DIR = Path('/tmp/review_all_diffs')


def read_diff(path):
    return path.read_text(errors='replace').splitlines() if path.exists() else []


def classify(diff_lines):
    """Return (verdict, reason, counts)."""
    n_same = n_opnd = n_only = 0
    opnd_pairs = []
    only_lines = []
    for ln in diff_lines:
        if ln.startswith('  same'):
            n_same += 1
        elif ln.startswith('! opnd'):
            n_opnd += 1
            opnd_pairs.append(ln)
        elif ln.startswith('! only'):
            n_only += 1
            only_lines.append(ln)
    if n_same == 0 and n_opnd == 0 and n_only == 0:
        return 'NOCODE', 'no disassembly or empty diff', (0, 0, 0)
    if n_only == 0 and n_opnd == 0:
        return 'ALIGNED', 'identical after normalization', (n_same, 0, 0)
    if n_only == 0:
        # operand-only differences: check whether they are semantic
        semantic = []
        for p in opnd_pairs:
            # strip the markers and addresses
            o = re.sub(r'^! \S+\s+[0-9a-fA-F]+\s+\| orig: ', '', p)
            n = re.sub(r'^! \S+\s+[0-9a-fA-F]+\s+\| new : ', '', p)
            # normalize <tgt> and hex to compare semantics
            no = re.sub(r'<tgt>[^ ]*', '<T>', o)
            nn = re.sub(r'<tgt>[^ ]*', '<T>', n)
            if no != nn:
                semantic.append((o, n))
        if not semantic:
            return 'MINOR', 'operand diffs only in address/target normalization', (n_same, n_opnd, 0)
        return 'MISALIGNED', 'operand diffs: {}'.format(' | '.join(
            'orig[{}] vs new[{}]'.format(a, b) for a, b in semantic[:3])), (n_same, n_opnd, 0)
    # structural differences
    reasons = []
    for ln in only_lines:
        m = re.match(r'^! only\s+[0-9a-fA-F]+\s+\|\s+(orig|new) : (.*)$', ln)
        if m:
            reasons.append('{}: {}'.format(m.group(1), m.group(2)))
    return 'MISALIGNED', 'structural diff ({} only-insns): {}'.format(
        n_only, ' | '.join(reasons[:4])), (n_same, n_opnd, n_only)


def main():
    rows = []
    for tsv in sorted(MANIFEST_DIR.glob('dc_review_B*.tsv')):
        batch = tsv.stem.replace('dc_review_', '')
        with tsv.open() as f:
            for row in csv.DictReader(f, delimiter='\t'):
                sym = row['name']
                diff = read_diff(DIFF_DIR / batch / (sym.replace('/', '_').replace('*', '_') + '.diff'))
                verdict, reason, counts = classify(diff)
                rows.append({
                    'batch': batch, 'file': row['file'], 'class': row['class'],
                    'name': sym, 'verdict': verdict, 'reason': reason,
                    'same': counts[0], 'opnd': counts[1], 'only': counts[2],
                    'overlap': row['overlap'],
                })

    out = DIFF_DIR / 'classified.tsv'
    with out.open('w') as f:
        f.write('batch\tfile\tclass\tname\tverdict\treason\tsame\topnd\tonly\toverlap\n')
        for r in rows:
            f.write('{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\n'.format(
                r['batch'], r['file'], r['class'], r['name'], r['verdict'],
                r['reason'].replace('\t', ' '), r['same'], r['opnd'], r['only'], r['overlap']))

    from collections import Counter
    print('OUT={}'.format(out))
    print('VERDICTS={}'.format(dict(Counter(r['verdict'] for r in rows))))
    per_batch = defaultdict(Counter)
    for r in rows:
        per_batch[r['batch']][r['verdict']] += 1
    for b in sorted(per_batch):
        print('{} {}'.format(b, dict(per_batch[b])))


if __name__ == '__main__':
    main()
