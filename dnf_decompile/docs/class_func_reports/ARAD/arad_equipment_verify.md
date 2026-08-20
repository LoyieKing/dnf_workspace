# arad_equipment_verify

`_ZN4ARAD21arad_equipment_verifyEP10Inven_ItemPK5CItemN9ARAD_TYPE14INVENTORY_TYPEE`

`ARAD::arad_equipment_verify(Inven_Item*, CItem const*, ARAD_TYPE::INVENTORY_TYPE)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819eaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819eaee  _ZN4ARAD21arad_equipment_verifyEP10Inven_ItemPK5CItemN9ARAD_TYPE14INVENTORY_TYPEE
#           ARAD::arad_equipment_verify(Inven_Item*, CItem const*, ARAD_TYPE::INVENTORY_TYPE)
# range [0x0819eaee, 0x0819eaf7]
0819eaee +0x00:  push   %ebp
0819eaef +0x01:  mov    %esp,%ebp
0819eaf1 +0x03:  mov    $0x0,%eax
0819eaf6 +0x08:  pop    %ebp
0819eaf7 +0x09:  ret
```

## 反编译 C

```c
// ARAD::arad_equipment_verify @ 0x819eaee

/* ARAD::arad_equipment_verify(Inven_Item*, CItem const*, ARAD_TYPE::INVENTORY_TYPE) */

undefined4 ARAD::arad_equipment_verify(void)

{
  return 0;
}
```
