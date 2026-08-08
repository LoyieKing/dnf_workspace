#!/usr/bin/env python3
"""df_statics_r 快速全量比对（签名缓存 + 快筛 + 按类过滤）。

用法:
  python3 compare_statics.py                 # 全量应用层比对
  python3 compare_statics.py FrameLag        # 只比符号名含 FrameLag 的函数
  python3 compare_statics.py --app           # 只比应用层（排除 std/libstdc++/libgcc）
  python3 compare_statics.py --all           # 含 std 模板的全部符号
"""
import re
import sys
import time
import pickle
from collections import Counter

sys.path.insert(0, '/tmp')
import staticslib

ORIG = staticslib.ORIG
NEW = staticslib.NEW
SIG_CACHE = '/tmp/staticslib_sig_cache.pkl'


def norm_sym(k):
    return k.replace('C1Ev', 'C2Ev').replace('D1Ev', 'D2Ev')


def mnemonics(l):
    return [x.split()[0] for x in l if x.split()]


def normalize(l):
    out = []
    for x in l:
        x = re.sub(r'0x[0-9a-f]+<[^>]*>', '<T>', x)
        x = re.sub(r'0x[0-9a-f]+', '0xX', x)
        out.append(x)
    return out


def is_std(sym):
    """libstdc++/libgcc/低层模板符号：不同链接版本导致必然差异，不计入应用层。"""
    if sym.startswith('__') and not sym.startswith('_ZN'):
        return True
    if re.match(r'^[a-z]', sym):
        return True  # libiberty/libgcc 内部符号（execute_*, uw_*, search_object 等）
    if re.match(r'^_Z[NK]*(St|So|Si|Sb|Ss|St9|St13|St14|St15|St16|St17|St18|St19|St20|St21|St23|St24|St25|St26|St27|St28)', sym):
        return True
    if re.match(r'^_ZNSt', sym) or re.match(r'^_ZNKSt', sym):
        return True
    if '_ZN10__cxxabiv' in sym or '_ZNK10__cxxabiv' in sym:
        return True
    if sym.startswith('_ZNSt') or sym.startswith('_ZNKSt') or sym.startswith('_ZSt'):
        return True
    if sym.startswith('_ZNK') and ('St' in sym[:14]):
        return True
    if '_ZN10__cxxabiv' in sym or '_ZNK10__cxxabiv' in sym:
        return True
    if sym.startswith('_Z'):
        m = re.match(r'_Z(T|N|NK|K|KT)?(\d+)([A-Za-z_~]+)', sym)
        if m:
            cls = m.group(3)
            if cls.startswith('St') or cls.startswith('__gnu_cxx'):
                return True
    return False


def is_app(sym):
    return not sym.startswith('_GLOBAL__I_') and not is_std(sym)


def dedup_aliases(syms):
    """C1/C2、D1/D2 等地址别名：只保留一个符号名。"""
    by_addr = {}
    for name, (addr, size, typ) in syms.items():
        if addr not in by_addr:
            by_addr[addr] = name
        else:
            old = by_addr[addr]
            # 优先保留 C1/D1（非 C2/D2）
            if old.endswith('C2Ev') or old.endswith('D2Ev'):
                by_addr[addr] = name
    return set(by_addr.values())


def load_sigs(path, keys, use_cache=True):
    """预计算规范化签名：{symbol: (size, mnemonic_tuple, normalized_tuple)}。"""
    cache_key = (path, tuple(sorted(keys)))
    if use_cache:
        try:
            with open(SIG_CACHE, 'rb') as f:
                ck, cached = pickle.load(f)
            if ck[0] == path and ck[1] == cache_key[1]:
                return cached
        except Exception:
            pass
    sigs = {}
    for name in keys:
        ins = staticslib.disasm(path, name)
        if not ins:
            continue
        sigs[name] = (len(ins), tuple(mnemonics(ins)), tuple(normalize(ins)))
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
    all_syms = False
    for a in args:
        if a == '--all':
            all_syms = True
        elif a == '--app':
            all_syms = False
        elif a == '--nosigcache':
            pass
        else:
            pat = a

    orig = staticslib.load_symbols(ORIG)
    new = staticslib.load_symbols(NEW)
    orig_names = dedup_aliases(orig)
    new_names = dedup_aliases(new)
    newset = new_names | set(norm_sym(k) for k in new_names)

    names = sorted(orig_names)
    if not all_syms:
        names = [n for n in names if is_app(n)]
    if pat:
        rx = re.compile(pat)
        names = [n for n in names if rx.search(n)]

    print('comparing %d functions...' % len(names))
    t0 = time.time()
    so = load_sigs(ORIG, names)
    sn = load_sigs(NEW, names)
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
    print('IDENTICAL+NEAR: %.1f%% (of %d with both sides)' %
          (100 * (stats['IDENTICAL'] + stats['NEAR']) / max(total, 1), total))
    if missing:
        print('present in orig but not in new:', len(missing))
    diffs.sort(key=lambda d: -max(d[2], d[3]))
    for d in diffs[:40]:
        print('%-70s %-8s %5d vs %5d' % (d[0][:70], d[1], d[2], d[3]))


if __name__ == '__main__':
    main()
