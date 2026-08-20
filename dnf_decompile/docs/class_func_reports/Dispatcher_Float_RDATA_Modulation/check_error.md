# check_error

`_ZN33Dispatcher_Float_RDATA_Modulation11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_Float_RDATA_Modulation::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Float_RDATA_Modulation` | `0x08264b5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264b5c  _ZN33Dispatcher_Float_RDATA_Modulation11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_Float_RDATA_Modulation::check_error(CUser*, MSG_BASE&)
# range [0x08264b5c, 0x08264b65]
08264b5c +0x00:  push   %ebp
08264b5d +0x01:  mov    %esp,%ebp
08264b5f +0x03:  mov    $0x0,%eax
08264b64 +0x08:  pop    %ebp
08264b65 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Float_RDATA_Modulation::check_error @ 0x8264b5c

/* Dispatcher_Float_RDATA_Modulation::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_Float_RDATA_Modulation::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
