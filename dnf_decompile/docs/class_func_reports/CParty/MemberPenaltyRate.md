# MemberPenaltyRate

`_ZN6CParty17MemberPenaltyRateEv`

`CParty::MemberPenaltyRate()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d70e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d70e  _ZN6CParty17MemberPenaltyRateEv
#           CParty::MemberPenaltyRate()
# range [0x0859d70e, 0x0859d717]
0859d70e +0x00:  push   %ebp
0859d70f +0x01:  mov    %esp,%ebp
0859d711 +0x03:  mov    $0x1,%eax
0859d716 +0x08:  pop    %ebp
0859d717 +0x09:  ret
```

## 反编译 C

```c
// CParty::MemberPenaltyRate @ 0x859d70e

/* CParty::MemberPenaltyRate() */

undefined4 CParty::MemberPenaltyRate(void)

{
  return 1;
}
```
