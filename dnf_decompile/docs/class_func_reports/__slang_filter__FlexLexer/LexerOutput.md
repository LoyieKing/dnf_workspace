# LexerOutput

`_ZN25__slang_filter__FlexLexer11LexerOutputEPKci`

`__slang_filter__FlexLexer::LexerOutput(char const*, int)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08093b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08093b60  _ZN25__slang_filter__FlexLexer11LexerOutputEPKci
#           __slang_filter__FlexLexer::LexerOutput(char const*, int)
# range [0x08093b60, 0x08093b83]
08093b60 +0x00:  push   %ebp
08093b61 +0x01:  mov    %esp,%ebp
08093b63 +0x03:  sub    $0x18,%esp
08093b66 +0x06:  mov    0x8(%ebp),%eax
08093b69 +0x09:  mov    0x24(%eax),%eax
08093b6c +0x0c:  mov    0x10(%ebp),%edx
08093b6f +0x0f:  mov    %edx,0x8(%esp)
08093b73 +0x13:  mov    0xc(%ebp),%edx
08093b76 +0x16:  mov    %edx,0x4(%esp)
08093b7a +0x1a:  mov    %eax,(%esp)
08093b7d +0x1d:  call   086fd4e0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8c74>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8c74
08093b82 +0x22:  leave
08093b83 +0x23:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::LexerOutput @ 0x8093b60

/* __slang_filter__FlexLexer::LexerOutput(char const*, int) */

void __thiscall
__slang_filter__FlexLexer::LexerOutput(__slang_filter__FlexLexer *this,char *param_1,int param_2)

{
  std::ostream::write(*(ostream **)(this + 0x24),param_1,param_2);
  return;
}
```
