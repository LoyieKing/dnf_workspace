#!/bin/bash
# guild 子 agent 隔离源副本 scratch 构建：
#   guild_scratch_tu_src.sh <scratch_dir> <src_override_path> <tu_basename.cpp>
# 从指定源码副本编译单个 TU（不读共享源码树），复制对象树后按 link.txt 同命令链接。
# 用于同 TU 多组并行：每组在 /tmp 维护自己的源码副本，互不干扰。
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
SRC_OVERRIDE="$2"
TU="$3"
OBJROOT="$ROOT/build/guild/CMakeFiles/guild.dir"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")

[ -f "$SRC_OVERRIDE" ] || { echo "no source override: $SRC_OVERRIDE" >&2; exit 1; }
TOBJ="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TOBJ" ] || { echo "no object for $TU" >&2; exit 1; }

rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
REL="${TOBJ#$OBJROOT/}"
echo "CC $TU (override: $(basename "$SRC_OVERRIDE"))"
"$WRAPPER" $FLAGS -c "$SRC_OVERRIDE" -o "$SCRATCH/CMakeFiles/guild.dir/$REL"
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
