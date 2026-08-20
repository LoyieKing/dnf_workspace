# OnStartFight

`_ZN12CLeagueMatch12OnStartFightEv`

`CLeagueMatch::OnStartFight()`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e21c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e21c  _ZN12CLeagueMatch12OnStartFightEv
#           CLeagueMatch::OnStartFight()
# range [0x0855e21c, 0x0855e22b]
0855e21c +0x00:  push   %ebp
0855e21d +0x01:  mov    %esp,%ebp
0855e21f +0x03:  mov    0x8(%ebp),%eax
0855e222 +0x06:  movl   $0x5,0x4(%eax)
0855e229 +0x0d:  pop    %ebp
0855e22a +0x0e:  ret
0855e22b +0x0f:  nop
```

## 反编译 C

```c
// CLeagueMatch::OnStartFight @ 0x855e21c

/* CLeagueMatch::OnStartFight() */

void __thiscall CLeagueMatch::OnStartFight(CLeagueMatch *this)

{
  *(undefined4 *)(this + 4) = 5;
  return;
}
```
