# _S_get_c_name

`_ZNSt6locale5facet13_S_get_c_nameEv`

`std::locale::facet::_S_get_c_name()`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x086dad90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dad90  _ZNSt6locale5facet13_S_get_c_nameEv
#           std::locale::facet::_S_get_c_name()
# range [0x086dad90, 0x086dad9f]
086dad90 +0x00:  push   %ebp
086dad91 +0x01:  mov    $&_ZNSt6locale5facet9_S_c_nameE,%eax
086dad96 +0x06:  mov    %esp,%ebp
086dad98 +0x08:  pop    %ebp
086dad99 +0x09:  ret
086dad9a +0x0a:  nop
086dad9b +0x0b:  nop
086dad9c +0x0c:  nop
086dad9d +0x0d:  nop
086dad9e +0x0e:  nop
086dad9f +0x0f:  nop
```

## 反编译 C

```c
// std::locale::facet::_S_get_c_name @ 0x86dad90

/* std::locale::facet::_S_get_c_name() */

undefined2 * std::locale::facet::_S_get_c_name(void)

{
  return &_S_c_name;
}
```
