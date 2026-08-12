#!/bin/bash
# guild scratch-build helper (round 15, class-granular subagents)
#
# Usage: source this file, then:
#   scratch_setup <group>                 # copy all .o into /tmp/sub_guild_<group>
#   scratch_compile <group> <abs_src> [extra flags...]
#                                          # recompile one TU into the scratch tree
#   scratch_link <group>                   # link scratch binary (same link.txt)
#   scratch_classify <group> <mangled>     # classify one function vs ORIG (check-only)
#
#   Env overrides (2026-08-12, round 25, 同 TU 多组并行 / 逐 TU 工具链 A/B):
#     GUILD_SCRATCH_SRC_OVERRIDE=/abs/path/<TU>.cpp  用私有副本编译（对象名仍按
#       仓库内 <abs_src> 落盘，供组内多子 agent 各改各的副本而不冲突）
#     GUILD_SCRATCH_VARIANT=c6|c6444r|c6446r          强制该 TU 用指定变体编译器
#       （默认走 dnf_guild_cxx.sh 的逐 TU 分发）
#
# Design: the scratch dir mirrors build/guild/CMakeFiles/guild.dir layout, so
# link.txt's relative object paths resolve verbatim from the scratch root. Only
# the group's own TUs are recompiled; everything else is reused from the build.
set -u

REPO=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$REPO/build/guild"
CXX="$REPO/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(grep '^CXX_FLAGS =' "$BUILD/CMakeFiles/guild.dir/flags.make" | sed 's/^CXX_FLAGS = //')

scratch_dir() { echo "/tmp/sub_guild_$1"; }

scratch_setup() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    rm -rf "$scr"
    mkdir -p "$scr/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/guild.dir" "$scr/CMakeFiles/"
    echo "scratch ready: $scr"
}

scratch_compile() {
    local g=$1 src=$2; shift 2
    local scr; scr=$(scratch_dir "$g")
    local use_src="${GUILD_SCRATCH_SRC_OVERRIDE:-$src}"
    local rel=${src#/}.o
    local out="$scr/CMakeFiles/guild.dir/$rel"
    local cxx="$CXX"
    local -a fl
    eval "fl=($FLAGS)"
    case "${GUILD_SCRATCH_VARIANT:-}" in
        c6)       cxx="$REPO/source/toolchain/cmake/dnf_c6_gxx.sh" ;;
        c6444r)   cxx="$REPO/source/toolchain/cmake/dnf_c6444r_gxx.sh" ;;
        c6446r)   cxx="$REPO/source/toolchain/cmake/dnf_c6446r_gxx.sh" ;;
        *)        : ;;
    esac
    mkdir -p "$(dirname "$out")"
    echo "CC  $src (src=$(basename "$use_src")${GUILD_SCRATCH_VARIANT:+ variant=$GUILD_SCRATCH_VARIANT})"
    (cd "$REPO" && "$cxx" "${fl[@]}" "$@" -c "$use_src" -o "$out") || return 1
}

scratch_link() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    echo "LD  $scr/df_guild_r"
    (cd "$scr" && sh "$BUILD/CMakeFiles/guild.dir/link.txt") || return 1
}

scratch_classify() {
    local g=$1 name=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && python3 source/toolchain/gen_function_md.py \
        --services guild --function "$name" \
        --new-bin "$scr/df_guild_r" --check-only)
}
