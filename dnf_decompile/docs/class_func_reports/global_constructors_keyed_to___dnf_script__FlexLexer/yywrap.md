# yywrap

`_GLOBAL__I__ZN23__dnf_script__FlexLexer6yywrapEv`

`global constructors keyed to __dnf_script__FlexLexer::yywrap()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to __dnf_script__FlexLexer` | `0x08ad1df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1df0  _GLOBAL__I__ZN23__dnf_script__FlexLexer6yywrapEv
#           global constructors keyed to __dnf_script__FlexLexer::yywrap()
# range [0x08ad1df0, 0x08ad1e1f]
08ad1df0 +0x00:  push   %ebp
08ad1df1 +0x01:  mov    %esp,%ebp
08ad1df3 +0x03:  sub    $0x18,%esp
08ad1df6 +0x06:  movl   $&_ZStL8__ioinit,(%esp)
08ad1dfd +0x0d:  call   086da1e0 <_ZNSt8ios_base4InitC1Ev>  ; std::ios_base::Init::Init()
08ad1e02 +0x12:  movl   $&__dso_handle,0x8(%esp)
08ad1e0a +0x1a:  movl   $&_ZStL8__ioinit,0x4(%esp)
08ad1e12 +0x22:  movl   $&_ZNSt8ios_base4InitD1Ev,(%esp)
08ad1e19 +0x29:  call   0807ddd0 <_init+0x6c8>
08ad1e1e +0x2e:  leave
08ad1e1f +0x2f:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8ad1df0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__I__ZN23__dnf_script__FlexLexer6yywrapEv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}
```
