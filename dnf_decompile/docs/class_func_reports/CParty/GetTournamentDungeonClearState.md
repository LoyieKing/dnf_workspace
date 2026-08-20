# GetTournamentDungeonClearState

`_ZN6CParty30GetTournamentDungeonClearStateEv`

`CParty::GetTournamentDungeonClearState()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd6ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd6ac  _ZN6CParty30GetTournamentDungeonClearStateEv
#           CParty::GetTournamentDungeonClearState()
# range [0x085bd6ac, 0x085bd6bb]
085bd6ac +0x00:  push   %ebp
085bd6ad +0x01:  mov    %esp,%ebp
085bd6af +0x03:  mov    0x8(%ebp),%eax
085bd6b2 +0x06:  movzbl 0x20c(%eax),%eax
085bd6b9 +0x0d:  pop    %ebp
085bd6ba +0x0e:  ret
085bd6bb +0x0f:  nop
```

## 反编译 C

```c
// CParty::GetTournamentDungeonClearState @ 0x85bd6ac

/* CParty::GetTournamentDungeonClearState() */

CParty __thiscall CParty::GetTournamentDungeonClearState(CParty *this)

{
  return this[0x20c];
}
```
