# locale

`_ZNSt6localeC1EPNS_5_ImplE`

`std::locale::locale(std::locale::_Impl*)`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dad80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dad80  _ZNSt6localeC1EPNS_5_ImplE
#           std::locale::locale(std::locale::_Impl*)
# range [0x086dad80, 0x086dad8f]
086dad80 +0x00:  push   %ebp
086dad81 +0x01:  mov    %esp,%ebp
086dad83 +0x03:  mov    0xc(%ebp),%edx
086dad86 +0x06:  mov    0x8(%ebp),%eax
086dad89 +0x09:  mov    %edx,(%eax)
086dad8b +0x0b:  pop    %ebp
086dad8c +0x0c:  ret
086dad8d +0x0d:  nop
086dad8e +0x0e:  nop
086dad8f +0x0f:  nop
```

## 反编译 C

```c
// std::locale::locale @ 0x86dad80

/* std::locale::locale(std::locale::_Impl*) */

void __thiscall std::locale::locale(locale *this,_Impl *param_1)

{
  this->_M_impl = param_1;
  return;
}
```
