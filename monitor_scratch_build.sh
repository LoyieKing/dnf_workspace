#!/bin/bash
# monitor 子 agent scratch 构建：<scratch_dir> <tu_basename.cpp> [更多 tu_basename.cpp ...]
# 复制完整对象树 -> 重编指定 TU（同 CMake flags + per-file OPTIONS + 可选 extra flags）
# -> 按 build/monitor 的 link.txt 同命令链接，产出 $SCRATCH/df_monitor_r。
# 用法示例：bash monitor_scratch_build.sh /tmp/sub_monitor_village VillageAttackedManager.cpp
set -euo pipefail
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
SCRATCH="$1"
shift
TUS=("$@")
[ ${#TUS[@]} -gt 0 ] || { echo "usage: $0 <scratch_dir> <tu.cpp> [...]" >&2; exit 1; }
OBJROOT="$ROOT/build/monitor/CMakeFiles/monitor.dir"
WRAPPER="${MONITOR_SCRATCH_WRAPPER:-$ROOT/source/toolchain/cmake/dnf_c6444r_gxx.sh}"
FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$OBJROOT/flags.make")
rm -rf "$SCRATCH"
mkdir -p "$SCRATCH"
mkdir -p "$SCRATCH/CMakeFiles"
cp -r "$OBJROOT" "$SCRATCH/CMakeFiles/"
for TU in "${TUS[@]}"; do
    TUO="$(find "$OBJROOT" -name "${TU}.o" | head -1)"
    [ -n "$TUO" ] || { echo "no object for $TU" >&2; exit 1; }
    # 源码路径直接从对象路径推导（避免 find 命中其它服务的同名 TU）
    SRC="/${TUO#$OBJROOT/}"
    SRC="${SRC%.o}"
    [ -n "$SRC" ] || { echo "no source for $TU" >&2; exit 1; }
    # 该 TU 的 per-file OPTIONS（flags.make 中形如 "# Custom options: <obj>.o_OPTIONS = ..."）
    OPTS=$(grep "${TU}\.o_OPTIONS" "$OBJROOT/flags.make" \
        | sed 's/^# Custom options: .*_OPTIONS = //' | tr ';' ' ' || true)
    REL="${TUO#$OBJROOT/}"
    echo "CC $TU (scratch)"
    # shellcheck disable=SC2086
    "$WRAPPER" $FLAGS $OPTS -c "$SRC" -o "$SCRATCH/CMakeFiles/monitor.dir/$REL"
done
echo "LD df_monitor_r (scratch)"
cd "$SCRATCH"
python3 - "$ROOT/build/monitor/CMakeFiles/monitor.dir/link.txt" "$SCRATCH" <<'PYEOF'
import subprocess, sys
linktxt, scratch = sys.argv[1], sys.argv[2]
cmd = open(linktxt).read().strip()
cmd = cmd.replace('-o df_monitor_r', '-o ' + scratch + '/df_monitor_r')
subprocess.check_call(cmd, shell=True)
PYEOF
echo "OK -> $SCRATCH/df_monitor_r"
