# Command_DEBUG_COMMAND_INVISIBLE

`_ZN4ARAD16GMCommandProcess31Command_DEBUG_COMMAND_INVISIBLEEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::GMCommandProcess::Command_DEBUG_COMMAND_INVISIBLE(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::GMCommandProcess` | `0x08198286` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198286  _ZN4ARAD16GMCommandProcess31Command_DEBUG_COMMAND_INVISIBLEEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::GMCommandProcess::Command_DEBUG_COMMAND_INVISIBLE(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08198286, 0x0819828f]
08198286 +0x00:  push   %ebp
08198287 +0x01:  mov    %esp,%ebp
08198289 +0x03:  mov    $0x0,%eax
0819828e +0x08:  pop    %ebp
0819828f +0x09:  ret
```

## 反编译 C

```c
// ARAD::GMCommandProcess::Command_DEBUG_COMMAND_INVISIBLE @ 0x8198286

/* ARAD::GMCommandProcess::Command_DEBUG_COMMAND_INVISIBLE(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
ARAD::GMCommandProcess::Command_DEBUG_COMMAND_INVISIBLE(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 0;
}
```
