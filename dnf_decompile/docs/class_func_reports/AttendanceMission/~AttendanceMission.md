# ~AttendanceMission

`_ZN17AttendanceMissionD1Ev`

`AttendanceMission::~AttendanceMission()`

| 类 | 地址 |
|---|---|
| `AttendanceMission` | `0x08165fb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165fb4  _ZN17AttendanceMissionD1Ev
#           AttendanceMission::~AttendanceMission()
# range [0x08165fb4, 0x08165fe3]
08165fb4 +0x00:  push   %ebp
08165fb5 +0x01:  mov    %esp,%ebp
08165fb7 +0x03:  sub    $0x18,%esp
08165fba +0x06:  mov    0x8(%ebp),%eax
08165fbd +0x09:  movl   $&_ZTV17AttendanceMission+0x8,(%eax)
08165fc3 +0x0f:  mov    0x8(%ebp),%eax
08165fc6 +0x12:  mov    %eax,(%esp)
08165fc9 +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
08165fce +0x1a:  mov    $0x0,%eax
08165fd3 +0x1f:  test   %al,%al
08165fd5 +0x21:  je     08165fe2 <+0x2e>
08165fd7 +0x23:  mov    0x8(%ebp),%eax
08165fda +0x26:  mov    %eax,(%esp)
08165fdd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165fe2 +0x2e:  leave
08165fe3 +0x2f:  ret
```

## 反编译 C

```c
// AttendanceMission::~AttendanceMission @ 0x8165fb4

/* WARNING: Removing unreachable block (ram,0x08165fd7) */
/* AttendanceMission::~AttendanceMission() */

void __thiscall AttendanceMission::~AttendanceMission(AttendanceMission *this)

{
  *(undefined ***)this = &PTR__AttendanceMission_08b7f060;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
