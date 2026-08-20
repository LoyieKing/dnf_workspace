# LexerError

`_ZN25__slang_filter__FlexLexer10LexerErrorEPKc`

`__slang_filter__FlexLexer::LexerError(char const*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094d40  _ZN25__slang_filter__FlexLexer10LexerErrorEPKc
#           __slang_filter__FlexLexer::LexerError(char const*)
# range [0x08094d40, 0x08094d70]
08094d40 +0x00:  push   %ebp
08094d41 +0x01:  mov    %esp,%ebp
08094d43 +0x03:  sub    $0x18,%esp
08094d46 +0x06:  mov    0xc(%ebp),%eax
08094d49 +0x09:  mov    %eax,0x4(%esp)
08094d4d +0x0d:  movl   $&_ZSt4cerr,(%esp)
08094d54 +0x14:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
08094d59 +0x19:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
08094d61 +0x21:  mov    %eax,(%esp)
08094d64 +0x24:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
08094d69 +0x29:  movl   $0x2,(%esp)
08094d70 +0x30:  call   0807e1c0 <_init+0xab8>
```

## 反编译 C

```c
// __slang_filter__FlexLexer::LexerError @ 0x8094d40

/* __slang_filter__FlexLexer::LexerError(char const*) */

void __thiscall __slang_filter__FlexLexer::LexerError(__slang_filter__FlexLexer *this,char *param_1)

{
  ostream *this_00;
  
  this_00 = std::operator<<((ostream *)&std::cerr,param_1);
  std::ostream::operator<<(this_00,std::endl<char,std::char_traits<char>>);
                    /* WARNING: Subroutine does not return */
  exit(2);
}
```
