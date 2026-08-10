#!/bin/bash
# DNF 重建工程一键 CMake 构建（2026-08-10）
# 用法: bash source/toolchain/cmake_build_all.sh [svc ...]
# 依赖: 4.x 工具链根（$DNF_TC_ROOT 或 /tmp，见 docs/toolchain_bootstrap.md）
# 产出: build/<svc>/df_<svc>_r（12 个 4.x 服务）+ build/community/df_community_r
set -u
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
TC="$ROOT/source/toolchain/cmake/dnf_toolchain_44.cmake"
JOBS=${JOBS:-$(nproc 2>/dev/null || echo 4)}

# <svc> <variant>
SERVICES="stun c5
channel c6446r
bridge c6446r
auction c6446r
point c6446r
manager c6
dbmw c6
monitor c6
guild c6
statics c6
relay c6446r
coserver c6"

build_one() {
    local svc="$1" variant="$2"
    echo "===== $svc ($variant) ====="
    cmake -S "$ROOT/source/cmake/$svc" -B "$ROOT/build/$svc" \
        -DCMAKE_TOOLCHAIN_FILE="$TC" -DDF_CC_VARIANT="$variant" \
        -DDF_TC_ROOT="${DNF_TC_ROOT:-/tmp}" >/dev/null || return 1
    cmake --build "$ROOT/build/$svc" -j"$JOBS" || return 1
    echo "OK -> $ROOT/build/$svc/df_${svc}_r"
}

if [ $# -gt 0 ]; then
    for svc in "$@"; do
        variant=$(echo "$SERVICES" | awk -v s="$svc" '$1==s{print $2}')
        if [ -z "$variant" ]; then
            echo "未知服务: $svc（可选: $(echo "$SERVICES" | awk '{print $1}' | tr '\n' ' ') community）" >&2
            exit 2
        fi
        build_one "$svc" "$variant" || exit 1
    done
else
    while read -r svc variant; do
        build_one "$svc" "$variant" || exit 1
    done <<< "$SERVICES"
    echo "===== community (系统编译器) ====="
    cmake -S "$ROOT/source/cmake/community" -B "$ROOT/build/community" >/dev/null || exit 1
    cmake --build "$ROOT/build/community" -j"$JOBS" || exit 1
    echo "OK -> $ROOT/build/community/df_community_r"
fi
echo "===== DONE ====="
