# classic

`_ZNSt6locale7classicEv`

`std::locale::classic()`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dce30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dce30  _ZNSt6locale7classicEv
#           std::locale::classic()
# range [0x086dce30, 0x086dce5f]
086dce30 +0x00:  push   %ebp
086dce31 +0x01:  mov    %esp,%ebp
086dce33 +0x03:  sub    $0x18,%esp
086dce36 +0x06:  call   086dcdf0 <_ZNSt6locale13_S_initializeEv>  ; std::locale::_S_initialize()
086dce3b +0x0b:  mov    &_ZNSt6locale10_S_classicE,%eax
086dce40 +0x10:  movl   $&_ZN12_GLOBAL__N_18c_localeE,(%esp)
086dce47 +0x17:  mov    %eax,0x4(%esp)
086dce4b +0x1b:  call   086dad80 <_ZNSt6localeC1EPNS_5_ImplE>  ; std::locale::locale(std::locale::_Impl*)
086dce50 +0x20:  mov    $&_ZN12_GLOBAL__N_18c_localeE,%eax
086dce55 +0x25:  leave
086dce56 +0x26:  ret
086dce57 +0x27:  nop
086dce58 +0x28:  nop
086dce59 +0x29:  nop
086dce5a +0x2a:  nop
086dce5b +0x2b:  nop
086dce5c +0x2c:  nop
086dce5d +0x2d:  nop
086dce5e +0x2e:  nop
086dce5f +0x2f:  nop
```

## 反编译 C

```c
// std::locale::classic @ 0x86dce30

/* std::locale::classic() */

undefined4 * std::locale::classic(void)

{
  _S_initialize();
  locale((locale *)&::(anonymous_namespace)::c_locale,_S_classic);
  return &::(anonymous_namespace)::c_locale;
}
```
