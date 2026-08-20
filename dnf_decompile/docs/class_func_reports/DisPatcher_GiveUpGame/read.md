# read

`_ZN21DisPatcher_GiveUpGame4readER9PacketBufR8MSG_BASE`

`DisPatcher_GiveUpGame::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GiveUpGame` | `0x081c40aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c40aa  _ZN21DisPatcher_GiveUpGame4readER9PacketBufR8MSG_BASE
#           DisPatcher_GiveUpGame::read(PacketBuf&, MSG_BASE&)
# range [0x081c40aa, 0x081c40b3]
081c40aa +0x00:  push   %ebp
081c40ab +0x01:  mov    %esp,%ebp
081c40ad +0x03:  mov    $0x0,%eax
081c40b2 +0x08:  pop    %ebp
081c40b3 +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_GiveUpGame::read @ 0x81c40aa

/* DisPatcher_GiveUpGame::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_GiveUpGame::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
