# _debugCommandClearSkill

`_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858e9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858e9c4  _ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858e9c4, 0x0858eab7]
0858e9c4 +0x00:  push   %ebp
0858e9c5 +0x01:  mov    %esp,%ebp
0858e9c7 +0x03:  push   %esi
0858e9c8 +0x04:  push   %ebx
0858e9c9 +0x05:  sub    $0x20,%esp
0858e9cc +0x08:  mov    0xc(%ebp),%eax
0858e9cf +0x0b:  mov    %eax,(%esp)
0858e9d2 +0x0e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858e9d7 +0x13:  xor    $0x1,%eax
0858e9da +0x16:  test   %al,%al
0858e9dc +0x18:  je     0858e9e8 <+0x24>
0858e9de +0x1a:  mov    $0x0,%eax
0858e9e3 +0x1f:  jmp    0858eab0 <+0xec>
0858e9e8 +0x24:  mov    0xc(%ebp),%eax
0858e9eb +0x27:  mov    %eax,(%esp)
0858e9ee +0x2a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858e9f3 +0x2f:  mov    %eax,%esi
0858e9f5 +0x31:  mov    0xc(%ebp),%eax
0858e9f8 +0x34:  mov    %eax,(%esp)
0858e9fb +0x37:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858ea00 +0x3c:  movl   $0x0,0x4(%esp)
0858ea08 +0x44:  mov    %eax,(%esp)
0858ea0b +0x47:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858ea10 +0x4c:  mov    %eax,%ebx
0858ea12 +0x4e:  movl   $0x0,0xc(%esp)
0858ea1a +0x56:  movl   $0x8a,0x8(%esp)
0858ea22 +0x5e:  movl   $&_ZZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
0858ea2a +0x66:  lea    -0x18(%ebp),%eax
0858ea2d +0x69:  mov    %eax,(%esp)
0858ea30 +0x6c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858ea35 +0x71:  mov    %esi,0xc(%esp)
0858ea39 +0x75:  mov    %ebx,0x8(%esp)
0858ea3d +0x79:  movl   $"%s:'%s' GM Mode Clear Skill.",0x4(%esp)
0858ea45 +0x81:  lea    -0x18(%ebp),%eax
0858ea48 +0x84:  mov    %eax,(%esp)
0858ea4b +0x87:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858ea50 +0x8c:  mov    0xc(%ebp),%eax
0858ea53 +0x8f:  mov    %eax,(%esp)
0858ea56 +0x92:  call   0867b4c4 <_ZN5CUser11ClearSkillsEv>  ; CUser::ClearSkills()
0858ea5b +0x97:  test   %al,%al
0858ea5d +0x99:  je     0858eaa4 <+0xe0>
0858ea5f +0x9b:  mov    0xc(%ebp),%eax
0858ea62 +0x9e:  mov    %eax,(%esp)
0858ea65 +0xa1:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0858ea6a +0xa6:  mov    0xc(%ebp),%eax
0858ea6d +0xa9:  mov    %eax,(%esp)
0858ea70 +0xac:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0858ea75 +0xb1:  cmp    $0x5,%eax
0858ea78 +0xb4:  sete   %al
0858ea7b +0xb7:  test   %al,%al
0858ea7d +0xb9:  je     0858eaab <+0xe7>
0858ea7f +0xbb:  movl   $0x1,0xc(%esp)
0858ea87 +0xc3:  movl   $0x2,0x8(%esp)
0858ea8f +0xcb:  movl   $0x2,0x4(%esp)
0858ea97 +0xd3:  mov    0xc(%ebp),%eax
0858ea9a +0xd6:  mov    %eax,(%esp)
0858ea9d +0xd9:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858eaa2 +0xde:  jmp    0858eaab <+0xe7>
0858eaa4 +0xe0:  mov    $0x0,%eax
0858eaa9 +0xe5:  jmp    0858eab0 <+0xec>
0858eaab +0xe7:  mov    $0x1,%eax
0858eab0 +0xec:  add    $0x20,%esp
0858eab3 +0xef:  pop    %ebx
0858eab4 +0xf0:  pop    %esi
0858eab5 +0xf1:  pop    %ebp
0858eab6 +0xf2:  ret
0858eab7 +0xf3:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandClearSkill @ 0x858e9c4

/* DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
DisPatcher_DebugCommand::_debugCommandClearSkill(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&)"
                       ,0x8a,0);
    cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode Clear Skill.",uVar4,uVar2);
    cVar1 = CUser::ClearSkills((CUser *)param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      CUser::send_skill_info((CUser *)param_2);
      iVar5 = CUser::get_state((CUser *)param_2);
      if (iVar5 == 5) {
        CUser::SendNotiPacket((CUser *)param_2,2,2,1);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
