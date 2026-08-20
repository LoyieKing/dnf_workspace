# ~system_error_category

`_ZN12_GLOBAL__N_121system_error_categoryD1Ev`

`(anonymous namespace)::system_error_category::~system_error_category()`

| 类 | 地址 |
|---|---|
| `(anonymous namespace)::system_error_category` | `0x086df670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df670  _ZN12_GLOBAL__N_121system_error_categoryD1Ev
#           (anonymous namespace)::system_error_category::~system_error_category()
# range [0x086df670, 0x086df69f]
086df670 +0x00:  push   %ebp
086df671 +0x01:  mov    %esp,%ebp
086df673 +0x03:  mov    0x8(%ebp),%eax
086df676 +0x06:  movl   $&_ZTVSt14error_category+0x8,(%eax)
086df67c +0x0c:  pop    %ebp
086df67d +0x0d:  ret
086df67e +0x0e:  nop
086df67f +0x0f:  nop
086df680 +0x10:  push   %ebp
086df681 +0x11:  mov    %esp,%ebp
086df683 +0x13:  sub    $0x8,%esp
086df686 +0x16:  mov    0x8(%ebp),%eax
086df689 +0x19:  movl   $&_ZTVSt14error_category+0x8,(%eax)
086df68f +0x1f:  leave
086df690 +0x20:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086df695 +0x25:  nop
086df696 +0x26:  nop
086df697 +0x27:  nop
086df698 +0x28:  nop
086df699 +0x29:  nop
086df69a +0x2a:  nop
086df69b +0x2b:  nop
086df69c +0x2c:  nop
086df69d +0x2d:  nop
086df69e +0x2e:  nop
086df69f +0x2f:  nop
```

## 反编译 C

```c
// ~system_error_category @ 0x86df670

/* (anonymous namespace)::system_error_category::~system_error_category() */

void __thiscall
(anonymous_namespace)::system_error_category::~system_error_category(system_error_category *this)

{
  *(undefined ***)this = &PTR__error_category_08cfe548;
  return;
}
```
