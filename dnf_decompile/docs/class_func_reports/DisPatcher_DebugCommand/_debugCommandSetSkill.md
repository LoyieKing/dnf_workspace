# _debugCommandSetSkill

`_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii`

`DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858eab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858eab8  _ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii
#           DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int)
# range [0x0858eab8, 0x0858ebcb]
0858eab8 +0x000:  push   %ebp
0858eab9 +0x001:  mov    %esp,%ebp
0858eabb +0x003:  push   %esi
0858eabc +0x004:  push   %ebx
0858eabd +0x005:  sub    $0x30,%esp
0858eac0 +0x008:  mov    0xc(%ebp),%eax
0858eac3 +0x00b:  mov    %eax,(%esp)
0858eac6 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858eacb +0x013:  xor    $0x1,%eax
0858eace +0x016:  test   %al,%al
0858ead0 +0x018:  je     0858eadc <+0x24>
0858ead2 +0x01a:  mov    $0x0,%eax
0858ead7 +0x01f:  jmp    0858ebc4 <+0x10c>
0858eadc +0x024:  mov    0x14(%ebp),%eax
0858eadf +0x027:  mov    %eax,0x8(%esp)
0858eae3 +0x02b:  mov    0x10(%ebp),%eax
0858eae6 +0x02e:  mov    %eax,0x4(%esp)
0858eaea +0x032:  mov    0xc(%ebp),%eax
0858eaed +0x035:  mov    %eax,(%esp)
0858eaf0 +0x038:  call   0867b51c <_ZN5CUser13SetSkillLevelEii>  ; CUser::SetSkillLevel(int, int)
0858eaf5 +0x03d:  test   %al,%al
0858eaf7 +0x03f:  je     0858ebb8 <+0x100>
0858eafd +0x045:  mov    0xc(%ebp),%eax
0858eb00 +0x048:  mov    %eax,(%esp)
0858eb03 +0x04b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858eb08 +0x050:  mov    %eax,%esi
0858eb0a +0x052:  mov    0xc(%ebp),%eax
0858eb0d +0x055:  mov    %eax,(%esp)
0858eb10 +0x058:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858eb15 +0x05d:  movl   $0x0,0x4(%esp)
0858eb1d +0x065:  mov    %eax,(%esp)
0858eb20 +0x068:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858eb25 +0x06d:  mov    %eax,%ebx
0858eb27 +0x06f:  movl   $0x0,0xc(%esp)
0858eb2f +0x077:  movl   $0xa2,0x8(%esp)
0858eb37 +0x07f:  movl   $&_ZZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0858eb3f +0x087:  lea    -0x18(%ebp),%eax
0858eb42 +0x08a:  mov    %eax,(%esp)
0858eb45 +0x08d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858eb4a +0x092:  mov    0x14(%ebp),%eax
0858eb4d +0x095:  mov    %eax,0x14(%esp)
0858eb51 +0x099:  mov    0x10(%ebp),%eax
0858eb54 +0x09c:  mov    %eax,0x10(%esp)
0858eb58 +0x0a0:  mov    %esi,0xc(%esp)
0858eb5c +0x0a4:  mov    %ebx,0x8(%esp)
0858eb60 +0x0a8:  movl   $"%s:'%s' GM Mode Set Skill(%d) Level(%d).",0x4(%esp)
0858eb68 +0x0b0:  lea    -0x18(%ebp),%eax
0858eb6b +0x0b3:  mov    %eax,(%esp)
0858eb6e +0x0b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858eb73 +0x0bb:  mov    0xc(%ebp),%eax
0858eb76 +0x0be:  mov    %eax,(%esp)
0858eb79 +0x0c1:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0858eb7e +0x0c6:  mov    0xc(%ebp),%eax
0858eb81 +0x0c9:  mov    %eax,(%esp)
0858eb84 +0x0cc:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0858eb89 +0x0d1:  cmp    $0x5,%eax
0858eb8c +0x0d4:  sete   %al
0858eb8f +0x0d7:  test   %al,%al
0858eb91 +0x0d9:  je     0858ebbf <+0x107>
0858eb93 +0x0db:  movl   $0x1,0xc(%esp)
0858eb9b +0x0e3:  movl   $0x2,0x8(%esp)
0858eba3 +0x0eb:  movl   $0x2,0x4(%esp)
0858ebab +0x0f3:  mov    0xc(%ebp),%eax
0858ebae +0x0f6:  mov    %eax,(%esp)
0858ebb1 +0x0f9:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0858ebb6 +0x0fe:  jmp    0858ebbf <+0x107>
0858ebb8 +0x100:  mov    $0x0,%eax
0858ebbd +0x105:  jmp    0858ebc4 <+0x10c>
0858ebbf +0x107:  mov    $0x1,%eax
0858ebc4 +0x10c:  add    $0x30,%esp
0858ebc7 +0x10f:  pop    %ebx
0858ebc8 +0x110:  pop    %esi
0858ebc9 +0x111:  pop    %ebp
0858ebca +0x112:  ret
0858ebcb +0x113:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetSkill @ 0x858eab8

/* DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandSetSkill
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    cVar1 = CUser::SetSkillLevel(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar3 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar3,0);
      cMyTrace::cMyTrace(local_1c,
                         "bool DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int)",
                         0xa2,0);
      cMyTrace::operator()
                (local_1c,"%s:\'%s\' GM Mode Set Skill(%d) Level(%d).",uVar4,uVar2,param_2,param_3);
      CUser::send_skill_info(param_1);
      iVar5 = CUser::get_state(param_1);
      if (iVar5 == 5) {
        CUser::SendNotiPacket(param_1,2,2,1);
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
