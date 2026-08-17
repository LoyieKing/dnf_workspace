#!/bin/bash
# temp driver: c5r52 rebuild of DNFTickHandler into scratch tree (monitor r31)
set -e
DECOMP="$(cd "$(dirname "$0")" && pwd)"     # dnf_decompile（脚本位于仓库根）
cd "$DECOMP"
SCR=/tmp/sub_monitor_tick
mkdir -p "$SCR/CMakeFiles"
C5="$DECOMP/toolchains/c5root"

FLAGS="-m32 -O0 -fno-enforce-eh-specs -nostdinc -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_MONITOR"
FLAGS="$FLAGS -isystem $C5/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include -isystem $C5/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include-fixed"
FLAGS="$FLAGS -isystem $C5/usr/include/c++/4.1.2 -isystem $C5/usr/include/c++/4.1.2/x86_64-redhat-linux -isystem $C5/usr/include/c++/4.1.2/backward -isystem $C5/usr/include"
FLAGS="$FLAGS -I$PWD/source/DNFServer/ServerCommon -I$PWD/source/DNFServer/GameServer/Monitor -I$PWD/source/shared/packet/include -I$PWD/source/shared -I$PWD/source/shared/common/include"
REL=source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp.o
source/toolchain/cmake/dnf_c5r52_gxx.sh $FLAGS -c source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp -o "$SCR/CMakeFiles/monitor.dir/$REL"
cd "$SCR"
python3 - "$DECOMP/build/monitor/CMakeFiles/monitor.dir/link.txt" "$SCR" <<'PYEOF'
import subprocess, sys
linktxt, scratch = sys.argv[1], sys.argv[2]
cmd = open(linktxt).read().strip()
cmd = cmd.replace("-o df_monitor_r", "-o " + scratch + "/df_monitor_r")
subprocess.check_call(cmd, shell=True)
PYEOF
echo OK
