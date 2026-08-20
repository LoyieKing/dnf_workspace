# tryInsertItemIntoCreature

`_ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item`

`CInventory::tryInsertItemIntoCreature(Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850aaa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850aaa4  _ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item
#           CInventory::tryInsertItemIntoCreature(Inven_Item&) const
# range [0x0850aaa4, 0x0850ab0f]
0850aaa4 +0x00:  push   %ebp
0850aaa5 +0x01:  mov    %esp,%ebp
0850aaa7 +0x03:  sub    $0x28,%esp
0850aaaa +0x06:  movl   $0xffffffff,-0xc(%ebp)
0850aab1 +0x0d:  mov    0xc(%ebp),%eax
0850aab4 +0x10:  mov    %eax,(%esp)
0850aab7 +0x13:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850aabc +0x18:  test   %al,%al
0850aabe +0x1a:  je     0850aad7 <+0x33>
0850aac0 +0x1c:  mov    0xc(%ebp),%eax
0850aac3 +0x1f:  mov    %eax,0x4(%esp)
0850aac7 +0x23:  mov    0x8(%ebp),%eax
0850aaca +0x26:  mov    %eax,(%esp)
0850aacd +0x29:  call   0850a436 <_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item>  ; CInventory::GetEmptyCreatureSlot(Inven_Item&) const
0850aad2 +0x2e:  mov    %eax,-0xc(%ebp)
0850aad5 +0x31:  jmp    0850ab0b <+0x67>
0850aad7 +0x33:  mov    0xc(%ebp),%eax
0850aada +0x36:  mov    %eax,0x4(%esp)
0850aade +0x3a:  mov    0x8(%ebp),%eax
0850aae1 +0x3d:  mov    %eax,(%esp)
0850aae4 +0x40:  call   0850a3b6 <_ZNK10CInventory20GetExistCreatureSlotER10Inven_Item>  ; CInventory::GetExistCreatureSlot(Inven_Item&) const
0850aae9 +0x45:  mov    %eax,-0xc(%ebp)
0850aaec +0x48:  mov    -0xc(%ebp),%eax
0850aaef +0x4b:  shr    $0x1f,%eax
0850aaf2 +0x4e:  test   %al,%al
0850aaf4 +0x50:  je     0850ab0b <+0x67>
0850aaf6 +0x52:  mov    0xc(%ebp),%eax
0850aaf9 +0x55:  mov    %eax,0x4(%esp)
0850aafd +0x59:  mov    0x8(%ebp),%eax
0850ab00 +0x5c:  mov    %eax,(%esp)
0850ab03 +0x5f:  call   0850a436 <_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item>  ; CInventory::GetEmptyCreatureSlot(Inven_Item&) const
0850ab08 +0x64:  mov    %eax,-0xc(%ebp)
0850ab0b +0x67:  mov    -0xc(%ebp),%eax
0850ab0e +0x6a:  leave
0850ab0f +0x6b:  ret
```

## 反编译 C

```c
// CInventory::tryInsertItemIntoCreature @ 0x850aaa4

/* CInventory::tryInsertItemIntoCreature(Inven_Item&) const */

int __thiscall CInventory::tryInsertItemIntoCreature(CInventory *this,Inven_Item *param_1)

{
  char cVar1;
  undefined4 local_10;
  
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 == '\0') {
    local_10 = GetExistCreatureSlot(this,param_1);
    if (local_10 < 0) {
      local_10 = GetEmptyCreatureSlot(this,param_1);
    }
  }
  else {
    local_10 = GetEmptyCreatureSlot(this,param_1);
  }
  return local_10;
}
```
