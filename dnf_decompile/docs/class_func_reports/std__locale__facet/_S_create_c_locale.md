# _S_create_c_locale

`_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_`

`std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*)`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x08722b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722b60  _ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_
#           std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*)
# range [0x08722b60, 0x08722b9f]
08722b60 +0x00:  push   %ebp
08722b61 +0x01:  mov    %esp,%ebp
08722b63 +0x03:  sub    $0x18,%esp
08722b66 +0x06:  mov    0x10(%ebp),%eax
08722b69 +0x09:  movl   $0x40,(%esp)
08722b70 +0x10:  mov    %eax,0x8(%esp)
08722b74 +0x14:  mov    0xc(%ebp),%eax
08722b77 +0x17:  mov    %eax,0x4(%esp)
08722b7b +0x1b:  call   0807e790 <_init+0x1088>
08722b80 +0x20:  mov    0x8(%ebp),%edx
08722b83 +0x23:  test   %eax,%eax
08722b85 +0x25:  mov    %eax,(%edx)
08722b87 +0x27:  je     08722b8b <+0x2b>
08722b89 +0x29:  leave
08722b8a +0x2a:  ret
08722b8b +0x2b:  movl   $"locale::facet::_S_create_c_locale name not valid",(%esp)
08722b92 +0x32:  call   086d9aa0 <_ZSt21__throw_runtime_errorPKc>  ; std::__throw_runtime_error(char const*)
08722b97 +0x37:  nop
08722b98 +0x38:  nop
08722b99 +0x39:  nop
08722b9a +0x3a:  nop
08722b9b +0x3b:  nop
08722b9c +0x3c:  nop
08722b9d +0x3d:  nop
08722b9e +0x3e:  nop
08722b9f +0x3f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_create_c_locale @ 0x8722b60

/* std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*) */

void std::locale::facet::_S_create_c_locale
               (__locale_struct **param_1,char *param_2,__locale_struct *param_3)

{
  __locale_struct *p_Var1;
  
  p_Var1 = (__locale_struct *)__newlocale(0x40,param_2,param_3);
  *param_1 = p_Var1;
  if (p_Var1 != (__locale_struct *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::facet::_S_create_c_locale name not valid");
}
```
