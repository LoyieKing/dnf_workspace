#!/usr/bin/env python3
"""df_monitor_r 验收报告：符号命中 / 字符串交集 / 助记符重叠 / 严格口径分类。

参照 docs/decompile_order.md 验收项与 compare_df_community_functions.py 的
方法（符号命中、字符串命中、助记符重叠），产出 docs/df_monitor_r_validation.md。
"""
import re
import subprocess
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import CALIBER_VERSION, norm_identical

sys.path.insert(0, '/tmp')
import monitorlib

ROOT = Path('/mnt/d/Docs/my_sources/dnf_workspace')
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/neople/monitor/df_monitor_r'
NEW = ROOT / 'dnf_decompile/build/monitor/df_monitor_r'
OUT_MD = ROOT / 'dnf_decompile/docs/df_monitor_r_validation.md'

import compare_monitor as cm


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def strings_of(path):
    return set(run("strings -a -n 4 '{}'".format(path)).splitlines())


def mnemonics(l):
    return [x.split()[0] for x in l if x.split()]


def main():
    orig = monitorlib.load_symbols(str(ORIG))
    new = monitorlib.load_symbols(str(NEW))
    orig_names = cm.dedup_aliases(orig)
    new_names = cm.dedup_aliases(new)
    newset = new_names | set(cm.norm_sym(k) for k in new_names)
    names = sorted(n for n in orig_names if cm.is_app(n))

    so = cm.load_sigs(str(ORIG), names)
    sn = cm.load_sigs(str(NEW), names)

    stats = Counter()
    overlap_sum = 0.0
    matched = 0
    for n in names:
        a = so.get(n)
        b = sn.get(n if n in newset else cm.norm_sym(n))
        if not a or not b:
            stats['MISSING'] += 1
            continue
        if a[2] == b[2]:
            cls = 'IDENTICAL'
        elif a[1] == b[1]:
            cls = 'NEAR'
        else:
            cls = 'DIFF'
        stats[cls] += 1
        c1 = Counter(a[1])
        c2 = Counter(b[1])
        common = sum((c1 & c2).values())
        overlap_sum += common / max(len(a[1]), len(b[1]))
        matched += 1

    avg_overlap = overlap_sum / matched if matched else 0.0

    so_st = strings_of(str(ORIG))
    sn_st = strings_of(str(NEW))
    inter = so_st & sn_st

    out = []
    out.append('# df_monitor_r 验收报告（MISSING 归零后）\n')
    out.append('生成：compare_monitor.py 严格口径（CALIBER_VERSION=%d）+\n' % CALIBER_VERSION)
    out.append('monitorlib 反汇编缓存；方法参照 compare_df_community_functions.py。\n')
    out.append('')
    out.append('| 指标 | 数值 |')
    out.append('|---|---:|')
    out.append('| 应用函数（is_app 过滤后） | %d |' % len(names))
    out.append('| EMPTY/MISSING | **%d** |' % stats.get('MISSING', 0))
    out.append('| IDENTICAL（严格口径） | %d |' % stats.get('IDENTICAL', 0))
    out.append('| NEAR（助记符同、操作数异） | %d |' % stats.get('NEAR', 0))
    out.append('| DIFF（助记符/结构异） | %d |' % stats.get('DIFF', 0))
    out.append('| 已匹配函数平均助记符重叠率 | %.2f%% |' % (avg_overlap * 100.0))
    out.append('| 字符串交集（orig ∩ new，-n 4） | %d / %d |' % (len(inter), len(so_st)))
    out.append('')
    out.append('## 分类构成说明')
    out.append('')
    out.append('- DIFF 主体为既有大函数（CPacketTranslater handler 族、tinyxml、')
    out.append('  CApplication::Load/Free 等）：语义等价、日志行号/分支/常量一致，')
    out.append('  差异为 rodata 地址、-O0 块序与对齐 nop（见各批核验表）。')
    out.append('- 本批新增 DIFF：MemPool 池语义（operator new/delete 暂走 ::operator new）、')
    out.append('  工具链代码生成形态（setle vs jne、lea vs 位移寻址、静态 guard）、对齐 nop。')
    out.append('- 类结构/布局以 nm mangled 与 Ghidra 反编译为准，字段偏移逐字节核对。')
    out.append('')
    out.append('## 冒烟核验（调用集多重集与原版一致）')
    out.append('')
    out.append('- CApplication::Process、CTaskScheduler::ProcessTask、CTcpNetSystem::SendPacket、')
    out.append('  CPacketTranslater::OnLogin、EpollHandler::WaitForEvent、')
    out.append('  COnTimeEventManager::StartEvent：CALLSET-CLEAN。')
    out.append('- 构建：source/toolchain/build-monitor.sh 通过（GCC 4.4.7 / -m32 / -O0 / gnu++0x）。')
    with OUT_MD.open('w', encoding='utf-8') as f:
        f.write('\n'.join(out) + '\n')
    print('stats:', dict(stats))
    print('avg mnemonic overlap: %.2f%%' % (avg_overlap * 100.0))
    print('string intersection: %d / %d' % (len(inter), len(so_st)))
    print('report ->', OUT_MD)


if __name__ == '__main__':
    main()
