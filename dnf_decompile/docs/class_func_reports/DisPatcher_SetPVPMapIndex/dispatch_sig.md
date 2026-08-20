# dispatch_sig

`_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPMapIndex` | `0x081f8602` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f8602  _ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f8602, 0x081f88ad]
081f8602 +0x000:  push   %ebp
081f8603 +0x001:  mov    %esp,%ebp
081f8605 +0x003:  push   %esi
081f8606 +0x004:  push   %ebx
081f8607 +0x005:  sub    $0x40,%esp
081f860a +0x008:  mov    0xc(%ebp),%eax
081f860d +0x00b:  mov    %eax,(%esp)
081f8610 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f8615 +0x013:  cmp    $0x6,%eax
081f8618 +0x016:  setne  %al
081f861b +0x019:  test   %al,%al
081f861d +0x01b:  je     081f8629 <+0x27>
081f861f +0x01d:  mov    $0x0,%ebx
081f8624 +0x022:  jmp    081f88a4 <+0x2a2>
081f8629 +0x027:  lea    -0x2c(%ebp),%eax
081f862c +0x02a:  mov    %eax,(%esp)
081f862f +0x02d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f8634 +0x032:  lea    -0x1f(%ebp),%eax
081f8637 +0x035:  add    $0xd,%eax
081f863a +0x038:  mov    %eax,0x4(%esp)
081f863e +0x03c:  mov    0x10(%ebp),%eax
081f8641 +0x03f:  mov    %eax,(%esp)
081f8644 +0x042:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f8649 +0x047:  xor    $0x1,%eax
081f864c +0x04a:  test   %al,%al
081f864e +0x04c:  je     081f867b <+0x79>
081f8650 +0x04e:  movl   $0x0,0xc(%esp)
081f8658 +0x056:  movl   $0x0,0x8(%esp)
081f8660 +0x05e:  movl   $&_ZZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f8668 +0x066:  movl   $0x8650,(%esp)
081f866f +0x06d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f8674 +0x072:  mov    %eax,%ebx
081f8676 +0x074:  jmp    081f8899 <+0x297>
081f867b +0x079:  mov    0xc(%ebp),%eax
081f867e +0x07c:  mov    %eax,(%esp)
081f8681 +0x07f:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081f8686 +0x084:  mov    %eax,-0x10(%ebp)
081f8689 +0x087:  cmpl   $0x0,-0x10(%ebp)
081f868d +0x08b:  jne    081f86ba <+0xb8>
081f868f +0x08d:  movl   $0x0,0xc(%esp)
081f8697 +0x095:  movl   $0x0,0x8(%esp)
081f869f +0x09d:  movl   $&_ZZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f86a7 +0x0a5:  movl   $0x8653,(%esp)
081f86ae +0x0ac:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f86b3 +0x0b1:  mov    %eax,%ebx
081f86b5 +0x0b3:  jmp    081f8899 <+0x297>
081f86ba +0x0b8:  movb   $0x0,-0x2d(%ebp)
081f86be +0x0bc:  movzwl -0x12(%ebp),%eax
081f86c2 +0x0c0:  cwtl
081f86c3 +0x0c1:  lea    -0x2d(%ebp),%edx
081f86c6 +0x0c4:  mov    %edx,0xc(%esp)
081f86ca +0x0c8:  mov    %eax,0x8(%esp)
081f86ce +0x0cc:  mov    0xc(%ebp),%eax
081f86d1 +0x0cf:  mov    %eax,0x4(%esp)
081f86d5 +0x0d3:  mov    -0x10(%ebp),%eax
081f86d8 +0x0d6:  mov    %eax,(%esp)
081f86db +0x0d9:  call   085dd936 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb>  ; PvP_Room::CheckPvPMapMode(CUser*, int, bool&)
081f86e0 +0x0de:  xor    $0x1,%eax
081f86e3 +0x0e1:  test   %al,%al
081f86e5 +0x0e3:  je     081f8757 <+0x155>
081f86e7 +0x0e5:  movl   $0x3e,0x8(%esp)
081f86ef +0x0ed:  movl   $0x1,0x4(%esp)
081f86f7 +0x0f5:  lea    -0x2c(%ebp),%eax
081f86fa +0x0f8:  mov    %eax,(%esp)
081f86fd +0x0fb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f8702 +0x100:  movl   $0x0,0x4(%esp)
081f870a +0x108:  lea    -0x2c(%ebp),%eax
081f870d +0x10b:  mov    %eax,(%esp)
081f8710 +0x10e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f8715 +0x113:  movl   $0x13,0x4(%esp)
081f871d +0x11b:  lea    -0x2c(%ebp),%eax
081f8720 +0x11e:  mov    %eax,(%esp)
081f8723 +0x121:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081f8728 +0x126:  movl   $0x1,0x4(%esp)
081f8730 +0x12e:  lea    -0x2c(%ebp),%eax
081f8733 +0x131:  mov    %eax,(%esp)
081f8736 +0x134:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f873b +0x139:  lea    -0x2c(%ebp),%eax
081f873e +0x13c:  mov    %eax,0x4(%esp)
081f8742 +0x140:  mov    0xc(%ebp),%eax
081f8745 +0x143:  mov    %eax,(%esp)
081f8748 +0x146:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f874d +0x14b:  mov    $0x0,%ebx
081f8752 +0x150:  jmp    081f8899 <+0x297>
081f8757 +0x155:  movzwl -0x12(%ebp),%eax
081f875b +0x159:  cwtl
081f875c +0x15a:  mov    %eax,0x4(%esp)
081f8760 +0x15e:  mov    -0x10(%ebp),%eax
081f8763 +0x161:  mov    %eax,(%esp)
081f8766 +0x164:  call   0822d99e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3048>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3048
081f876b +0x169:  lea    -0x2c(%ebp),%eax
081f876e +0x16c:  mov    %eax,0x4(%esp)
081f8772 +0x170:  mov    -0x10(%ebp),%eax
081f8775 +0x173:  mov    %eax,(%esp)
081f8778 +0x176:  call   085dbd3a <_ZN8PvP_Room15make_state_infoEPc>  ; PvP_Room::make_state_info(char*)
081f877d +0x17b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f8782 +0x180:  lea    -0x2c(%ebp),%edx
081f8785 +0x183:  mov    %edx,0x4(%esp)
081f8789 +0x187:  mov    %eax,(%esp)
081f878c +0x18a:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f8791 +0x18f:  movzbl -0x2d(%ebp),%eax
081f8795 +0x193:  xor    $0x1,%eax
081f8798 +0x196:  test   %al,%al
081f879a +0x198:  je     081f8877 <+0x275>
081f87a0 +0x19e:  mov    -0x10(%ebp),%eax
081f87a3 +0x1a1:  mov    %eax,(%esp)
081f87a6 +0x1a4:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
081f87ab +0x1a9:  cmp    $0x4,%eax
081f87ae +0x1ac:  sete   %al
081f87b1 +0x1af:  test   %al,%al
081f87b3 +0x1b1:  je     081f8877 <+0x275>
081f87b9 +0x1b7:  movl   $0x5,0x8(%esp)
081f87c1 +0x1bf:  mov    0xc(%ebp),%eax
081f87c4 +0x1c2:  mov    %eax,0x4(%esp)
081f87c8 +0x1c6:  mov    -0x10(%ebp),%eax
081f87cb +0x1c9:  mov    %eax,(%esp)
081f87ce +0x1cc:  call   085d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>  ; PvP_Room::set_pvp_mode(CUser*, int)
081f87d3 +0x1d1:  mov    %eax,-0xc(%ebp)
081f87d6 +0x1d4:  cmpl   $0x0,-0xc(%ebp)
081f87da +0x1d8:  jle    081f8849 <+0x247>
081f87dc +0x1da:  movl   $0x3e,0x8(%esp)
081f87e4 +0x1e2:  movl   $0x1,0x4(%esp)
081f87ec +0x1ea:  lea    -0x2c(%ebp),%eax
081f87ef +0x1ed:  mov    %eax,(%esp)
081f87f2 +0x1f0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f87f7 +0x1f5:  movl   $0x0,0x4(%esp)
081f87ff +0x1fd:  lea    -0x2c(%ebp),%eax
081f8802 +0x200:  mov    %eax,(%esp)
081f8805 +0x203:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f880a +0x208:  movl   $0x13,0x4(%esp)
081f8812 +0x210:  lea    -0x2c(%ebp),%eax
081f8815 +0x213:  mov    %eax,(%esp)
081f8818 +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f881d +0x21b:  movl   $0x1,0x4(%esp)
081f8825 +0x223:  lea    -0x2c(%ebp),%eax
081f8828 +0x226:  mov    %eax,(%esp)
081f882b +0x229:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f8830 +0x22e:  lea    -0x2c(%ebp),%eax
081f8833 +0x231:  mov    %eax,0x4(%esp)
081f8837 +0x235:  mov    0xc(%ebp),%eax
081f883a +0x238:  mov    %eax,(%esp)
081f883d +0x23b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f8842 +0x240:  mov    $0x0,%ebx
081f8847 +0x245:  jmp    081f8899 <+0x297>
081f8849 +0x247:  lea    -0x2c(%ebp),%eax
081f884c +0x24a:  movl   $0xffff,0x8(%esp)
081f8854 +0x252:  mov    %eax,0x4(%esp)
081f8858 +0x256:  mov    -0x10(%ebp),%eax
081f885b +0x259:  mov    %eax,(%esp)
081f885e +0x25c:  call   085db9e2 <_ZN8PvP_Room14make_seat_infoEPci>  ; PvP_Room::make_seat_info(char*, int)
081f8863 +0x261:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081f8868 +0x266:  lea    -0x2c(%ebp),%edx
081f886b +0x269:  mov    %edx,0x4(%esp)
081f886f +0x26d:  mov    %eax,(%esp)
081f8872 +0x270:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081f8877 +0x275:  mov    $0x0,%ebx
081f887c +0x27a:  jmp    081f8899 <+0x297>
081f887e +0x27c:  mov    %edx,%ebx
081f8880 +0x27e:  mov    %eax,%esi
081f8882 +0x280:  lea    -0x2c(%ebp),%eax
081f8885 +0x283:  mov    %eax,(%esp)
081f8888 +0x286:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f888d +0x28b:  mov    %esi,%eax
081f888f +0x28d:  mov    %ebx,%edx
081f8891 +0x28f:  mov    %eax,(%esp)
081f8894 +0x292:  call   08ae3750 <_Unwind_Resume>
081f8899 +0x297:  lea    -0x2c(%ebp),%eax
081f889c +0x29a:  mov    %eax,(%esp)
081f889f +0x29d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f88a4 +0x2a2:  mov    %ebx,%eax
081f88a6 +0x2a4:  add    $0x40,%esp
081f88a9 +0x2a7:  pop    %ebx
081f88aa +0x2a8:  pop    %esi
081f88ab +0x2a9:  pop    %ebp
081f88ac +0x2aa:  ret
081f88ad +0x2ab:  nop
```

## 反编译 C

```c
// DisPatcher_SetPVPMapIndex::dispatch_sig @ 0x81f8602

/* DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPMapIndex::dispatch_sig
          (DisPatcher_SetPVPMapIndex *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *pGVar4;
  bool local_31;
  PacketGuard local_30 [26];
  short local_16;
  PvP_Room *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 6) {
    return 0;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f8644 to 081f8876 has its CatchHandler @ 081f887e */
  cVar1 = PacketBuf::get_short(param_2,&local_16);
  if (cVar1 == '\x01') {
    local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_14 == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x8653,
                       "virtual int DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
    else {
      local_31 = false;
      cVar1 = PvP_Room::CheckPvPMapMode(local_14,param_1,(int)local_16,&local_31);
      if (cVar1 == '\x01') {
        PvP_Room::SetRequestedMapNo(local_14,local_16);
        PvP_Room::make_state_info(local_14,(char *)local_30);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar4,local_30);
        if ((local_31 != true) && (iVar2 = PvP_Room::get_pvp_battle_mode(local_14), iVar2 == 4)) {
          local_10 = PvP_Room::set_pvp_mode(local_14,param_1,5);
          if (0 < local_10) {
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x3e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x13);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
            CUser::Send(param_1,local_30);
            uVar3 = 0;
            goto LAB_081f8899;
          }
          PvP_Room::make_seat_info(local_14,(char *)local_30,0xffff);
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar4,local_30);
        }
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x3e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,0x13);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send(param_1,local_30);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = LineFunc(0x8650,
                     "virtual int DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_081f8899:
  PacketGuard::~PacketGuard(local_30);
  return uVar3;
}
```
