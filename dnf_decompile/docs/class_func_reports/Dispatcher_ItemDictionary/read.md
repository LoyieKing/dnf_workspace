# read

`_ZN25Dispatcher_ItemDictionary4readER9PacketBufR8MSG_BASE`

`Dispatcher_ItemDictionary::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemDictionary` | `0x081dd7ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd7ea  _ZN25Dispatcher_ItemDictionary4readER9PacketBufR8MSG_BASE
#           Dispatcher_ItemDictionary::read(PacketBuf&, MSG_BASE&)
# range [0x081dd7ea, 0x081dd7fd]
081dd7ea +0x00:  push   %ebp
081dd7eb +0x01:  mov    %esp,%ebp
081dd7ed +0x03:  sub    $0x10,%esp
081dd7f0 +0x06:  mov    0x10(%ebp),%eax
081dd7f3 +0x09:  mov    %eax,-0x4(%ebp)
081dd7f6 +0x0c:  mov    $0x0,%eax
081dd7fb +0x11:  leave
081dd7fc +0x12:  ret
081dd7fd +0x13:  nop
```

## 反编译 C

```c
// Dispatcher_ItemDictionary::read @ 0x81dd7ea

/* Dispatcher_ItemDictionary::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_ItemDictionary::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
