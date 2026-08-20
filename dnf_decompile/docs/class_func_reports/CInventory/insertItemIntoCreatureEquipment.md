# insertItemIntoCreatureEquipment

`_ZN10CInventory31insertItemIntoCreatureEquipmentE10Inven_Item14eItemAddReasonb`

`CInventory::insertItemIntoCreatureEquipment(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a762  _ZN10CInventory31insertItemIntoCreatureEquipmentE10Inven_Item14eItemAddReasonb
#           CInventory::insertItemIntoCreatureEquipment(Inven_Item, eItemAddReason, bool)
# range [0x0850a762, 0x0850a7c3]
0850a762 +0x00:  push   %ebp
0850a763 +0x01:  mov    %esp,%ebp
0850a765 +0x03:  sub    $0x38,%esp
0850a768 +0x06:  mov    0x50(%ebp),%eax
0850a76b +0x09:  mov    %al,-0x1c(%ebp)
0850a76e +0x0c:  mov    0xe(%ebp),%eax
0850a771 +0x0f:  test   %eax,%eax
0850a773 +0x11:  jne    0850a77c <+0x1a>
0850a775 +0x13:  mov    $0xffffffff,%eax
0850a77a +0x18:  jmp    0850a7c1 <+0x5f>
0850a77c +0x1a:  lea    0xc(%ebp),%eax
0850a77f +0x1d:  mov    %eax,0x4(%esp)
0850a783 +0x21:  mov    0x8(%ebp),%eax
0850a786 +0x24:  mov    %eax,(%esp)
0850a789 +0x27:  call   0850a436 <_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item>  ; CInventory::GetEmptyCreatureSlot(Inven_Item&) const
0850a78e +0x2c:  mov    %eax,-0xc(%ebp)
0850a791 +0x2f:  cmpl   $0x0,-0xc(%ebp)
0850a795 +0x33:  jns    0850a79e <+0x3c>
0850a797 +0x35:  mov    $0xffffffff,%eax
0850a79c +0x3a:  jmp    0850a7c1 <+0x5f>
0850a79e +0x3c:  mov    0x8(%ebp),%eax
0850a7a1 +0x3f:  mov    0x6e4(%eax),%edx
0850a7a7 +0x45:  mov    -0xc(%ebp),%eax
0850a7aa +0x48:  imul   $0x3d,%eax,%eax
0850a7ad +0x4b:  add    %eax,%edx
0850a7af +0x4d:  lea    0xc(%ebp),%eax
0850a7b2 +0x50:  mov    %eax,0x4(%esp)
0850a7b6 +0x54:  mov    %edx,(%esp)
0850a7b9 +0x57:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850a7be +0x5c:  mov    -0xc(%ebp),%eax
0850a7c1 +0x5f:  leave
0850a7c2 +0x60:  ret
0850a7c3 +0x61:  nop
```

## 反编译 C

```c
// CInventory::insertItemIntoCreatureEquipment @ 0x850a762

/* CInventory::insertItemIntoCreatureEquipment(Inven_Item, eItemAddReason, bool) */

int CInventory::insertItemIntoCreatureEquipment(CInventory *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 in_stack_0000004c;
  
  if (param_2._2_4_ == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = GetEmptyCreatureSlot(param_1,(Inven_Item *)&param_2);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      Inven_Item::setCopy((Inven_Item *)(*(int *)(param_1 + 0x6e4) + iVar1 * 0x3d),
                          (Inven_Item *)&param_2);
    }
  }
  return iVar1;
}
```
