#!/bin/bash
# manager scratch-build helper (round 20, class-granular subagents)
#
# Usage: source this file, then:
#   scratch_setup <group>                 # copy all .o into /tmp/sub_manager_<group>
#   scratch_compile <group> <abs_src>     # recompile one TU (per-file opts auto)
#   scratch_link <group>                  # link scratch binary (same link.txt)
#   scratch_classify <group> <mangled>    # classify one function vs ORIG (check-only)
#
# Design: the scratch dir mirrors build/manager's CMakeFiles/manager.dir layout, so
# link.txt's relative object paths resolve verbatim from the scratch root. Only the
# group's own TUs are recompiled; everything else is reused from the current build.
set -u

REPO=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$REPO/build/manager"
CXX="$REPO/source/toolchain/cmake/dnf_c6_gxx.sh"
FLAGS=$(grep '^CXX_FLAGS =' "$BUILD/CMakeFiles/manager.dir/flags.make" | sed 's/^CXX_FLAGS = //')

scratch_dir() { echo "/tmp/sub_manager_$1"; }

scratch_setup() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    rm -rf "$scr"
    mkdir -p "$scr/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/manager.dir" "$scr/CMakeFiles/"
    if [ -d "$BUILD/mysqlclient" ]; then
        cp -r "$BUILD/mysqlclient" "$scr/mysqlclient"
    fi
    echo "scratch ready: $scr"
}

scratch_compile() {
    local g=$1 src=$2
    local scr; scr=$(scratch_dir "$g")
    local rel=${src#/}.o
    local out="$scr/CMakeFiles/manager.dir/$rel"
    local extra
    extra=$(grep "manager.dir/${rel}_OPTIONS" "$BUILD/CMakeFiles/manager.dir/flags.make" \
            | sed 's/^# Custom options: .*_OPTIONS = //')
    mkdir -p "$(dirname "$out")"
    echo "CC  $src  [opts: ${extra:-none}]"
    (cd "$REPO" && "$CXX" $FLAGS ${extra} -c "$src" -o "$out") || return 1
}

scratch_link() {
    local g=$1
    local scr; scr=$(scratch_dir "$g")
    echo "LD  $scr/df_manager_r"
    (cd "$scr" && sh "$BUILD/CMakeFiles/manager.dir/link.txt") || return 1
}

scratch_classify() {
    local g=$1 name=$2
    local scr; scr=$(scratch_dir "$g")
    (cd "$REPO" && python3 source/toolchain/gen_function_md.py \
        --services manager --function "$name" \
        --new-bin "$scr/df_manager_r" --check-only)
}
