#!/bin/bash
# 04_assemble.sh — 按类合并 汇编(.asm) + 反编译C(.c) 为每类一份 Markdown 报告
# 输出: dnf_decompile/docs/class_func_reports/<类转义>.md
set -euo pipefail

ASM=/tmp/df_cr/asm
DECOMP=/tmp/df_cr/decomp
_DECOMP="$(cd "$(dirname "$0")/../.." && pwd)"                    # .../dnf_decompile
OUT="${1:-${_DECOMP}/docs/class_func_reports}"
mkdir -p "$OUT"

assemble_one() {
    local dir="$1"          # 转义后的类目录名
    local md="$OUT/$dir.md"
    {
        echo "# $dir"
        echo
        echo "> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。"
        echo
        # 函数清单（汇编 + C 均存在才列出）
        local n=0
        for f in "$ASM/$dir/"*.asm; do
            [ -e "$f" ] && n=$((n+1))
        done
        echo "函数数（含汇编）: $n"
        echo
        for f in "$ASM/$dir/"*.asm; do
            [ -e "$f" ] || continue
            local base; base=$(basename "$f" .asm)
            echo "---"
            echo
            echo "## $base"
            echo
            echo '```asm'
            cat "$f"
            echo '```'
            echo
            local cf="$DECOMP/$dir/$base.c"
            if [ -f "$cf" ]; then
                echo '```c'
                cat "$cf"
                echo '```'
            else
                echo "> （该函数反编译 C 未生成）"
            fi
            echo
        done
    } > "$md"
}
export -f assemble_one
export ASM DECOMP OUT

# 并行组装（32 路）
find "$ASM" -mindepth 1 -maxdepth 1 -type d -printf '%f\n' | sort \
| xargs -P 32 -I{} bash -c 'assemble_one "$@"' _ {}

echo "报告数: $(find "$OUT" -name '*.md' | wc -l)"
