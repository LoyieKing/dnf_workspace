# _debugCommandVisible

`_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x085906ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085906ac  _ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)
# range [0x085906ac, 0x085908b5]
085906ac +0x000:  push   %ebp
085906ad +0x001:  mov    %esp,%ebp
085906af +0x003:  push   %esi
085906b0 +0x004:  push   %ebx
085906b1 +0x005:  sub    $0x30,%esp
085906b4 +0x008:  mov    0xc(%ebp),%eax
085906b7 +0x00b:  mov    %eax,(%esp)
085906ba +0x00e:  call   0868bdc8 <_ZN15CUserCharacInfo10SetVisibleEv>  ; CUserCharacInfo::SetVisible()
085906bf +0x013:  mov    0xc(%ebp),%eax
085906c2 +0x016:  mov    %eax,(%esp)
085906c5 +0x019:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085906ca +0x01e:  cmp    $0x3,%eax
085906cd +0x021:  sete   %al
085906d0 +0x024:  test   %al,%al
085906d2 +0x026:  je     085906f7 <+0x4b>
085906d4 +0x028:  movl   $0x0,0xc(%esp)
085906dc +0x030:  movl   $0x2,0x8(%esp)
085906e4 +0x038:  movl   $0x0,0x4(%esp)
085906ec +0x040:  mov    0xc(%ebp),%eax
085906ef +0x043:  mov    %eax,(%esp)
085906f2 +0x046:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
085906f7 +0x04b:  lea    -0x24(%ebp),%eax
085906fa +0x04e:  mov    %eax,(%esp)
085906fd +0x051:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08590702 +0x056:  movl   $0x17,0x8(%esp)
0859070a +0x05e:  movl   $0x0,0x4(%esp)
08590712 +0x066:  lea    -0x24(%ebp),%eax
08590715 +0x069:  mov    %eax,(%esp)
08590718 +0x06c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859071d +0x071:  mov    0xc(%ebp),%eax
08590720 +0x074:  mov    %eax,(%esp)
08590723 +0x077:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08590728 +0x07c:  movzwl %ax,%eax
0859072b +0x07f:  mov    %eax,0x4(%esp)
0859072f +0x083:  lea    -0x24(%ebp),%eax
08590732 +0x086:  mov    %eax,(%esp)
08590735 +0x089:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859073a +0x08e:  mov    0xc(%ebp),%eax
0859073d +0x091:  mov    %eax,(%esp)
08590740 +0x094:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08590745 +0x099:  movsbl %al,%eax
08590748 +0x09c:  mov    %eax,0x4(%esp)
0859074c +0x0a0:  lea    -0x24(%ebp),%eax
0859074f +0x0a3:  mov    %eax,(%esp)
08590752 +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08590757 +0x0ab:  movl   $0x0,0x4(%esp)
0859075f +0x0b3:  mov    0xc(%ebp),%eax
08590762 +0x0b6:  mov    %eax,(%esp)
08590765 +0x0b9:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0859076a +0x0be:  mov    %eax,0x4(%esp)
0859076e +0x0c2:  lea    -0x24(%ebp),%eax
08590771 +0x0c5:  mov    %eax,(%esp)
08590774 +0x0c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08590779 +0x0cd:  mov    0xc(%ebp),%eax
0859077c +0x0d0:  mov    %eax,(%esp)
0859077f +0x0d3:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
08590784 +0x0d8:  movzwl %ax,%eax
08590787 +0x0db:  mov    %eax,0x4(%esp)
0859078b +0x0df:  lea    -0x24(%ebp),%eax
0859078e +0x0e2:  mov    %eax,(%esp)
08590791 +0x0e5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08590796 +0x0ea:  mov    0xc(%ebp),%eax
08590799 +0x0ed:  mov    %eax,(%esp)
0859079c +0x0f0:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
085907a1 +0x0f5:  movzwl %ax,%eax
085907a4 +0x0f8:  mov    %eax,0x4(%esp)
085907a8 +0x0fc:  lea    -0x24(%ebp),%eax
085907ab +0x0ff:  mov    %eax,(%esp)
085907ae +0x102:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085907b3 +0x107:  mov    0xc(%ebp),%eax
085907b6 +0x10a:  mov    %eax,(%esp)
085907b9 +0x10d:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
085907be +0x112:  movsbl %al,%eax
085907c1 +0x115:  mov    %eax,0x4(%esp)
085907c5 +0x119:  lea    -0x24(%ebp),%eax
085907c8 +0x11c:  mov    %eax,(%esp)
085907cb +0x11f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085907d0 +0x124:  mov    0xc(%ebp),%eax
085907d3 +0x127:  mov    %eax,(%esp)
085907d6 +0x12a:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
085907db +0x12f:  movsbl %al,%eax
085907de +0x132:  mov    %eax,0x4(%esp)
085907e2 +0x136:  lea    -0x24(%ebp),%eax
085907e5 +0x139:  mov    %eax,(%esp)
085907e8 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085907ed +0x141:  movl   $0x1,0x4(%esp)
085907f5 +0x149:  lea    -0x24(%ebp),%eax
085907f8 +0x14c:  mov    %eax,(%esp)
085907fb +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08590800 +0x154:  movl   $0x0,0x4(%esp)
08590808 +0x15c:  mov    0xc(%ebp),%eax
0859080b +0x15f:  mov    %eax,(%esp)
0859080e +0x162:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08590813 +0x167:  mov    %eax,%ebx
08590815 +0x169:  mov    0xc(%ebp),%eax
08590818 +0x16c:  mov    %eax,(%esp)
0859081b +0x16f:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08590820 +0x174:  movsbl %al,%esi
08590823 +0x177:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08590828 +0x17c:  lea    -0x24(%ebp),%edx
0859082b +0x17f:  mov    %edx,0xc(%esp)
0859082f +0x183:  mov    %ebx,0x8(%esp)
08590833 +0x187:  mov    %esi,0x4(%esp)
08590837 +0x18b:  mov    %eax,(%esp)
0859083a +0x18e:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
0859083f +0x193:  mov    0xc(%ebp),%eax
08590842 +0x196:  mov    %eax,(%esp)
08590845 +0x199:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0859084a +0x19e:  mov    %eax,%ebx
0859084c +0x1a0:  movl   $0x0,0xc(%esp)
08590854 +0x1a8:  movl   $0x83,0x8(%esp)
0859085c +0x1b0:  movl   $&_ZZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
08590864 +0x1b8:  lea    -0x18(%ebp),%eax
08590867 +0x1bb:  mov    %eax,(%esp)
0859086a +0x1be:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859086f +0x1c3:  mov    %ebx,0x8(%esp)
08590873 +0x1c7:  movl   $"GM(%s) is visible \n",0x4(%esp)
0859087b +0x1cf:  lea    -0x18(%ebp),%eax
0859087e +0x1d2:  mov    %eax,(%esp)
08590881 +0x1d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08590886 +0x1da:  mov    $0x1,%ebx
0859088b +0x1df:  lea    -0x24(%ebp),%eax
0859088e +0x1e2:  mov    %eax,(%esp)
08590891 +0x1e5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08590896 +0x1ea:  mov    %ebx,%eax
08590898 +0x1ec:  add    $0x30,%esp
0859089b +0x1ef:  pop    %ebx
0859089c +0x1f0:  pop    %esi
0859089d +0x1f1:  pop    %ebp
0859089e +0x1f2:  ret
0859089f +0x1f3:  mov    %edx,%ebx
085908a1 +0x1f5:  mov    %eax,%esi
085908a3 +0x1f7:  lea    -0x24(%ebp),%eax
085908a6 +0x1fa:  mov    %eax,(%esp)
085908a9 +0x1fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085908ae +0x202:  mov    %esi,%eax
085908b0 +0x204:  mov    %ebx,%edx
085908b2 +0x206:  mov    %eax,(%esp)
085908b5 +0x209:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandVisible @ 0x85906ac

/* DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 DisPatcher_DebugCommand::_debugCommandVisible(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this;
  undefined4 uVar4;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  CUserCharacInfo::SetVisible((CUserCharacInfo *)param_2);
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    CUser::SendNotiPacket((CUser *)param_2,0,2,0);
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08590718 to 08590885 has its CatchHandler @ 0859089f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x17);
  uVar3 = CUser::get_unique_id((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  iVar2 = CUser::get_area((CUser *)param_2,false);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar2);
  uVar3 = CUser::get_posX((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  uVar3 = CUser::get_posY((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  cVar1 = CUser::get_direction((CUser *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  iVar2 = CUser::get_area((CUser *)param_2,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar2,local_28);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)"
                     ,0x83,0);
  cMyTrace::operator()(local_1c,"GM(%s) is visible \n",uVar4);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}
```
