#!/bin/bash
# 01_gen_manifest.sh — 从 df_game_r 符号表生成「类 → 方法 → 地址」清单
# 输出:
#   /tmp/df_cr/funcs.tsv       每行: <地址> <类路径> <方法名> <mangled> <demangled全程>
#   /tmp/df_cr/classes.lst     每行: <类路径>
#   /tmp/df_cr/class_func_count.tsv  每行: <函数数> <类路径>（降序）
set -euo pipefail
exec python3 "$(dirname "$0")/asm_format.py" manifest "$@"
