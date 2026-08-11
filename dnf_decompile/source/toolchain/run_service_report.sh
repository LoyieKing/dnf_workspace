#!/bin/sh
# 单个服务的函数对比报告流水线（可并行：每个服务使用独立 Ghidra 工程）
# 用法: run_service_report.sh <service> [ghidra_project_root]
set -e

SVC="$1"
GHIDRA_ROOT="${2:-/tmp/ghidra_report_proj}"

ROOT="/home/loyieking/dnf_workspace/dnf_decompile"
GHIDRA="/mnt/d/Works/ghidra/support/analyzeHeadless"
SCRIPT_DIR="$ROOT/source/toolchain"

case "$SVC" in
    dbmw) ORIG="$ROOT/../dnf_installer/build/dnf_data/home/template/neople/dbmw_guild/df_dbmw_r" ;;
    *)    ORIG="$ROOT/../dnf_installer/build/dnf_data/home/template/neople/$SVC/df_${SVC}_r" ;;
esac
PROG="$(basename "$ORIG")"
OUT_DIR="$ROOT/function_reports/$SVC"
mkdir -p "$OUT_DIR"

echo "== [$SVC] import project"
mkdir -p "$GHIDRA_ROOT"
if [ ! -d "$GHIDRA_ROOT/$SVC.rep" ]; then
    "$GHIDRA" "$GHIDRA_ROOT" "$SVC" -import "$ORIG" -overwrite \
        -analysisTimeoutPerFile 3600 \
        > "$OUT_DIR/import.log" 2>&1 || { echo "[$SVC] import failed"; exit 1; }
fi

echo "== [$SVC] targets"
awk -F'\t' 'NR>1 && ($1=="NEAR" || $1=="DIFF") {
    print $2 "\t" substr($3,3) "\t" substr($4,3)
}' "$OUT_DIR/manifest.tsv" > "$OUT_DIR/targets.txt"

echo "== [$SVC] ghidra decompile"
"$GHIDRA" "$GHIDRA_ROOT" "$SVC" -process "$PROG" -readOnly -noanalysis \
    -scriptPath "$SCRIPT_DIR" \
    -postScript ghidra_decompile_by_addr.java \
    "$OUT_DIR/targets.txt" "$OUT_DIR/decompiled.txt" \
    > "$OUT_DIR/decompile.log" 2>&1

echo "== [$SVC] generate md"
cd "$ROOT"
python3 source/toolchain/gen_function_md.py --services "$SVC"

echo "== [$SVC] done"
