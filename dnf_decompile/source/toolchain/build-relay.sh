#!/bin/sh
# ============================================================
# df_relay_r 可复现构建脚本（GCC 4.1.2-55，原始 relay 用 4.1.2-52）
# 编译：/tmp/c5root/usr/bin/g++（Red Hat 4.1.2-55） -m32
# 链接：宿主机 g++ -m32 -no-pie
# ============================================================
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
OUT_DIR="$ROOT/build-relay"
RELAY="$ROOT/relay"
C5ROOT=/tmp/c5r52tool
CXX=/tmp/c5root/usr/bin/g++

COMMON_FLAGS="-m32 -O0 -D_GNU_SOURCE -fno-enforce-eh-specs -fno-builtin-memset -fno-builtin-strlen -nostdinc \
  -isystem $C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include \
  -isystem $C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed \
  -isystem $C5ROOT/usr/include/c++/4.1.2 \
  -isystem $C5ROOT/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem $C5ROOT/usr/include/c++/4.1.2/backward \
  -isystem $C5ROOT/usr/include \
  -I$RELAY"

mkdir -p "$OUT_DIR"

SOURCES="$*"
if [ -z "$SOURCES" ]; then
    SOURCES="RelayUtil"
fi

OBJS=""
for f in $SOURCES; do
    base=$(basename "$f" .cpp)
    if [ -f "$RELAY/$base.cpp" ]; then
        if [ ! -f "$OUT_DIR/$base.o" ] || [ "$RELAY/$base.cpp" -nt "$OUT_DIR/$base.o" ]; then
            echo "CC  $base.cpp"
            "$CXX" $COMMON_FLAGS -c "$RELAY/$base.cpp" -o "$OUT_DIR/$base.o"
        else
            echo "SKIP $base.cpp (up to date)"
        fi
        OBJS="$OBJS $OUT_DIR/$base.o"
    fi
done

ALL_OBJS=$(ls "$OUT_DIR"/*.o 2>/dev/null | grep -v stub_main || true)
if [ -n "$ALL_OBJS" ]; then
    echo "LD  df_relay_r"
    if ! nm $ALL_OBJS 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $COMMON_FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        ALL_OBJS="$ALL_OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -o "$OUT_DIR/df_relay_r" $ALL_OBJS -lpthread -ldl -lm
    echo "OK -> $OUT_DIR/df_relay_r"
fi
