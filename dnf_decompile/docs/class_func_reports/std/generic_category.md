# generic_category

`_ZSt16generic_categoryv`

`std::generic_category()`

| 类 | 地址 |
|---|---|
| `std` | `0x086df570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df570  _ZSt16generic_categoryv
#           std::generic_category()
# range [0x086df570, 0x086df57f]
086df570 +0x00:  push   %ebp
086df571 +0x01:  mov    $&_ZN12_GLOBAL__N_1L25generic_category_instanceE,%eax
086df576 +0x06:  mov    %esp,%ebp
086df578 +0x08:  pop    %ebp
086df579 +0x09:  ret
086df57a +0x0a:  nop
086df57b +0x0b:  nop
086df57c +0x0c:  nop
086df57d +0x0d:  nop
086df57e +0x0e:  nop
086df57f +0x0f:  nop
```

## 反编译 C

```c
// std::generic_category @ 0x86df570

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::generic_category() */

undefined4 * std::generic_category(void)

{
  return &::(anonymous_namespace)::generic_category_instance;
}
```
