# _PutInRoom

`_ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb`

`online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560e4a  _ZN18online_preliminary18COnlinePreliminary10_PutInRoomEP5CUserP8PvP_Roomb
#           online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool)
# range [0x08560e4a, 0x08560f73]
08560e4a +0x000:  push   %ebp
08560e4b +0x001:  mov    %esp,%ebp
08560e4d +0x003:  push   %esi
08560e4e +0x004:  push   %ebx
08560e4f +0x005:  sub    $0x40,%esp
08560e52 +0x008:  mov    0x14(%ebp),%eax
08560e55 +0x00b:  mov    %al,-0x2c(%ebp)
08560e58 +0x00e:  lea    -0x18(%ebp),%eax
08560e5b +0x011:  mov    %eax,(%esp)
08560e5e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08560e63 +0x019:  movl   $0x0,-0x1c(%ebp)
08560e6a +0x020:  movzbl -0x2c(%ebp),%eax
08560e6e +0x024:  mov    %eax,0xc(%esp)
08560e72 +0x028:  lea    -0x1c(%ebp),%eax
08560e75 +0x02b:  mov    %eax,0x8(%esp)
08560e79 +0x02f:  mov    0xc(%ebp),%eax
08560e7c +0x032:  mov    %eax,0x4(%esp)
08560e80 +0x036:  mov    0x10(%ebp),%eax
08560e83 +0x039:  mov    %eax,(%esp)
08560e86 +0x03c:  call   085d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>  ; PvP_Room::join_room(CUser*, int&, bool)
08560e8b +0x041:  mov    %eax,-0xc(%ebp)
08560e8e +0x044:  cmpl   $0x0,-0xc(%ebp)
08560e92 +0x048:  jle    08560efe <+0xb4>
08560e94 +0x04a:  movl   $0x36,0x8(%esp)
08560e9c +0x052:  movl   $0x1,0x4(%esp)
08560ea4 +0x05a:  lea    -0x18(%ebp),%eax
08560ea7 +0x05d:  mov    %eax,(%esp)
08560eaa +0x060:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08560eaf +0x065:  movl   $0x0,0x4(%esp)
08560eb7 +0x06d:  lea    -0x18(%ebp),%eax
08560eba +0x070:  mov    %eax,(%esp)
08560ebd +0x073:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08560ec2 +0x078:  mov    -0xc(%ebp),%eax
08560ec5 +0x07b:  mov    %eax,0x4(%esp)
08560ec9 +0x07f:  lea    -0x18(%ebp),%eax
08560ecc +0x082:  mov    %eax,(%esp)
08560ecf +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08560ed4 +0x08a:  movl   $0x1,0x4(%esp)
08560edc +0x092:  lea    -0x18(%ebp),%eax
08560edf +0x095:  mov    %eax,(%esp)
08560ee2 +0x098:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08560ee7 +0x09d:  lea    -0x18(%ebp),%eax
08560eea +0x0a0:  mov    %eax,0x4(%esp)
08560eee +0x0a4:  mov    0xc(%ebp),%eax
08560ef1 +0x0a7:  mov    %eax,(%esp)
08560ef4 +0x0aa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08560ef9 +0x0af:  mov    -0x1c(%ebp),%ebx
08560efc +0x0b2:  jmp    08560f5f <+0x115>
08560efe +0x0b4:  mov    -0x1c(%ebp),%edx
08560f01 +0x0b7:  lea    -0x18(%ebp),%eax
08560f04 +0x0ba:  mov    %edx,0x8(%esp)
08560f08 +0x0be:  mov    %eax,0x4(%esp)
08560f0c +0x0c2:  mov    0x10(%ebp),%eax
08560f0f +0x0c5:  mov    %eax,(%esp)
08560f12 +0x0c8:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
08560f17 +0x0cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08560f1c +0x0d2:  lea    -0x18(%ebp),%edx
08560f1f +0x0d5:  mov    %edx,0x4(%esp)
08560f23 +0x0d9:  mov    %eax,(%esp)
08560f26 +0x0dc:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08560f2b +0x0e1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08560f30 +0x0e6:  mov    0xc(%ebp),%edx
08560f33 +0x0e9:  mov    %edx,0x4(%esp)
08560f37 +0x0ed:  mov    %eax,(%esp)
08560f3a +0x0f0:  call   086c6cee <_ZN9GameWorld8goto_pvpEP5CUser>  ; GameWorld::goto_pvp(CUser*)
08560f3f +0x0f5:  mov    -0x1c(%ebp),%ebx
08560f42 +0x0f8:  jmp    08560f5f <+0x115>
08560f44 +0x0fa:  mov    %edx,%ebx
08560f46 +0x0fc:  mov    %eax,%esi
08560f48 +0x0fe:  lea    -0x18(%ebp),%eax
08560f4b +0x101:  mov    %eax,(%esp)
08560f4e +0x104:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08560f53 +0x109:  mov    %esi,%eax
08560f55 +0x10b:  mov    %ebx,%edx
08560f57 +0x10d:  mov    %eax,(%esp)
08560f5a +0x110:  call   08ae3750 <_Unwind_Resume>
08560f5f +0x115:  lea    -0x18(%ebp),%eax
08560f62 +0x118:  mov    %eax,(%esp)
08560f65 +0x11b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08560f6a +0x120:  mov    %ebx,%eax
08560f6c +0x122:  add    $0x40,%esp
08560f6f +0x125:  pop    %ebx
08560f70 +0x126:  pop    %esi
08560f71 +0x127:  pop    %ebp
08560f72 +0x128:  ret
08560f73 +0x129:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_PutInRoom @ 0x8560e4a

/* online_preliminary::COnlinePreliminary::_PutInRoom(CUser*, PvP_Room*, bool) */

int __thiscall
online_preliminary::COnlinePreliminary::_PutInRoom
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2,bool param_3)

{
  int iVar1;
  GameWorld *pGVar2;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
  local_20 = 0;
                    /* try { // try from 08560e86 to 08560f3e has its CatchHandler @ 08560f44 */
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
