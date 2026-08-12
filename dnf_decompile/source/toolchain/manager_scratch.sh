#!/bin/bash
# manager TU scratch 编译/链接助手（第 19 轮，§0.1 子 Agent 用）
# 用法:
#   manager_scratch.sh init <scratch_dir> <tu_abs_path> [extra_flags...]
#       初始化 scratch 目录（拷贝 build/manager 全部 .o 与链接依赖），
#       用 CMake 完全相同的 flags 重编指定 TU（覆盖其 .o），不触碰 build/manager
#   manager_scratch.sh link <scratch_dir>
#       按 build/manager/CMakeFiles/manager.dir/link.txt 同命令链接出
#       <scratch_dir>/df_manager_r
# 校验（在 dnf_decompile 下执行，不写 md）:
#   python3 source/toolchain/gen_function_md.py --services manager \
#       --function <mangled> --new-bin <scratch_dir>/df_manager_r --check-only
set -eu
ROOT=/home/loyieking/dnf_workspace/dnf_decompile
BUILD="$ROOT/build/manager"
GXX="$ROOT/source/toolchain/cmake/dnf_c6_gxx.sh"
GXX5="$ROOT/source/toolchain/cmake/dnf_c5r52_gxx.sh"

# ===== flags.make 的 CXX_FLAGS（与 cmake 完全一致，勿改）=====
COMMON_FLAGS=' -m32 -O0 -fno-enforce-eh-specs -O0 -fno-enforce-eh-specs -nostdinc -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed -isystem/tmp/c6root/usr/include/c++/4.4.7 -isystem/tmp/c6root/usr/include/c++/4.4.7/x86_64-redhat-linux -isystem/tmp/c6root/usr/include/c++/4.4.7/backward -isystem/tmp/c6root/usr/include -isystem/tmp/c5root/usr/include/c++/4.1.2 -isystem/tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux -isystem/tmp/c5root/usr/include/c++/4.1.2/backward -isystem/tmp/c5root/usr/include -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6 -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward -isystem/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager -m32 -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/ServerCommon -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/GameServer/Manager -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/packet/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/common/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/mysys -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/strings -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MANAGER -std=gnu++0x'

# c5r52（4.1.2-52，ORIG .comment 精确版本之一）A/B 试编译 flags
COMMON5_FLAGS=' -m32 -O0 -D_GNU_SOURCE -std=gnu++98 -nostdinc -isystem/tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include -isystem/tmp/c5r52tool/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed -isystem/tmp/c5root/usr/include/c++/4.1.2 -isystem/tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux -isystem/tmp/c5root/usr/include/c++/4.1.2/backward -isystem/tmp/c5root/usr/include -m32 -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/ServerCommon -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../DNFServer/GameServer/Manager -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/packet/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../shared/common/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/include -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/mysys -I/home/loyieking/dnf_workspace/dnf_decompile/source/cmake/manager/../../Library3rd/MySQL/strings -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MANAGER'

cmd_init() {
    local scratch="$1" tu="$2"
    shift 2
    if [ ! -d "$BUILD/CMakeFiles/manager.dir" ]; then
        echo "错误: 找不到 $BUILD/CMakeFiles/manager.dir（先重建 manager）" >&2
        exit 1
    fi
    [ -e "$scratch" ] && rm -rf -- "$scratch"
    mkdir -p "$scratch"
    mkdir -p "$scratch/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/manager.dir" "$scratch/CMakeFiles/manager.dir"
    cp -r "$BUILD/mysqlclient" "$scratch/mysqlclient"
    local rel obj
    rel="${tu#$ROOT/}"
    obj="$scratch/CMakeFiles/manager.dir/home/loyieking/dnf_workspace/dnf_decompile/$rel.o"
    if [ ! -f "$obj" ]; then
        echo "错误: 目标对象不存在（预期 $obj）" >&2
        exit 1
    fi
    # 逐文件 -B 工具链选项（与 CMakeLists SRC_OPTS 一致）
    local extra=()
    case "$rel" in
        *DNFNetworkThread.cpp|*DNFTcpAcceptThread.cpp|*TcpNetSystem.cpp|*DNFMySql.cpp|*DNFPacketTranslater.cpp|*DNFTcpNetworkThread.cpp|*QueryCounter.cpp|*DBManager.cpp|*DNFPacketDecoder.cpp|*DNFPacketBuffer.cpp|*DNFSignalTranslator.cpp|*DNFApplication.cpp|*DNFTcpHandler.cpp|*DNFThreadInterface.cpp|*DNFTableBase.cpp)
            extra+=("-B/tmp/cc1plus446bin/")
            ;;
    esac
    "$GXX" $COMMON_FLAGS "${extra[@]}" "$@" -o "$obj" -c "$tu"
    echo "OK: $tu -> $obj"
}

cmd_init5() {
    local scratch="$1" tu="$2"
    shift 2
    if [ ! -d "$BUILD/CMakeFiles/manager.dir" ]; then
        echo "错误: 找不到 $BUILD/CMakeFiles/manager.dir（先重建 manager）" >&2
        exit 1
    fi
    [ -e "$scratch" ] && rm -rf -- "$scratch"
    mkdir -p "$scratch"
    mkdir -p "$scratch/CMakeFiles"
    cp -r "$BUILD/CMakeFiles/manager.dir" "$scratch/CMakeFiles/manager.dir"
    cp -r "$BUILD/mysqlclient" "$scratch/mysqlclient"
    local rel obj
    rel="${tu#$ROOT/}"
    obj="$scratch/CMakeFiles/manager.dir/home/loyieking/dnf_workspace/dnf_decompile/$rel.o"
    if [ ! -f "$obj" ]; then
        echo "错误: 目标对象不存在（预期 $obj）" >&2
        exit 1
    fi
    "$GXX5" $COMMON5_FLAGS "$@" -o "$obj" -c "$tu"
    echo "OK(c5r52): $tu -> $obj"
}

cmd_link() {
    local scratch="$1"
    if [ ! -f "$BUILD/CMakeFiles/manager.dir/link.txt" ]; then
        echo "错误: 找不到 link.txt" >&2
        exit 1
    fi
    (cd "$scratch" && bash -c "$(cat "$BUILD/CMakeFiles/manager.dir/link.txt")")
    echo "OK: $scratch/df_manager_r"
}

case "${1:-}" in
    init) shift; cmd_init "$@" ;;
    init5) shift; cmd_init5 "$@" ;;
    link) shift; cmd_link "$@" ;;
    *) echo "用法: $0 {init|link} ..." >&2; exit 2 ;;
esac
