#!/bin/sh
# dbmw 子代理 scratch 构建（多 TU 版，2026-08-11 第 10 轮）
#
# 用法: bash source/toolchain/sub_dbmw_scratch2.sh <scratch_dir> <tu1> [tu2 ...]
# 例:   bash source/toolchain/sub_dbmw_scratch2.sh /tmp/sub_dbmw_net TcpNetSystem DNFTcpSocket
#
# 一次性 rsync 对象树 -> 逐个重编本组 TU -> 链接 scratch 二进制。
# 与 sub_dbmw_scratch.sh 单 TU 版行为一致，但保留多个 TU 的重编结果。
set -e

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SRC_BUILD=$ROOT/build/dbmw
SCRATCH=$1
shift

if [ -z "$SCRATCH" ] || [ $# -eq 0 ]; then
    echo "usage: $0 <scratch_dir> <tu_basename> [more tu...]" >&2
    exit 2
fi

mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles/dbmw.dir"
rsync -a --delete "$SRC_BUILD/CMakeFiles/dbmw.dir/" "$SCRATCH/CMakeFiles/dbmw.dir/"

FLAGS_FILE="$SRC_BUILD/CMakeFiles/dbmw.dir/flags.make"
OBJDIR="$SCRATCH/CMakeFiles/dbmw.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/DBMW"
CXX_FLAGS=$(grep -E '^CXX_FLAGS = ' "$FLAGS_FILE" | sed 's/^CXX_FLAGS = //')

for TU in "$@"; do
    OBJ="$OBJDIR/$TU.cpp.o"
    SRC="$ROOT/source/DNFServer/GameServer/DBMW/$TU.cpp"
    OPTIONS=$(grep "DBMW/$TU.cpp.o_OPTIONS" "$FLAGS_FILE" | sed 's/^# Custom options: .*_OPTIONS = //')
    echo "== scratch compile $TU.cpp (options: ${OPTIONS:-<none>})"
    (cd "$SCRATCH" && "$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh" $CXX_FLAGS $OPTIONS -o "CMakeFiles/dbmw.dir/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/DBMW/$TU.cpp.o" -c "$SRC")
done

echo "== scratch link"
(cd "$SCRATCH" && sh "$ROOT/source/toolchain/link_dbmw.sh" $(sed "s|^[^ ]*link_dbmw.sh ||" "$SRC_BUILD/CMakeFiles/dbmw.dir/link.txt"))
echo "== OK -> $SCRATCH/df_dbmw_r"
