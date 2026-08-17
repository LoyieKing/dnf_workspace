#!/usr/bin/env python3
"""compare_tu_point.py — 把单个 .o 的 nsl 函数与 point ORIG 同名函数对比（identical 口径）。
用法: compare_tu_point.py <our.o> <basename>
输出: 每函数 identical/NEAR/DIFF + 汇总。
"""
import re, subprocess, sys
sys.path.insert(0, '/home/loyieking/dnf_workspace/dnf_decompile/source/toolchain')
from compare_common import norm_line

POINT = '/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/point/df_point_r'

def obj_nsl_syms(obj):
    out = subprocess.check_output(f"nm -S --defined-only '{obj}'", shell=True, text=True, stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4: continue
        addr, size, typ, name = p
        if typ not in 'tTwW' or name.startswith('.L'): continue
        if not name.startswith('_ZN3nsl'): continue
        r[name] = (int(size,16), int(addr,16))
    return r

def disasm_obj(obj, syms):
    out = subprocess.check_output(f"objdump -d --no-show-raw-insn '{obj}'", shell=True, text=True, stderr=subprocess.DEVNULL)
    # 按符号头切片
    funcs = {}
    cur = None
    for ln in out.splitlines():
        m = re.match(r'^([0-9a-f]+) <(.*)>:', ln)
        if m:
            name = m.group(2)
            if name.startswith('.L') or '+' in name: continue
            cur = name
            funcs[cur] = []
            continue
        m = re.match(r'^\s*([0-9a-f]+):\s+(.*)$', ln)
        if m and cur is not None:
            funcs[cur].append((int(m.group(1),16), m.group(2).strip()))
    return funcs

def main():
    obj, base = sys.argv[1], sys.argv[2]
    ours = obj_nsl_syms(obj)
    # point 全量反汇编（缓存按需）
    from compare_common import load_disasm_cached
    pd = load_disasm_cached(POINT)
    ident = near = diff = missing = 0
    for name in sorted(ours):
        pl = [norm_line(t) for a,t in pd.get(name, [])]
        gl = [norm_line(t) for a,t in disasm_obj(obj, ours).get(name, [])]
        if not pl:
            missing += 1
            continue
        if pl == gl: ident += 1
        elif len(pl) == len(gl) and all(a.split()[0]==b.split()[0] for a,b in zip(pl,gl)):
            near += 1
        else:
            diff += 1
            print(f"  DIFF {name}")
    print(f"[{base}] nsl 函数: identical={ident} near={near} diff={diff} missing_in_point={missing}")

if __name__ == '__main__':
    main()
