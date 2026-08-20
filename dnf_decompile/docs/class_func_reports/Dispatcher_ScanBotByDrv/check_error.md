# check_error

`_ZN23Dispatcher_ScanBotByDrv11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ScanBotByDrv::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDrv` | `0x08264806` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264806  _ZN23Dispatcher_ScanBotByDrv11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ScanBotByDrv::check_error(CUser*, MSG_BASE&)
# range [0x08264806, 0x0826480f]
08264806 +0x00:  push   %ebp
08264807 +0x01:  mov    %esp,%ebp
08264809 +0x03:  mov    $0x0,%eax
0826480e +0x08:  pop    %ebp
0826480f +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_ScanBotByDrv::check_error @ 0x8264806

/* Dispatcher_ScanBotByDrv::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ScanBotByDrv::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
