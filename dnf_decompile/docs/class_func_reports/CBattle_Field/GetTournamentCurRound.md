# GetTournamentCurRound

`_ZN13CBattle_Field21GetTournamentCurRoundEv`

`CBattle_Field::GetTournamentCurRound()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082fe6ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fe6ae  _ZN13CBattle_Field21GetTournamentCurRoundEv
#           CBattle_Field::GetTournamentCurRound()
# range [0x082fe6ae, 0x082fe6bb]
082fe6ae +0x00:  push   %ebp
082fe6af +0x01:  mov    %esp,%ebp
082fe6b1 +0x03:  mov    0x8(%ebp),%eax
082fe6b4 +0x06:  mov    0x154(%eax),%eax
082fe6ba +0x0c:  pop    %ebp
082fe6bb +0x0d:  ret
```

## 反编译 C

```c
// CBattle_Field::GetTournamentCurRound @ 0x82fe6ae

/* CBattle_Field::GetTournamentCurRound() */

undefined4 __thiscall CBattle_Field::GetTournamentCurRound(CBattle_Field *this)

{
  return *(undefined4 *)(this + 0x154);
}
```
