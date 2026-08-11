#!/bin/bash
# 用 GCC 4.1.2-52（ORIG coserver .comment 精确版本）重编指定的 coserver TU，
# 对象覆盖到 CMake 对象路径后触发 cmake 重链接。
# 用法: bash source/toolchain/coserver_tu_c5.sh <base.cpp> [<base.cpp> ...]
# 例:   bash source/toolchain/coserver_tu_c5.sh DNFTickHandler DNFUserInOutCounter
set -e
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
OBJ_DIR="$ROOT/build/coserver/CMakeFiles/coserver.dir"
TC=/tmp/c5r52tool
CXX="$ROOT/source/toolchain/cmake/dnf_c5r52_gxx.sh"

FLAGS="-m32 -O0 -fno-enforce-eh-specs -nostdinc \
  -isystem $TC/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include \
  -isystem $TC/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed \
  -isystem $TC/usr/include/c++/4.1.2 \
  -isystem $TC/usr/include/c++/4.1.2/x86_64-redhat-linux \
  -isystem $TC/usr/include/c++/4.1.2/backward \
  -isystem $TC/usr/include \
  -I$ROOT/source/DNFServer/ServerCommon \
  -I$ROOT/source/DNFServer/GameServer/COServer \
  -I$ROOT/source/shared/packet/include \
  -I$ROOT/source/shared -I$ROOT/source/shared/common/include \
  -DDF_NO_CODEPAGE"

for base in "$@"; do
    src=""
    for d in "$ROOT/source/DNFServer/GameServer/COServer" \
             "$ROOT/source/DNFServer/ServerCommon" \
             "$ROOT/source/shared/packet/src"; do
        [ -f "$d/$base.cpp" ] && src="$d/$base.cpp"
    done
    [ -n "$src" ] || { echo "cannot find $base.cpp" >&2; exit 2; }
    obj="$OBJ_DIR/home/loyieking/dnf_workspace/dnf_decompile/source/"
    case "$src" in
        *COServer*) obj="${obj}DNFServer/GameServer/COServer/$base.cpp.o" ;;
        *ServerCommon*) obj="${obj}DNFServer/ServerCommon/$base.cpp.o" ;;
        *packet/src*) obj="${obj}shared/packet/src/$base.cpp.o" ;;
    esac
    echo "C5 $base.cpp"
    (cd "$(dirname "$src")" && "$CXX" $FLAGS -c "$base.cpp" -o "$obj")
    touch "$obj"
done

echo "RELINK"
cmake --build "$ROOT/build/coserver" -j"$(nproc)" >/dev/null
echo "OK -> $ROOT/build/coserver/df_coserver_r"
