#!/usr/bin/env python3
"""按 DWARF CU 归属对比 df_channel_r 的单个 TU：原始二进制 vs 重建 .o
IDENTICAL 判定使用 compare_common 统一口径（保留常量/字段偏移，仅归一化
直接跳转/调用目标地址）。"""
import re, subprocess, sys, json, os
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import disasm_slice, load_disasm, norm_identical

ORIG='/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople/channel/df_channel_r'
FN2CU='/tmp/channel_work/fn2cu.json'

def syms(b):
    out=subprocess.check_output(f"nm -S --defined-only '{b}'",shell=True,text=True)
    r={}
    for line in out.splitlines():
        p=line.split()
        if len(p)<4 or p[2] not in 'TtWw' or p[3].startswith('.L'): continue
        r[p[3]]=(int(p[1],16),int(p[0],16))
    return r
def dis(b,name):
    """按符号名反汇编（仅作 nm 缺失符号的罕见回退路径）。"""
    out=subprocess.check_output(f"objdump -d --no-show-raw-insn -M intel --disassemble={name} '{b}'",shell=True,text=True)
    lines=[re.sub(r'^\s*[0-9a-f]+:\s*','',l).strip() for l in out.splitlines() if re.match(r'\s*[0-9a-f]+:\s',l)]
    if lines:
        return lines
    # alias symbols (C1/C2, D1/D2) make --disassemble return empty; try the C1/D1 counterpart
    alt = name.replace('C2E', 'C1E').replace('D2E', 'D1E')
    if alt != name:
        out=subprocess.check_output(f"objdump -d --no-show-raw-insn -M intel --disassemble={alt} '{b}'",shell=True,text=True)
        lines=[re.sub(r'^\s*[0-9a-f]+:\s*','',l).strip() for l in out.splitlines() if re.match(r'\s*[0-9a-f]+:\s',l)]
        if lines:
            return lines
    return []
def main():
    tu = sys.argv[1]  # e.g. "Exception.cpp"
    obj = sys.argv[2] if len(sys.argv)>2 else f"build/channel/{tu.replace('.cpp','')}.o"
    fn2cu = json.load(open(FN2CU))
    tu_names = [n for n,v in fn2cu.items() if v['cu']==tu]
    orig = syms(ORIG); new = syms(obj)
    orig_dis = load_disasm(ORIG, intel=True)
    obj_dis = load_disasm(obj, intel=True)
    stats = {'IDENTICAL':0,'NEAR':0,'DIFF':0,'MISSING':0}
    diffs=[]
    for name in sorted(tu_names):
        if name not in new:
            stats['MISSING']+=1; diffs.append((name,'MISSING')); continue
        oi = orig.get(name)
        if oi:
            a = disasm_slice(orig_dis, oi[1], oi[1] + oi[0])
        else:
            a = dis(ORIG, name)  # nm 缺失的罕见回退
        ni = new[name]
        b = disasm_slice(obj_dis, ni[1], ni[1] + ni[0])
        if not a or not b: stats['MISSING']+=1; diffs.append((name,'EMPTY')); continue
        if norm_identical(a)==norm_identical(b): cls='IDENTICAL'
        elif [x.split()[0] for x in a]==[x.split()[0] for x in b]: cls='NEAR'
        else: cls='DIFF'
        stats[cls]+=1
        if cls!='IDENTICAL': diffs.append((name,cls))
    print(f"== {tu}: orig 函数 {len(tu_names)}, 重建符号 {len([n for n in new if n in tu_names])}")
    print(f"   IDENTICAL {stats['IDENTICAL']}  NEAR {stats['NEAR']}  DIFF {stats['DIFF']}  MISSING {stats['MISSING']}")
    for n,c in diffs: print(f"   {c:9s} {n}")

if __name__=='__main__':
    main()
