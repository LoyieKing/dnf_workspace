# bind_packet

`_ZN9PacketBuf11bind_packetEPci`

`PacketBuf::bind_packet(char*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d4de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d4de  _ZN9PacketBuf11bind_packetEPci
#           PacketBuf::bind_packet(char*, int)
# range [0x0858d4de, 0x0858d547]
0858d4de +0x00:  push   %ebp
0858d4df +0x01:  mov    %esp,%ebp
0858d4e1 +0x03:  sub    $0x28,%esp
0858d4e4 +0x06:  cmpl   $0x0,0xc(%ebp)
0858d4e8 +0x0a:  je     0858d4f0 <+0x12>
0858d4ea +0x0c:  cmpl   $0x0,0x10(%ebp)
0858d4ee +0x10:  jne    0858d523 <+0x45>
0858d4f0 +0x12:  movl   $"packet is null or size is zero",0x10(%esp)
0858d4f8 +0x1a:  movl   $0x27c,0xc(%esp)
0858d500 +0x22:  movl   $&_ZZN9PacketBuf11bind_packetEPciE19__PRETTY_FUNCTION__,0x8(%esp)
0858d508 +0x2a:  movl   $"packet_buf.cpp",0x4(%esp)
0858d510 +0x32:  movl   $0x1,(%esp)
0858d517 +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d51c +0x3e:  mov    $0x0,%eax
0858d521 +0x43:  jmp    0858d545 <+0x67>
0858d523 +0x45:  mov    0x8(%ebp),%eax
0858d526 +0x48:  mov    %eax,(%esp)
0858d529 +0x4b:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
0858d52e +0x50:  mov    0x8(%ebp),%eax
0858d531 +0x53:  mov    0xc(%ebp),%edx
0858d534 +0x56:  mov    %edx,0x14(%eax)
0858d537 +0x59:  mov    0x8(%ebp),%eax
0858d53a +0x5c:  mov    0x10(%ebp),%edx
0858d53d +0x5f:  mov    %edx,0x8(%eax)
0858d540 +0x62:  mov    $0x1,%eax
0858d545 +0x67:  leave
0858d546 +0x68:  ret
0858d547 +0x69:  nop
```

## 反编译 C

```c
// PacketBuf::bind_packet @ 0x858d4de

/* PacketBuf::bind_packet(char*, int) */

undefined4 __thiscall PacketBuf::bind_packet(PacketBuf *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::bind_packet(char*, int)",0x27c,
               "packet is null or size is zero");
    uVar1 = 0;
  }
  else {
    clear(this);
    *(char **)(this + 0x14) = param_1;
    *(int *)(this + 8) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}
```
