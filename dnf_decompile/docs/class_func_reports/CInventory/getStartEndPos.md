# getStartEndPos

`_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_`

`CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850185e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850185e  _ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_
#           CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
# range [0x0850185e, 0x08501885]
0850185e +0x00:  push   %ebp
0850185f +0x01:  mov    %esp,%ebp
08501861 +0x03:  sub    $0x18,%esp
08501864 +0x06:  mov    0x14(%ebp),%eax
08501867 +0x09:  mov    %eax,0xc(%esp)
0850186b +0x0d:  mov    0x10(%ebp),%eax
0850186e +0x10:  mov    %eax,0x8(%esp)
08501872 +0x14:  mov    0xc(%ebp),%eax
08501875 +0x17:  mov    %eax,0x4(%esp)
08501879 +0x1b:  mov    0x8(%ebp),%eax
0850187c +0x1e:  mov    %eax,(%esp)
0850187f +0x21:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08501884 +0x26:  leave
08501885 +0x27:  ret
```

## 反编译 C

```c
// CInventory::getStartEndPos @ 0x850185e

/* CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const */

void __thiscall
CInventory::getStartEndPos
          (CInventory *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  StartEndPos(this,param_2,param_3,param_4);
  return;
}
```
