# get_len

`_ZNK9PacketBuf7get_lenEv`

`PacketBuf::get_len() const`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858da52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858da52  _ZNK9PacketBuf7get_lenEv
#           PacketBuf::get_len() const
# range [0x0858da52, 0x0858daa1]
0858da52 +0x00:  push   %ebp
0858da53 +0x01:  mov    %esp,%ebp
0858da55 +0x03:  sub    $0x28,%esp
0858da58 +0x06:  mov    0x8(%ebp),%eax
0858da5b +0x09:  movzbl 0xc(%eax),%eax
0858da5f +0x0d:  xor    $0x1,%eax
0858da62 +0x10:  test   %al,%al
0858da64 +0x12:  je     0858da99 <+0x47>
0858da66 +0x14:  movl   $"this packet is not finalized",0x10(%esp)
0858da6e +0x1c:  movl   $0x338,0xc(%esp)
0858da76 +0x24:  movl   $&_ZZNK9PacketBuf7get_lenEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858da7e +0x2c:  movl   $"packet_buf.cpp",0x4(%esp)
0858da86 +0x34:  movl   $0x1,(%esp)
0858da8d +0x3b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858da92 +0x40:  mov    $0x0,%eax
0858da97 +0x45:  jmp    0858da9f <+0x4d>
0858da99 +0x47:  mov    0x8(%ebp),%eax
0858da9c +0x4a:  mov    0x8(%eax),%eax
0858da9f +0x4d:  leave
0858daa0 +0x4e:  ret
0858daa1 +0x4f:  nop
```

## 反编译 C

```c
// PacketBuf::get_len @ 0x858da52

/* PacketBuf::get_len() const */

undefined4 __thiscall PacketBuf::get_len(PacketBuf *this)

{
  undefined4 uVar1;
  
  if (this[0xc] == (PacketBuf)0x1) {
    uVar1 = *(undefined4 *)(this + 8);
  }
  else {
    LogManager::logFormat
              (1,"packet_buf.cpp","int PacketBuf::get_len() const",0x338,
               "this packet is not finalized");
    uVar1 = 0;
  }
  return uVar1;
}
```
