#!/usr/bin/env python3
"""game 非 identical 函数的语义启发式筛查。

复用 function_reports/game/manifest.tsv（DIFF/NEAR 项）与 compare_common 的反汇编缓存
（整二进制一次 objdump），对每个符号提取 调用序列 / 立即数常量 / 分支结构 三条签名，
对比 ORIG 与重建，给出语义判定：
  MISALIGN  调用序列不同 —— 强语义差异信号（优先核查）
  MINOR     调用序列相同但常量/分支数不同 —— 可能真语义差或编译器伪影
  ALIGNED   调用序列+常量+分支数相同 —— 语义高度一致（伪影集中在指令文本）

用法: game_semantic_scan.py [--limit N] [--min-size N]
输出: 全量判定到 stdout（按 MISALIGN/MINOR/ALIGNED 分组概要），明细写入
      /tmp/game_semantic_scan.tsv
"""
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, demangle_batch

_DECOMP = Path(__file__).resolve().parent.parent.parent
ROOT = _DECOMP.parent
ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'
NEW = _DECOMP / 'build/game/df_game_r'
MANIFEST = _DECOMP / 'function_reports/game/manifest.tsv'

BRANCH = {'jmp', 'je', 'jne', 'jz', 'jnz', 'ja', 'jae', 'jb', 'jbe', 'jg', 'jge',
          'jl', 'jle', 'js', 'jns', 'jo', 'jno', 'jp', 'jnp', 'loop', 'loope', 'loopne'}
COND = BRANCH - {'jmp', 'loop', 'loope', 'loopne'}
CALL = {'call'}
# 忽略栈位移/栈槽相关的立即数（编译器伪影重灾区）
STACK_RE = re.compile(r'[-(]0x?[0-9a-fA-F]*\(%[es]bp\)|\(%esp\)|,[-0-9a-fA-Fx]*\(%e[spx]' )

def sig(insns):
    """insns: list of (addr_hex, text). Return signature dict."""
    calls = []
    consts = []
    nbranch = ncond = 0
    for _a, txt in insns:
        parts = txt.split(None, 1)
        mn = parts[0]
        rest = parts[1] if len(parts) > 1 else ''
        if mn == 'call':
            m = re.search(r'<([^>]*)>', rest)
            # 去 @plt / 地址数值化：call *%eax（间接）标记为 (indirect)
            if m:
                t = m.group(1).replace('@plt', '')
            else:
                t = 'INDIRECT' if '*%e' in rest else rest.strip()
            calls.append(t if t and not t.startswith('0x') else 'TARGET')
        elif mn in BRANCH:
            nbranch += 1
            if mn in COND:
                ncond += 1
        elif mn in ('mov', 'cmp', 'add', 'sub', 'and', 'or', 'xor', 'test',
                    'lea', 'shl', 'shr', 'sar', 'imul', 'inc', 'dec'):
            for cm in re.finditer(r'\$(-?0x[0-9a-fA-F]+|-?[0-9]+)', rest):
                imm = cm.group(1)
                # 跳过栈槽零存储等伪影
                if STACK_RE.search(rest) and imm in ('$0x0', '$0'):
                    continue
                consts.append(imm)
    return {'calls': calls, 'consts': consts, 'nbranch': nbranch,
            'ncond': ncond, 'ninsn': len(insns)}


def main():
    args = [a for a in sys.argv[1:]]
    limit = 0
    for a in args:
        if a.startswith('--limit='):
            limit = int(a.split('=')[1])
    osym = {}  # name->(addr,size)
    for l in subprocess.run(['nm', '-S', '--defined-only', str(ORIG)],
                            capture_output=True, text=True).stdout.splitlines():
        p = l.split(None, 3)
        if len(p) >= 4 and p[2] in 'TtWw':
            osym[p[3]] = (int(p[0], 16), int(p[1], 16))
    nsym = {}
    for l in subprocess.run(['nm', '-S', '--defined-only', str(NEW)],
                            capture_output=True, text=True).stdout.splitlines():
        p = l.split(None, 3)
        if len(p) >= 4 and p[2] in 'TtWw':
            nsym[p[3]] = (int(p[0], 16), int(p[1], 16))

    print('loading disasm ...', flush=True)
    o_loaded = load_disasm_cached(str(ORIG))
    n_loaded = load_disasm_cached(str(NEW))

    rows = []
    for l in MANIFEST.read_text().splitlines()[1:]:
        p = l.split('\t')
        if len(p) < 2 or p[0] not in ('DIFF', 'NEAR'):
            continue
        name = p[1]
        if name not in osym or name not in nsym:
            continue
        oaddr, osize = osym[name]
        naddr, nsize = nsym[name]
        o_ins = o_loaded.get(name)
        n_ins = n_loaded.get(name)
        if not o_ins or not n_ins:
            continue
        o = sig(o_ins)
        n = sig(n_ins)
        same_calls = o['calls'] == n['calls']
        same_consts = o['consts'] == n['consts']
        same_branch = (o['nbranch'], o['ncond']) == (n['nbranch'], n['ncond'])
        if not same_calls:
            v = 'MISALIGN'
        elif not same_consts or not same_branch:
            v = 'MINOR'
        else:
            v = 'ALIGNED'
        rows.append((v, name, o['ninsn'], n['ninsn'],
                     ','.join(o['calls'][:6]), ','.join(n['calls'][:6])))
        if limit and len(rows) >= limit:
            break

    # 分组统计
    from collections import Counter
    c = Counter(r[0] for r in rows)
    print('== 语义启发式判定统计 ==')
    print('MISALIGN: {}   MINOR: {}   ALIGNED: {}   total: {}'.format(
        c['MISALIGN'], c['MINOR'], c['ALIGNED'], len(rows)))

    with open('/tmp/game_semantic_scan.tsv', 'w') as fh:
        for v, name, oi, ni, oc, nc in sorted(rows, key=lambda r: r[0]):
            fh.write('{}\t{}\t{}\t{}\t{}\t{}\n'.format(
                v, name, oi, ni, oc, nc))

    print('\n== MISALIGN（调用序列不同，最强语义差异信号） ==')
    for v, name, oi, ni, oc, nc in rows:
        if v == 'MISALIGN':
            print('  {}  orig_calls={}  new_calls={}'.format(
                name, oc[:80], nc[:80]))
    print('\n== 明细已写入 /tmp/game_semantic_scan.tsv ==')


if __name__ == '__main__':
    main()
