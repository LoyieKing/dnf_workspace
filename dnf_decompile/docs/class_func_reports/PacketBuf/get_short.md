# get_short

`_ZN9PacketBuf9get_shortERs`

`PacketBuf::get_short(short&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cfc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cfc0  _ZN9PacketBuf9get_shortERs
#           PacketBuf::get_short(short&)
# range [0x0858cfc0, 0x0858d0af]
0858cfc0 +0x00:  push   %ebp
0858cfc1 +0x01:  mov    %esp,%ebp
0858cfc3 +0x03:  sub    $0x38,%esp
0858cfc6 +0x06:  movl   $0x2,0x4(%esp)
0858cfce +0x0e:  mov    0x8(%ebp),%eax
0858cfd1 +0x11:  mov    %eax,(%esp)
0858cfd4 +0x14:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858cfd9 +0x19:  test   %al,%al
0858cfdb +0x1b:  je     0858cfe7 <+0x27>
0858cfdd +0x1d:  mov    $0x0,%eax
0858cfe2 +0x22:  jmp    0858d0ae <+0xee>
0858cfe7 +0x27:  mov    0x8(%ebp),%eax
0858cfea +0x2a:  mov    0x14(%eax),%ecx
0858cfed +0x2d:  mov    0x8(%ebp),%eax
0858cff0 +0x30:  mov    0x4(%eax),%eax
0858cff3 +0x33:  mov    %eax,%edx
0858cff5 +0x35:  lea    (%ecx,%edx,1),%edx
0858cff8 +0x38:  movzbl (%edx),%edx
0858cffb +0x3b:  movzbl %dl,%edx
0858cffe +0x3e:  mov    %edx,-0x10(%ebp)
0858d001 +0x41:  lea    0x1(%eax),%edx
0858d004 +0x44:  mov    0x8(%ebp),%eax
0858d007 +0x47:  mov    %edx,0x4(%eax)
0858d00a +0x4a:  mov    0x8(%ebp),%eax
0858d00d +0x4d:  mov    0x14(%eax),%ecx
0858d010 +0x50:  mov    0x8(%ebp),%eax
0858d013 +0x53:  mov    0x4(%eax),%eax
0858d016 +0x56:  mov    %eax,%edx
0858d018 +0x58:  lea    (%ecx,%edx,1),%edx
0858d01b +0x5b:  movzbl (%edx),%edx
0858d01e +0x5e:  movzbl %dl,%edx
0858d021 +0x61:  mov    %edx,-0xc(%ebp)
0858d024 +0x64:  lea    0x1(%eax),%edx
0858d027 +0x67:  mov    0x8(%ebp),%eax
0858d02a +0x6a:  mov    %edx,0x4(%eax)
0858d02d +0x6d:  mov    0x8(%ebp),%eax
0858d030 +0x70:  mov    (%eax),%eax
0858d032 +0x72:  test   %eax,%eax
0858d034 +0x74:  je     0858d03d <+0x7d>
0858d036 +0x76:  cmp    $0x1,%eax
0858d039 +0x79:  je     0858d055 <+0x95>
0858d03b +0x7b:  jmp    0858d06d <+0xad>
0858d03d +0x7d:  mov    -0xc(%ebp),%eax
0858d040 +0x80:  mov    %eax,%edx
0858d042 +0x82:  shl    $0x8,%edx
0858d045 +0x85:  mov    -0x10(%ebp),%eax
0858d048 +0x88:  lea    (%edx,%eax,1),%eax
0858d04b +0x8b:  mov    %eax,%edx
0858d04d +0x8d:  mov    0xc(%ebp),%eax
0858d050 +0x90:  mov    %dx,(%eax)
0858d053 +0x93:  jmp    0858d0a9 <+0xe9>
0858d055 +0x95:  mov    -0x10(%ebp),%eax
0858d058 +0x98:  mov    %eax,%edx
0858d05a +0x9a:  shl    $0x8,%edx
0858d05d +0x9d:  mov    -0xc(%ebp),%eax
0858d060 +0xa0:  lea    (%edx,%eax,1),%eax
0858d063 +0xa3:  mov    %eax,%edx
0858d065 +0xa5:  mov    0xc(%ebp),%eax
0858d068 +0xa8:  mov    %dx,(%eax)
0858d06b +0xab:  jmp    0858d0a9 <+0xe9>
0858d06d +0xad:  mov    0x8(%ebp),%eax
0858d070 +0xb0:  mov    (%eax),%eax
0858d072 +0xb2:  mov    %eax,0x14(%esp)
0858d076 +0xb6:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858d07e +0xbe:  movl   $0x191,0xc(%esp)
0858d086 +0xc6:  movl   $&_ZZN9PacketBuf9get_shortERsE19__PRETTY_FUNCTION__,0x8(%esp)
0858d08e +0xce:  movl   $"packet_buf.cpp",0x4(%esp)
0858d096 +0xd6:  movl   $0x1,(%esp)
0858d09d +0xdd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d0a2 +0xe2:  mov    $0x0,%eax
0858d0a7 +0xe7:  jmp    0858d0ae <+0xee>
0858d0a9 +0xe9:  mov    $0x1,%eax
0858d0ae +0xee:  leave
0858d0af +0xef:  ret
```

## 反编译 C

```c
// PacketBuf::get_short @ 0x858cfc0

/* PacketBuf::get_short(short&) */

undefined4 __thiscall PacketBuf::get_short(PacketBuf *this,short *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = is_len_end(this,2);
  if (cVar3 == '\0') {
    bVar1 = *(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    bVar2 = *(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if (*(int *)this == 0) {
      *param_1 = (ushort)bVar2 * 0x100 + (ushort)bVar1;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::get_short(short int&)",0x191,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      *param_1 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
