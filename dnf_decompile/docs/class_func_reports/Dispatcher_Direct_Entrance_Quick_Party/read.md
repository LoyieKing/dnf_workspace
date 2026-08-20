# read

`_ZN38Dispatcher_Direct_Entrance_Quick_Party4readER9PacketBufR8MSG_BASE`

`Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Direct_Entrance_Quick_Party` | `0x081de32a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de32a  _ZN38Dispatcher_Direct_Entrance_Quick_Party4readER9PacketBufR8MSG_BASE
#           Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf&, MSG_BASE&)
# range [0x081de32a, 0x081de333]
081de32a +0x00:  push   %ebp
081de32b +0x01:  mov    %esp,%ebp
081de32d +0x03:  mov    $0x0,%eax
081de332 +0x08:  pop    %ebp
081de333 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Direct_Entrance_Quick_Party::read @ 0x81de32a

/* Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Direct_Entrance_Quick_Party::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
