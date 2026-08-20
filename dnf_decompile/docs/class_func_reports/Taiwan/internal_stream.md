# internal_stream

`_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi`

`Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)`

| 类 | 地址 |
|---|---|
| `Taiwan` | `0x08163950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163950  _ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi
#           Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
# range [0x08163950, 0x081639ab]
08163950 +0x00:  push   %ebp
08163951 +0x01:  mov    %esp,%ebp
08163953 +0x03:  push   %ebx
08163954 +0x04:  sub    $0x14,%esp
08163957 +0x07:  mov    0x8(%ebp),%eax
0816395a +0x0a:  mov    %eax,(%esp)
0816395d +0x0d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08163962 +0x12:  movl   $0x34e,0x4(%esp)
0816396a +0x1a:  mov    %eax,(%esp)
0816396d +0x1d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08163972 +0x22:  mov    0x8(%ebp),%eax
08163975 +0x25:  mov    %eax,(%esp)
08163978 +0x28:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0816397d +0x2d:  mov    0x10(%ebp),%edx
08163980 +0x30:  mov    %edx,0x4(%esp)
08163984 +0x34:  mov    %eax,(%esp)
08163987 +0x37:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0816398c +0x3c:  mov    0xc(%ebp),%ebx
0816398f +0x3f:  mov    0x8(%ebp),%eax
08163992 +0x42:  mov    %eax,(%esp)
08163995 +0x45:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0816399a +0x4a:  mov    %ebx,0x4(%esp)
0816399e +0x4e:  mov    %eax,(%esp)
081639a1 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081639a6 +0x56:  add    $0x14,%esp
081639a9 +0x59:  pop    %ebx
081639aa +0x5a:  pop    %ebp
081639ab +0x5b:  ret
```

## 反编译 C

```c
// Taiwan::internal_stream @ 0x8163950

/* Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int) */

void Taiwan::internal_stream(CStreamGuard *param_1,int param_2,int param_3)

{
  CStreamGuard *pCVar1;
  
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,0x34e);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_3);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_2);
  return;
}
```
