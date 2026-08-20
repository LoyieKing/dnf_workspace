# ~LevelUpMission

`_ZN14LevelUpMissionD1Ev`

`LevelUpMission::~LevelUpMission()`

| 类 | 地址 |
|---|---|
| `LevelUpMission` | `0x08165bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165bd0  _ZN14LevelUpMissionD1Ev
#           LevelUpMission::~LevelUpMission()
# range [0x08165bd0, 0x08165bff]
08165bd0 +0x00:  push   %ebp
08165bd1 +0x01:  mov    %esp,%ebp
08165bd3 +0x03:  sub    $0x18,%esp
08165bd6 +0x06:  mov    0x8(%ebp),%eax
08165bd9 +0x09:  movl   $&_ZTV14LevelUpMission+0x8,(%eax)
08165bdf +0x0f:  mov    0x8(%ebp),%eax
08165be2 +0x12:  mov    %eax,(%esp)
08165be5 +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
08165bea +0x1a:  mov    $0x0,%eax
08165bef +0x1f:  test   %al,%al
08165bf1 +0x21:  je     08165bfe <+0x2e>
08165bf3 +0x23:  mov    0x8(%ebp),%eax
08165bf6 +0x26:  mov    %eax,(%esp)
08165bf9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165bfe +0x2e:  leave
08165bff +0x2f:  ret
```

## 反编译 C

```c
// LevelUpMission::~LevelUpMission @ 0x8165bd0

/* WARNING: Removing unreachable block (ram,0x08165bf3) */
/* LevelUpMission::~LevelUpMission() */

void __thiscall LevelUpMission::~LevelUpMission(LevelUpMission *this)

{
  *(undefined ***)this = &PTR__LevelUpMission_08b7f078;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
