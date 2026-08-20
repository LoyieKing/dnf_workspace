# Command_DEBUG_COMMAND_ON

`_ZN4ARAD16GMCommandProcess24Command_DEBUG_COMMAND_ONEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::GMCommandProcess::Command_DEBUG_COMMAND_ON(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::GMCommandProcess` | `0x08198254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198254  _ZN4ARAD16GMCommandProcess24Command_DEBUG_COMMAND_ONEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::GMCommandProcess::Command_DEBUG_COMMAND_ON(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08198254, 0x0819825d]
08198254 +0x00:  push   %ebp
08198255 +0x01:  mov    %esp,%ebp
08198257 +0x03:  mov    $0x0,%eax
0819825c +0x08:  pop    %ebp
0819825d +0x09:  ret
```

## 反编译 C

```c
// ARAD::GMCommandProcess::Command_DEBUG_COMMAND_ON @ 0x8198254

/* ARAD::GMCommandProcess::Command_DEBUG_COMMAND_ON(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
ARAD::GMCommandProcess::Command_DEBUG_COMMAND_ON(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 0;
}
```
