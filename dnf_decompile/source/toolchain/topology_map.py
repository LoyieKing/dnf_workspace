#!/usr/bin/env python3
"""非 identical 源文件拓扑分析（符号 -> TU -> 源文件 -> include 依赖分层）。

用法:
  python3 topology_map.py <service> [--out /tmp/topology]

输入:
  - 分类清单:
      DWARF 服务  : /tmp/dwarf_validate/fast_<tag>.txt（行: CLASS<TAB>mangled）
      community   : /tmp/status/community_compare.tsv（自带 file 列）
      其它        : /tmp/status/<svc>_compare.tsv（列: service class mangled demangled）
  - build/<svc>/ 下 .o 文件: nm 建立 mangled -> TU 映射
  - 服务源码根: 见 SERVICE 表

输出（默认 /tmp/topology/<svc>/）:
  files.tsv   非 identical 源文件（含 DIFF/NEAR/MISSING 计数，是否头文件）
  edges.tsv   直接 include 依赖边（仅非 identical 节点之间）
  transitive.tsv  传递闭包依赖（经 identical 中间头文件贯通后的非 identical 依赖）
  layers.txt  Kahn 拓扑分层（Layer 0 = 最底层被依赖根头文件；最大编号 = 顶层非 identical TU）
  scc.txt     强连通分量（include 环，耦合热点）
  fanout.tsv  每个非 identical 节点的下游/上游非 identical 节点数
  graph.dot   可视化用 DOT
"""
import re
import sys
import subprocess
from collections import defaultdict, deque
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import is_exempt_symbol

DECOMP = Path('/home/loyieking/dnf_workspace/dnf_decompile')
SOURCE = DECOMP / 'source'
DWARF_TAG = {
    'channel': 'ch', 'bridge': 'br', 'auction': 'auc', 'point': 'pt',
}

SERVICE = {
    'stun':    {'data': '/tmp/status/stun.tsv',          'build': 'build/stun',    'roots': [SOURCE / 'DNFServer/StunServer']},
    'channel': {'data': '/tmp/dwarf_validate/fast_ch.txt', 'build': 'build/channel', 'roots': [SOURCE / 'ChannelOld/DNFChannelServer']},
    'bridge':  {'data': '/tmp/dwarf_validate/fast_br.txt', 'build': 'build/bridge',  'roots': [SOURCE / 'ChannelOld/DNFChannelBridge']},
    'auction': {'data': '/tmp/dwarf_validate/fast_auc.txt', 'build': 'build/auction', 'roots': [SOURCE / 'DNFServer/GameServer/ServerLab', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'point':   {'data': '/tmp/dwarf_validate/fast_pt.txt', 'build': 'build/point',   'roots': [SOURCE / 'DNFServer/GameServer/ServerLab', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'community': {'data': '/tmp/status/community_compare.tsv', 'build': 'build/community', 'roots': [SOURCE / 'Community', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared']},
    'manager': {'data': '/tmp/status/manager_compare.tsv', 'build': 'build/manager', 'roots': [SOURCE / 'manager', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'dbmw':    {'data': '/tmp/status/dbmw_compare.tsv',    'build': 'build/dbmw',    'roots': [SOURCE / 'dbmw', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'monitor': {'data': '/tmp/status/monitor_compare.tsv', 'build': 'build/monitor', 'roots': [SOURCE / 'monitor', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'guild':   {'data': '/tmp/status/guild_compare.tsv',   'build': 'build/guild',   'roots': [SOURCE / 'guild', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'statics': {'data': '/tmp/status/statics_compare.tsv', 'build': 'build/statics', 'roots': [SOURCE / 'statics', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'relay':   {'data': '/tmp/status/relay_compare.tsv',   'build': 'build/relay',   'roots': [SOURCE / 'relay', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
    'coserver':{'data': '/tmp/status/coserver_compare.tsv','build': 'build/coserver','roots': [SOURCE / 'coserver', SOURCE / 'DNFServer/ServerCommon', SOURCE / 'shared', SOURCE / 'Library3rd']},
}

NOCODE_CLASSES = {'IDENTICAL'}


def run(cmd):
    return subprocess.check_output(cmd, shell=True, text=True, stderr=subprocess.DEVNULL)


def load_classification(svc, data_path):
    """返回 {mangled: class}。DWARF 服务从 fast_*.txt，其余从 TSV。"""
    p = Path(data_path)
    if svc in DWARF_TAG:
        out = {}
        for line in p.read_text(errors='replace').splitlines():
            if '\t' in line:
                cls, mangled = line.split('\t', 1)
                out[mangled.strip()] = cls
        return out
    out = {}
    with p.open(errors='replace') as f:
        header = f.readline().rstrip('\n').split('\t')
        try:
            ci = header.index('class')
            mi = header.index('mangled')
        except ValueError:
            # 无表头
            ci, mi = 1, 2
        for line in f:
            parts = line.rstrip('\n').split('\t')
            if len(parts) <= max(ci, mi):
                continue
            out[parts[mi].strip()] = parts[ci].strip()
    return out


def tu_of_objects(build_dir):
    """返回 {mangled: (obj_relpath, basename)}，遍历 build/<svc> 下所有 .o。"""
    objs = sorted(build_dir.rglob('*.o'))
    mapping = {}
    for obj in objs:
        rel = obj.relative_to(build_dir).as_posix()
        base = obj.stem
        out = run("nm --defined-only '{}'".format(obj))
        for line in out.splitlines():
            parts = line.split()
            if len(parts) == 3 and parts[1] in ('T', 't', 'W', 'w'):
                mapping.setdefault(parts[2], (rel, base))
    return mapping


def find_source(basename, roots, hint):
    """按 .o 基名找对应 .cpp/.h；hint 为 .o 相对路径（含子目录名）。"""
    names = [basename] if basename.endswith(('.cpp', '.h', '.c', '.cc', '.hpp')) \
        else [basename + s for s in ('.cpp', '.h', '.c', '.cc')]
    for name in names:
        cands = []
        for root in roots:
            for f in root.rglob(name):
                cands.append(f)
        if not cands:
            continue
        if len(cands) == 1:
            return cands[0]
        # 多候选：优先目录名与 hint 子目录匹配的
        hint_lower = hint.lower()
        for f in cands:
            if str(f.parent).lower().split('/')[-1] in hint_lower:
                return f
        return cands[0]
    return None


def strip_tu_prefix(base):
    for pre in ('ServerCommon_', 'DNFServerCommon_', 'Common_', 'Library3rd_', 'shared_', 'src_'):
        if base.startswith(pre):
            return base[len(pre):]
    return base


def build_file_index(roots):
    """所有根目录下的 .h/.cpp 索引 {name: [paths]}。"""
    idx = defaultdict(list)
    for root in roots:
        if not root.exists():
            continue
        for f in root.rglob('*'):
            if f.suffix in ('.h', '.hpp', '.cpp', '.c', '.cc', '.inc'):
                idx[f.name].append(f)
    return idx


def resolve_include(inc, from_file, file_index, roots):
    """解析 #include 到绝对路径；失败返回 None。"""
    cand = from_file.parent / inc
    if cand.exists():
        return cand.resolve()
    for f in file_index.get(inc, []):
        return f.resolve()
    # 大小写不敏感兜底
    for name, paths in file_index.items():
        if name.lower() == inc.lower():
            return paths[0].resolve()
    return None


INCLUDE_RE = re.compile(r'^\s*#\s*include\s*[<"]([^>"]+)[>"]')


def includes_of(path):
    out = []
    try:
        text = path.read_text(errors='replace')
    except OSError:
        return out
    for line in text.splitlines():
        m = INCLUDE_RE.match(line)
        if m:
            out.append(m.group(1))
    return out


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        sys.exit(1)
    svc = args[0]
    out_root = Path('/tmp/topology') if '--out' not in args else Path(args[args.index('--out') + 1])
    cfg = SERVICE[svc]
    out_dir = out_root / svc
    out_dir.mkdir(parents=True, exist_ok=True)

    cls_map = load_classification(svc, cfg['data'])
    non_ident = {s for s, c in cls_map.items()
                 if c in ('NEAR', 'DIFF', 'MISSING') and not is_exempt_symbol(s)}
    build_dir = DECOMP / cfg['build']
    tu_map = tu_of_objects(build_dir)

    # 符号 -> TU（.o）-> 源文件
    sym_tu = {}
    for sym in non_ident:
        if sym in tu_map:
            sym_tu[sym] = tu_map[sym]

    roots = cfg['roots']
    file_index = build_file_index(roots)
    tu_file = {}
    for sym, (rel, base) in sym_tu.items():
        if base not in tu_file:
            src = find_source(base, roots, rel)
            if src is None:
                src = find_source(strip_tu_prefix(base), roots, rel)
            tu_file[base] = src
        src = tu_file[base]
        if src is not None:
            sym_tu[sym] = (rel, base, src)

    # TSV 若自带 file 列则优先（当前仅个别服务有）
    p = Path(cfg['data'])
    with p.open(errors='replace') as f:
        header = f.readline().rstrip('\n').split('\t')
    if 'file' in header and svc not in DWARF_TAG:
        with p.open(errors='replace') as f:
            header = f.readline().rstrip('\n').split('\t')
            ci = header.index('class'); mi = header.index('mangled'); fi = header.index('file')
            for line in f:
                parts = line.rstrip('\n').split('\t')
                if len(parts) <= max(ci, mi, fi):
                    continue
                cls, mangled, frel = parts[ci], parts[mi], parts[fi]
                if cls not in ('NEAR', 'DIFF', 'MISSING'):
                    continue
                src = (SOURCE / frel).resolve()
                if src.exists():
                    sym_tu[mangled] = ('', frel, src)

    # 非 identical TU（按符号 class 计数）
    file_stats = defaultdict(lambda: defaultdict(int))
    no_src = 0
    for sym, v in list(sym_tu.items()):
        if len(v) == 3:
            file_stats[v[2]][cls_map[sym]] += 1
        else:
            no_src += 1

    tus = sorted(file_stats)
    rel_files = {}
    for f in tus:
        try:
            rel_files[f] = f.relative_to(SOURCE).as_posix()
        except ValueError:
            rel_files[f] = f.as_posix()

    # 未映射符号统计
    unmapped = non_ident - set(sym_tu)

    # include 图（TU + 传递依赖头文件），解析所有涉及文件的 include
    pending = list(tus)
    seen = set(tus)
    inc_edges = defaultdict(set)   # from -> included（全部本地头）
    while pending:
        f = pending.pop()
        for inc in includes_of(f):
            tgt = resolve_include(inc, f, file_index, roots)
            if tgt is None:
                continue
            inc_edges[f].add(tgt)
            if tgt not in seen:
                seen.add(tgt)
                pending.append(tgt)

    # 节点：非 identical TU + 传递依赖的本地头文件
    header_suffix = ('.h', '.hpp')
    headers = {n for n in seen if n.suffix in header_suffix}
    nodes = set(tus) | headers
    rel_nodes = {}
    for n in nodes:
        try:
            rel_nodes[n] = n.relative_to(SOURCE).as_posix()
        except ValueError:
            rel_nodes[n] = n.as_posix()

    def reachable(start):
        seen2 = set()
        stack = [start]
        while stack:
            n = stack.pop()
            for m in inc_edges.get(n, ()):
                if m not in seen2:
                    seen2.add(m)
                    stack.append(m)
        return seen2

    # 每个 TU 传递依赖的头文件集合
    tu_headers = {f: reachable(f) & headers for f in tus}
    # 每个头文件被多少个非 identical TU 依赖（共享度）
    header_tus = defaultdict(set)
    for f, hs in tu_headers.items():
        for h in hs:
            header_tus[h].add(f)
    shared_headers = {h: ts for h, ts in header_tus.items() if len(ts) >= 2}

    # 直接依赖边（节点间）
    direct = defaultdict(set)
    for f in nodes:
        for g in inc_edges.get(f, ()):
            if g in nodes:
                direct[f].add(g)

    # SCC（Tarjan）on direct edges
    index = {}
    low = {}
    onstack = set()
    stack = []
    sccs = []
    counter = [0]

    def strongconnect(v):
        index[v] = low[v] = counter[0]
        counter[0] += 1
        stack.append(v); onstack.add(v)
        for w in direct.get(v, ()):
            if w not in index:
                strongconnect(w)
                low[v] = min(low[v], low[w])
            elif w in onstack:
                low[v] = min(low[v], index[w])
        if low[v] == index[v]:
            comp = []
            while True:
                w = stack.pop(); onstack.discard(w)
                comp.append(w)
                if w == v:
                    break
            sccs.append(comp)

    for f in nodes:
        if f not in index:
            strongconnect(f)

    cycles = [c for c in sccs if len(c) > 1]

    # Kahn 分层（压缩 SCC 后的 DAG）
    comp_of = {}
    for c in sccs:
        for f in c:
            comp_of[f] = c[0]
    comp_edges = defaultdict(set)
    for f in nodes:
        for g in direct.get(f, ()):
            cf, cg = comp_of[f], comp_of[g]
            if cf != cg:
                comp_edges[cf].add(cg)
    indeg = defaultdict(int)
    for cf, outs in comp_edges.items():
        for cg in outs:
            indeg[cg] += 1
    q = deque([c for c in sccs if indeg[comp_of[c[0]]] == 0])
    layers = []
    while q:
        layer = []
        for _ in range(len(q)):
            c = q.popleft()
            layer.extend(c)
            for cg in comp_edges.get(comp_of[c[0]], ()):
                indeg[cg] -= 1
                if indeg[cg] == 0:
                    q.append([cc for cc in sccs if cc[0] == cg][0])
        layers.append(sorted(layer, key=lambda x: rel_nodes[x]))

    # 输出
    with (out_dir / 'files.tsv').open('w') as fh:
        fh.write('file\tdiff\tnear\tmissing\tsum\n')
        for f in tus:
            st = file_stats[f]
            fh.write('{}\t{}\t{}\t{}\t{}\n'.format(
                rel_files[f], st['DIFF'], st['NEAR'], st['MISSING'],
                sum(st.values())))
    with (out_dir / 'headers.tsv').open('w') as fh:
        fh.write('header\tshared\tdepending_tus\tdirect_included_by\n')
        for h in sorted(headers, key=lambda x: rel_nodes[x]):
            ts = header_tus.get(h, set())
            fh.write('{}\t{}\t{}\t{}\n'.format(
                rel_nodes[h], len(ts) >= 2, len(ts), len(direct.get(h, ()))))
    with (out_dir / 'coupling.tsv').open('w') as fh:
        fh.write('header\tdepending_tus\n')
        for h in sorted(shared_headers, key=lambda x: rel_nodes[x]):
            fh.write('{}\t{}\n'.format(
                rel_nodes[h], ','.join(sorted(rel_files[f] for f in shared_headers[h]))))
    with (out_dir / 'edges.tsv').open('w') as fh:
        fh.write('from\tto\n')
        for f in nodes:
            for g in sorted(direct[f], key=lambda x: rel_nodes[x]):
                fh.write('{}\t{}\n'.format(rel_nodes[f], rel_nodes[g]))
    with (out_dir / 'layers.txt').open('w') as fh:
        for i, layer in enumerate(reversed(layers)):
            fh.write('Layer {} ({} files):\n'.format(i, len(layer)))
            for f in layer:
                fh.write('  {}\n'.format(rel_nodes[f]))
    with (out_dir / 'scc.txt').open('w') as fh:
        if cycles:
            for c in sorted(cycles, key=len, reverse=True):
                fh.write('CYCLE ({} nodes): {}\n'.format(
                    len(c), ', '.join(rel_nodes[f] for f in sorted(c, key=lambda x: rel_nodes[x]))))
        else:
            fh.write('no include cycles among nodes\n')
    with (out_dir / 'fanout.tsv').open('w') as fh:
        fh.write('node\tdownstream_nodes\tdirect_deps\tdepending_tus\n')
        for f in nodes:
            fh.write('{}\t{}\t{}\t{}\n'.format(
                rel_nodes[f],
                len(reachable(f) & nodes) if f not in headers else len(tu_headers.get(f, set())),
                len(direct[f]),
                len(header_tus.get(f, set())) if f in headers else 0))
    with (out_dir / 'graph.dot').open('w') as fh:
        fh.write('digraph "{}" {{\n'.format(svc))
        fh.write('  rankdir=LR;\n')
        for f in nodes:
            shape = 'box' if f in headers else 'ellipse'
            fh.write('  "{}" [label="{}", shape={}];\n'.format(rel_nodes[f], rel_nodes[f], shape))
        for f in nodes:
            for g in direct[f]:
                fh.write('  "{}" -> "{}";\n'.format(rel_nodes[f], rel_nodes[g]))
        fh.write('}\n')

    # 摘要
    print('== {} =='.format(svc))
    print('classified symbols: {}; non-identical: {}'.format(len(cls_map), len(non_ident)))
    print('mapped to TU: {}; unmapped: {}; mapped-but-no-source: {}'.format(
        len(sym_tu) - no_src, len(unmapped), no_src))
    print('non-identical TUs: {}; involved headers: {}'.format(len(tus), len(headers)))
    print('shared headers (>=2 TUs): {}'.format(len(shared_headers)))
    print('direct include edges: {}'.format(sum(len(v) for v in direct.values())))
    print('layers: {}; cycles: {}'.format(len(layers), len(cycles)))
    by_class = defaultdict(int)
    for st in file_stats.values():
        for k, v in st.items():
            by_class[k] += v
    print('function classes in files:', dict(by_class))
    print('output:', out_dir)


if __name__ == '__main__':
    main()
