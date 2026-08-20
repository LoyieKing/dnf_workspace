# ~__slang_filter__FlexLexer

`_ZN25__slang_filter__FlexLexerD0Ev`

`__slang_filter__FlexLexer::~__slang_filter__FlexLexer()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080939d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080939d6  _ZN25__slang_filter__FlexLexerD0Ev
#           __slang_filter__FlexLexer::~__slang_filter__FlexLexer()
# range [0x080939d6, 0x080939f3]
080939d6 +0x00:  push   %ebp
080939d7 +0x01:  mov    %esp,%ebp
080939d9 +0x03:  sub    $0x18,%esp
080939dc +0x06:  mov    0x8(%ebp),%eax
080939df +0x09:  mov    %eax,(%esp)
080939e2 +0x0c:  call   0809391a <_ZN25__slang_filter__FlexLexerD1Ev>  ; __slang_filter__FlexLexer::~__slang_filter__FlexLexer()
080939e7 +0x11:  mov    0x8(%ebp),%eax
080939ea +0x14:  mov    %eax,(%esp)
080939ed +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080939f2 +0x1c:  leave
080939f3 +0x1d:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::~__slang_filter__FlexLexer @ 0x80939d6

/* __slang_filter__FlexLexer::~__slang_filter__FlexLexer() */

void __thiscall
__slang_filter__FlexLexer::~__slang_filter__FlexLexer(__slang_filter__FlexLexer *this)

{
  ~__slang_filter__FlexLexer(this);
  operator_delete(this);
  return;
}
```
