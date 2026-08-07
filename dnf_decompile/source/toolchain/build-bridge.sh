#!/bin/sh
# ============================================================
# df_bridge_r 可复现构建脚本（32 位，GCC 4.4.6，与 channel 同一工具链）
#
# 原始二进制: .../neople/bridge/df_bridge_r
#   ELF 32-bit x86 EXEC, 31 个 CU 全部 GNU C++ 4.4.6 (Red Hat 4.4.6-3)
#   NEEDED: libpthread/libdl/libstdc++.so.6/libz/libm/libc + mysql client
#
# 编译:  c6root g++ 4.4.7 驱动 + cc1plus_446（精确匹配原始 4.4.6-3）
#         -m32 -O0 -D_GNU_SOURCE -std=gnu++98 + c6root 4.4.7 头文件
# 链接:  宿主机 g++ -m32 -no-pie（动态 libstdc++/libc + zlib + mysqlclient）
# ============================================================
set -e

SRC_DIR=$(cd "$(dirname "$0")/../ChannelOld/DNFChannelBridge" && pwd)
OUT_DIR="$(cd "$(dirname "$0")/.." && pwd)/build-bridge"
C6ROOT=${C6ROOT:-/tmp/c6root}
CXX=/tmp/c6-g++-446r

COMMON_FLAGS="-m32 -O0 -D_GNU_SOURCE -std=gnu++98 -pthread -fno-enforce-eh-specs -nostdinc \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include-fixed \
  -isystem $C6ROOT/usr/include/c++/4.4.7 \
  -isystem $C6ROOT/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem $C6ROOT/usr/include/c++/4.4.7/backward \
  -isystem $C6ROOT/usr/include"

mkdir -p "$OUT_DIR"

SOURCES="$*"
if [ -z "$SOURCES" ]; then
    SOURCES="stdafx Exception System Thread ThreadLock Token UDPHandler Socket SocketSystem Service LinuxService Globals ScriptData ScriptRawData Script ScriptThread TCPAcceptThread TCPHandler TCPThread TCPUser UDPThread DBMgr MysqlClient DNFChannelBridge ChannelService CheckThread DNFServerCommon/DNFFunctionLib"
fi

OBJS=""
for f in $SOURCES; do
    case "$f" in
        *.cpp) base=$(basename "$f" .cpp); subdir=$(dirname "$f") ;;
        *) base="$f"; subdir="" ;;
    esac
    if [ ! -f "$SRC_DIR/$f.cpp" ]; then
        echo "skip missing $f.cpp"
        continue
    fi
    echo "CC  $f.cpp"
    if [ -n "$subdir" ] && [ "$subdir" != "." ]; then
        mkdir -p "$OUT_DIR/$subdir"
        "$CXX" $COMMON_FLAGS -c "$SRC_DIR/$f.cpp" -o "$OUT_DIR/$subdir/$base.o"
        OBJS="$OBJS $OUT_DIR/$subdir/$base.o"
    else
        "$CXX" $COMMON_FLAGS -c "$SRC_DIR/$f.cpp" -o "$OUT_DIR/$base.o"
        OBJS="$OBJS $OUT_DIR/$base.o"
    fi
done

if [ -n "$OBJS" ]; then
    echo "LD  df_bridge_r"
    g++ -m32 -no-pie -static-libgcc -o "$OUT_DIR/df_bridge_r" $OBJS \
        -lpthread -ldl /tmp/zlib32/lib/libz.a -lm
    echo "OK -> $OUT_DIR/df_bridge_r"
fi
