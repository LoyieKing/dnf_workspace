#!/usr/bin/env python3
"""compare_tu_game_orig.py — 单 TU .o 的类函数 vs df_game_r ORIG 同名符号对比。
用法: compare_tu_game_orig.py <our.o> <basename>
口径：AE(大地址→<A>) + @plt 去除 + 尾部 nop 剥离 + 分支/调用目标→<T>；
.o 中短裸分支目标(2位hex)同样归一化；C2/D2 别名计入同址（良性）。
"""
import re, subprocess, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, norm_line, norm_identical_ext

_DECOMP = Path(__file__).resolve().parent.parent.parent          # .../dnf_decompile
ROOT = _DECOMP.parent                                            # 工作区根：<workspace>/（含 dnf_decompile 与 dnf_installer）
GAME_ORIG = str(ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r')
PLT_RE = re.compile(r'@plt')

def obj_syms(obj):
    out = subprocess.check_output(f"nm -S --defined-only '{obj}'", shell=True, text=True, stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4: continue
        if p[2] not in 'tTwW' or p[3].startswith('.L'): continue
        r[p[3]] = (int(p[1],16), int(p[0],16))
    return r

def disasm_obj(obj):
    """objdump -dr：返回 {name: [(addr, text, relocs)]}。
    relocs 为该指令上的重定位（类型+符号）：.o 中指向 rodata/.data/.bss/
    外部符号的小常量/小地址在链接后才成为大地址，AE 口径下需归一化为 <A>。"""
    out = subprocess.check_output(f"objdump -dr --no-show-raw-insn '{obj}'", shell=True, text=True, stderr=subprocess.DEVNULL)
    funcs, cur = {}, None
    relocs = []
    rel_re = re.compile(r'^\s+[0-9a-f]+:\s+R_386_\S+\s+(\S+)')
    for ln in out.splitlines():
        m = re.match(r'^([0-9a-f]+) <(.*)>:', ln)
        if m:
            name = m.group(2)
            if name.startswith('.L') or '+' in name: continue
            cur = name; funcs[cur] = []; relocs = []; continue
        rm = rel_re.match(ln)
        if rm and cur is not None and funcs[cur]:
            relocs.append(rm.group(1))
            continue
        m = re.match(r'^\s*([0-9a-f]+):\s+(.*)$', ln)
        if m and cur is not None:
            if funcs[cur]:
                funcs[cur][-1] = (funcs[cur][-1][0], funcs[cur][-1][1], relocs)
            relocs = []
            funcs[cur].append((int(m.group(1),16), m.group(2).strip(), []))
    if cur is not None and funcs[cur]:
        funcs[cur][-1] = (funcs[cur][-1][0], funcs[cur][-1][1], relocs)
    return funcs

RELOC_ADDR_RE = re.compile(r'\$0x[0-9a-f]+')
RELOC_MEM_RE = re.compile(r'(?<![\$0-9a-fx])0x[0-9a-f]+\(%e')
RELOC_BARE_RE = re.compile(r'(?<![\$0-9a-fx])0x0(?=[,)]|$)')
RELOC_BARE_ABS_RE = re.compile(r'(?<![\$0-9a-fx])0x[0-9a-f]+(?=[,)]|$)')
RELOC_GLOBAL_STORE_RE = re.compile(r'^mov[lbw]?\s+\$0x[0-9a-f]+,\s*0x[0-9a-f]+(?![0-9a-f(])')
RELOC_SCALED_INDEX_RE = re.compile(r'(?<![\$0-9a-fx])0x[0-9a-f]+\(,%e')
TLS_LE_LEA_RE = re.compile(r'^lea\s+-0x[0-9a-f]+\(%eax\),%eax$')

def clean(lines, reloc_flags=None):
    """AE 归一化 + 去 @plt + 分支/调用目标统一 <T> + 剥尾部 nop。

    .o 与最终二进制对比时，call/jmp 目标两侧形态不同：
      - ORIG(链接后): call <T> <目标符号>
      - OURS(.o, 未重定位): call 1c <当前函数+偏移>  （objdump 以本地标签标注）
    按 AE 口径「分支/调用目标 -> <T>」，两侧统一剥离目标标注（间接 * 操作数保留）。

    reloc_flags 为与 lines 平行的逐行标记（True=该指令带重定位）。把带重定位
    指令上的未解析小常量/小地址归一化为 <A>（.o 中 rodata 字符串/数据符号/
    全局变量引用在链接前是 section 内小偏移，与 ORIG 的大绝对地址同属跨二进制
    布局产物，AE 口径归一）。分支行先按 <T> 归一，不参与数据地址替换。

    TLS 本地执行（LE）访问的块内偏移也是链接布局产物：.o 侧为未解析的
    R_386_TLS_LE 重定位（归一为 <A>(%eax)），ORIG 链接后为固定小负常量
    （lea -0x3c350(%eax),%eax）。两者同为跨二进制 TLS 布局差异，按 AE 口径
    在 ORIG 侧同样归一为 <A>(%eax)。
    """
    out = []
    for i, x in enumerate(lines):
        y = PLT_RE.sub('', norm_identical_ext([x])[0])
        m = re.match(r'^(j[a-z]*|callq?|loop[a-z]*)\b(.*)$', y)
        if m and '*' not in m.group(2):
            y = m.group(1) + ' <T>'
        elif reloc_flags and reloc_flags[i]:
            # 指令带重定位：其小常量/小地址实为未解析的数据引用 -> <A>
            if RELOC_GLOBAL_STORE_RE.search(y):
                # movl $imm,<全局>：重定位在内存操作数（disp）上，常量保留
                y = re.sub(r',\s*0x[0-9a-f]+(?![0-9a-f(])', ',<A>', y, count=1)
            elif '$0x' not in y and RELOC_MEM_RE.search(y):
                # 无立即数、只有内存操作数（movzbl 0x..(%eax) 等）→ 地址归一
                y = RELOC_MEM_RE.sub('<A>(%e', y, count=1)
            elif RELOC_ADDR_RE.search(y):
                y = RELOC_ADDR_RE.sub('$<A>', y, count=1)
            elif RELOC_BARE_RE.search(y):
                y = RELOC_BARE_RE.sub('<A>', y, count=1)
            elif RELOC_SCALED_INDEX_RE.search(y):
                # 缩放索引内存操作数（mov 0x0(,%eax,4),%edx）的全局基址：
                # .o 中未解析全局表基址与 ORIG 的大绝对地址同属布局产物
                y = RELOC_SCALED_INDEX_RE.sub('<A>(,%e', y, count=1)
            elif RELOC_BARE_ABS_RE.search(y):
                # 无括号裸绝对地址（movzbl 0x2c,%eax 等 .bss/rodata 引用）
                y = RELOC_BARE_ABS_RE.sub('<A>', y, count=1)
        elif out and TLS_LE_LEA_RE.match(y) and out[-1] == 'mov    %gs:0x0,%eax':
            # ORIG 侧：%gs:0 取基址后紧跟的 TLS LE 偏移（-0x3c350 等）归 <A>
            y = 'lea    <A>(%eax),%eax'
        out.append(y)
    while out and out[-1] == 'nop':
        out.pop()
    return out

def main():
    obj, base = sys.argv[1], sys.argv[2]
    ours = obj_syms(obj)
    od = disasm_obj(obj)
    gd = load_disasm_cached(GAME_ORIG)
    ident = ae = near = diff = missing = 0
    real = []
    for name in sorted(ours):
        gl = [t for a,t in gd.get(name, [])]
        ol_raw = od.get(name, [])
        ol = [t for a,t,_ in ol_raw]
        rel_flags = [bool(rr) for a,t,rr in ol_raw]
        if not gl:
            missing += 1; continue
        ps = [norm_line(x) for x in gl]; gs = [norm_line(x) for x in ol]
        pe = clean(gl); ge = clean(ol, reloc_flags=rel_flags)
        if ps == gs: ident += 1
        elif pe == ge: ae += 1
        elif len(pe) == len(ge) and all(a.split()[0]==b.split()[0] for a,b in zip(pe,ge)):
            near += 1; real.append(('NEAR', name))
        else:
            diff += 1; real.append(('DIFF', name))
    print(f"[{base}] 函数: identical={ident} ae={ae} (合计 {ident+ae}) near={near} diff={diff} missing_in_game={missing}")
    for k, n in real[:30]: print(f"  {k} {n}")

if __name__ == '__main__':
    main()
