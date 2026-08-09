#!/bin/sh
# ============================================================
# df_manager_r 的 MySQL Connector/C 6.0.2 客户端静态库构建
# 原版参数（由 init_alloc_root 等逐指令比对确认）：
#   GCC 4.4.4 时代 codegen（c6root gcc 4.4.7 驱动 + 4.4.4 cc1）
#   -m32 -O2 -fPIC -DNDEBUG -DDBUG_OFF
#   -DHAVE_YASSL -DYASSL_PURE_C -DHAVE_OPENSSL（顶层 CMakeLists）
# 产物：build-manager/mysqlclient/libmysqlclient.a
# ============================================================
set -e

JOBS=${JOBS:-$(nproc 2>/dev/null || echo 4)}
ROOT=$(cd "$(dirname "$0")/.." && pwd)
MYSQL="$ROOT/Library3rd/MySQL"
OUT="$ROOT/build-manager/mysqlclient"

CXX="/tmp/c6root/usr/bin/gcc"
export GCC_EXEC_PREFIX=/tmp/c6root/usr/libexec/gcc/
export LD_LIBRARY_PATH=/tmp/c6root/usr/lib64:/tmp/c6root/usr/lib

FLAGS="-m32 -O2 -fPIC -DNDEBUG -DDBUG_OFF -DHAVE_YASSL -DYASSL_PURE_C -DHAVE_OPENSSL \
  -nostdinc \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include \
  -isystem /tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed \
  -isystem /tmp/c6root/usr/include \
  -I$MYSQL/include -I$MYSQL/mysys -I$MYSQL/strings \
  -I$MYSQL/extlib/yassl/include -I$MYSQL/extlib/yassl/taocrypt/include \
  -I$MYSQL/extlib/yassl/taocrypt/mySTL -I$MYSQL/extlib/zlib"

mkdir -p "$OUT"

_job_pids=""
_job_count=0
run_job() {
    "$@" &
    _job_pids="$_job_pids $!"
    _job_count=$((_job_count + 1))
    if [ "$_job_count" -ge "$JOBS" ]; then wait_jobs; fi
}
wait_jobs() {
    for p in $_job_pids; do
        wait "$p" || exit 1
    done
    _job_pids=""
    _job_count=0
}

compile_one() {
    local src="$1"
    local base
    base=$(basename "$src" .c)
    local obj="$OUT/$base.o"
    if [ ! -f "$obj" ] || [ "$src" -nt "$obj" ]; then
        echo "CC  $base.c"
        run_job "$CXX" $FLAGS -c "$src" -o "$obj"
    fi
}

# ---- libmysql 客户端主体 ----
for f in client.c errmsg.c get_password.c libmysql.c my_time.c net_serv.c pack.c password.c; do
    compile_one "$MYSQL/libmysql/$f"
done

# ---- mysys（与 mysys/CMakeLists.txt 的 MYSYS_SOURCES 一致）----
for f in array.c charset-def.c charset.c checksum.c default.c default_modify.c \
    errors.c hash.c list.c md5.c mf_brkhant.c mf_cache.c mf_dirname.c mf_fn_ext.c \
    mf_format.c mf_getdate.c mf_iocache.c mf_iocache2.c mf_keycache.c my_safehash.c \
    mf_keycaches.c mf_loadpath.c mf_pack.c mf_path.c mf_qsort.c mf_qsort2.c \
    mf_radix.c mf_same.c mf_sort.c mf_soundex.c mf_strip.c mf_arr_appstr.c \
    mf_tempdir.c mf_tempfile.c mf_unixpath.c mf_wcomp.c mf_wfile.c mulalloc.c \
    my_access.c my_aes.c my_alarm.c my_alloc.c my_append.c my_bit.c my_bitmap.c \
    my_chmod.c my_chsize.c my_clock.c my_compress.c my_conio.c my_copy.c \
    my_create.c my_delete.c my_div.c my_error.c my_file.c my_fopen.c my_fstream.c \
    my_gethostbyname.c my_gethwaddr.c my_getopt.c my_getsystime.c my_getwd.c \
    my_init.c my_lib.c my_lock.c my_lockmem.c my_malloc.c my_messnc.c my_dup.c \
    my_mkdir.c my_mmap.c my_net.c my_once.c my_open.c my_pread.c my_pthread.c \
    my_quick.c my_read.c my_realloc.c my_redel.c my_rename.c my_seek.c my_sleep.c \
    my_static.c my_symlink.c my_symlink2.c my_sync.c my_thr_init.c my_wincond.c \
    my_winerr.c my_winfile.c my_windac.c my_winthread.c my_write.c ptr_cmp.c \
    queues.c stacktrace.c rijndael.c safemalloc.c sha1.c string.c thr_alarm.c \
    thr_lock.c thr_mutex.c thr_rwlock.c tree.c typelib.c my_vle.c base64.c \
    my_memmem.c my_getpagesize.c lf_alloc-pin.c lf_dynarray.c lf_hash.c \
    my_atomic.c my_getncpus.c my_rnd.c my_uuid.c wqueue.c waiting_threads.c \
    my_port.c; do
    compile_one "$MYSQL/mysys/$f"
done

# ---- strings ----
for f in bchange.c bcmp.c bfill.c bmove512.c bmove_upp.c ctype-big5.c \
    ctype-bin.c ctype-cp932.c ctype-czech.c ctype-euc_kr.c ctype-eucjpms.c \
    ctype-extra.c ctype-gb2312.c ctype-gbk.c ctype-latin1.c ctype-mb.c \
    ctype-simple.c ctype-sjis.c ctype-tis620.c ctype-uca.c ctype-ucs2.c \
    ctype-ujis.c ctype-utf8.c ctype-win1250ch.c ctype.c decimal.c int2str.c \
    is_prefix.c llstr.c longlong2str.c my_strtoll10.c my_vsnprintf.c r_strinstr.c \
    str2int.c str_alloc.c strcend.c strend.c strfill.c strmake.c strmov.c \
    strnmov.c strtol.c strtoll.c strtoul.c strtoull.c strxmov.c strxnmov.c \
    xml.c dtoa.c my_strchr.c strcont.c strinstr.c strnlen.c strappend.c; do
    compile_one "$MYSQL/strings/$f"
done

# ---- vio ----
for f in vio.c viosocket.c viossl.c viosslfactories.c; do
    compile_one "$MYSQL/vio/$f"
done

# ---- zlib ----
for f in adler32.c compress.c crc32.c deflate.c gzio.c infback.c inffast.c \
    inflate.c inftrees.c trees.c uncompr.c zutil.c; do
    compile_one "$MYSQL/extlib/zlib/$f"
done

# ---- dbug ----
for f in dbug.c; do
    compile_one "$MYSQL/extlib/dbug/$f"
done

wait_jobs

if ls "$OUT"/*.o >/dev/null 2>&1; then
    ar rcs "$OUT/libmysqlclient.a" "$OUT"/*.o
    echo "AR OK -> $OUT/libmysqlclient.a"
fi
