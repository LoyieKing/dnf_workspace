# _debugCommandSetGrowType

`_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii`

`DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858ee54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858ee54  _ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii
#           DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int)
# range [0x0858ee54, 0x0858efdd]
0858ee54 +0x000:  push   %ebp
0858ee55 +0x001:  mov    %esp,%ebp
0858ee57 +0x003:  push   %esi
0858ee58 +0x004:  push   %ebx
0858ee59 +0x005:  sub    $0x30,%esp
0858ee5c +0x008:  mov    0xc(%ebp),%eax
0858ee5f +0x00b:  mov    %eax,(%esp)
0858ee62 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858ee67 +0x013:  xor    $0x1,%eax
0858ee6a +0x016:  test   %al,%al
0858ee6c +0x018:  je     0858ee78 <+0x24>
0858ee6e +0x01a:  mov    $0x0,%eax
0858ee73 +0x01f:  jmp    0858efd6 <+0x182>
0858ee78 +0x024:  mov    0xc(%ebp),%eax
0858ee7b +0x027:  mov    %eax,(%esp)
0858ee7e +0x02a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858ee83 +0x02f:  mov    %eax,%esi
0858ee85 +0x031:  mov    0xc(%ebp),%eax
0858ee88 +0x034:  mov    %eax,(%esp)
0858ee8b +0x037:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858ee90 +0x03c:  movl   $0x0,0x4(%esp)
0858ee98 +0x044:  mov    %eax,(%esp)
0858ee9b +0x047:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858eea0 +0x04c:  mov    %eax,%ebx
0858eea2 +0x04e:  movl   $0x0,0xc(%esp)
0858eeaa +0x056:  movl   $0x133,0x8(%esp)
0858eeb2 +0x05e:  movl   $&_ZZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0858eeba +0x066:  lea    -0x20(%ebp),%eax
0858eebd +0x069:  mov    %eax,(%esp)
0858eec0 +0x06c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858eec5 +0x071:  mov    %esi,0xc(%esp)
0858eec9 +0x075:  mov    %ebx,0x8(%esp)
0858eecd +0x079:  movl   $"%s:'%s' GM Mode Grow Type.",0x4(%esp)
0858eed5 +0x081:  lea    -0x20(%ebp),%eax
0858eed8 +0x084:  mov    %eax,(%esp)
0858eedb +0x087:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858eee0 +0x08c:  movl   $0x0,-0x10(%ebp)
0858eee7 +0x093:  movl   $0x0,-0xc(%ebp)
0858eeee +0x09a:  cmpl   $0x1,0x10(%ebp)
0858eef2 +0x09e:  jne    0858eefc <+0xa8>
0858eef4 +0x0a0:  mov    0x14(%ebp),%eax
0858eef7 +0x0a3:  mov    %eax,-0x10(%ebp)
0858eefa +0x0a6:  jmp    0858ef43 <+0xef>
0858eefc +0x0a8:  cmpl   $0x2,0x10(%ebp)
0858ef00 +0x0ac:  jne    0858ef39 <+0xe5>
0858ef02 +0x0ae:  mov    0xc(%ebp),%eax
0858ef05 +0x0b1:  mov    %eax,(%esp)
0858ef08 +0x0b4:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0858ef0d +0x0b9:  test   %al,%al
0858ef0f +0x0bb:  sete   %al
0858ef12 +0x0be:  test   %al,%al
0858ef14 +0x0c0:  je     0858ef20 <+0xcc>
0858ef16 +0x0c2:  mov    $0x0,%eax
0858ef1b +0x0c7:  jmp    0858efd6 <+0x182>
0858ef20 +0x0cc:  mov    0xc(%ebp),%eax
0858ef23 +0x0cf:  mov    %eax,(%esp)
0858ef26 +0x0d2:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0858ef2b +0x0d7:  movsbl %al,%eax
0858ef2e +0x0da:  mov    %eax,-0x10(%ebp)
0858ef31 +0x0dd:  mov    0x14(%ebp),%eax
0858ef34 +0x0e0:  mov    %eax,-0xc(%ebp)
0858ef37 +0x0e3:  jmp    0858ef43 <+0xef>
0858ef39 +0x0e5:  mov    $0x0,%eax
0858ef3e +0x0ea:  jmp    0858efd6 <+0x182>
0858ef43 +0x0ef:  mov    -0xc(%ebp),%eax
0858ef46 +0x0f2:  mov    %eax,0x8(%esp)
0858ef4a +0x0f6:  mov    -0x10(%ebp),%eax
0858ef4d +0x0f9:  mov    %eax,0x4(%esp)
0858ef51 +0x0fd:  mov    0xc(%ebp),%eax
0858ef54 +0x100:  mov    %eax,(%esp)
0858ef57 +0x103:  call   0867b048 <_ZN5CUser17ChangeGrowType_GMEii>  ; CUser::ChangeGrowType_GM(int, int)
0858ef5c +0x108:  test   %al,%al
0858ef5e +0x10a:  je     0858efd1 <+0x17d>
0858ef60 +0x10c:  mov    0xc(%ebp),%eax
0858ef63 +0x10f:  mov    %eax,(%esp)
0858ef66 +0x112:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0858ef6b +0x117:  cmp    $0x3,%eax
0858ef6e +0x11a:  je     0858ef77 <+0x123>
0858ef70 +0x11c:  cmp    $0x5,%eax
0858ef73 +0x11f:  je     0858ef9c <+0x148>
0858ef75 +0x121:  jmp    0858efbf <+0x16b>
0858ef77 +0x123:  movl   $0x0,0xc(%esp)
0858ef7f +0x12b:  movl   $0x2,0x8(%esp)
0858ef87 +0x133:  movl   $0x0,0x4(%esp)
0858ef8f +0x13b:  mov    0xc(%ebp),%eax
0858ef92 +0x13e:  mov    %eax,(%esp)
0858ef95 +0x141:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858ef9a +0x146:  jmp    0858efbf <+0x16b>
0858ef9c +0x148:  movl   $0x1,0xc(%esp)
0858efa4 +0x150:  movl   $0x2,0x8(%esp)
0858efac +0x158:  movl   $0x2,0x4(%esp)
0858efb4 +0x160:  mov    0xc(%ebp),%eax
0858efb7 +0x163:  mov    %eax,(%esp)
0858efba +0x166:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858efbf +0x16b:  mov    0xc(%ebp),%eax
0858efc2 +0x16e:  mov    %eax,(%esp)
0858efc5 +0x171:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0858efca +0x176:  mov    $0x1,%eax
0858efcf +0x17b:  jmp    0858efd6 <+0x182>
0858efd1 +0x17d:  mov    $0x0,%eax
0858efd6 +0x182:  add    $0x30,%esp
0858efd9 +0x185:  pop    %ebx
0858efda +0x186:  pop    %esi
0858efdb +0x187:  pop    %ebp
0858efdc +0x188:  ret
0858efdd +0x189:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetGrowType @ 0x858ee54

/* DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandSetGrowType
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\x01') {
    return 0;
  }
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar3 = CUser::get_acc_id(param_1);
  uVar4 = NumberToString(uVar3,0);
  cMyTrace::cMyTrace(local_24,
                     "bool DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int)",
                     0x133,0);
  cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Grow Type.",uVar4,uVar2);
  local_14 = 0;
  local_10 = 0;
  if (param_2 == 1) {
    local_14 = param_3;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_14 = (int)cVar1;
    local_10 = param_3;
  }
  cVar1 = CUser::ChangeGrowType_GM(param_1,local_14,local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      CUser::SendNotiPacket(param_1,0,2,0);
    }
    else if (iVar5 == 5) {
      CUser::SendNotiPacket(param_1,2,2,1);
    }
    CUser::send_skill_info(param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```
