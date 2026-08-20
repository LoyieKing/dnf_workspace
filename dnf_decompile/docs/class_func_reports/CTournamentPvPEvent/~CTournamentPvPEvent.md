# ~CTournamentPvPEvent

`_ZN19CTournamentPvPEventD1Ev`

`CTournamentPvPEvent::~CTournamentPvPEvent()`

| 类 | 地址 |
|---|---|
| `CTournamentPvPEvent` | `0x082845e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082845e8  _ZN19CTournamentPvPEventD1Ev
#           CTournamentPvPEvent::~CTournamentPvPEvent()
# range [0x082845e8, 0x08284617]
082845e8 +0x00:  push   %ebp
082845e9 +0x01:  mov    %esp,%ebp
082845eb +0x03:  sub    $0x18,%esp
082845ee +0x06:  mov    0x8(%ebp),%eax
082845f1 +0x09:  movl   $&_ZTV19CTournamentPvPEvent+0x8,(%eax)
082845f7 +0x0f:  mov    0x8(%ebp),%eax
082845fa +0x12:  mov    %eax,(%esp)
082845fd +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08284602 +0x1a:  mov    $0x0,%eax
08284607 +0x1f:  test   %al,%al
08284609 +0x21:  je     08284616 <+0x2e>
0828460b +0x23:  mov    0x8(%ebp),%eax
0828460e +0x26:  mov    %eax,(%esp)
08284611 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08284616 +0x2e:  leave
08284617 +0x2f:  ret
```

## 反编译 C

```c
// CTournamentPvPEvent::~CTournamentPvPEvent @ 0x82845e8

/* WARNING: Removing unreachable block (ram,0x0828460b) */
/* CTournamentPvPEvent::~CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::~CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  *(undefined ***)this = &PTR__CTournamentPvPEvent_08c0cb88;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
