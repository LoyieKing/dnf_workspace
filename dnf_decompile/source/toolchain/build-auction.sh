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
# 2026-08-09 实验（已回滚）: -march=i586 -maccumulate-outgoing-args 可复现 ORIG 的
#   FP 比较形态（fucompp+fnstsw），但整体回归严重（strict 4116→3667、DIFF 143→648），
#   ORIG 并非全局 i586；维持 -march=i686（驱动默认），FP 形态差异逐函数处理。
# ============================================================
set -e

# 并行编译：默认按核数分批，逐 PID 检查退出码（不改变编译输出与链接顺序）。
JOBS=${JOBS:-$(nproc 2>/dev/null || echo 4)}
_job_pids=""
_job_count=0
run_job() {
    "$@" &
    _job_pids="$_job_pids $!"
    _job_count=$((_job_count + 1))
    if [ "$_job_count" -ge "$JOBS" ]; then
        wait_jobs
    fi
}
wait_jobs() {
    for p in $_job_pids; do
        wait "$p" || exit 1
    done
    _job_pids=""
    _job_count=0
}

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
  -isystem $ROOT/Library3rd/MySQL/include \
  -I$BASIC -I$COMMON -I$AUCTIONCOMMON -I$SERVERCOMMON -I$DNFSSHARED -I$CORE \
  -I$AUCTION/GameData -I$AUCTION/GameData/auction -I$AUCTION/GameData/auction/dictionary \
  -I$AUCTION/auction_source -I$ROOT/shared -I$ROOT/shared/common/include -I$ROOT/shared/packet/include"

# 按 TU 的指令集覆盖（2026-08-09 实测：per-TU i586 仍回归 4116→4023，弃用，
# 改函数级 __attribute__((target("arch=i586")))，见 makeSuccessfulBid 等）。
I586_TUS=""
ARCH_OVERRIDE="-march=i586 -maccumulate-outgoing-args"

# TinyXML 2.6.2 原始编译形态：独立对象，GCC 4.4.6-3 + 4.4.6 libstdc++ 头 + -O3 + gnu++98 + TIXML_USE_STL。
# 与工程其它 -O0/gnu++0x TU 不同，必须用专属标志才能逐指令复现原始 tinyxml 机器码
# （校验：149/150 归一化 identical，见 docs/tinyxml_boost_version_verify.md）。
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

mkdir -p "$OUT_DIR"

SOURCES="$*"
if [ -z "$SOURCES" ]; then
    SOURCES="ThreadLock Thread Token System SocketSystem Exception"
fi

OBJS=""
for f in $SOURCES; do
    case "$f" in
        *.cpp) base=$(basename "$f" .cpp); srcdir=$(dirname "$f") ;;
        *) base="$f"
           srcdir="$BASIC"
           for d in "$COMMON" "$SERVERCOMMON" "$DNFSSHARED" "$CORE" "$AUCTIONGD" "$AUCTIONAUCTION" "$AUCTIONDICT" "$AUCTIONSRC"; do
               if [ ! -f "$srcdir/$base.cpp" ] && [ -f "$d/$base.cpp" ]; then
                   srcdir="$d"
               fi
           done ;;
    esac
    if [ -f "$srcdir/$base.cpp" ]; then
        if [ ! -f "$OUT_DIR/$base.o" ] || [ "$srcdir/$base.cpp" -nt "$OUT_DIR/$base.o" ] || [ "$srcdir/$base.h" -nt "$OUT_DIR/$base.o" ]; then
            # Original CFileLogWriterBase.cpp is compiled with -fno-exceptions
            # (map dtor has no EH landing pads / no _Unwind_Resume).
            if [ "$base" = "tinyxml" ] || [ "$base" = "tinyxmlerror" ] || [ "$base" = "tinyxmlparser" ]; then
                echo "CC  $base.cpp (-O3 gnu++98 4.4.6hdr, TinyXML 2.6.2)"
                run_job "$CXX" $TINYXML_FLAGS -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
            elif [ "$base" = "CFileLogWriterBase" ]; then
                echo "CC  $base.cpp (-fno-exceptions)"
                run_job "$CXX" $COMMON_FLAGS -fno-exceptions -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
            elif [ "$base" = "HandlerFor_GA_" ] || [ "$base" = "HandlerFor_GP_JPN" ]; then
                echo "CC  $base.cpp (-DSTATISTICS_STDATA_57)"
                run_job "$CXX" $COMMON_FLAGS -DSTATISTICS_STDATA_57 -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
            else
                if echo " $I586_TUS " | grep -q " $base "; then
                    echo "CC  $base.cpp (-march=i586)"
                    run_job "$CXX" $COMMON_FLAGS $ARCH_OVERRIDE -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
                else
                echo "CC  $base.cpp"
                run_job "$CXX" $COMMON_FLAGS -c "$srcdir/$base.cpp" -o "$OUT_DIR/$base.o"
                fi
            fi
        else
            echo "SKIP $base.cpp (up to date)"
        fi
        OBJS="$OBJS $OUT_DIR/$base.o"
    else
        echo "skip missing $srcdir/$base.cpp"
    fi
done

# ServerCommon/Thread.cpp collides with basic_source/Thread.cpp (both Thread.o).
# Compile it as ServerCommon_Thread.o for CMutex / CGuard (used by DNFFileLog).
if [ -f "$SERVERCOMMON/Thread.cpp" ]; then
    if [ ! -f "$OUT_DIR/ServerCommon_Thread.o" ] || \
       [ "$SERVERCOMMON/Thread.cpp" -nt "$OUT_DIR/ServerCommon_Thread.o" ] || \
       [ "$SERVERCOMMON/Thread.h" -nt "$OUT_DIR/ServerCommon_Thread.o" ]; then
        echo "CC  ServerCommon/Thread.cpp -> ServerCommon_Thread.o"
        run_job "$CXX" $COMMON_FLAGS -c "$SERVERCOMMON/Thread.cpp" -o "$OUT_DIR/ServerCommon_Thread.o"
    fi
fi

wait_jobs

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
    if ! nm $OBJS 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $COMMON_FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        OBJS="$OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -static-libgcc -o "$OUT_DIR/df_auction_r" $OBJS \
        -lpthread -ldl /tmp/zlib32/lib/libz.a -lm
    echo "OK -> $OUT_DIR/df_auction_r"
fi
