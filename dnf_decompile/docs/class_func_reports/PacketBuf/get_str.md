# get_str

`_ZN9PacketBuf7get_strEPcii`

`PacketBuf::get_str(char*, int, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d2bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d2bc  _ZN9PacketBuf7get_strEPcii
#           PacketBuf::get_str(char*, int, int)
# range [0x0858d2bc, 0x0858d3b1]
0858d2bc +0x00:  push   %ebp
0858d2bd +0x01:  mov    %esp,%ebp
0858d2bf +0x03:  sub    $0x38,%esp
0858d2c2 +0x06:  cmpl   $0x0,0xc(%ebp)
0858d2c6 +0x0a:  jne    0858d2fe <+0x42>
0858d2c8 +0x0c:  movl   $"o_buf is null",0x10(%esp)
0858d2d0 +0x14:  movl   $0x1f8,0xc(%esp)
0858d2d8 +0x1c:  movl   $&_ZZN9PacketBuf7get_strEPciiE19__PRETTY_FUNCTION__,0x8(%esp)
0858d2e0 +0x24:  movl   $"packet_buf.cpp",0x4(%esp)
0858d2e8 +0x2c:  movl   $0x1,(%esp)
0858d2ef +0x33:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d2f4 +0x38:  mov    $0x0,%eax
0858d2f9 +0x3d:  jmp    0858d3af <+0xf3>
0858d2fe +0x42:  cmpl   $0x0,0x14(%ebp)
0858d302 +0x46:  js     0858d30a <+0x4e>
0858d304 +0x48:  cmpl   $0x0,0x10(%ebp)
0858d308 +0x4c:  jns    0858d314 <+0x58>
0858d30a +0x4e:  mov    $0x0,%eax
0858d30f +0x53:  jmp    0858d3af <+0xf3>
0858d314 +0x58:  mov    0x14(%ebp),%eax
0858d317 +0x5b:  cmp    0x10(%ebp),%eax
0858d31a +0x5e:  jl     0858d326 <+0x6a>
0858d31c +0x60:  mov    $0x0,%eax
0858d321 +0x65:  jmp    0858d3af <+0xf3>
0858d326 +0x6a:  mov    0x14(%ebp),%eax
0858d329 +0x6d:  mov    %eax,0x4(%esp)
0858d32d +0x71:  mov    0x8(%ebp),%eax
0858d330 +0x74:  mov    %eax,(%esp)
0858d333 +0x77:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858d338 +0x7c:  test   %al,%al
0858d33a +0x7e:  je     0858d343 <+0x87>
0858d33c +0x80:  mov    $0x0,%eax
0858d341 +0x85:  jmp    0858d3af <+0xf3>
0858d343 +0x87:  cmpl   $0x0,0x14(%ebp)
0858d347 +0x8b:  jne    0858d350 <+0x94>
0858d349 +0x8d:  mov    $0x1,%eax
0858d34e +0x92:  jmp    0858d3af <+0xf3>
0858d350 +0x94:  movl   $0x0,-0x10(%ebp)
0858d357 +0x9b:  jmp    0858d391 <+0xd5>
0858d359 +0x9d:  mov    0x8(%ebp),%eax
0858d35c +0xa0:  mov    0x14(%eax),%ecx
0858d35f +0xa3:  mov    0x8(%ebp),%eax
0858d362 +0xa6:  mov    0x4(%eax),%eax
0858d365 +0xa9:  mov    %eax,%edx
0858d367 +0xab:  lea    (%ecx,%edx,1),%edx
0858d36a +0xae:  movzbl (%edx),%edx
0858d36d +0xb1:  movsbl %dl,%edx
0858d370 +0xb4:  mov    %edx,-0xc(%ebp)
0858d373 +0xb7:  lea    0x1(%eax),%edx
0858d376 +0xba:  mov    0x8(%ebp),%eax
0858d379 +0xbd:  mov    %edx,0x4(%eax)
0858d37c +0xc0:  cmpl   $0x0,-0xc(%ebp)
0858d380 +0xc4:  je     0858d3a0 <+0xe4>
0858d382 +0xc6:  mov    -0x10(%ebp),%eax
0858d385 +0xc9:  add    0xc(%ebp),%eax
0858d388 +0xcc:  mov    -0xc(%ebp),%edx
0858d38b +0xcf:  mov    %dl,(%eax)
0858d38d +0xd1:  addl   $0x1,-0x10(%ebp)
0858d391 +0xd5:  mov    -0x10(%ebp),%eax
0858d394 +0xd8:  cmp    0x14(%ebp),%eax
0858d397 +0xdb:  setl   %al
0858d39a +0xde:  test   %al,%al
0858d39c +0xe0:  jne    0858d359 <+0x9d>
0858d39e +0xe2:  jmp    0858d3a1 <+0xe5>
0858d3a0 +0xe4:  nop
0858d3a1 +0xe5:  mov    -0x10(%ebp),%eax
0858d3a4 +0xe8:  add    0xc(%ebp),%eax
0858d3a7 +0xeb:  movb   $0x0,(%eax)
0858d3aa +0xee:  mov    $0x1,%eax
0858d3af +0xf3:  leave
0858d3b0 +0xf4:  ret
0858d3b1 +0xf5:  nop
```

## 反编译 C

```c
// PacketBuf::get_str @ 0x858d2bc

/* PacketBuf::get_str(char*, int, int) */

undefined4 __thiscall PacketBuf::get_str(PacketBuf *this,char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  
  if (param_1 == (char *)0x0) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::get_str(char*, int, int)",0x1f8,"o_buf is null");
    uVar2 = 0;
  }
  else if ((param_3 < 0) || (param_2 < 0)) {
    uVar2 = 0;
  }
  else if (param_3 < param_2) {
    cVar1 = is_len_end(this,param_3);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        uVar2 = 1;
      }
      else {
        for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
          cVar1 = *(char *)(*(int *)(this + 0x14) + *(int *)(this + 4));
          *(int *)(this + 4) = *(int *)(this + 4) + 1;
          if (cVar1 == '\0') break;
          param_1[local_14] = cVar1;
        }
        param_1[local_14] = '\0';
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
