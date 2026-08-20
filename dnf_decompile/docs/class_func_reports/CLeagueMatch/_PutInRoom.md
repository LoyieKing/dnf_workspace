# _PutInRoom

`_ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb`

`CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d42a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d42a  _ZN12CLeagueMatch10_PutInRoomEP5CUserP8PvP_Roomb
#           CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool)
# range [0x0855d42a, 0x0855d553]
0855d42a +0x000:  push   %ebp
0855d42b +0x001:  mov    %esp,%ebp
0855d42d +0x003:  push   %esi
0855d42e +0x004:  push   %ebx
0855d42f +0x005:  sub    $0x40,%esp
0855d432 +0x008:  mov    0x14(%ebp),%eax
0855d435 +0x00b:  mov    %al,-0x2c(%ebp)
0855d438 +0x00e:  lea    -0x18(%ebp),%eax
0855d43b +0x011:  mov    %eax,(%esp)
0855d43e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855d443 +0x019:  movl   $0x0,-0x1c(%ebp)
0855d44a +0x020:  movzbl -0x2c(%ebp),%eax
0855d44e +0x024:  mov    %eax,0xc(%esp)
0855d452 +0x028:  lea    -0x1c(%ebp),%eax
0855d455 +0x02b:  mov    %eax,0x8(%esp)
0855d459 +0x02f:  mov    0xc(%ebp),%eax
0855d45c +0x032:  mov    %eax,0x4(%esp)
0855d460 +0x036:  mov    0x10(%ebp),%eax
0855d463 +0x039:  mov    %eax,(%esp)
0855d466 +0x03c:  call   085d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>  ; PvP_Room::join_room(CUser*, int&, bool)
0855d46b +0x041:  mov    %eax,-0xc(%ebp)
0855d46e +0x044:  cmpl   $0x0,-0xc(%ebp)
0855d472 +0x048:  jle    0855d4de <+0xb4>
0855d474 +0x04a:  movl   $0x36,0x8(%esp)
0855d47c +0x052:  movl   $0x1,0x4(%esp)
0855d484 +0x05a:  lea    -0x18(%ebp),%eax
0855d487 +0x05d:  mov    %eax,(%esp)
0855d48a +0x060:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855d48f +0x065:  movl   $0x0,0x4(%esp)
0855d497 +0x06d:  lea    -0x18(%ebp),%eax
0855d49a +0x070:  mov    %eax,(%esp)
0855d49d +0x073:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d4a2 +0x078:  mov    -0xc(%ebp),%eax
0855d4a5 +0x07b:  mov    %eax,0x4(%esp)
0855d4a9 +0x07f:  lea    -0x18(%ebp),%eax
0855d4ac +0x082:  mov    %eax,(%esp)
0855d4af +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855d4b4 +0x08a:  movl   $0x1,0x4(%esp)
0855d4bc +0x092:  lea    -0x18(%ebp),%eax
0855d4bf +0x095:  mov    %eax,(%esp)
0855d4c2 +0x098:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855d4c7 +0x09d:  lea    -0x18(%ebp),%eax
0855d4ca +0x0a0:  mov    %eax,0x4(%esp)
0855d4ce +0x0a4:  mov    0xc(%ebp),%eax
0855d4d1 +0x0a7:  mov    %eax,(%esp)
0855d4d4 +0x0aa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855d4d9 +0x0af:  mov    -0x1c(%ebp),%ebx
0855d4dc +0x0b2:  jmp    0855d53f <+0x115>
0855d4de +0x0b4:  mov    -0x1c(%ebp),%edx
0855d4e1 +0x0b7:  lea    -0x18(%ebp),%eax
0855d4e4 +0x0ba:  mov    %edx,0x8(%esp)
0855d4e8 +0x0be:  mov    %eax,0x4(%esp)
0855d4ec +0x0c2:  mov    0x10(%ebp),%eax
0855d4ef +0x0c5:  mov    %eax,(%esp)
0855d4f2 +0x0c8:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
0855d4f7 +0x0cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0855d4fc +0x0d2:  lea    -0x18(%ebp),%edx
0855d4ff +0x0d5:  mov    %edx,0x4(%esp)
0855d503 +0x0d9:  mov    %eax,(%esp)
0855d506 +0x0dc:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0855d50b +0x0e1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0855d510 +0x0e6:  mov    0xc(%ebp),%edx
0855d513 +0x0e9:  mov    %edx,0x4(%esp)
0855d517 +0x0ed:  mov    %eax,(%esp)
0855d51a +0x0f0:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
0855d51f +0x0f5:  mov    -0x1c(%ebp),%ebx
0855d522 +0x0f8:  jmp    0855d53f <+0x115>
0855d524 +0x0fa:  mov    %edx,%ebx
0855d526 +0x0fc:  mov    %eax,%esi
0855d528 +0x0fe:  lea    -0x18(%ebp),%eax
0855d52b +0x101:  mov    %eax,(%esp)
0855d52e +0x104:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855d533 +0x109:  mov    %esi,%eax
0855d535 +0x10b:  mov    %ebx,%edx
0855d537 +0x10d:  mov    %eax,(%esp)
0855d53a +0x110:  call   08ae3750 <_Unwind_Resume>
0855d53f +0x115:  lea    -0x18(%ebp),%eax
0855d542 +0x118:  mov    %eax,(%esp)
0855d545 +0x11b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855d54a +0x120:  mov    %ebx,%eax
0855d54c +0x122:  add    $0x40,%esp
0855d54f +0x125:  pop    %ebx
0855d550 +0x126:  pop    %esi
0855d551 +0x127:  pop    %ebp
0855d552 +0x128:  ret
0855d553 +0x129:  nop
```

## 反编译 C

```c
// CLeagueMatch::_PutInRoom @ 0x855d42a

/* CLeagueMatch::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
CLeagueMatch::_PutInRoom(CLeagueMatch *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  GameWorld *pGVar2;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_20 = 0;
                    /* try { // try from 0855d466 to 0855d51e has its CatchHandler @ 0855d524 */
  local_10 = PvP_Room::join_room(param_2,param_1,&local_20,param_3);
  if (local_10 < 1) {
    PvP_Room::make_seat_info(param_2,(char *)local_1c,local_20);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar2,local_1c);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar2,param_1);
  }
  else {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x36);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  iVar1 = local_20;
  PacketGuard::~PacketGuard(local_1c);
  return iVar1;
}
```
