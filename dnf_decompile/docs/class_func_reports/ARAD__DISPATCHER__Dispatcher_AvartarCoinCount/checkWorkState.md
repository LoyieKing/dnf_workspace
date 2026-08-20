# checkWorkState

`_ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount14checkWorkStateEP5CUser`

`ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarCoinCount` | `0x0819f1e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f1e2  _ZN4ARAD10DISPATCHER27Dispatcher_AvartarCoinCount14checkWorkStateEP5CUser
#           ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser*)
# range [0x0819f1e2, 0x0819f1eb]
0819f1e2 +0x00:  push   %ebp
0819f1e3 +0x01:  mov    %esp,%ebp
0819f1e5 +0x03:  mov    $0x1,%eax
0819f1ea +0x08:  pop    %ebp
0819f1eb +0x09:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState @ 0x819f1e2

/* ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser*) */

undefined4 ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::checkWorkState(CUser *param_1)

{
  return 1;
}
```
