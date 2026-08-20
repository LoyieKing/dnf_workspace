# yylex

`_ZN23__dnf_script__FlexLexer5yylexEv`

`__dnf_script__FlexLexer::yylex()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1920  _ZN23__dnf_script__FlexLexer5yylexEv
#           __dnf_script__FlexLexer::yylex()
# range [0x08ad1920, 0x08ad193e]
08ad1920 +0x00:  push   %ebp
08ad1921 +0x01:  mov    %esp,%ebp
08ad1923 +0x03:  sub    $0x18,%esp
08ad1926 +0x06:  mov    0x8(%ebp),%eax
08ad1929 +0x09:  mov    (%eax),%edx
08ad192b +0x0b:  mov    %eax,(%esp)
08ad192e +0x0e:  movl   $"yyFlexLexer::yylex invoked but %option yyclass used",0x4(%esp)
08ad1936 +0x16:  call   *0x2c(%edx)
08ad1939 +0x19:  xor    %eax,%eax
08ad193b +0x1b:  leave
08ad193c +0x1c:  ret
08ad193d +0x1d:  nop
08ad193e +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yylex @ 0x8ad1920

/* DWARF original prototype: int yylex(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yylex(__dnf_script__FlexLexer *this)

{
  (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
            (this,"yyFlexLexer::yylex invoked but %option yyclass used");
  return 0;
}
```
