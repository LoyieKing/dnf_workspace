# get_rand_int

`_ZN7DNFFLib12get_rand_intEi`

`DNFFLib::get_rand_int(int)`

| 类 | 地址 |
|---|---|
| `DNFFLib` | `0x08108b06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08108b06  _ZN7DNFFLib12get_rand_intEi
#           DNFFLib::get_rand_int(int)
# range [0x08108b06, 0x08108bfa]
08108b06 +0x00:  push   %ebp
08108b07 +0x01:  mov    %esp,%ebp
08108b09 +0x03:  sub    $0x18,%esp
08108b0c +0x06:  cmpl   $0x0,0x8(%ebp)
08108b10 +0x0a:  jns    08108b1c <+0x16>
08108b12 +0x0c:  mov    $0x0,%eax
08108b17 +0x11:  jmp    08108bf9 <+0xf3>
08108b1c +0x16:  mov    0x8(%ebp),%eax
08108b1f +0x19:  test   %eax,%eax
08108b21 +0x1b:  jne    08108b2d <+0x27>
08108b23 +0x1d:  call   0807dca0 <_init+0x598>
08108b28 +0x22:  jmp    08108bf9 <+0xf3>
08108b2d +0x27:  call   0807dca0 <_init+0x598>
08108b32 +0x2c:  mov    %eax,-0x10(%ebp)
08108b35 +0x2f:  mov    -0x10(%ebp),%eax
08108b38 +0x32:  cmp    0x8(%ebp),%eax
08108b3b +0x35:  jle    08108b51 <+0x4b>
08108b3d +0x37:  call   0807dca0 <_init+0x598>
08108b42 +0x3c:  mov    %eax,%edx
08108b44 +0x3e:  sar    $0x1f,%edx
08108b47 +0x41:  idivl  0x8(%ebp)
08108b4a +0x44:  mov    %edx,%eax
08108b4c +0x46:  jmp    08108bf9 <+0xf3>
08108b51 +0x4b:  mov    -0x10(%ebp),%eax
08108b54 +0x4e:  imul   $0x41c64e6d,%eax,%eax
08108b5a +0x54:  mov    %eax,-0x10(%ebp)
08108b5d +0x57:  addl   $0x3039,-0x10(%ebp)
08108b64 +0x5e:  mov    -0x10(%ebp),%eax
08108b67 +0x61:  mov    %eax,%edx
08108b69 +0x63:  sar    $0x1f,%edx
08108b6c +0x66:  shr    $0x10,%edx
08108b6f +0x69:  lea    (%edx,%eax,1),%eax
08108b72 +0x6c:  sar    $0x10,%eax
08108b75 +0x6f:  and    $0x7ff,%eax
08108b7a +0x74:  mov    %eax,-0xc(%ebp)
08108b7d +0x77:  mov    -0x10(%ebp),%eax
08108b80 +0x7a:  imul   $0x41c64e6d,%eax,%eax
08108b86 +0x80:  mov    %eax,-0x10(%ebp)
08108b89 +0x83:  addl   $0x3039,-0x10(%ebp)
08108b90 +0x8a:  shll   $0xa,-0xc(%ebp)
08108b94 +0x8e:  mov    -0x10(%ebp),%eax
08108b97 +0x91:  mov    %eax,%edx
08108b99 +0x93:  sar    $0x1f,%edx
08108b9c +0x96:  shr    $0x10,%edx
08108b9f +0x99:  lea    (%edx,%eax,1),%eax
08108ba2 +0x9c:  sar    $0x10,%eax
08108ba5 +0x9f:  and    $0x3ff,%eax
08108baa +0xa4:  xor    %eax,-0xc(%ebp)
08108bad +0xa7:  mov    -0x10(%ebp),%eax
08108bb0 +0xaa:  imul   $0x41c64e6d,%eax,%eax
08108bb6 +0xb0:  mov    %eax,-0x10(%ebp)
08108bb9 +0xb3:  addl   $0x3039,-0x10(%ebp)
08108bc0 +0xba:  shll   $0xa,-0xc(%ebp)
08108bc4 +0xbe:  mov    -0x10(%ebp),%eax
08108bc7 +0xc1:  mov    %eax,%edx
08108bc9 +0xc3:  sar    $0x1f,%edx
08108bcc +0xc6:  shr    $0x10,%edx
08108bcf +0xc9:  lea    (%edx,%eax,1),%eax
08108bd2 +0xcc:  sar    $0x10,%eax
08108bd5 +0xcf:  and    $0x3ff,%eax
08108bda +0xd4:  xor    %eax,-0xc(%ebp)
08108bdd +0xd7:  mov    0x8(%ebp),%eax
08108be0 +0xda:  cmp    -0xc(%ebp),%eax
08108be3 +0xdd:  jae    08108bf6 <+0xf0>
08108be5 +0xdf:  mov    0x8(%ebp),%ecx
08108be8 +0xe2:  mov    -0xc(%ebp),%eax
08108beb +0xe5:  mov    $0x0,%edx
08108bf0 +0xea:  div    %ecx
08108bf2 +0xec:  mov    %edx,%eax
08108bf4 +0xee:  jmp    08108bf9 <+0xf3>
08108bf6 +0xf0:  mov    -0xc(%ebp),%eax
08108bf9 +0xf3:  leave
08108bfa +0xf4:  ret
```

## 反编译 C

```c
// DNFFLib::get_rand_int @ 0x8108b06

/* DNFFLib::get_rand_int(int) */

uint DNFFLib::get_rand_int(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else if (param_1 == 0) {
    uVar3 = rand();
  }
  else {
    iVar4 = rand();
    if (param_1 < iVar4) {
      iVar4 = rand();
      uVar3 = iVar4 % param_1;
    }
    else {
      iVar4 = iVar4 * 0x41c64e6d + 0x3039;
      iVar1 = iVar4 * 0x41c64e6d + 0x3039;
      iVar2 = iVar1 * 0x41c64e6d + 0x3039;
      uVar3 = (((int)(((uint)(iVar4 >> 0x1f) >> 0x10) + iVar4) >> 0x10 & 0x7ffU) << 10 ^
              (int)(((uint)(iVar1 >> 0x1f) >> 0x10) + iVar1) >> 0x10 & 0x3ffU) << 10 ^
              (int)(((uint)(iVar2 >> 0x1f) >> 0x10) + iVar2) >> 0x10 & 0x3ffU;
      if ((uint)param_1 < uVar3) {
        uVar3 = uVar3 % (uint)param_1;
      }
    }
  }
  return uVar3;
}
```
