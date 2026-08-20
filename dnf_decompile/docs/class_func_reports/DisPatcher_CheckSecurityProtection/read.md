# read

`_ZN34DisPatcher_CheckSecurityProtection4readER9PacketBufR8MSG_BASE`

`DisPatcher_CheckSecurityProtection::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CheckSecurityProtection` | `0x08264810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264810  _ZN34DisPatcher_CheckSecurityProtection4readER9PacketBufR8MSG_BASE
#           DisPatcher_CheckSecurityProtection::read(PacketBuf&, MSG_BASE&)
# range [0x08264810, 0x08264819]
08264810 +0x00:  push   %ebp
08264811 +0x01:  mov    %esp,%ebp
08264813 +0x03:  mov    $0x0,%eax
08264818 +0x08:  pop    %ebp
08264819 +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_CheckSecurityProtection::read @ 0x8264810

/* DisPatcher_CheckSecurityProtection::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_CheckSecurityProtection::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
