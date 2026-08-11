#!/bin/bash
# statics_scratch.sh — statics 服务逐 TU scratch 构建（子 Agent 专用，2026-08-11）
#
# 用法:
#   statics_scratch.sh <scratch_dir> <cpp_basename> [<cpp_basename> ...]
#
# 行为:
#   1. 把权威构建 build/statics 的全部 .o 复制到 <scratch_dir>（仅首次）
#   2. 用与权威构建完全相同的 flags（c6446r 变体）重编指定 basename 的 TU，
#      覆盖 scratch 中的对应 .o
#   3. 用 link.txt 相同命令链接出 <scratch_dir>/df_statics_r
#
# 约束: 只写 <scratch_dir>，不碰 build/statics 与 function_reports/statics。
# 输出: 最后一行打印 scratch 二进制绝对路径。
set -u

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD=$ROOT/build/statics
OBJROOT=$BUILD/CMakeFiles/statics.dir
WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6446r_gxx.sh

if [ $# -lt 2 ]; then
    echo "usage: $0 <scratch_dir> <cpp_basename> [...]" >&2
    exit 2
fi
SCRATCH=$1
shift

mkdir -p "$SCRATCH"

# 首次：复制权威 .o 树（保留相对结构）
if [ ! -f "$SCRATCH/CMakeFiles/statics.dir/link.txt" ]; then
    mkdir -p "$SCRATCH/CMakeFiles"
    (cd "$BUILD" && tar cf - CMakeFiles/statics.dir) | \
        (cd "$SCRATCH" && tar xf -)
fi

# 提取权威编译 flags
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make" | head -1)

compile_tu() {
    local base="$1"
    local src
    src=$(find "$ROOT/source" -name "$base.cpp" -path '*Statics*' -print -quit)
    [ -n "$src" ] || src=$(find "$ROOT/source" -name "$base.cpp" -print -quit)
    if [ -z "$src" ]; then
        echo "ERROR: cannot find source for $base.cpp" >&2
        exit 3
    fi
    local out="$SCRATCH/CMakeFiles/statics.dir/home/loyieking/dnf_workspace/dnf_decompile/source/${src#$ROOT/source/}.o"
    mkdir -p "$(dirname "$out")"
    local extra=""
    case "$base" in
        CFileLogWriterBase) extra="-fno-exceptions" ;;
        DNFTableBase) extra="-fenforce-eh-specs" ;;
    esac
    if [ -n "$extra" ]; then
        "$WRAPPER" $FLAGS $extra -c "$src" -o "$out" || exit 4
    else
        "$WRAPPER" $FLAGS -c "$src" -o "$out" || exit 4
    fi
    echo "recompiled $base.cpp -> $out"
}

for b in "$@"; do
    compile_tu "$b"
done

# 链接（与 link.txt 完全一致，仅工作目录换到 scratch）
if ! (cd "$SCRATCH" && sh CMakeFiles/statics.dir/link.txt >/tmp/st_scratch_link.log 2>&1); then
    echo "LINK FAILED (see /tmp/st_scratch_link.log)" >&2
    tail -5 /tmp/st_scratch_link.log >&2
    exit 5
fi
echo "$SCRATCH/df_statics_r"
