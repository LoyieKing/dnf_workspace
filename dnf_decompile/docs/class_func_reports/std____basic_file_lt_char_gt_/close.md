# close

`_ZNSt12__basic_fileIcE5closeEv`

`std::__basic_file<char>::close()`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722690  _ZNSt12__basic_fileIcE5closeEv
#           std::__basic_file<char>::close()
# range [0x08722690, 0x0872271f]
08722690 +0x00:  push   %ebp
08722691 +0x01:  xor    %eax,%eax
08722693 +0x03:  mov    %esp,%ebp
08722695 +0x05:  sub    $0x28,%esp
08722698 +0x08:  mov    %ebx,-0xc(%ebp)
0872269b +0x0b:  mov    0x8(%ebp),%ebx
0872269e +0x0e:  mov    %esi,-0x8(%ebp)
087226a1 +0x11:  mov    %edi,-0x4(%ebp)
087226a4 +0x14:  mov    (%ebx),%esi
087226a6 +0x16:  test   %esi,%esi
087226a8 +0x18:  jne    087226b8 <+0x28>
087226aa +0x1a:  mov    -0xc(%ebp),%ebx
087226ad +0x1d:  mov    -0x8(%ebp),%esi
087226b0 +0x20:  mov    -0x4(%ebp),%edi
087226b3 +0x23:  mov    %ebp,%esp
087226b5 +0x25:  pop    %ebp
087226b6 +0x26:  ret
087226b7 +0x27:  nop
087226b8 +0x28:  cmpb   $0x0,0x4(%ebx)
087226bc +0x2c:  je     087226f8 <+0x68>
087226be +0x2e:  call   0807dd70 <_init+0x668>
087226c3 +0x33:  mov    %eax,%edi
087226c5 +0x35:  movl   $0x0,(%eax)
087226cb +0x3b:  mov    %esi,(%esp)
087226ce +0x3e:  call   0807dea0 <_init+0x798>
087226d3 +0x43:  test   %eax,%eax
087226d5 +0x45:  je     087226f8 <+0x68>
087226d7 +0x47:  cmpl   $0x4,(%edi)
087226da +0x4a:  je     08722710 <+0x80>
087226dc +0x4c:  movl   $0x0,(%ebx)
087226e2 +0x52:  xor    %eax,%eax
087226e4 +0x54:  mov    -0xc(%ebp),%ebx
087226e7 +0x57:  mov    -0x8(%ebp),%esi
087226ea +0x5a:  mov    -0x4(%ebp),%edi
087226ed +0x5d:  mov    %ebp,%esp
087226ef +0x5f:  pop    %ebp
087226f0 +0x60:  ret
087226f1 +0x61:  lea    0x0(%esi,%eiz,1),%esi
087226f8 +0x68:  movl   $0x0,(%ebx)
087226fe +0x6e:  mov    %ebx,%eax
08722700 +0x70:  mov    -0x8(%ebp),%esi
08722703 +0x73:  mov    -0xc(%ebp),%ebx
08722706 +0x76:  mov    -0x4(%ebp),%edi
08722709 +0x79:  mov    %ebp,%esp
0872270b +0x7b:  pop    %ebp
0872270c +0x7c:  ret
0872270d +0x7d:  lea    0x0(%esi),%esi
08722710 +0x80:  mov    (%ebx),%esi
08722712 +0x82:  jmp    087226cb <+0x3b>
08722714 +0x84:  nop
08722715 +0x85:  nop
08722716 +0x86:  nop
08722717 +0x87:  nop
08722718 +0x88:  nop
08722719 +0x89:  nop
0872271a +0x8a:  nop
0872271b +0x8b:  nop
0872271c +0x8c:  nop
0872271d +0x8d:  nop
0872271e +0x8e:  nop
0872271f +0x8f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::close @ 0x8722690

/* std::__basic_file<char>::close() */

__basic_file<char> * __thiscall std::__basic_file<char>::close(__basic_file<char> *this)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  
  __stream = (FILE *)this->_M_cfile;
  if (__stream == (FILE *)0x0) {
    return (__basic_file<char> *)0x0;
  }
  if (this->_M_cfile_created != false) {
    piVar1 = __errno_location();
    *piVar1 = 0;
    while( true ) {
      iVar2 = fclose(__stream);
      if (iVar2 == 0) break;
      if (*piVar1 != 4) {
        this->_M_cfile = (__c_file *)0x0;
        return (__basic_file<char> *)0x0;
      }
      __stream = (FILE *)this->_M_cfile;
    }
  }
  this->_M_cfile = (__c_file *)0x0;
  return this;
}
```
