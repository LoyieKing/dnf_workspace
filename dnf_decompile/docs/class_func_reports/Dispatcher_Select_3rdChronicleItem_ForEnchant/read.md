# read

`_ZN45Dispatcher_Select_3rdChronicleItem_ForEnchant4readER9PacketBufR8MSG_BASE`

`Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_3rdChronicleItem_ForEnchant` | `0x081d3416` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3416  _ZN45Dispatcher_Select_3rdChronicleItem_ForEnchant4readER9PacketBufR8MSG_BASE
#           Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf&, MSG_BASE&)
# range [0x081d3416, 0x081d341f]
081d3416 +0x00:  push   %ebp
081d3417 +0x01:  mov    %esp,%ebp
081d3419 +0x03:  mov    $0x0,%eax
081d341e +0x08:  pop    %ebp
081d341f +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Select_3rdChronicleItem_ForEnchant::read @ 0x81d3416

/* Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
