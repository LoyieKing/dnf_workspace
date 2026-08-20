# SlangFilter

`_ZN11SlangFilterC1Ev`

`SlangFilter::SlangFilter()`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x08094e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094e78  _ZN11SlangFilterC1Ev
#           SlangFilter::SlangFilter()
# range [0x08094e78, 0x08094ea3]
08094e78 +0x00:  push   %ebp
08094e79 +0x01:  mov    %esp,%ebp
08094e7b +0x03:  sub    $0x18,%esp
08094e7e +0x06:  mov    0x8(%ebp),%eax
08094e81 +0x09:  movl   $0x0,0x8(%esp)
08094e89 +0x11:  movl   $0x0,0x4(%esp)
08094e91 +0x19:  mov    %eax,(%esp)
08094e94 +0x1c:  call   08093834 <_ZN25__slang_filter__FlexLexerC1EPSiPSo>  ; __slang_filter__FlexLexer::__slang_filter__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
08094e99 +0x21:  mov    0x8(%ebp),%eax
08094e9c +0x24:  movl   $&_ZTV11SlangFilter+0x8,(%eax)
08094ea2 +0x2a:  leave
08094ea3 +0x2b:  ret
```

## 反编译 C

```c
// SlangFilter::SlangFilter @ 0x8094e78

/* SlangFilter::SlangFilter() */

void __thiscall SlangFilter::SlangFilter(SlangFilter *this)

{
  __slang_filter__FlexLexer::__slang_filter__FlexLexer
            ((__slang_filter__FlexLexer *)this,(istream *)0x0,(ostream *)0x0);
  *(undefined ***)this = &PTR__SlangFilter_08b123e8;
  return;
}
```
