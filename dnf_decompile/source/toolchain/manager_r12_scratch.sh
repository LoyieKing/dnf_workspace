#!/bin/bash
# Round-12 manager scratch build helper for sub-agents.
# Usage:
#   manager_r12_scratch.sh setup <grp>          # mirror objects + link line into /tmp/sub_manager_<grp>
#   manager_r12_scratch.sh compile <grp> <BASE> # recompile one TU (exact CMake flags) into scratch
#   manager_r12_scratch.sh relink <grp>         # link scratch binary from mirrored objects
#   manager_r12_scratch.sh classify <grp> <mangle> [check-only]
#   manager_r12_scratch.sh checkall <grp> <mangle...>   # classify many (check-only)
#
# Group TUs are compiled with the same per-TU options as build/manager's CMake build.
# Sub-agents must NOT touch build/manager/ or function_reports/manager/.
set -u

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$ROOT/build/manager"
CFG="$BUILD/CMakeFiles/manager.dir"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
OBJPFX="home/loyieking/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/Manager"

# TUs compiled with the 4.4.6 cc1plus (-B/tmp/cc1plus446bin/) per current CMake flags.make
B446_TUS="DBManager DNFApplication DNFMySql DNFNetworkThread DNFPacketBuffer DNFPacketDecoder DNFPacketTranslater DNFSignalTranslator DNFTableBase DNFTcpAcceptThread DNFTcpHandler DNFTcpNetworkThread DNFThreadInterface QueryCounter TcpNetSystem"

get_flags() {
    grep '^CXX_FLAGS = ' "$CFG/flags.make" | sed 's/^CXX_FLAGS = //'
}

scratch_dir() {
    echo "/tmp/sub_manager_$1"
}

cmd_setup() {
    local grp="$1" sc
    sc=$(scratch_dir "$grp")
    rm -rf "$sc"
    mkdir -p "$sc"
    mkdir -p "$sc/CMakeFiles"
    cp -a "$CFG" "$sc/CMakeFiles/manager.dir"
    mkdir -p "$sc/mysqlclient"
    cp "$BUILD/mysqlclient/trees.o" "$sc/mysqlclient/trees.o"
    # 保存 link 命令行（从 build/manager 根目录执行）
    sed "s|-o df_manager_r|-o $sc/df_manager_r|" "$CFG/link.txt" > "$sc/relink.sh"
    get_flags > "$sc/CXX_FLAGS"
    echo "setup $grp -> $sc"
}

cmd_compile() {
    local grp="$1" base="$2" sc extra="" src flags
    sc=$(scratch_dir "$grp")
    flags=$(cat "$sc/CXX_FLAGS")
    if [ "$base" = "DNFTableBase" ]; then
        extra="-fenforce-eh-specs"
    fi
    case " $B446_TUS " in
        *" $base "*) extra="$extra -B/tmp/cc1plus446bin/" ;;
    esac
    src="$ROOT/source/DNFServer/GameServer/Manager/$base.cpp"
    obj="$sc/CMakeFiles/manager.dir/$OBJPFX/$base.cpp.o"
    mkdir -p "$(dirname "$obj")"
    echo "CC  $base.cpp  [$extra]"
    # shellcheck disable=SC2086
    "$WRAPPER" $flags $extra -c "$src" -o "$obj" || return 1
}

cmd_relink() {
    local grp="$1" sc
    sc=$(scratch_dir "$grp")
    ( cd "$sc" && sh relink.sh ) || return 1
    echo "LINK -> $sc/df_manager_r"
}

cmd_classify() {
    local grp="$1" mangle="$2" sc
    sc=$(scratch_dir "$grp")
    cd "$ROOT"
    if [ "${3:-}" = "write" ]; then
        python3 source/toolchain/gen_function_md.py --services manager \
            --function "$mangle" --new-bin "$sc/df_manager_r"
    else
        python3 source/toolchain/gen_function_md.py --services manager \
            --function "$mangle" --new-bin "$sc/df_manager_r" --check-only
    fi
}

cmd_checkall() {
    local grp="$1" sc; shift
    sc=$(scratch_dir "$grp")
    cd "$ROOT"
    for m in "$@"; do
        python3 source/toolchain/gen_function_md.py --services manager \
            --function "$m" --new-bin "$sc/df_manager_r" --check-only | tail -1
    done
}

case "${1:-}" in
    setup)    cmd_setup "$2" ;;
    compile)  cmd_compile "$2" "$3" ;;
    relink)   cmd_relink "$2" ;;
    classify) cmd_classify "$2" "$3" "${4:-}" ;;
    checkall) cmd_checkall "$2" "${@:3}" ;;
    *) echo "usage: $0 setup|compile|relink|classify|checkall" >&2; exit 1 ;;
esac
