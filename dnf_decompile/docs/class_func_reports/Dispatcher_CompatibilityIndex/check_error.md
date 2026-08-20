# check_error

`_ZN29Dispatcher_CompatibilityIndex11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CompatibilityIndex::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompatibilityIndex` | `0x081e23e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e23e0  _ZN29Dispatcher_CompatibilityIndex11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CompatibilityIndex::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e23e0, 0x081e23e9]
081e23e0 +0x00:  push   %ebp
081e23e1 +0x01:  mov    %esp,%ebp
081e23e3 +0x03:  mov    $0x0,%eax
081e23e8 +0x08:  pop    %ebp
081e23e9 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_CompatibilityIndex::check_error @ 0x81e23e0

/* Dispatcher_CompatibilityIndex::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CompatibilityIndex::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  return 0;
}
```
