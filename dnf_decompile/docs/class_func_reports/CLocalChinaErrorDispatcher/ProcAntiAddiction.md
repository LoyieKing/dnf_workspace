# ProcAntiAddiction

`_ZNK26CLocalChinaErrorDispatcher17ProcAntiAddictionER5CUser14ENUM_CMDPACKET`

`CLocalChinaErrorDispatcher::ProcAntiAddiction(CUser&, ENUM_CMDPACKET) const`

| 类 | 地址 |
|---|---|
| `CLocalChinaErrorDispatcher` | `0x0812b0c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812b0c8  _ZNK26CLocalChinaErrorDispatcher17ProcAntiAddictionER5CUser14ENUM_CMDPACKET
#           CLocalChinaErrorDispatcher::ProcAntiAddiction(CUser&, ENUM_CMDPACKET) const
# range [0x0812b0c8, 0x0812b0d1]
0812b0c8 +0x00:  push   %ebp
0812b0c9 +0x01:  mov    %esp,%ebp
0812b0cb +0x03:  mov    $0x0,%eax
0812b0d0 +0x08:  pop    %ebp
0812b0d1 +0x09:  ret
```

## 反编译 C

```c
// CLocalChinaErrorDispatcher::ProcAntiAddiction @ 0x812b0c8

/* CLocalChinaErrorDispatcher::ProcAntiAddiction(CUser&, ENUM_CMDPACKET) const */

undefined4 CLocalChinaErrorDispatcher::ProcAntiAddiction(void)

{
  return 0;
}
```
