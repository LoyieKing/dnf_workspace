# ~UseCubeMission

`_ZN14UseCubeMissionD1Ev`

`UseCubeMission::~UseCubeMission()`

| 类 | 地址 |
|---|---|
| `UseCubeMission` | `0x08165944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165944  _ZN14UseCubeMissionD1Ev
#           UseCubeMission::~UseCubeMission()
# range [0x08165944, 0x08165973]
08165944 +0x00:  push   %ebp
08165945 +0x01:  mov    %esp,%ebp
08165947 +0x03:  sub    $0x18,%esp
0816594a +0x06:  mov    0x8(%ebp),%eax
0816594d +0x09:  movl   $&_ZTV14UseCubeMission+0x8,(%eax)
08165953 +0x0f:  mov    0x8(%ebp),%eax
08165956 +0x12:  mov    %eax,(%esp)
08165959 +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
0816595e +0x1a:  mov    $0x0,%eax
08165963 +0x1f:  test   %al,%al
08165965 +0x21:  je     08165972 <+0x2e>
08165967 +0x23:  mov    0x8(%ebp),%eax
0816596a +0x26:  mov    %eax,(%esp)
0816596d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165972 +0x2e:  leave
08165973 +0x2f:  ret
```

## 反编译 C

```c
// UseCubeMission::~UseCubeMission @ 0x8165944

/* WARNING: Removing unreachable block (ram,0x08165967) */
/* UseCubeMission::~UseCubeMission() */

void __thiscall UseCubeMission::~UseCubeMission(UseCubeMission *this)

{
  *(undefined ***)this = &PTR__UseCubeMission_08b7f090;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
