#!/bin/bash
# dbmw 子代理 scratch 构建（2026-08-11，第 14 轮类粒度并行工作流）
#
# 从 build/dbmw/CMakeFiles/dbmw.dir 复制对象树，仅重编本组 TU，按 link.txt
# 同命令链接出 scratch 二进制。不动 build/dbmw 与 function_reports/dbmw。
#
# 两种用法：
#   1) source 本文件后用函数循环（推荐）：
#        scratch_setup <group>                 # rsync 对象树到 /tmp/sub_dbmw_<group>
#        scratch_compile <group> <abs_src>     # 重编一个 TU（自动带该 TU 的 SRC_OPTS）
#        scratch_link <group>                  # 用 link.txt 链接 scratch 二进制
#        scratch_classify <group> <mangled>    # 单函数复检（--check-only）
#   2) 直接执行单 TU 快捷流程：
#        bash source/toolchain/sub_dbmw_scratch.sh <scratch_dir> <tu_basename>
set -u

REPO=/home/loyieking/dnf_workspace/dnf_decompile
SRC_BUILD=$REPO/build/dbmw
OBJROOT="CMakeFiles/dbmw.dir/home/loyieking/dnf_workspace/dnf_decompile/source"
FLAGS_FILE="$SRC_BUILD/CMakeFiles/dbmw.dir/flags.make"

scratch_dir() { echo "/tmp/sub_dbmw_$1"; }

scratch_setup() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    mkdir -p "$scr/CMakeFiles/dbmw.dir"
    rsync -a --delete "$SRC_BUILD/CMakeFiles/dbmw.dir/" "$scr/CMakeFiles/dbmw.dir/"
    echo "scratch ready: $scr"
}

scratch_compile() {
    local g=$1 src=$2; shift 2
    local scr rel out opt
    scr=$(scratch_dir "$g")
    rel="${src#/home/loyieking/dnf_workspace/dnf_decompile/source/}.o"
    out="$scr/$OBJROOT/$rel"
    mkdir -p "$(dirname "$out")"
    opt=$(grep "${rel}_OPTIONS" "$FLAGS_FILE" \
        | sed 's/^# Custom options: .*_OPTIONS = //')
    echo "CC  $src [${opt:-<none>}]"
    (cd "$REPO" && env LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib \
        "$REPO/source/toolchain/cmake/dnf_c6_gxx.sh" $(grep '^CXX_FLAGS = ' \
        "$FLAGS_FILE" | sed 's/^CXX_FLAGS = //') $opt "$@" -c "$src" -o "$out") || return 1
}

scratch_link() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    echo "LD  $scr/df_dbmw_r"
    (cd "$scr" && sh "$SRC_BUILD/CMakeFiles/dbmw.dir/link.txt") || return 1
}

scratch_classify() {
    local g=$1 name=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && python3 source/toolchain/gen_function_md.py \
        --services dbmw --function "$name" \
        --new-bin "$scr/df_dbmw_r" --check-only)
}

scratch_scan() {
    # scratch_scan <group> <list_file>：对列表内每个 mangled 名称复检（check-only）
    local g=$1 list=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && while IFS= read -r name; do
        [ -z "$name" ] && continue
        python3 source/toolchain/gen_function_md.py \
            --services dbmw --function "$name" \
            --new-bin "$scr/df_dbmw_r" --check-only
    done < "$list")
}

if [ "${BASH_SOURCE[0]}" = "$0" ]; then
    # 直接执行：<scratch_dir> <tu_basename>（TU 必须在 DBMW 目录）
    set -e
    SCRATCH=${1:?usage: $0 <scratch_dir> <tu_basename>}
    TU=${2:?usage: $0 <scratch_dir> <tu_basename>}
    scratch_setup "$SCRATCH"
    scratch_compile "$SCRATCH" "$REPO/source/DNFServer/GameServer/DBMW/$TU.cpp"
    scratch_link "$SCRATCH"
    echo "== OK -> $SCRATCH/df_dbmw_r"
fi
