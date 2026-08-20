# _PutInRoom

`_ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb`

`fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085634bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085634bc  _ZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_Roomb
#           fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)
# range [0x085634bc, 0x08563673]
085634bc +0x000:  push   %ebp
085634bd +0x001:  mov    %esp,%ebp
085634bf +0x003:  push   %edi
085634c0 +0x004:  push   %esi
085634c1 +0x005:  push   %ebx
085634c2 +0x006:  sub    $0x6c,%esp
085634c5 +0x009:  mov    0x14(%ebp),%eax
085634c8 +0x00c:  mov    %al,-0x4c(%ebp)
085634cb +0x00f:  lea    -0x38(%ebp),%eax
085634ce +0x012:  mov    %eax,(%esp)
085634d1 +0x015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085634d6 +0x01a:  movl   $0x0,-0x3c(%ebp)
085634dd +0x021:  movzbl -0x4c(%ebp),%eax
085634e1 +0x025:  mov    %eax,0xc(%esp)
085634e5 +0x029:  lea    -0x3c(%ebp),%eax
085634e8 +0x02c:  mov    %eax,0x8(%esp)
085634ec +0x030:  mov    0xc(%ebp),%eax
085634ef +0x033:  mov    %eax,0x4(%esp)
085634f3 +0x037:  mov    0x10(%ebp),%eax
085634f6 +0x03a:  mov    %eax,(%esp)
085634f9 +0x03d:  call   085d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>  ; PvP_Room::join_room(CUser*, int&, bool)
085634fe +0x042:  mov    %eax,-0x1c(%ebp)
08563501 +0x045:  mov    0x10(%ebp),%eax
08563504 +0x048:  mov    %eax,(%esp)
08563507 +0x04b:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
0856350c +0x050:  mov    %eax,-0x50(%ebp)
0856350f +0x053:  mov    0x10(%ebp),%eax
08563512 +0x056:  mov    %eax,(%esp)
08563515 +0x059:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
0856351a +0x05e:  mov    %eax,%edi
0856351c +0x060:  mov    0xc(%ebp),%eax
0856351f +0x063:  mov    %eax,(%esp)
08563522 +0x066:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08563527 +0x06b:  mov    %eax,%esi
08563529 +0x06d:  mov    0xc(%ebp),%eax
0856352c +0x070:  mov    %eax,(%esp)
0856352f +0x073:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08563534 +0x078:  mov    %eax,%ebx
08563536 +0x07a:  movl   $0x0,0x10(%esp)
0856353e +0x082:  movl   $0x0,0xc(%esp)
08563546 +0x08a:  movl   $0xb6a,0x8(%esp)
0856354e +0x092:  movl   $&_ZZN8fair_pvp10CFairMatch10_PutInRoomEP5CUserP8PvP_RoombE19__PRETTY_FUNCTION__,0x4(%esp)
08563556 +0x09a:  lea    -0x2c(%ebp),%eax
08563559 +0x09d:  mov    %eax,(%esp)
0856355c +0x0a0:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08563561 +0x0a5:  mov    -0x1c(%ebp),%eax
08563564 +0x0a8:  mov    %eax,0x18(%esp)
08563568 +0x0ac:  mov    -0x50(%ebp),%eax
0856356b +0x0af:  mov    %eax,0x14(%esp)
0856356f +0x0b3:  mov    %edi,0x10(%esp)
08563573 +0x0b7:  mov    %esi,0xc(%esp)
08563577 +0x0bb:  mov    %ebx,0x8(%esp)
0856357b +0x0bf:  movl   $"pvp@log %s,%s,room(%d),%d,%d",0x4(%esp)
08563583 +0x0c7:  lea    -0x2c(%ebp),%eax
08563586 +0x0ca:  mov    %eax,(%esp)
08563589 +0x0cd:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0856358e +0x0d2:  cmpl   $0x0,-0x1c(%ebp)
08563592 +0x0d6:  jle    085635fe <+0x142>
08563594 +0x0d8:  movl   $0x36,0x8(%esp)
0856359c +0x0e0:  movl   $0x1,0x4(%esp)
085635a4 +0x0e8:  lea    -0x38(%ebp),%eax
085635a7 +0x0eb:  mov    %eax,(%esp)
085635aa +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085635af +0x0f3:  movl   $0x0,0x4(%esp)
085635b7 +0x0fb:  lea    -0x38(%ebp),%eax
085635ba +0x0fe:  mov    %eax,(%esp)
085635bd +0x101:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085635c2 +0x106:  mov    -0x1c(%ebp),%eax
085635c5 +0x109:  mov    %eax,0x4(%esp)
085635c9 +0x10d:  lea    -0x38(%ebp),%eax
085635cc +0x110:  mov    %eax,(%esp)
085635cf +0x113:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085635d4 +0x118:  movl   $0x1,0x4(%esp)
085635dc +0x120:  lea    -0x38(%ebp),%eax
085635df +0x123:  mov    %eax,(%esp)
085635e2 +0x126:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085635e7 +0x12b:  lea    -0x38(%ebp),%eax
085635ea +0x12e:  mov    %eax,0x4(%esp)
085635ee +0x132:  mov    0xc(%ebp),%eax
085635f1 +0x135:  mov    %eax,(%esp)
085635f4 +0x138:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085635f9 +0x13d:  mov    -0x3c(%ebp),%ebx
085635fc +0x140:  jmp    0856365f <+0x1a3>
085635fe +0x142:  mov    -0x3c(%ebp),%edx
08563601 +0x145:  lea    -0x38(%ebp),%eax
08563604 +0x148:  mov    %edx,0x8(%esp)
08563608 +0x14c:  mov    %eax,0x4(%esp)
0856360c +0x150:  mov    0x10(%ebp),%eax
0856360f +0x153:  mov    %eax,(%esp)
08563612 +0x156:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
08563617 +0x15b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0856361c +0x160:  lea    -0x38(%ebp),%edx
0856361f +0x163:  mov    %edx,0x4(%esp)
08563623 +0x167:  mov    %eax,(%esp)
08563626 +0x16a:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0856362b +0x16f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08563630 +0x174:  mov    0xc(%ebp),%edx
08563633 +0x177:  mov    %edx,0x4(%esp)
08563637 +0x17b:  mov    %eax,(%esp)
0856363a +0x17e:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
0856363f +0x183:  mov    -0x3c(%ebp),%ebx
08563642 +0x186:  jmp    0856365f <+0x1a3>
08563644 +0x188:  mov    %edx,%ebx
08563646 +0x18a:  mov    %eax,%esi
08563648 +0x18c:  lea    -0x38(%ebp),%eax
0856364b +0x18f:  mov    %eax,(%esp)
0856364e +0x192:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08563653 +0x197:  mov    %esi,%eax
08563655 +0x199:  mov    %ebx,%edx
08563657 +0x19b:  mov    %eax,(%esp)
0856365a +0x19e:  call   08ae3750 <_Unwind_Resume>
0856365f +0x1a3:  lea    -0x38(%ebp),%eax
08563662 +0x1a6:  mov    %eax,(%esp)
08563665 +0x1a9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0856366a +0x1ae:  mov    %ebx,%eax
0856366c +0x1b0:  add    $0x6c,%esp
0856366f +0x1b3:  pop    %ebx
08563670 +0x1b4:  pop    %esi
08563671 +0x1b5:  pop    %edi
08563672 +0x1b6:  pop    %ebp
08563673 +0x1b7:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::_PutInRoom @ 0x85634bc

/* fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
fair_pvp::CFairMatch::_PutInRoom(CFairMatch *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GameWorld *pGVar6;
  int local_40;
  PacketGuard local_3c [12];
  CSwitchLog local_30 [16];
  int local_20;
  
  PacketGuard::PacketGuard(local_3c);
  local_40 = 0;
                    /* try { // try from 085634f9 to 0856363e has its CatchHandler @ 08563644 */
  local_20 = PvP_Room::join_room(param_2,param_1,&local_40,param_3);
  uVar2 = PvP_Room::get_pvp_battle_mode(param_2);
  uVar3 = PvP_Room::get_index(param_2);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog
            (local_30,"int fair_pvp::CFairMatch::_PutInRoom(CUser*, PvP_Room*, bool)",0xb6a,0,0);
  CSwitchLog::operator()(local_30,"pvp@log %s,%s,room(%d),%d,%d",uVar5,uVar4,uVar3,uVar2,local_20);
  if (local_20 < 1) {
    PvP_Room::make_seat_info(param_2,(char *)local_3c,local_40);
    pGVar6 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar6,local_3c);
    pGVar6 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar6,param_1);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x36);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,local_20);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
  }
  iVar1 = local_40;
  PacketGuard::~PacketGuard(local_3c);
  return iVar1;
}
```
