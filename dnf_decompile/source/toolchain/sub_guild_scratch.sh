#!/bin/sh
# guild 子代理 scratch 构建（2026-08-11，第 10 轮并行工作流）
#
# 从 build/guild/CMakeFiles/guild.dir 复制对象树，仅重编本组 TU，按 link.txt
# 同命令链接出 scratch 二进制。不动 build/guild 与 function_reports/guild。
#
# 用法:
#   bash source/toolchain/sub_guild_scratch.sh <scratch_dir> <tu_basename> [tu2 ...]
# 例:
#   bash source/toolchain/sub_guild_scratch.sh /tmp/sub_guild_pt DNFPacketTranslater
set -e

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SRC_BUILD=$ROOT/build/guild
SCRATCH=$1
shift
TUS="$*"

if [ -z "$SCRATCH" ] || [ -z "$TUS" ]; then
    echo "usage: $0 <scratch_dir> <tu_basename> [tu2 ...]" >&2
    exit 2
fi

mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles/guild.dir"
rsync -a --delete "$SRC_BUILD/CMakeFiles/guild.dir/" "$SCRATCH/CMakeFiles/guild.dir/"

FLAGS_FILE="$SRC_BUILD/CMakeFiles/guild.dir/flags.make"
OBJDIR="$SCRATCH/CMakeFiles/guild.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Guild"
CXX_WRAPPER=$(grep -m1 'compile CXX with' "$FLAGS_FILE" | sed 's/.*with //')
CXX_FLAGS=$(grep -E '^CXX_FLAGS = ' "$FLAGS_FILE" | sed 's/^CXX_FLAGS = //')

for TU in $TUS; do
    OPTIONS=$(grep "Guild/$TU.cpp.o_OPTIONS" "$FLAGS_FILE" | sed 's/^# Custom options: .*_OPTIONS = //')
    echo "== scratch compile $TU.cpp (options: ${OPTIONS:-<none>})"
    (cd "$SCRATCH" && "$CXX_WRAPPER" $CXX_FLAGS $OPTIONS -o \
        "CMakeFiles/guild.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Guild/$TU.cpp.o" \
        -c "$ROOT/source/DNFServer/GameServer/Guild/$TU.cpp")
done

echo "== scratch link"
(cd "$SCRATCH" && sh "$SRC_BUILD/CMakeFiles/guild.dir/link.txt")
echo "== OK -> $SCRATCH/df_guild_r"
