#!/bin/sh
# ============================================================
# df_stun_r 可复现构建脚本
#
# 原始二进制: /home/loyieking/dnf_workspace/dnf_installer/build/
#             dnf_data/home/template/neople/stun/df_stun_r
#   ELF 64-bit x86-64 EXEC, GCC (Red Hat 4.1.2-52), O0, 动态链接
#   NEEDED: libpthread/libcrypt/libz/libstdc++.so.6/libm/libgcc_s/libc
#
# 重建工具链: CentOS 5.11 gcc-c++-4.1.2-55.el5.x86_64 (解包到 /tmp/c5root)
#   仅差一个补丁小版本 (-55 vs -52), 全部函数语义等价;
#   write_log 残留 1 条寄存器分配差异 (lea/mov 序列), 见 docs 报告。
#
# 编译:  c5root g++ 4.1.2 (nostdinc + c5root 4.1.2 头文件), -O0 -D_GNU_SOURCE
# 链接:  宿主机 g++ -no-pie (动态 libstdc++/libc, 仅比对 .text 不受影响)
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

SRC_DIR=$(cd "$(dirname "$0")/../DNFServer/StunServer/stun_server" && pwd)
OUT_DIR=$(cd "$(dirname "$0")/../.." && pwd)/build/stun
C5ROOT=${C5ROOT:-/tmp/c5root}
CXX=$C5ROOT/usr/bin/g++
GCINC=$C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include
GCLIB=$C5ROOT/usr/lib/gcc/x86_64-redhat-linux/4.1.2

COMMON_FLAGS="-O0 -D_GNU_SOURCE -std=gnu++98 -nostdinc \
  -isystem $GCINC -isystem $GCINC-fixed \
  -isystem $C5ROOT/usr/include/c++/4.1.2 \
  -isystem $C5ROOT/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem $C5ROOT/usr/include/c++/4.1.2/backward \
  -isystem $C5ROOT/usr/include"

mkdir -p "$OUT_DIR"

for f in stun udp global_func server; do
    echo "CC  $f.cpp"
    run_job "$CXX" $COMMON_FLAGS -c "$SRC_DIR/$f.cpp" -o "$OUT_DIR/$f.o"
done

wait_jobs

echo "LD  df_stun_r"
g++ -no-pie -o "$OUT_DIR/df_stun_r" \
    "$OUT_DIR/stun.o" "$OUT_DIR/udp.o" \
    "$OUT_DIR/global_func.o" "$OUT_DIR/server.o" \
    -lpthread -lcrypt

echo "OK -> $OUT_DIR/df_stun_r"
