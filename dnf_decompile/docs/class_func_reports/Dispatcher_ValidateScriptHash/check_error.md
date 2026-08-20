# check_error

`_ZN29Dispatcher_ValidateScriptHash11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ValidateScriptHash::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ValidateScriptHash` | `0x0826435a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826435a  _ZN29Dispatcher_ValidateScriptHash11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ValidateScriptHash::check_error(CUser*, MSG_BASE&)
# range [0x0826435a, 0x08264363]
0826435a +0x00:  push   %ebp
0826435b +0x01:  mov    %esp,%ebp
0826435d +0x03:  mov    $0x0,%eax
08264362 +0x08:  pop    %ebp
08264363 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_ValidateScriptHash::check_error @ 0x826435a

/* Dispatcher_ValidateScriptHash::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ValidateScriptHash::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
