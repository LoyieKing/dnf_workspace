# SetPlayCountPerOneTeam

`_ZN8fair_pvp10CFairMatch22SetPlayCountPerOneTeamEj`

`fair_pvp::CFairMatch::SetPlayCountPerOneTeam(unsigned int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562b90  _ZN8fair_pvp10CFairMatch22SetPlayCountPerOneTeamEj
#           fair_pvp::CFairMatch::SetPlayCountPerOneTeam(unsigned int)
# range [0x08562b90, 0x08562b95]
08562b90 +0x00:  push   %ebp
08562b91 +0x01:  mov    %esp,%ebp
08562b93 +0x03:  pop    %ebp
08562b94 +0x04:  ret
08562b95 +0x05:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::SetPlayCountPerOneTeam @ 0x8562b90

/* fair_pvp::CFairMatch::SetPlayCountPerOneTeam(unsigned int) */

void fair_pvp::CFairMatch::SetPlayCountPerOneTeam(uint param_1)

{
  return;
}
```
