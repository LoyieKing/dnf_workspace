#!/bin/bash
# statics 子 agent scratch 构建：<scratch_dir> <tu_basename.cpp> [variant]
# 复制完整对象树 -> 按指定变体重编该 TU -> 按 link.txt 原序链接，产出 $SCRATCH/df_statics_r
# variant: c6446r(默认)/c6444r/c6/c5
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
TU="$2"
VARIANT="${3:-c6446r}"
OBJROOT="$ROOT/build/statics/CMakeFiles/statics.dir"
TUO="$(find "$OBJROOT" -path "*GameServer/Statics/${TU}.o" -o -path "*shared/packet/src/${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
SRC="$ROOT/source/DNFServer/GameServer/Statics/$TU"
[ -f "$SRC" ] || SRC="$ROOT/source/shared/packet/src/$TU"
[ -f "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }
case "$VARIANT" in
    c5) WRAPPER="$ROOT/source/toolchain/cmake/dnf_c5_gxx.sh"
        FLAGSFILE=/tmp/statics_flags_c5.txt ;;
    c6444r) WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh"
        FLAGSFILE=/tmp/statics_flags_c6444r.txt ;;
    c6) WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
        FLAGSFILE=/tmp/statics_flags_c6446r.txt ;;
    *) WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6446r_gxx.sh"
        FLAGSFILE=/tmp/statics_flags_c6446r.txt ;;
esac
rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/statics.dir"
FLAGS=$(cat "$FLAGSFILE")
if [ "$VARIANT" = "c5" ]; then
    FLAGS=${FLAGS//-std=gnu++0x/}
fi
# 该 TU 的 per-file SRC_OPTS（如 DNFTableBase.cpp 的 -fenforce-eh-specs）
EXTRA=$(sed -n "s#^CMakeFiles/statics.dir/.*/${TU}.o_OPTIONS = ##p" "$OBJROOT/build.make" | head -1)
echo "CC $TU (variant=$VARIANT)"
eval "$WRAPPER $FLAGS $EXTRA -c \"$SRC\" -o \"$SCRATCH/CMakeFiles/statics.dir/$(echo "${TUO#"$OBJROOT"/}")\""
echo "LD df_statics_r (scratch)"
cd "$SCRATCH"
sed -e "s#^g++ #/usr/bin/g++ #" \
    -e "s#-o df_statics_r#-o $SCRATCH/df_statics_r#" \
    "$ROOT/build/statics/CMakeFiles/statics.dir/link.txt" > link_cmd.sh
chmod +x link_cmd.sh
./link_cmd.sh
echo "OK -> $SCRATCH/df_statics_r"
