#!/bin/bash
# 02_extract_asm.sh — 从全量 objdump 反汇编 /tmp/df_text_disasm.txt 并行切分每函数汇编
# 输出: /tmp/df_cr/asm/<类路径>/<方法名>.asm   （类路径与方法名已转义为安全文件名）
set -euo pipefail

FUNCS=/tmp/df_cr/funcs.tsv
DISASM="${1:-/tmp/df_text_disasm.txt}"
OUT=/tmp/df_cr/asm
mkdir -p "$OUT"

# 转义规则：:: -> __ ，< > -> _lt_/_gt_ ，/ -> _s_ ，空格/引号/星号/括号 -> _
escape() {
  echo "$1" | sed -e 's/::/__/g' \
                  -e 's/</_lt_/g' -e 's/>/_gt_/g' \
                  -e 's#/#_s_#g' \
                  -e 's/[ "*,():]/_/g'
}

# 读入 地址 -> 行号 映射：构造 awk 程序，一行一个函数从全文切片
# 先给每个函数地址算“结束地址”（下一函数地址-1；最后一个用最后一个地址+0x100 兜底）
awk '{print $1}' "$FUNCS" > "$OUT/.addrs"
python3 - "$OUT/.addrs" > "$OUT/.bounds" <<'EOF'
import sys
addrs = [int(x,16) for x in open(sys.argv[1])]
bounds = []
for i,a in enumerate(addrs):
    end = (addrs[i+1]-1) if i+1 < len(addrs) else a+0x100
    bounds.append((a,end))
for a,e in bounds:
    print("%08x %08x" % (a,e))
EOF

# 单遍 awk 切分：匹配 "<函数地址> <符号>:" 行开始收集，地址超出本函数区间即结束
# 先预建全部类目录（避免 awk 内 system() 每函数一次 fork）
while IFS= read -r cls; do
    d="$OUT/$(echo "$cls" | sed -e 's/::/__/g' -e 's/</_lt_/g' -e 's/>/_gt_/g' -e 's#/#_s_#g' -e 's/[ "*,():]/_/g')"
    mkdir -p "$d"
done < /tmp/df_cr/classes.lst

awk -v OUT="$OUT" -v boundfile="$OUT/.bounds" '
function esc(s,   r) {
    r=s
    gsub(/::/,"__",r); gsub(/</,"_lt_",r); gsub(/>/,"_gt_",r)
    gsub(/\//,"_s_",r); gsub(/[ "*,():]/,"_",r)
    return r
}
BEGIN {
    while ((getline line < boundfile) > 0) {
        split(line, b, " ")
        start[b[1]] = strtonum("0x" b[1])
        end[b[1]]   = strtonum("0x" b[2])
        order[n++] = b[1]
    }
    # 符号地址 -> 类/方法 映射
    while ((getline line < "/tmp/df_cr/funcs.tsv") > 0) {
        split(line, f, "\t")
        cls[f[1]] = f[2]; mth[f[1]] = f[3]
    }
    cur=""
    curend=0
}
{
    # 形如 "  0807d708 <_init>:" 的函数头行
    if (match($0, /^ *([0-9a-f]+) <([^>]*)>:$/, m)) {
        a=m[1]
        if (a in start) {
            cur=a; curend=end[a]
            dir=OUT "/" esc(cls[a])
            mn = mth[a]
            if (mn == "") mn = "_" a
            base=esc(mn)
            key=dir "/" base
            if (key in seen) { base=base "_" a; key=dir "/" base }
            seen[key]=1
            fn=dir "/" base ".asm"
            outfile=fn
            print "// === " a " " cls[a] "::" mth[a] "  [0x" a "-0x" sprintf("%x",curend) "] ===" > outfile
            next
        }
    }
    if (cur != "") {
        if (match($0, /^ +[0-9a-f]+:/)) {
            split($0, p, ":")
            addr = p[1]; gsub(/^ +/,"",addr)
            if (strtonum("0x" addr) > curend) { cur=""; next }
        }
        print >> outfile
    }
}' "$DISASM"

echo "汇编切分完成: $(find "$OUT" -name '*.asm' | wc -l) 个函数"
