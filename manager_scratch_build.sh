#!/bin/bash
# manager 子 agent scratch 构建：<scratch_dir> <tu_basename.cpp> [extra_flags...]
# 复制完整对象树 -> 重编指定 TU（同 CMake flags + 该 TU 的 per-file OPTIONS）-> 按
# build/manager 的 link.txt 同命令链接，产出 $SCRATCH/df_manager_r。
# 用法示例：bash manager_scratch_build.sh /tmp/sub_manager_peer Peer.cpp
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
TU="$2"
shift 2
EXTRA=("$@")
OBJROOT="$ROOT/build/manager/CMakeFiles/manager.dir"
TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
[ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
# 源码路径直接从对象路径推导（避免 find 命中其它服务的同名 TU，如 DBMW/Peer.cpp）
SRC="/${TUO#$OBJROOT/}"
SRC="${SRC%.o}"
[ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }
rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
if [ -f "$ROOT/build/manager/mysqlclient/trees.o" ]; then
    mkdir -p "$SCRATCH/mysqlclient"
    cp "$ROOT/build/manager/mysqlclient/trees.o" "$SCRATCH/mysqlclient/trees.o"
fi
WRAPPER="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")
# 该 TU 的 per-file OPTIONS（flags.make 中形如 "# Custom options: <obj>.o_OPTIONS = ..."）
OPTS=$(grep "${TU}\.o_OPTIONS" "$OBJROOT/flags.make" \
    | sed 's/^# Custom options: .*_OPTIONS = //' | tr ';' ' ' || true)
REL="${TUO#$OBJROOT/}"
echo "CC $TU (scratch, extra: ${EXTRA[*]:-none})"
# shellcheck disable=SC2086
"$WRAPPER" $FLAGS $OPTS "${EXTRA[@]}" -c "$SRC" -o "$SCRATCH/CMakeFiles/manager.dir/$REL"
echo "LD df_manager_r (scratch)"
cd "$SCRATCH"
python3 - "$ROOT/build/manager/CMakeFiles/manager.dir/link.txt" "$SCRATCH" <<'PYEOF'
import subprocess, sys
linktxt, scratch = sys.argv[1], sys.argv[2]
cmd = open(linktxt).read().strip()
cmd = cmd.replace('mysqlclient/trees.o', scratch + '/mysqlclient/trees.o')
cmd = cmd.replace('-o df_manager_r', '-o ' + scratch + '/df_manager_r')
subprocess.check_call(cmd, shell=True)
PYEOF
echo "OK -> $SCRATCH/df_manager_r"
