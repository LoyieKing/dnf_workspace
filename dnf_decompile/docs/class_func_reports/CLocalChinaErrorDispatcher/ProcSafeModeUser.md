# ProcSafeModeUser

`_ZNK26CLocalChinaErrorDispatcher16ProcSafeModeUserER5CUser14ENUM_CMDPACKET`

`CLocalChinaErrorDispatcher::ProcSafeModeUser(CUser&, ENUM_CMDPACKET) const`

| 类 | 地址 |
|---|---|
| `CLocalChinaErrorDispatcher` | `0x0812b0d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812b0d2  _ZNK26CLocalChinaErrorDispatcher16ProcSafeModeUserER5CUser14ENUM_CMDPACKET
#           CLocalChinaErrorDispatcher::ProcSafeModeUser(CUser&, ENUM_CMDPACKET) const
# range [0x0812b0d2, 0x0812b0db]
0812b0d2 +0x00:  push   %ebp
0812b0d3 +0x01:  mov    %esp,%ebp
0812b0d5 +0x03:  mov    $0x0,%eax
0812b0da +0x08:  pop    %ebp
0812b0db +0x09:  ret
```

## 反编译 C

```c
// CLocalChinaErrorDispatcher::ProcSafeModeUser @ 0x812b0d2

/* CLocalChinaErrorDispatcher::ProcSafeModeUser(CUser&, ENUM_CMDPACKET) const */

undefined4 CLocalChinaErrorDispatcher::ProcSafeModeUser(void)

{
  return 0;
}
```
