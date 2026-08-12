#!/bin/bash
# 用法: round21_check_group.sh <scratch_dir> <group_txt>
# 对分组内每个函数跑 classify_one --check-only，打印状态。
set -u
SCRATCH="$1"
GROUP="$2"
cd /home/loyieking/dnf_workspace/dnf_decompile || exit 1
while read -r st sym; do
    [ -n "$sym" ] || continue
    res=$(python3 source/toolchain/gen_function_md.py --services guild --function "$sym" \
        --new-bin "$SCRATCH/df_guild_r" --check-only 2>&1 | tail -1)
    echo "$res"
done < "$GROUP"
