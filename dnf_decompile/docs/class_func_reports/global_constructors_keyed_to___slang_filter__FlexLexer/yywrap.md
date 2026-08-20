# yywrap

`_GLOBAL__I__ZN25__slang_filter__FlexLexer6yywrapEv`

`global constructors keyed to __slang_filter__FlexLexer::yywrap()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to __slang_filter__FlexLexer` | `0x08094df5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094df5  _GLOBAL__I__ZN25__slang_filter__FlexLexer6yywrapEv
#           global constructors keyed to __slang_filter__FlexLexer::yywrap()
# range [0x08094df5, 0x08094e63]
08094df5 +0x00:  push   %ebp
08094df6 +0x01:  mov    %esp,%ebp
08094df8 +0x03:  sub    $0x18,%esp
08094dfb +0x06:  movl   $0xffff,0x4(%esp)
08094e03 +0x0e:  movl   $0x1,(%esp)
08094e0a +0x15:  call   08094db5 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08094e0f +0x1a:  leave
08094e10 +0x1b:  ret
08094e11 +0x1c:  nop
08094e12 +0x1d:  push   %ebp
08094e13 +0x1e:  mov    %esp,%ebp
08094e15 +0x20:  sub    $0x18,%esp
08094e18 +0x23:  mov    0x8(%ebp),%eax
08094e1b +0x26:  movl   $&_ZTV9FlexLexer+0x8,(%eax)
08094e21 +0x2c:  mov    $0x0,%eax
08094e26 +0x31:  test   %al,%al
08094e28 +0x33:  je     08094e35 <+0x40>
08094e2a +0x35:  mov    0x8(%ebp),%eax
08094e2d +0x38:  mov    %eax,(%esp)
08094e30 +0x3b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08094e35 +0x40:  leave
08094e36 +0x41:  ret
08094e37 +0x42:  nop
08094e38 +0x43:  push   %ebp
08094e39 +0x44:  mov    %esp,%ebp
08094e3b +0x46:  sub    $0x18,%esp
08094e3e +0x49:  mov    0x8(%ebp),%eax
08094e41 +0x4c:  mov    %eax,(%esp)
08094e44 +0x4f:  call   08094e12 <+0x1d>
08094e49 +0x54:  mov    0x8(%ebp),%eax
08094e4c +0x57:  mov    %eax,(%esp)
08094e4f +0x5a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08094e54 +0x5f:  leave
08094e55 +0x60:  ret
08094e56 +0x61:  push   %ebp
08094e57 +0x62:  mov    %esp,%ebp
08094e59 +0x64:  mov    0x8(%ebp),%eax
08094e5c +0x67:  movl   $&_ZTV9FlexLexer+0x8,(%eax)
08094e62 +0x6d:  pop    %ebp
08094e63 +0x6e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8094df5

/* __slang_filter__FlexLexer::yywrap() */

void __slang_filter__FlexLexer::_GLOBAL__I_yywrap(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
