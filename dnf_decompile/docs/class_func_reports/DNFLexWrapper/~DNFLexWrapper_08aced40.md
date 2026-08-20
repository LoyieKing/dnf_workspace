# ~DNFLexWrapper

`_ZN13DNFLexWrapperD0Ev`

`DNFLexWrapper::~DNFLexWrapper()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08aced40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aced40  _ZN13DNFLexWrapperD0Ev
#           DNFLexWrapper::~DNFLexWrapper()
# range [0x08aced40, 0x08aced5f]
08aced40 +0x00:  push   %ebp
08aced41 +0x01:  mov    %esp,%ebp
08aced43 +0x03:  push   %ebx
08aced44 +0x04:  sub    $0x14,%esp
08aced47 +0x07:  mov    0x8(%ebp),%ebx
08aced4a +0x0a:  mov    %ebx,(%esp)
08aced4d +0x0d:  call   08acecf0 <_ZN13DNFLexWrapperD1Ev>  ; DNFLexWrapper::~DNFLexWrapper()
08aced52 +0x12:  mov    %ebx,0x8(%ebp)
08aced55 +0x15:  add    $0x14,%esp
08aced58 +0x18:  pop    %ebx
08aced59 +0x19:  pop    %ebp
08aced5a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08aced5f +0x1f:  nop
```

## 反编译 C

```c
// DNFLexWrapper::~DNFLexWrapper @ 0x8aced40

/* DWARF original prototype: void ~DNFLexWrapper(DNFLexWrapper * this, int __in_chrg) */

void __thiscall DNFLexWrapper::~DNFLexWrapper(DNFLexWrapper *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~DNFLexWrapper(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
