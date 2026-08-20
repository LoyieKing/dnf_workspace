# check_error

`_ZN24Dispatcher_MouseRegister11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MouseRegister::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x082632a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082632a0  _ZN24Dispatcher_MouseRegister11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MouseRegister::check_error(CUser*, MSG_BASE&)
# range [0x082632a0, 0x082632b3]
082632a0 +0x00:  push   %ebp
082632a1 +0x01:  mov    %esp,%ebp
082632a3 +0x03:  sub    $0x10,%esp
082632a6 +0x06:  mov    0x10(%ebp),%eax
082632a9 +0x09:  mov    %eax,-0x4(%ebp)
082632ac +0x0c:  mov    $0x0,%eax
082632b1 +0x11:  leave
082632b2 +0x12:  ret
082632b3 +0x13:  nop
```

## 反编译 C

```c
// Dispatcher_MouseRegister::check_error @ 0x82632a0

/* Dispatcher_MouseRegister::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MouseRegister::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
