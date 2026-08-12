#!/bin/bash
# guild 子 agent 多 TU scratch 构建：<scratch_dir> <tu_basename.cpp> [...]
# 复制完整对象树 -> 重编指定 TU 列表 -> 按 link.txt 同命令链接，产出 $SCRATCH/df_guild_r
# 不修改 build/guild 与 function_reports/guild。
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
shift
OBJROOT="$ROOT/build/guild/CMakeFiles/guild.dir"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")

rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"

compile_tu() {
    local tu="$1"
    local tsrc
    if [ -f "$ROOT/source/DNFServer/GameServer/Guild/$tu" ]; then
        tsrc="$ROOT/source/DNFServer/GameServer/Guild/$tu"
    else
        tsrc="$(find "$ROOT/source" -name "$tu" | head -1)"
    fi
    [ -n "$tsrc" ] || { echo "no source for $tu" >&2; return 1; }
    local tobj="$(find "$SCRATCH/CMakeFiles/guild.dir" -name "${tu}.o" | head -1)"
    [ -n "$tobj" ] || { echo "no object for $tu" >&2; return 1; }
    local rel="${tobj#$SCRATCH/CMakeFiles/guild.dir/}"
    echo "CC $tu (scratch)"
    "$WRAPPER" $FLAGS -c "$tsrc" -o "$tobj"
}

for tu in "$@"; do
    compile_tu "$tu"
done

echo "LD df_guild_r (scratch)"
cd "$SCRATCH"
/usr/bin/g++ -m32 -O0 -fno-enforce-eh-specs -m32 -no-pie -lpthread -ldl -lm \
    $(find CMakeFiles/guild.dir -name '*.o' | sort) -o df_guild_r \
    /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
    /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
    /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
    /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
    /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a
echo "OK -> $SCRATCH/df_guild_r"
