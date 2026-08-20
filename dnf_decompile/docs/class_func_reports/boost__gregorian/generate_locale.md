# generate_locale

`_ZN5boost9gregorian15generate_localeERSt6localew`

`boost::gregorian::generate_locale(std::locale&, wchar_t)`

| 类 | 地址 |
|---|---|
| `boost::gregorian` | `0x087dcb00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dcb00  _ZN5boost9gregorian15generate_localeERSt6localew
#           boost::gregorian::generate_locale(std::locale&, wchar_t)
# range [0x087dcb00, 0x087dcb7f]
087dcb00 +0x00:  push   %ebp
087dcb01 +0x01:  mov    %esp,%ebp
087dcb03 +0x03:  push   %ebx
087dcb04 +0x04:  sub    $0x14,%esp
087dcb07 +0x07:  mov    0x8(%ebp),%ebx
087dcb0a +0x0a:  movl   $0x2c,(%esp)
087dcb11 +0x11:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dcb16 +0x16:  movl   $0x0,0x4(%eax)
087dcb1d +0x1d:  movl   $&_ZTVN5boost9date_time18all_date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%eax)
087dcb23 +0x23:  movl   $&_ZN5boost9gregorianL19w_short_month_namesE,0x8(%eax)
087dcb2a +0x2a:  movl   $&_ZN5boost9gregorianL18w_long_month_namesE,0xc(%eax)
087dcb31 +0x31:  movl   $&_ZN5boost9gregorianL21w_special_value_namesE,0x10(%eax)
087dcb38 +0x38:  movl   $&_ZN5boost9gregorianL21w_short_weekday_namesE,0x14(%eax)
087dcb3f +0x3f:  movl   $&_ZN5boost9gregorianL20w_long_weekday_namesE,0x18(%eax)
087dcb46 +0x46:  movl   $0x0,0x24(%eax)
087dcb4d +0x4d:  movl   $0x1,0x28(%eax)
087dcb54 +0x54:  movl   $0x2d,0x1c(%eax)
087dcb5b +0x5b:  movl   $0x0,0x20(%eax)
087dcb62 +0x62:  mov    %eax,0x8(%esp)
087dcb66 +0x66:  mov    0xc(%ebp),%eax
087dcb69 +0x69:  mov    %ebx,(%esp)
087dcb6c +0x6c:  mov    %eax,0x4(%esp)
087dcb70 +0x70:  call   087dd6e0 <_ZN5boost9gregorian10greg_month17get_month_map_ptrEv+0x980>  ; boost::gregorian::greg_month::get_month_map_ptr()+0x980
087dcb75 +0x75:  mov    %ebx,%eax
087dcb77 +0x77:  add    $0x14,%esp
087dcb7a +0x7a:  pop    %ebx
087dcb7b +0x7b:  pop    %ebp
087dcb7c +0x7c:  ret    $0x4
087dcb7f +0x7f:  nop
```

## 反编译 C

```c
// boost::gregorian::generate_locale @ 0x87dcb00

/* boost::gregorian::generate_locale(std::locale&, wchar_t) */

locale * boost::gregorian::generate_locale(locale *param_1,wchar_t param_2)

{
  all_date_names_put *paVar1;
  
  paVar1 = operator_new(0x2c);
  *(undefined4 *)(paVar1 + 4) = 0;
  *(undefined ***)paVar1 = &PTR__all_date_names_put_08de0948;
  *(undefined ***)(paVar1 + 8) = &w_short_month_names;
  *(undefined ***)(paVar1 + 0xc) = &w_long_month_names;
  *(undefined1 **)(paVar1 + 0x10) = w_special_value_names;
  *(undefined1 **)(paVar1 + 0x14) = w_short_weekday_names;
  *(undefined1 **)(paVar1 + 0x18) = w_long_weekday_names;
  *(undefined4 *)(paVar1 + 0x24) = 0;
  *(undefined4 *)(paVar1 + 0x28) = 1;
  *(undefined4 *)(paVar1 + 0x1c) = 0x2d;
  *(undefined4 *)(paVar1 + 0x20) = 0;
  std::locale::
  locale<boost::date_time::all_date_names_put<boost::gregorian::greg_facet_config,wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>>
            (param_1,(locale *)param_2,paVar1);
  return param_1;
}
```
