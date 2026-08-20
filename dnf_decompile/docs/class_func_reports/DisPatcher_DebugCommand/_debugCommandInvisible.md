# _debugCommandInvisible

`_ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0859058a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859058a  _ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0859058a, 0x085906a7]
0859058a +0x000:  push   %ebp
0859058b +0x001:  mov    %esp,%ebp
0859058d +0x003:  push   %esi
0859058e +0x004:  push   %ebx
0859058f +0x005:  sub    $0x30,%esp
08590592 +0x008:  mov    0xc(%ebp),%eax
08590595 +0x00b:  mov    %eax,(%esp)
08590598 +0x00e:  call   0868bdac <_ZN15CUserCharacInfo12SetInvisibleEv>  ; CUserCharacInfo::SetInvisible()
0859059d +0x013:  lea    -0x24(%ebp),%eax
085905a0 +0x016:  mov    %eax,(%esp)
085905a3 +0x019:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085905a8 +0x01e:  movl   $0x6,0x8(%esp)
085905b0 +0x026:  movl   $0x0,0x4(%esp)
085905b8 +0x02e:  lea    -0x24(%ebp),%eax
085905bb +0x031:  mov    %eax,(%esp)
085905be +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085905c3 +0x039:  mov    0xc(%ebp),%eax
085905c6 +0x03c:  mov    %eax,(%esp)
085905c9 +0x03f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085905ce +0x044:  movzwl %ax,%eax
085905d1 +0x047:  mov    %eax,0x4(%esp)
085905d5 +0x04b:  lea    -0x24(%ebp),%eax
085905d8 +0x04e:  mov    %eax,(%esp)
085905db +0x051:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085905e0 +0x056:  movl   $0x1,0x4(%esp)
085905e8 +0x05e:  lea    -0x24(%ebp),%eax
085905eb +0x061:  mov    %eax,(%esp)
085905ee +0x064:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085905f3 +0x069:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085905f8 +0x06e:  mov    0xc(%ebp),%edx
085905fb +0x071:  mov    %edx,0x8(%esp)
085905ff +0x075:  lea    -0x24(%ebp),%edx
08590602 +0x078:  mov    %edx,0x4(%esp)
08590606 +0x07c:  mov    %eax,(%esp)
08590609 +0x07f:  call   086c93a2 <_ZN9GameWorld22send_all_excepted_userER11PacketGuardP5CUser>  ; GameWorld::send_all_excepted_user(PacketGuard&, CUser*)
0859060e +0x084:  movl   $0x0,0xc(%esp)
08590616 +0x08c:  movl   $0x2,0x8(%esp)
0859061e +0x094:  movl   $0x1,0x4(%esp)
08590626 +0x09c:  mov    0xc(%ebp),%eax
08590629 +0x09f:  mov    %eax,(%esp)
0859062c +0x0a2:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08590631 +0x0a7:  mov    0xc(%ebp),%eax
08590634 +0x0aa:  mov    %eax,(%esp)
08590637 +0x0ad:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0859063c +0x0b2:  mov    %eax,%ebx
0859063e +0x0b4:  movl   $0x0,0xc(%esp)
08590646 +0x0bc:  movl   $0x5c,0x8(%esp)
0859064e +0x0c4:  movl   $&_ZZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
08590656 +0x0cc:  lea    -0x18(%ebp),%eax
08590659 +0x0cf:  mov    %eax,(%esp)
0859065c +0x0d2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08590661 +0x0d7:  mov    %ebx,0x8(%esp)
08590665 +0x0db:  movl   $"GM(%s) is invisible \n",0x4(%esp)
0859066d +0x0e3:  lea    -0x18(%ebp),%eax
08590670 +0x0e6:  mov    %eax,(%esp)
08590673 +0x0e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08590678 +0x0ee:  mov    $0x1,%ebx
0859067d +0x0f3:  lea    -0x24(%ebp),%eax
08590680 +0x0f6:  mov    %eax,(%esp)
08590683 +0x0f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08590688 +0x0fe:  mov    %ebx,%eax
0859068a +0x100:  add    $0x30,%esp
0859068d +0x103:  pop    %ebx
0859068e +0x104:  pop    %esi
0859068f +0x105:  pop    %ebp
08590690 +0x106:  ret
08590691 +0x107:  mov    %edx,%ebx
08590693 +0x109:  mov    %eax,%esi
08590695 +0x10b:  lea    -0x24(%ebp),%eax
08590698 +0x10e:  mov    %eax,(%esp)
0859069b +0x111:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085906a0 +0x116:  mov    %esi,%eax
085906a2 +0x118:  mov    %ebx,%edx
085906a4 +0x11a:  mov    %eax,(%esp)
085906a7 +0x11d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandInvisible @ 0x859058a

/* DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
DisPatcher_DebugCommand::_debugCommandInvisible(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  uint uVar1;
  GameWorld *this;
  undefined4 uVar2;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  CUserCharacInfo::SetInvisible((CUserCharacInfo *)param_2);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085905be to 08590677 has its CatchHandler @ 08590691 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,6);
  uVar1 = CUser::get_unique_id((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all_excepted_user(this,local_28,(CUser *)param_2);
  CUser::SendNotiPacket((CUser *)param_2,1,2,0);
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)"
                     ,0x5c,0);
  cMyTrace::operator()(local_1c,"GM(%s) is invisible \n",uVar2);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}
```
