# read

`_ZN22Dispatcher_BingoReward4readER9PacketBufR8MSG_BASE`

`Dispatcher_BingoReward::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoReward` | `0x0825e682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e682  _ZN22Dispatcher_BingoReward4readER9PacketBufR8MSG_BASE
#           Dispatcher_BingoReward::read(PacketBuf&, MSG_BASE&)
# range [0x0825e682, 0x0825e68b]
0825e682 +0x00:  push   %ebp
0825e683 +0x01:  mov    %esp,%ebp
0825e685 +0x03:  mov    $0x0,%eax
0825e68a +0x08:  pop    %ebp
0825e68b +0x09:  ret
```

## 反编译 C

```c
// Dispatcher_BingoReward::read @ 0x825e682

/* Dispatcher_BingoReward::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_BingoReward::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
