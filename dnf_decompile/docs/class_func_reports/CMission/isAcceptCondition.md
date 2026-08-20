# isAcceptCondition

`_ZNK8CMission17isAcceptConditionERK5CUser`

`CMission::isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e318e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e318e  _ZNK8CMission17isAcceptConditionERK5CUser
#           CMission::isAcceptCondition(CUser const&) const
# range [0x085e318e, 0x085e3279]
085e318e +0x00:  push   %ebp
085e318f +0x01:  mov    %esp,%ebp
085e3191 +0x03:  push   %ebx
085e3192 +0x04:  sub    $0x24,%esp
085e3195 +0x07:  movl   $0x8,0x4(%esp)
085e319d +0x0f:  mov    0xc(%ebp),%eax
085e31a0 +0x12:  mov    %eax,(%esp)
085e31a3 +0x15:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
085e31a8 +0x1a:  mov    %eax,-0x10(%ebp)
085e31ab +0x1d:  mov    0x8(%ebp),%eax
085e31ae +0x20:  mov    %eax,(%esp)
085e31b1 +0x23:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e31b6 +0x28:  mov    %eax,0x4(%esp)
085e31ba +0x2c:  mov    -0x10(%ebp),%eax
085e31bd +0x2f:  mov    %eax,(%esp)
085e31c0 +0x32:  call   085e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>  ; CMissionList_Charac::getIndex_byKind(int) const
085e31c5 +0x37:  test   %ax,%ax
085e31c8 +0x3a:  setne  %al
085e31cb +0x3d:  test   %al,%al
085e31cd +0x3f:  je     085e31d9 <+0x4b>
085e31cf +0x41:  mov    $0x0,%eax
085e31d4 +0x46:  jmp    085e3274 <+0xe6>
085e31d9 +0x4b:  mov    0x8(%ebp),%eax
085e31dc +0x4e:  mov    0x18(%eax),%eax
085e31df +0x51:  cmp    $0xffffffff,%eax
085e31e2 +0x54:  je     085e3215 <+0x87>
085e31e4 +0x56:  mov    0x8(%ebp),%eax
085e31e7 +0x59:  mov    0x18(%eax),%ebx
085e31ea +0x5c:  mov    0xc(%ebp),%eax
085e31ed +0x5f:  mov    %eax,(%esp)
085e31f0 +0x62:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085e31f5 +0x67:  cmp    %eax,%ebx
085e31f7 +0x69:  jg     085e320e <+0x80>
085e31f9 +0x6b:  mov    0xc(%ebp),%eax
085e31fc +0x6e:  mov    %eax,(%esp)
085e31ff +0x71:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085e3204 +0x76:  mov    0x8(%ebp),%edx
085e3207 +0x79:  mov    0x1c(%edx),%edx
085e320a +0x7c:  cmp    %edx,%eax
085e320c +0x7e:  jl     085e3215 <+0x87>
085e320e +0x80:  mov    $0x1,%eax
085e3213 +0x85:  jmp    085e321a <+0x8c>
085e3215 +0x87:  mov    $0x0,%eax
085e321a +0x8c:  test   %al,%al
085e321c +0x8e:  je     085e3225 <+0x97>
085e321e +0x90:  mov    $0x0,%eax
085e3223 +0x95:  jmp    085e3274 <+0xe6>
085e3225 +0x97:  mov    0xc(%ebp),%eax
085e3228 +0x9a:  mov    %eax,(%esp)
085e322b +0x9d:  call   086626e0 <_ZNK5CUser33get_pvp_WinningRate_relateMissionEv>  ; CUser::get_pvp_WinningRate_relateMission() const
085e3230 +0xa2:  mov    %eax,-0xc(%ebp)
085e3233 +0xa5:  mov    0x8(%ebp),%eax
085e3236 +0xa8:  mov    0x20(%eax),%eax
085e3239 +0xab:  cmp    $0xffffffff,%eax
085e323c +0xae:  je     085e325b <+0xcd>
085e323e +0xb0:  mov    0x8(%ebp),%eax
085e3241 +0xb3:  mov    0x20(%eax),%eax
085e3244 +0xb6:  cmp    -0xc(%ebp),%eax
085e3247 +0xb9:  jg     085e3254 <+0xc6>
085e3249 +0xbb:  mov    0x8(%ebp),%eax
085e324c +0xbe:  mov    0x24(%eax),%eax
085e324f +0xc1:  cmp    -0xc(%ebp),%eax
085e3252 +0xc4:  jg     085e325b <+0xcd>
085e3254 +0xc6:  mov    $0x0,%eax
085e3259 +0xcb:  jmp    085e3274 <+0xe6>
085e325b +0xcd:  mov    0x8(%ebp),%eax
085e325e +0xd0:  mov    (%eax),%eax
085e3260 +0xd2:  add    $0x8,%eax
085e3263 +0xd5:  mov    (%eax),%edx
085e3265 +0xd7:  mov    0xc(%ebp),%eax
085e3268 +0xda:  mov    %eax,0x4(%esp)
085e326c +0xde:  mov    0x8(%ebp),%eax
085e326f +0xe1:  mov    %eax,(%esp)
085e3272 +0xe4:  call   *%edx
085e3274 +0xe6:  add    $0x24,%esp
085e3277 +0xe9:  pop    %ebx
085e3278 +0xea:  pop    %ebp
085e3279 +0xeb:  ret
```

## 反编译 C

```c
// CMission::isAcceptCondition @ 0x85e318e

/* CMission::isAcceptCondition(CUser const&) const */

undefined4 __thiscall CMission::isAcceptCondition(CMission *this,CUser *param_1)

{
  bool bVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar3 = GetMissionKind(this);
  sVar2 = CMissionList_Charac::getIndex_byKind(this_00,iVar3);
  if (sVar2 == 0) {
    if ((*(int *)(this + 0x18) == -1) ||
       ((iVar3 = *(int *)(this + 0x18),
        iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar3 <= iVar4 &&
        (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1),
        iVar3 < *(int *)(this + 0x1c))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      iVar3 = CUser::get_pvp_WinningRate_relateMission(param_1);
      if ((*(int *)(this + 0x20) == -1) ||
         ((*(int *)(this + 0x20) <= iVar3 && (iVar3 < *(int *)(this + 0x24))))) {
        uVar5 = (**(code **)(*(int *)this + 8))(this,param_1);
      }
      else {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0;
}
```
