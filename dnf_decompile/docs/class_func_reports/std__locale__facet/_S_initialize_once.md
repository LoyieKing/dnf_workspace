# _S_initialize_once

`_ZNSt6locale5facet18_S_initialize_onceEv`

`std::locale::facet::_S_initialize_once()`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x086daf10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086daf10  _ZNSt6locale5facet18_S_initialize_onceEv
#           std::locale::facet::_S_initialize_once()
# range [0x086daf10, 0x086daf3f]
086daf10 +0x00:  push   %ebp
086daf11 +0x01:  mov    %esp,%ebp
086daf13 +0x03:  sub    $0x18,%esp
086daf16 +0x06:  movl   $0x0,0x8(%esp)
086daf1e +0x0e:  movl   $&_ZNSt6locale5facet9_S_c_nameE,0x4(%esp)
086daf26 +0x16:  movl   $&_ZNSt6locale5facet11_S_c_localeE,(%esp)
086daf2d +0x1d:  call   08722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>  ; std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*)
086daf32 +0x22:  leave
086daf33 +0x23:  ret
086daf34 +0x24:  nop
086daf35 +0x25:  nop
086daf36 +0x26:  nop
086daf37 +0x27:  nop
086daf38 +0x28:  nop
086daf39 +0x29:  nop
086daf3a +0x2a:  nop
086daf3b +0x2b:  nop
086daf3c +0x2c:  nop
086daf3d +0x2d:  nop
086daf3e +0x2e:  nop
086daf3f +0x2f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_initialize_once @ 0x86daf10

/* std::locale::facet::_S_initialize_once() */

void std::locale::facet::_S_initialize_once(void)

{
  _S_create_c_locale((__locale_struct **)&_S_c_locale,"C",(__locale_struct *)0x0);
  return;
}
```
