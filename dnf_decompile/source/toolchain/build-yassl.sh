#!/bin/sh
# ============================================================
# df_game_r 链接所需的 yaSSL/TaoCrypt 静态库构建
# 产物：build/manager/yassl/libyassl.a
# 编译参数与 manager CMakeLists 中 in-executable yaSSL 完全相同：
#   -O3 -fPIC -DNDEBUG -std=gnu++98 -DHAVE_CONFIG_H -DYASSL_PREFIX
#   -D_LIB -DHAVE_YASSL -DYASSL_PURE_C -DHAVE_OPENSSL
#   include：yassl/include + yassl/taocrypt/include + yassl/taocrypt/mySTL
# 源码集：YASSL_TAOCRYPT(21) + YASSL_CORE(12)，与 manager CMakeLists 一致
# ============================================================
set -e

ROOT=$(cd "$(dirname "$0")/.." && pwd)
MYSQL="$ROOT/Library3rd/MySQL"
Y=${MYSQL}/extlib/yassl
OUT="$ROOT/../build/manager/yassl"
C6ROOT="$ROOT/../toolchains/c6root"
CXX="$C6ROOT/usr/bin/g++"

export GCC_EXEC_PREFIX="$C6ROOT/usr/libexec/gcc/"
export LD_LIBRARY_PATH="$C6ROOT/usr/lib64:$C6ROOT/usr/lib"

mkdir -p "$OUT/obj"

FLAGS="-m32 -O3 -fPIC -DNDEBUG -std=gnu++98 -DHAVE_CONFIG_H -DYASSL_PREFIX -D_LIB \
  -DHAVE_YASSL -DYASSL_PURE_C -DHAVE_OPENSSL \
  -nostdinc \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem $C6ROOT/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem $C6ROOT/usr/include \
  -I${Y}/include -I${Y}/taocrypt/include -I${Y}/taocrypt/mySTL"

TAOCRYPT="aes aestables algebra arc4 asn coding des dh dsa file hash integer md2 md4 md5 misc random ripemd rsa sha block_instnt"
CORE="buffer cert_wrapper crypto_wrapper handshake lock log socket_wrapper ssl timer yassl_error yassl_imp yassl_int"

objs=""
for f in $TAOCRYPT; do
    src="$Y/taocrypt/src/$f.cpp"
    obj="$OUT/obj/taocrypt_$f.o"
    [ -f "$obj" ] || $CXX $FLAGS -c "$src" -o "$obj"
    objs="$objs $obj"
done
for f in $CORE; do
    src="$Y/src/$f.cpp"
    obj="$OUT/obj/yassl_$f.o"
    [ -f "$obj" ] || $CXX $FLAGS -c "$src" -o "$obj"
    objs="$objs $obj"
done

rm -f "$OUT/libyassl.a"
ar rcs "$OUT/libyassl.a" $objs
echo "AR OK -> $OUT/libyassl.a"