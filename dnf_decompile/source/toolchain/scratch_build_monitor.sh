#!/bin/bash
# monitor TU scratch rebuild helper (round 11)
# usage: scratch_build_monitor.sh <scratch_root> <abs_src.cpp> [<abs_src.cpp> ...]
# Recompiles the given TUs with the exact CMake flags and relinks the full
# binary at <scratch_root>/df_monitor_r. Never touches build/monitor.
set -u
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BLD="$ROOT/build/monitor/CMakeFiles/monitor.dir"
SR="$1"; shift
OBJROOT="$SR/CMakeFiles/monitor.dir"
GXX="$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh"

CXX_FLAGS=$(grep '^CXX_FLAGS' "$BLD/flags.make" | head -1 | sed 's/^CXX_FLAGS = //')

if [ ! -f "$SR/.initialized" ]; then
    mkdir -p "$OBJROOT"
    (cd "$BLD" && tar cf - .) | (cd "$OBJROOT" && tar xf -)
    touch "$SR/.initialized"
    echo "== copied base objects to $OBJROOT"
fi

extra() {
    case "$1" in
        *CFileLogWriterBase.cpp) echo -fno-exceptions ;;
        *tinyxml.cpp|*tinyxmlerror.cpp|*tinyxmlparser.cpp) echo -O3 -std=gnu++98 ;;
        *) echo ;;
    esac
}

for src in "$@"; do
    rel="home/loyieking/dnf_workspace/dnf_decompile/source/${src#$ROOT/source/}.o"
    mkdir -p "$OBJROOT/$(dirname "$rel")"
    $GXX $CXX_FLAGS $(extra "$src") -o "$OBJROOT/$rel" -c "$src" || { echo "COMPILE FAIL: $src" >&2; exit 1; }
    echo "== compiled $src"
done

(cd "$SR" && bash CMakeFiles/monitor.dir/link.txt) || { echo "LINK FAIL" >&2; exit 1; }
echo "OK -> $SR/df_monitor_r"
