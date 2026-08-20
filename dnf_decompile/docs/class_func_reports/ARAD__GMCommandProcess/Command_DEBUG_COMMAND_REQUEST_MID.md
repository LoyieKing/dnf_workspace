# Command_DEBUG_COMMAND_REQUEST_MID

`_ZN4ARAD16GMCommandProcess33Command_DEBUG_COMMAND_REQUEST_MIDEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::GMCommandProcess::Command_DEBUG_COMMAND_REQUEST_MID(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::GMCommandProcess` | `0x0819827c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819827c  _ZN4ARAD16GMCommandProcess33Command_DEBUG_COMMAND_REQUEST_MIDEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::GMCommandProcess::Command_DEBUG_COMMAND_REQUEST_MID(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0819827c, 0x08198285]
0819827c +0x00:  push   %ebp
0819827d +0x01:  mov    %esp,%ebp
0819827f +0x03:  mov    $0x0,%eax
08198284 +0x08:  pop    %ebp
08198285 +0x09:  ret
```

## 反编译 C

```c
// ARAD::GMCommandProcess::Command_DEBUG_COMMAND_REQUEST_MID @ 0x819827c

/* ARAD::GMCommandProcess::Command_DEBUG_COMMAND_REQUEST_MID(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
ARAD::GMCommandProcess::Command_DEBUG_COMMAND_REQUEST_MID(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 0;
}
```
