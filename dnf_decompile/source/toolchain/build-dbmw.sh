#!/bin/sh
# ============================================================
# df_dbmw_r 可复现构建脚本（无 DWARF，Ghidra 逆向）
# 编译：/tmp/c6root/usr/bin/g++（GCC 4.4.7 头文件）-m32 -O0 -std=gnu++0x
# ============================================================
set -e

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
OUT_DIR="$ROOT/../build/dbmw"
DBMW="$ROOT/DNFServer/GameServer/DBMW"
COMMON="$ROOT/DNFServer/ServerCommon"
PACKET="$ROOT/shared/packet"
YASSL="$ROOT/Library3rd/MySQL/extlib/yassl"
MYSQL="$ROOT/Library3rd/MySQL"

CXX="/tmp/c6root/usr/bin/g++"
export LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib
FLAGS="-m32 -O0 -std=gnu++0x -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include \
  -I$COMMON -I$DBMW -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include \
  -I$MYSQL/include -I$MYSQL/mysys -I$MYSQL/strings"

# yaSSL / TaoCrypt（mysql-connector-c-6.0.2 extlib，LuaDist 镜像）：
# 原版特征：-O3 + PIC（get_pc_thunk.bx；AES::SetKey 全展开证明 -O3）、C++98、mySTL、TAO_ASM（i386 自动）、
# YASSL_PREFIX（yaSSL_* C API 87 个）、YASSL_PURE_C（-DHAVE_YASSL -DYASSL_PURE_C
# -DHAVE_OPENSSL，对应 operator new/delete(new_t) 符号与 NEW_TC 分配路径）。
# NDEBUG：原版仅 __cxa_pure_virtual / virtual_base / SimultaneousMultiply /
# mySTL vector 5 处 __PRETTY_FUNCTION__，LuaDist 额外插桩的 assert 与原版不符，
# 故以 NDEBUG 关闭整库断言。
YASSL_FLAGS="-m32 -O3 -fPIC -DNDEBUG -std=gnu++98 -fno-enforce-eh-specs \
  -DHAVE_CONFIG_H -DYASSL_PREFIX -D_LIB \
  -DHAVE_YASSL -DYASSL_PURE_C -DHAVE_OPENSSL \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include/c++/4.4.7 \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include/c++/4.4.7/backward \
  -isystem /tmp/c6root/usr/include \
  -I$YASSL/include -I$YASSL/taocrypt/include -I$YASSL/taocrypt/mySTL"

TINYXML_CXX=${TINYXML_CXX:-/tmp/c6-g++-444r}
TINYXML_FLAGS="-m32 -O3 -std=gnu++98 -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6 \
  -isystem ${C6LIBSTDCXX446:-/tmp/lsd44/v4.4.6}/usr/include/c++/4.4.6/x86_64-redhat-linux \
  -isystem /tmp/c6root/usr/include \
  -I$COMMON -I$DBMW -I$PACKET/include \
  -I$ROOT/shared -I$ROOT/shared/common/include"

mkdir -p "$OUT_DIR"
mkdir -p "$OUT_DIR/yassl"

# MySQL Connector/C 6.0.2 客户端静态库（mysys/strings/vio/zlib/dbug/libmysql）
"$(dirname "$0")/build-mysqlclient.sh"

compile() {
    local src="$1"
    local base
    base=$(basename "$src" .cpp)
    local need=0
    if [ ! -f "$OUT_DIR/$base.o" ]; then
        need=1
    elif [ "$src" -nt "$OUT_DIR/$base.o" ]; then
        need=1
    else
        for h in "$DBMW"/*.h "$COMMON"/*.h; do
            [ -f "$h" ] || continue
            if [ "$h" -nt "$OUT_DIR/$base.o" ]; then
                need=1
                break
            fi
        done
    fi
    if [ "$need" -eq 1 ]; then
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

if ls "$DBMW"/*.cpp >/dev/null 2>&1; then
    for f in "$DBMW"/*.cpp; do
        [ -f "$f" ] && compile "$f"
    done
fi

# yaSSL / TaoCrypt 源文件（与 mysql-connector-c-6.0.2 CMakeLists 的源清单一致）
TAOCRYPT_SRC="aes.cpp aestables.cpp algebra.cpp arc4.cpp asn.cpp coding.cpp \
  des.cpp dh.cpp dsa.cpp file.cpp hash.cpp integer.cpp md2.cpp md4.cpp md5.cpp \
  misc.cpp random.cpp ripemd.cpp rsa.cpp sha.cpp block_instnt.cpp"
YASSL_SRC="buffer.cpp cert_wrapper.cpp crypto_wrapper.cpp handshake.cpp \
  lock.cpp log.cpp socket_wrapper.cpp ssl.cpp timer.cpp yassl_error.cpp \
  yassl_imp.cpp yassl_int.cpp"

compile_yassl() {
    local src="$1"
    local base
    base=$(basename "$src" .cpp)
    local obj="$OUT_DIR/yassl/$base.o"
    local need=0
    if [ ! -f "$obj" ]; then
        need=1
    elif [ "$src" -nt "$obj" ]; then
        need=1
    else
        for h in "$YASSL"/include/*.hpp "$YASSL"/taocrypt/include/*.hpp "$YASSL"/taocrypt/mySTL/*.hpp; do
            [ -f "$h" ] || continue
            if [ "$h" -nt "$obj" ]; then
                need=1
                break
            fi
        done
    fi
    if [ "$need" -eq 1 ]; then
        echo "CC  yassl/$base.cpp"
        run_job "$CXX" $YASSL_FLAGS -c "$src" -o "$obj"
    else
        echo "SKIP yassl/$base.cpp"
    fi
}

for f in $TAOCRYPT_SRC; do
    compile_yassl "$YASSL/taocrypt/src/$f"
done
for f in $YASSL_SRC; do
    compile_yassl "$YASSL/src/$f"
done

wait_jobs

OBJS=$(ls "$OUT_DIR"/*.o "$OUT_DIR"/yassl/*.o 2>/dev/null | grep -v stub_main || true)
if [ -n "$OBJS" ]; then
    g++ -m32 -no-pie -o "$OUT_DIR/df_dbmw_r" $OBJS \
        "$ROOT/../build/manager/mysqlclient/trees.o" \
        "$ROOT/../build/manager/mysqlclient/libmysqlclient.a" \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libstdc++.a \
        /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/32/libgcc_eh.a \
        /tmp/c5r52i386/usr/lib/gcc/i386-redhat-linux/4.1.1/libstdc++.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc.a \
        /tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.1/32/libgcc_eh.a \
        -lpthread -ldl -lm
    echo "LINK OK -> $OUT_DIR/df_dbmw_r"
fi
