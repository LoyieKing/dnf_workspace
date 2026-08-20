# generate_locale

`_ZN5boost9gregorian15generate_localeERSt6localec`

`boost::gregorian::generate_locale(std::locale&, char)`

| 类 | 地址 |
|---|---|
| `boost::gregorian` | `0x087dcb80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dcb80  _ZN5boost9gregorian15generate_localeERSt6localec
#           boost::gregorian::generate_locale(std::locale&, char)
# range [0x087dcb80, 0x087dcbf9]
087dcb80 +0x00:  push   %ebp
087dcb81 +0x01:  mov    %esp,%ebp
087dcb83 +0x03:  push   %ebx
087dcb84 +0x04:  sub    $0x14,%esp
087dcb87 +0x07:  mov    0x8(%ebp),%ebx
087dcb8a +0x0a:  movl   $0x28,(%esp)
087dcb91 +0x11:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dcb96 +0x16:  movl   $0x0,0x4(%eax)
087dcb9d +0x1d:  movl   $&_ZTVN5boost9date_time18all_date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%eax)
087dcba3 +0x23:  movl   $&_ZN5boost9gregorianL17short_month_namesE,0x8(%eax)
087dcbaa +0x2a:  movl   $&_ZN5boost9gregorianL16long_month_namesE,0xc(%eax)
087dcbb1 +0x31:  movl   $&_ZN5boost9gregorianL19special_value_namesE,0x10(%eax)
087dcbb8 +0x38:  movl   $&_ZN5boost9gregorianL19short_weekday_namesE,0x14(%eax)
087dcbbf +0x3f:  movl   $&_ZN5boost9gregorianL18long_weekday_namesE,0x18(%eax)
087dcbc6 +0x46:  movl   $0x0,0x20(%eax)
087dcbcd +0x4d:  movl   $0x1,0x24(%eax)
087dcbd4 +0x54:  movb   $0x2d,0x1c(%eax)
087dcbd8 +0x58:  movb   $0x0,0x1d(%eax)
087dcbdc +0x5c:  mov    %eax,0x8(%esp)
087dcbe0 +0x60:  mov    0xc(%ebp),%eax
087dcbe3 +0x63:  mov    %ebx,(%esp)
087dcbe6 +0x66:  mov    %eax,0x4(%esp)
087dcbea +0x6a:  call   087dd790 <_ZN5boost9gregorian10greg_month17get_month_map_ptrEv+0xa30>  ; boost::gregorian::greg_month::get_month_map_ptr()+0xa30
087dcbef +0x6f:  mov    %ebx,%eax
087dcbf1 +0x71:  add    $0x14,%esp
087dcbf4 +0x74:  pop    %ebx
087dcbf5 +0x75:  pop    %ebp
087dcbf6 +0x76:  ret    $0x4
087dcbf9 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// boost::gregorian::generate_locale @ 0x87dcb80

/* boost::gregorian::generate_locale(std::locale&, char) */

locale * boost::gregorian::generate_locale(locale *param_1,char param_2)

{
  all_date_names_put *paVar1;
  undefined3 in_stack_00000009;
  
  paVar1 = operator_new(0x28);
  *(undefined4 *)(paVar1 + 4) = 0;
  *(undefined ***)paVar1 = &PTR__all_date_names_put_08de0be8;
  *(undefined ***)(paVar1 + 8) = &short_month_names;
  *(undefined ***)(paVar1 + 0xc) = &long_month_names;
  *(undefined1 **)(paVar1 + 0x10) = special_value_names;
  *(undefined1 **)(paVar1 + 0x14) = short_weekday_names;
  *(undefined1 **)(paVar1 + 0x18) = long_weekday_names;
  *(undefined4 *)(paVar1 + 0x20) = 0;
  *(undefined4 *)(paVar1 + 0x24) = 1;
  paVar1[0x1c] = (all_date_names_put)0x2d;
  paVar1[0x1d] = (all_date_names_put)0x0;
  std::locale::
  locale<boost::date_time::all_date_names_put<boost::gregorian::greg_facet_config,char,std::ostreambuf_iterator<char,std::char_traits<char>>>>
            (param_1,_param_2,paVar1);
  return param_1;
}
```
