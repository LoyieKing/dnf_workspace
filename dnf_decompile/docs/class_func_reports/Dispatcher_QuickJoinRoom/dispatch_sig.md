# dispatch_sig

`_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_QuickJoinRoom` | `0x0820350e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820350e  _ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820350e, 0x082037f9]
0820350e +0x000:  push   %ebp
0820350f +0x001:  mov    %esp,%ebp
08203511 +0x003:  push   %esi
08203512 +0x004:  push   %ebx
08203513 +0x005:  sub    $0x90,%esp
08203519 +0x00b:  lea    -0x19(%ebp),%eax
0820351c +0x00e:  mov    %eax,0x4(%esp)
08203520 +0x012:  mov    0x10(%ebp),%eax
08203523 +0x015:  mov    %eax,(%esp)
08203526 +0x018:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0820352b +0x01d:  xor    $0x1,%eax
0820352e +0x020:  test   %al,%al
08203530 +0x022:  je     0820355d <+0x4f>
08203532 +0x024:  movl   $0x0,0xc(%esp)
0820353a +0x02c:  movl   $0x0,0x8(%esp)
08203542 +0x034:  movl   $&_ZZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820354a +0x03c:  movl   $0x9a32,(%esp)
08203551 +0x043:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203556 +0x048:  mov    %eax,%ebx
08203558 +0x04a:  jmp    082037ed <+0x2df>
0820355d +0x04f:  mov    0xc(%ebp),%eax
08203560 +0x052:  mov    %eax,(%esp)
08203563 +0x055:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
08203568 +0x05a:  test   %al,%al
0820356a +0x05c:  je     08203591 <+0x83>
0820356c +0x05e:  movl   $0x15,0x8(%esp)
08203574 +0x066:  movl   $0x65,0x4(%esp)
0820357c +0x06e:  mov    0xc(%ebp),%eax
0820357f +0x071:  mov    %eax,(%esp)
08203582 +0x074:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08203587 +0x079:  mov    $0x0,%ebx
0820358c +0x07e:  jmp    082037ed <+0x2df>
08203591 +0x083:  movzbl -0x19(%ebp),%eax
08203595 +0x087:  test   %al,%al
08203597 +0x089:  jne    08203666 <+0x158>
0820359d +0x08f:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082035a2 +0x094:  mov    0xc(%ebp),%edx
082035a5 +0x097:  mov    %edx,0x8(%esp)
082035a9 +0x09b:  movl   $0x1,0x4(%esp)
082035b1 +0x0a3:  mov    %eax,(%esp)
082035b4 +0x0a6:  call   082a3202 <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser>  ; CGameManager::FindQuickJoinablePvPRoom(bool, CUser*)
082035b9 +0x0ab:  mov    %eax,-0x18(%ebp)
082035bc +0x0ae:  cmpl   $0x0,-0x18(%ebp)
082035c0 +0x0b2:  jne    0820361e <+0x110>
082035c2 +0x0b4:  movl   $0x3d,0x8(%esp)
082035ca +0x0bc:  movl   $0x0,0x4(%esp)
082035d2 +0x0c4:  lea    -0x79(%ebp),%eax
082035d5 +0x0c7:  mov    %eax,(%esp)
082035d8 +0x0ca:  call   0807dcc0 <_init+0x5b8>
082035dd +0x0cf:  movw   $0x1,-0x4d(%ebp)
082035e3 +0x0d5:  movb   $0x1,-0x6c(%ebp)
082035e7 +0x0d9:  movl   $0x2,0xc(%esp)
082035ef +0x0e1:  movl   $0x65,0x8(%esp)
082035f7 +0x0e9:  lea    -0x79(%ebp),%eax
082035fa +0x0ec:  mov    %eax,0x4(%esp)
082035fe +0x0f0:  mov    0xc(%ebp),%eax
08203601 +0x0f3:  mov    %eax,(%esp)
08203604 +0x0f6:  call   081f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>  ; MakePVPRoom(CUser*, MSG_MAKE_PVP_ROOM&, ENUM_CMDPACKET, PVP_BATTLE_MODE)
08203609 +0x0fb:  xor    $0x1,%eax
0820360c +0x0fe:  test   %al,%al
0820360e +0x100:  je     082037e8 <+0x2da>
08203614 +0x106:  mov    $0x0,%ebx
08203619 +0x10b:  jmp    082037ed <+0x2df>
0820361e +0x110:  movl   $0x0,-0x22(%ebp)
08203625 +0x117:  movl   $0x0,-0x1e(%ebp)
0820362c +0x11e:  movb   $0x0,-0x1a(%ebp)
08203630 +0x122:  lea    -0x22(%ebp),%eax
08203633 +0x125:  mov    %eax,0xc(%esp)
08203637 +0x129:  movl   $0x65,0x8(%esp)
0820363f +0x131:  mov    -0x18(%ebp),%eax
08203642 +0x134:  mov    %eax,0x4(%esp)
08203646 +0x138:  mov    0xc(%ebp),%eax
08203649 +0x13b:  mov    %eax,(%esp)
0820364c +0x13e:  call   081ed09a <_Z12EnterPVPRoomP5CUserP8PvP_Room14ENUM_CMDPACKETPKc>  ; EnterPVPRoom(CUser*, PvP_Room*, ENUM_CMDPACKET, char const*)
08203651 +0x143:  xor    $0x1,%eax
08203654 +0x146:  test   %al,%al
08203656 +0x148:  je     082037e8 <+0x2da>
0820365c +0x14e:  mov    $0x0,%ebx
08203661 +0x153:  jmp    082037ed <+0x2df>
08203666 +0x158:  movzbl -0x19(%ebp),%eax
0820366a +0x15c:  cmp    $0x1,%al
0820366c +0x15e:  jne    08203713 <+0x205>
08203672 +0x164:  lea    -0x30(%ebp),%eax
08203675 +0x167:  mov    %eax,(%esp)
08203678 +0x16a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820367d +0x16f:  movl   $0x65,0x8(%esp)
08203685 +0x177:  movl   $0x1,0x4(%esp)
0820368d +0x17f:  lea    -0x30(%ebp),%eax
08203690 +0x182:  mov    %eax,(%esp)
08203693 +0x185:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08203698 +0x18a:  movl   $0x0,0x4(%esp)
082036a0 +0x192:  lea    -0x30(%ebp),%eax
082036a3 +0x195:  mov    %eax,(%esp)
082036a6 +0x198:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082036ab +0x19d:  movl   $0x4,0x4(%esp)
082036b3 +0x1a5:  lea    -0x30(%ebp),%eax
082036b6 +0x1a8:  mov    %eax,(%esp)
082036b9 +0x1ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082036be +0x1b0:  movl   $0x1,0x4(%esp)
082036c6 +0x1b8:  lea    -0x30(%ebp),%eax
082036c9 +0x1bb:  mov    %eax,(%esp)
082036cc +0x1be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082036d1 +0x1c3:  lea    -0x30(%ebp),%eax
082036d4 +0x1c6:  mov    %eax,0x4(%esp)
082036d8 +0x1ca:  mov    0xc(%ebp),%eax
082036db +0x1cd:  mov    %eax,(%esp)
082036de +0x1d0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082036e3 +0x1d5:  mov    $0x0,%ebx
082036e8 +0x1da:  lea    -0x30(%ebp),%eax
082036eb +0x1dd:  mov    %eax,(%esp)
082036ee +0x1e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082036f3 +0x1e5:  jmp    082037ed <+0x2df>
082036f8 +0x1ea:  mov    %edx,%ebx
082036fa +0x1ec:  mov    %eax,%esi
082036fc +0x1ee:  lea    -0x30(%ebp),%eax
082036ff +0x1f1:  mov    %eax,(%esp)
08203702 +0x1f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08203707 +0x1f9:  mov    %esi,%eax
08203709 +0x1fb:  mov    %ebx,%edx
0820370b +0x1fd:  mov    %eax,(%esp)
0820370e +0x200:  call   08ae3750 <_Unwind_Resume>
08203713 +0x205:  movzbl -0x19(%ebp),%eax
08203717 +0x209:  cmp    $0x2,%al
08203719 +0x20b:  jne    082037e8 <+0x2da>
0820371f +0x211:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08203724 +0x216:  movl   $0x5f,0x4(%esp)
0820372c +0x21e:  mov    %eax,(%esp)
0820372f +0x221:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08203734 +0x226:  mov    (%eax),%edx
08203736 +0x228:  add    $0x34,%edx
08203739 +0x22b:  mov    (%edx),%edx
0820373b +0x22d:  movl   $0x0,0x4(%esp)
08203743 +0x235:  mov    %eax,(%esp)
08203746 +0x238:  call   *%edx
08203748 +0x23a:  xor    $0x1,%eax
0820374b +0x23d:  test   %al,%al
0820374d +0x23f:  je     08203771 <+0x263>
0820374f +0x241:  movl   $0x8,0x8(%esp)
08203757 +0x249:  movl   $0x65,0x4(%esp)
0820375f +0x251:  mov    0xc(%ebp),%eax
08203762 +0x254:  mov    %eax,(%esp)
08203765 +0x257:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820376a +0x25c:  mov    $0x0,%ebx
0820376f +0x261:  jmp    082037ed <+0x2df>
08203771 +0x263:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08203776 +0x268:  mov    %eax,(%esp)
08203779 +0x26b:  call   082a3424 <_ZN12CGameManager22findJoinableBlueMarbleEv>  ; CGameManager::findJoinableBlueMarble()
0820377e +0x270:  mov    %eax,-0x10(%ebp)
08203781 +0x273:  cmpl   $0x0,-0x10(%ebp)
08203785 +0x277:  jne    082037a9 <+0x29b>
08203787 +0x279:  movl   $0xbe,0x8(%esp)
0820378f +0x281:  movl   $0x65,0x4(%esp)
08203797 +0x289:  mov    0xc(%ebp),%eax
0820379a +0x28c:  mov    %eax,(%esp)
0820379d +0x28f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082037a2 +0x294:  mov    $0x0,%ebx
082037a7 +0x299:  jmp    082037ed <+0x2df>
082037a9 +0x29b:  mov    0xc(%ebp),%eax
082037ac +0x29e:  mov    %eax,0x4(%esp)
082037b0 +0x2a2:  mov    -0x10(%ebp),%eax
082037b3 +0x2a5:  mov    %eax,(%esp)
082037b6 +0x2a8:  call   080d9210 <_ZN10BlueMarble15enterBlueMarbleEP5CUser>  ; BlueMarble::enterBlueMarble(CUser*)
082037bb +0x2ad:  mov    %eax,-0xc(%ebp)
082037be +0x2b0:  cmpl   $0x0,-0xc(%ebp)
082037c2 +0x2b4:  jle    082037e8 <+0x2da>
082037c4 +0x2b6:  mov    -0xc(%ebp),%eax
082037c7 +0x2b9:  movzbl %al,%eax
082037ca +0x2bc:  mov    %eax,0x8(%esp)
082037ce +0x2c0:  movl   $0x65,0x4(%esp)
082037d6 +0x2c8:  mov    0xc(%ebp),%eax
082037d9 +0x2cb:  mov    %eax,(%esp)
082037dc +0x2ce:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082037e1 +0x2d3:  mov    $0x0,%ebx
082037e6 +0x2d8:  jmp    082037ed <+0x2df>
082037e8 +0x2da:  mov    $0x0,%ebx
082037ed +0x2df:  mov    %ebx,%eax
082037ef +0x2e1:  add    $0x90,%esp
082037f5 +0x2e7:  pop    %ebx
082037f6 +0x2e8:  pop    %esi
082037f7 +0x2e9:  pop    %ebp
082037f8 +0x2ea:  ret
082037f9 +0x2eb:  nop
```

## 反编译 C

```c
// Dispatcher_QuickJoinRoom::dispatch_sig @ 0x820350e

/* Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QuickJoinRoom::dispatch_sig
          (Dispatcher_QuickJoinRoom *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CGameManager *this_00;
  int *piVar3;
  undefined1 local_7d [13];
  undefined1 local_70;
  undefined2 local_51;
  PacketGuard local_34 [14];
  undefined4 local_26;
  undefined4 local_22;
  undefined1 local_1e;
  uchar local_1d;
  int local_1c;
  BlueMarble *local_14;
  uint local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_1d);
  if (cVar1 == '\x01') {
    cVar1 = CUser::isCompetitionMercenary(param_1);
    if (cVar1 == '\0') {
      if (local_1d == '\0') {
        this_00 = (CGameManager *)G_CGameManager();
        local_1c = CGameManager::FindQuickJoinablePvPRoom(this_00,true,param_1);
        if (local_1c == 0) {
          memset(local_7d,0,0x3d);
          local_51 = 1;
          local_70 = 1;
          cVar1 = MakePVPRoom(param_1,local_7d,0x65,2);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
        else {
          local_26 = 0;
          local_22 = 0;
          local_1e = 0;
          cVar1 = EnterPVPRoom(param_1,local_1c,0x65,&local_26);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      else {
        if (local_1d == '\x01') {
          PacketGuard::PacketGuard(local_34);
                    /* try { // try from 08203693 to 082036e2 has its CatchHandler @ 082036f8 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x65);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,4);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
          CUser::Send(param_1,local_34);
          PacketGuard::~PacketGuard(local_34);
          return 0;
        }
        if (local_1d == '\x02') {
          piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5f);
          cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
          if (cVar1 != '\x01') {
            CUser::SendCmdErrorPacket(param_1,0x65,8);
            return 0;
          }
          G_CGameManager();
          local_14 = (BlueMarble *)CGameManager::findJoinableBlueMarble();
          if (local_14 == (BlueMarble *)0x0) {
            CUser::SendCmdErrorPacket(param_1,0x65,0xbe);
            return 0;
          }
          local_10 = BlueMarble::enterBlueMarble(local_14,param_1);
          if (0 < (int)local_10) {
            CUser::SendCmdErrorPacket(param_1,0x65,local_10 & 0xff);
            return 0;
          }
        }
      }
      uVar2 = 0;
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x65,0x15);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x9a32,"virtual int Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}
```
