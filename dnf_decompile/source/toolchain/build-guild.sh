#!/bin/sh
# ============================================================
# df_guild_r 可复现构建脚本（无 DWARF，Ghidra 逆向）
# 编译：/tmp/c6root/usr/bin/g++（GCC 4.4.7 头文件）-m32 -O0 -std=gnu++0x
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
OUT_DIR="$ROOT/../build/guild"
GUILD="$ROOT/guild"
COMMON="$ROOT/DNFServer/ServerCommon"
PACKET="$ROOT/shared/packet"

CXX="/tmp/c6root/usr/bin/g++"
export LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib
FLAGS="-m32 -O0 -std=gnu++0x -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include \
  -I$COMMON -I$GUILD -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include"

# TinyXML 2.6.2 原始编译形态（独立对象，-O3 + gnu++98 + 4.4.6 libstdc++ 头 + TIXML_USE_STL）。
# guild 原始 tinyxml 由 GCC 4.4.4 编译（校验 145/148，见 docs/tinyxml_boost_version_verify.md）。
TINYXML_CXX=${TINYXML_CXX:-/tmp/c6-g++-444r}
TINYXML_FLAGS="-m32 -O3 -std=gnu++98 -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6 \
  -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6/x86_64-redhat-linux \
  -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6/backward \
  -isystem /tmp/c6root/usr/include \
  -I$COMMON -I$GUILD -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include"

mkdir -p "$OUT_DIR"

compile() {
    local src="$1"
    local base
    base=$(basename "$src" .cpp)
    if [ ! -f "$OUT_DIR/$base.o" ] || [ "$src" -nt "$OUT_DIR/$base.o" ]; then
        echo "CC  $base.cpp"
        run_job "$CXX" $FLAGS -c "$src" -o "$OUT_DIR/$base.o"
    else
        echo "SKIP $base.cpp"
    fi
}

for f in DNFFileLog.cpp CFileLogWriterBase.cpp DNFFunctionLib.cpp Thread.cpp tinyxml.cpp tinyxmlerror.cpp tinyxmlparser.cpp; do
    if [ "$f" = "CFileLogWriterBase.cpp" ]; then
        if [ ! -f "$OUT_DIR/CFileLogWriterBase.o" ] || \
           [ "$COMMON/$f" -nt "$OUT_DIR/CFileLogWriterBase.o" ]; then
            echo "CC  CFileLogWriterBase.cpp (-fno-exceptions)"
            run_job "$CXX" $FLAGS -fno-exceptions -c "$COMMON/$f" -o "$OUT_DIR/CFileLogWriterBase.o"
        else
            echo "SKIP CFileLogWriterBase.cpp"
        fi
    elif [ "$f" = "tinyxml.cpp" ] || [ "$f" = "tinyxmlerror.cpp" ] || [ "$f" = "tinyxmlparser.cpp" ]; then
        if [ ! -f "$OUT_DIR/$(basename "$f" .cpp).o" ] || \
           [ "$COMMON/$f" -nt "$OUT_DIR/$(basename "$f" .cpp).o" ]; then
            echo "CC  $f (-O3 gnu++98 4.4.6hdr, TinyXML 2.6.2)"
            run_job "$TINYXML_CXX" $TINYXML_FLAGS -c "$COMMON/$f" -o "$OUT_DIR/$(basename "$f" .cpp).o"
        else
            echo "SKIP $f"
        fi
    else
        compile "$COMMON/$f"
    fi
done

compile "$PACKET/src/PacketHeader.cpp"

for f in "$GUILD"/*.cpp; do
    [ -f "$f" ] && compile "$f"
done

wait_jobs

OBJS=$(ls "$OUT_DIR"/*.o 2>/dev/null | grep -v stub_main || true)
if [ -n "$OBJS" ]; then
    g++ -m32 -no-pie -o "$OUT_DIR/df_guild_r" $OBJS \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
        /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a \
        -lpthread -ldl -lm
    echo "OK -> $OUT_DIR/df_guild_r"
fi
