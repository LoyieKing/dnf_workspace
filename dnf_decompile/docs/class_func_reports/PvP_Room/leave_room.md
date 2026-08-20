# leave_room

`_ZN8PvP_Room10leave_roomEP5CUserRb`

`PvP_Room::leave_room(CUser*, bool&)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7f6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7f6c  _ZN8PvP_Room10leave_roomEP5CUserRb
#           PvP_Room::leave_room(CUser*, bool&)
# range [0x085d7f6c, 0x085d81cf]
085d7f6c +0x000:  push   %ebp
085d7f6d +0x001:  mov    %esp,%ebp
085d7f6f +0x003:  push   %edi
085d7f70 +0x004:  push   %esi
085d7f71 +0x005:  push   %ebx
085d7f72 +0x006:  sub    $0x5c,%esp
085d7f75 +0x009:  mov    0x8(%ebp),%eax
085d7f78 +0x00c:  mov    %eax,(%esp)
085d7f7b +0x00f:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d7f80 +0x014:  mov    %eax,-0x44(%ebp)
085d7f83 +0x017:  mov    0x10(%ebp),%eax
085d7f86 +0x01a:  movzbl (%eax),%eax
085d7f89 +0x01d:  movzbl %al,%eax
085d7f8c +0x020:  mov    %eax,-0x40(%ebp)
085d7f8f +0x023:  mov    0x8(%ebp),%eax
085d7f92 +0x026:  mov    %eax,(%esp)
085d7f95 +0x029:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
085d7f9a +0x02e:  mov    %eax,-0x3c(%ebp)
085d7f9d +0x031:  mov    0x8(%ebp),%eax
085d7fa0 +0x034:  mov    %eax,(%esp)
085d7fa3 +0x037:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085d7fa8 +0x03c:  mov    %eax,%edi
085d7faa +0x03e:  mov    0xc(%ebp),%eax
085d7fad +0x041:  mov    %eax,(%esp)
085d7fb0 +0x044:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085d7fb5 +0x049:  mov    %eax,%esi
085d7fb7 +0x04b:  mov    0xc(%ebp),%eax
085d7fba +0x04e:  mov    %eax,(%esp)
085d7fbd +0x051:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085d7fc2 +0x056:  mov    %eax,%ebx
085d7fc4 +0x058:  movl   $0x0,0x10(%esp)
085d7fcc +0x060:  movl   $0x0,0xc(%esp)
085d7fd4 +0x068:  movl   $0x6c2,0x8(%esp)
085d7fdc +0x070:  movl   $&_ZZN8PvP_Room10leave_roomEP5CUserRbE19__PRETTY_FUNCTION__,0x4(%esp)
085d7fe4 +0x078:  lea    -0x30(%ebp),%eax
085d7fe7 +0x07b:  mov    %eax,(%esp)
085d7fea +0x07e:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d7fef +0x083:  mov    -0x44(%ebp),%eax
085d7ff2 +0x086:  mov    %eax,0x1c(%esp)
085d7ff6 +0x08a:  mov    -0x40(%ebp),%eax
085d7ff9 +0x08d:  mov    %eax,0x18(%esp)
085d7ffd +0x091:  mov    -0x3c(%ebp),%eax
085d8000 +0x094:  mov    %eax,0x14(%esp)
085d8004 +0x098:  mov    %edi,0x10(%esp)
085d8008 +0x09c:  mov    %esi,0xc(%esp)
085d800c +0x0a0:  mov    %ebx,0x8(%esp)
085d8010 +0x0a4:  movl   $"pvp@log %s,%s,room(%d),%d,%d,%d",0x4(%esp)
085d8018 +0x0ac:  lea    -0x30(%ebp),%eax
085d801b +0x0af:  mov    %eax,(%esp)
085d801e +0x0b2:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d8023 +0x0b7:  mov    0x8(%ebp),%eax
085d8026 +0x0ba:  mov    %eax,(%esp)
085d8029 +0x0bd:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d802e +0x0c2:  mov    0x8(%ebp),%eax
085d8031 +0x0c5:  mov    0x28(%eax),%eax
085d8034 +0x0c8:  cmp    0xc(%ebp),%eax
085d8037 +0x0cb:  jne    085d804a <+0xde>
085d8039 +0x0cd:  mov    0x8(%ebp),%eax
085d803c +0x0d0:  mov    %eax,(%esp)
085d803f +0x0d3:  call   085d7ef4 <_ZN8PvP_Room18select_new_managerEv>  ; PvP_Room::select_new_manager()
085d8044 +0x0d8:  mov    0x10(%ebp),%eax
085d8047 +0x0db:  movb   $0x1,(%eax)
085d804a +0x0de:  mov    0xc(%ebp),%eax
085d804d +0x0e1:  mov    %eax,0x4(%esp)
085d8051 +0x0e5:  mov    0x8(%ebp),%eax
085d8054 +0x0e8:  mov    %eax,(%esp)
085d8057 +0x0eb:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085d805c +0x0f0:  mov    %eax,-0x20(%ebp)
085d805f +0x0f3:  cmpl   $0x0,-0x20(%ebp)
085d8063 +0x0f7:  jns    085d806f <+0x103>
085d8065 +0x0f9:  mov    $0xffffffff,%eax
085d806a +0x0fe:  jmp    085d81c8 <+0x25c>
085d806f +0x103:  mov    0x8(%ebp),%eax
085d8072 +0x106:  mov    %eax,(%esp)
085d8075 +0x109:  call   085df946 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1cd>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1cd
085d807a +0x10e:  cmp    $0x2,%eax
085d807d +0x111:  sete   %al
085d8080 +0x114:  test   %al,%al
085d8082 +0x116:  je     085d8096 <+0x12a>
085d8084 +0x118:  mov    0xc(%ebp),%eax
085d8087 +0x11b:  mov    %eax,0x4(%esp)
085d808b +0x11f:  mov    0x8(%ebp),%eax
085d808e +0x122:  mov    %eax,(%esp)
085d8091 +0x125:  call   085dcaf2 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser>  ; PvP_Room::GiveOuterPenalty(CUser*)
085d8096 +0x12a:  mov    -0x20(%ebp),%eax
085d8099 +0x12d:  mov    %eax,0x4(%esp)
085d809d +0x131:  mov    0x8(%ebp),%eax
085d80a0 +0x134:  mov    %eax,(%esp)
085d80a3 +0x137:  call   085d9272 <_ZN8PvP_Room8get_teamEi>  ; PvP_Room::get_team(int)
085d80a8 +0x13c:  mov    %eax,-0x1c(%ebp)
085d80ab +0x13f:  movl   $0xffffffff,0x4(%esp)
085d80b3 +0x147:  mov    0xc(%ebp),%eax
085d80b6 +0x14a:  mov    %eax,(%esp)
085d80b9 +0x14d:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d80be +0x152:  mov    -0x20(%ebp),%eax
085d80c1 +0x155:  mov    0x8(%ebp),%edx
085d80c4 +0x158:  movb   $0x0,0x70(%edx,%eax,1)
085d80c9 +0x15d:  mov    -0x20(%ebp),%edx
085d80cc +0x160:  mov    0x8(%ebp),%eax
085d80cf +0x163:  add    $0x14,%edx
085d80d2 +0x166:  movl   $0xff,(%eax,%edx,4)
085d80d9 +0x16d:  mov    -0x20(%ebp),%edx
085d80dc +0x170:  mov    0x8(%ebp),%eax
085d80df +0x173:  add    $0xc,%edx
085d80e2 +0x176:  movl   $0x0,(%eax,%edx,4)
085d80e9 +0x17d:  mov    0x8(%ebp),%eax
085d80ec +0x180:  mov    0x600(%eax),%eax
085d80f2 +0x186:  lea    -0x1(%eax),%edx
085d80f5 +0x189:  mov    0x8(%ebp),%eax
085d80f8 +0x18c:  mov    %edx,0x600(%eax)
085d80fe +0x192:  mov    -0x20(%ebp),%eax
085d8101 +0x195:  mov    0x8(%ebp),%edx
085d8104 +0x198:  movb   $0x0,0x5c8(%edx,%eax,1)
085d810c +0x1a0:  mov    -0x20(%ebp),%eax
085d810f +0x1a3:  mov    0x8(%ebp),%edx
085d8112 +0x1a6:  movb   $0x0,0x5d0(%edx,%eax,1)
085d811a +0x1ae:  mov    0x8(%ebp),%eax
085d811d +0x1b1:  mov    %eax,(%esp)
085d8120 +0x1b4:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d8125 +0x1b9:  mov    0xc(%ebp),%eax
085d8128 +0x1bc:  mov    %eax,(%esp)
085d812b +0x1bf:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085d8130 +0x1c4:  mov    %eax,(%esp)
085d8133 +0x1c7:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
085d8138 +0x1cc:  mov    0xc(%ebp),%eax
085d813b +0x1cf:  mov    %eax,(%esp)
085d813e +0x1d2:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085d8143 +0x1d7:  mov    %eax,(%esp)
085d8146 +0x1da:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
085d814b +0x1df:  mov    0x8(%ebp),%eax
085d814e +0x1e2:  mov    0xb8(%eax),%eax
085d8154 +0x1e8:  cmp    $0x2,%eax
085d8157 +0x1eb:  jne    085d8173 <+0x207>
085d8159 +0x1ed:  mov    0x8(%ebp),%eax
085d815c +0x1f0:  mov    %eax,(%esp)
085d815f +0x1f3:  call   085d96ec <_ZN8PvP_Room12check_winnerEv>  ; PvP_Room::check_winner()
085d8164 +0x1f8:  test   %al,%al
085d8166 +0x1fa:  je     085d8173 <+0x207>
085d8168 +0x1fc:  mov    0x8(%ebp),%eax
085d816b +0x1ff:  mov    %eax,(%esp)
085d816e +0x202:  call   085dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>  ; PvP_Room::pvp_request_pvp_rank()
085d8173 +0x207:  mov    0x8(%ebp),%eax
085d8176 +0x20a:  lea    0x620(%eax),%edx
085d817c +0x210:  mov    -0x20(%ebp),%eax
085d817f +0x213:  mov    %eax,0x4(%esp)
085d8183 +0x217:  mov    %edx,(%esp)
085d8186 +0x21a:  call   085de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>  ; CRelayBattleMgr::OnLeaveRoom(int)
085d818b +0x21f:  mov    0x8(%ebp),%eax
085d818e +0x222:  mov    0x6e4(%eax),%eax
085d8194 +0x228:  mov    (%eax),%eax
085d8196 +0x22a:  add    $0x2c,%eax
085d8199 +0x22d:  mov    (%eax),%ecx
085d819b +0x22f:  mov    0x8(%ebp),%eax
085d819e +0x232:  mov    0x6e4(%eax),%eax
085d81a4 +0x238:  mov    -0x20(%ebp),%edx
085d81a7 +0x23b:  mov    %edx,0x10(%esp)
085d81ab +0x23f:  mov    -0x1c(%ebp),%edx
085d81ae +0x242:  mov    %edx,0xc(%esp)
085d81b2 +0x246:  mov    0x8(%ebp),%edx
085d81b5 +0x249:  mov    %edx,0x8(%esp)
085d81b9 +0x24d:  mov    0xc(%ebp),%edx
085d81bc +0x250:  mov    %edx,0x4(%esp)
085d81c0 +0x254:  mov    %eax,(%esp)
085d81c3 +0x257:  call   *%ecx
085d81c5 +0x259:  mov    -0x20(%ebp),%eax
085d81c8 +0x25c:  add    $0x5c,%esp
085d81cb +0x25f:  pop    %ebx
085d81cc +0x260:  pop    %esi
085d81cd +0x261:  pop    %edi
085d81ce +0x262:  pop    %ebp
085d81cf +0x263:  ret
```

## 反编译 C

```c
// PvP_Room::leave_room @ 0x85d7f6c

/* PvP_Room::leave_room(CUser*, bool&) */

int __thiscall PvP_Room::leave_room(PvP_Room *this,CUser *param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  CHackAnalyzer *this_00;
  CSwitchLog local_34 [16];
  int local_24;
  undefined4 local_20;
  
  uVar3 = get_waiter_count(this);
  bVar1 = *param_2;
  uVar4 = get_pvp_battle_mode(this);
  uVar5 = get_index(this);
  uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_34,"int PvP_Room::leave_room(CUser*, bool&)",0x6c2,0,0);
  CSwitchLog::operator()
            (local_34,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar5,uVar4,(uint)bVar1,uVar3);
  lock();
  if (*(CUser **)(this + 0x28) == param_1) {
    select_new_manager(this);
    *param_2 = true;
  }
  local_24 = get_user_seat(this,param_1);
  if (local_24 < 0) {
    local_24 = -1;
  }
  else {
    iVar8 = get_state(this);
    if (iVar8 == 2) {
      GiveOuterPenalty(this,param_1);
    }
    local_20 = get_team(this,local_24);
    CUser::SetPvpIndex(param_1,-1);
    this[local_24 + 0x70] = (PvP_Room)0x0;
    *(undefined4 *)(this + (local_24 + 0x14) * 4) = 0xff;
    *(undefined4 *)(this + (local_24 + 0xc) * 4) = 0;
    *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
    this[local_24 + 0x5c8] = (PvP_Room)0x0;
    this[local_24 + 0x5d0] = (PvP_Room)0x0;
    unlock();
    CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::reportHackInfo();
    this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::resetHackInfo(this_00);
    if (*(int *)(this + 0xb8) == 2) {
      cVar2 = check_winner(this);
      if (cVar2 != '\0') {
        pvp_request_pvp_rank(this);
      }
    }
    CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),local_24);
    (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
              (*(undefined4 *)(this + 0x6e4),param_1,this,local_20,local_24);
  }
  return local_24;
}
```
