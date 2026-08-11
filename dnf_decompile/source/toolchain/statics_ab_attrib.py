#!/usr/bin/env python3
"""statics A/B toolchain attribution (round 2, 2026-08-11).

For each statics md target, classify ORIG vs each variant binary using the same
strict口径 as gen_function_md, then aggregate per TU to pick the compiler
variant whose output is closest to ORIG.

Usage:
  python3 source/toolchain/statics_ab_attrib.py
"""
import csv
import difflib
import os
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
sys.path.insert(0, str(ROOT / 'source/toolchain'))

import gen_function_md as gfm

VARIANTS = {
    'c5':      '/tmp/statics_ab2/c5/df_statics_r',
    'c6':      '/home/loyieking/dnf_workspace/dnf_decompile/build/statics/df_statics_r',
    'c6446r':  '/tmp/statics_ab2/c6446r/df_statics_r',
    'c6444r':  '/tmp/statics_ab2/c6444r/df_statics_r',
}


def main():
    svc = 'statics'
    rel_o, rel_n = gfm.SERVICES[svc]
    orig_path = gfm.INSTALLER / rel_o
    svc_dir = ROOT / 'function_reports' / svc
    manifest_path = svc_dir / 'manifest.tsv'

    rows = []
    with manifest_path.open() as fh:
        for r in csv.DictReader(fh, delimiter='\t'):
            if r['status'] in gfm.MD_STATUSES:
                rows.append((r['status'], r['name']))
    names = [n for _, n in rows]

    # per-variant classification
    results = {}  # name -> {variant: status}
    ratios = {}   # name -> {variant: similarity ratio}
    o_loaded = gfm._cached_load_disasm(orig_path)
    o_map = gfm.build_addr_map(str(orig_path))
    for variant, binpath in VARIANTS.items():
        n_loaded = gfm._cached_load_disasm(binpath)
        n_map = gfm.build_addr_map(binpath)
        for status, name in rows:
            st, oa, osz, na, nsz = gfm.classify_one(
                orig_path, binpath, o_loaded, n_loaded, o_map, n_map, name)
            results.setdefault(name, {})[variant] = st
            try:
                o_ins = gfm.norm_identical(
                    gfm.trim_trailing_nops(gfm.pseudo_lines(
                        gfm.norm_identical(gfm.slice_by_range(o_loaded, oa, oa + osz)),
                        o_map, fn_base=oa)))
                n_ins = gfm.norm_identical(
                    gfm.trim_trailing_nops(gfm.pseudo_lines(
                        gfm.norm_identical(gfm.slice_by_range(n_loaded, na, na + nsz)),
                        n_map, fn_base=na)))
                ratios.setdefault(name, {})[variant] = difflib.SequenceMatcher(
                    None, o_ins, n_ins).ratio()
            except Exception:
                pass

    # symbol -> TU map from current c6 objects
    objmap = {}
    odir = ROOT / 'build/statics/CMakeFiles/statics.dir'
    for root, dirs, files in os.walk(odir):
        for fn in files:
            if not fn.endswith('.o'):
                continue
            path = os.path.join(root, fn)
            out = subprocess.run(['nm', path], capture_output=True, text=True).stdout
            for line in out.splitlines():
                parts = line.split()
                if len(parts) >= 3 and parts[1] in 'TtWw':
                    objmap.setdefault(parts[2], []).append(fn.replace('.o', ''))

    # aggregate per TU: how many functions become IDENTICAL / NEAR per variant
    tu_variants = defaultdict(lambda: defaultdict(Counter))
    per_sym_best = {}
    for name, stmap in sorted(results.items()):
        # pick best variant: IDENTICAL_AE/IDENTICAL > NEAR > DIFF
        rank = {'IDENTICAL': 2, 'IDENTICAL_AE': 2, 'NEAR': 1, 'DIFF': 0,
                'MISSING': -1}
        best_v = max(stmap, key=lambda v: (
            rank[stmap[v]], ratios.get(name, {}).get(v, 0.0), v))
        per_sym_best[name] = (best_v, stmap[best_v])
        tus = objmap.get(name, ['??'])
        for v, st in stmap.items():
            for tu in tus:
                tu_variants[tu][v][st] += 1

    print('=== per-symbol best variant (name best_variant status) ===')
    for name, (v, st) in per_sym_best.items():
        if st != 'IDENTICAL' and st != 'IDENTICAL_AE':
            r = ratios.get(name, {})
            print('{}\t{}\t{}\t{}'.format(
                name, v, st, ','.join('{}={:.3f}'.format(k, r[k]) for k in VARIANTS)))

    # per-symbol best including identical (for direct attribution)
    ident_tu = defaultdict(Counter)
    for name, (v, st) in per_sym_best.items():
        for tu in objmap.get(name, ['??']):
            ident_tu[tu][v] += 1
    print('\n=== per-TU best-variant tally (count of functions where variant wins) ===')
    for tu in sorted(ident_tu):
        print('{}\t{}'.format(tu, dict(ident_tu[tu])))

    print('\n=== per-TU variant scoring ===')
    print('TU\tvariant\tIDENT\tNEAR\tDIFF')
    for tu in sorted(tu_variants):
        line = []
        for v in VARIANTS:
            c = tu_variants[tu].get(v, Counter())
            line.append('{}\t{}\t{}\t{}'.format(v, c['IDENTICAL'] + c['IDENTICAL_AE'],
                                                c['NEAR'], c['DIFF']))
        print('{}\t{}'.format(tu, '\t'.join(line)))

    # aggregate ratio per TU per variant
    tu_ratio = defaultdict(lambda: defaultdict(float))
    tu_n = Counter()
    for name, rmap in ratios.items():
        for tu in objmap.get(name, ['??']):
            tu_n[tu] += 1
            for v, r in rmap.items():
                tu_ratio[tu][v] += r
    print('\n=== per-TU aggregate ratio (sum of per-function similarity) ===')
    for tu in sorted(tu_ratio):
        parts = ['{}={:.2f}'.format(v, tu_ratio[tu][v]) for v in VARIANTS]
        print('{}\t{}\t{}'.format(tu, tu_n[tu], '\t'.join(parts)))


if __name__ == '__main__':
    main()
