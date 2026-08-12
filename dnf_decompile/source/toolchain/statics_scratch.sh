#!/bin/bash
# statics_scratch.sh — statics 服务逐 TU scratch 构建（子 Agent 专用，2026-08-11）
#
# 用法:
#   statics_scratch.sh <scratch_dir> <cpp_basename> [<cpp_basename> ...]
#
# 行为:
#   1. 把权威构建 build/statics 的全部 .o 复制到 <scratch_dir>（仅首次）
#   2. 用与权威构建完全相同的 flags（c6446r 变体；可用 STATICS_SCRATCH_VARIANT
#      覆盖为 c6 / c6444r / c6446r 做逐 TU A/B 试验）重编指定 basename 的 TU，
#      覆盖 scratch 中的对应 .o
#   3. 用 link.txt 相同命令链接出 <scratch_dir>/df_statics_r
#
# 约束: 只写 <scratch_dir>，不碰 build/statics 与 function_reports/statics。
# 输出: 最后一行打印 scratch 二进制绝对路径。
set -u

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD=$ROOT/build/statics
OBJROOT=$BUILD/CMakeFiles/statics.dir
case "${STATICS_SCRATCH_VARIANT:-c6446r}" in
    c6)      WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh ;;
    c6444r)  WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh ;;
    c6446r)  WRAPPER=$ROOT/source/toolchain/cmake/dnf_c6446r_gxx.sh ;;
    c5)      WRAPPER=$ROOT/source/toolchain/cmake/dnf_c5_gxx.sh ;;
    c5r52)   WRAPPER=$ROOT/source/toolchain/cmake/dnf_c5r52_gxx.sh ;;
    *) echo "ERROR: unknown STATICS_SCRATCH_VARIANT" >&2; exit 6 ;;
esac

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
if [ "${STATICS_SCRATCH_VARIANT:-c6446r}" = "c5" ] || [ "${STATICS_SCRATCH_VARIANT:-c6446r}" = "c5r52" ]; then
    # 4.1.2 不支持 gnu++0x，且必须换用 4.1.2 头链（c5r52tool）
    FLAGS="-m32 -O0 -fno-enforce-eh-specs -nostdinc \
  -isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include \
  -isystem /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed \
  -isystem /tmp/c5r52tool/usr/include/c++/4.1.2 \
  -isystem /tmp/c5r52tool/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem /tmp/c5r52tool/usr/include/c++/4.1.2/backward \
  -isystem /tmp/c5r52tool/usr/include \
  -I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/ServerCommon \
  -I/home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Statics \
  -I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/packet/include \
  -I/home/loyieking/dnf_workspace/dnf_decompile/source/shared \
  -I/home/loyieking/dnf_workspace/dnf_decompile/source/shared/common/include \
  -DDNF_SVC_STATICS"
fi

compile_tu() {
    local base="$1"
    local src="${STATICS_SCRATCH_SRC_OVERRIDE:-}"
    if [ -z "$src" ]; then
        src=$(find "$ROOT/source" -name "$base.cpp" -path '*Statics*' -print -quit)
        [ -n "$src" ] || src=$(find "$ROOT/source" -name "$base.cpp" -print -quit)
    fi
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
