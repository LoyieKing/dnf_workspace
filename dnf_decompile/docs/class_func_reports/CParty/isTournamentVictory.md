# isTournamentVictory

`_ZN6CParty19isTournamentVictoryEv`

`CParty::isTournamentVictory()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd79e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd79e  _ZN6CParty19isTournamentVictoryEv
#           CParty::isTournamentVictory()
# range [0x085bd79e, 0x085bd7ad]
085bd79e +0x00:  push   %ebp
085bd79f +0x01:  mov    %esp,%ebp
085bd7a1 +0x03:  mov    0x8(%ebp),%eax
085bd7a4 +0x06:  movzbl 0x11a(%eax),%eax
085bd7ab +0x0d:  pop    %ebp
085bd7ac +0x0e:  ret
085bd7ad +0x0f:  nop
```

## 反编译 C

```c
// CParty::isTournamentVictory @ 0x85bd79e

/* CParty::isTournamentVictory() */

CParty __thiscall CParty::isTournamentVictory(CParty *this)

{
  return this[0x11a];
}
```
