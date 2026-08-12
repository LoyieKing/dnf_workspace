#!/bin/bash
# statics 批量复检：<scratch_binary> <func_list_file>
set -euo pipefail
BIN="$1"
LIST="$2"
cd /home/loyieking/dnf_workspace/dnf_decompile
while IFS= read -r f; do
    [ -n "$f" ] || continue
    st=$(python3 source/toolchain/gen_function_md.py --services statics --function "$f" \
        --new-bin "$BIN" --check-only 2>/dev/null | tail -1 | awk '{print $NF}')
    echo "$st $f"
done < "$LIST"
