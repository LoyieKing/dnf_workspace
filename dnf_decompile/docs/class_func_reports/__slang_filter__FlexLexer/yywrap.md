# yywrap

`_ZN25__slang_filter__FlexLexer6yywrapEv`

`__slang_filter__FlexLexer::yywrap()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x0808ecd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808ecd4  _ZN25__slang_filter__FlexLexer6yywrapEv
#           __slang_filter__FlexLexer::yywrap()
# range [0x0808ecd4, 0x0808ecdd]
0808ecd4 +0x00:  push   %ebp
0808ecd5 +0x01:  mov    %esp,%ebp
0808ecd7 +0x03:  mov    $0x1,%eax
0808ecdc +0x08:  pop    %ebp
0808ecdd +0x09:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yywrap @ 0x808ecd4

/* __slang_filter__FlexLexer::yywrap() */

undefined4 __slang_filter__FlexLexer::yywrap(void)

{
  return 1;
}
```
