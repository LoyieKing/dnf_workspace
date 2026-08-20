# set_packet

`_ZN9PacketBuf10set_packetEPKci`

`PacketBuf::set_packet(char const*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d462` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d462  _ZN9PacketBuf10set_packetEPKci
#           PacketBuf::set_packet(char const*, int)
# range [0x0858d462, 0x0858d4dd]
0858d462 +0x00:  push   %ebp
0858d463 +0x01:  mov    %esp,%ebp
0858d465 +0x03:  sub    $0x28,%esp
0858d468 +0x06:  cmpl   $0x0,0xc(%ebp)
0858d46c +0x0a:  je     0858d47d <+0x1b>
0858d46e +0x0c:  cmpl   $0x0,0x10(%ebp)
0858d472 +0x10:  jle    0858d47d <+0x1b>
0858d474 +0x12:  cmpl   $&_ZL14gUnicodeBuffer+0xcdec,0x10(%ebp)
0858d47b +0x19:  jle    0858d4ab <+0x49>
0858d47d +0x1b:  movl   $"!packet || size<1 || size> MAX_PACKET_SIZE",0x10(%esp)
0858d485 +0x23:  movl   $0x270,0xc(%esp)
0858d48d +0x2b:  movl   $&_ZZN9PacketBuf10set_packetEPKciE19__PRETTY_FUNCTION__,0x8(%esp)
0858d495 +0x33:  movl   $"packet_buf.cpp",0x4(%esp)
0858d49d +0x3b:  movl   $0x1,(%esp)
0858d4a4 +0x42:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d4a9 +0x47:  jmp    0858d4db <+0x79>
0858d4ab +0x49:  mov    0x8(%ebp),%eax
0858d4ae +0x4c:  mov    %eax,(%esp)
0858d4b1 +0x4f:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
0858d4b6 +0x54:  mov    0x10(%ebp),%edx
0858d4b9 +0x57:  mov    0x8(%ebp),%eax
0858d4bc +0x5a:  mov    0x14(%eax),%eax
0858d4bf +0x5d:  mov    %edx,0x8(%esp)
0858d4c3 +0x61:  mov    0xc(%ebp),%edx
0858d4c6 +0x64:  mov    %edx,0x4(%esp)
0858d4ca +0x68:  mov    %eax,(%esp)
0858d4cd +0x6b:  call   0807d8a0 <_init+0x198>
0858d4d2 +0x70:  mov    0x8(%ebp),%eax
0858d4d5 +0x73:  mov    0x10(%ebp),%edx
0858d4d8 +0x76:  mov    %edx,0x8(%eax)
0858d4db +0x79:  leave
0858d4dc +0x7a:  ret
0858d4dd +0x7b:  nop
```

## 反编译 C

```c
// PacketBuf::set_packet @ 0x858d462

/* PacketBuf::set_packet(char const*, int) */

void __thiscall PacketBuf::set_packet(PacketBuf *this,char *param_1,int param_2)

{
  if (((param_1 == (char *)0x0) || (param_2 < 1)) || (95000 < param_2)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","void PacketBuf::set_packet(const char*, int)",0x270,
               "!packet || size<1 || size> MAX_PACKET_SIZE");
  }
  else {
    clear(this);
    memcpy(*(void **)(this + 0x14),param_1,param_2);
    *(int *)(this + 8) = param_2;
  }
  return;
}
```
