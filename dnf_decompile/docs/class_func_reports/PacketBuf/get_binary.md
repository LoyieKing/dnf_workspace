# get_binary

`_ZN9PacketBuf10get_binaryEPci`

`PacketBuf::get_binary(char*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d3b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d3b2  _ZN9PacketBuf10get_binaryEPci
#           PacketBuf::get_binary(char*, int)
# range [0x0858d3b2, 0x0858d461]
0858d3b2 +0x00:  push   %ebp
0858d3b3 +0x01:  mov    %esp,%ebp
0858d3b5 +0x03:  push   %ebx
0858d3b6 +0x04:  sub    $0x34,%esp
0858d3b9 +0x07:  cmpl   $0x0,0xc(%ebp)
0858d3bd +0x0b:  je     0858d3c5 <+0x13>
0858d3bf +0x0d:  cmpl   $0x0,0x10(%ebp)
0858d3c3 +0x11:  jne    0858d3f8 <+0x46>
0858d3c5 +0x13:  movl   $"o_buf == NULL || size == 0",0x10(%esp)
0858d3cd +0x1b:  movl   $0x21e,0xc(%esp)
0858d3d5 +0x23:  movl   $&_ZZN9PacketBuf10get_binaryEPciE19__PRETTY_FUNCTION__,0x8(%esp)
0858d3dd +0x2b:  movl   $"packet_buf.cpp",0x4(%esp)
0858d3e5 +0x33:  movl   $0x1,(%esp)
0858d3ec +0x3a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d3f1 +0x3f:  mov    $0x0,%eax
0858d3f6 +0x44:  jmp    0858d45b <+0xa9>
0858d3f8 +0x46:  mov    0x10(%ebp),%eax
0858d3fb +0x49:  mov    %eax,0x4(%esp)
0858d3ff +0x4d:  mov    0x8(%ebp),%eax
0858d402 +0x50:  mov    %eax,(%esp)
0858d405 +0x53:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858d40a +0x58:  test   %al,%al
0858d40c +0x5a:  je     0858d415 <+0x63>
0858d40e +0x5c:  mov    $0x0,%eax
0858d413 +0x61:  jmp    0858d45b <+0xa9>
0858d415 +0x63:  movl   $0x0,-0xc(%ebp)
0858d41c +0x6a:  jmp    0858d449 <+0x97>
0858d41e +0x6c:  mov    -0xc(%ebp),%eax
0858d421 +0x6f:  mov    %eax,%edx
0858d423 +0x71:  add    0xc(%ebp),%edx
0858d426 +0x74:  mov    0x8(%ebp),%eax
0858d429 +0x77:  mov    0x14(%eax),%ebx
0858d42c +0x7a:  mov    0x8(%ebp),%eax
0858d42f +0x7d:  mov    0x4(%eax),%eax
0858d432 +0x80:  mov    %eax,%ecx
0858d434 +0x82:  lea    (%ebx,%ecx,1),%ecx
0858d437 +0x85:  movzbl (%ecx),%ecx
0858d43a +0x88:  mov    %cl,(%edx)
0858d43c +0x8a:  lea    0x1(%eax),%edx
0858d43f +0x8d:  mov    0x8(%ebp),%eax
0858d442 +0x90:  mov    %edx,0x4(%eax)
0858d445 +0x93:  addl   $0x1,-0xc(%ebp)
0858d449 +0x97:  mov    -0xc(%ebp),%eax
0858d44c +0x9a:  cmp    0x10(%ebp),%eax
0858d44f +0x9d:  setl   %al
0858d452 +0xa0:  test   %al,%al
0858d454 +0xa2:  jne    0858d41e <+0x6c>
0858d456 +0xa4:  mov    $0x1,%eax
0858d45b +0xa9:  add    $0x34,%esp
0858d45e +0xac:  pop    %ebx
0858d45f +0xad:  pop    %ebp
0858d460 +0xae:  ret
0858d461 +0xaf:  nop
```

## 反编译 C

```c
// PacketBuf::get_binary @ 0x858d3b2

/* PacketBuf::get_binary(char*, int) */

undefined4 __thiscall PacketBuf::get_binary(PacketBuf *this,char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::get_binary(char*, int)",0x21e,
               "o_buf == NULL || size == 0");
    uVar3 = 0;
  }
  else {
    cVar2 = is_len_end(this,param_2);
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
        iVar1 = *(int *)(this + 4);
        param_1[local_10] = *(char *)(*(int *)(this + 0x14) + iVar1);
        *(int *)(this + 4) = iVar1 + 1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
