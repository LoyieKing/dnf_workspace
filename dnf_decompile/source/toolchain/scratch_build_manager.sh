#!/bin/bash
# ============================================================
# manager 并行回归 scratch 构建（2026-08-11 第 9 轮新增，子 Agent 专用）
# 用法: scratch_build_manager.sh <scratch-dir> <src1.cpp> [src2.cpp ...]
#   - 从 build/manager/CMakeFiles/manager.dir 复制全部 .o 作为基线
#   - 用 CMake 相同 flags 重编给定 TU（覆盖同名 .o）
#   - 按 link.txt 相同命令链接出 <scratch-dir>/df_manager_r
# 可选环境变量:
#   TU_CC1=<dir>         覆盖该 TU 的 -B<dir>（换编译器 A/B，如 /tmp/cc1plus444bin）
#   TU_EXTRA_FLAGS="..." 追加编译选项（如 -O1）
# 约束: 禁止修改 build/manager 与 function_reports/manager（父 agent 集成）
# ============================================================
set -e

SCRATCH="$1"; shift
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$ROOT/build/manager"
OBJDIR="$BUILD/CMakeFiles/manager.dir"
FLAGS_MAKE="$OBJDIR/flags.make"
LINK_TXT="$OBJDIR/link.txt"
GXX="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"

mkdir -p "$SCRATCH"

# ---- 1) 基线对象复制（仅首次；父集成重建后如需新基线请删 scratch 重建）----
if [ ! -d "$SCRATCH/CMakeFiles/manager.dir" ]; then
    echo "== copy baseline objects"
    mkdir -p "$SCRATCH/CMakeFiles"
    cp -r "$OBJDIR" "$SCRATCH/CMakeFiles/manager.dir"
    mkdir -p "$SCRATCH/mysqlclient"
    cp "$BUILD/mysqlclient/trees.o" "$SCRATCH/mysqlclient/trees.o"
fi

# ---- 2) 解析 base CXX_FLAGS ----
BASE_FLAGS=$(sed -n 's/^CXX_FLAGS = //p' "$FLAGS_MAKE")

compile_one() {
    local src
    src=$(realpath "$1")
    local base
    base=$(basename "$src" .cpp)
    local rel="${src#/}"
    local obj="$SCRATCH/CMakeFiles/manager.dir/$rel.o"
    local rel_obj="CMakeFiles/manager.dir/$rel.o"
    mkdir -p "$(dirname "$obj")"
    # 按 flags.make 取该文件专属选项/头（_OPTIONS / _INCLUDE_DIRECTORIES 行）
    local opts incs
    opts=$(awk -v o="$rel_obj" 'index($0, o "_OPTIONS") {sub(/^# Custom options: /, ""); sub(/ = /, "=", $0); n=index($0,"="); print substr($0, n+1)}' "$FLAGS_MAKE")
    incs=$(awk -v o="$rel_obj" 'index($0, o "_INCLUDE_DIRECTORIES") {sub(/^# Custom include directories: /, ""); sub(/ = /, "=", $0); n=index($0,"="); print substr($0, n+1)}' "$FLAGS_MAKE")
    if [ -n "$TU_CC1" ]; then
        opts=$(echo "$opts" | tr ';' '\n' | sed 's|^-B.*$|-B'"$TU_CC1"'|' | tr '\n' ';')
    fi
    opts=$(echo "$opts" | tr ';' ' ')
    local inc_flags=""
    if [ -n "$incs" ]; then
        inc_flags=$(echo "$incs" | tr ';' '\n' | sed 's|^|-I|' | tr '\n' ' ')
    fi
    echo "== CC $base"
    # shellcheck disable=SC2086
    "$GXX" $BASE_FLAGS $opts $inc_flags $TU_EXTRA_FLAGS -c "$src" -o "$obj"
}

for src in "$@"; do
    compile_one "$src"
done

# ---- 3) 链接（link.txt 相对路径结构在 scratch 下原样可用）----
echo "== LD df_manager_r"
cd "$SCRATCH"
_link_cmd=$(sed 's|-o df_manager_r|-o '"$SCRATCH"'/df_manager_r|' "$LINK_TXT")
eval "$_link_cmd"
echo "OK -> $SCRATCH/df_manager_r"
