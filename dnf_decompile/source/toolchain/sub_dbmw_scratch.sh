#!/bin/sh
# dbmw 子代理 scratch 构建（2026-08-11，第 9 轮并行工作流）
#
# 从 build/dbmw/CMakeFiles/dbmw.dir 复制对象树，仅重编本组 TU，按 link.txt
# 同命令链接出 scratch 二进制。不动 build/dbmw 与 function_reports/dbmw。
#
# 用法:
#   bash source/toolchain/sub_dbmw_scratch.sh <scratch_dir> <tu_basename>
# 例:
#   bash source/toolchain/sub_dbmw_scratch.sh /tmp/sub_dbmw_dbmanager DBManager
set -e

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SRC_BUILD=$ROOT/build/dbmw
SCRATCH=$1
TU=$2

if [ -z "$SCRATCH" ] || [ -z "$TU" ]; then
    echo "usage: $0 <scratch_dir> <tu_basename>" >&2
    exit 2
fi

mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles/dbmw.dir"
rsync -a --delete "$SRC_BUILD/CMakeFiles/dbmw.dir/" "$SCRATCH/CMakeFiles/dbmw.dir/"

FLAGS_FILE="$SRC_BUILD/CMakeFiles/dbmw.dir/flags.make"
OBJDIR="$SCRATCH/CMakeFiles/dbmw.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/DBMW"
OBJ="$OBJDIR/$TU.cpp.o"
SRC="$ROOT/source/DNFServer/GameServer/DBMW/$TU.cpp"

OPTIONS=$(grep "DBMW/$TU.cpp.o_OPTIONS" "$FLAGS_FILE" | sed 's/^# Custom options: .*_OPTIONS = //')
CXX_FLAGS=$(grep -E '^CXX_FLAGS = ' "$FLAGS_FILE" | sed 's/^CXX_FLAGS = //')

echo "== scratch compile $TU.cpp (options: ${OPTIONS:-<none>})"
(cd "$SCRATCH" && "$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh" $CXX_FLAGS $OPTIONS -o "CMakeFiles/dbmw.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/DBMW/$TU.cpp.o" -c "$SRC")

echo "== scratch link"
(cd "$SCRATCH" && sh "$ROOT/source/toolchain/link_dbmw.sh" $(sed "s|^[^ ]*link_dbmw.sh ||" "$SRC_BUILD/CMakeFiles/dbmw.dir/link.txt"))
echo "== OK -> $SCRATCH/df_dbmw_r"
