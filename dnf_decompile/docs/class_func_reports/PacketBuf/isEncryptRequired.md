# isEncryptRequired

`_ZNK9PacketBuf17isEncryptRequiredEv`

`PacketBuf::isEncryptRequired() const`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858da28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858da28  _ZNK9PacketBuf17isEncryptRequiredEv
#           PacketBuf::isEncryptRequired() const
# range [0x0858da28, 0x0858da37]
0858da28 +0x00:  push   %ebp
0858da29 +0x01:  mov    %esp,%ebp
0858da2b +0x03:  mov    0x8(%ebp),%eax
0858da2e +0x06:  movzbl &_ZL14gUnicodeBuffer+0xce04(%eax),%eax
0858da35 +0x0d:  pop    %ebp
0858da36 +0x0e:  ret
0858da37 +0x0f:  nop
```

## 反编译 C

```c
// PacketBuf::isEncryptRequired @ 0x858da28

/* PacketBuf::isEncryptRequired() const */

PacketBuf __thiscall PacketBuf::isEncryptRequired(PacketBuf *this)

{
  return this[0x17330];
}
```
