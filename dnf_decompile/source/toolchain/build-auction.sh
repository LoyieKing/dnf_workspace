#!/bin/sh
# ============================================================
# df_auction_r 可复现构建脚本（32 位，GCC 4.4.6 原始编译器族）
#
# 原始二进制: .../neople/auction/df_auction_r
#   ELF 32-bit x86 EXEC, 66 个 CU 全部 GNU C++ 4.4.6 (Red Hat 4.4.6-3)
#   NEEDED: libpthread/libdl/libstdc++.so.6/libz/libm/libc
#
# 编译:  c6root g++ 4.4.7 驱动 + cc1plus_446（精确匹配原始 4.4.6-3）
#         -m32 -O0 -D_GNU_SOURCE -std=gnu++0x + c6root 4.4.7 头文件
# 链接:  宿主机 g++ -m32 -no-pie（动态 libstdc++/libc）
# ============================================================
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
OUT_DIR="$ROOT/build-auction"
C6ROOT=${C6ROOT:-/tmp/c6root}
CXX=/tmp/c6-g++-446r

AUCTION="$ROOT/DNFServer/GameServer/ServerLab/Auction/AuctionServer"
BASIC="$ROOT/DNFServer/GameServer/ServerLab/ServerLib/basic_source"
COMMON="$ROOT/DNFServer/GameServer/ServerLab/ServerLib/common_source"
AUCTIONCOMMON="$ROOT/DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon"
SERVERCOMMON="$ROOT/DNFServer/ServerCommon"
DNFSSHARED="$ROOT/DNFShared/GameScript"
CORE="$ROOT/Library/Include/Core"

COMMON_FLAGS="-m32 -O0 -D_GNU_SOURCE -std=gnu++0x -pthread -fno-enforce-eh-specs -nostdinc \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include-fixed \
  -isystem $C6ROOT/usr/include/c++/4.4.7 \
  -isystem $C6ROOT/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem $C6ROOT/usr/include/c++/4.4.7/backward \
  -isystem $C6ROOT/usr/include \
  -isystem ${BOOST_INC:-/tmp/boost_inc/include} \
  -I$BASIC -I$COMMON -I$AUCTIONCOMMON -I$SERVERCOMMON -I$DNFSSHARED -I$CORE \
  -I$AUCTION/GameData -I$AUCTION/GameData/auction -I$AUCTION/GameData/auction/dictionary \
  -I$AUCTION/auction_source -I$ROOT/shared -I$ROOT/shared/common/include -I$ROOT/shared/packet/include"

mkdir -p "$OUT_DIR"

SOURCES="$*"
if [ -z "$SOURCES" ]; then
    SOURCES="ThreadLock Thread Token System SocketSystem Exception"
fi

OBJS=""
for f in $SOURCES; do
    case "$f" in
        *.cpp) base=$(basename "$f" .cpp); srcdir=$(dirname "$f") ;;
        *) base="$f"; srcdir="$BASIC" ;;
    esac
    if [ -f "$srcdir/$base.cpp" ]; then
        if [ ! -f "$OUT_DIR/$base.o" ] || [ "$srcdir/$base.cpp" -nt "$OUT_DIR/$base.o" ] || [ "$srcdir/$base.h" -nt "$OUT_DIR/$base.o" ]; then
            echo "CC  $base.cpp"
            "$CXX" $COMMON_FLAGS -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
        else
            echo "SKIP $base.cpp (up to date)"
        fi
        OBJS="$OBJS $OUT_DIR/$base.o"
    else
        echo "skip missing $srcdir/$base.cpp"
    fi
done

# link all compiled objects in the output dir (incremental)
ALL_OBJS=$(ls "$OUT_DIR"/*.o 2>/dev/null | grep -v stub_main || true)
OBJS=""
for o in $ALL_OBJS; do
    case " $OBJS " in
        *" $o "*) ;;
        *) OBJS="$OBJS $o" ;;
    esac
done

if [ -n "$OBJS" ]; then
    echo "LD  df_auction_r"
    if ! nm "$OBJS" 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $COMMON_FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        OBJS="$OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -static-libgcc -o "$OUT_DIR/df_auction_r" $OBJS \
        -lpthread -ldl /tmp/zlib32/lib/libz.a -lm
    echo "OK -> $OUT_DIR/df_auction_r"
fi
