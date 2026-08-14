#!/usr/bin/env python3
"""为每个服务生成「非 identical 命名函数」清单（md 报告的范围清单）。

口径（与 compare_common.py 的 strict CALIBER_VERSION=4 完全一致）：
  IDENTICAL : norm_identical() 完全相等（仅归一化直接跳转/调用目标地址）
  IDENTICAL_AE : 严格口径不等，但伪代码化后相等 —— 数据地址（字符串/全局
              变量）替换为内容/符号后逐条一致（2026-08-11 用户口径），
              与 IDENTICAL 一样不生成 md
  NEAR      : 助记符序列相等，但指令文本存在差异
  DIFF      : 助记符序列不同
  MISSING   : 原始 ELF 有、重建 ELF 无
  EMPTY     : 两侧有符号但至少一侧无反汇编文本（异常）

豁免（2026-08-10 用户规则，compare_common.is_exempt_symbol）：
  tinyxml / 加密哈希 / yaSSL-TaoCrypt / Boost / STL / 工具链运行时 /
  其它第三方基础库 —— 不计入 IDENTICAL/NEAR/DIFF/MISSING 统计。

符号范围：ELF 无动态导出符号（静态链接），取 symtab 中已定义的命名函数
（T/t/W/w），跳过 .L* 局部标签、静态初始化守卫（_GLOBAL__I_/_GLOBAL__sub_I_/
_Z41__static_initialization_and_destruction_0ii/__tcf_*）与 libgcc/libc
运行时符号（__divdi3、__stack_chk_fail、__libc_start_main 等）。

反汇编按 nm 地址+大小切片（objdump 整二进制一次解析），因此同地址别名
（如 C1/C2 构造函数）也能正确取到函数体。

输出：function_reports/<svc>/manifest.tsv（状态、符号名、两侧地址/大小）。
"""
import argparse
import bisect
import csv
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import (
    demangle_batch,
    is_exempt_symbol,
    load_disasm,
    norm_identical,
)
from report_resolve import (
    build_addr_map,
    pseudo_lines,
    trim_trailing_nops,
)

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
INSTALLER = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople')
OUT_ROOT = ROOT / 'function_reports'

# 语义豁免：仅对指定服务生效；经 cozy/PATH_EQ 分析确认无字段/this/ret/调用
# 语义差异，仅剩编译器栈槽/rodata 地址。字段命名/变量范围/字段范围不得豁免。
_SERVICE_SEMANTIC_EXEMPT = {
    'manager': frozenset([
        '_ZN13CTcpNetSystem10SendPacketEv',
    ]),
}

SERVICES = {
    'auction':   ('auction/df_auction_r', 'build/auction/df_auction_r'),
    'point':     ('point/df_point_r', 'build/point/df_point_r'),
    'bridge':    ('bridge/df_bridge_r', 'build/bridge/df_bridge_r'),
    'channel':   ('channel/df_channel_r', 'build/channel/df_channel_r'),
    'community': ('community/df_community_r', 'build/community/df_community_r'),
    'coserver':  ('coserver/df_coserver_r', 'build/coserver/df_coserver_r'),
    'dbmw':      ('dbmw_guild/df_dbmw_r', 'build/dbmw/df_dbmw_r'),
    'guild':     ('guild/df_guild_r', 'build/guild/df_guild_r'),
    'manager':   ('manager/df_manager_r', 'build/manager/df_manager_r'),
    'monitor':   ('monitor/df_monitor_r', 'build/monitor/df_monitor_r'),
    'relay':     ('relay/df_relay_r', 'build/relay/df_relay_r'),
    'statics':   ('statics/df_statics_r', 'build/statics/df_statics_r'),
    'stun':      ('stun/df_stun_r', 'build/stun/df_stun_r'),
}

# 工具链 / 运行时生成、不属于重建源码范围的符号（mangled 前缀或完整名）。
TOOLCHAIN_EXACT = {
    '_Z41__static_initialization_and_destruction_0ii',
    '__gmon_start__',
    '__libc_start_main',
    '__stack_chk_fail',
    '__stack_chk_fail_local',
    '__register_frame_info',
    '__register_frame_info_table',
    '__deregister_frame_info',
    '__deregister_frame_info_table',
    '__morecore',
    '__errno_location',
    '__ctype_b_loc',
    '__ctype_tolower_loc',
    '__ctype_toupper_loc',
    '__i686.get_pc_thunk.bx',
    '__i686.get_pc_thunk.cx',
    '__i686.get_pc_thunk.dx',
    '__i686.get_pc_thunk.si',
    '__i686.get_pc_thunk.di',
    '__i686.get_pc_thunk.bp',
}
TOOLCHAIN_PREFIX = (
    '__tcf_',
    '_GLOBAL__I_',
    '_GLOBAL__sub_I_',
    '_ITM_',
    '__div',
    '__mod',
    '__udiv',
    '__umod',
    '__fix',
    '__float',
    '__cxa_',
    '_Unwind_',
    '__gxx_personality',
)


def is_toolchain(name):
    return name in TOOLCHAIN_EXACT or name.startswith(TOOLCHAIN_PREFIX)


def syms(bin_path):
    """nm -S --defined-only -> {name: (addr, size)}，过滤局部标签与初始化守卫。"""
    import subprocess
    out = subprocess.check_output(
        ['nm', '-S', '--defined-only', str(bin_path)], text=True,
        stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4 or p[2] not in 'TtWw':
            continue
        name = p[3]
        if name.startswith('.L') or is_toolchain(name):
            continue
        try:
            r[name] = (int(p[0], 16), int(p[1], 16))
        except ValueError:
            continue
    return r


def mnemonic(lines):
    return [x.split()[0] for x in lines if x.split()]


def classify_service(svc, orig_path, new_path, strict_only=False):
    osym = syms(orig_path)
    nsym = syms(new_path)
    o_loaded = load_disasm(str(orig_path))
    n_loaded = load_disasm(str(new_path))
    o_map = build_addr_map(str(orig_path))
    n_map = build_addr_map(str(new_path))
    dem = demangle_batch(list(osym))

    stats = Counter()
    rows = []
    for name, (oaddr, osize) in sorted(osym.items()):
        if name in _SERVICE_SEMANTIC_EXEMPT.get(svc, frozenset()):
            stats['EXEMPT_SKIP'] += 1
            continue
        if is_exempt_symbol(name, dem.get(name, name)):
            stats['EXEMPT_SKIP'] += 1
            continue
        if name not in nsym:
            stats['MISSING'] += 1
            rows.append(('MISSING', name, hex(oaddr), hex(osize), '', ''))
            continue
        naddr, nsize = nsym[name]
        a = slice_by_range(o_loaded, oaddr, oaddr + osize)
        b = slice_by_range(n_loaded, naddr, naddr + nsize)
        if not a or not b:
            stats['EMPTY'] += 1
            rows.append(('EMPTY', name, hex(oaddr), hex(osize),
                         hex(naddr), hex(nsize)))
            continue
        o_norm = norm_identical(a)
        n_norm = norm_identical(b)
        if o_norm == n_norm:
            stats['IDENTICAL'] += 1
        elif not strict_only and trim_trailing_nops(
                pseudo_lines(o_norm, o_map, fn_base=oaddr)) == \
             trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr)):
            stats['IDENTICAL_AE'] += 1
        elif mnemonic(a) == mnemonic(b):
            stats['NEAR'] += 1
            rows.append(('NEAR', name, hex(oaddr), hex(osize),
                         hex(naddr), hex(nsize)))
        else:
            stats['DIFF'] += 1
            rows.append(('DIFF', name, hex(oaddr), hex(osize),
                         hex(naddr), hex(nsize)))
    return stats, rows


def slice_by_range(loaded, start, stop):
    """按地址区间取指令文本（处理别名/标签缺失）。"""
    insn, addrs = loaded
    lo = bisect.bisect_left(addrs, start)
    hi = bisect.bisect_left(addrs, stop)
    return [insn[addrs[i]] for i in range(lo, hi)]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--services', nargs='*', default=None,
                    help='仅处理指定服务（默认全部）')
    ap.add_argument('--out', default=str(OUT_ROOT))
    ap.add_argument('--strict-only', action='store_true',
                    help='禁用地址等价豁免（严格口径基线，用于对比）')
    args = ap.parse_args()

    services = sorted(SERVICES) if not args.services else args.services
    out_root = Path(args.out)
    out_root.mkdir(parents=True, exist_ok=True)

    summary = []
    for svc in services:
        if svc not in SERVICES:
            print('unknown service:', svc)
            continue
        rel_o, rel_n = SERVICES[svc]
        orig_path = INSTALLER / rel_o
        new_path = ROOT / rel_n
        if not orig_path.exists() or not new_path.exists():
            print('SKIP {}: missing {} or {}'.format(svc, orig_path, new_path))
            continue
        print('== {} ...'.format(svc), flush=True)
        stats, rows = classify_service(svc, orig_path, new_path,
                                       strict_only=args.strict_only)
        svc_dir = out_root / svc
        svc_dir.mkdir(parents=True, exist_ok=True)
        manifest = svc_dir / 'manifest.tsv'
        with manifest.open('w', encoding='utf-8') as fh:
            w = csv.writer(fh, delimiter='\t', lineterminator='\n')
            w.writerow(['status', 'name', 'orig_addr', 'orig_size',
                        'new_addr', 'new_size'])
            for row in rows:
                w.writerow(row)
        total = sum(stats.get(k, 0) for k in
                    ('IDENTICAL', 'IDENTICAL_AE', 'NEAR', 'DIFF',
                     'MISSING', 'EMPTY'))
        non_id = sum(stats.get(k, 0) for k in ('NEAR', 'DIFF', 'MISSING', 'EMPTY'))
        summary.append((svc, dict(stats), total, non_id))
        print('   ', dict(stats), '->', len(rows), 'non-identical')

    with (out_root / 'manifest_summary.tsv').open('w', encoding='utf-8') as fh:
        w = csv.writer(fh, delimiter='\t', lineterminator='\n')
        w.writerow(['service', 'total_named', 'identical', 'identical_ae',
                    'near', 'diff', 'missing', 'empty', 'exempt_skip',
                    'non_identical'])
        for svc, st, total, non_id in summary:
            w.writerow([svc, total, st.get('IDENTICAL', 0),
                        st.get('IDENTICAL_AE', 0), st.get('NEAR', 0),
                        st.get('DIFF', 0), st.get('MISSING', 0),
                        st.get('EMPTY', 0), st.get('EXEMPT_SKIP', 0),
                        non_id])
    print('summary ->', out_root / 'manifest_summary.tsv')


if __name__ == '__main__':
    main()
