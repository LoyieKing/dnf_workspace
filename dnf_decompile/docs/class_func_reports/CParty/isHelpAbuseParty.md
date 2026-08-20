# isHelpAbuseParty

`_ZN6CParty16isHelpAbusePartyEP5CUser`

`CParty::isHelpAbuseParty(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a21ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a21ca  _ZN6CParty16isHelpAbusePartyEP5CUser
#           CParty::isHelpAbuseParty(CUser*)
# range [0x085a21ca, 0x085a21d3]
085a21ca +0x00:  push   %ebp
085a21cb +0x01:  mov    %esp,%ebp
085a21cd +0x03:  mov    $0x0,%eax
085a21d2 +0x08:  pop    %ebp
085a21d3 +0x09:  ret
```

## 反编译 C

```c
// CParty::isHelpAbuseParty @ 0x85a21ca

/* CParty::isHelpAbuseParty(CUser*) */

undefined4 CParty::isHelpAbuseParty(CUser *param_1)

{
  return 0;
}
```
