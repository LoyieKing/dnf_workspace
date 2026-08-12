#!/bin/bash
# dbmw 子 agent scratch 构建（2026-08-12 第 31 轮）
# 用法：dbmw_scratch_build.sh <scratch_dir> <tu_basename.cpp> [<src_override>] [<tu2> <src2>] ...
#   - 复制 build/dbmw 完整对象树到 $SCRATCH/CMakeFiles/dbmw.dir
#   - 用 CMake 相同 wrapper/flags + 逐文件 OPTIONS 重编指定 TU（默认 source 树源码，
#     可传 src_override 指向 scratch 内的副本）
#   - 按 link.txt 同命令链接出 $SCRATCH/df_dbmw_r
# 不修改 build/dbmw 与 function_reports/dbmw。
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
shift
OBJROOT="$ROOT/build/dbmw/CMakeFiles/dbmw.dir"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")

mkdir -p "$SCRATCH"
rm -rf "$SCRATCH/CMakeFiles"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"

compile_tu() {
    local tu="$1"
    local src="${2:-}"
    local tsrc
    if [ -n "$src" ]; then
        tsrc="$src"
    elif [ -f "$ROOT/source/DNFServer/GameServer/DBMW/$tu" ]; then
        tsrc="$ROOT/source/DNFServer/GameServer/DBMW/$tu"
    else
        tsrc="$(find "$ROOT/source" -name "$tu" | head -1)"
    fi
    [ -n "$tsrc" ] || { echo "no source for $tu" >&2; return 1; }
    local tobj
    tobj="$(find "$SCRATCH/CMakeFiles/dbmw.dir" -name "${tu}.o" | head -1)"
    [ -n "$tobj" ] || { echo "no object for $tu" >&2; return 1; }
    local opts=""
    while IFS= read -r line; do
        case "$line" in
        *"/$tu.cpp.o_OPTIONS = "*)
            opts="${line#*OPTIONS = }"
            opts="${opts//;/ }"
            ;;
        esac
    done < "$OBJROOT/flags.make"
    echo "CC $tu ($opts)"
    "$WRAPPER" $FLAGS $opts -c "$tsrc" -o "$tobj"
}

while [ $# -gt 0 ]; do
    tu="$1"
    shift
    src=""
    if [ $# -gt 0 ] && [[ "$1" == /* ]]; then
        src="$1"
        shift
    fi
    compile_tu "$tu" "$src"
done

echo "LD df_dbmw_r (scratch)"
cd "$SCRATCH"
LINKLINE=$(sed "s|^[^ ]*|$ROOT/source/toolchain/link_dbmw.sh|" "$OBJROOT/link.txt")
eval "$LINKLINE"
echo "OK -> $SCRATCH/df_dbmw_r"
