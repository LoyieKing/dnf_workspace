# ~UseFatigueMission

`_ZN17UseFatigueMissionD1Ev`

`UseFatigueMission::~UseFatigueMission()`

| 类 | 地址 |
|---|---|
| `UseFatigueMission` | `0x081656b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081656b8  _ZN17UseFatigueMissionD1Ev
#           UseFatigueMission::~UseFatigueMission()
# range [0x081656b8, 0x081656e7]
081656b8 +0x00:  push   %ebp
081656b9 +0x01:  mov    %esp,%ebp
081656bb +0x03:  sub    $0x18,%esp
081656be +0x06:  mov    0x8(%ebp),%eax
081656c1 +0x09:  movl   $&_ZTV17UseFatigueMission+0x8,(%eax)
081656c7 +0x0f:  mov    0x8(%ebp),%eax
081656ca +0x12:  mov    %eax,(%esp)
081656cd +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
081656d2 +0x1a:  mov    $0x0,%eax
081656d7 +0x1f:  test   %al,%al
081656d9 +0x21:  je     081656e6 <+0x2e>
081656db +0x23:  mov    0x8(%ebp),%eax
081656de +0x26:  mov    %eax,(%esp)
081656e1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081656e6 +0x2e:  leave
081656e7 +0x2f:  ret
```

## 反编译 C

```c
// UseFatigueMission::~UseFatigueMission @ 0x81656b8

/* WARNING: Removing unreachable block (ram,0x081656db) */
/* UseFatigueMission::~UseFatigueMission() */

void __thiscall UseFatigueMission::~UseFatigueMission(UseFatigueMission *this)

{
  *(undefined ***)this = &PTR__UseFatigueMission_08b7f0a8;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
