# open

`_ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei`

`std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722a20  _ZNSt12__basic_fileIcE4openEPKcSt13_Ios_Openmodei
#           std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int)
# range [0x08722a20, 0x08722a7f]
08722a20 +0x00:  push   %ebp
08722a21 +0x01:  mov    %esp,%ebp
08722a23 +0x03:  push   %ebx
08722a24 +0x04:  sub    $0x14,%esp
08722a27 +0x07:  mov    0x10(%ebp),%eax
08722a2a +0x0a:  mov    0x8(%ebp),%ebx
08722a2d +0x0d:  and    $0x3d,%eax
08722a30 +0x10:  sub    $0x1,%eax
08722a33 +0x13:  cmp    $0x3b,%eax
08722a36 +0x16:  ja     08722a49 <+0x29>
08722a38 +0x18:  mov    &CSWTCH.106(,%eax,4),%eax
08722a3f +0x1f:  test   %eax,%eax
08722a41 +0x21:  je     08722a49 <+0x29>
08722a43 +0x23:  mov    (%ebx),%ecx
08722a45 +0x25:  test   %ecx,%ecx
08722a47 +0x27:  je     08722a58 <+0x38>
08722a49 +0x29:  xor    %eax,%eax
08722a4b +0x2b:  add    $0x14,%esp
08722a4e +0x2e:  pop    %ebx
08722a4f +0x2f:  pop    %ebp
08722a50 +0x30:  ret
08722a51 +0x31:  lea    0x0(%esi,%eiz,1),%esi
08722a58 +0x38:  mov    %eax,0x4(%esp)
08722a5c +0x3c:  mov    0xc(%ebp),%eax
08722a5f +0x3f:  mov    %eax,(%esp)
08722a62 +0x42:  call   0807d940 <_init+0x238>
08722a67 +0x47:  test   %eax,%eax
08722a69 +0x49:  mov    %eax,(%ebx)
08722a6b +0x4b:  je     08722a49 <+0x29>
08722a6d +0x4d:  movb   $0x1,0x4(%ebx)
08722a71 +0x51:  mov    %ebx,%eax
08722a73 +0x53:  jmp    08722a4b <+0x2b>
08722a75 +0x55:  nop
08722a76 +0x56:  nop
08722a77 +0x57:  nop
08722a78 +0x58:  nop
08722a79 +0x59:  nop
08722a7a +0x5a:  nop
08722a7b +0x5b:  nop
08722a7c +0x5c:  nop
08722a7d +0x5d:  nop
08722a7e +0x5e:  nop
08722a7f +0x5f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::open @ 0x8722a20

/* std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int) */

char * std::__basic_file<char>::open(char *param_1,_Ios_Openmode param_2,int param_3)

{
  uint uVar1;
  FILE *pFVar2;
  
  uVar1 = (param_3 & 0x3dU) - 1;
  if (((uVar1 < 0x3c) && (*(char **)(CSWTCH_106 + uVar1 * 4) != (char *)0x0)) &&
     (*(int *)param_1 == 0)) {
    pFVar2 = fopen64((char *)param_2,*(char **)(CSWTCH_106 + uVar1 * 4));
    *(FILE **)param_1 = pFVar2;
    if (pFVar2 != (FILE *)0x0) {
      param_1[4] = '\x01';
      return param_1;
    }
  }
  return (char *)0x0;
}
```
