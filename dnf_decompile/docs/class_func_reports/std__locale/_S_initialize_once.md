# _S_initialize_once

`_ZNSt6locale18_S_initialize_onceEv`

`std::locale::_S_initialize_once()`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dcdc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dcdc0  _ZNSt6locale18_S_initialize_onceEv
#           std::locale::_S_initialize_once()
# range [0x086dcdc0, 0x086dcdef]
086dcdc0 +0x00:  push   %ebp
086dcdc1 +0x01:  mov    %esp,%ebp
086dcdc3 +0x03:  sub    $0x18,%esp
086dcdc6 +0x06:  movl   $0x2,0x4(%esp)
086dcdce +0x0e:  movl   $&_ZN12_GLOBAL__N_113c_locale_implE,(%esp)
086dcdd5 +0x15:  call   086dbdf0 <_ZNSt6locale5_ImplC1Ej>  ; std::locale::_Impl::_Impl(unsigned int)
086dcdda +0x1a:  movl   $&_ZN12_GLOBAL__N_113c_locale_implE,&_ZNSt6locale10_S_classicE
086dcde4 +0x24:  movl   $&_ZN12_GLOBAL__N_113c_locale_implE,&_ZNSt6locale9_S_globalE
086dcdee +0x2e:  leave
086dcdef +0x2f:  ret
```

## 反编译 C

```c
// std::locale::_S_initialize_once @ 0x86dcdc0

/* std::locale::_S_initialize_once() */

void std::locale::_S_initialize_once(void)

{
  _Impl::_Impl((_Impl *)::(anonymous_namespace)::c_locale_impl,2);
  _S_classic = ::(anonymous_namespace)::c_locale_impl;
  _S_global = ::(anonymous_namespace)::c_locale_impl;
  return;
}
```
