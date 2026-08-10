#!/usr/bin/env python3
"""df_manager_r 快速全量比对（compare_common 统一严格口径 + 签名缓存）。

用法:
  python3 compare_manager.py                 # 全量应用层比对
  python3 compare_manager.py CApplication    # 只比符号名含 CApplication 的函数
"""
import re
import os
import sys
import time
import pickle
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import CALIBER_VERSION, norm_identical, is_exempt_symbol, demangle_batch

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/manager/df_manager_r'
NEW = ROOT / 'dnf_decompile/build/manager/df_manager_r'
SIG_CACHE = '/tmp/manager_sig_cache.pkl'

sys.path.insert(0, '/tmp')
import monitorlib


def norm_sym(k):
    return k.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')


def mnemonics(l):
    return [x.split()[0] for x in l if x.split()]


def is_app(sym):
    if sym.startswith('_GLOBAL__I_'):
        return False
    if sym.startswith('__') and not sym.startswith('_ZN'):
        return False
    if re.match(r'^[a-z]', sym):
        return False
    if re.match(r'^_Z[NK]*(St|So|Si|Sb|Ss)', sym):
        return False
    if sym.startswith('_ZNSt') or sym.startswith('_ZNKSt') or sym.startswith('_ZSt'):
        return False
    if '_ZN10__cxxabiv' in sym or '_ZNK10__cxxabiv' in sym:
        return False
    if sym.startswith('_Z'):
        m = re.match(r'_Z(T|N|NK|K|KT)?(\d+)([A-Za-z_~]+)', sym)
        if m and (m.group(3).startswith('St') or m.group(3).startswith('__gnu_cxx')):
            return False
    return True


def dedup_aliases(syms):
    by_addr = {}
    for name, (addr, size, typ) in syms.items():
        if addr not in by_addr:
            by_addr[addr] = name
        else:
            old = by_addr[addr]
            if old.endswith('C2Ev') or old.endswith('D2Ev'):
                by_addr[addr] = name
    return set(by_addr.values())


def load_sigs(path, keys, use_cache=True):
    st = os.stat(str(path))
    cache_key = (str(path), tuple(sorted(keys)), CALIBER_VERSION, st.st_mtime_ns, st.st_size)
    if use_cache:
        try:
            with open(SIG_CACHE, 'rb') as f:
                ck, cached = pickle.load(f)
            if ck == cache_key:
                return cached
        except Exception:
            pass
    sigs = {}
    for name in keys:
        ins = monitorlib.disasm(str(path), name)
        if not ins:
            continue
        sigs[name] = (len(ins), tuple(mnemonics(ins)), tuple(norm_identical(ins)))
    if use_cache:
        try:
            with open(SIG_CACHE, 'wb') as f:
                pickle.dump((cache_key, sigs), f)
        except Exception:
            pass
    return sigs


def main():
    args = sys.argv[1:]
    pat = None
    use_cache = True
    for a in args:
        if a == '--nosigcache':
            use_cache = False
        else:
            pat = a

    orig = monitorlib.load_symbols(str(ORIG))
    new = monitorlib.load_symbols(str(NEW))
    orig_names = dedup_aliases(orig)
    new_names = dedup_aliases(new)
    newset = new_names | set(norm_sym(k) for k in new_names)

    names = sorted(orig_names)
    names = [n for n in names if is_app(n) and not is_exempt_symbol(n)]
    dem = demangle_batch(names)
    names = [n for n in names if not is_exempt_symbol(n, dem.get(n, n))]
    if pat:
        rx = re.compile(pat)
        names = [n for n in names if rx.search(n)]

    print('comparing %d functions...' % len(names))
    t0 = time.time()
    so = load_sigs(str(ORIG), names, use_cache)
    sn = load_sigs(str(NEW), names, use_cache)
    stats = Counter()
    diffs = []
    missing = [k for k in names if k not in sn]
    for name in names:
        a = so.get(name)
        b = sn.get(name if name in new else norm_sym(name))
        if not a or not b:
            stats['EMPTY/MISSING'] += 1
            continue
        if a[2] == b[2]:
            cls = 'IDENTICAL'
        elif a[1] == b[1]:
            cls = 'NEAR'
        else:
            cls = 'DIFF'
        stats[cls] += 1
        if cls != 'IDENTICAL':
            diffs.append((name, cls, a[0], b[0]))

    total = sum(v for k, v in stats.items() if k != 'EMPTY/MISSING')
    print('time %.1fs' % (time.time() - t0))
    print('stats:', dict(stats))
    print('IDENTICAL: %.1f%%  IDENTICAL+NEAR: %.1f%% (of %d with both sides)' %
          (100 * stats['IDENTICAL'] / max(total, 1),
           100 * (stats['IDENTICAL'] + stats['NEAR']) / max(total, 1), total))
    if missing:
        print('present in orig but not in new:', len(missing))
    diffs.sort(key=lambda d: -max(d[2], d[3]))
    for d in diffs[:40]:
        print('%-70s %-8s %5d vs %5d' % (d[0][:70], d[1], d[2], d[3]))


if __name__ == '__main__':
    main()
