# _GetOppositeTeam

`_ZN12CLeagueMatch16_GetOppositeTeamEi`

`CLeagueMatch::_GetOppositeTeam(int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e49e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e49e  _ZN12CLeagueMatch16_GetOppositeTeamEi
#           CLeagueMatch::_GetOppositeTeam(int)
# range [0x0855e49e, 0x0855e4c3]
0855e49e +0x00:  push   %ebp
0855e49f +0x01:  mov    %esp,%ebp
0855e4a1 +0x03:  mov    0xc(%ebp),%eax
0855e4a4 +0x06:  cmp    $0x1,%eax
0855e4a7 +0x09:  je     0855e4b0 <+0x12>
0855e4a9 +0x0b:  cmp    $0x2,%eax
0855e4ac +0x0e:  je     0855e4b7 <+0x19>
0855e4ae +0x10:  jmp    0855e4be <+0x20>
0855e4b0 +0x12:  mov    $0x2,%eax
0855e4b5 +0x17:  jmp    0855e4c1 <+0x23>
0855e4b7 +0x19:  mov    $0x1,%eax
0855e4bc +0x1e:  jmp    0855e4c1 <+0x23>
0855e4be +0x20:  mov    0xc(%ebp),%eax
0855e4c1 +0x23:  pop    %ebp
0855e4c2 +0x24:  ret
0855e4c3 +0x25:  nop
```

## 反编译 C

```c
// CLeagueMatch::_GetOppositeTeam @ 0x855e49e

/* CLeagueMatch::_GetOppositeTeam(int) */

int __thiscall CLeagueMatch::_GetOppositeTeam(CLeagueMatch *this,int param_1)

{
  if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == 2) {
    param_1 = 1;
  }
  return param_1;
}
```
