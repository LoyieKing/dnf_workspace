# ~generic_error_category

`_ZN12_GLOBAL__N_122generic_error_categoryD0Ev`

`(anonymous namespace)::generic_error_category::~generic_error_category()`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)::generic_error_category` | `0x086df6c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df6c0  _ZN12_GLOBAL__N_122generic_error_categoryD0Ev
#           (anonymous namespace)::generic_error_category::~generic_error_category()
# range [0x086df6c0, 0x086df6df]
086df6c0 +0x00:  push   %ebp
086df6c1 +0x01:  mov    %esp,%ebp
086df6c3 +0x03:  sub    $0x8,%esp
086df6c6 +0x06:  mov    0x8(%ebp),%eax
086df6c9 +0x09:  movl   $&_ZTVSt14error_category+0x8,(%eax)
086df6cf +0x0f:  leave
086df6d0 +0x10:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086df6d5 +0x15:  nop
086df6d6 +0x16:  nop
086df6d7 +0x17:  nop
086df6d8 +0x18:  nop
086df6d9 +0x19:  nop
086df6da +0x1a:  nop
086df6db +0x1b:  nop
086df6dc +0x1c:  nop
086df6dd +0x1d:  nop
086df6de +0x1e:  nop
086df6df +0x1f:  nop
```

## 反编译 C

```c
// ~generic_error_category @ 0x86df6c0

/* (anonymous namespace)::generic_error_category::~generic_error_category() */

void __thiscall
(anonymous_namespace)::generic_error_category::~generic_error_category(generic_error_category *this)

{
  *(undefined ***)this = &PTR__error_category_08cfe548;
  operator_delete(this);
  return;
}
```
