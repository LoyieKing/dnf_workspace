#!/usr/bin/env python3
"""从 v2_triage.tsv 生成按 TU 划分的工作包 + 唯一认领队列。

新工作流的核心工具之一：把「一个服务 / 一个函数」的散列表，变成
「一个编译单元 = 一个写者」的分配表，从机制上禁止两个 agent 同时
改同一个 TU。

输入: function_reports/_triage/v2_triage.tsv
输出:
  function_reports/_triage/queue.tsv
      每行一个 TU：service, tu, n_funcs, buckets, status, owner, note
  function_reports/_triage/packages/<svc>/<tu>.tsv
      每个 TU 一份包，列与 triage 一致，供单个执行 agent 消费

对 src_file 为空的行（NEEDS_REVERSE），用 c++filt 还原类名/方法名，
再 rg 服务源目录定位定义所在 .cpp 文件，避免执行 agent 重复反查。
"""
import argparse
import csv
import re
import subprocess
from collections import defaultdict
from pathlib import Path


ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
SOURCE = ROOT / 'source'
TRIAGE = ROOT / 'function_reports' / '_triage' / 'v2_triage.tsv'
PKG_DIR = ROOT / 'function_reports' / '_triage' / 'packages'
QUEUE = ROOT / 'function_reports' / '_triage' / 'queue.tsv'

SVC_DIRS = {
    'coserver': SOURCE / 'DNFServer' / 'GameServer' / 'COServer',
    'dbmw': SOURCE / 'DNFServer' / 'GameServer' / 'DBMW',
    'guild': SOURCE / 'DNFServer' / 'GameServer' / 'Guild',
    'manager': SOURCE / 'DNFServer' / 'GameServer' / 'Manager',
    'monitor': SOURCE / 'DNFServer' / 'GameServer' / 'Monitor',
    'statics': SOURCE / 'DNFServer' / 'GameServer' / 'Statics',
}

# 类名 -> TU 文件名的少量特例（类名与文件名不一致时使用）。
CLASS_TO_TU = {
    'CAppConfig': 'DNFAppConfig.cpp',
    'CApplication': 'DNFApplication.cpp',
    'CServerHandler': 'DNFServerHandler.cpp',
    'CUdpHandler': 'DNFUdpHandler.cpp',
    'CTcpHandler': 'DNFTcpHandler.cpp',
    'CPeer': 'Peer.cpp',
    'CTcpNetSystem': 'TcpNetSystem.cpp',
    'CServerXml': 'ServerXml.cpp',
    'CMember': 'DNFMember.cpp',
    'CUser': 'DNFUser.cpp',
    'CMemberManager': 'DNFMemberManager.cpp',
    'CUserManager': 'DNFUserManager.cpp',
    'CGuild': 'DNFGuild.cpp',
    'CGuildManager': 'DNFGuildManager.cpp',
    'CGuildBoard': 'GuildBoard.cpp',
    'CGuildCargo': 'GuildCargo.cpp',
    'CPowerWarGuildInfo': 'PowerWarGuildInfo.cpp',
    'CFrameCountHandler': 'DNFTickHandler.cpp',
    'CTowerRank': 'TowerRank.cpp',
    'CMemoryCashManager': 'MemoryCashManager.cpp',
    'CLimitNpcBuyItemManager': 'LimitNpcBuyItem.cpp',
    'CItemLimitEditionMgr': 'ItemLimitEditionManager.cpp',
    'CFrameLagCollector': 'FrameLagCollector.cpp',
    'CHWSpecResearcher': 'HWSpecResearcher.cpp',
    'CStatisticsServer': 'Statistics.cpp',
    'CStatisticManager': 'Statistics.cpp',
    'StatisticManager': 'Statistics.cpp',
    'CCubeStatistic': 'CubeStatistics.cpp',
    'CDBManager': 'DBManager.cpp',
    'CPacketTranslater': 'DNFPacketTranslater.cpp',
    'CServerXml': 'ServerXml.cpp',
    'CTowerRank': 'TowerRank.cpp',
}


def demangle(names):
    names = list(names)
    if not names:
        return {}
    out = subprocess.run(
        ['c++filt', '-n'], input='\n'.join(names) + '\n',
        text=True, capture_output=True, check=True).stdout.splitlines()
    return dict(zip(names, out))


def split_demangled(dem):
    """返回 (class, method)。只取最后一个 :: 前/后的部分。"""
    body = dem.split('(')[0].strip()
    parts = body.split('::')
    if len(parts) >= 2:
        return parts[-2].strip(), parts[-1].strip()
    return '', body


def resolve_tu(svc, dem):
    cls, method = split_demangled(dem)
    if not method:
        return ''
    base = SVC_DIRS.get(svc)
    if not base or not base.exists():
        return ''

    if cls in CLASS_TO_TU:
        cand = base / CLASS_TO_TU[cls]
        if cand.exists():
            return str(cand.relative_to(ROOT))

    # 1) 先按 ::method 精确定位（可能多个 TU）。
    hits = []
    for p in base.rglob('*.cpp'):
        try:
            text = p.read_text(encoding='utf-8', errors='replace')
        except Exception:
            continue
        if '::' + method + '(' in text or '::' + method + ' ' in text:
            hits.append(str(p.relative_to(ROOT)))
    if len(hits) == 1:
        return hits[0]
    if hits:
        # 2) 多个命中时，优先文件名与类名一致。
        want = cls + '.cpp'
        for h in hits:
            if h.endswith('/' + want):
                return h
        return hits[0]

    # 3) 兜底：按方法名在 .cpp 中找定义式。
    for p in base.rglob('*.cpp'):
        try:
            text = p.read_text(encoding='utf-8', errors='replace')
        except Exception:
            continue
        if re.search(r'\b' + re.escape(method) + r'\s*\(', text):
            return str(p.relative_to(ROOT))
    return ''


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--triage', default=str(TRIAGE))
    ap.add_argument('--pkg-dir', default=str(PKG_DIR))
    ap.add_argument('--queue', default=str(QUEUE))
    args = ap.parse_args()

    rows = list(csv.DictReader(open(args.triage, encoding='utf-8'),
                               delimiter='\t'))

    # 解析 src_file 为空的 NEEDS_REVERSE。
    missing = [r for r in rows if not r['src_file'].strip()]
    if missing:
        dm = demangle([r['name'] for r in missing])
        for r in missing:
            r['src_file'] = resolve_tu(r['service'], dm.get(r['name'], ''))

    pkg = Path(args.pkg_dir)
    pkg.mkdir(parents=True, exist_ok=True)
    by_tu = defaultdict(list)
    for r in rows:
        tu = r['src_file'].strip() or '<unresolved>'
        by_tu[(r['service'], tu)].append(r)

    queue_rows = []
    for (svc, tu), funcs in sorted(by_tu.items()):
        buckets = ','.join(sorted({f['bucket'] for f in funcs}))
        safe = tu.replace('/', '_')
        out_dir = pkg / svc
        out_dir.mkdir(parents=True, exist_ok=True)
        out = out_dir / (safe + '.tsv')
        with out.open('w', encoding='utf-8', newline='') as fh:
            w = csv.writer(fh, delimiter='\t', lineterminator='\n')
            w.writerow(list(rows[0].keys()))
            for f in sorted(funcs, key=lambda x: x['name']):
                w.writerow([f[k] for k in rows[0].keys()])
        queue_rows.append({
            'service': svc,
            'tu': tu,
            'n_funcs': len(funcs),
            'buckets': buckets,
            'status': 'todo',
            'owner': '',
            'pkg': str(out.relative_to(ROOT)),
        })

    qp = Path(args.queue)
    qp.parent.mkdir(parents=True, exist_ok=True)
    qcols = ['service', 'tu', 'n_funcs', 'buckets', 'status', 'owner', 'pkg']
    with qp.open('w', encoding='utf-8', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=qcols, delimiter='\t',
                           lineterminator='\n')
        w.writeheader()
        for r in queue_rows:
            w.writerow(r)

    n_unresolved = sum(1 for (_, tu) in by_tu if tu == '<unresolved>')
    print(f'TUs={len(by_tu)}  functions={len(rows)}  unresolved={n_unresolved}')
    print(f'queue={qp}')
    print(f'packages={pkg}')


if __name__ == '__main__':
    main()
