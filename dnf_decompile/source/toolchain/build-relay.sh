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

COMMON_FLAGS="-m32 -O0 -D_GNU_SOURCE -fno-enforce-eh-specs -fno-builtin-memset -fno-builtin-strlen -fno-builtin-strcmp -nostdinc \
  -isystem $C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include \
  -isystem $C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed \
  -isystem $C5ROOT/usr/include/c++/4.1.2 \
  -isystem $C5ROOT/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem $C5ROOT/usr/include/c++/4.1.2/backward \
  -isystem $C5ROOT/usr/include \
  -I$RELAY"

mkdir -p "$OUT_DIR"

# UserPool TU：原版由 GCC 4.4.6-3 编译（queue(deque&&) rvalue 构造 + 4.4 头文件）
C6FLAGS="-m32 -O0 -std=gnu++0x -DRELAY_USERPOOL_C6 -fno-enforce-eh-specs -nostdinc \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include -I$RELAY"
C6CXX="env LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib /tmp/c6root/usr/bin/g++ -B /tmp/cc1plus446bin/"

for f in RelayUserPool RelayApp; do
    if [ ! -f "$OUT_DIR/$f.o" ] || [ "$RELAY/$f.cpp" -nt "$OUT_DIR/$f.o" ]; then
        echo "CC6 $f.cpp (4.4.6-3 + c++0x)"
        $C6CXX $C6FLAGS -c "$RELAY/$f.cpp" -o "$OUT_DIR/$f.o"
    fi
done

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

ALL_OBJS="$OUT_DIR/RelayUserPool.o $OUT_DIR/RelayApp.o $(ls "$OUT_DIR"/*.o 2>/dev/null | grep -vE 'stub_main|RelayUserPool|RelayApp' || true)"
if [ -n "$ALL_OBJS" ]; then
    echo "LD  df_relay_r"
    if ! nm $ALL_OBJS 2>/dev/null | grep -q ' T main$'; then
        echo 'int main(){return 0;}' > "$OUT_DIR/stub_main.cpp"
        "$CXX" $COMMON_FLAGS -c "$OUT_DIR/stub_main.cpp" -o "$OUT_DIR/stub_main.o"
        ALL_OBJS="$ALL_OBJS $OUT_DIR/stub_main.o"
    fi
    g++ -m32 -no-pie -o "$OUT_DIR/df_relay_r" $ALL_OBJS \
        "/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a" \
        "/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a" \
        "/tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a" \
        "$C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a" \
        "$C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a" \
        -lpthread -ldl -lm
    echo "OK -> $OUT_DIR/df_relay_r"
fi
