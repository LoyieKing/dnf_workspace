# SetPlayCountPerOneTeam

`_ZN12CLeagueMatch22SetPlayCountPerOneTeamEj`

`CLeagueMatch::SetPlayCountPerOneTeam(unsigned int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d070  _ZN12CLeagueMatch22SetPlayCountPerOneTeamEj
#           CLeagueMatch::SetPlayCountPerOneTeam(unsigned int)
# range [0x0855d070, 0x0855d07d]
0855d070 +0x00:  push   %ebp
0855d071 +0x01:  mov    %esp,%ebp
0855d073 +0x03:  mov    0x8(%ebp),%eax
0855d076 +0x06:  mov    %al,&_ZN12CLeagueMatch23nPlayerCountPerOneTeam_E
0855d07b +0x0b:  pop    %ebp
0855d07c +0x0c:  ret
0855d07d +0x0d:  nop
```

## 反编译 C

```c
// CLeagueMatch::SetPlayCountPerOneTeam @ 0x855d070

/* CLeagueMatch::SetPlayCountPerOneTeam(unsigned int) */

void CLeagueMatch::SetPlayCountPerOneTeam(uint param_1)

{
  nPlayerCountPerOneTeam_ = (char)param_1;
  return;
}
```
