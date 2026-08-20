# yy_top_state

`_ZN25__slang_filter__FlexLexer12yy_top_stateEv`

`__slang_filter__FlexLexer::yy_top_state()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094d24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094d24  _ZN25__slang_filter__FlexLexer12yy_top_stateEv
#           __slang_filter__FlexLexer::yy_top_state()
# range [0x08094d24, 0x08094d3f]
08094d24 +0x00:  push   %ebp
08094d25 +0x01:  mov    %esp,%ebp
08094d27 +0x03:  mov    0x8(%ebp),%eax
08094d2a +0x06:  mov    0x1c(%eax),%edx
08094d2d +0x09:  mov    0x8(%ebp),%eax
08094d30 +0x0c:  mov    0x14(%eax),%eax
08094d33 +0x0f:  sub    $0x1,%eax
08094d36 +0x12:  shl    $0x2,%eax
08094d39 +0x15:  lea    (%edx,%eax,1),%eax
08094d3c +0x18:  mov    (%eax),%eax
08094d3e +0x1a:  pop    %ebp
08094d3f +0x1b:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_top_state @ 0x8094d24

/* __slang_filter__FlexLexer::yy_top_state() */

undefined4 __thiscall __slang_filter__FlexLexer::yy_top_state(__slang_filter__FlexLexer *this)

{
  return *(undefined4 *)(*(int *)(this + 0x1c) + (*(int *)(this + 0x14) + -1) * 4);
}
```
