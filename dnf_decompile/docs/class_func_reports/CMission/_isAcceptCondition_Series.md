# _isAcceptCondition_Series

`_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser`

`CMission::_isAcceptCondition_Series(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e3490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3490  _ZNK8CMission25_isAcceptCondition_SeriesERK5CUser
#           CMission::_isAcceptCondition_Series(CUser const&) const
# range [0x085e3490, 0x085e3547]
085e3490 +0x00:  push   %ebp
085e3491 +0x01:  mov    %esp,%ebp
085e3493 +0x03:  sub    $0x28,%esp
085e3496 +0x06:  movl   $0x8,0x4(%esp)
085e349e +0x0e:  mov    0xc(%ebp),%eax
085e34a1 +0x11:  mov    %eax,(%esp)
085e34a4 +0x14:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
085e34a9 +0x19:  mov    %eax,-0xc(%ebp)
085e34ac +0x1c:  mov    0x8(%ebp),%eax
085e34af +0x1f:  mov    %eax,(%esp)
085e34b2 +0x22:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e34b7 +0x27:  mov    %eax,0x4(%esp)
085e34bb +0x2b:  mov    -0xc(%ebp),%eax
085e34be +0x2e:  mov    %eax,(%esp)
085e34c1 +0x31:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e34c6 +0x36:  test   %al,%al
085e34c8 +0x38:  je     085e34d1 <+0x41>
085e34ca +0x3a:  mov    $0x0,%eax
085e34cf +0x3f:  jmp    085e3545 <+0xb5>
085e34d1 +0x41:  mov    0x8(%ebp),%eax
085e34d4 +0x44:  mov    %eax,(%esp)
085e34d7 +0x47:  call   085e691e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa6
085e34dc +0x4c:  cmp    $0xffffffff,%eax
085e34df +0x4f:  sete   %al
085e34e2 +0x52:  test   %al,%al
085e34e4 +0x54:  je     085e34ed <+0x5d>
085e34e6 +0x56:  mov    $0x1,%eax
085e34eb +0x5b:  jmp    085e3545 <+0xb5>
085e34ed +0x5d:  mov    0x8(%ebp),%eax
085e34f0 +0x60:  mov    %eax,(%esp)
085e34f3 +0x63:  call   085e691e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xa6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xa6
085e34f8 +0x68:  mov    %eax,0x4(%esp)
085e34fc +0x6c:  mov    -0xc(%ebp),%eax
085e34ff +0x6f:  mov    %eax,(%esp)
085e3502 +0x72:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e3507 +0x77:  xor    $0x1,%eax
085e350a +0x7a:  test   %al,%al
085e350c +0x7c:  je     085e3515 <+0x85>
085e350e +0x7e:  mov    $0x0,%eax
085e3513 +0x83:  jmp    085e3545 <+0xb5>
085e3515 +0x85:  mov    0x8(%ebp),%eax
085e3518 +0x88:  mov    %eax,(%esp)
085e351b +0x8b:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e3520 +0x90:  mov    %eax,0x4(%esp)
085e3524 +0x94:  mov    -0xc(%ebp),%eax
085e3527 +0x97:  mov    %eax,(%esp)
085e352a +0x9a:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e352f +0x9f:  test   %ax,%ax
085e3532 +0xa2:  setne  %al
085e3535 +0xa5:  test   %al,%al
085e3537 +0xa7:  je     085e3540 <+0xb0>
085e3539 +0xa9:  mov    $0x0,%eax
085e353e +0xae:  jmp    085e3545 <+0xb5>
085e3540 +0xb0:  mov    $0x1,%eax
085e3545 +0xb5:  leave
085e3546 +0xb6:  ret
085e3547 +0xb7:  nop
```

## 反编译 C

```c
// CMission::_isAcceptCondition_Series @ 0x85e3490

/* CMission::_isAcceptCondition_Series(CUser const&) const */

undefined4 __thiscall CMission::_isAcceptCondition_Series(CMission *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar3 = GetMissionIndex(this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar3);
  if (cVar1 == '\0') {
    iVar3 = GetPrevMissionIndex(this);
    if (iVar3 == -1) {
      uVar4 = 1;
    }
    else {
      iVar3 = GetPrevMissionIndex(this);
      cVar1 = CMissionList_Charac::isClearMission(this_00,iVar3);
      if (cVar1 == '\x01') {
        iVar3 = GetMissionKind(this);
        sVar2 = CMissionList_Charac::getIndex_byKind(this_00,iVar3);
        if (sVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
