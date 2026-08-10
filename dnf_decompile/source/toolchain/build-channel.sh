#!/bin/sh
# ============================================================
# df_channel_r 可复现构建脚本（32 位，GCC 4.4.6）
#
# 原始二进制: .../neople/channel/df_channel_r
#   ELF 32-bit x86 EXEC, 32 个 CU 全部 GNU C++ 4.4.6 (Red Hat 4.4.6-3)
#   NEEDED: libpthread/libdl/libstdc++.so.6/libz/libm/libc
#
# 编译:  c6root g++ 4.4.7 驱动 + cc1plus_446（精确匹配原始 4.4.6-3）
#         -m32 -O0 -D_GNU_SOURCE -std=gnu++98 + c6root 4.4.7 头文件
# 链接:  宿主机 g++ -m32 -no-pie（动态 libstdc++/libc）
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

SRC_DIR=$(cd "$(dirname "$0")/../ChannelOld/DNFChannelServer" && pwd)
OUT_DIR=$(cd "$(dirname "$0")/../.." && pwd)/build/channel
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
    # Full project TU list (must stay complete for linkable df_channel_r)
    SOURCES="stdafx Exception System Thread ThreadLock Token SocketSystem Method SHA Rijndael Service LinuxService Globals ScriptData ScriptRawData Script Socket TCPUser TCPHandler UDPUser UDPHandler TCPAcceptThread TCPThread UDPThread CheckThread ChannelService DNFChannelServer PIDHelper SignalHandler UniqueIndex CommandLineParser Reactor"
fi

OBJS=""
for f in $SOURCES; do
    case "$f" in
        *.cpp) base=$(basename "$f" .cpp) ;;
        *) base="$f" ;;
    esac
    if [ ! -f "$SRC_DIR/$base.cpp" ]; then
        echo "skip missing $base.cpp"
        continue
    fi
    echo "CC  $base.cpp"
    run_job "$CXX" $COMMON_FLAGS -c "$SRC_DIR/$base.cpp" -o "$OUT_DIR/$base.o"
    OBJS="$OBJS $OUT_DIR/$base.o"
done

wait_jobs

if [ -n "$OBJS" ]; then
    echo "LD  df_channel_r"
    g++ -m32 -no-pie -static-libgcc -o "$OUT_DIR/df_channel_r" $OBJS -lpthread -ldl /tmp/zlib32/lib/libz.a
    echo "OK -> $OUT_DIR/df_channel_r"
fi
