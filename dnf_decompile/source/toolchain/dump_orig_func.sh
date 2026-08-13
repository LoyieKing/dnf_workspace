#!/bin/bash
# Dump ORIG disassembly for one function (helper for field-offset verification subagents).
# Usage: dump_orig_func.sh <service> <mangled_name>
#        (or with -C, use demangled name; c++filt is applied automatically)
set -u
SVC="$1"
NAME="$2"
BASE="/home/loyieking/dnf_workspace/dnf_installer/build/dnf_data/home/template/neople"

# ORIG 二进制目录名并非都与服务名一致（dbmw 在 dbmw_guild/ 下）。
case "$SVC" in
    dbmw) DIR="$BASE/dbmw_guild" ;;
    *)    DIR="$BASE/$SVC" ;;
esac
ORIG="$DIR/df_${SVC}_r"
[ -f "$ORIG" ] || { echo "NO BINARY: $ORIG" >&2; exit 2; }

dem=$(echo "$NAME" | c++filt)
line=$(nm -S -C "$ORIG" | grep -F "$dem" | grep -E ' [TtWw] ' | head -1)
if [ -z "$line" ]; then
    echo "NOT FOUND: $dem" >&2
    exit 1
fi
addr=$(echo "$line" | awk '{print $1}')
size=$(echo "$line" | awk '{print $2}')
echo "# $dem  addr=0x$addr size=0x$size" >&2
stop=$(printf '0x%x' $((16#$addr + 16#$size)))
objdump -d --start-address="0x$addr" --stop-address="$stop" "$ORIG"
