#!/bin/sh
# Wave4 辅助：用 auction 同款工具链编译单个 TU 到指定 .o（不触碰 build-auction/）。
# 用法: w4_compile.sh <src.cpp> <out.o> [extra flags]
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
C6ROOT=${C6ROOT:-/tmp/c6root}
CXX=/tmp/c6-g++-446r

AUCTION="$ROOT/DNFServer/GameServer/ServerLab/Auction/AuctionServer"
BASIC="$ROOT/DNFServer/GameServer/ServerLab/ServerLib/basic_source"
COMMON="$ROOT/DNFServer/GameServer/ServerLab/ServerLib/common_source"
AUCTIONCOMMON="$ROOT/DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon"
SERVERCOMMON="$ROOT/DNFServer/ServerCommon"
DNFSSHARED="$ROOT/DNFShared/GameScript"
CORE="$ROOT/Library/Include/Core"
AUCTIONGD="$AUCTION/GameData"
AUCTIONAUCTION="$AUCTION/GameData/auction"
AUCTIONDICT="$AUCTION/GameData/auction/dictionary"
AUCTIONSRC="$AUCTION/auction_source"

COMMON_FLAGS="-m32 -O0 -D_GNU_SOURCE -std=gnu++0x -pthread -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include-fixed \
  -isystem $C6ROOT/usr/include/c++/4.4.7 \
  -isystem $C6ROOT/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem $C6ROOT/usr/include/c++/4.4.7/backward \
  -isystem $C6ROOT/usr/include \
  -isystem ${BOOST_INC:-$ROOT/Library3rd/Boost/Include} \
  -I$BASIC -I$COMMON -I$AUCTIONCOMMON -I$SERVERCOMMON -I$DNFSSHARED -I$CORE \
  -I$AUCTION/GameData -I$AUCTION/GameData/auction -I$AUCTION/GameData/auction/dictionary \
  -I$AUCTION/auction_source -I$ROOT/shared -I$ROOT/shared/common/include -I$ROOT/shared/packet/include"

SRC="$1"; OUT="$2"; shift 2
mkdir -p "$(dirname "$OUT")"
case "$(basename "$SRC")" in
    tinyxml.cpp|tinyxmlerror.cpp|tinyxmlparser.cpp)
        TINYXML_FLAGS="-m32 -O3 -std=gnu++98 -D_GNU_SOURCE -pthread -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
          -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include \
          -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include-fixed \
          -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6 \
          -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6/x86_64-redhat-linux \
          -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6/backward \
          -isystem $C6ROOT/usr/include \
          -isystem ${BOOST_INC:-$ROOT/Library3rd/Boost/Include} \
          -I$BASIC -I$COMMON -I$AUCTIONCOMMON -I$SERVERCOMMON -I$DNFSSHARED -I$CORE \
          -I$AUCTION/GameData -I$AUCTION/GameData/auction -I$AUCTION/GameData/auction/dictionary \
          -I$AUCTION/auction_source -I$ROOT/shared -I$ROOT/shared/common/include -I$ROOT/shared/packet/include"
        echo "CC  $(basename "$SRC") (-O3 gnu++98 4.4.6hdr, TinyXML 2.6.2)"
        "$CXX" $TINYXML_FLAGS "$@" -c "$SRC" -o "$OUT"
        ;;
    *)
        "$CXX" $COMMON_FLAGS "$@" -c "$SRC" -o "$OUT"
        ;;
esac
echo "OK $OUT"
