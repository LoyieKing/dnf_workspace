# system_category

`_ZSt15system_categoryv`

`std::system_category()`

| 类 | 地址 |
|---|---|
| `std` | `0x086df560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df560  _ZSt15system_categoryv
#           std::system_category()
# range [0x086df560, 0x086df56f]
086df560 +0x00:  push   %ebp
086df561 +0x01:  mov    $&_ZN12_GLOBAL__N_1L24system_category_instanceE,%eax
086df566 +0x06:  mov    %esp,%ebp
086df568 +0x08:  pop    %ebp
086df569 +0x09:  ret
086df56a +0x0a:  nop
086df56b +0x0b:  nop
086df56c +0x0c:  nop
086df56d +0x0d:  nop
086df56e +0x0e:  nop
086df56f +0x0f:  nop
```

## 反编译 C

```c
// std::system_category @ 0x86df560

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::system_category() */

undefined4 * std::system_category(void)

{
  return &::(anonymous_namespace)::system_category_instance;
}
```
