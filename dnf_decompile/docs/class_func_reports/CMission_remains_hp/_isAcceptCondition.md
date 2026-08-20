# _isAcceptCondition

`_ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser`

`CMission_remains_hp::_isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_remains_hp` | `0x085e3e5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3e5c  _ZNK19CMission_remains_hp18_isAcceptConditionERK5CUser
#           CMission_remains_hp::_isAcceptCondition(CUser const&) const
# range [0x085e3e5c, 0x085e3ec5]
085e3e5c +0x00:  push   %ebp
085e3e5d +0x01:  mov    %esp,%ebp
085e3e5f +0x03:  sub    $0x28,%esp
085e3e62 +0x06:  movl   $0x8,0x4(%esp)
085e3e6a +0x0e:  mov    0xc(%ebp),%eax
085e3e6d +0x11:  mov    %eax,(%esp)
085e3e70 +0x14:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
085e3e75 +0x19:  mov    %eax,-0xc(%ebp)
085e3e78 +0x1c:  mov    0x8(%ebp),%eax
085e3e7b +0x1f:  mov    %eax,(%esp)
085e3e7e +0x22:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e3e83 +0x27:  mov    %eax,0x4(%esp)
085e3e87 +0x2b:  mov    -0xc(%ebp),%eax
085e3e8a +0x2e:  mov    %eax,(%esp)
085e3e8d +0x31:  call   085e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>  ; CMissionList_Charac::isClearMission(int) const
085e3e92 +0x36:  test   %al,%al
085e3e94 +0x38:  je     085e3e9d <+0x41>
085e3e96 +0x3a:  mov    $0x0,%eax
085e3e9b +0x3f:  jmp    085e3ec3 <+0x67>
085e3e9d +0x41:  mov    0xc(%ebp),%eax
085e3ea0 +0x44:  mov    %eax,(%esp)
085e3ea3 +0x47:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085e3ea8 +0x4c:  mov    0x8(%ebp),%edx
085e3eab +0x4f:  mov    0x3c(%edx),%edx
085e3eae +0x52:  cmp    %edx,%eax
085e3eb0 +0x54:  sete   %al
085e3eb3 +0x57:  test   %al,%al
085e3eb5 +0x59:  je     085e3ebe <+0x62>
085e3eb7 +0x5b:  mov    $0x1,%eax
085e3ebc +0x60:  jmp    085e3ec3 <+0x67>
085e3ebe +0x62:  mov    $0x0,%eax
085e3ec3 +0x67:  leave
085e3ec4 +0x68:  ret
085e3ec5 +0x69:  nop
```

## 反编译 C

```c
// CMission_remains_hp::_isAcceptCondition @ 0x85e3e5c

/* CMission_remains_hp::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_remains_hp::_isAcceptCondition(CMission_remains_hp *this,CUser *param_1)

{
  char cVar1;
  CMissionList_Charac *this_00;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar2 = CMission::GetMissionIndex((CMission *)this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar2);
  if (cVar1 == '\0') {
    iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar2 == *(int *)(this + 0x3c)) {
      uVar3 = 1;
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
