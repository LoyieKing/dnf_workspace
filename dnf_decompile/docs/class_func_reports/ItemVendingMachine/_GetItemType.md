# _GetItemType

`_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods`

`ItemVendingMachine::_GetItemType(CCeraShopGoods const*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08176348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08176348  _ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods
#           ItemVendingMachine::_GetItemType(CCeraShopGoods const*)
# range [0x08176348, 0x081763bd]
08176348 +0x00:  push   %ebp
08176349 +0x01:  mov    %esp,%ebp
0817634b +0x03:  sub    $0x18,%esp
0817634e +0x06:  mov    $&_ZGVZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,%eax
08176353 +0x0b:  movzbl (%eax),%eax
08176356 +0x0e:  test   %al,%al
08176358 +0x10:  jne    08176387 <+0x3f>
0817635a +0x12:  movl   $&_ZGVZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,(%esp)
08176361 +0x19:  call   08725330 <__cxa_guard_acquire>
08176366 +0x1e:  test   %eax,%eax
08176368 +0x20:  setne  %al
0817636b +0x23:  test   %al,%al
0817636d +0x25:  je     08176387 <+0x3f>
0817636f +0x27:  movl   $&_ZZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,(%esp)
08176376 +0x2e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0817637b +0x33:  movl   $&_ZGVZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,(%esp)
08176382 +0x3a:  call   08725250 <__cxa_guard_release>
08176387 +0x3f:  movl   $&_ZZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,(%esp)
0817638e +0x46:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08176393 +0x4b:  mov    0xc(%ebp),%eax
08176396 +0x4e:  mov    %eax,(%esp)
08176399 +0x51:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
0817639e +0x56:  mov    (%eax),%edx
081763a0 +0x58:  add    $0x8,%edx
081763a3 +0x5b:  mov    (%edx),%edx
081763a5 +0x5d:  movl   $&_ZZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp,0x4(%esp)
081763ad +0x65:  mov    %eax,(%esp)
081763b0 +0x68:  call   *%edx
081763b2 +0x6a:  movzbl &_ZZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoodsE4temp+0x1,%eax
081763b9 +0x71:  movzbl %al,%eax
081763bc +0x74:  leave
081763bd +0x75:  ret
```

## 反编译 C

```c
// ItemVendingMachine::_GetItemType @ 0x8176348

/* ItemVendingMachine::_GetItemType(CCeraShopGoods const*) */

undefined1 __thiscall
ItemVendingMachine::_GetItemType(ItemVendingMachine *this,CCeraShopGoods *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_GetItemType(CCeraShopGoods_const*)::temp == '\0') {
    iVar1 = __cxa_guard_acquire(&_GetItemType(CCeraShopGoods_const*)::temp);
    if (iVar1 != 0) {
      Inven_Item::Inven_Item((Inven_Item *)_GetItemType(CCeraShopGoods_const*)::temp);
      __cxa_guard_release(&_GetItemType(CCeraShopGoods_const*)::temp);
    }
  }
  Inven_Item::reset((Inven_Item *)_GetItemType(CCeraShopGoods_const*)::temp);
  piVar2 = (int *)CCeraShopGoods::GetRelatedItem(param_1);
  (**(code **)(*piVar2 + 8))(piVar2,_GetItemType(CCeraShopGoods_const*)::temp);
  return _GetItemType(CCeraShopGoods_const*)::temp[1];
}
```
