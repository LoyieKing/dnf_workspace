#!/bin/bash
# check_tu_game.sh — 单 TU 编译 + 与 point ORIG 逐函数 identical 对比（df_game_r nsl 部分）
# 用法: check_tu_game.sh <源文件> [g++ 附加参数...]
# 说明：df_game_r 的 nsl 函数符号被 strip，以 point ORIG（同库同编译器）为权威参照；
#       三方验证（df_game_r/point/ours PACKET_HEADER）已确认参照有效。
set -uo pipefail

SRC="$1"; shift
BASE=$(basename "$SRC" .cpp)
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SL=$ROOT/source/DNFServer/GameServer/ServerLab/ServerLib
AU=$ROOT/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer
OUT=/tmp/tu_${BASE}.o

export GCC_EXEC_PREFIX=$ROOT/toolchains/c6root/usr/libexec/gcc/
export LD_LIBRARY_PATH=$ROOT/toolchains/c6root/usr/lib64:$ROOT/toolchains/c6root/usr/lib

$ROOT/toolchains/c6root/usr/bin/g++ "$@" -m32 -O0 -std=gnu++0x -fno-enforce-eh-specs \
    -nostdinc \
    -isystem $ROOT/toolchains/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
    -isystem $ROOT/toolchains/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
    -isystem $ROOT/toolchains/c6root/usr/include/c++/4.4.7 \
    -isystem $ROOT/toolchains/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
    -isystem $ROOT/toolchains/c6root/usr/include \
    -isystem $ROOT/source/Library3rd/Boost/Include \
    -I$SL/basic_header -I$SL/common_header \
    -I$AU/GameData -I$AU/GameData/auction -I$AU/auction_header \
    -I$ROOT/source/DNFServer/ServerCommon \
    -I$ROOT/source/Library3rd/MySQL/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/taocrypt/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/taocrypt/mySTL \
    -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
    -c "$SRC" -o "$OUT" 2>&1 | head -20
RC=${PIPESTATUS[0]}
if [ $RC -ne 0 ]; then echo "COMPILE FAILED ($BASE)"; exit $RC; fi
echo "COMPILE OK -> $OUT"

# 与 point ORIG 对比该 TU 的 nsl 函数
python3 "$ROOT/source/toolchain/compare_tu_point.py" "$OUT" "$BASE"
