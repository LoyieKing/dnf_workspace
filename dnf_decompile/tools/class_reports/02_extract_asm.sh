#!/bin/bash
# 02_extract_asm.sh — 从 objdump 反汇编切分每函数汇编并格式化
# 输出: /tmp/df_cr/asm/<类路径>/<方法名>.asm
# 格式：去机器码；行首 = 绝对地址 + 相对函数入口偏移；
#       开头同时保留 mangled / demangled；数据地址按 report_resolve 翻译。
set -euo pipefail
_BIN="${2:-}"
if [ -n "${_BIN}" ]; then
  exec python3 "$(dirname "$0")/asm_format.py" extract "${1:-/tmp/df_text_disasm.txt}" --bin "$_BIN"
fi
exec python3 "$(dirname "$0")/asm_format.py" extract "${1:-/tmp/df_text_disasm.txt}"
