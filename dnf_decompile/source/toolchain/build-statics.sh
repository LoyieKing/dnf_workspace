#!/bin/sh
# ============================================================
# df_statics_r 可复现构建脚本（与 coserver 同框架，应用层 source/statics）
# 编译：/tmp/c6root/usr/bin/g++（GCC 4.4.7 头文件）-m32 -O0 -std=gnu++0x
# 链接：4.4.4 libstdc++ + 4.4.4/4.1.1 libgcc 前置链接
# ============================================================
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
OUT_DIR="$ROOT/build-statics"
STATICS="$ROOT/statics"
COMMON="$ROOT/DNFServer/ServerCommon"
PACKET="$ROOT/shared/packet"

CXX="/tmp/c6root/usr/bin/g++"
export LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib
FLAGS="-m32 -O0 -std=gnu++0x -DDF_NO_CODEPAGE -fno-enforce-eh-specs -nostdinc \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include \
  -I$COMMON -I$STATICS -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include"

mkdir -p "$OUT_DIR"

compile() {
    local src="$1"
    local base
    base=$(basename "$src" .cpp)
    if [ ! -f "$OUT_DIR/$base.o" ] || [ "$src" -nt "$OUT_DIR/$base.o" ]; then
        echo "CC  $base.cpp"
        "$CXX" $FLAGS -c "$src" -o "$OUT_DIR/$base.o"
    else
        echo "SKIP $base.cpp"
    fi
}

# 共享框架（ServerCommon 日志/互斥/工具）
for f in DNFFileLog.cpp CFileLogWriterBase.cpp DNFFunctionLib.cpp Thread.cpp; do
    if [ "$f" = "CFileLogWriterBase.cpp" ]; then
        if [ ! -f "$OUT_DIR/CFileLogWriterBase.o" ] || \
           [ "$COMMON/$f" -nt "$OUT_DIR/CFileLogWriterBase.o" ]; then
            echo "CC  CFileLogWriterBase.cpp (-fno-exceptions)"
            "$CXX" $FLAGS -fno-exceptions -c "$COMMON/$f" -o "$OUT_DIR/CFileLogWriterBase.o"
        else
            echo "SKIP CFileLogWriterBase.cpp"
        fi
    else
        compile "$COMMON/$f"
    fi
done

# 共享包结构
compile "$PACKET/src/PacketHeader.cpp"

# 应用层（还原中）
for f in "$STATICS"/*.cpp; do
    [ -f "$f" ] && compile "$f"
done

OBJS=$(ls "$OUT_DIR"/*.o 2>/dev/null | grep -v stub_main || true)
if [ -n "$OBJS" ]; then
    if ! nm $OBJS 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        OBJS="$OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -o "$OUT_DIR/df_statics_r" $OBJS \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
        /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a \
        -lpthread -ldl -lm
    echo "OK -> $OUT_DIR/df_statics_r"
fi
