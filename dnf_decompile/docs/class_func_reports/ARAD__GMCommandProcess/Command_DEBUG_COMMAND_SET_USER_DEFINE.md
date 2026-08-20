# Command_DEBUG_COMMAND_SET_USER_DEFINE

`_ZN4ARAD16GMCommandProcess37Command_DEBUG_COMMAND_SET_USER_DEFINEEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::GMCommandProcess::Command_DEBUG_COMMAND_SET_USER_DEFINE(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::GMCommandProcess` | `0x0819829a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819829a  _ZN4ARAD16GMCommandProcess37Command_DEBUG_COMMAND_SET_USER_DEFINEEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::GMCommandProcess::Command_DEBUG_COMMAND_SET_USER_DEFINE(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0819829a, 0x081982a3]
0819829a +0x00:  push   %ebp
0819829b +0x01:  mov    %esp,%ebp
0819829d +0x03:  mov    $0x0,%eax
081982a2 +0x08:  pop    %ebp
081982a3 +0x09:  ret
```

## 反编译 C

```c
// ARAD::GMCommandProcess::Command_DEBUG_COMMAND_SET_USER_DEFINE @ 0x819829a

/* ARAD::GMCommandProcess::Command_DEBUG_COMMAND_SET_USER_DEFINE(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
ARAD::GMCommandProcess::Command_DEBUG_COMMAND_SET_USER_DEFINE
          (CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 0;
}
```
