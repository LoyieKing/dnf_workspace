# classic_table

`_ZNSt5ctypeIcE13classic_tableEv`

`std::ctype<char>::classic_table()`

| 类 | 地址 |
|---|---|
| `std::ctype<char>` | `0x08726d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726d80  _ZNSt5ctypeIcE13classic_tableEv
#           std::ctype<char>::classic_table()
# range [0x08726d80, 0x08726daf]
08726d80 +0x00:  push   %ebp
08726d81 +0x01:  mov    %esp,%ebp
08726d83 +0x03:  sub    $0x18,%esp
08726d86 +0x06:  call   086daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>  ; std::locale::facet::_S_get_c_locale()
08726d8b +0x0b:  mov    0x34(%eax),%eax
08726d8e +0x0e:  leave
08726d8f +0x0f:  ret
08726d90 +0x10:  cmp    $0xffffffff,%edx
08726d93 +0x13:  je     08726d9d <+0x1d>
08726d95 +0x15:  mov    %eax,(%esp)
08726d98 +0x18:  call   08ae3750 <_Unwind_Resume>
08726d9d +0x1d:  mov    %eax,(%esp)
08726da0 +0x20:  call   08723df0 <__cxa_call_unexpected>
08726da5 +0x25:  nop
08726da6 +0x26:  nop
08726da7 +0x27:  nop
08726da8 +0x28:  nop
08726da9 +0x29:  nop
08726daa +0x2a:  nop
08726dab +0x2b:  nop
08726dac +0x2c:  nop
08726dad +0x2d:  nop
08726dae +0x2e:  nop
08726daf +0x2f:  nop
```

## 反编译 C

```c
// std::ctype<char>::classic_table @ 0x8726d80

/* std::ctype<char>::classic_table() */

undefined4 std::ctype<char>::classic_table(void)

{
  int iVar1;
  
                    /* try { // try from 08726d86 to 08726d8a has its CatchHandler @ 08726d90 */
  iVar1 = locale::facet::_S_get_c_locale();
  return *(undefined4 *)(iVar1 + 0x34);
}
```
