# read

`_ZN29Dispatcher_Cancel_Quick_Party4readER9PacketBufR8MSG_BASE`

`Dispatcher_Cancel_Quick_Party::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Cancel_Quick_Party` | `0x081de1aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de1aa  _ZN29Dispatcher_Cancel_Quick_Party4readER9PacketBufR8MSG_BASE
#           Dispatcher_Cancel_Quick_Party::read(PacketBuf&, MSG_BASE&)
# range [0x081de1aa, 0x081de1b3]
081de1aa +0x00:  push   %ebp
081de1ab +0x01:  mov    %esp,%ebp
081de1ad +0x03:  mov    $0x0,%eax
081de1b2 +0x08:  pop    %ebp
081de1b3 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_Cancel_Quick_Party::read @ 0x81de1aa

/* Dispatcher_Cancel_Quick_Party::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Cancel_Quick_Party::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
