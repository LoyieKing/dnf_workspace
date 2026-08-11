#!/bin/bash
# guild scratch 构建辅助（§0.1 子 SubAgent 用，2026-08-11 第 12 轮）
# 用法:
#   bash source/toolchain/guild_scratch_build.sh init <group> <TU-basename>...
#     - 首次：把 build/guild 全部 .o 复制到 /tmp/sub_guild_<group>/（保留相对结构），
#       再重编指定 TU 覆盖（<TU-basename> 如 DNFPacketTranslater）
#   bash source/toolchain/guild_scratch_build.sh rebuild <group> <TU-basename>...
#     - 已 init 后：只重编指定 TU + 重新链接（不复制，快）
#   bash source/toolchain/guild_scratch_build.sh relink <group>
#     - 只重新链接 scratch 二进制
# 产物: /tmp/sub_guild_<group>/df_guild_r
set -e
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
BDIR="$ROOT/build/guild"
OBJDIR="$BDIR/CMakeFiles/guild.dir"
CXXWRAP="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"

cmd="$1"; group="$2"; shift 2 || true
SCRATCH="/tmp/sub_guild_${group}"

mkdir -p "$SCRATCH"

compile_tu() {
    local tu="$1"   # e.g. DNFServer/GameServer/Guild/DNFPacketTranslater
    local base
    base="$(basename "$tu")"
    if [[ "$tu" != */* ]]; then
        # 允许只传 basename：在 Guild / ServerCommon / shared 下解析
        if [ -f "$ROOT/source/DNFServer/GameServer/Guild/${tu}.cpp" ]; then
            tu="DNFServer/GameServer/Guild/${tu}"
        elif [ -f "$ROOT/source/DNFServer/ServerCommon/${tu}.cpp" ]; then
            tu="DNFServer/ServerCommon/${tu}"
        elif [ -f "$ROOT/source/shared/packet/src/${tu}.cpp" ]; then
            tu="shared/packet/src/${tu}"
        else
            echo "ERR: cannot resolve TU $tu" >&2
            exit 2
        fi
    fi
    local src="$ROOT/source/${tu}.cpp"
    [ -f "$src" ] || { echo "ERR: missing $src"; exit 2; }
    local obj="$SCRATCH/CMakeFiles/guild.dir/home/loyieking/dnf_workspace/dnf_decompile/source/${tu}.cpp.o"
    # 从 flags.make 提取 CXX_FLAGS（含 -isystem/-I/-D/-std）
    local cflags
    cflags=$(grep '^CXX_FLAGS' "$OBJDIR/flags.make" | sed 's/^CXX_FLAGS = //')
    echo "CC  $base.cpp"
    mkdir -p "$(dirname "$obj")"
    "$CXXWRAP" $cflags -c "$src" -o "$obj"
}

relink() {
    # link.txt 以 build/guild 为 cwd，相对路径 CMakeFiles/guild.dir/... 在 scratch 下同样成立
    cp "$OBJDIR/link.txt" "$SCRATCH/link.txt"
    ( cd "$SCRATCH" && sh link.txt )
    echo "OK -> $SCRATCH/df_guild_r"
}

case "$cmd" in
    init)
        if [ ! -d "$SCRATCH/CMakeFiles/guild.dir" ]; then
            mkdir -p "$SCRATCH/CMakeFiles/guild.dir"
            cp -a "$OBJDIR/." "$SCRATCH/CMakeFiles/guild.dir/"
        fi
        for tu in "$@"; do compile_tu "$tu"; done
        relink
        ;;
    rebuild)
        for tu in "$@"; do compile_tu "$tu"; done
        relink
        ;;
    relink)
        relink
        ;;
    *)
        echo "usage: $0 init|rebuild|relink <group> [TU...]" >&2
        exit 2
        ;;
esac
