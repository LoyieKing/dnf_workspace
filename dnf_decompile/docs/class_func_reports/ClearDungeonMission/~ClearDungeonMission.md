# ~ClearDungeonMission

`_ZN19ClearDungeonMissionD1Ev`

`ClearDungeonMission::~ClearDungeonMission()`

| 类 | 地址 |
|---|---|
| `ClearDungeonMission` | `0x08165366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08165366  _ZN19ClearDungeonMissionD1Ev
#           ClearDungeonMission::~ClearDungeonMission()
# range [0x08165366, 0x08165395]
08165366 +0x00:  push   %ebp
08165367 +0x01:  mov    %esp,%ebp
08165369 +0x03:  sub    $0x18,%esp
0816536c +0x06:  mov    0x8(%ebp),%eax
0816536f +0x09:  movl   $&_ZTV19ClearDungeonMission+0x8,(%eax)
08165375 +0x0f:  mov    0x8(%ebp),%eax
08165378 +0x12:  mov    %eax,(%esp)
0816537b +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
08165380 +0x1a:  mov    $0x0,%eax
08165385 +0x1f:  test   %al,%al
08165387 +0x21:  je     08165394 <+0x2e>
08165389 +0x23:  mov    0x8(%ebp),%eax
0816538c +0x26:  mov    %eax,(%esp)
0816538f +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08165394 +0x2e:  leave
08165395 +0x2f:  ret
```

## 反编译 C

```c
// ClearDungeonMission::~ClearDungeonMission @ 0x8165366

/* WARNING: Removing unreachable block (ram,0x08165389) */
/* ClearDungeonMission::~ClearDungeonMission() */

void __thiscall ClearDungeonMission::~ClearDungeonMission(ClearDungeonMission *this)

{
  *(undefined ***)this = &PTR__ClearDungeonMission_08b7f0c0;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
