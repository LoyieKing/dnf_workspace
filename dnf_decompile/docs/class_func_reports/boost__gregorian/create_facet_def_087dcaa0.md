# create_facet_def

`_ZN5boost9gregorian16create_facet_defEc`

`boost::gregorian::create_facet_def(char)`

| 类 | 地址 |
|---|---|
| `boost::gregorian` | `0x087dcaa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dcaa0  _ZN5boost9gregorian16create_facet_defEc
#           boost::gregorian::create_facet_def(char)
# range [0x087dcaa0, 0x087dcafa]
087dcaa0 +0x00:  push   %ebp
087dcaa1 +0x01:  mov    %esp,%ebp
087dcaa3 +0x03:  sub    $0x18,%esp
087dcaa6 +0x06:  movl   $0x28,(%esp)
087dcaad +0x0d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
087dcab2 +0x12:  movl   $0x0,0x4(%eax)
087dcab9 +0x19:  movl   $&_ZTVN5boost9date_time18all_date_names_putINS_9gregorian17greg_facet_configEcSt19ostreambuf_iteratorIcSt11char_traitsIcEEEE+0x8,(%eax)
087dcabf +0x1f:  movl   $&_ZN5boost9gregorianL17short_month_namesE,0x8(%eax)
087dcac6 +0x26:  movl   $&_ZN5boost9gregorianL16long_month_namesE,0xc(%eax)
087dcacd +0x2d:  movl   $&_ZN5boost9gregorianL19special_value_namesE,0x10(%eax)
087dcad4 +0x34:  movl   $&_ZN5boost9gregorianL19short_weekday_namesE,0x14(%eax)
087dcadb +0x3b:  movl   $&_ZN5boost9gregorianL18long_weekday_namesE,0x18(%eax)
087dcae2 +0x42:  movl   $0x0,0x20(%eax)
087dcae9 +0x49:  movl   $0x1,0x24(%eax)
087dcaf0 +0x50:  movb   $0x2d,0x1c(%eax)
087dcaf4 +0x54:  movb   $0x0,0x1d(%eax)
087dcaf8 +0x58:  leave
087dcaf9 +0x59:  ret
087dcafa +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// boost::gregorian::create_facet_def @ 0x87dcaa0

/* boost::gregorian::create_facet_def(char) */

void boost::gregorian::create_facet_def(char param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  puVar1[1] = 0;
  *puVar1 = &PTR__all_date_names_put_08de0be8;
  puVar1[2] = &short_month_names;
  puVar1[3] = &long_month_names;
  puVar1[4] = special_value_names;
  puVar1[5] = short_weekday_names;
  puVar1[6] = long_weekday_names;
  puVar1[8] = 0;
  puVar1[9] = 1;
  *(undefined1 *)(puVar1 + 7) = 0x2d;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}
```
