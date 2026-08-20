# CheckOutPvp

`_ZN12CGameManager11CheckOutPvpEP5CUserb`

`CGameManager::CheckOutPvp(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08297eaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08297eaa  _ZN12CGameManager11CheckOutPvpEP5CUserb
#           CGameManager::CheckOutPvp(CUser*, bool)
# range [0x08297eaa, 0x082981a3]
08297eaa +0x000:  push   %ebp
08297eab +0x001:  mov    %esp,%ebp
08297ead +0x003:  push   %edi
08297eae +0x004:  push   %esi
08297eaf +0x005:  push   %ebx
08297eb0 +0x006:  sub    $0x6c,%esp
08297eb3 +0x009:  mov    0x10(%ebp),%eax
08297eb6 +0x00c:  mov    %al,-0x4c(%ebp)
08297eb9 +0x00f:  mov    0xc(%ebp),%eax
08297ebc +0x012:  mov    %eax,(%esp)
08297ebf +0x015:  call   0822fe5e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5508>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5508
08297ec4 +0x01a:  xor    $0x1,%eax
08297ec7 +0x01d:  test   %al,%al
08297ec9 +0x01f:  jne    08298197 <+0x2ed>
08297ecf +0x025:  mov    0xc(%ebp),%eax
08297ed2 +0x028:  mov    %eax,(%esp)
08297ed5 +0x02b:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
08297eda +0x030:  cwtl
08297edb +0x031:  movl   $0x0,0xc(%esp)
08297ee3 +0x039:  mov    0xc(%ebp),%edx
08297ee6 +0x03c:  mov    %edx,0x8(%esp)
08297eea +0x040:  mov    %eax,0x4(%esp)
08297eee +0x044:  mov    0x8(%ebp),%eax
08297ef1 +0x047:  mov    %eax,(%esp)
08297ef4 +0x04a:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08297ef9 +0x04f:  mov    %eax,-0x20(%ebp)
08297efc +0x052:  cmpl   $0x0,-0x20(%ebp)
08297f00 +0x056:  je     0829819a <+0x2f0>
08297f06 +0x05c:  lea    -0x3c(%ebp),%eax
08297f09 +0x05f:  mov    %eax,(%esp)
08297f0c +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08297f11 +0x067:  movb   $0x0,-0x3d(%ebp)
08297f15 +0x06b:  lea    -0x3d(%ebp),%eax
08297f18 +0x06e:  mov    %eax,0x8(%esp)
08297f1c +0x072:  mov    0xc(%ebp),%eax
08297f1f +0x075:  mov    %eax,0x4(%esp)
08297f23 +0x079:  mov    -0x20(%ebp),%eax
08297f26 +0x07c:  mov    %eax,(%esp)
08297f29 +0x07f:  call   085d7f6c <_ZN8PvP_Room10leave_roomEP5CUserRb>  ; PvP_Room::leave_room(CUser*, bool&)
08297f2e +0x084:  mov    %eax,-0x1c(%ebp)
08297f31 +0x087:  movzbl -0x3d(%ebp),%eax
08297f35 +0x08b:  movzbl %al,%eax
08297f38 +0x08e:  mov    %eax,-0x54(%ebp)
08297f3b +0x091:  mov    -0x20(%ebp),%eax
08297f3e +0x094:  mov    %eax,(%esp)
08297f41 +0x097:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
08297f46 +0x09c:  mov    %eax,-0x50(%ebp)
08297f49 +0x09f:  mov    -0x20(%ebp),%eax
08297f4c +0x0a2:  mov    %eax,(%esp)
08297f4f +0x0a5:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08297f54 +0x0aa:  mov    %eax,%edi
08297f56 +0x0ac:  mov    0xc(%ebp),%eax
08297f59 +0x0af:  mov    %eax,(%esp)
08297f5c +0x0b2:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08297f61 +0x0b7:  mov    %eax,%esi
08297f63 +0x0b9:  mov    0xc(%ebp),%eax
08297f66 +0x0bc:  mov    %eax,(%esp)
08297f69 +0x0bf:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08297f6e +0x0c4:  mov    %eax,%ebx
08297f70 +0x0c6:  movl   $0x0,0x10(%esp)
08297f78 +0x0ce:  movl   $0x0,0xc(%esp)
08297f80 +0x0d6:  movl   $0x11a1,0x8(%esp)
08297f88 +0x0de:  movl   $&_ZZN12CGameManager11CheckOutPvpEP5CUserbE19__PRETTY_FUNCTION__,0x4(%esp)
08297f90 +0x0e6:  lea    -0x30(%ebp),%eax
08297f93 +0x0e9:  mov    %eax,(%esp)
08297f96 +0x0ec:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08297f9b +0x0f1:  mov    -0x54(%ebp),%eax
08297f9e +0x0f4:  mov    %eax,0x18(%esp)
08297fa2 +0x0f8:  mov    -0x50(%ebp),%eax
08297fa5 +0x0fb:  mov    %eax,0x14(%esp)
08297fa9 +0x0ff:  mov    %edi,0x10(%esp)
08297fad +0x103:  mov    %esi,0xc(%esp)
08297fb1 +0x107:  mov    %ebx,0x8(%esp)
08297fb5 +0x10b:  movl   $"pvp@log %s,%s, room(%d),%d,%d",0x4(%esp)
08297fbd +0x113:  lea    -0x30(%ebp),%eax
08297fc0 +0x116:  mov    %eax,(%esp)
08297fc3 +0x119:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08297fc8 +0x11e:  cmpl   $0x0,-0x1c(%ebp)
08297fcc +0x122:  js     082980b3 <+0x209>
08297fd2 +0x128:  lea    -0x3c(%ebp),%eax
08297fd5 +0x12b:  mov    %eax,(%esp)
08297fd8 +0x12e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08297fdd +0x133:  lea    -0x3c(%ebp),%eax
08297fe0 +0x136:  mov    -0x1c(%ebp),%edx
08297fe3 +0x139:  mov    %edx,0x8(%esp)
08297fe7 +0x13d:  mov    %eax,0x4(%esp)
08297feb +0x141:  mov    -0x20(%ebp),%eax
08297fee +0x144:  mov    %eax,(%esp)
08297ff1 +0x147:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
08297ff6 +0x14c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08297ffb +0x151:  lea    -0x3c(%ebp),%edx
08297ffe +0x154:  mov    %edx,0x4(%esp)
08298002 +0x158:  mov    %eax,(%esp)
08298005 +0x15b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0829800a +0x160:  movzbl -0x3d(%ebp),%eax
0829800e +0x164:  test   %al,%al
08298010 +0x166:  je     08298043 <+0x199>
08298012 +0x168:  lea    -0x3c(%ebp),%eax
08298015 +0x16b:  mov    %eax,(%esp)
08298018 +0x16e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0829801d +0x173:  lea    -0x3c(%ebp),%eax
08298020 +0x176:  mov    %eax,0x4(%esp)
08298024 +0x17a:  mov    -0x20(%ebp),%eax
08298027 +0x17d:  mov    %eax,(%esp)
0829802a +0x180:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
0829802f +0x185:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08298034 +0x18a:  lea    -0x3c(%ebp),%edx
08298037 +0x18d:  mov    %edx,0x4(%esp)
0829803b +0x191:  mov    %eax,(%esp)
0829803e +0x194:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08298043 +0x199:  mov    -0x20(%ebp),%eax
08298046 +0x19c:  mov    %eax,(%esp)
08298049 +0x19f:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
0829804e +0x1a4:  test   %eax,%eax
08298050 +0x1a6:  sete   %al
08298053 +0x1a9:  test   %al,%al
08298055 +0x1ab:  je     0829810f <+0x265>
0829805b +0x1b1:  movl   $0x0,0x4(%esp)
08298063 +0x1b9:  mov    -0x20(%ebp),%eax
08298066 +0x1bc:  mov    %eax,(%esp)
08298069 +0x1bf:  call   085d81d0 <_ZN8PvP_Room12destroy_roomEi>  ; PvP_Room::destroy_room(int)
0829806e +0x1c4:  mov    -0x20(%ebp),%eax
08298071 +0x1c7:  mov    %eax,0x4(%esp)
08298075 +0x1cb:  mov    0x8(%ebp),%eax
08298078 +0x1ce:  mov    %eax,(%esp)
0829807b +0x1d1:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
08298080 +0x1d6:  lea    -0x3c(%ebp),%eax
08298083 +0x1d9:  mov    %eax,(%esp)
08298086 +0x1dc:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0829808b +0x1e1:  lea    -0x3c(%ebp),%eax
0829808e +0x1e4:  mov    %eax,0x4(%esp)
08298092 +0x1e8:  mov    -0x20(%ebp),%eax
08298095 +0x1eb:  mov    %eax,(%esp)
08298098 +0x1ee:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
0829809d +0x1f3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082980a2 +0x1f8:  lea    -0x3c(%ebp),%edx
082980a5 +0x1fb:  mov    %edx,0x4(%esp)
082980a9 +0x1ff:  mov    %eax,(%esp)
082980ac +0x202:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082980b1 +0x207:  jmp    0829810f <+0x265>
082980b3 +0x209:  mov    0xc(%ebp),%eax
082980b6 +0x20c:  mov    %eax,(%esp)
082980b9 +0x20f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082980be +0x214:  movl   $0x0,0x4(%esp)
082980c6 +0x21c:  mov    %eax,(%esp)
082980c9 +0x21f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082980ce +0x224:  mov    %eax,%ebx
082980d0 +0x226:  mov    -0x20(%ebp),%eax
082980d3 +0x229:  mov    %eax,(%esp)
082980d6 +0x22c:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
082980db +0x231:  mov    %ebx,0x18(%esp)
082980df +0x235:  mov    %eax,0x14(%esp)
082980e3 +0x239:  movl   $"없는유저 PVPOut처리 ID[%d] ACCID[%s]",0x10(%esp)
082980eb +0x241:  movl   $0x11bd,0xc(%esp)
082980f3 +0x249:  movl   $&_ZZN12CGameManager11CheckOutPvpEP5CUserbE19__PRETTY_FUNCTION__,0x8(%esp)
082980fb +0x251:  movl   $"App.cpp",0x4(%esp)
08298103 +0x259:  movl   $0x1,(%esp)
0829810a +0x260:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829810f +0x265:  movzbl -0x4c(%ebp),%eax
08298113 +0x269:  xor    $0x1,%eax
08298116 +0x26c:  test   %al,%al
08298118 +0x26e:  je     0829818a <+0x2e0>
0829811a +0x270:  mov    -0x20(%ebp),%eax
0829811d +0x273:  mov    %eax,(%esp)
08298120 +0x276:  call   085dc2cc <_ZN8PvP_Room23get_recv_pvp_rank_countEv>  ; PvP_Room::get_recv_pvp_rank_count()
08298125 +0x27b:  test   %eax,%eax
08298127 +0x27d:  setg   %al
0829812a +0x280:  test   %al,%al
0829812c +0x282:  je     0829818a <+0x2e0>
0829812e +0x284:  mov    -0x20(%ebp),%eax
08298131 +0x287:  mov    %eax,(%esp)
08298134 +0x28a:  call   082a4322 <_GLOBAL__I__ZN4CLog5this_E+0x749>  ; global constructors keyed to CLog::this_+0x749
08298139 +0x28f:  xor    $0x1,%eax
0829813c +0x292:  test   %al,%al
0829813e +0x294:  je     08298159 <+0x2af>
08298140 +0x296:  mov    -0x20(%ebp),%eax
08298143 +0x299:  mov    %eax,(%esp)
08298146 +0x29c:  call   082a4332 <_GLOBAL__I__ZN4CLog5this_E+0x759>  ; global constructors keyed to CLog::this_+0x759
0829814b +0x2a1:  xor    $0x1,%eax
0829814e +0x2a4:  test   %al,%al
08298150 +0x2a6:  je     08298159 <+0x2af>
08298152 +0x2a8:  mov    $0x1,%eax
08298157 +0x2ad:  jmp    0829815e <+0x2b4>
08298159 +0x2af:  mov    $0x0,%eax
0829815e +0x2b4:  test   %al,%al
08298160 +0x2b6:  je     0829818a <+0x2e0>
08298162 +0x2b8:  mov    -0x20(%ebp),%eax
08298165 +0x2bb:  mov    %eax,(%esp)
08298168 +0x2be:  call   085dc476 <_ZN8PvP_Room12send_pvp_endEv>  ; PvP_Room::send_pvp_end()
0829816d +0x2c3:  jmp    0829818a <+0x2e0>
0829816f +0x2c5:  mov    %edx,%ebx
08298171 +0x2c7:  mov    %eax,%esi
08298173 +0x2c9:  lea    -0x3c(%ebp),%eax
08298176 +0x2cc:  mov    %eax,(%esp)
08298179 +0x2cf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0829817e +0x2d4:  mov    %esi,%eax
08298180 +0x2d6:  mov    %ebx,%edx
08298182 +0x2d8:  mov    %eax,(%esp)
08298185 +0x2db:  call   08ae3750 <_Unwind_Resume>
0829818a +0x2e0:  lea    -0x3c(%ebp),%eax
0829818d +0x2e3:  mov    %eax,(%esp)
08298190 +0x2e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08298195 +0x2eb:  jmp    0829819b <+0x2f1>
08298197 +0x2ed:  nop
08298198 +0x2ee:  jmp    0829819b <+0x2f1>
0829819a +0x2f0:  nop
0829819b +0x2f1:  add    $0x6c,%esp
0829819e +0x2f4:  pop    %ebx
0829819f +0x2f5:  pop    %esi
082981a0 +0x2f6:  pop    %edi
082981a1 +0x2f7:  pop    %ebp
082981a2 +0x2f8:  ret
082981a3 +0x2f9:  nop
```

## 反编译 C

```c
// CGameManager::CheckOutPvp @ 0x8297eaa

/* CGameManager::CheckOutPvp(CUser*, bool) */

void __thiscall CGameManager::CheckOutPvp(CGameManager *this,CUser *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  GameWorld *pGVar9;
  int iVar10;
  bool local_41;
  PacketGuard local_40 [12];
  CSwitchLog local_34 [16];
  PvP_Room *local_24;
  int local_20;
  
  cVar2 = CUser::CheckInPvp(param_1);
  if (cVar2 == '\x01') {
    sVar3 = CUser::GetPvpIndex(param_1);
    local_24 = (PvP_Room *)GetPvp(this,(int)sVar3,param_1,0);
    if (local_24 != (PvP_Room *)0x0) {
      PacketGuard::PacketGuard(local_40);
      local_41 = false;
                    /* try { // try from 08297f29 to 0829816c has its CatchHandler @ 0829816f */
      local_20 = PvP_Room::leave_room(local_24,param_1,&local_41);
      uVar4 = (uint)local_41;
      uVar5 = PvP_Room::get_pvp_battle_mode(local_24);
      uVar6 = PvP_Room::get_index(local_24);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar8 = CUser::get_acc_name(param_1);
      CSwitchLog::CSwitchLog(local_34,"void CGameManager::CheckOutPvp(CUser*, bool)",0x11a1,0,0);
      CSwitchLog::operator()(local_34,"pvp@log %s,%s, room(%d),%d,%d",uVar8,uVar7,uVar6,uVar5,uVar4)
      ;
      if (local_20 < 0) {
        uVar4 = CUser::get_acc_id(param_1);
        uVar5 = NumberToString(uVar4,0);
        uVar6 = PvP_Room::get_index(local_24);
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::CheckOutPvp(CUser*, bool)",0x11bd,&DAT_08c16f94,
                   uVar6,uVar5);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
        PvP_Room::make_seat_info(local_24,(char *)local_40,local_20);
        pGVar9 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar9,local_40);
        if (local_41 != false) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
          PvP_Room::make_state_info(local_24,(char *)local_40);
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar9,local_40);
        }
        iVar10 = PvP_Room::get_waiter_count(local_24);
        if (iVar10 == 0) {
          PvP_Room::destroy_room(local_24,0);
          PutPvp(this,local_24);
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_40);
          PvP_Room::make_state_info(local_24,(char *)local_40);
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar9,local_40);
        }
      }
      if ((!param_2) && (iVar10 = PvP_Room::get_recv_pvp_rank_count(local_24), 0 < iVar10)) {
        cVar2 = PvP_Room::IsInsertTimerRecvPvpRank(local_24);
        if ((cVar2 == '\x01') || (cVar2 = PvP_Room::IsEndPvpBattle(local_24), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          PvP_Room::send_pvp_end(local_24);
        }
      }
      PacketGuard::~PacketGuard(local_40);
    }
  }
  return;
}
```
