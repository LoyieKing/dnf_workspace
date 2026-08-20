# ~CompiledDNFLex

`_ZN14CompiledDNFLexD0Ev`

`CompiledDNFLex::~CompiledDNFLex()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0f20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0f20  _ZN14CompiledDNFLexD0Ev
#           CompiledDNFLex::~CompiledDNFLex()
# range [0x08ad0f20, 0x08ad0f3f]
08ad0f20 +0x00:  push   %ebp
08ad0f21 +0x01:  mov    %esp,%ebp
08ad0f23 +0x03:  push   %ebx
08ad0f24 +0x04:  sub    $0x14,%esp
08ad0f27 +0x07:  mov    0x8(%ebp),%ebx
08ad0f2a +0x0a:  mov    %ebx,(%esp)
08ad0f2d +0x0d:  call   08ad0ed0 <_ZN14CompiledDNFLexD1Ev>  ; CompiledDNFLex::~CompiledDNFLex()
08ad0f32 +0x12:  mov    %ebx,0x8(%ebp)
08ad0f35 +0x15:  add    $0x14,%esp
08ad0f38 +0x18:  pop    %ebx
08ad0f39 +0x19:  pop    %ebp
08ad0f3a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08ad0f3f +0x1f:  nop
```

## 反编译 C

```c
// CompiledDNFLex::~CompiledDNFLex @ 0x8ad0f20

/* DWARF original prototype: void ~CompiledDNFLex(CompiledDNFLex * this, int __in_chrg) */

void __thiscall CompiledDNFLex::~CompiledDNFLex(CompiledDNFLex *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~CompiledDNFLex(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
