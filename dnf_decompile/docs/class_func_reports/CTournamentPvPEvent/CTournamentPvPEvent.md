# CTournamentPvPEvent

`_ZN19CTournamentPvPEventC1Ev`

`CTournamentPvPEvent::CTournamentPvPEvent()`

| 类 | 地址 |
|---|---|
| `CTournamentPvPEvent` | `0x082845cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082845cc  _ZN19CTournamentPvPEventC1Ev
#           CTournamentPvPEvent::CTournamentPvPEvent()
# range [0x082845cc, 0x082845e7]
082845cc +0x00:  push   %ebp
082845cd +0x01:  mov    %esp,%ebp
082845cf +0x03:  sub    $0x18,%esp
082845d2 +0x06:  mov    0x8(%ebp),%eax
082845d5 +0x09:  mov    %eax,(%esp)
082845d8 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
082845dd +0x11:  mov    0x8(%ebp),%eax
082845e0 +0x14:  movl   $&_ZTV19CTournamentPvPEvent+0x8,(%eax)
082845e6 +0x1a:  leave
082845e7 +0x1b:  ret
```

## 反编译 C

```c
// CTournamentPvPEvent::CTournamentPvPEvent @ 0x82845cc

/* CTournamentPvPEvent::CTournamentPvPEvent() */

void __thiscall CTournamentPvPEvent::CTournamentPvPEvent(CTournamentPvPEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CTournamentPvPEvent_08c0cb88;
  return;
}
```
