#!/bin/bash
# ============================================================================
# gen_dnflex_engine.sh — 用 flex 2.5.35 重新生成 __dnf_script__FlexLexer 引擎。
# ----------------------------------------------------------------------------
# 目标：本工程不手写 yy 引擎；引擎由真实 flex 2.5.35 生成并入库。
# 产物：src/DNFServer/GameServer/Game/FlexLexerEngine.cpp
#       （+ vendored src/DNFServer/GameServer/Game/FlexLexer.h）
#
# 用法:
#   bash source/toolchain/gen_dnflex_engine.sh            # 生成引擎 TU
#   bash source/toolchain/gen_dnflex_engine.sh --bootstrap # 先构建 flex 2.5.35
#
# 版本：flex 2.5.35（2008，与 gcc 4.4 同期）。ORIG __dnf_script__FlexLexer 即由
#   该版生成（特征：yyensure_buffer_stack / "%option yyclass used" 桩 /
#   yy_create_buffer malloc(0x30) / YY_BUF_SIZE=0x4000 / yywrap()==1 /
#   LexerError→std::cerr + exit(2)，逐项与 ORIG 二进制吻合）。
#   选项 `-C`：无等价类/无 meta 类（ORIG nm 证实无 yy_ec/yy_meta），主循环
#   `while (yy_chk[yy_base[state]+c] != state) state=def[state]` 与 ORIG 反汇编逐条一致。
# ----------------------------------------------------------------------------

set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"              # dnf_decompile/
GAME="$ROOT/source/DNFServer/GameServer/Game"
FLEXVER="2.5.35"
FLEXSRC="/tmp/flex-${FLEXVER}"      # 已解压的 flex 2.5.35 源码
FLEXBIN="/tmp/flexb2/flex"          # 已构建的 flex 二进制（--bootstrap 时重建）
SRCL="$GAME/dnf_script.l"
OUT="$GAME/FlexLexerEngine.cpp"

if [ "${1:-}" = "--bootstrap" ]; then
    echo "[gen_dnflex_engine] bootstrapping flex $FLEXVER..."
    # 用 flex 2.5.35 自带的生成文件构建（勿让 make 用新版 bison 重生成 scan.c）。
    TARBALL="/tmp/flex-${FLEXVER}.tar.gz"
    [ -f "$TARBALL" ] || curl -fsSL -o "$TARBALL" \
        https://repository.timesys.com/buildsources/f/flex/flex-${FLEXVER}/flex-${FLEXVER}.tar.gz
    rm -rf "$FLEXSRC" /tmp/flexb2
    mkdir -p /tmp/flexb2
    tar xzf "$TARBALL" -C /tmp/flexb2 --strip-components=1
    ( cd /tmp/flexb2 && find . -exec touch {} + ; \
      ./configure --prefix=/tmp/flexinst >/tmp/flexconf.log 2>&1 ; \
      find . -exec touch {} + ; \
      M4=/usr/bin/m4 ./configure >/dev/null 2>&1 ; \
      make -j"$(nproc)" >/tmp/flexmake.log 2>&1 )
    echo "[gen_dnflex_engine] flex bootstrap done: $FLEXBIN"
fi

echo "[gen_dnflex_engine] generating engine from $SRCL"
"${FLEXBIN}" -+ -C -P__dnf_script__ -o /tmp/_dnf_engine.gen.cpp "$SRCL"

# ---- 后处理：把 flex 生成文件转为工程引擎 TU ----
# 1) 包含路径改为工程 vendored 头。
sed 's|#include <FlexLexer.h>|#include "FlexLexer.h"|' /tmp/_dnf_engine.gen.cpp > /tmp/_dnf_engine.s1.cpp
# 2) 删除 DFA 表数组（改用 DNFLexCore.cpp 的 g_yy_*，由 DNFLex.h extern 声明）。
# 2) 删除 DFA 表数组、struct yy_buffer_state 定义、以及 %option yyclass 的
#    重复 YY_DECL DFA-body（保留 yyclass stub）。逻辑见 /tmp/_strip_engine.py。
python3 /tmp/_strip_engine.py "$OUT"

echo "[gen_dnflex_engine] wrote $OUT"
echo "[gen_dnflex_engine] NOTE: DNFLexCore.cpp 提供 g_yy_* ORIG 表；FlexLexer.h 为 vendored 权威基类头。"
