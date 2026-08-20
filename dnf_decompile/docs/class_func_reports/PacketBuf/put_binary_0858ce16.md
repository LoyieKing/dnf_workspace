# put_binary

`_ZN9PacketBuf10put_binaryERiPKci`

`PacketBuf::put_binary(int&, char const*, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858ce16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858ce16  _ZN9PacketBuf10put_binaryERiPKci
#           PacketBuf::put_binary(int&, char const*, int)
# range [0x0858ce16, 0x0858cec3]
0858ce16 +0x00:  push   %ebp
0858ce17 +0x01:  mov    %esp,%ebp
0858ce19 +0x03:  sub    $0x38,%esp
0858ce1c +0x06:  cmpl   $0x0,0x10(%ebp)
0858ce20 +0x0a:  je     0858ce28 <+0x12>
0858ce22 +0x0c:  cmpl   $0x0,0x14(%ebp)
0858ce26 +0x10:  jne    0858ce5b <+0x45>
0858ce28 +0x12:  movl   $"bin is null or size is zero",0x10(%esp)
0858ce30 +0x1a:  movl   $0x138,0xc(%esp)
0858ce38 +0x22:  movl   $&_ZZN9PacketBuf10put_binaryERiPKciE19__PRETTY_FUNCTION__,0x8(%esp)
0858ce40 +0x2a:  movl   $"packet_buf.cpp",0x4(%esp)
0858ce48 +0x32:  movl   $0x1,(%esp)
0858ce4f +0x39:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858ce54 +0x3e:  mov    $0x0,%eax
0858ce59 +0x43:  jmp    0858cec2 <+0xac>
0858ce5b +0x45:  mov    0xc(%ebp),%eax
0858ce5e +0x48:  mov    (%eax),%eax
0858ce60 +0x4a:  mov    0x14(%ebp),%edx
0858ce63 +0x4d:  mov    %edx,0x8(%esp)
0858ce67 +0x51:  mov    %eax,0x4(%esp)
0858ce6b +0x55:  mov    0x8(%ebp),%eax
0858ce6e +0x58:  mov    %eax,(%esp)
0858ce71 +0x5b:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858ce76 +0x60:  test   %al,%al
0858ce78 +0x62:  je     0858ce81 <+0x6b>
0858ce7a +0x64:  mov    $0x0,%eax
0858ce7f +0x69:  jmp    0858cec2 <+0xac>
0858ce81 +0x6b:  movl   $0x0,-0xc(%ebp)
0858ce88 +0x72:  jmp    0858ceb0 <+0x9a>
0858ce8a +0x74:  mov    0x8(%ebp),%eax
0858ce8d +0x77:  mov    0x14(%eax),%ecx
0858ce90 +0x7a:  mov    0xc(%ebp),%eax
0858ce93 +0x7d:  mov    (%eax),%eax
0858ce95 +0x7f:  mov    %eax,%edx
0858ce97 +0x81:  add    %edx,%ecx
0858ce99 +0x83:  mov    -0xc(%ebp),%edx
0858ce9c +0x86:  add    0x10(%ebp),%edx
0858ce9f +0x89:  movzbl (%edx),%edx
0858cea2 +0x8c:  mov    %dl,(%ecx)
0858cea4 +0x8e:  lea    0x1(%eax),%edx
0858cea7 +0x91:  mov    0xc(%ebp),%eax
0858ceaa +0x94:  mov    %edx,(%eax)
0858ceac +0x96:  addl   $0x1,-0xc(%ebp)
0858ceb0 +0x9a:  mov    -0xc(%ebp),%eax
0858ceb3 +0x9d:  cmp    0x14(%ebp),%eax
0858ceb6 +0xa0:  setl   %al
0858ceb9 +0xa3:  test   %al,%al
0858cebb +0xa5:  jne    0858ce8a <+0x74>
0858cebd +0xa7:  mov    $0x1,%eax
0858cec2 +0xac:  leave
0858cec3 +0xad:  ret
```

## 反编译 C

```c
// PacketBuf::put_binary @ 0x858ce16

/* PacketBuf::put_binary(int&, char const*, int) */

undefined4 __thiscall PacketBuf::put_binary(PacketBuf *this,int *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::put_binary(int&, const char*, int)",0x138,
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
