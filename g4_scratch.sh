#!/bin/bash
# g4_user scratch build: DNFUser.cpp with -fno-exceptions (ORIG TU evidence),
# DNFUserManager.cpp with default flags.
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH=/tmp/sub_guild_g4_user
OBJROOT="$ROOT/build/guild/CMakeFiles/guild.dir"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")

rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"

compile_tu() {
    local tu="$1"
    local extra="$2"
    local tsrc
    if [ -f "$ROOT/source/DNFServer/GameServer/Guild/$tu" ]; then
        tsrc="$ROOT/source/DNFServer/GameServer/Guild/$tu"
    else
        tsrc="$(find "$ROOT/source" -name "$tu" | head -1)"
    fi
    [ -n "$tsrc" ] || { echo "no source for $tu" >&2; return 1; }
    local tobj="$(find "$SCRATCH/CMakeFiles/guild.dir" -name "${tu}.o" | head -1)"
    [ -n "$tobj" ] || { echo "no object for $tu" >&2; return 1; }
    echo "CC $tu ($extra)"
    "$WRAPPER" $FLAGS $extra -c "$tsrc" -o "$tobj"
}

compile_tu DNFUser.cpp "-fno-exceptions"
compile_tu DNFUserManager.cpp ""

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
