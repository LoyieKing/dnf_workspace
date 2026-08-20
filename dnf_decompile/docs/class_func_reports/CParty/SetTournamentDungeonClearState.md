# SetTournamentDungeonClearState

`_ZN6CParty30SetTournamentDungeonClearStateEc`

`CParty::SetTournamentDungeonClearState(char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bd6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bd6bc  _ZN6CParty30SetTournamentDungeonClearStateEc
#           CParty::SetTournamentDungeonClearState(char)
# range [0x085bd6bc, 0x085bd6dd]
085bd6bc +0x00:  push   %ebp
085bd6bd +0x01:  mov    %esp,%ebp
085bd6bf +0x03:  sub    $0x4,%esp
085bd6c2 +0x06:  mov    0xc(%ebp),%eax
085bd6c5 +0x09:  mov    %al,-0x4(%ebp)
085bd6c8 +0x0c:  cmpb   $0x3,-0x4(%ebp)
085bd6cc +0x10:  jg     085bd6db <+0x1f>
085bd6ce +0x12:  mov    0x8(%ebp),%eax
085bd6d1 +0x15:  movzbl -0x4(%ebp),%edx
085bd6d5 +0x19:  mov    %dl,0x20c(%eax)
085bd6db +0x1f:  leave
085bd6dc +0x20:  ret
085bd6dd +0x21:  nop
```

## 反编译 C

```c
// CParty::SetTournamentDungeonClearState @ 0x85bd6bc

/* CParty::SetTournamentDungeonClearState(char) */

void __thiscall CParty::SetTournamentDungeonClearState(CParty *this,char param_1)

{
  if (param_1 < '\x04') {
    this[0x20c] = (CParty)param_1;
  }
  return;
}
```
