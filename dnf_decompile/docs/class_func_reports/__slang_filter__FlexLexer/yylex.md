# yylex

`_ZN25__slang_filter__FlexLexer5yylexEv`

`__slang_filter__FlexLexer::yylex()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x0808ecde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808ecde  _ZN25__slang_filter__FlexLexer5yylexEv
#           __slang_filter__FlexLexer::yylex()
# range [0x0808ecde, 0x0808ed05]
0808ecde +0x00:  push   %ebp
0808ecdf +0x01:  mov    %esp,%ebp
0808ece1 +0x03:  sub    $0x18,%esp
0808ece4 +0x06:  mov    0x8(%ebp),%eax
0808ece7 +0x09:  mov    (%eax),%eax
0808ece9 +0x0b:  add    $0x2c,%eax
0808ecec +0x0e:  mov    (%eax),%edx
0808ecee +0x10:  movl   $"yyFlexLexer::yylex invoked but %option yyclass used",0x4(%esp)
0808ecf6 +0x18:  mov    0x8(%ebp),%eax
0808ecf9 +0x1b:  mov    %eax,(%esp)
0808ecfc +0x1e:  call   *%edx
0808ecfe +0x20:  mov    $0x0,%eax
0808ed03 +0x25:  leave
0808ed04 +0x26:  ret
0808ed05 +0x27:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yylex @ 0x808ecde

/* __slang_filter__FlexLexer::yylex() */

undefined4 __thiscall __slang_filter__FlexLexer::yylex(__slang_filter__FlexLexer *this)

{
  (**(code **)(*(int *)this + 0x2c))(this,"yyFlexLexer::yylex invoked but %option yyclass used");
  return 0;
}
```
