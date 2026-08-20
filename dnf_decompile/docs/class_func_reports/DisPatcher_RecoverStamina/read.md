# read

`_ZN25DisPatcher_RecoverStamina4readER9PacketBufR8MSG_BASE`

`DisPatcher_RecoverStamina::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RecoverStamina` | `0x081c3ea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3ea4  _ZN25DisPatcher_RecoverStamina4readER9PacketBufR8MSG_BASE
#           DisPatcher_RecoverStamina::read(PacketBuf&, MSG_BASE&)
# range [0x081c3ea4, 0x081c3ead]
081c3ea4 +0x00:  push   %ebp
081c3ea5 +0x01:  mov    %esp,%ebp
081c3ea7 +0x03:  mov    $0x0,%eax
081c3eac +0x08:  pop    %ebp
081c3ead +0x09:  ret
```

## 反编译 C

```c
// DisPatcher_RecoverStamina::read @ 0x81c3ea4

/* DisPatcher_RecoverStamina::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_RecoverStamina::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}
```
