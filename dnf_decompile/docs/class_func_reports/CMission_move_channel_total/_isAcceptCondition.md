# _isAcceptCondition

`_ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser`

`CMission_move_channel_total::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_move_channel_total` | `0x085e3fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3fce  _ZNK27CMission_move_channel_total18_isAcceptConditionERK5CUser
#           CMission_move_channel_total::_isAcceptCondition(CUser const&) const
# range [0x085e3fce, 0x085e40a1]
085e3fce +0x00:  push   %ebp
085e3fcf +0x01:  mov    %esp,%ebp
085e3fd1 +0x03:  sub    $0x28,%esp
085e3fd4 +0x06:  movl   $0x8,0x4(%esp)
085e3fdc +0x0e:  mov    0xc(%ebp),%eax
085e3fdf +0x11:  mov    %eax,(%esp)
085e3fe2 +0x14:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
085e3fe7 +0x19:  mov    %eax,-0xc(%ebp)
085e3fea +0x1c:  movl   $0x1b,0x4(%esp)
085e3ff2 +0x24:  mov    -0xc(%ebp),%eax
085e3ff5 +0x27:  mov    %eax,(%esp)
085e3ff8 +0x2a:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e3ffd +0x2f:  test   %ax,%ax
085e4000 +0x32:  setne  %al
085e4003 +0x35:  test   %al,%al
085e4005 +0x37:  je     085e4011 <+0x43>
085e4007 +0x39:  mov    $0x0,%eax
085e400c +0x3e:  jmp    085e40a0 <+0xd2>
085e4011 +0x43:  mov    0x8(%ebp),%eax
085e4014 +0x46:  mov    %eax,(%esp)
085e4017 +0x49:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e401c +0x4e:  mov    %eax,0x4(%esp)
085e4020 +0x52:  mov    -0xc(%ebp),%eax
085e4023 +0x55:  mov    %eax,(%esp)
085e4026 +0x58:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e402b +0x5d:  test   %al,%al
085e402d +0x5f:  je     085e4036 <+0x68>
085e402f +0x61:  mov    $0x0,%eax
085e4034 +0x66:  jmp    085e40a0 <+0xd2>
085e4036 +0x68:  mov    0x8(%ebp),%eax
085e4039 +0x6b:  mov    %eax,(%esp)
085e403c +0x6e:  call   085e691e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa6
085e4041 +0x73:  cmp    $0xffffffff,%eax
085e4044 +0x76:  sete   %al
085e4047 +0x79:  test   %al,%al
085e4049 +0x7b:  je     085e4052 <+0x84>
085e404b +0x7d:  mov    $0x0,%eax
085e4050 +0x82:  jmp    085e40a0 <+0xd2>
085e4052 +0x84:  mov    0x8(%ebp),%eax
085e4055 +0x87:  mov    %eax,(%esp)
085e4058 +0x8a:  call   085e691e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa6
085e405d +0x8f:  mov    %eax,0x4(%esp)
085e4061 +0x93:  mov    -0xc(%ebp),%eax
085e4064 +0x96:  mov    %eax,(%esp)
085e4067 +0x99:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e406c +0x9e:  test   %al,%al
085e406e +0xa0:  je     085e4077 <+0xa9>
085e4070 +0xa2:  mov    $0x0,%eax
085e4075 +0xa7:  jmp    085e40a0 <+0xd2>
085e4077 +0xa9:  movl   $0x7,0x4(%esp)
085e407f +0xb1:  mov    -0xc(%ebp),%eax
085e4082 +0xb4:  mov    %eax,(%esp)
085e4085 +0xb7:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e408a +0xbc:  test   %ax,%ax
085e408d +0xbf:  setne  %al
085e4090 +0xc2:  test   %al,%al
085e4092 +0xc4:  je     085e409b <+0xcd>
085e4094 +0xc6:  mov    $0x0,%eax
085e4099 +0xcb:  jmp    085e40a0 <+0xd2>
085e409b +0xcd:  mov    $0x1,%eax
085e40a0 +0xd2:  leave
085e40a1 +0xd3:  ret
```

## 反编译 C

```c
// CMission_move_channel_total::_isAcceptCondition @ 0x85e3fce

/* CMission_move_channel_total::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_move_channel_total::_isAcceptCondition(CMission_move_channel_total *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  sVar2 = CMissionList_Charac::getIndex_byKind(this_00,0x1b);
  if (sVar2 == 0) {
    iVar4 = CMission::GetMissionIndex((CMission *)this);
    cVar1 = CMissionList_Charac::isClearMission(this_00,iVar4);
    if (cVar1 == '\0') {
      iVar4 = CMission::GetPrevMissionIndex((CMission *)this);
      if (iVar4 == -1) {
        uVar3 = 0;
      }
      else {
        iVar4 = CMission::GetPrevMissionIndex((CMission *)this);
        cVar1 = CMissionList_Charac::isClearMission(this_00,iVar4);
        if (cVar1 == '\0') {
          sVar2 = CMissionList_Charac::getIndex_byKind(this_00,7);
          if (sVar2 == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
