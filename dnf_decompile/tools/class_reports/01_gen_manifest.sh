#!/bin/bash
# 01_gen_manifest.sh — 从 df_game_r 符号表生成「类 → 方法 → 地址」清单
# 输出:
#   /tmp/df_cr/funcs.tsv       每行: <地址> <类路径> <方法名>  （全部 text 函数符号，已排序）
#   /tmp/df_cr/classes.lst     每行: <类路径>   （去重、排序）
#   /tmp/df_cr/class_func_count.tsv  每行: <函数数> <类路径>（降序）
set -euo pipefail

_DECOMP="$(cd "$(dirname "$0")/../.." && pwd)"                    # .../dnf_decompile
_ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"                   # 工作区根：<workspace>/
BIN="${1:-${_ROOT}/dnf_installer/build/dnf_data/home/template/init/df_game_r}"
OUT=/tmp/df_cr
mkdir -p "$OUT"

# 提取所有 .text 函数符号（地址 t/T demangled名），解析 类路径 + 方法名
nm -C --defined-only "$BIN" 2>/dev/null \
| awk '$2 ~ /^[tT]$/ {
    addr=$1; n=$3
    if (n=="" || n ~ /^\.L/) next
    sub(/\(.*$/,"",n)          # 去掉参数
    if (n !~ /::/) {           # 零散全局函数（非类成员）
        cls="<global>"
        mth=n
    } else {
        cls=n; sub(/::[^:]*$/,"",cls)
        mth=n; sub(/^.*::/,"",mth)
    }
    gsub(/\t/," ",cls); gsub(/\t/," ",mth)
    printf "%s\t%s\t%s\n", addr, cls, mth
}' | sort -k1,1 > "$OUT/funcs.tsv"

# 类清单（含 <global>）
cut -f2 "$OUT/funcs.tsv" | sort -u > "$OUT/classes.lst"

# 每类函数数（降序）
cut -f2 "$OUT/funcs.tsv" | sort | uniq -c | sort -rn \
| awk '{printf "%d\t%s\n", $1, $2}' > "$OUT/class_func_count.tsv"

echo "函数总数: $(wc -l < "$OUT/funcs.tsv")"
echo "类路径数: $(wc -l < "$OUT/classes.lst")"
echo "清单已写入 $OUT/"
