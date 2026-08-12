#!/bin/bash
# guild GuildCargo.cpp scratch 构建（ORIG 对齐 flags：-march=pentium -mtune=i686 -maccumulate-outgoing-args）
# 用法：<scratch_dir>；产出 $SCRATCH/df_guild_r
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
OBJROOT="$ROOT/build/guild/CMakeFiles/guild.dir"
TU="GuildCargo.cpp"
TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
SRC="$(find "$ROOT/source" -name "$TU" | head -1)"
[ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")
echo "CC $TU (scratch, ORIG-flags)"
"$WRAPPER" $FLAGS -march=pentium -mtune=i686 -maccumulate-outgoing-args -c "$SRC" -o "$SCRATCH/CMakeFiles/guild.dir/$(echo "${TUO#"$OBJROOT"/}")"
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
