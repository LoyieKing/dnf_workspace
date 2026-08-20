# check_error

`_ZN34DisPatcher_CheckSecurityProtection11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_CheckSecurityProtection::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CheckSecurityProtection` | `0x08264912` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264912  _ZN34DisPatcher_CheckSecurityProtection11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_CheckSecurityProtection::check_error(CUser*, MSG_BASE&)
# range [0x08264912, 0x0826491b]
08264912 +0x00:  push   %ebp
08264913 +0x01:  mov    %esp,%ebp
08264915 +0x03:  mov    $0x0,%eax
0826491a +0x08:  pop    %ebp
0826491b +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_CheckSecurityProtection::check_error @ 0x8264912

/* DisPatcher_CheckSecurityProtection::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_CheckSecurityProtection::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
