# _S_destroy_c_locale

`_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct`

`std::locale::facet::_S_destroy_c_locale(__locale_struct*&)`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x08722b30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722b30  _ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct
#           std::locale::facet::_S_destroy_c_locale(__locale_struct*&)
# range [0x08722b30, 0x08722b5f]
08722b30 +0x00:  push   %ebp
08722b31 +0x01:  mov    %esp,%ebp
08722b33 +0x03:  push   %ebx
08722b34 +0x04:  sub    $0x4,%esp
08722b37 +0x07:  mov    0x8(%ebp),%ebx
08722b3a +0x0a:  mov    (%ebx),%eax
08722b3c +0x0c:  test   %eax,%eax
08722b3e +0x0e:  je     08722b58 <+0x28>
08722b40 +0x10:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08722b45 +0x15:  mov    (%ebx),%edx
08722b47 +0x17:  cmp    %edx,%eax
08722b49 +0x19:  je     08722b58 <+0x28>
08722b4b +0x1b:  mov    %edx,0x8(%ebp)
08722b4e +0x1e:  add    $0x4,%esp
08722b51 +0x21:  pop    %ebx
08722b52 +0x22:  pop    %ebp
08722b53 +0x23:  jmp    0807e660 <_init+0xf58>
08722b58 +0x28:  add    $0x4,%esp
08722b5b +0x2b:  pop    %ebx
08722b5c +0x2c:  pop    %ebp
08722b5d +0x2d:  ret
08722b5e +0x2e:  nop
08722b5f +0x2f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_destroy_c_locale @ 0x8722b30

/* std::locale::facet::_S_destroy_c_locale(__locale_struct*&) */

void std::locale::facet::_S_destroy_c_locale(__locale_struct **param_1)

{
  __locale_struct *p_Var1;
  
  if (*param_1 != (__locale_struct *)0x0) {
    p_Var1 = (__locale_struct *)_S_get_c_locale();
    if (p_Var1 != *param_1) {
      __freelocale();
      return;
    }
  }
  return;
}
```
