#!/bin/bash
# 04_assemble.sh — 按类文件夹、每函数一份 Markdown 报告
# 输出: dnf_decompile/docs/class_func_reports/<类转义>/<方法转义>.md
# 不删除本目录下旧的一类一份 *.md。
set -euo pipefail
exec python3 "$(dirname "$0")/asm_format.py" assemble "$@"
