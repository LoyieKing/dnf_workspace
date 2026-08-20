# _CheckEnableItemCondition

`_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE`

`ItemVendingMachine::_CheckEnableItemCondition(CCeraShopGoods const*, CItem const*&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0817697c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817697c  _ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE
#           ItemVendingMachine::_CheckEnableItemCondition(CCeraShopGoods const*, CItem const*&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0817697c, 0x081769f5]
0817697c +0x00:  push   %ebp
0817697d +0x01:  mov    %esp,%ebp
0817697f +0x03:  sub    $0x18,%esp
08176982 +0x06:  mov    0xc(%ebp),%eax
08176985 +0x09:  mov    %eax,(%esp)
08176988 +0x0c:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
0817698d +0x11:  cmp    $0x1,%eax
08176990 +0x14:  setne  %al
08176993 +0x17:  test   %al,%al
08176995 +0x19:  je     081769ee <+0x72>
08176997 +0x1b:  mov    0xc(%ebp),%eax
0817699a +0x1e:  mov    %eax,(%esp)
0817699d +0x21:  call   0817a048 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc6>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xc6
081769a2 +0x26:  cmp    $0xb,%eax
081769a5 +0x29:  jne    081769be <+0x42>
081769a7 +0x2b:  mov    0xc(%ebp),%eax
081769aa +0x2e:  mov    %eax,(%esp)
081769ad +0x31:  call   0817a03c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xba>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xba
081769b2 +0x36:  cmp    $0x1,%eax
081769b5 +0x39:  jne    081769be <+0x42>
081769b7 +0x3b:  mov    $0x1,%eax
081769bc +0x40:  jmp    081769c3 <+0x47>
081769be +0x42:  mov    $0x0,%eax
081769c3 +0x47:  test   %al,%al
081769c5 +0x49:  je     081769ce <+0x52>
081769c7 +0x4b:  mov    $0x1,%eax
081769cc +0x50:  jmp    081769f3 <+0x77>
081769ce +0x52:  mov    0xc(%ebp),%eax
081769d1 +0x55:  mov    %eax,(%esp)
081769d4 +0x58:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
081769d9 +0x5d:  mov    0x10(%ebp),%edx
081769dc +0x60:  mov    %eax,(%edx)
081769de +0x62:  mov    0x10(%ebp),%eax
081769e1 +0x65:  mov    (%eax),%eax
081769e3 +0x67:  test   %eax,%eax
081769e5 +0x69:  jne    081769ee <+0x72>
081769e7 +0x6b:  mov    $0x0,%eax
081769ec +0x70:  jmp    081769f3 <+0x77>
081769ee +0x72:  mov    $0x1,%eax
081769f3 +0x77:  leave
081769f4 +0x78:  ret
081769f5 +0x79:  nop
```

## 反编译 C

```c
// ItemVendingMachine::_CheckEnableItemCondition @ 0x817697c

/* ItemVendingMachine::_CheckEnableItemCondition(CCeraShopGoods const*, CItem const*&,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4
ItemVendingMachine::_CheckEnableItemCondition
          (CCeraShopGoods *param_1,CItem **param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCeraShopGoods::GetGroupIdx((CCeraShopGoods *)param_2);
  if (iVar2 != 1) {
    iVar2 = CCeraShopGoods::GetGroupIdx((CCeraShopGoods *)param_2);
    if ((iVar2 == 0xb) &&
       (iVar2 = CCeraShopGoods::GetSubGroupIndex((CCeraShopGoods *)param_2), iVar2 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    uVar3 = CCeraShopGoods::GetRelatedItem((CCeraShopGoods *)param_2);
    *(undefined4 *)param_3 = uVar3;
    if (*(int *)param_3 == 0) {
      return 0;
    }
  }
  return 1;
}
```
