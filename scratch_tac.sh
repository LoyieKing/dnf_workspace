#!/bin/bash
# Fast scratch compile of TActiveConnect.cpp (auction c6446r flags) and print
# the RequestConnect disassembly region (rejected-branch + tail) for iteration.
set -u
ROOT="/home/loyieking/dnf_workspace/dnf_decompile"
SRC="${1:-$ROOT/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TActiveConnect.cpp}"
CXX="$ROOT/source/toolchain/cmake/dnf_c6446r_gxx.sh"
FLAGS=(-m32 -O0 -fno-enforce-eh-specs -nostdinc
  -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include
  -isystem/tmp/c6root/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include-fixed
  -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6
  -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/x86_64-redhat-linux
  -isystem/tmp/lsd44/v4.4.6/usr/include/c++/4.4.6/backward
  -isystem/tmp/c6root/usr/include
  -isystem/tmp/c5root/usr/include/c++/4.1.2
  -isystem/tmp/c5root/usr/include/c++/4.1.2/x86_64-redhat-linux
  -isystem/tmp/c5root/usr/include/c++/4.1.2/backward
  -isystem/tmp/c5root/usr/include
  -isystem "$ROOT/source/cmake/auction"
  -m32
  -isystem "$ROOT/source/cmake/auction/../../Library3rd/Boost/Include"
  -isystem "$ROOT/source/cmake/auction/../../Library3rd/MySQL/include"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/ServerLib/basic_source"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/ServerLib/common_source"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/AppCommon/AuctionCommon"
  -I "$ROOT/source/DNFServer/ServerCommon"
  -I "$ROOT/source/DNFShared/GameScript"
  -I "$ROOT/source/Library/Include/Core"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary"
  -I "$ROOT/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source"
  -I "$ROOT/source/shared"
  -I "$ROOT/source/shared/common/include"
  -I "$ROOT/source/shared/packet/include"
  -D_GNU_SOURCE -std=gnu++0x -pthread -DTIXML_USE_STL -DBOOST_DISABLE_ASSERTS -DDNF_SVC_AUCTION)
"$CXX" "${FLAGS[@]}" -c "$SRC" -o /tmp/tac_test.o || exit 1
objdump -d /tmp/tac_test.o | awk '/<_ZN3nsl16ActiveConManager14RequestConnectEPNS_12ConInterfaceE>:/{f=1} f{print} f&&/ret/{exit}'
