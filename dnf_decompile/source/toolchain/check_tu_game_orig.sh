#!/bin/bash
# check_tu_game_orig.sh — 单 TU 编译（Game/ 游戏代码类）+ 与 df_game_r ORIG 对比。
# 用法: check_tu_game_orig.sh <源文件> [附加 g++ 参数...]
# 对比: compare_tu_game_orig.py（AE 口径 + @plt/nop 归一化，df_game_r 直接参照）
# 加密/哈希类（用户规则 2026-08-16）只要求算法正确，不要求 identical。
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
    -I$ROOT/source/DNFServer/GameServer/Game \
    -I$ROOT/source/shared/packet/include \
    -I$ROOT/source/shared/common/include \
    -I$ROOT/source/Library3rd/MySQL/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/taocrypt/include \
    -I$ROOT/source/Library3rd/MySQL/extlib/yassl/taocrypt/mySTL \
    -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
    -c "$SRC" -o "$OUT" 2>&1 | head -20
RC=${PIPESTATUS[0]}
if [ $RC -ne 0 ]; then echo "COMPILE FAILED ($BASE)"; exit $RC; fi
echo "COMPILE OK -> $OUT"
python3 "$ROOT/source/toolchain/compare_tu_game_orig.py" "$OUT" "$BASE"
