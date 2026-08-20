# xsputn

`_ZNSt12__basic_fileIcE6xsputnEPKci`

`std::__basic_file<char>::xsputn(char const*, int)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722980  _ZNSt12__basic_fileIcE6xsputnEPKci
#           std::__basic_file<char>::xsputn(char const*, int)
# range [0x08722980, 0x087229bf]
08722980 +0x00:  push   %ebp
08722981 +0x01:  mov    %esp,%ebp
08722983 +0x03:  sub    $0x18,%esp
08722986 +0x06:  mov    0x8(%ebp),%eax
08722989 +0x09:  mov    %ebx,-0x8(%ebp)
0872298c +0x0c:  mov    0xc(%ebp),%ebx
0872298f +0x0f:  mov    %esi,-0x4(%ebp)
08722992 +0x12:  mov    0x10(%ebp),%esi
08722995 +0x15:  mov    (%eax),%eax
08722997 +0x17:  mov    %eax,(%esp)
0872299a +0x1a:  call   0807e6d0 <_init+0xfc8>
0872299f +0x1f:  mov    %esi,%ecx
087229a1 +0x21:  mov    %ebx,%edx
087229a3 +0x23:  mov    -0x4(%ebp),%esi
087229a6 +0x26:  mov    -0x8(%ebp),%ebx
087229a9 +0x29:  mov    %ebp,%esp
087229ab +0x2b:  pop    %ebp
087229ac +0x2c:  jmp    08722640 <_ZN12_GLOBAL__N_1L6xwriteEiPKci>  ; (anonymous namespace)::xwrite(int, char const*, int)
087229b1 +0x31:  nop
087229b2 +0x32:  nop
087229b3 +0x33:  nop
087229b4 +0x34:  nop
087229b5 +0x35:  nop
087229b6 +0x36:  nop
087229b7 +0x37:  nop
087229b8 +0x38:  nop
087229b9 +0x39:  nop
087229ba +0x3a:  nop
087229bb +0x3b:  nop
087229bc +0x3c:  nop
087229bd +0x3d:  nop
087229be +0x3e:  nop
087229bf +0x3f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::xsputn @ 0x8722980

/* std::__basic_file<char>::xsputn(char const*, int) */

void __thiscall std::__basic_file<char>::xsputn(__basic_file<char> *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fileno((FILE *)this->_M_cfile);
  ::(anonymous_namespace)::xwrite(iVar1,param_1,param_2);
  return;
}
```
