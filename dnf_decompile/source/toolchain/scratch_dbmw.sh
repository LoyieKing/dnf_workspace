#!/bin/bash
# scratch_dbmw.sh — dbmw 子 agent 的 scratch 构建/闭环辅助（2026-08-11 第 11 轮）。
# 用途：子 agent 在自己的临时目录里复制全部 .o，仅重编自己负责的 TU，
#       用与 build/dbmw 完全相同的 flags 链接出 scratch 二进制，
#       再用 gen_function_md.py --check-only 逐函数复检。
# 约束：不修改 build/dbmw 与 function_reports/dbmw；源文件改动仅限本组 TU。
#
# 用法:
#   scratch_dbmw.sh init <scratch_dir>
#      复制 build/dbmw 的全部 .o（平铺 basename）与链接参数模板
#   scratch_dbmw.sh build <scratch_dir> <tu.cpp> [src_override]
#      按 build.make 中该 TU 的编译命令重编 <tu.cpp>（tu 为相对 source 根路径；
#      src_override 存在时用它替代 -c 的源码路径，用于多 agent 同 TU 隔离）
#   scratch_dbmw.sh rebuild <scratch_dir> <tu.cpp> [src_override]
#      build + link 一步完成（每函数循环最常用）
#   scratch_dbmw.sh link <scratch_dir>
#      按 link.txt 同命令链接出 <scratch_dir>/df_dbmw_r
#   scratch_dbmw.sh classify <scratch_dir> <mangled>
#      gen_function_md.py 单函数 --check-only 严格分类
set -u

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$ROOT/build/dbmw"
CM="$BUILD/CMakeFiles/dbmw.dir"
LINK_TXT="$CM/link.txt"

cmd="${1:-}"; shift 2>/dev/null || true

case "$cmd" in
  init)
    sc="$1"
    mkdir -p "$sc/objs" "$sc/src"
    # 平铺复制 link 中出现的全部 .o（basename 全局唯一，已核验）
    while read -r tok; do
      case "$tok" in
        *.o)
          case "$tok" in
            /*) src_obj="$tok" ;;
            *)  src_obj="$BUILD/$tok" ;;
          esac
          cp "$src_obj" "$sc/objs/$(basename "$tok")"
          ;;
      esac
    done < <(tr ' ' '\n' < "$LINK_TXT")
    echo "init ok: $(ls "$sc/objs" | wc -l) objs -> $sc"
    ;;

  build)
    sc="$1"; tu="$2"; override="${3:-}"
    src="$ROOT/$tu"
    if [ -n "$override" ]; then
      src="$override"
    elif [ -f "$sc/src/$(basename "$tu")" ]; then
      src="$sc/src/$(basename "$tu")"
    fi
    # 从 build.make 提取该 TU 的编译命令（wrapper + 全部参数）
    rule_line=$(grep -A2 "\.dir/.*/$tu\.o:" "$CM/build.make" | grep -E '\.(sh|g\+\+|gcc)' | head -1)
    if [ -z "$rule_line" ]; then
      echo "ERROR: no build rule for $tu" >&2
      exit 1
    fi
    # 展开 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)
    defs=$(sed -n 's/^CXX_DEFINES = //p' "$CM/flags.make" | head -1)
    incs=$(sed -n 's/^CXX_INCLUDES = //p' "$CM/flags.make" | head -1)
    flags=$(sed -n 's/^CXX_FLAGS = //p' "$CM/flags.make" | head -1)
    rule_line=${rule_line//\$(CXX_DEFINES)/$defs}
    rule_line=${rule_line//\$(CXX_INCLUDES)/$incs}
    rule_line=${rule_line//\$(CXX_FLAGS)/$flags}
    # 去掉依赖生成参数，替换输出/输入路径
    rule_line=$(printf '%s' "$rule_line" | sed \
      -e 's/ -MD -MT [^ ]*//' \
      -e 's/ -MF [^ ]*//' \
      -e "s|-o CMakeFiles/dbmw.dir[^ ]*|-o $sc/objs/$(basename "$tu" .cpp).cpp.o|" \
      -e "s|-c /home/loyieking/dnf_workspace/dnf_decompile/$tu|-c $src|")
    echo "== compile: $(basename "$tu")"
    ( cd "$sc" && eval "$rule_line" ) || exit 1
    ;;

  link)
    sc="$1"
    args=()
    first=1
    while read -r tok; do
      if [ $first -eq 1 ]; then
        first=0
        continue
      fi
      case "$tok" in
        *.o)
          args+=("$sc/objs/$(basename "$tok")")
          ;;
        -o)
          args+=(-o "$sc/df_dbmw_r")
          # 跳过紧随 -o 的旧目标名
          read -r _skip || true
          ;;
        *)
          args+=("$tok")
          ;;
      esac
    done < <(tr ' ' '\n' < "$LINK_TXT")
    echo "== link -> $sc/df_dbmw_r"
    "$ROOT/source/cmake/dbmw/../../toolchain/link_dbmw.sh" "${args[@]}" || exit 1
    ;;

  rebuild)
    sc="$1"; tu="$2"; override="${3:-}"
    bash "$0" build "$sc" "$tu" "$override" || exit 1
    bash "$0" link "$sc" || exit 1
    ;;

  classify)
    sc="$1"; mangled="$2"
    python3 "$ROOT/source/toolchain/gen_function_md.py" \
      --services dbmw --function "$mangled" \
      --new-bin "$sc/df_dbmw_r" --check-only || exit 1
    ;;

  *)
    echo "usage: $0 {init|build|link|classify} ..." >&2
    exit 2
    ;;
esac
