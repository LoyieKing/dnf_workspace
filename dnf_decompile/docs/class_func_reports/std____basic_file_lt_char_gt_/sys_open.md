# sys_open

`_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode`

`std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x087225c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087225c0  _ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode
#           std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode)
# range [0x087225c0, 0x0872263f]
087225c0 +0x00:  push   %ebp
087225c1 +0x01:  mov    %esp,%ebp
087225c3 +0x03:  sub    $0x28,%esp
087225c6 +0x06:  mov    %ebx,-0xc(%ebp)
087225c9 +0x09:  mov    0x8(%ebp),%ebx
087225cc +0x0c:  mov    %esi,-0x8(%ebp)
087225cf +0x0f:  mov    0xc(%ebp),%esi
087225d2 +0x12:  mov    %edi,-0x4(%ebp)
087225d5 +0x15:  mov    (%ebx),%edx
087225d7 +0x17:  test   %edx,%edx
087225d9 +0x19:  je     087225f0 <+0x30>
087225db +0x1b:  mov    -0xc(%ebp),%ebx
087225de +0x1e:  xor    %eax,%eax
087225e0 +0x20:  mov    -0x8(%ebp),%esi
087225e3 +0x23:  mov    -0x4(%ebp),%edi
087225e6 +0x26:  mov    %ebp,%esp
087225e8 +0x28:  pop    %ebp
087225e9 +0x29:  ret
087225ea +0x2a:  lea    0x0(%esi),%esi
087225f0 +0x30:  test   %esi,%esi
087225f2 +0x32:  je     087225db <+0x1b>
087225f4 +0x34:  call   0807dd70 <_init+0x668>
087225f9 +0x39:  movl   $0x0,(%eax)
087225ff +0x3f:  mov    %eax,%edi
08722601 +0x41:  xor    %eax,%eax
08722603 +0x43:  mov    %eax,(%esp)
08722606 +0x46:  call   0807e8d0 <_init+0x11c8>
0872260b +0x4b:  test   %eax,%eax
0872260d +0x4d:  je     08722622 <+0x62>
0872260f +0x4f:  cmpl   $0x4,(%edi)
08722612 +0x52:  jne    087225db <+0x1b>
08722614 +0x54:  mov    (%ebx),%eax
08722616 +0x56:  mov    %eax,(%esp)
08722619 +0x59:  call   0807e8d0 <_init+0x11c8>
0872261e +0x5e:  test   %eax,%eax
08722620 +0x60:  jne    0872260f <+0x4f>
08722622 +0x62:  mov    %esi,(%ebx)
08722624 +0x64:  mov    %ebx,%eax
08722626 +0x66:  movb   $0x0,0x4(%ebx)
0872262a +0x6a:  mov    -0xc(%ebp),%ebx
0872262d +0x6d:  mov    -0x8(%ebp),%esi
08722630 +0x70:  mov    -0x4(%ebp),%edi
08722633 +0x73:  mov    %ebp,%esp
08722635 +0x75:  pop    %ebp
08722636 +0x76:  ret
08722637 +0x77:  nop
08722638 +0x78:  nop
08722639 +0x79:  nop
0872263a +0x7a:  nop
0872263b +0x7b:  nop
0872263c +0x7c:  nop
0872263d +0x7d:  nop
0872263e +0x7e:  nop
0872263f +0x7f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::sys_open @ 0x87225c0

/* std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode) */

_IO_FILE * std::__basic_file<char>::sys_open(_IO_FILE *param_1,_Ios_Openmode param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1->_flags == 0) && (param_2 != 0)) {
    piVar1 = __errno_location();
    *piVar1 = 0;
    iVar2 = fflush((FILE *)0x0);
    while( true ) {
      if (iVar2 == 0) {
        param_1->_flags = param_2;
        *(undefined1 *)&param_1->_IO_read_ptr = 0;
        return param_1;
      }
      if (*piVar1 != 4) break;
      iVar2 = fflush((FILE *)param_1->_flags);
    }
  }
  return (_IO_FILE *)0x0;
}
```
