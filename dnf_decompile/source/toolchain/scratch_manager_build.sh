#!/bin/bash
# scratch_manager_build.sh - 独立 scratch 构建（manager 服务，子 Agent 专用）
#
# 用途：在不触碰 build/manager 与 function_reports/manager 的前提下，
#       用 CMake 相同 flags 重编单个 TU 并链接出 scratch 二进制，
#       供 gen_function_md.py --new-bin <scratch> 做单函数复检。
#
# 用法：
#   scratch_manager_build.sh <scratch_dir> <tu_basename> [extra_flags...]
#   <scratch_dir>   工作目录（须已存在；对象镜像会建在其下 objects/）
#   <tu_basename>   TU 文件名（如 DNFServerHandler、Peer、DNFApplication）
#   [extra_flags]   附加编译 flags（追加到 CMake flags 之后）
#
# 输出：<scratch_dir>/df_manager_r（链接产物）
set -euo pipefail

ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD=$ROOT/build/manager
SRC=$ROOT/source
SCRATCH=$1
TU=$2
shift 2
EXTRA_FLAGS=("$@")

OBJDIR=$SCRATCH/objects
REL=home/loyieking/dnf_workspace/dnf_decompile/source

# 1) 对象镜像：只拷贝缺失/更新的 .o（首次建镜像，后续增量覆盖本组 TU）
mkdir -p "$OBJDIR"
cd "$BUILD/CMakeFiles/manager.dir"
if [ ! -f "$SCRATCH/.objects_ready" ]; then
    find . -name '*.o' | while read -r o; do
        mkdir -p "$OBJDIR/$(dirname "$o")"
        cp "$o" "$OBJDIR/$o"
    done
    touch "$SCRATCH/.objects_ready"
fi

# 2) CMake 统一 flags（来自 flags.make，去掉 -MD/-MT/-MF 依赖输出）
CXX=$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh
CXX_FLAGS=' -m32 -O0 -fno-enforce-eh-specs -O0 -fno-enforce-eh-specs -nostdinc -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed -isystem/tmp/c6root/usr/include/c++/4.4.7 -isystem/tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux -isystem/tmp/c6root/usr/include/c++/4.4.7/backward -isystem/tmp/c6root/usr/include -isystem/tmp/c5root/usr/include/c++/4.1.2 -isystem/tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux -isystem/tmp/c5root/usr/include/c++/4.1.2/backward -isystem/tmp/c5root/usr/include -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6 -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward -isystem/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager -m32 -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/ServerCommon -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/GameServer/Manager -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/packet/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/common/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/mysys -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/strings -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MANAGER -std=gnu++0x'

# 3) 逐 TU 编译选项（与 CMakeLists.txt 的 SRC_OPTS 一致）
case "$TU" in
    DNFApplication|DNFMySql|DNFNetworkThread|DNFPacketTranslater|DNFTcpAcceptThread|DNFTcpNetworkThread|TcpNetSystem)
        TU_OPTS=(-B/tmp/cc1plus446bin/) ;;
    *)
        TU_OPTS=() ;;
esac

# 4) 编译本组 TU
TU_CPP=$SRC/DNFServer/GameServer/Manager/$TU.cpp
TU_OBJ=$OBJDIR/$REL/DNFServer/GameServer/Manager/$TU.cpp.o
"$CXX" $CXX_FLAGS "${TU_OPTS[@]}" "${EXTRA_FLAGS[@]}" -o "$TU_OBJ" -c "$TU_CPP"

# 5) 链接：复用 build/manager link.txt，替换对象路径并输出 scratch 二进制
cd "$BUILD"
sed "s#CMakeFiles/manager.dir#$OBJDIR#g" "$BUILD/CMakeFiles/manager.dir/link.txt" \
    | sed "s#-o df_manager_r#-o $SCRATCH/df_manager_r#" \
    | sed "s#mysqlclient/trees.o#$BUILD/mysqlclient/trees.o#" \
    > "$SCRATCH/link_scratch.txt"
sh "$SCRATCH/link_scratch.txt"
echo "OK: $SCRATCH/df_manager_r"
