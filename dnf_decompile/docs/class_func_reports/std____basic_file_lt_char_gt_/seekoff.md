# seekoff

`_ZNSt12__basic_fileIcE7seekoffExSt12_Ios_Seekdir`

`std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir)`

| 类 | 地址 |
|---|---|
| `std::__basic_file<char>` | `0x08722880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722880  _ZNSt12__basic_fileIcE7seekoffExSt12_Ios_Seekdir
#           std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir)
# range [0x08722880, 0x087228cf]
08722880 +0x00:  push   %ebp
08722881 +0x01:  mov    %esp,%ebp
08722883 +0x03:  sub    $0x28,%esp
08722886 +0x06:  mov    0x8(%ebp),%eax
08722889 +0x09:  mov    %ebx,-0xc(%ebp)
0872288c +0x0c:  mov    0xc(%ebp),%ebx
0872288f +0x0f:  mov    %esi,-0x8(%ebp)
08722892 +0x12:  mov    0x10(%ebp),%esi
08722895 +0x15:  mov    %edi,-0x4(%ebp)
08722898 +0x18:  mov    0x14(%ebp),%edi
0872289b +0x1b:  mov    (%eax),%eax
0872289d +0x1d:  mov    %eax,(%esp)
087228a0 +0x20:  call   0807e6d0 <_init+0xfc8>
087228a5 +0x25:  mov    %edi,0x14(%ebp)
087228a8 +0x28:  mov    -0x4(%ebp),%edi
087228ab +0x2b:  mov    %ebx,0xc(%ebp)
087228ae +0x2e:  mov    -0xc(%ebp),%ebx
087228b1 +0x31:  mov    %esi,0x10(%ebp)
087228b4 +0x34:  mov    -0x8(%ebp),%esi
087228b7 +0x37:  mov    %eax,0x8(%ebp)
087228ba +0x3a:  mov    %ebp,%esp
087228bc +0x3c:  pop    %ebp
087228bd +0x3d:  jmp    0807e7a0 <_init+0x1098>
087228c2 +0x42:  nop
087228c3 +0x43:  nop
087228c4 +0x44:  nop
087228c5 +0x45:  nop
087228c6 +0x46:  nop
087228c7 +0x47:  nop
087228c8 +0x48:  nop
087228c9 +0x49:  nop
087228ca +0x4a:  nop
087228cb +0x4b:  nop
087228cc +0x4c:  nop
087228cd +0x4d:  nop
087228ce +0x4e:  nop
087228cf +0x4f:  nop
```

## 反编译 C

```c
// std::__basic_file<char>::seekoff @ 0x8722880

/* std::__basic_file<char>::seekoff(long long, std::_Ios_Seekdir) */

__off64_t std::__basic_file<char>::seekoff(longlong param_1,_Ios_Seekdir param_2)

{
  int __fd;
  __off64_t _Var1;
  int in_stack_00000010;
  
  __fd = fileno((FILE *)*(undefined4 *)param_1);
  _Var1 = lseek64(__fd,CONCAT44(param_2,param_1._4_4_),in_stack_00000010);
  return _Var1;
}
```
