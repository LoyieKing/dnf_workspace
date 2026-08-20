# _GetItemString

`_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj`

`ItemVendingMachine::_GetItemString(CCeraShopGoods const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0817645a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817645a  _ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj
#           ItemVendingMachine::_GetItemString(CCeraShopGoods const*, char*, unsigned int)
# range [0x0817645a, 0x08176721]
0817645a +0x000:  push   %ebp
0817645b +0x001:  mov    %esp,%ebp
0817645d +0x003:  push   %ebx
0817645e +0x004:  sub    $0x34,%esp
08176461 +0x007:  mov    0xc(%ebp),%eax
08176464 +0x00a:  mov    %eax,(%esp)
08176467 +0x00d:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
0817646c +0x012:  cmp    $0x1,%eax
0817646f +0x015:  sete   %al
08176472 +0x018:  test   %al,%al
08176474 +0x01a:  je     081764a4 <+0x4a>
08176476 +0x01c:  mov    0xc(%ebp),%eax
08176479 +0x01f:  mov    %eax,(%esp)
0817647c +0x022:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08176481 +0x027:  mov    %eax,0xc(%esp)
08176485 +0x02b:  movl   $"Continue Coin %d",0x8(%esp)
0817648d +0x033:  mov    0x14(%ebp),%eax
08176490 +0x036:  mov    %eax,0x4(%esp)
08176494 +0x03a:  mov    0x10(%ebp),%eax
08176497 +0x03d:  mov    %eax,(%esp)
0817649a +0x040:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0817649f +0x045:  jmp    0817671c <+0x2c2>
081764a4 +0x04a:  mov    0xc(%ebp),%eax
081764a7 +0x04d:  mov    %eax,(%esp)
081764aa +0x050:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
081764af +0x055:  cmp    $0xca,%eax
081764b4 +0x05a:  sete   %al
081764b7 +0x05d:  test   %al,%al
081764b9 +0x05f:  je     081764e9 <+0x8f>
081764bb +0x061:  mov    0xc(%ebp),%eax
081764be +0x064:  mov    %eax,(%esp)
081764c1 +0x067:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
081764c6 +0x06c:  mov    %eax,0xc(%esp)
081764ca +0x070:  movl   $"Mystic Coin %d",0x8(%esp)
081764d2 +0x078:  mov    0x14(%ebp),%eax
081764d5 +0x07b:  mov    %eax,0x4(%esp)
081764d9 +0x07f:  mov    0x10(%ebp),%eax
081764dc +0x082:  mov    %eax,(%esp)
081764df +0x085:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081764e4 +0x08a:  jmp    0817671c <+0x2c2>
081764e9 +0x08f:  mov    0xc(%ebp),%eax
081764ec +0x092:  mov    %eax,(%esp)
081764ef +0x095:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
081764f4 +0x09a:  cmp    $0x8,%eax
081764f7 +0x09d:  sete   %al
081764fa +0x0a0:  test   %al,%al
081764fc +0x0a2:  je     0817652c <+0xd2>
081764fe +0x0a4:  mov    0xc(%ebp),%eax
08176501 +0x0a7:  mov    %eax,(%esp)
08176504 +0x0aa:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08176509 +0x0af:  mov    %eax,0xc(%esp)
0817650d +0x0b3:  movl   $"Hands of Remy %d",0x8(%esp)
08176515 +0x0bb:  mov    0x14(%ebp),%eax
08176518 +0x0be:  mov    %eax,0x4(%esp)
0817651c +0x0c2:  mov    0x10(%ebp),%eax
0817651f +0x0c5:  mov    %eax,(%esp)
08176522 +0x0c8:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08176527 +0x0cd:  jmp    0817671c <+0x2c2>
0817652c +0x0d2:  mov    0xc(%ebp),%eax
0817652f +0x0d5:  mov    %eax,(%esp)
08176532 +0x0d8:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08176537 +0x0dd:  cmp    $0xf,%eax
0817653a +0x0e0:  sete   %al
0817653d +0x0e3:  test   %al,%al
0817653f +0x0e5:  je     0817656f <+0x115>
08176541 +0x0e7:  mov    0xc(%ebp),%eax
08176544 +0x0ea:  mov    %eax,(%esp)
08176547 +0x0ed:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
0817654c +0x0f2:  mov    %eax,0xc(%esp)
08176550 +0x0f6:  movl   $"Kaleido Box %d",0x8(%esp)
08176558 +0x0fe:  mov    0x14(%ebp),%eax
0817655b +0x101:  mov    %eax,0x4(%esp)
0817655f +0x105:  mov    0x10(%ebp),%eax
08176562 +0x108:  mov    %eax,(%esp)
08176565 +0x10b:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0817656a +0x110:  jmp    0817671c <+0x2c2>
0817656f +0x115:  mov    0xc(%ebp),%eax
08176572 +0x118:  mov    %eax,(%esp)
08176575 +0x11b:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
0817657a +0x120:  cmp    $0x43d,%eax
0817657f +0x125:  sete   %al
08176582 +0x128:  test   %al,%al
08176584 +0x12a:  je     081765b4 <+0x15a>
08176586 +0x12c:  mov    0xc(%ebp),%eax
08176589 +0x12f:  mov    %eax,(%esp)
0817658c +0x132:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08176591 +0x137:  mov    %eax,0xc(%esp)
08176595 +0x13b:  movl   $"Manaade %d",0x8(%esp)
0817659d +0x143:  mov    0x14(%ebp),%eax
081765a0 +0x146:  mov    %eax,0x4(%esp)
081765a4 +0x14a:  mov    0x10(%ebp),%eax
081765a7 +0x14d:  mov    %eax,(%esp)
081765aa +0x150:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081765af +0x155:  jmp    0817671c <+0x2c2>
081765b4 +0x15a:  mov    0xc(%ebp),%eax
081765b7 +0x15d:  mov    %eax,(%esp)
081765ba +0x160:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
081765bf +0x165:  cmp    $0xe,%eax
081765c2 +0x168:  sete   %al
081765c5 +0x16b:  test   %al,%al
081765c7 +0x16d:  je     081765f7 <+0x19d>
081765c9 +0x16f:  mov    0xc(%ebp),%eax
081765cc +0x172:  mov    %eax,(%esp)
081765cf +0x175:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
081765d4 +0x17a:  mov    %eax,0xc(%esp)
081765d8 +0x17e:  movl   $"Golden Wax Candle %d",0x8(%esp)
081765e0 +0x186:  mov    0x14(%ebp),%eax
081765e3 +0x189:  mov    %eax,0x4(%esp)
081765e7 +0x18d:  mov    0x10(%ebp),%eax
081765ea +0x190:  mov    %eax,(%esp)
081765ed +0x193:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081765f2 +0x198:  jmp    0817671c <+0x2c2>
081765f7 +0x19d:  mov    0xc(%ebp),%eax
081765fa +0x1a0:  mov    %eax,(%esp)
081765fd +0x1a3:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
08176602 +0x1a8:  cmp    $0xd8,%eax
08176607 +0x1ad:  sete   %al
0817660a +0x1b0:  test   %al,%al
0817660c +0x1b2:  je     0817663c <+0x1e2>
0817660e +0x1b4:  mov    0xc(%ebp),%eax
08176611 +0x1b7:  mov    %eax,(%esp)
08176614 +0x1ba:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
08176619 +0x1bf:  mov    %eax,0xc(%esp)
0817661d +0x1c3:  movl   $"Mystic Cube %d",0x8(%esp)
08176625 +0x1cb:  mov    0x14(%ebp),%eax
08176628 +0x1ce:  mov    %eax,0x4(%esp)
0817662c +0x1d2:  mov    0x10(%ebp),%eax
0817662f +0x1d5:  mov    %eax,(%esp)
08176632 +0x1d8:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08176637 +0x1dd:  jmp    0817671c <+0x2c2>
0817663c +0x1e2:  mov    0xc(%ebp),%eax
0817663f +0x1e5:  mov    %eax,(%esp)
08176642 +0x1e8:  call   0817a06c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xea>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xea
08176647 +0x1ed:  mov    %eax,-0xc(%ebp)
0817664a +0x1f0:  cmpl   $0x0,-0xc(%ebp)
0817664e +0x1f4:  jne    08176690 <+0x236>
08176650 +0x1f6:  mov    0xc(%ebp),%eax
08176653 +0x1f9:  mov    %eax,(%esp)
08176656 +0x1fc:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
0817665b +0x201:  mov    %eax,0x14(%esp)
0817665f +0x205:  movl   $"CashShop Relation Item is NULL [ITEM:%d]",0x10(%esp)
08176667 +0x20d:  movl   $0x18d,0xc(%esp)
0817666f +0x215:  movl   $&_ZZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcjE19__PRETTY_FUNCTION__,0x8(%esp)
08176677 +0x21d:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
0817667f +0x225:  movl   $0x1,(%esp)
08176686 +0x22c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817668b +0x231:  jmp    0817671c <+0x2c2>
08176690 +0x236:  mov    -0xc(%ebp),%eax
08176693 +0x239:  mov    %eax,(%esp)
08176696 +0x23c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0817669b +0x241:  test   %al,%al
0817669d +0x243:  je     081766b6 <+0x25c>
0817669f +0x245:  mov    0xc(%ebp),%eax
081766a2 +0x248:  mov    %eax,(%esp)
081766a5 +0x24b:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
081766aa +0x250:  cmp    $0x1,%eax
081766ad +0x253:  jle    081766b6 <+0x25c>
081766af +0x255:  mov    $0x1,%eax
081766b4 +0x25a:  jmp    081766bb <+0x261>
081766b6 +0x25c:  mov    $0x0,%eax
081766bb +0x261:  test   %al,%al
081766bd +0x263:  je     081766fb <+0x2a1>
081766bf +0x265:  mov    0xc(%ebp),%eax
081766c2 +0x268:  mov    %eax,(%esp)
081766c5 +0x26b:  call   0817a000 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x7e>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x7e
081766ca +0x270:  mov    %eax,%ebx
081766cc +0x272:  mov    -0xc(%ebp),%eax
081766cf +0x275:  mov    %eax,(%esp)
081766d2 +0x278:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
081766d7 +0x27d:  mov    %ebx,0x10(%esp)
081766db +0x281:  mov    %eax,0xc(%esp)
081766df +0x285:  movl   $"%s Count %d",0x8(%esp)
081766e7 +0x28d:  mov    0x14(%ebp),%eax
081766ea +0x290:  mov    %eax,0x4(%esp)
081766ee +0x294:  mov    0x10(%ebp),%eax
081766f1 +0x297:  mov    %eax,(%esp)
081766f4 +0x29a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081766f9 +0x29f:  jmp    0817671c <+0x2c2>
081766fb +0x2a1:  mov    -0xc(%ebp),%eax
081766fe +0x2a4:  mov    %eax,(%esp)
08176701 +0x2a7:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
08176706 +0x2ac:  mov    0x14(%ebp),%edx
08176709 +0x2af:  mov    %edx,0x8(%esp)
0817670d +0x2b3:  mov    %eax,0x4(%esp)
08176711 +0x2b7:  mov    0x10(%ebp),%eax
08176714 +0x2ba:  mov    %eax,(%esp)
08176717 +0x2bd:  call   0807d8d0 <_init+0x1c8>
0817671c +0x2c2:  add    $0x34,%esp
0817671f +0x2c5:  pop    %ebx
08176720 +0x2c6:  pop    %ebp
08176721 +0x2c7:  ret
```

## 反编译 C

```c
// ItemVendingMachine::_GetItemString @ 0x817645a

/* ItemVendingMachine::_GetItemString(CCeraShopGoods const*, char*, unsigned int) */

void __thiscall
ItemVendingMachine::_GetItemString
          (ItemVendingMachine *this,CCeraShopGoods *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CItem *this_00;
  undefined4 uVar5;
  char *__src;
  
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 1) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Continue Coin %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xca) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Mystic Coin %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 8) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Hands of Remy %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xf) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Kaleido Box %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0x43d) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Manaade %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xe) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Golden Wax Candle %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xd8) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Mystic Cube %d",uVar4);
    return;
  }
  this_00 = (CItem *)CCeraShopGoods::GetRelatedItem(param_1);
  if (this_00 != (CItem *)0x0) {
    cVar2 = CItem::is_stackable(this_00);
    if ((cVar2 == '\0') || (iVar3 = CCeraShopGoods::GetStackCount(param_1), iVar3 < 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = CCeraShopGoods::GetStackCount(param_1);
      uVar5 = CItem::GetItemName(this_00);
      OS_API::snprintf(param_2,param_3,"%s Count %d",uVar5,uVar4);
    }
    else {
      __src = (char *)CItem::GetItemName(this_00);
      strncpy(param_2,__src,param_3);
    }
    return;
  }
  uVar4 = CCeraShopGoods::GetItemIdx(param_1);
  LogManager::logFormat
            (1,"localjapan/AppendVendingMachine.cpp",
             "void ItemVendingMachine::_GetItemString(const CCeraShopGoods*, char*, size_t)",0x18d,
             "CashShop Relation Item is NULL [ITEM:%d]",uVar4);
  return;
}
```
