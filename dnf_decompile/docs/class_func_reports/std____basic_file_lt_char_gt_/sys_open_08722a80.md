# sys_open

`_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode`

`std::__basic_file<char>::sys_open(int, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722a80  _ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode
#           std::__basic_file<char>::sys_open(int, std::_Ios_Openmode)
# range [0x08722a80, 0x08722b0f]
08722a80 +0x00:  push   %ebp
08722a81 +0x01:  mov    %esp,%ebp
08722a83 +0x03:  sub    $0x18,%esp
08722a86 +0x06:  mov    0x10(%ebp),%eax
08722a89 +0x09:  mov    %ebx,-0x8(%ebp)
08722a8c +0x0c:  mov    0x8(%ebp),%ebx
08722a8f +0x0f:  mov    %esi,-0x4(%ebp)
08722a92 +0x12:  mov    0xc(%ebp),%esi
08722a95 +0x15:  and    $0x3d,%eax
08722a98 +0x18:  sub    $0x1,%eax
08722a9b +0x1b:  cmp    $0x3b,%eax
08722a9e +0x1e:  ja     08722ab1 <+0x31>
08722aa0 +0x20:  mov    &CSWTCH.106(,%eax,4),%eax
08722aa7 +0x27:  test   %eax,%eax
08722aa9 +0x29:  je     08722ab1 <+0x31>
08722aab +0x2b:  mov    (%ebx),%edx
08722aad +0x2d:  test   %edx,%edx
08722aaf +0x2f:  je     08722ac0 <+0x40>
08722ab1 +0x31:  xor    %eax,%eax
08722ab3 +0x33:  mov    -0x8(%ebp),%ebx
08722ab6 +0x36:  mov    -0x4(%ebp),%esi
08722ab9 +0x39:  mov    %ebp,%esp
08722abb +0x3b:  pop    %ebp
08722abc +0x3c:  ret
08722abd +0x3d:  lea    0x0(%esi),%esi
08722ac0 +0x40:  mov    %eax,0x4(%esp)
08722ac4 +0x44:  mov    %esi,(%esp)
08722ac7 +0x47:  call   0807dcd0 <_init+0x5c8>
08722acc +0x4c:  test   %eax,%eax
08722ace +0x4e:  mov    %eax,%edx
08722ad0 +0x50:  mov    %eax,(%ebx)
08722ad2 +0x52:  je     08722ab1 <+0x31>
08722ad4 +0x54:  test   %esi,%esi
08722ad6 +0x56:  mov    %ebx,%eax
08722ad8 +0x58:  movb   $0x1,0x4(%ebx)
08722adc +0x5c:  jne    08722ab3 <+0x33>
08722ade +0x5e:  movl   $0x0,0xc(%esp)
08722ae6 +0x66:  movl   $0x2,0x8(%esp)
08722aee +0x6e:  movl   $0x0,0x4(%esp)
08722af6 +0x76:  mov    %edx,(%esp)
08722af9 +0x79:  call   0807e430 <_init+0xd28>
08722afe +0x7e:  mov    %ebx,%eax
08722b00 +0x80:  mov    -0x4(%ebp),%esi
08722b03 +0x83:  mov    -0x8(%ebp),%ebx
08722b06 +0x86:  mov    %ebp,%esp
08722b08 +0x88:  pop    %ebp
08722b09 +0x89:  ret
08722b0a +0x8a:  nop
08722b0b +0x8b:  nop
08722b0c +0x8c:  nop
08722b0d +0x8d:  nop
08722b0e +0x8e:  nop
08722b0f +0x8f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::sys_open @ 0x8722a80

/* std::__basic_file<char>::sys_open(int, std::_Ios_Openmode) */

__basic_file<char> * __thiscall
std::__basic_file<char>::sys_open(__basic_file<char> *this,int param_1,_Ios_Openmode param_2)

{
  uint uVar1;
  FILE *__stream;
  
  uVar1 = (param_2 & (_S_trunc|_S_out|_S_in|_S_bin|_S_app)) - _S_app;
  if (((uVar1 < 0x3c) && (*(char **)(CSWTCH_106 + uVar1 * 4) != (char *)0x0)) &&
     (this->_M_cfile == (__c_file *)0x0)) {
    __stream = fdopen(param_1,*(char **)(CSWTCH_106 + uVar1 * 4));
    this->_M_cfile = (__c_file *)__stream;
    if (__stream != (FILE *)0x0) {
      this->_M_cfile_created = true;
      if (param_1 != 0) {
        return this;
      }
      setvbuf(__stream,(char *)0x0,2,0);
      return this;
    }
  }
  return (__basic_file<char> *)0x0;
}
```
