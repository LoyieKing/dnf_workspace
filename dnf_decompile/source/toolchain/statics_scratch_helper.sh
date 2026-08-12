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
    local rel=${src#/}.o
    local out="$scr/CMakeFiles/statics.dir/$rel"
    mkdir -p "$(dirname "$out")"
    echo "CC  $src"
    (cd "$REPO" && "$CXX" $FLAGS "$@" -c "$src" -o "$out") || return 1
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
