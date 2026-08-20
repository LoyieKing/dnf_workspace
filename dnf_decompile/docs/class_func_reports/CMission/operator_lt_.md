# operator<

`_ZN8CMissionltERKS_`

`CMission::operator<(CMission const&)`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e30ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e30ae  _ZN8CMissionltERKS_
#           CMission::operator<(CMission const&)
# range [0x085e30ae, 0x085e3123]
085e30ae +0x00:  push   %ebp
085e30af +0x01:  mov    %esp,%ebp
085e30b1 +0x03:  push   %ebx
085e30b2 +0x04:  sub    $0x14,%esp
085e30b5 +0x07:  mov    0x8(%ebp),%eax
085e30b8 +0x0a:  mov    0x8(%eax),%ebx
085e30bb +0x0d:  mov    0xc(%ebp),%eax
085e30be +0x10:  mov    %eax,(%esp)
085e30c1 +0x13:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e30c6 +0x18:  cmp    %eax,%ebx
085e30c8 +0x1a:  setne  %al
085e30cb +0x1d:  test   %al,%al
085e30cd +0x1f:  je     085e30e7 <+0x39>
085e30cf +0x21:  mov    0x8(%ebp),%eax
085e30d2 +0x24:  mov    0x8(%eax),%ebx
085e30d5 +0x27:  mov    0xc(%ebp),%eax
085e30d8 +0x2a:  mov    %eax,(%esp)
085e30db +0x2d:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e30e0 +0x32:  cmp    %eax,%ebx
085e30e2 +0x34:  setl   %al
085e30e5 +0x37:  jmp    085e311e <+0x70>
085e30e7 +0x39:  mov    0x8(%ebp),%eax
085e30ea +0x3c:  mov    0xc(%eax),%ebx
085e30ed +0x3f:  mov    0xc(%ebp),%eax
085e30f0 +0x42:  mov    %eax,(%esp)
085e30f3 +0x45:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e30f8 +0x4a:  cmp    %eax,%ebx
085e30fa +0x4c:  setne  %al
085e30fd +0x4f:  test   %al,%al
085e30ff +0x51:  je     085e3119 <+0x6b>
085e3101 +0x53:  mov    0x8(%ebp),%eax
085e3104 +0x56:  mov    0xc(%eax),%ebx
085e3107 +0x59:  mov    0xc(%ebp),%eax
085e310a +0x5c:  mov    %eax,(%esp)
085e310d +0x5f:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e3112 +0x64:  cmp    %eax,%ebx
085e3114 +0x66:  setl   %al
085e3117 +0x69:  jmp    085e311e <+0x70>
085e3119 +0x6b:  mov    $0x0,%eax
085e311e +0x70:  add    $0x14,%esp
085e3121 +0x73:  pop    %ebx
085e3122 +0x74:  pop    %ebp
085e3123 +0x75:  ret
```

## 反编译 C

```c
// CMission::operator< @ 0x85e30ae

/* CMission::TEMPNAMEPLACEHOLDERVALUE(CMission const&) */

bool __thiscall CMission::operator<(CMission *this,CMission *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 8);
  iVar3 = GetMissionKind(param_1);
  if (iVar1 == iVar3) {
    iVar1 = *(int *)(this + 0xc);
    iVar3 = GetMissionIndex(param_1);
    if (iVar1 == iVar3) {
      bVar2 = false;
    }
    else {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = GetMissionIndex(param_1);
      bVar2 = iVar1 < iVar3;
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    iVar3 = GetMissionKind(param_1);
    bVar2 = iVar1 < iVar3;
  }
  return bVar2;
}
```
