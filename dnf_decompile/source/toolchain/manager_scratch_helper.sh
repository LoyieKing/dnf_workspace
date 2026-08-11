#!/bin/bash
# manager scratch-build helper (round 13, class-granular subagents)
#
# Usage (any shell):
#   manager_scratch_helper.sh setup   <group>
#   manager_scratch_helper.sh compile <group> <abs_src>
#   manager_scratch_helper.sh link    <group>
#   manager_scratch_helper.sh classify <group> <mangled>
#
# Design: the scratch dir (/tmp/sub_manager_<group>) mirrors build/manager's
# CMakeFiles/manager.dir layout, so link.txt's relative object paths resolve
# verbatim from the scratch root. Only the group's own TUs are recompiled;
# everything else is reused from the current build. Per-file compile options
# (e.g. -B/tmp/cc1plus446bin/) are applied automatically from flags.make.
set -u

REPO=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$REPO/build/manager"
CXX="$REPO/source/toolchain/cmake/dnf_c6_gxx.sh"
FLAGS=$(grep '^CXX_FLAGS =' "$BUILD/CMakeFiles/manager.dir/flags.make" | sed 's/^CXX_FLAGS = //')
OBJROOT="CMakeFiles/manager.dir"

scratch_dir() { echo "/tmp/sub_manager_$1"; }

setup() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    rm -rf "$scr"
    mkdir -p "$scr/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/manager.dir" "$scr/CMakeFiles/"
    mkdir -p "$scr/mysqlclient"
    cp "$BUILD/mysqlclient/trees.o" "$scr/mysqlclient/trees.o"
    echo "scratch ready: $scr"
}

compile() {
    local g=$1 src=$2
    local scr; scr=$(scratch_dir "$g")
    local rel=${src#/}
    local out="$scr/$OBJROOT/$rel.o"
    local extra=""
    local line
    line=$(grep "^# Custom options: $OBJROOT/$rel.o_OPTIONS = " "$BUILD/CMakeFiles/manager.dir/flags.make" | head -1)
    if [ -n "$line" ]; then
        extra=${line#*= }
    fi
    mkdir -p "$(dirname "$out")"
    echo "CC  $src  [extra: ${extra:-none}]"
    # shellcheck disable=SC2086: FLAGS/extra must be word-split here (bash)
    (cd "$REPO" && "$CXX" $FLAGS $extra -c "$src" -o "$out") || return 1
}

link() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    echo "LD  $scr/df_manager_r"
    (cd "$scr" && sh "$BUILD/CMakeFiles/manager.dir/link.txt") || return 1
}

classify() {
    local g=$1 name=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && python3 source/toolchain/gen_function_md.py \
        --services manager --function "$name" \
        --new-bin "$scr/df_manager_r" --check-only)
}

cmd=$1; shift
case "$cmd" in
    setup)    setup "$@" ;;
    compile)  compile "$@" ;;
    link)     link "$@" ;;
    classify) classify "$@" ;;
    *) echo "usage: $0 setup|compile|link|classify ..." >&2; exit 2 ;;
esac
