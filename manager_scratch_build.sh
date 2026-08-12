#!/bin/bash
# manager 子 agent scratch 构建：<scratch_dir> <tu_basename.cpp> [extra_flags]
# 复制完整对象树 -> 按 build.make 同 flags 重编指定 TU -> 按 link.txt 链接，
# 产出 $SCRATCH/df_manager_r（不触碰 build/manager 与 function_reports）。
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
TU="$2"
EXTRA="${3:-}"
OBJROOT="$ROOT/build/manager/CMakeFiles/manager.dir"
TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
SRC="$(find "$ROOT/source/DNFServer/GameServer/Manager" -name "$TU" | head -1)"
[ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }

# 逐 TU 额外 flags（与 CMakeLists SRC_OPTS 一致）
PERFILE=""
case "$TU" in
    DNFNetworkThread.cpp|TcpNetSystem.cpp) PERFILE="-B/tmp/cc1plus446bin/" ;;
esac

rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles" "$SCRATCH/mysqlclient"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
cp "$ROOT/build/manager/mysqlclient/trees.o" "$SCRATCH/mysqlclient/trees.o"

WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")
REL="${TUO#"$OBJROOT"/}"
echo "CC $TU (scratch)"
"$WRAPPER" $FLAGS $PERFILE $EXTRA -c "$SRC" -o "$SCRATCH/CMakeFiles/manager.dir/$REL"

echo "LD df_manager_r (scratch)"
cd "$SCRATCH"
eval "$(cat "$OBJROOT/link.txt")"
echo "OK -> $SCRATCH/df_manager_r"
