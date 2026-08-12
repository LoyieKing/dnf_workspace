#!/bin/bash
# monitor 子 agent scratch 构建：<scratch_dir> <tu_basename.cpp> [extra_flags]
# 复制完整对象树 -> 按 build.make 同 flags 重编指定 TU -> 按 link.txt 链接，
# 产出 $SCRATCH/df_monitor_r（不触碰 build/monitor 与 function_reports/monitor）。
# 用法示例：
#   bash source/toolchain/monitor_scratch_build.sh /tmp/sub_monitor_village VillageAttackedManager.cpp
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
TU="$2"
EXTRA="${3:-}"
OBJROOT="$ROOT/build/monitor/CMakeFiles/monitor.dir"
TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
SRC="$(find "$ROOT/source/DNFServer/GameServer/Monitor" -name "$TU" | head -1)"
[ -n "$SRC" ] || SRC="$(find "$ROOT/source" -name "$TU" | head -1)"
[ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }

# 逐 TU 额外 flags（与 CMakeLists SRC_OPTS 一致；本组涉及 TU 默认无需额外项，
# 若后续组内含 CFileLogWriterBase/tinyxml* 请按需添加）
PERFILE=""
case "$TU" in
    CFileLogWriterBase.cpp) PERFILE="-fno-exceptions" ;;
    tinyxml.cpp|tinyxmlerror.cpp|tinyxmlparser.cpp) PERFILE="-O3 -std=gnu++98" ;;
esac

rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"

WRAPPER="${MONITOR_TU_WRAPPER:-$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh}"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")
REL="${TUO#"$OBJROOT"/}"
echo "CC $TU (scratch)"
"$WRAPPER" $FLAGS $PERFILE $EXTRA -c "$SRC" -o "$SCRATCH/CMakeFiles/monitor.dir/$REL"

echo "LD df_monitor_r (scratch)"
cd "$SCRATCH"
eval "$(cat "$OBJROOT/link.txt")"
echo "OK -> $SCRATCH/df_monitor_r"
