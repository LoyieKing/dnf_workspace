# check_error

`_ZN31Dispatcher_AbnormalUseStackable11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_AbnormalUseStackable::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AbnormalUseStackable` | `0x08264a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264a30  _ZN31Dispatcher_AbnormalUseStackable11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_AbnormalUseStackable::check_error(CUser*, MSG_BASE&)
# range [0x08264a30, 0x08264a39]
08264a30 +0x00:  push   %ebp
08264a31 +0x01:  mov    %esp,%ebp
08264a33 +0x03:  mov    $0x0,%eax
08264a38 +0x08:  pop    %ebp
08264a39 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_AbnormalUseStackable::check_error @ 0x8264a30

/* Dispatcher_AbnormalUseStackable::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_AbnormalUseStackable::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
