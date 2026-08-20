# ~DNFLex

`_ZN6DNFLexD0Ev`

`DNFLex::~DNFLex()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd7b0  _ZN6DNFLexD0Ev
#           DNFLex::~DNFLex()
# range [0x08acd7b0, 0x08acd7cf]
08acd7b0 +0x00:  push   %ebp
08acd7b1 +0x01:  mov    %esp,%ebp
08acd7b3 +0x03:  push   %ebx
08acd7b4 +0x04:  sub    $0x14,%esp
08acd7b7 +0x07:  mov    0x8(%ebp),%ebx
08acd7ba +0x0a:  mov    %ebx,(%esp)
08acd7bd +0x0d:  call   08acd5f0 <_ZN6DNFLexD1Ev>  ; DNFLex::~DNFLex()
08acd7c2 +0x12:  mov    %ebx,0x8(%ebp)
08acd7c5 +0x15:  add    $0x14,%esp
08acd7c8 +0x18:  pop    %ebx
08acd7c9 +0x19:  pop    %ebp
08acd7ca +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08acd7cf +0x1f:  nop
```

## 反编译 C

```c
// DNFLex::~DNFLex @ 0x8acd7b0

/* DWARF original prototype: void ~DNFLex(DNFLex * this, int __in_chrg) */

void __thiscall DNFLex::~DNFLex(DNFLex *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~DNFLex(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
