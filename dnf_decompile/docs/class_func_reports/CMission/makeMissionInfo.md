# makeMissionInfo

`_ZNK8CMission15makeMissionInfoER11MissionInfoRK5CUser`

`CMission::makeMissionInfo(MissionInfo&, CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e3124` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e3124  _ZNK8CMission15makeMissionInfoER11MissionInfoRK5CUser
#           CMission::makeMissionInfo(MissionInfo&, CUser const&) const
# range [0x085e3124, 0x085e3187]
085e3124 +0x00:  push   %ebp
085e3125 +0x01:  mov    %esp,%ebp
085e3127 +0x03:  sub    $0x18,%esp
085e312a +0x06:  mov    0x8(%ebp),%eax
085e312d +0x09:  mov    %eax,(%esp)
085e3130 +0x0c:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e3135 +0x11:  mov    %eax,%edx
085e3137 +0x13:  mov    0xc(%ebp),%eax
085e313a +0x16:  mov    %dx,(%eax)
085e313d +0x19:  mov    0x8(%ebp),%eax
085e3140 +0x1c:  mov    %eax,(%esp)
085e3143 +0x1f:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e3148 +0x24:  mov    %eax,%edx
085e314a +0x26:  mov    0xc(%ebp),%eax
085e314d +0x29:  mov    %dx,0x2(%eax)
085e3151 +0x2d:  mov    0xc(%ebp),%eax
085e3154 +0x30:  movw   $0x0,0x4(%eax)
085e315a +0x36:  mov    0xc(%ebp),%eax
085e315d +0x39:  movw   $0x0,0x6(%eax)
085e3163 +0x3f:  mov    0x8(%ebp),%eax
085e3166 +0x42:  mov    (%eax),%eax
085e3168 +0x44:  mov    (%eax),%edx
085e316a +0x46:  mov    0x10(%ebp),%eax
085e316d +0x49:  mov    %eax,0x8(%esp)
085e3171 +0x4d:  mov    0xc(%ebp),%eax
085e3174 +0x50:  mov    %eax,0x4(%esp)
085e3178 +0x54:  mov    0x8(%ebp),%eax
085e317b +0x57:  mov    %eax,(%esp)
085e317e +0x5a:  call   *%edx
085e3180 +0x5c:  mov    $0x1,%eax
085e3185 +0x61:  leave
085e3186 +0x62:  ret
085e3187 +0x63:  nop
```

## 反编译 C

```c
// CMission::makeMissionInfo @ 0x85e3124

/* CMission::makeMissionInfo(MissionInfo&, CUser const&) const */

undefined4 __thiscall CMission::makeMissionInfo(CMission *this,MissionInfo *param_1,CUser *param_2)

{
  undefined2 uVar1;
  
  uVar1 = GetMissionKind(this);
  *(undefined2 *)param_1 = uVar1;
  uVar1 = GetMissionIndex(this);
  *(undefined2 *)(param_1 + 2) = uVar1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  (*(code *)**(undefined4 **)this)(this,param_1,param_2);
  return 1;
}
```
