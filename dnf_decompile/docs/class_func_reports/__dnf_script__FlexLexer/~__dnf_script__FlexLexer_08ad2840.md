# ~__dnf_script__FlexLexer

`_ZN23__dnf_script__FlexLexerD0Ev`

`__dnf_script__FlexLexer::~__dnf_script__FlexLexer()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2840  _ZN23__dnf_script__FlexLexerD0Ev
#           __dnf_script__FlexLexer::~__dnf_script__FlexLexer()
# range [0x08ad2840, 0x08ad285f]
08ad2840 +0x00:  push   %ebp
08ad2841 +0x01:  mov    %esp,%ebp
08ad2843 +0x03:  push   %ebx
08ad2844 +0x04:  sub    $0x14,%esp
08ad2847 +0x07:  mov    0x8(%ebp),%ebx
08ad284a +0x0a:  mov    %ebx,(%esp)
08ad284d +0x0d:  call   08ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>  ; __dnf_script__FlexLexer::~__dnf_script__FlexLexer()
08ad2852 +0x12:  mov    %ebx,0x8(%ebp)
08ad2855 +0x15:  add    $0x14,%esp
08ad2858 +0x18:  pop    %ebx
08ad2859 +0x19:  pop    %ebp
08ad285a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08ad285f +0x1f:  nop
```

## 反编译 C

```c
// __dnf_script__FlexLexer::~__dnf_script__FlexLexer @ 0x8ad2840

/* DWARF original prototype: void ~__dnf_script__FlexLexer(__dnf_script__FlexLexer * this, int
   __in_chrg) */

void __thiscall
__dnf_script__FlexLexer::~__dnf_script__FlexLexer(__dnf_script__FlexLexer *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~__dnf_script__FlexLexer(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
