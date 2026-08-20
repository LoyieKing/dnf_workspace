# _CheckEnableInventoryCondition

`_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE`

`ItemVendingMachine::_CheckEnableInventoryCondition(CUser*, CItem const*, INVEN_TYPE, Inven_Item::ITEM_TYPE)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081768ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081768ba  _ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE
#           ItemVendingMachine::_CheckEnableInventoryCondition(CUser*, CItem const*, INVEN_TYPE, Inven_Item::ITEM_TYPE)
# range [0x081768ba, 0x0817697b]
081768ba +0x00:  push   %ebp
081768bb +0x01:  mov    %esp,%ebp
081768bd +0x03:  sub    $0x18,%esp
081768c0 +0x06:  mov    0xc(%ebp),%eax
081768c3 +0x09:  mov    %eax,(%esp)
081768c6 +0x0c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081768cb +0x11:  mov    0x18(%ebp),%edx
081768ce +0x14:  mov    %edx,0x8(%esp)
081768d2 +0x18:  mov    0x14(%ebp),%edx
081768d5 +0x1b:  mov    %edx,0x4(%esp)
081768d9 +0x1f:  mov    %eax,(%esp)
081768dc +0x22:  call   084fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>  ; CInventory::GetRemainCapacity(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
081768e1 +0x27:  test   %eax,%eax
081768e3 +0x29:  jg     08176964 <+0xaa>
081768e5 +0x2b:  mov    0x10(%ebp),%eax
081768e8 +0x2e:  mov    %eax,(%esp)
081768eb +0x31:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081768f0 +0x36:  cmp    $0xc8,%eax
081768f5 +0x3b:  je     08176964 <+0xaa>
081768f7 +0x3d:  mov    0x10(%ebp),%eax
081768fa +0x40:  mov    %eax,(%esp)
081768fd +0x43:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176902 +0x48:  cmp    $0xcb,%eax
08176907 +0x4d:  je     08176964 <+0xaa>
08176909 +0x4f:  mov    0x10(%ebp),%eax
0817690c +0x52:  mov    %eax,(%esp)
0817690f +0x55:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176914 +0x5a:  cmp    $0xcc,%eax
08176919 +0x5f:  je     08176964 <+0xaa>
0817691b +0x61:  mov    0x10(%ebp),%eax
0817691e +0x64:  mov    %eax,(%esp)
08176921 +0x67:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176926 +0x6c:  cmp    $0xcd,%eax
0817692b +0x71:  je     08176964 <+0xaa>
0817692d +0x73:  mov    0x10(%ebp),%eax
08176930 +0x76:  mov    %eax,(%esp)
08176933 +0x79:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176938 +0x7e:  cmp    $0x5,%eax
0817693b +0x81:  je     08176964 <+0xaa>
0817693d +0x83:  mov    0x10(%ebp),%eax
08176940 +0x86:  mov    %eax,(%esp)
08176943 +0x89:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176948 +0x8e:  cmp    $0x6,%eax
0817694b +0x91:  je     08176964 <+0xaa>
0817694d +0x93:  mov    0x10(%ebp),%eax
08176950 +0x96:  mov    %eax,(%esp)
08176953 +0x99:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08176958 +0x9e:  cmp    $0x7,%eax
0817695b +0xa1:  je     08176964 <+0xaa>
0817695d +0xa3:  mov    $0x1,%eax
08176962 +0xa8:  jmp    08176969 <+0xaf>
08176964 +0xaa:  mov    $0x0,%eax
08176969 +0xaf:  test   %al,%al
0817696b +0xb1:  je     08176974 <+0xba>
0817696d +0xb3:  mov    $0x0,%eax
08176972 +0xb8:  jmp    08176979 <+0xbf>
08176974 +0xba:  mov    $0x1,%eax
08176979 +0xbf:  leave
0817697a +0xc0:  ret
0817697b +0xc1:  nop
```

## 反编译 C

```c
// ItemVendingMachine::_CheckEnableInventoryCondition @ 0x81768ba

/* ItemVendingMachine::_CheckEnableInventoryCondition(CUser*, CItem const*, INVEN_TYPE,
   Inven_Item::ITEM_TYPE) */

bool __thiscall
ItemVendingMachine::_CheckEnableInventoryCondition
          (undefined4 this,CUserCharacInfo *param_1,CItem *param_2,undefined4 param_4,
          undefined4 param_5)

{
  bool bVar1;
  CInventory *pCVar2;
  int iVar3;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  iVar3 = CInventory::GetRemainCapacity(pCVar2,param_4,param_5);
  if (((((iVar3 < 1) && (iVar3 = CItem::get_index(param_2), iVar3 != 200)) &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 0xcb)) &&
      ((iVar3 = CItem::get_index(param_2), iVar3 != 0xcc &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 0xcd)))) &&
     ((iVar3 = CItem::get_index(param_2), iVar3 != 5 &&
      ((iVar3 = CItem::get_index(param_2), iVar3 != 6 &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 7)))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return !bVar1;
}
```
