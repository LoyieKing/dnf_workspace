# read

`_ZN27Dispatcher_RequestBlackList4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestBlackList::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestBlackList` | `0x081ce03c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce03c  _ZN27Dispatcher_RequestBlackList4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestBlackList::read(PacketBuf&, MSG_BASE&)
# range [0x081ce03c, 0x081ce045]
081ce03c +0x00:  push   %ebp
081ce03d +0x01:  mov    %esp,%ebp
081ce03f +0x03:  mov    $0x0,%eax
081ce044 +0x08:  pop    %ebp
081ce045 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_RequestBlackList::read @ 0x81ce03c

/* Dispatcher_RequestBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_RequestBlackList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
