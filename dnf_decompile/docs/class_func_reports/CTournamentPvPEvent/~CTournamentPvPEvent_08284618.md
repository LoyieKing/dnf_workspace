# ~CTournamentPvPEvent

`_ZN19CTournamentPvPEventD0Ev`

`CTournamentPvPEvent::~CTournamentPvPEvent()`

| 类 | 地址 |
|---|---|
| `CTournamentPvPEvent` | `0x08284618` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284618  _ZN19CTournamentPvPEventD0Ev
#           CTournamentPvPEvent::~CTournamentPvPEvent()
# range [0x08284618, 0x08284635]
08284618 +0x00:  push   %ebp
08284619 +0x01:  mov    %esp,%ebp
0828461b +0x03:  sub    $0x18,%esp
0828461e +0x06:  mov    0x8(%ebp),%eax
08284621 +0x09:  mov    %eax,(%esp)
08284624 +0x0c:  call   082845e8 <_ZN19CTournamentPvPEventD1Ev>  ; CTournamentPvPEvent::~CTournamentPvPEvent()
08284629 +0x11:  mov    0x8(%ebp),%eax
0828462c +0x14:  mov    %eax,(%esp)
0828462f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08284634 +0x1c:  leave
08284635 +0x1d:  ret
```

## 反编译 C

```c
// CTournamentPvPEvent::~CTournamentPvPEvent @ 0x8284618

/* CTournamentPvPEvent::~CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::~CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  ~CTournamentPvPEvent(this);
  operator_delete(this);
  return;
}
```
