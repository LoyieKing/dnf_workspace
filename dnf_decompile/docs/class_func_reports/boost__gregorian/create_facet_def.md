# create_facet_def

`_ZN5boost9gregorian16create_facet_defEw`

`boost::gregorian::create_facet_def(wchar_t)`

| 类 | 地址 |
|---|---|
| `boost::gregorian` | `0x087dca40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dca40  _ZN5boost9gregorian16create_facet_defEw
#           boost::gregorian::create_facet_def(wchar_t)
# range [0x087dca40, 0x087dca9f]
087dca40 +0x00:  push   %ebp
087dca41 +0x01:  mov    %esp,%ebp
087dca43 +0x03:  sub    $0x18,%esp
087dca46 +0x06:  movl   $0x2c,(%esp)
087dca4d +0x0d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dca52 +0x12:  movl   $0x0,0x4(%eax)
087dca59 +0x19:  movl   $&_ZTVN5boost9date_time18all_date_names_putINS_9gregorian17greg_facet_configEwSt19ostreambuf_iteratorIwSt11char_traitsIwEEEE+0x8,(%eax)
087dca5f +0x1f:  movl   $&_ZN5boost9gregorianL19w_short_month_namesE,0x8(%eax)
087dca66 +0x26:  movl   $&_ZN5boost9gregorianL18w_long_month_namesE,0xc(%eax)
087dca6d +0x2d:  movl   $&_ZN5boost9gregorianL21w_special_value_namesE,0x10(%eax)
087dca74 +0x34:  movl   $&_ZN5boost9gregorianL21w_short_weekday_namesE,0x14(%eax)
087dca7b +0x3b:  movl   $&_ZN5boost9gregorianL20w_long_weekday_namesE,0x18(%eax)
087dca82 +0x42:  movl   $0x0,0x24(%eax)
087dca89 +0x49:  movl   $0x1,0x28(%eax)
087dca90 +0x50:  movl   $0x2d,0x1c(%eax)
087dca97 +0x57:  movl   $0x0,0x20(%eax)
087dca9e +0x5e:  leave
087dca9f +0x5f:  ret
```

## 反编译 C

```c
// boost::gregorian::create_facet_def @ 0x87dca40

/* boost::gregorian::create_facet_def(wchar_t) */

void boost::gregorian::create_facet_def(wchar_t param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  puVar1[1] = 0;
  *puVar1 = &PTR__all_date_names_put_08de0948;
  puVar1[2] = &w_short_month_names;
  puVar1[3] = &w_long_month_names;
  puVar1[4] = w_special_value_names;
  puVar1[5] = w_short_weekday_names;
  puVar1[6] = w_long_weekday_names;
  puVar1[9] = 0;
  puVar1[10] = 1;
  puVar1[7] = 0x2d;
  puVar1[8] = 0;
  return;
}
```
