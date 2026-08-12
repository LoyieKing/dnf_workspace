#!/bin/bash
# guild 子 agent scratch 构建（自足版）：
# 复制对象树 -> 重编 DNFGuild.cpp -> 若链接缺符号，自动按当前源码重编缺失 TU -> 链接。
# 不修改 build/guild 与 function_reports/guild。
set -uo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
TU="$2"
OBJROOT="$ROOT/build/guild/CMakeFiles/guild.dir"
TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
SRC="$(find "$ROOT/source" -name "$TU" | head -1)"
[ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }
rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
WRAPPER="$ROOT/source/toolchain/cmake/dnf_guild_cxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")

compile_tu() {
    local tu="$1"
    local tsrc="$(find "$ROOT/source" -name "$tu" | head -1)"
    [ -n "$tsrc" ] || return 1
    local tobj="$(find "$SCRATCH/CMakeFiles/guild.dir" -name "${tu}.o" | head -1)"
    [ -n "$tobj" ] || return 1
    local rel="${tobj#$SCRATCH/CMakeFiles/guild.dir/}"
    "$WRAPPER" $FLAGS -c "$tsrc" -o "$tobj" 2>/tmp/sub_guild_tc_err.$$ || {
        echo "compile failed: $tu" >&2
        head -5 /tmp/sub_guild_tc_err.$$ >&2
        return 1
    }
}

echo "CC $TU (scratch)"
compile_tu "$TU" || exit 1

link_bin() {
    cd "$SCRATCH"
    /usr/bin/g++ -m32 -O0 -fno-enforce-eh-specs -m32 -no-pie -lpthread -ldl -lm \
        $(find CMakeFiles/guild.dir -name '*.o' | sort) -o df_guild_r \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
        /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a
}

echo "LD df_guild_r (scratch)"
if link_bin 2>/tmp/sub_guild_ld_err.$$; then
    echo "OK -> $SCRATCH/df_guild_r"
    exit 0
fi
echo "link failed; recompiling undefined TUs" >&2
grep -oE "[A-Za-z0-9_]+\.cpp:" /tmp/sub_guild_ld_err.$$ | sort -u | tr -d ':' > /tmp/sub_guild_tus.$$
UNDEF_OBJS=""
while read -r tu; do
    case "$UNDEF_OBJS" in
        *" $tu "*) ;;
        *) UNDEF_OBJS="$UNDEF_OBJS $tu " ;;
    esac
done < /tmp/sub_guild_tus.$$
for tu in $UNDEF_OBJS; do
    echo "recompile stale TU: $tu"
    compile_tu "$tu" || true
done
if link_bin 2>/tmp/sub_guild_ld2_err.$$; then
    echo "OK (after recompile) -> $SCRATCH/df_guild_r"
    exit 0
fi
echo "link still failed" >&2
head -30 /tmp/sub_guild_ld2_err.$$ >&2
exit 1
