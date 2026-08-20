# read

`_ZN21DisPatcher_LeaveParty4readER9PacketBufR8MSG_BASE`

`DisPatcher_LeaveParty::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_LeaveParty` | `0x081c424c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c424c  _ZN21DisPatcher_LeaveParty4readER9PacketBufR8MSG_BASE
#           DisPatcher_LeaveParty::read(PacketBuf&, MSG_BASE&)
# range [0x081c424c, 0x081c4255]
081c424c +0x00:  push   %ebp
081c424d +0x01:  mov    %esp,%ebp
081c424f +0x03:  mov    $0x0,%eax
081c4254 +0x08:  pop    %ebp
081c4255 +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_LeaveParty::read @ 0x81c424c

/* DisPatcher_LeaveParty::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_LeaveParty::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
