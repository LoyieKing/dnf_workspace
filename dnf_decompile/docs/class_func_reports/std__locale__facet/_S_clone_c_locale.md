# _S_clone_c_locale

`_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct`

`std::locale::facet::_S_clone_c_locale(__locale_struct*&)`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x08722b10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722b10  _ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct
#           std::locale::facet::_S_clone_c_locale(__locale_struct*&)
# range [0x08722b10, 0x08722b2f]
08722b10 +0x00:  push   %ebp
08722b11 +0x01:  mov    %esp,%ebp
08722b13 +0x03:  sub    $0x8,%esp
08722b16 +0x06:  mov    0x8(%ebp),%eax
08722b19 +0x09:  mov    (%eax),%eax
08722b1b +0x0b:  mov    %eax,0x8(%ebp)
08722b1e +0x0e:  leave
08722b1f +0x0f:  jmp    0807dd80 <_init+0x678>
08722b24 +0x14:  nop
08722b25 +0x15:  nop
08722b26 +0x16:  nop
08722b27 +0x17:  nop
08722b28 +0x18:  nop
08722b29 +0x19:  nop
08722b2a +0x1a:  nop
08722b2b +0x1b:  nop
08722b2c +0x1c:  nop
08722b2d +0x1d:  nop
08722b2e +0x1e:  nop
08722b2f +0x1f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_clone_c_locale @ 0x8722b10

/* std::locale::facet::_S_clone_c_locale(__locale_struct*&) */

void std::locale::facet::_S_clone_c_locale(__locale_struct **param_1)

{
  __duplocale();
  return;
}
```
