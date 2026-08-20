# read

`_ZN29Dispatcher_CloseDisjointStore4readER9PacketBufR8MSG_BASE`

`Dispatcher_CloseDisjointStore::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CloseDisjointStore` | `0x081d02be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d02be  _ZN29Dispatcher_CloseDisjointStore4readER9PacketBufR8MSG_BASE
#           Dispatcher_CloseDisjointStore::read(PacketBuf&, MSG_BASE&)
# range [0x081d02be, 0x081d02c7]
081d02be +0x00:  push   %ebp
081d02bf +0x01:  mov    %esp,%ebp
081d02c1 +0x03:  mov    $0x0,%eax
081d02c6 +0x08:  pop    %ebp
081d02c7 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_CloseDisjointStore::read @ 0x81d02be

/* Dispatcher_CloseDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_CloseDisjointStore::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
