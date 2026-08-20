# _debugCommandLevelUpDown

`_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri`

`DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858f3ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858f3ba  _ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri
#           DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int)
# range [0x0858f3ba, 0x0858f64b]
0858f3ba +0x000:  push   %ebp
0858f3bb +0x001:  mov    %esp,%ebp
0858f3bd +0x003:  push   %esi
0858f3be +0x004:  push   %ebx
0858f3bf +0x005:  sub    $0x50,%esp
0858f3c2 +0x008:  mov    0xc(%ebp),%eax
0858f3c5 +0x00b:  mov    %eax,(%esp)
0858f3c8 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858f3cd +0x013:  xor    $0x1,%eax
0858f3d0 +0x016:  test   %al,%al
0858f3d2 +0x018:  je     0858f3de <+0x24>
0858f3d4 +0x01a:  mov    $0x0,%eax
0858f3d9 +0x01f:  jmp    0858f644 <+0x28a>
0858f3de +0x024:  mov    0xc(%ebp),%eax
0858f3e1 +0x027:  mov    %eax,(%esp)
0858f3e4 +0x02a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858f3e9 +0x02f:  mov    %eax,%esi
0858f3eb +0x031:  mov    0xc(%ebp),%eax
0858f3ee +0x034:  mov    %eax,(%esp)
0858f3f1 +0x037:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858f3f6 +0x03c:  movl   $0x0,0x4(%esp)
0858f3fe +0x044:  mov    %eax,(%esp)
0858f401 +0x047:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858f406 +0x04c:  mov    %eax,%ebx
0858f408 +0x04e:  movl   $0x0,0xc(%esp)
0858f410 +0x056:  movl   $0x1ce,0x8(%esp)
0858f418 +0x05e:  movl   $&_ZZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0858f420 +0x066:  lea    -0x24(%ebp),%eax
0858f423 +0x069:  mov    %eax,(%esp)
0858f426 +0x06c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858f42b +0x071:  mov    %esi,0xc(%esp)
0858f42f +0x075:  mov    %ebx,0x8(%esp)
0858f433 +0x079:  movl   $"%s:'%s' GM Mode Level Up.",0x4(%esp)
0858f43b +0x081:  lea    -0x24(%ebp),%eax
0858f43e +0x084:  mov    %eax,(%esp)
0858f441 +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858f446 +0x08c:  mov    0x10(%ebp),%eax
0858f449 +0x08f:  imul   0x10(%ebp),%eax
0858f44d +0x093:  cmp    $0x1,%eax
0858f450 +0x096:  jle    0858f45c <+0xa2>
0858f452 +0x098:  mov    $0x0,%eax
0858f457 +0x09d:  jmp    0858f644 <+0x28a>
0858f45c +0x0a2:  movb   $0x1,-0x9(%ebp)
0858f460 +0x0a6:  mov    0xc(%ebp),%eax
0858f463 +0x0a9:  mov    %eax,(%esp)
0858f466 +0x0ac:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0858f46b +0x0b1:  add    0x10(%ebp),%eax
0858f46e +0x0b4:  mov    %eax,-0x14(%ebp)
0858f471 +0x0b7:  movl   $0xc8,-0x10(%ebp)
0858f478 +0x0be:  lea    -0x14(%ebp),%eax
0858f47b +0x0c1:  mov    %eax,0x4(%esp)
0858f47f +0x0c5:  lea    -0x10(%ebp),%eax
0858f482 +0x0c8:  mov    %eax,(%esp)
0858f485 +0x0cb:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0858f48a +0x0d0:  mov    (%eax),%eax
0858f48c +0x0d2:  mov    %eax,0x4(%esp)
0858f490 +0x0d6:  mov    0xc(%ebp),%eax
0858f493 +0x0d9:  mov    %eax,(%esp)
0858f496 +0x0dc:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
0858f49b +0x0e1:  xor    $0x1,%eax
0858f49e +0x0e4:  test   %al,%al
0858f4a0 +0x0e6:  je     0858f4a6 <+0xec>
0858f4a2 +0x0e8:  movb   $0x0,-0x9(%ebp)
0858f4a6 +0x0ec:  cmpb   $0x0,-0x9(%ebp)
0858f4aa +0x0f0:  je     0858f640 <+0x286>
0858f4b0 +0x0f6:  mov    0xc(%ebp),%eax
0858f4b3 +0x0f9:  mov    %eax,(%esp)
0858f4b6 +0x0fc:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0858f4bb +0x101:  cmp    $0x3,%eax
0858f4be +0x104:  je     0858f4ce <+0x114>
0858f4c0 +0x106:  cmp    $0x5,%eax
0858f4c3 +0x109:  je     0858f59b <+0x1e1>
0858f4c9 +0x10f:  jmp    0858f640 <+0x286>
0858f4ce +0x114:  movl   $0x0,0xc(%esp)
0858f4d6 +0x11c:  movl   $0x25,0x8(%esp)
0858f4de +0x124:  movl   $0x1,0x4(%esp)
0858f4e6 +0x12c:  mov    0xc(%ebp),%eax
0858f4e9 +0x12f:  mov    %eax,(%esp)
0858f4ec +0x132:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f4f1 +0x137:  movl   $0x0,0xc(%esp)
0858f4f9 +0x13f:  movl   $0x2,0x8(%esp)
0858f501 +0x147:  movl   $0x0,0x4(%esp)
0858f509 +0x14f:  mov    0xc(%ebp),%eax
0858f50c +0x152:  mov    %eax,(%esp)
0858f50f +0x155:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f514 +0x15a:  movl   $0x1,0xc(%esp)
0858f51c +0x162:  movl   $0x2,0x8(%esp)
0858f524 +0x16a:  movl   $0x1,0x4(%esp)
0858f52c +0x172:  mov    0xc(%ebp),%eax
0858f52f +0x175:  mov    %eax,(%esp)
0858f532 +0x178:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f537 +0x17d:  lea    -0x30(%ebp),%eax
0858f53a +0x180:  mov    %eax,(%esp)
0858f53d +0x183:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858f542 +0x188:  lea    -0x30(%ebp),%ebx
0858f545 +0x18b:  mov    0xc(%ebp),%eax
0858f548 +0x18e:  mov    %eax,(%esp)
0858f54b +0x191:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0858f550 +0x196:  mov    %ebx,0x4(%esp)
0858f554 +0x19a:  mov    %eax,(%esp)
0858f557 +0x19d:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0858f55c +0x1a2:  lea    -0x30(%ebp),%eax
0858f55f +0x1a5:  mov    %eax,0x4(%esp)
0858f563 +0x1a9:  mov    0xc(%ebp),%eax
0858f566 +0x1ac:  mov    %eax,(%esp)
0858f569 +0x1af:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858f56e +0x1b4:  jmp    0858f58b <+0x1d1>
0858f570 +0x1b6:  mov    %edx,%ebx
0858f572 +0x1b8:  mov    %eax,%esi
0858f574 +0x1ba:  lea    -0x30(%ebp),%eax
0858f577 +0x1bd:  mov    %eax,(%esp)
0858f57a +0x1c0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f57f +0x1c5:  mov    %esi,%eax
0858f581 +0x1c7:  mov    %ebx,%edx
0858f583 +0x1c9:  mov    %eax,(%esp)
0858f586 +0x1cc:  call   08ae3750 <_Unwind_Resume>
0858f58b +0x1d1:  lea    -0x30(%ebp),%eax
0858f58e +0x1d4:  mov    %eax,(%esp)
0858f591 +0x1d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f596 +0x1dc:  jmp    0858f640 <+0x286>
0858f59b +0x1e1:  movl   $0x0,0xc(%esp)
0858f5a3 +0x1e9:  movl   $0x25,0x8(%esp)
0858f5ab +0x1f1:  movl   $0x1,0x4(%esp)
0858f5b3 +0x1f9:  mov    0xc(%ebp),%eax
0858f5b6 +0x1fc:  mov    %eax,(%esp)
0858f5b9 +0x1ff:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f5be +0x204:  movl   $0x1,0xc(%esp)
0858f5c6 +0x20c:  movl   $0x2,0x8(%esp)
0858f5ce +0x214:  movl   $0x2,0x4(%esp)
0858f5d6 +0x21c:  mov    0xc(%ebp),%eax
0858f5d9 +0x21f:  mov    %eax,(%esp)
0858f5dc +0x222:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858f5e1 +0x227:  lea    -0x3c(%ebp),%eax
0858f5e4 +0x22a:  mov    %eax,(%esp)
0858f5e7 +0x22d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858f5ec +0x232:  lea    -0x3c(%ebp),%ebx
0858f5ef +0x235:  mov    0xc(%ebp),%eax
0858f5f2 +0x238:  mov    %eax,(%esp)
0858f5f5 +0x23b:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0858f5fa +0x240:  mov    %ebx,0x4(%esp)
0858f5fe +0x244:  mov    %eax,(%esp)
0858f601 +0x247:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0858f606 +0x24c:  lea    -0x3c(%ebp),%eax
0858f609 +0x24f:  mov    %eax,0x4(%esp)
0858f60d +0x253:  mov    0xc(%ebp),%eax
0858f610 +0x256:  mov    %eax,(%esp)
0858f613 +0x259:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858f618 +0x25e:  jmp    0858f635 <+0x27b>
0858f61a +0x260:  mov    %edx,%ebx
0858f61c +0x262:  mov    %eax,%esi
0858f61e +0x264:  lea    -0x3c(%ebp),%eax
0858f621 +0x267:  mov    %eax,(%esp)
0858f624 +0x26a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f629 +0x26f:  mov    %esi,%eax
0858f62b +0x271:  mov    %ebx,%edx
0858f62d +0x273:  mov    %eax,(%esp)
0858f630 +0x276:  call   08ae3750 <_Unwind_Resume>
0858f635 +0x27b:  lea    -0x3c(%ebp),%eax
0858f638 +0x27e:  mov    %eax,(%esp)
0858f63b +0x281:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858f640 +0x286:  movzbl -0x9(%ebp),%eax
0858f644 +0x28a:  add    $0x50,%esp
0858f647 +0x28d:  pop    %ebx
0858f648 +0x28e:  pop    %esi
0858f649 +0x28f:  pop    %ebp
0858f64a +0x290:  ret
0858f64b +0x291:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandLevelUpDown @ 0x858f3ba

/* DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int) */

char __thiscall
DisPatcher_DebugCommand::_debugCommandLevelUpDown
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  UserQuest *pUVar7;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  cMyTrace local_28 [16];
  int local_18 [2];
  char local_d;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_28,
                       "bool DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int)",0x1ce,0
                      );
    cMyTrace::operator()(local_28,"%s:\'%s\' GM Mode Level Up.",uVar4,uVar2);
    if (param_2 * param_2 < 2) {
      local_d = '\x01';
      local_18[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_18[0] = local_18[0] + param_2;
      local_18[1] = 200;
      piVar5 = std::min<int>(local_18 + 1,local_18);
      cVar1 = CUser::SetCharacLevel(param_1,*piVar5);
      if (cVar1 != '\x01') {
        local_d = '\0';
      }
      if (local_d != '\0') {
        iVar6 = CUser::get_state(param_1);
        if (iVar6 == 3) {
          CUser::SendNotiPacket(param_1,1,0x25,0);
          CUser::SendNotiPacket(param_1,0,2,0);
          CUser::SendNotiPacket(param_1,1,2,1);
          PacketGuard::PacketGuard(local_34);
          pUVar7 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f557 to 0858f56d has its CatchHandler @ 0858f570 */
          UserQuest::get_quest_info(pUVar7,(char *)local_34);
          CUser::Send(param_1,local_34);
          PacketGuard::~PacketGuard(local_34);
        }
        else if (iVar6 == 5) {
          CUser::SendNotiPacket(param_1,1,0x25,0);
          CUser::SendNotiPacket(param_1,2,2,1);
          PacketGuard::PacketGuard(local_40);
          pUVar7 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f601 to 0858f617 has its CatchHandler @ 0858f61a */
          UserQuest::get_quest_info(pUVar7,(char *)local_40);
          CUser::Send(param_1,local_40);
          PacketGuard::~PacketGuard(local_40);
        }
      }
    }
    else {
      local_d = '\0';
    }
  }
  else {
    local_d = '\0';
  }
  return local_d;
}
```
