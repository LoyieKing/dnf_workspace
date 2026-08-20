# set_charset_name_option

`_ZN5MySQL23set_charset_name_optionEv`

`MySQL::set_charset_name_option()`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f3c02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f3c02  _ZN5MySQL23set_charset_name_optionEv
#           MySQL::set_charset_name_option()
# range [0x083f3c02, 0x083f3c0b]
083f3c02 +0x00:  push   %ebp
083f3c03 +0x01:  mov    %esp,%ebp
083f3c05 +0x03:  mov    $0x1,%eax
083f3c0a +0x08:  pop    %ebp
083f3c0b +0x09:  ret
```

## 反编译 C

```c
// MySQL::set_charset_name_option @ 0x83f3c02

/* MySQL::set_charset_name_option() */

undefined4 MySQL::set_charset_name_option(void)

{
  return 1;
}
```
