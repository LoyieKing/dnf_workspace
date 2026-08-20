# ~PacketBuf

`_ZN9PacketBufD1Ev`

`PacketBuf::~PacketBuf()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c8dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c8dc  _ZN9PacketBufD1Ev
#           PacketBuf::~PacketBuf()
# range [0x0858c8dc, 0x0858c8e1]
0858c8dc +0x00:  push   %ebp
0858c8dd +0x01:  mov    %esp,%ebp
0858c8df +0x03:  pop    %ebp
0858c8e0 +0x04:  ret
0858c8e1 +0x05:  nop
```

## 反编译 C

```c
// PacketBuf::~PacketBuf @ 0x858c8dc

/* PacketBuf::~PacketBuf() */

void __thiscall PacketBuf::~PacketBuf(PacketBuf *this)

{
  return;
}
```
