# CheckInventoryEquipmentEmptyCount

`_ZN7pc_room33CheckInventoryEquipmentEmptyCountER5CUseri`

`pc_room::CheckInventoryEquipmentEmptyCount(CUser&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271062` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271062  _ZN7pc_room33CheckInventoryEquipmentEmptyCountER5CUseri
#           pc_room::CheckInventoryEquipmentEmptyCount(CUser&, int)
# range [0x08271062, 0x0827108b]
08271062 +0x00:  push   %ebp
08271063 +0x01:  mov    %esp,%ebp
08271065 +0x03:  sub    $0x18,%esp
08271068 +0x06:  mov    0x8(%ebp),%eax
0827106b +0x09:  mov    %eax,(%esp)
0827106e +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08271073 +0x11:  mov    0xc(%ebp),%edx
08271076 +0x14:  mov    %edx,0x8(%esp)
0827107a +0x18:  movl   $0x1,0x4(%esp)
08271082 +0x20:  mov    %eax,(%esp)
08271085 +0x23:  call   08504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>  ; CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
0827108a +0x28:  leave
0827108b +0x29:  ret
```

## 反编译 C

```c
// pc_room::CheckInventoryEquipmentEmptyCount @ 0x8271062

/* pc_room::CheckInventoryEquipmentEmptyCount(CUser&, int) */

void pc_room::CheckInventoryEquipmentEmptyCount(CUser *param_1,int param_2)

{
  CInventory *pCVar1;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::check_empty_count(pCVar1,1,param_2);
  return;
}
```
