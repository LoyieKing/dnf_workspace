# arad_stackable_verify

`_ZN4ARAD21arad_stackable_verifyEP10Inven_ItemPK5CItem`

`ARAD::arad_stackable_verify(Inven_Item*, CItem const*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819eae4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819eae4  _ZN4ARAD21arad_stackable_verifyEP10Inven_ItemPK5CItem
#           ARAD::arad_stackable_verify(Inven_Item*, CItem const*)
# range [0x0819eae4, 0x0819eaed]
0819eae4 +0x00:  push   %ebp
0819eae5 +0x01:  mov    %esp,%ebp
0819eae7 +0x03:  mov    $0xb0,%eax
0819eaec +0x08:  pop    %ebp
0819eaed +0x09:  ret
```

## 反编译 C

```c
// ARAD::arad_stackable_verify @ 0x819eae4

/* ARAD::arad_stackable_verify(Inven_Item*, CItem const*) */

undefined4 ARAD::arad_stackable_verify(Inven_Item *param_1,CItem *param_2)

{
  return 0xb0;
}
```
