#!/bin/sh
# Rijndael（通用 AES 算法）语义验证：FIPS-197 标准向量 + ECB/CBC 往返。
# 策略（2026-08-09）：通用算法只验证输入输出正确性，不追机器码逐条一致。
# 用法: sh source/toolchain/verify_rijndael.sh
set -e
CXX=/tmp/c6-g++-446r
SRC="$(cd "$(dirname "$0")/../ChannelOld/DNFChannelServer" && pwd)"
TMP=$(mktemp -d)
trap 'rm -rf "$TMP"' EXIT
F="-m32 -O0 -D_GNU_SOURCE -std=gnu++98 -pthread -fno-enforce-eh-specs -nostdinc -I$SRC"
F="$F -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include"
F="$F -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include-fixed"
F="$F -isystem /tmp/c6root/usr/include/c++/4.4.7"
F="$F -isystem /tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux"
F="$F -isystem /tmp/c6root/usr/include/c++/4.4.7/backward"
F="$F -isystem /tmp/c6root/usr/include"
$CXX $F -c "$SRC/Rijndael.cpp" -o "$TMP/Rijndael.o"
$CXX $F -c "$SRC/Method.cpp" -o "$TMP/Method.o"
$CXX $F -c "$SRC/SHA.cpp" -o "$TMP/SHA.o"
$CXX $F -c "$(dirname "$0")/rijndael_fips_test.cpp" -o "$TMP/test.o"
g++ -m32 -o "$TMP/test" "$TMP/test.o" "$TMP/Rijndael.o" "$TMP/Method.o" "$TMP/SHA.o" -no-pie
"$TMP/test"
