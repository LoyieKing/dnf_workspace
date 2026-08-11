#!/bin/sh
# ============================================================
# df_coserver_r 可复现构建脚本
# 共享框架：source/Community + source/DNFServer/ServerCommon
# 应用层：source/DNFServer/GameServer/COServer（按 ORIG .o 文件拆分）
# 工具链（2026-08-11 对齐）：c6-g++-446r（4.4.6-3 精确后端，与 channel 同款）。
# 依据：ORIG .comment = GCC 4.1.2(×3)+4.4.6(×1)，布局与 4.4.x 头一致；
# 4.4.6-3 后端修复虚调用寄存器分配类差异（如 CApplication::Free 的 call *%edx）。
# __FILE__：切到源目录传 basename 编译，assert/日志路径与 ORIG 一致（仅文件名）。
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
OUT_DIR="$ROOT/../build/coserver"
COS="$ROOT/DNFServer/GameServer/COServer"
COMMUNITY="$ROOT/Community"
COMMON="$ROOT/DNFServer/ServerCommon"
PACKET="$ROOT/shared/packet"

# 4.4.7 编译器（与 df_community_r 验证方案一致）
CXX="/tmp/c6-g++-446r"
export LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib
FLAGS="-m32 -O0 -std=gnu++0x -DDF_NO_CODEPAGE -fno-enforce-eh-specs -nostdinc \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include \
  -I$COMMUNITY -I$COMMON -I$COS -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include"

mkdir -p "$OUT_DIR"

compile() {
    local src="$1"
    local base
    base=$(basename "$src" .cpp)
    if [ ! -f "$OUT_DIR/$base.o" ] || [ "$src" -nt "$OUT_DIR/$base.o" ]; then
        echo "CC  $base.cpp"
        run_job sh -c 'cd "$1" && shift && exec "$@"' _ "$(dirname "$src")" \
            "$CXX" $FLAGS -c "$base.cpp" -o "$OUT_DIR/$base.o"
    else
        echo "SKIP $base.cpp"
    fi
}

# 共享框架（coserver 原版仅含 ServerCommon 的日志/互斥/工具 TU，无 Community 类）
for f in DNFFileLog.cpp CFileLogWriterBase.cpp DNFFunctionLib.cpp Thread.cpp; do
    if [ "$f" = "CFileLogWriterBase.cpp" ]; then
        # 原始 CFileLogWriterBase.cpp 以 -fno-exceptions 编译
        if [ ! -f "$OUT_DIR/CFileLogWriterBase.o" ] || \
           [ "$COMMON/$f" -nt "$OUT_DIR/CFileLogWriterBase.o" ]; then
            echo "CC  CFileLogWriterBase.cpp (-fno-exceptions)"
            run_job sh -c 'cd "$1" && shift && exec "$@"' _ "$COMMON" \
                "$CXX" $FLAGS -fno-exceptions -c "CFileLogWriterBase.cpp" \
                -o "$OUT_DIR/CFileLogWriterBase.o"
        else
            echo "SKIP CFileLogWriterBase.cpp"
        fi
    else
        compile "$COMMON/$f"
    fi
done

# 共享包结构（PacketHeader）
compile "$PACKET/src/PacketHeader.cpp"

# 应用层（还原中）
if [ -d "$COS" ]; then
    for f in "$COS"/*.cpp; do
        [ -f "$f" ] && compile "$f"
    done
fi

wait_jobs

OBJS=$(ls "$OUT_DIR"/*.o 2>/dev/null | grep -v stub_main || true)
if [ -n "$OBJS" ]; then
    if ! nm $OBJS 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        OBJS="$OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -o "$OUT_DIR/df_coserver_r" $OBJS \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
        /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a \
        -lpthread -ldl -lm
    echo "OK -> $OUT_DIR/df_coserver_r"
fi
