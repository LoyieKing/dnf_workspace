# read

`_ZN23Dispatcher_MailBox_Open4readER9PacketBufR8MSG_BASE`

`Dispatcher_MailBox_Open::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Open` | `0x081cc18c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc18c  _ZN23Dispatcher_MailBox_Open4readER9PacketBufR8MSG_BASE
#           Dispatcher_MailBox_Open::read(PacketBuf&, MSG_BASE&)
# range [0x081cc18c, 0x081cc195]
081cc18c +0x00:  push   %ebp
081cc18d +0x01:  mov    %esp,%ebp
081cc18f +0x03:  mov    $0x0,%eax
081cc194 +0x08:  pop    %ebp
081cc195 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Open::read @ 0x81cc18c

/* Dispatcher_MailBox_Open::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Open::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
