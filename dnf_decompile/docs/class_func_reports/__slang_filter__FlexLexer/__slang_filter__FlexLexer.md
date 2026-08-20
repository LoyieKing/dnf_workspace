# __slang_filter__FlexLexer

`_ZN25__slang_filter__FlexLexerC1EPSiPSo`

`__slang_filter__FlexLexer::__slang_filter__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08093834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08093834  _ZN25__slang_filter__FlexLexerC1EPSiPSo
#           __slang_filter__FlexLexer::__slang_filter__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
# range [0x08093834, 0x08093919]
08093834 +0x00:  push   %ebp
08093835 +0x01:  mov    %esp,%ebp
08093837 +0x03:  sub    $0x18,%esp
0809383a +0x06:  mov    0x8(%ebp),%eax
0809383d +0x09:  mov    %eax,(%esp)
08093840 +0x0c:  call   08094e56 <_GLOBAL__I__ZN25__slang_filter__FlexLexer6yywrapEv+0x61>  ; global constructors keyed to __slang_filter__FlexLexer::yywrap()+0x61
08093845 +0x11:  mov    0x8(%ebp),%eax
08093848 +0x14:  movl   $&_ZTV25__slang_filter__FlexLexer+0x8,(%eax)
0809384e +0x1a:  mov    0x8(%ebp),%eax
08093851 +0x1d:  mov    0xc(%ebp),%edx
08093854 +0x20:  mov    %edx,0x20(%eax)
08093857 +0x23:  mov    0x8(%ebp),%eax
0809385a +0x26:  mov    0x10(%ebp),%edx
0809385d +0x29:  mov    %edx,0x24(%eax)
08093860 +0x2c:  mov    0x8(%ebp),%eax
08093863 +0x2f:  movl   $0x0,0x30(%eax)
0809386a +0x36:  mov    0x8(%ebp),%eax
0809386d +0x39:  movl   $0x0,0x34(%eax)
08093874 +0x40:  mov    0x8(%ebp),%eax
08093877 +0x43:  movl   $0x0,0x38(%eax)
0809387e +0x4a:  mov    0x8(%ebp),%eax
08093881 +0x4d:  movl   $0x0,0x10(%eax)
08093888 +0x54:  mov    0x8(%ebp),%eax
0809388b +0x57:  movl   $0x1,0xc(%eax)
08093892 +0x5e:  mov    0x8(%ebp),%eax
08093895 +0x61:  movl   $0x0,0x3c(%eax)
0809389c +0x68:  mov    0x8(%ebp),%eax
0809389f +0x6b:  movl   $0x0,0x6c(%eax)
080938a6 +0x72:  mov    0x8(%ebp),%eax
080938a9 +0x75:  movl   $0x0,0x70(%eax)
080938b0 +0x7c:  mov    0x8(%ebp),%eax
080938b3 +0x7f:  movl   $0x0,0x74(%eax)
080938ba +0x86:  mov    0x8(%ebp),%eax
080938bd +0x89:  movl   $0x0,0x7c(%eax)
080938c4 +0x90:  mov    0x8(%ebp),%eax
080938c7 +0x93:  mov    0x7c(%eax),%edx
080938ca +0x96:  mov    0x8(%ebp),%eax
080938cd +0x99:  mov    %edx,0x78(%eax)
080938d0 +0x9c:  mov    0x8(%ebp),%eax
080938d3 +0x9f:  movl   $0x0,0x18(%eax)
080938da +0xa6:  mov    0x8(%ebp),%eax
080938dd +0xa9:  mov    0x18(%eax),%edx
080938e0 +0xac:  mov    0x8(%ebp),%eax
080938e3 +0xaf:  mov    %edx,0x14(%eax)
080938e6 +0xb2:  mov    0x8(%ebp),%eax
080938e9 +0xb5:  movl   $0x0,0x1c(%eax)
080938f0 +0xbc:  mov    0x8(%ebp),%eax
080938f3 +0xbf:  movl   $0x0,0x48(%eax)
080938fa +0xc6:  mov    0x8(%ebp),%eax
080938fd +0xc9:  movl   $0x0,0x40(%eax)
08093904 +0xd0:  mov    0x8(%ebp),%eax
08093907 +0xd3:  movl   $0x0,0x44(%eax)
0809390e +0xda:  mov    0x8(%ebp),%eax
08093911 +0xdd:  movl   $0x0,0x54(%eax)
08093918 +0xe4:  leave
08093919 +0xe5:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::__slang_filter__FlexLexer @ 0x8093834

/* __slang_filter__FlexLexer::__slang_filter__FlexLexer(std::istream*, std::ostream*) */

void __thiscall
__slang_filter__FlexLexer::__slang_filter__FlexLexer
          (__slang_filter__FlexLexer *this,istream *param_1,ostream *param_2)

{
  FlexLexer::FlexLexer((FlexLexer *)this);
  *(undefined ***)this = &PTR____slang_filter__FlexLexer_08b12328;
  *(istream **)(this + 0x20) = param_1;
  *(ostream **)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}
```
