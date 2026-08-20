# SetTournamentCurRound

`_ZN13CBattle_Field21SetTournamentCurRoundEi`

`CBattle_Field::SetTournamentCurRound(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082fe69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fe69c  _ZN13CBattle_Field21SetTournamentCurRoundEi
#           CBattle_Field::SetTournamentCurRound(int)
# range [0x082fe69c, 0x082fe6ad]
082fe69c +0x00:  push   %ebp
082fe69d +0x01:  mov    %esp,%ebp
082fe69f +0x03:  mov    0x8(%ebp),%eax
082fe6a2 +0x06:  mov    0xc(%ebp),%edx
082fe6a5 +0x09:  mov    %edx,0x154(%eax)
082fe6ab +0x0f:  pop    %ebp
082fe6ac +0x10:  ret
082fe6ad +0x11:  nop
```

## 反编译 C

```c
// CBattle_Field::SetTournamentCurRound @ 0x82fe69c

/* CBattle_Field::SetTournamentCurRound(int) */

void __thiscall CBattle_Field::SetTournamentCurRound(CBattle_Field *this,int param_1)

{
  *(int *)(this + 0x154) = param_1;
  return;
}
```
