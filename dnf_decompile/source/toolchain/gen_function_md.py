#!/usr/bin/env python3
"""按 manifest 为每个服务的非 identical 函数生成 markdown 报告。

每个 md 包含：
  1. ORIG 与重建汇编的完整 diff（整函数，归一化口径与 compare_common 一致）
     + 两侧完整原始汇编附录
  2. Ghidra 对该导出函数的反编译 C
  3. 我们源码中该函数的定义（对象文件 -> 源文件 -> 签名定位 + 括号匹配提取）

用法：
  python3 gen_function_md.py --services stun
  python3 gen_function_md.py --services auction point --limit 20
"""
import argparse
import bisect
import csv
import difflib
import hashlib
import os
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import demangle_batch, load_disasm, norm_identical
from report_resolve import (
    build_addr_map,
    pseudo_lines,
    trim_trailing_nops,
)

ROOT = Path('/home/loyieking/dnf_workspace/dnf_decompile')
INSTALLER = Path('/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople')
OUT_ROOT = ROOT / 'function_reports'
SOURCE_ROOT = ROOT / 'source'
VENDOR_DIRS = (
    SOURCE_ROOT / 'Library3rd',
)

# 单函数模式的磁盘缓存：二进制/对象文件的 nm、disasm、符号映射按
# mtime+size 失效，避免 subagent 循环里每次调用都重复全量扫描。
_CACHE_DIR = Path('/tmp/df_md_single_cache')


def _disk_cache(key, loader, name):
    """按 key（含文件 mtime+size）磁盘缓存；命中返回，否则调用 loader 并写入。"""
    import pickle
    cf = _CACHE_DIR / '{}_{}.pkl'.format(
        name, hashlib.sha1(repr(key).encode()).hexdigest()[:20])
    try:
        if cf.exists():
            with cf.open('rb') as fh:
                saved_key, val = pickle.load(fh)
            if saved_key == key:
                return val
    except Exception:
        pass
    val = loader()
    try:
        _CACHE_DIR.mkdir(parents=True, exist_ok=True)
        with cf.open('wb') as fh:
            pickle.dump((key, val), fh)
    except Exception:
        pass
    return val


def _bin_cache_key(bin_path):
    st = os.stat(bin_path)
    return (str(bin_path), st.st_mtime_ns, st.st_size)


def _cached_load_disasm(bin_path):
    return _disk_cache(_bin_cache_key(bin_path),
                       lambda: load_disasm(str(bin_path)), 'disasm')


def _cached_syms(bin_path):
    from gen_report_manifest import syms as _syms_fn
    return _disk_cache(_bin_cache_key(bin_path),
                       lambda: _syms_fn(str(bin_path)), 'syms')


_BASENAME_INDEX = None
_HEADER_TEXTS = {}


def _basename_index():
    """basename -> 源文件路径 索引（共享缓存 v3，绝对路径；避免逐符号/逐进程全树扫描）。"""
    global _BASENAME_INDEX
    if _BASENAME_INDEX is not None:
        return _BASENAME_INDEX
    cache_file = OUT_ROOT / '.basename_index.json'
    if cache_file.exists():
        import json
        try:
            data = json.loads(cache_file.read_text(encoding='utf-8'))
            raw = data.get('index') if isinstance(data, dict) else data
            if raw and all(str(k) and all(str(p).startswith(str(SOURCE_ROOT))
                                         for p in v) for k, v in raw.items()):
                _BASENAME_INDEX = defaultdict(list, raw)
                return _BASENAME_INDEX
        except Exception:
            pass
    idx = defaultdict(list)
    for p in SOURCE_ROOT.rglob('*.cpp'):
        idx[p.stem].append(str(p))
    for p in SOURCE_ROOT.rglob('*.c'):
        idx[p.stem].append(str(p))
    try:
        import json
        cache_file.parent.mkdir(parents=True, exist_ok=True)
        cache_file.write_text(json.dumps({'version': 3, 'index': dict(idx)}),
                              encoding='utf-8')
    except Exception:
        pass
    _BASENAME_INDEX = idx
    return idx


def service_header_texts(svc, src_paths):
    """收集服务相关目录下的头文件文本（模板/内联定义兜底），按服务缓存。"""
    global _HEADER_TEXTS
    if svc in _HEADER_TEXTS:
        return _HEADER_TEXTS[svc]
    root_dirs = set()
    for sp in src_paths:
        root_dirs.add(str(Path(sp).parent))
    root_dirs.update({
        str(SOURCE_ROOT / 'DNFServer' / 'ServerCommon'),
        str(SOURCE_ROOT / 'shared'),
        str(SOURCE_ROOT / 'shared' / 'common' / 'include'),
        str(SOURCE_ROOT / 'shared' / 'packet' / 'include'),
    })
    texts = {}
    for rd in sorted(root_dirs):
        base = Path(rd)
        if not base.exists():
            continue
        for p in list(base.rglob('*.h'))[:600] + list(base.rglob('*.hpp'))[:300]:
            try:
                texts[str(p)] = p.read_text(encoding='utf-8', errors='replace')
            except Exception:
                continue
    _HEADER_TEXTS[svc] = texts
    return texts

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

# 需要 md 的状态
MD_STATUSES = ('NEAR', 'DIFF')


def run(cmd):
    return subprocess.check_output(cmd, text=True, stderr=subprocess.DEVNULL)


def slice_by_range(loaded, start, stop):
    insn, addrs = loaded
    lo = bisect.bisect_left(addrs, start)
    hi = bisect.bisect_left(addrs, stop)
    return [insn[addrs[i]] for i in range(lo, hi)]


def unified_full_diff(a_text, b_text, a_title, b_title):
    """归一化整函数 unified diff（上下文覆盖全部行）。"""
    if a_text == b_text:
        return '（伪代码化后完全一致：数据地址差异已解析为相同内容/符号）\n\n```asm\n{}\n```'.format(
            '\n'.join(a_text))
    diff = difflib.unified_diff(
        a_text, b_text, fromfile=a_title, tofile=b_title, lineterm='', n=10 ** 6)
    return '```diff\n{}\n```'.format('\n'.join(diff))


def sanitize_filename(name):
    s = re.sub(r'[^A-Za-z0-9._-]', '_', name)
    if len(s) > 160:
        h = hashlib.sha1(name.encode()).hexdigest()[:10]
        s = s[:150] + '_' + h
    return s + '.md'


# ------------------------------------------------------------------
# 源码定位：对象文件 -> 符号 -> 源文件 -> 函数定义文本
# ------------------------------------------------------------------

def obj_source_candidates(obj_path):
    """由对象文件路径推断可能的源文件。"""
    obj_path = str(obj_path)
    m = re.search(r'/CMakeFiles/[^/]+\.dir/(.+)\.o$', obj_path)
    if m:
        src = m.group(1)
        if src.startswith('/'):
            return [Path(src)]
        # CMake 对绝对源码路径会把前导 '/' 去掉后嵌入对象路径
        # （如 .../CMakeFiles/foo.dir/home/user/.../src.cpp.o），
        # 直接 ROOT/src 会拼出重复前缀；先按绝对路径还原，再退回相对 ROOT。
        abs_guess = Path('/') / src
        if abs_guess.exists():
            return [abs_guess]
        return [ROOT / src]
    base = Path(obj_path).stem
    return None  # 交由 basename 搜索


def _list_build_objects(svc):
    """列出服务构建目录下的对象文件（与 collect_object_map 同一发现逻辑）。"""
    build_dir = ROOT / 'build' / svc
    if not build_dir.exists():
        return []
    objs = []
    for p in build_dir.rglob('*.o'):
        sp = str(p)
        if '/CMakeFiles/' in sp and '.dir/' in sp and sp.endswith('.o'):
            objs.append(p)
        elif p.parent == build_dir:
            objs.append(p)
        elif p.parent.parent == build_dir:
            # 预编译对象子目录（如 relay 的 c5/*.o，非 CMakeFiles 路径）
            objs.append(p)
    return objs


def _cached_collect_object_map(svc):
    """对象符号映射的磁盘缓存：对象文件集合的 mtime+size 变化即失效。"""
    objs = _list_build_objects(svc)
    try:
        obj_key = tuple(sorted(
            (str(p), p.stat().st_mtime_ns, p.stat().st_size) for p in objs))
    except OSError:
        obj_key = None
    return _disk_cache(('objmap', svc, obj_key),
                       lambda: collect_object_map(svc), 'objmap')


def collect_object_map(svc):
    """返回 {symbol: set(source_path)}；并返回 {obj: set(symbols)}。"""
    objs = _list_build_objects(svc)
    obj_syms = {}
    sym_to_obj = defaultdict(set)
    for obj in objs:
        try:
            out = run(['nm', '--defined-only', str(obj)])
        except Exception:
            continue
        syms = set()
        for line in out.splitlines():
            p = line.split(None, 3)
            if len(p) == 4 and p[2] in 'TtWw':
                syms.add(p[3])
            elif len(p) == 3 and p[1] in 'TtWw':
                syms.add(p[2])
        if not syms:
            continue
        obj_syms[obj] = syms
        for s in syms:
            sym_to_obj[s].add(obj)
    return sym_to_obj, obj_syms


def source_paths_for_symbol(svc, symbol, sym_to_obj, obj_syms):
    """返回符号对应的候选源文件路径列表。"""
    cands = set()
    for obj in sym_to_obj.get(symbol, ()):
        direct = obj_source_candidates(obj)
        if direct:
            cands.add(str(direct[0]))
    if cands:
        return sorted(cands)
    # basename 搜索：任一定义了该符号的对象，按 basename 找同名源文件
    idx = _basename_index()
    for obj in sym_to_obj.get(symbol, ()):
        base = Path(obj).stem
        for hit in idx.get(base, ()):
            cands.add(hit)
    return sorted(cands)


def is_our_code_path(path):
    """是否属于我们自己写的源码（排除 Library3rd 等 vendored 目录）。"""
    p = str(Path(path).resolve())
    return not any(p.startswith(str(v)) for v in VENDOR_DIRS)


def _collapse_ws(s):
    return re.sub(r'\s+', ' ', s).strip()


def _brace_match_end(lines, start_line_idx, brace_col):
    """从 (start_line_idx, brace_col) 的 '{' 开始括号匹配，返回闭合行号。"""
    depth = 0
    in_str = False
    in_chr = False
    line_comment = False
    block_comment = False
    for i in range(start_line_idx, len(lines)):
        line = lines[i]
        j = brace_col if i == start_line_idx else 0
        while j < len(line):
            c = line[j]
            nxt = line[j + 1] if j + 1 < len(line) else ''
            if line_comment:
                break
            if block_comment:
                if c == '*' and nxt == '/':
                    block_comment = False
                    j += 2
                    continue
                j += 1
                continue
            if in_str:
                if c == '\\':
                    j += 2
                    continue
                if c == '"':
                    in_str = False
                j += 1
                continue
            if in_chr:
                if c == '\\':
                    j += 2
                    continue
                if c == "'":
                    in_chr = False
                j += 1
                continue
            if c == '/' and nxt == '/':
                line_comment = True
                j += 2
                continue
            if c == '/' and nxt == '*':
                block_comment = True
                j += 2
                continue
            if c == '"':
                in_str = True
                j += 1
                continue
            if c == "'":
                in_chr = True
                j += 1
                continue
            if c == '{':
                depth += 1
            elif c == '}':
                depth -= 1
                if depth == 0:
                    return i
            j += 1
        line_comment = False
    return None


def _split_params(text):
    """按顶层逗号切分参数列表（尊重 () 与 [] 嵌套）。"""
    parts = []
    depth = 0
    cur = ''
    for ch in text:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        parts.append(cur)
    return [p.strip() for p in parts if p.strip()]


def _type_tokens(seg):
    """参数片段的类型 token 集合（容忍 const 位置、指针空格、参数名差异）。"""
    return set(re.findall(r'[A-Za-z_][A-Za-z0-9_:<>]*|\*|&', seg))


def _params_match(src_params, dem_params):
    if len(src_params) != len(dem_params):
        return False
    dem_toks = [_type_tokens(p) for p in dem_params]
    for sp, dt in zip(src_params, dem_toks):
        st = _type_tokens(sp)
        if dt <= st:
            continue
        # 函数指针参数常被源码写成 typedef 名（如 handler），token 子集无法匹配：
        # 若 demangled 是函数指针（含 * 与 ( )）而源码参数只有 1-2 个 token，视为匹配
        if any(c in ('*', '(') for c in dt) and len(st) <= 2:
            continue
        return False
    return True


def _trailer_ok(t):
    """')' 之后、'{' 之前只允许空白/限定符；出现 ; = 或额外 ) 均视为非定义。"""
    return not any(c in t for c in ';=)')


def _name_variants(demangled, name, dem_params):
    """生成匹配用名称变体：全限定名 -> 逐级后缀 -> 裸函数名。"""
    variants = [name]
    if '::' in name:
        parts = name.split('::')
        for i in range(1, len(parts)):
            variants.append('::'.join(parts[i:]))
    return variants


def extract_function_definition(src_path, demangled, file_cache=None,
                                name_variants=None):
    """在源文件中定位函数定义（按名称 + 参数 token 匹配 + 括号提取）。"""
    if file_cache is not None and src_path in file_cache:
        text = file_cache[src_path]
    else:
        try:
            text = src_path.read_text(encoding='utf-8', errors='replace')
        except Exception:
            return None, None
        if file_cache is not None:
            file_cache[src_path] = text
    lines = text.splitlines()
    d = _collapse_ws(demangled).rstrip()
    d = re.sub(r'\s*\[clone[^]]*\]$', '', d)
    d = re.sub(r'\s+const\s*$', '', d)
    # 参数列表是末尾最后一个平衡括号组（支持函数指针参数、operator() 等）
    depth = 0
    lp = -1
    for i in range(len(d) - 1, -1, -1):
        ch = d[i]
        if ch == ')':
            depth += 1
        elif ch == '(':
            depth -= 1
            if depth == 0:
                lp = i
                break
    if lp < 0:
        name = d
        dem_params = []
    else:
        name = d[:lp].strip()
        dem_params = _split_params(d[lp + 1:-1])
    if not name:
        return None, None
    # 名称可能出现在声明、定义、调用中；逐行逐变体找候选定义
    for cand_name in (name_variants or _name_variants(d, name, dem_params)):
        for i, raw in enumerate(lines):
            pos = raw.find(cand_name)
            if pos < 0:
                continue
            # 从名称后找 '('（可能跨行）
            opos = raw.find('(', pos + len(cand_name))
            if opos < 0:
                continue
            # 提取参数文本：跨行直到括号闭合（' {' 与 ')' 同行等场景不提前中断）
            depth = 0
            segs = []
            end_idx = None
            for k in range(i, min(i + 12, len(lines))):
                s = lines[k] if k > i else lines[k][opos + 1:]
                depth += s.count('(') - s.count(')')
                if depth <= 0:
                    close_col = s.rfind(')')
                    segs.append(s[:close_col])
                    abs_close = (opos + 1 + close_col) if k == i else close_col
                    end_idx = (k, abs_close)
                    break
                segs.append(s)
            if end_idx is None:
                continue
            src_params = _split_params(' '.join(segs))
            # C 符号（如 main）demangle 后无参数列表：仅按名称 + 函数体匹配
            if dem_params and not _params_match(src_params, dem_params):
                continue
            # 找到 ')' 后的 '{'（同一行或后续行；出现 ; = 或多余 ) 则非定义）
            brace_idx = None
            k2, c2 = end_idx
            trailer = lines[k2][c2 + 1:]
            if '{' in trailer:
                bpos = trailer.find('{')
                if _trailer_ok(trailer[:bpos]):
                    brace_idx = (k2, c2 + 1 + bpos)
            else:
                if ';' in trailer or '=' in trailer:
                    continue
                for k in range(k2 + 1, min(k2 + 15, len(lines))):
                    s = lines[k]
                    if '{' in s:
                        bpos = s.find('{')
                        if _trailer_ok(s[:bpos]):
                            brace_idx = (k, bpos)
                        break
                    if ';' in s or '=' in s:
                        break
            if brace_idx is None:
                continue
            k, bpos = brace_idx
            end = _brace_match_end(lines, k, bpos)
            if end is not None:
                return '\n'.join(lines[i:end + 1]), i + 1
    return None, None


def parse_decompiled(decomp_path):
    """解析反编译输出 -> {name: c_code}。"""
    if not decomp_path.exists():
        return {}
    out = {}
    cur = None
    buf = []
    for line in decomp_path.read_text(encoding='utf-8', errors='replace').splitlines():
        m = re.match(r'^==== (.*) @ ([0-9a-f]+) ====$', line)
        if m:
            if cur is not None:
                out[cur] = '\n'.join(buf)
            cur = m.group(1)
            buf = []
        else:
            if cur is not None:
                buf.append(line)
    if cur is not None:
        out[cur] = '\n'.join(buf)
    return out


def header_candidates(symbol, sym_to_obj):
    """由定义该符号的对象文件的 .o.d 依赖收集源/头文件候选。"""
    cands = set()
    for obj in sym_to_obj.get(symbol, ()):
        dep = Path(str(obj) + '.d')
        if not dep.exists():
            continue
        try:
            text = dep.read_text(encoding='utf-8', errors='replace')
        except Exception:
            continue
        for tok in text.split():
            if tok.endswith(('.h', '.hpp', '.hh', '.cpp', '.c')):
                p = Path(tok)
                if p.exists() and (SOURCE_ROOT in p.parents or p == SOURCE_ROOT):
                    cands.add(str(p))
    return sorted(cands)


def build_md(svc, row, o_loaded, n_loaded, decomp, src_cache, sym_to_obj,
             obj_syms, file_cache):
    status, name, oaddr, osize, naddr, nsize = row
    oaddr = int(oaddr, 16)
    osize = int(osize, 16)
    naddr = int(naddr, 16)
    nsize = int(nsize, 16)
    dem = src_cache['dem'].get(name, name)

    o_insns = slice_by_range(o_loaded, oaddr, oaddr + osize)
    n_insns = slice_by_range(n_loaded, naddr, naddr + nsize)
    o_norm = norm_identical(o_insns)
    n_norm = norm_identical(n_insns)

    parts = []
    parts.append('# {}\n'.format(name))
    parts.append('`{}`\n'.format(dem))
    parts.append('| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |')
    parts.append('|---|---|---|---|---|---|')
    parts.append('| {} | {} | `0x{:x}` | `0x{:x}` | `0x{:x}` | `0x{:x}` |\n'.format(
        svc, status, oaddr, osize, naddr, nsize))

    o_map = src_cache['o_map']
    n_map = src_cache['n_map']
    o_ps = trim_trailing_nops(pseudo_lines(o_norm, o_map, fn_base=oaddr))
    n_ps = trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr))
    parts.append('## 1. 汇编 diff（完整函数，伪代码化）\n')
    parts.append('归一化口径：直接跳转/调用目标地址归一化为 `<T>`；'
                 '字符串/全局变量地址替换为其内容或 `&符号名`'
                 '（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。\n')
    parts.append(unified_full_diff(o_ps, n_ps, 'ORIG（伪代码化）', 'OURS（伪代码化）'))

    parts.append('## 2. Ghidra 反编译 C\n')
    c = decomp.get(name)
    if c is None:
        parts.append('*（Ghidra 反编译输出中未找到该函数，或反编译失败）*\n')
    else:
        parts.append('```c\n{}\n```\n'.format(c.rstrip()))

    parts.append('## 3. 我们的源码函数\n')
    tu_paths = src_cache['paths'].get(name, []) + header_candidates(name, sym_to_obj)
    hdr_paths = [hp for hp in src_cache.get('hdrs', []) if hp not in tu_paths]
    src_paths = tu_paths + hdr_paths
    found = False
    for sp in src_paths:
        path = Path(sp)
        body, line_no = extract_function_definition(
            path, dem, file_cache)
        if body:
            try:
                rel = path.resolve().relative_to(ROOT.resolve())
                label = str(rel)
            except Exception:
                rel = path.resolve()
                label = str(rel)
            parts.append('定义于 [{}]({})（约第 {} 行）：\n'.format(
                label, rel, line_no))
            parts.append('```cpp\n{}\n```\n'.format(body))
            found = True
            break
    if not found:
        if src_paths:
            labels = []
            for p in src_paths[:8]:
                try:
                    labels.append(str(Path(p).resolve().relative_to(ROOT.resolve())))
                except Exception:
                    labels.append(str(p))
            extra = '' if len(src_paths) <= 8 else ' 等 {} 个文件'.format(len(src_paths))
            parts.append('*未能在以下候选源文件中定位定义：{}{}*\n'.format(
                ', '.join(labels), extra))
        else:
            parts.append('*未在重建对象中定位到该符号的源文件*（可能是静态库/第三方对象，'
                         '或符号来自内联/模板展开）。\n')
    return '\n'.join(parts)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--services', nargs='*', default=None)
    ap.add_argument('--limit', type=int, default=0)
    ap.add_argument('--function', default=None,
                    help='只处理单个函数：相同(IDENTICAL/IDENTICAL_AE)则删除其 md，'
                         '否则生成/更新该函数的 md')
    ap.add_argument('--out', default=str(OUT_ROOT))
    args = ap.parse_args()

    services = sorted(SERVICES) if not args.services else args.services
    out_root = Path(args.out)
    for svc in services:
        if svc not in SERVICES:
            print('unknown:', svc)
            continue
        rel_o, rel_n = SERVICES[svc]
        orig_path = INSTALLER / rel_o
        new_path = ROOT / rel_n
        svc_dir = out_root / svc
        manifest_path = svc_dir / 'manifest.tsv'
        decomp_path = svc_dir / 'decompiled.txt'
        if not manifest_path.exists():
            print('SKIP {} (no manifest)'.format(svc))
            continue
        if args.function is None:
            # 清空旧输出：删除该服务目录下所有历史 *.md（README 与函数 md 均由本次重新生成）
            cleared = 0
            for old_md in svc_dir.glob('*.md'):
                old_md.unlink()
                cleared += 1
            if cleared:
                print('== {}: cleared {} stale md files'.format(svc, cleared),
                      flush=True)
        print('== {}: loading disasm + objects ...'.format(svc), flush=True)
        o_loaded = _cached_load_disasm(orig_path)
        n_loaded = _cached_load_disasm(new_path)
        o_map = build_addr_map(str(orig_path))
        n_map = build_addr_map(str(new_path))
        sym_to_obj, obj_syms = _cached_collect_object_map(svc)

        if args.function:
            name = args.function
            status, oaddr, osize, naddr, nsize = classify_one(
                orig_path, new_path, o_loaded, n_loaded, o_map, n_map, name)
            fname = sanitize_filename(name)
            md_path = svc_dir / fname
            if status in ('IDENTICAL', 'IDENTICAL_AE'):
                if md_path.exists():
                    md_path.unlink()
                    print('== {}: {} -> {} md 已删除'.format(svc, name, status),
                          flush=True)
                else:
                    print('== {}: {} -> {}（无 md）'.format(svc, name, status),
                          flush=True)
                update_manifest_single(manifest_path, name, status, None, '')
                continue
            dem = demangle_batch([name])
            src_cache = {'dem': dem,
                         'paths': {name: source_paths_for_symbol(
                             svc, name, sym_to_obj, obj_syms)},
                         'md': {}, 'o_map': o_map, 'n_map': n_map}
            hdr_texts = service_header_texts(svc, src_cache['paths'][name])
            src_cache['hdrs'] = list(hdr_texts.keys())
            file_cache = {Path(k): v for k, v in hdr_texts.items()}
            row = (status, name, hex(oaddr), hex(osize),
                   hex(naddr), hex(nsize))
            decomp = parse_decompiled(decomp_path)
            md_text = build_md(svc, row, o_loaded, n_loaded, decomp,
                               src_cache, sym_to_obj, obj_syms, file_cache)
            md_path.write_text(md_text, encoding='utf-8')
            update_manifest_single(manifest_path, name, status, row, fname)
            print('== {}: {} -> {} md 已生成/更新'.format(svc, name, status),
                  flush=True)
            continue

        rows = []
        with manifest_path.open() as fh:
            for r in csv.DictReader(fh, delimiter='\t'):
                if r['status'] in MD_STATUSES:
                    rows.append((r['status'], r['name'], r['orig_addr'],
                                 r['orig_size'], r['new_addr'], r['new_size']))
        print('   targets:', len(rows), flush=True)
        if args.limit:
            rows = rows[:args.limit]
        names = [r[1] for r in rows]
        dem = demangle_batch(names)
        src_cache = {'dem': dem, 'paths': {}, 'md': {}, 'o_map': o_map,
                     'n_map': n_map}
        for name in names:
            src_cache['paths'][name] = source_paths_for_symbol(
                svc, name, sym_to_obj, obj_syms)
        rows_ours = []
        skipped_no_src = 0
        skipped_vendored = 0
        for r in rows:
            paths = src_cache['paths'][r[1]]
            ours = [p for p in paths if is_our_code_path(p)]
            if ours:
                rows_ours.append(r)
            elif paths:
                skipped_vendored += 1
            else:
                skipped_no_src += 1
        print('   ours: {} (skip no-src: {}, skip vendored: {})'.format(
            len(rows_ours), skipped_no_src, skipped_vendored), flush=True)
        (svc_dir / 'scope.txt').write_text(
            'targets={}\nours={}\nskip_no_source={}\nskip_vendored={}\n'.format(
                len(rows), len(rows_ours), skipped_no_src, skipped_vendored),
            encoding='utf-8')
        rows = rows_ours
        decomp = parse_decompiled(decomp_path)

        md_dir = svc_dir
        md_dir.mkdir(parents=True, exist_ok=True)
        mapping = []
        all_src_paths = [p for r in rows for p in src_cache['paths'][r[1]]]
        hdr_texts = service_header_texts(svc, all_src_paths)
        src_cache['hdrs'] = list(hdr_texts.keys())
        file_cache = {Path(k): v for k, v in hdr_texts.items()}
        for idx, row in enumerate(rows):
            md = build_md(svc, row, o_loaded, n_loaded, decomp, src_cache,
                          sym_to_obj, obj_syms, file_cache)
            fname = sanitize_filename(row[1])
            (md_dir / fname).write_text(md, encoding='utf-8')
            mapping.append((row[1], fname))
            src_cache['md'][row[1]] = fname
            if (idx + 1) % 200 == 0:
                print('   {}/{} md'.format(idx + 1, len(rows)), flush=True)
        # 更新 manifest：追加 md_file 列
        rows_all = []
        with manifest_path.open() as fh:
            reader = csv.reader(fh, delimiter='\t')
            header = next(reader)
            for r in reader:
                rows_all.append(r[:6])  # 归一化：只保留前 6 列（幂等重跑）
        mapping_d = dict(mapping)
        if 'md_file' not in header:
            header = header + ['md_file']
        with manifest_path.open('w', newline='', encoding='utf-8') as fh:
            w = csv.writer(fh, delimiter='\t', lineterminator='\n')
            w.writerow(header)
            for r in rows_all:
                w.writerow(r + [mapping_d.get(r[1], '')])
        print('   done: {} md files'.format(len(mapping)), flush=True)
        write_service_readme(svc, svc_dir, manifest_path, orig_path, new_path)


def write_service_readme(svc, svc_dir, manifest_path, orig_path, new_path):
    """生成服务级 README（统计、口径、缺失清单）。"""
    counts = {'IDENTICAL': 0, 'NEAR': 0, 'DIFF': 0, 'MISSING': 0,
              'EMPTY': 0, 'EXEMPT_SKIP': 0, 'IDENTICAL_AE': 0}
    missing = []
    md_count = 0
    with manifest_path.open() as fh:
        for r in csv.DictReader(fh, delimiter='\t'):
            s = r['status']
            counts[s] = counts.get(s, 0) + 1
            if s == 'MISSING':
                missing.append(r['name'])
            if r.get('md_file'):
                md_count += 1
    scope = ''
    if (svc_dir / 'scope.txt').exists():
        scope = (svc_dir / 'scope.txt').read_text()
    dem = demangle_batch(missing)
    lines = []
    lines.append('# {} 函数对比报告\n'.format(svc))
    lines.append('| 项 | 值 |')
    lines.append('|---|---|')
    lines.append('| 原始 ELF | `{}` |'.format(orig_path))
    lines.append('| 重建 ELF | `{}` |'.format(new_path))
    lines.append('| 统计口径 | `compare_common` strict（仅归一化直接跳转/调用目标地址） |')
    lines.append('| 地址等价口径 | 数据地址（字符串/全局变量）伪代码化为内容/`&符号`'
                 ' 后逐条相等者判为 `IDENTICAL_AE`（视为相同，不生成 md） |')
    lines.append('| 豁免 | 第三方基础库（tinyxml/加密哈希/Boost/STL/工具链运行时等，'
                 '见 `compare_common.is_exempt_symbol`） |')
    lines.append('| 符号范围 | symtab 已定义命名函数 T/t/W/w（跳过 `.L*`、初始化守卫、'
                 'libgcc/libc 运行时） |')
    lines.append('| md 范围 | 仅两侧都存在且非 identical 的 **NEAR/DIFF** 函数，'
                 '且能在重建源码中定位到定义（排除 vendored `Library3rd`） |')
    lines.append('')
    lines.append('## 统计\n')
    lines.append('| 类别 | 数量 |')
    lines.append('|---|---|')
    for k in ('IDENTICAL', 'NEAR', 'DIFF', 'MISSING', 'EMPTY', 'EXEMPT_SKIP'):
        lines.append('| {} | {} |'.format(k, counts.get(k, 0)))
    lines.append('| IDENTICAL_AE（地址等价） | {} |'.format(
        counts.get('IDENTICAL_AE', 0)))
    lines.append('| 已生成 md | {} |'.format(md_count))
    lines.append('')
    lines.append('## 范围过滤（scope.txt）\n')
    lines.append('```\n{}\n```\n'.format(scope.strip()))
    lines.append('## 文件结构\n')
    lines.append('- `manifest.tsv`：全部命名函数分类清单（含 md_file 列）')
    lines.append('- `targets.txt`：反编译目标（地址清单）')
    lines.append('- `decompiled.txt`：Ghidra 反编译原始输出')
    lines.append('- `*.md`：每个非 identical 项目函数的报告')
    lines.append('')
    if missing:
        lines.append('## 缺失函数（原始有、重建无；均为第三方 C 库符号，未生成 md）\n')
        lines.append('共 {} 个：\n'.format(len(missing)))
        lines.append('```')
        for n, d in zip(missing, dem):
            lines.append('{}\t{}'.format(n, d))
        lines.append('```')
    (svc_dir / 'README.md').write_text('\n'.join(lines) + '\n', encoding='utf-8')


def classify_one(orig_path, new_path, o_loaded, n_loaded, o_map, n_map, name):
    """单函数分类：IDENTICAL / IDENTICAL_AE / NEAR / DIFF / MISSING / EMPTY。"""
    from gen_report_manifest import mnemonic as _mnemonic
    osym = _cached_syms(orig_path)
    nsym = _cached_syms(new_path)
    if name not in osym:
        return 'MISSING_ORIG', 0, 0, 0, 0
    oaddr, osize = osym[name]
    if name not in nsym:
        return 'MISSING', oaddr, osize, 0, 0
    naddr, nsize = nsym[name]
    a = slice_by_range(o_loaded, oaddr, oaddr + osize)
    b = slice_by_range(n_loaded, naddr, naddr + nsize)
    if not a or not b:
        return 'EMPTY', oaddr, osize, naddr, nsize
    o_norm = norm_identical(a)
    n_norm = norm_identical(b)
    if o_norm == n_norm:
        return 'IDENTICAL', oaddr, osize, naddr, nsize
    if trim_trailing_nops(pseudo_lines(o_norm, o_map, fn_base=oaddr)) == \
       trim_trailing_nops(pseudo_lines(n_norm, n_map, fn_base=naddr)):
        return 'IDENTICAL_AE', oaddr, osize, naddr, nsize
    if _mnemonic(a) == _mnemonic(b):
        return 'NEAR', oaddr, osize, naddr, nsize
    return 'DIFF', oaddr, osize, naddr, nsize


def update_manifest_single(manifest_path, name, status, row, md_file):
    """单函数模式更新 manifest：相同则移除该行，否则更新/新增行。"""
    import fcntl
    manifest_path.parent.mkdir(parents=True, exist_ok=True)
    with manifest_path.open('a+', encoding='utf-8') as fh:
        fcntl.flock(fh, fcntl.LOCK_EX)
        fh.seek(0)
        reader = csv.reader(fh, delimiter='\t')
        try:
            header = next(reader)
        except StopIteration:
            header = []
        rows = [r for r in reader if not (len(r) > 1 and r[1] == name)]
        if row is not None:
            if 'md_file' not in header:
                header = header + ['md_file']
            rows.append(list(row) + [md_file])
        fh.seek(0)
        fh.truncate()
        w = csv.writer(fh, delimiter='\t', lineterminator='\n')
        w.writerow(header)
        for r in rows:
            w.writerow(r)
        fh.flush()


if __name__ == '__main__':
    main()
