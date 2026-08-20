# _debugCommandMasterNewSkill

`_ZN23DisPatcher_DebugCommand27_debugCommandMasterNewSkillEP5CUserii`

`DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858ebcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858ebcc  _ZN23DisPatcher_DebugCommand27_debugCommandMasterNewSkillEP5CUserii
#           DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int)
# range [0x0858ebcc, 0x0858ec9b]
0858ebcc +0x00:  push   %ebp
0858ebcd +0x01:  mov    %esp,%ebp
0858ebcf +0x03:  push   %esi
0858ebd0 +0x04:  push   %ebx
0858ebd1 +0x05:  sub    $0x40,%esp
0858ebd4 +0x08:  mov    0xc(%ebp),%eax
0858ebd7 +0x0b:  mov    %eax,(%esp)
0858ebda +0x0e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858ebdf +0x13:  xor    $0x1,%eax
0858ebe2 +0x16:  test   %al,%al
0858ebe4 +0x18:  je     0858ebf0 <+0x24>
0858ebe6 +0x1a:  mov    $0x0,%eax
0858ebeb +0x1f:  jmp    0858ec95 <+0xc9>
0858ebf0 +0x24:  movb   $0x0,-0x1b(%ebp)
0858ebf4 +0x28:  mov    0x10(%ebp),%eax
0858ebf7 +0x2b:  mov    %al,-0x1a(%ebp)
0858ebfa +0x2e:  mov    0x14(%ebp),%eax
0858ebfd +0x31:  mov    %al,-0x19(%ebp)
0858ec00 +0x34:  movl   $0x0,0x8(%esp)
0858ec08 +0x3c:  lea    -0x1b(%ebp),%eax
0858ec0b +0x3f:  mov    %eax,0x4(%esp)
0858ec0f +0x43:  mov    0xc(%ebp),%eax
0858ec12 +0x46:  mov    %eax,(%esp)
0858ec15 +0x49:  call   0866afa2 <_ZN5CUser16master_new_skillER14stBuySkillInfob>  ; CUser::master_new_skill(stBuySkillInfo&, bool)
0858ec1a +0x4e:  mov    0xc(%ebp),%eax
0858ec1d +0x51:  mov    %eax,(%esp)
0858ec20 +0x54:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858ec25 +0x59:  mov    %eax,%esi
0858ec27 +0x5b:  mov    0xc(%ebp),%eax
0858ec2a +0x5e:  mov    %eax,(%esp)
0858ec2d +0x61:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858ec32 +0x66:  movl   $0x0,0x4(%esp)
0858ec3a +0x6e:  mov    %eax,(%esp)
0858ec3d +0x71:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858ec42 +0x76:  mov    %eax,%ebx
0858ec44 +0x78:  movl   $0x0,0xc(%esp)
0858ec4c +0x80:  movl   $0xbd,0x8(%esp)
0858ec54 +0x88:  movl   $&_ZZN23DisPatcher_DebugCommand27_debugCommandMasterNewSkillEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
0858ec5c +0x90:  lea    -0x18(%ebp),%eax
0858ec5f +0x93:  mov    %eax,(%esp)
0858ec62 +0x96:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858ec67 +0x9b:  mov    0x14(%ebp),%eax
0858ec6a +0x9e:  mov    %eax,0x14(%esp)
0858ec6e +0xa2:  mov    0x10(%ebp),%eax
0858ec71 +0xa5:  mov    %eax,0x10(%esp)
0858ec75 +0xa9:  mov    %esi,0xc(%esp)
0858ec79 +0xad:  mov    %ebx,0x8(%esp)
0858ec7d +0xb1:  movl   $"%s:'%s' GM Mode Set Skill(%d) Level(%d).",0x4(%esp)
0858ec85 +0xb9:  lea    -0x18(%ebp),%eax
0858ec88 +0xbc:  mov    %eax,(%esp)
0858ec8b +0xbf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858ec90 +0xc4:  mov    $0x1,%eax
0858ec95 +0xc9:  add    $0x40,%esp
0858ec98 +0xcc:  pop    %ebx
0858ec99 +0xcd:  pop    %esi
0858ec9a +0xce:  pop    %ebp
0858ec9b +0xcf:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandMasterNewSkill @ 0x858ebcc

/* DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandMasterNewSkill
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    local_1f = 0;
    local_1e = (undefined1)param_2;
    local_1d = (undefined1)param_3;
    CUser::master_new_skill((stBuySkillInfo *)param_1,SUB41(&local_1f,0));
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int)"
                       ,0xbd,0);
    cMyTrace::operator()
              (local_1c,"%s:\'%s\' GM Mode Set Skill(%d) Level(%d).",uVar4,uVar2,param_2,param_3);
  }
  return cVar1 == '\x01';
}
```
