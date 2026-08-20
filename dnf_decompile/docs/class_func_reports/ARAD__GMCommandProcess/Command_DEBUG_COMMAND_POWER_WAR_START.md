# Command_DEBUG_COMMAND_POWER_WAR_START

`_ZN4ARAD16GMCommandProcess37Command_DEBUG_COMMAND_POWER_WAR_STARTEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::GMCommandProcess::Command_DEBUG_COMMAND_POWER_WAR_START(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::GMCommandProcess` | `0x0819825e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819825e  _ZN4ARAD16GMCommandProcess37Command_DEBUG_COMMAND_POWER_WAR_STARTEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::GMCommandProcess::Command_DEBUG_COMMAND_POWER_WAR_START(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0819825e, 0x08198267]
0819825e +0x00:  push   %ebp
0819825f +0x01:  mov    %esp,%ebp
08198261 +0x03:  mov    $0x0,%eax
08198266 +0x08:  pop    %ebp
08198267 +0x09:  ret
```

## 反编译 C

```c
// ARAD::GMCommandProcess::Command_DEBUG_COMMAND_POWER_WAR_START @ 0x819825e

/* ARAD::GMCommandProcess::Command_DEBUG_COMMAND_POWER_WAR_START(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
ARAD::GMCommandProcess::Command_DEBUG_COMMAND_POWER_WAR_START
          (CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 0;
}
```
