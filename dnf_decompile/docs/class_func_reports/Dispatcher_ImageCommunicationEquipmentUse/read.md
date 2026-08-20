# read

`_ZN41Dispatcher_ImageCommunicationEquipmentUse4readER9PacketBufR8MSG_BASE`

`Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ImageCommunicationEquipmentUse` | `0x081e21cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e21cc  _ZN41Dispatcher_ImageCommunicationEquipmentUse4readER9PacketBufR8MSG_BASE
#           Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf&, MSG_BASE&)
# range [0x081e21cc, 0x081e21d5]
081e21cc +0x00:  push   %ebp
081e21cd +0x01:  mov    %esp,%ebp
081e21cf +0x03:  mov    $0x0,%eax
081e21d4 +0x08:  pop    %ebp
081e21d5 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_ImageCommunicationEquipmentUse::read @ 0x81e21cc

/* Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_ImageCommunicationEquipmentUse::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
