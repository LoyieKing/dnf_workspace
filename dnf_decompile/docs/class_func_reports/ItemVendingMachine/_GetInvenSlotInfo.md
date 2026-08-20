# _GetInvenSlotInfo

`_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE`

`ItemVendingMachine::_GetInvenSlotInfo(CCeraShopGoods const*, INVEN_TYPE&, Inven_Item::ITEM_TYPE&)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081763be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081763be  _ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE
#           ItemVendingMachine::_GetInvenSlotInfo(CCeraShopGoods const*, INVEN_TYPE&, Inven_Item::ITEM_TYPE&)
# range [0x081763be, 0x08176459]
081763be +0x00:  push   %ebp
081763bf +0x01:  mov    %esp,%ebp
081763c1 +0x03:  sub    $0x28,%esp
081763c4 +0x06:  mov    0xc(%ebp),%eax
081763c7 +0x09:  mov    %eax,(%esp)
081763ca +0x0c:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
081763cf +0x11:  mov    %eax,-0xc(%ebp)
081763d2 +0x14:  mov    -0xc(%ebp),%eax
081763d5 +0x17:  cmp    $0x2,%eax
081763d8 +0x1a:  je     081763fc <+0x3e>
081763da +0x1c:  cmp    $0x2,%eax
081763dd +0x1f:  jg     081763e5 <+0x27>
081763df +0x21:  test   %eax,%eax
081763e1 +0x23:  je     081763f1 <+0x33>
081763e3 +0x25:  jmp    08176452 <+0x94>
081763e5 +0x27:  cmp    $0x3,%eax
081763e8 +0x2a:  je     0817641e <+0x60>
081763ea +0x2c:  cmp    $0x7,%eax
081763ed +0x2f:  je     08176440 <+0x82>
081763ef +0x31:  jmp    08176452 <+0x94>
081763f1 +0x33:  mov    0x10(%ebp),%eax
081763f4 +0x36:  movl   $0x2,(%eax)
081763fa +0x3c:  jmp    08176452 <+0x94>
081763fc +0x3e:  mov    0x10(%ebp),%eax
081763ff +0x41:  movl   $0x1,(%eax)
08176405 +0x47:  mov    0xc(%ebp),%eax
08176408 +0x4a:  mov    %eax,0x4(%esp)
0817640c +0x4e:  mov    0x8(%ebp),%eax
0817640f +0x51:  mov    %eax,(%esp)
08176412 +0x54:  call   08176348 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods>  ; ItemVendingMachine::_GetItemType(CCeraShopGoods const*)
08176417 +0x59:  mov    0x14(%ebp),%edx
0817641a +0x5c:  mov    %eax,(%edx)
0817641c +0x5e:  jmp    08176452 <+0x94>
0817641e +0x60:  mov    0x10(%ebp),%eax
08176421 +0x63:  movl   $0x3,(%eax)
08176427 +0x69:  mov    0xc(%ebp),%eax
0817642a +0x6c:  mov    %eax,0x4(%esp)
0817642e +0x70:  mov    0x8(%ebp),%eax
08176431 +0x73:  mov    %eax,(%esp)
08176434 +0x76:  call   08176348 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods>  ; ItemVendingMachine::_GetItemType(CCeraShopGoods const*)
08176439 +0x7b:  mov    0x14(%ebp),%edx
0817643c +0x7e:  mov    %eax,(%edx)
0817643e +0x80:  jmp    08176452 <+0x94>
08176440 +0x82:  mov    0x10(%ebp),%eax
08176443 +0x85:  movl   $0x1,(%eax)
08176449 +0x8b:  mov    0x14(%ebp),%eax
0817644c +0x8e:  movl   $0x2,(%eax)
08176452 +0x94:  mov    $0x1,%eax
08176457 +0x99:  leave
08176458 +0x9a:  ret
08176459 +0x9b:  nop
```

## 反编译 C

```c
// ItemVendingMachine::_GetInvenSlotInfo @ 0x81763be

/* ItemVendingMachine::_GetInvenSlotInfo(CCeraShopGoods const*, INVEN_TYPE&, Inven_Item::ITEM_TYPE&)
    */

undefined4 __thiscall
ItemVendingMachine::_GetInvenSlotInfo
          (ItemVendingMachine *this,CCeraShopGoods *param_1,INVEN_TYPE *param_2,ITEM_TYPE *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CCeraShopGoods::GetGroupIdx(param_1);
  if (iVar1 == 2) {
    *(undefined4 *)param_2 = 1;
    uVar2 = _GetItemType(this,param_1);
    *(undefined4 *)param_3 = uVar2;
  }
  else if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)param_2 = 2;
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)param_2 = 3;
    uVar2 = _GetItemType(this,param_1);
    *(undefined4 *)param_3 = uVar2;
  }
  else if (iVar1 == 7) {
    *(undefined4 *)param_2 = 1;
    *(undefined4 *)param_3 = 2;
  }
  return 1;
}
```
