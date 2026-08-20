# put_binary

`_ZN9PacketBuf10put_binaryERiPci`

`PacketBuf::put_binary(int&, char*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cd68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cd68  _ZN9PacketBuf10put_binaryERiPci
#           PacketBuf::put_binary(int&, char*, int)
# range [0x0858cd68, 0x0858ce15]
0858cd68 +0x00:  push   %ebp
0858cd69 +0x01:  mov    %esp,%ebp
0858cd6b +0x03:  sub    $0x38,%esp
0858cd6e +0x06:  cmpl   $0x0,0x10(%ebp)
0858cd72 +0x0a:  je     0858cd7a <+0x12>
0858cd74 +0x0c:  cmpl   $0x0,0x14(%ebp)
0858cd78 +0x10:  jne    0858cdad <+0x45>
0858cd7a +0x12:  movl   $"bin is null or size is zero",0x10(%esp)
0858cd82 +0x1a:  movl   $0x123,0xc(%esp)
0858cd8a +0x22:  movl   $&_ZZN9PacketBuf10put_binaryERiPciE19__PRETTY_FUNCTION__,0x8(%esp)
0858cd92 +0x2a:  movl   $"packet_buf.cpp",0x4(%esp)
0858cd9a +0x32:  movl   $0x1,(%esp)
0858cda1 +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858cda6 +0x3e:  mov    $0x0,%eax
0858cdab +0x43:  jmp    0858ce14 <+0xac>
0858cdad +0x45:  mov    0xc(%ebp),%eax
0858cdb0 +0x48:  mov    (%eax),%eax
0858cdb2 +0x4a:  mov    0x14(%ebp),%edx
0858cdb5 +0x4d:  mov    %edx,0x8(%esp)
0858cdb9 +0x51:  mov    %eax,0x4(%esp)
0858cdbd +0x55:  mov    0x8(%ebp),%eax
0858cdc0 +0x58:  mov    %eax,(%esp)
0858cdc3 +0x5b:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858cdc8 +0x60:  test   %al,%al
0858cdca +0x62:  je     0858cdd3 <+0x6b>
0858cdcc +0x64:  mov    $0x0,%eax
0858cdd1 +0x69:  jmp    0858ce14 <+0xac>
0858cdd3 +0x6b:  movl   $0x0,-0xc(%ebp)
0858cdda +0x72:  jmp    0858ce02 <+0x9a>
0858cddc +0x74:  mov    0x8(%ebp),%eax
0858cddf +0x77:  mov    0x14(%eax),%ecx
0858cde2 +0x7a:  mov    0xc(%ebp),%eax
0858cde5 +0x7d:  mov    (%eax),%eax
0858cde7 +0x7f:  mov    %eax,%edx
0858cde9 +0x81:  add    %edx,%ecx
0858cdeb +0x83:  mov    -0xc(%ebp),%edx
0858cdee +0x86:  add    0x10(%ebp),%edx
0858cdf1 +0x89:  movzbl (%edx),%edx
0858cdf4 +0x8c:  mov    %dl,(%ecx)
0858cdf6 +0x8e:  lea    0x1(%eax),%edx
0858cdf9 +0x91:  mov    0xc(%ebp),%eax
0858cdfc +0x94:  mov    %edx,(%eax)
0858cdfe +0x96:  addl   $0x1,-0xc(%ebp)
0858ce02 +0x9a:  mov    -0xc(%ebp),%eax
0858ce05 +0x9d:  cmp    0x14(%ebp),%eax
0858ce08 +0xa0:  setl   %al
0858ce0b +0xa3:  test   %al,%al
0858ce0d +0xa5:  jne    0858cddc <+0x74>
0858ce0f +0xa7:  mov    $0x1,%eax
0858ce14 +0xac:  leave
0858ce15 +0xad:  ret
```

## 反编译 C

```c
// PacketBuf::put_binary @ 0x858cd68

/* PacketBuf::put_binary(int&, char*, int) */

undefined4 __thiscall PacketBuf::put_binary(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::put_binary(int&, char*, int)",0x123,
               "bin is null or size is zero");
    uVar3 = 0;
  }
  else {
    cVar2 = is_ptr_end(this,*param_1,param_3);
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
        iVar1 = *param_1;
        *(char *)(*(int *)(this + 0x14) + iVar1) = param_2[local_10];
        *param_1 = iVar1 + 1;
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
