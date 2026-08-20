# process

`_ZN45Dispatcher_Select_3rdChronicleItem_ForEnchant7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Select_3rdChronicleItem_ForEnchant::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_3rdChronicleItem_ForEnchant` | `0x081d3420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3420  _ZN45Dispatcher_Select_3rdChronicleItem_ForEnchant7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Select_3rdChronicleItem_ForEnchant::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d3420, 0x081d3439]
081d3420 +0x00:  push   %ebp
081d3421 +0x01:  mov    %esp,%ebp
081d3423 +0x03:  sub    $0x10,%esp
081d3426 +0x06:  mov    0x14(%ebp),%eax
081d3429 +0x09:  mov    %eax,-0x8(%ebp)
081d342c +0x0c:  mov    0x10(%ebp),%eax
081d342f +0x0f:  mov    %eax,-0x4(%ebp)
081d3432 +0x12:  mov    $0x0,%eax
081d3437 +0x17:  leave
081d3438 +0x18:  ret
081d3439 +0x19:  nop
```

## 反编译 C

```c
// Dispatcher_Select_3rdChronicleItem_ForEnchant::process @ 0x81d3420

/* Dispatcher_Select_3rdChronicleItem_ForEnchant::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Select_3rdChronicleItem_ForEnchant::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  return 0;
}
```
