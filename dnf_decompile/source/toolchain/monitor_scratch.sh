#!/bin/bash
# monitor_scratch.sh — monitor 服务逐 TU scratch 构建（子 Agent 专用，2026-08-12）
#
# 用法:
#   monitor_scratch.sh <scratch_dir> <cpp_basename> [<cpp_basename> ...]
#
# 行为:
#   1. 把权威构建 build/monitor 的全部 .o 复制到 <scratch_dir>（仅首次）
#   2. 用与权威构建完全相同的 flags（c6444r 变体；可用 MON_SCRATCH_VARIANT
#      覆盖为 c6 / c6446r / c5 / c5r52 做逐 TU A/B 试验）重编指定 basename 的 TU，
#      覆盖 scratch 中的对应 .o
#   3. 用 link.txt 相同命令链接出 <scratch_dir>/df_monitor_r
#
# 私有源码副本（多子 Agent 同 TU 并行时用）:
#   MON_SCRATCH_SRC_OVERRIDE=/abs/path/X.cpp monitor_scratch.sh <scratch> X
#   -> 用 /abs/path/X.cpp 编译并覆盖 X.cpp.o；私有目录优先搜索同名头文件
#      （#include "X.h" 先找副本所在目录），可连同私有头文件一起改。
# 全 TU 头文件覆盖（模板头改动验证用）:
#   MON_SCRATCH_HEADER_OVERRIDE_DIR=/abs/priv/include monitor_scratch.sh <scratch> A B C...
#   -> 所有重编 TU 都优先 -I 私有头目录（如 PacketCounter.h 私有副本）。
#
# 约束: 只写 <scratch_dir>，不碰 build/monitor 与 function_reports/monitor。
# 输出: 最后一行打印 scratch 二进制绝对路径。
set -u

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD=$ROOT/build/monitor
OBJROOT=$BUILD/CMakeFiles/monitor.dir
case "${MON_SCRATCH_VARIANT:-c6444r}" in
    c6)      WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh ;;
    c6444r)  WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh ;;
    c6446r)  WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6446r_gxx.sh ;;
    c5)      WRAPPER=$ROOT/source/toolchain/cmake/dnf_c5_gxx.sh ;;
    c5r52)   WRAPPER=$ROOT/source/toolchain/cmake/dnf_c5r52_gxx.sh ;;
    *) echo "ERROR: unknown MON_SCRATCH_VARIANT" >&2; exit 6 ;;
esac

if [ $# -lt 2 ]; then
    echo "usage: $0 <scratch_dir> <cpp_basename> [...]" >&2
    exit 2
fi
SCRATCH=$1
shift

mkdir -p "$SCRATCH"

# 首次：复制权威 .o 树（保留相对结构）
if [ ! -f "$SCRATCH/CMakeFiles/monitor.dir/link.txt" ]; then
    mkdir -p "$SCRATCH/CMakeFiles"
    (cd "$BUILD" && tar cf - CMakeFiles/monitor.dir) | \
        (cd "$SCRATCH" && tar xf -)
fi

# 提取权威编译 flags
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make" | head -1)

compile_tu() {
    local base="$1"
    local src="${MON_SCRATCH_SRC_OVERRIDE:-}"
    if [ -z "$src" ]; then
        src=$(find "$ROOT/source" -name "$base.cpp" -path '*Monitor*' -print -quit)
        [ -n "$src" ] || src=$(find "$ROOT/source" -name "$base.cpp" -print -quit)
    fi
    if [ -z "$src" ]; then
        echo "ERROR: cannot find source for $base.cpp" >&2
        exit 3
    fi
    # 输出必须覆盖原 TU 的 .o 路径（link.txt 引用的是原始相对路径）
    local orig_rel
    orig_rel=$(cd "$SCRATCH/CMakeFiles/monitor.dir" && find . -name "$base.cpp.o" -print -quit | sed 's|^\./||')
    if [ -z "$orig_rel" ]; then
        echo "ERROR: cannot locate original object for $base.cpp in scratch tree" >&2
        exit 7
    fi
    local out="$SCRATCH/CMakeFiles/monitor.dir/$orig_rel"
    mkdir -p "$(dirname "$out")"
    local extra=""
    case "$base" in
        CFileLogWriterBase) extra="-fno-exceptions" ;;
        tinyxml|tinyxmlerror|tinyxmlparser) extra="-O3 -std=gnu++98" ;;
    esac
    local inc_extra=""
    if [ -n "${MON_SCRATCH_SRC_OVERRIDE:-}" ]; then
        inc_extra="-I$(dirname "$src")"
    fi
    if [ -n "${MON_SCRATCH_HEADER_OVERRIDE_DIR:-}" ]; then
        inc_extra="$inc_extra -I$MON_SCRATCH_HEADER_OVERRIDE_DIR"
    fi
    if [ -n "$extra$inc_extra" ]; then
        "$WRAPPER" $FLAGS $inc_extra $extra -c "$src" -o "$out" || exit 4
    else
        "$WRAPPER" $FLAGS -c "$src" -o "$out" || exit 4
    fi
    echo "recompiled $base.cpp -> $out"
}

for b in "$@"; do
    compile_tu "$b"
done

# 链接（与 link.txt 完全一致，仅工作目录换到 scratch）
if ! (cd "$SCRATCH" && sh CMakeFiles/monitor.dir/link.txt >/tmp/mon_scratch_link.log 2>&1); then
    echo "LINK FAILED (see /tmp/mon_scratch_link.log)" >&2
    tail -5 /tmp/mon_scratch_link.log >&2
    exit 5
fi
echo "$SCRATCH/df_monitor_r"
