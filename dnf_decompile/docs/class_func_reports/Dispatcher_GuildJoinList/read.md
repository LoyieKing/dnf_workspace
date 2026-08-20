# read

`_ZN24Dispatcher_GuildJoinList4readER9PacketBufR8MSG_BASE`

`Dispatcher_GuildJoinList::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildJoinList` | `0x081d529c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d529c  _ZN24Dispatcher_GuildJoinList4readER9PacketBufR8MSG_BASE
#           Dispatcher_GuildJoinList::read(PacketBuf&, MSG_BASE&)
# range [0x081d529c, 0x081d52a5]
081d529c +0x00:  push   %ebp
081d529d +0x01:  mov    %esp,%ebp
081d529f +0x03:  mov    $0x0,%eax
081d52a4 +0x08:  pop    %ebp
081d52a5 +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_GuildJoinList::read @ 0x81d529c

/* Dispatcher_GuildJoinList::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_GuildJoinList::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
