# ~generic_error_category

`_ZN12_GLOBAL__N_122generic_error_categoryD1Ev`

`(anonymous namespace)::generic_error_category::~generic_error_category()`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)::generic_error_category` | `0x086df660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df660  _ZN12_GLOBAL__N_122generic_error_categoryD1Ev
#           (anonymous namespace)::generic_error_category::~generic_error_category()
# range [0x086df660, 0x086df66f]
086df660 +0x00:  push   %ebp
086df661 +0x01:  mov    %esp,%ebp
086df663 +0x03:  mov    0x8(%ebp),%eax
086df666 +0x06:  movl   $&_ZTVSt14error_category+0x8,(%eax)
086df66c +0x0c:  pop    %ebp
086df66d +0x0d:  ret
086df66e +0x0e:  nop
086df66f +0x0f:  nop
```

## 反编译 C

```c
// ~generic_error_category @ 0x86df660

/* (anonymous namespace)::generic_error_category::~generic_error_category() */

void __thiscall
(anonymous_namespace)::generic_error_category::~generic_error_category(generic_error_category *this)

{
  *(undefined ***)this = &PTR__error_category_08cfe548;
  return;
}
```
