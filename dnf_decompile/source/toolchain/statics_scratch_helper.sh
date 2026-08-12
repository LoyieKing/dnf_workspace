#!/bin/bash
# statics scratch-build helper (round 17, class-granular subagents)
#
# Usage: source this file, then:
#   scratch_setup <group>                 # copy all .o into /tmp/sub_statics_<group>
#   scratch_compile <group> <abs_src> [extra flags...]
#                                          # recompile one TU into the scratch tree
#   scratch_link <group>                   # link scratch binary (same link.txt)
#   scratch_classify <group> <mangled>     # classify one function vs ORIG (check-only)
#
#   Env overrides (2026-08-12, round 28, 同 TU 多组并行 / 逐 TU 工具链 A/B):
#     STATICS_SCRATCH_SRC_OVERRIDE=/abs/path/<TU>.cpp  用私有副本编译（对象名仍按
#       仓库内 <abs_src> 落盘，供同 TU 多组子 agent 各改各的副本而不冲突）
#     STATICS_SCRATCH_VARIANT=c6|c6446r|...           强制该 TU 用指定变体编译器
#       （默认走 dnf_c6446r_gxx.sh，与权威 build/statics c6446r 一致）
#
# Design: the scratch dir mirrors build/statics's CMakeFiles/statics.dir layout, so
# link.txt's relative object paths resolve verbatim from the scratch root. Only the
# group's own TUs are recompiled; everything else is reused from the current build.
set -u

REPO=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$REPO/build/statics"
CXX="$REPO/source/toolchain/cmake/dnf_c6446r_gxx.sh"
FLAGS=$(grep '^CXX_FLAGS =' "$BUILD/CMakeFiles/statics.dir/flags.make" | sed 's/^CXX_FLAGS = //')

scratch_dir() { echo "/tmp/sub_statics_$1"; }

scratch_setup() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    rm -rf "$scr"
    mkdir -p "$scr/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/statics.dir" "$scr/CMakeFiles/"
    echo "scratch ready: $scr"
}

scratch_compile() {
    local g=$1 src=$2; shift 2
    local scr; scr=$(scratch_dir "$g")
    local use_src="${STATICS_SCRATCH_SRC_OVERRIDE:-$src}"
    local rel=${src#/}.o
    local out="$scr/CMakeFiles/statics.dir/$rel"
    local cxx="$CXX"
    local flags="$FLAGS"
    case "${STATICS_SCRATCH_VARIANT:-}" in
        c6)       cxx="$REPO/source/toolchain/cmake/dnf_c6_gxx.sh" ;;
        c6444r)   cxx="$REPO/source/toolchain/cmake/dnf_c6444r_gxx.sh" ;;
        c6446r)   cxx="$REPO/source/toolchain/cmake/dnf_c6446r_gxx.sh" ;;
        c5)       cxx="$REPO/source/toolchain/cmake/dnf_c5_gxx.sh"
                  # 4.1.2 不支持 gnu++0x，且头文件链必须切到 c5root 4.1.2
                  flags="-m32 -O0 -fno-enforce-eh-specs -nostdinc \
  -isystem /tmp/c5root/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include \
  -isystem /tmp/c5root/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed \
  -isystem /tmp/c5root/usr/include/c++/4.1.2 \
  -isystem /tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem /tmp/c5root/usr/include/c++/4.1.2/backward \
  -isystem /tmp/c5root/usr/include \
  -I$REPO/source/DNFServer/ServerCommon -I$REPO/source/DNFServer/GameServer/Statics \
  -I$REPO/source/shared/packet/include -I$REPO/source/shared -I$REPO/source/shared/common/include \
  -DDNF_SVC_STATICS" ;;
        *)        : ;;
    esac
    mkdir -p "$(dirname "$out")"
    echo "CC  $src (src=$(basename "$use_src")${STATICS_SCRATCH_VARIANT:+ variant=$STATICS_SCRATCH_VARIANT})"
    # 用 bash 展开 FLAGS（zsh 默认不 word-split 未加引号变量）
    (cd "$REPO" && FLAGS="$flags" bash -c '"$0" $FLAGS "$@"' "$cxx" -c "$use_src" -o "$out") || return 1
}

scratch_link() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    echo "LD  $scr/df_statics_r"
    (cd "$scr" && sh "$BUILD/CMakeFiles/statics.dir/link.txt") || return 1
}

scratch_classify() {
    local g=$1 name=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && python3 source/toolchain/gen_function_md.py \
        --services statics --function "$name" \
        --new-bin "$scr/df_statics_r" --check-only)
}
