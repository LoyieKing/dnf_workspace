# ~SlangFilter

`_ZN11SlangFilterD1Ev`

`SlangFilter::~SlangFilter()`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x08094ea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094ea4  _ZN11SlangFilterD1Ev
#           SlangFilter::~SlangFilter()
# range [0x08094ea4, 0x08094ed3]
08094ea4 +0x00:  push   %ebp
08094ea5 +0x01:  mov    %esp,%ebp
08094ea7 +0x03:  sub    $0x18,%esp
08094eaa +0x06:  mov    0x8(%ebp),%eax
08094ead +0x09:  movl   $&_ZTV11SlangFilter+0x8,(%eax)
08094eb3 +0x0f:  mov    0x8(%ebp),%eax
08094eb6 +0x12:  mov    %eax,(%esp)
08094eb9 +0x15:  call   0809391a <_ZN25__slang_filter__FlexLexerD1Ev>  ; __slang_filter__FlexLexer::~__slang_filter__FlexLexer()
08094ebe +0x1a:  mov    $0x0,%eax
08094ec3 +0x1f:  test   %al,%al
08094ec5 +0x21:  je     08094ed2 <+0x2e>
08094ec7 +0x23:  mov    0x8(%ebp),%eax
08094eca +0x26:  mov    %eax,(%esp)
08094ecd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08094ed2 +0x2e:  leave
08094ed3 +0x2f:  ret
```

## 反编译 C

```c
// SlangFilter::~SlangFilter @ 0x8094ea4

/* WARNING: Removing unreachable block (ram,0x08094ec7) */
/* SlangFilter::~SlangFilter() */

void __thiscall SlangFilter::~SlangFilter(SlangFilter *this)

{
  *(undefined ***)this = &PTR__SlangFilter_08b123e8;
  __slang_filter__FlexLexer::~__slang_filter__FlexLexer((__slang_filter__FlexLexer *)this);
  return;
}
```
