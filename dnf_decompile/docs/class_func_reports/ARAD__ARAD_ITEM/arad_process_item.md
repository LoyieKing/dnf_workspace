# arad_process_item

`_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item`

`ARAD::ARAD_ITEM::arad_process_item(CUser*, Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `ARAD::ARAD_ITEM` | `0x081973fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081973fa  _ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item
#           ARAD::ARAD_ITEM::arad_process_item(CUser*, Inven_Item const&)
# range [0x081973fa, 0x0819763b]
081973fa +0x000:  push   %ebp
081973fb +0x001:  mov    %esp,%ebp
081973fd +0x003:  push   %esi
081973fe +0x004:  push   %ebx
081973ff +0x005:  add    $0xffffff80,%esp
08197402 +0x008:  cmpl   $0x0,0x8(%ebp)
08197406 +0x00c:  je     08197412 <+0x18>
08197408 +0x00e:  mov    0xc(%ebp),%eax
0819740b +0x011:  mov    0x2(%eax),%eax
0819740e +0x014:  test   %eax,%eax
08197410 +0x016:  jne    0819741c <+0x22>
08197412 +0x018:  mov    $0x0,%ebx
08197417 +0x01d:  jmp    08197633 <+0x239>
0819741c +0x022:  movl   $0xffffffff,-0x18(%ebp)
08197423 +0x029:  movl   $0x0,-0x1c(%ebp)
0819742a +0x030:  lea    -0x28(%ebp),%eax
0819742d +0x033:  mov    %eax,(%esp)
08197430 +0x036:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08197435 +0x03b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0819743c +0x042:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08197441 +0x047:  mov    %eax,-0x14(%ebp)
08197444 +0x04a:  mov    0xc(%ebp),%eax
08197447 +0x04d:  mov    0x2(%eax),%eax
0819744a +0x050:  mov    %eax,%ebx
0819744c +0x052:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08197451 +0x057:  mov    0xc(%eax),%eax
08197454 +0x05a:  mov    %ebx,0x4(%esp)
08197458 +0x05e:  mov    %eax,(%esp)
0819745b +0x061:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08197460 +0x066:  mov    %eax,-0x10(%ebp)
08197463 +0x069:  lea    -0x40(%ebp),%eax
08197466 +0x06c:  mov    %eax,(%esp)
08197469 +0x06f:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
0819746e +0x074:  mov    0xc(%ebp),%eax
08197471 +0x077:  mov    0x2(%eax),%eax
08197474 +0x07a:  mov    %eax,%edx
08197476 +0x07c:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
0819747b +0x081:  movl   $0x1,0x30(%esp)
08197483 +0x089:  movl   $0x0,0x2c(%esp)
0819748b +0x091:  movl   $0x0,0x28(%esp)
08197493 +0x099:  movl   $0x0,0x24(%esp)
0819749b +0x0a1:  lea    -0x40(%ebp),%ecx
0819749e +0x0a4:  mov    %ecx,0x20(%esp)
081974a2 +0x0a8:  lea    -0x28(%ebp),%ecx
081974a5 +0x0ab:  mov    %ecx,0x1c(%esp)
081974a9 +0x0af:  movl   $0x1,0x18(%esp)
081974b1 +0x0b7:  mov    -0x14(%ebp),%ecx
081974b4 +0x0ba:  mov    %ecx,0x14(%esp)
081974b8 +0x0be:  lea    -0x1c(%ebp),%ecx
081974bb +0x0c1:  mov    %ecx,0x10(%esp)
081974bf +0x0c5:  mov    -0x10(%ebp),%ecx
081974c2 +0x0c8:  mov    %ecx,0xc(%esp)
081974c6 +0x0cc:  mov    %edx,0x8(%esp)
081974ca +0x0d0:  mov    0x8(%ebp),%edx
081974cd +0x0d3:  mov    %edx,0x4(%esp)
081974d1 +0x0d7:  mov    %eax,(%esp)
081974d4 +0x0da:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
081974d9 +0x0df:  xor    $0x1,%eax
081974dc +0x0e2:  test   %al,%al
081974de +0x0e4:  je     0819758e <+0x194>
081974e4 +0x0ea:  cmpl   $0xffffffff,-0x18(%ebp)
081974e8 +0x0ee:  je     0819751c <+0x122>
081974ea +0x0f0:  mov    -0x18(%ebp),%eax
081974ed +0x0f3:  mov    %eax,0xc(%esp)
081974f1 +0x0f7:  movl   $0x0,0x8(%esp)
081974f9 +0x0ff:  movl   $0x1,0x4(%esp)
08197501 +0x107:  mov    0x8(%ebp),%eax
08197504 +0x10a:  mov    %eax,(%esp)
08197507 +0x10d:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0819750c +0x112:  mov    0x8(%ebp),%eax
0819750f +0x115:  mov    %eax,(%esp)
08197512 +0x118:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
08197517 +0x11d:  jmp    081975e4 <+0x1ea>
0819751c +0x122:  movl   $0x0,0xc(%esp)
08197524 +0x12a:  movl   $"game_server_msg_104",0x8(%esp)
0819752c +0x132:  movl   $0x4,0x4(%esp)
08197534 +0x13a:  movl   $&g_scriptStringManager_,(%esp)
0819753b +0x141:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08197540 +0x146:  mov    %eax,-0xc(%ebp)
08197543 +0x149:  mov    -0xc(%ebp),%eax
08197546 +0x14c:  mov    %eax,(%esp)
08197549 +0x14f:  call   0807e3b0 <_init+0xca8>
0819754e +0x154:  mov    %eax,%ebx
08197550 +0x156:  mov    0x8(%ebp),%eax
08197553 +0x159:  mov    %eax,(%esp)
08197556 +0x15c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819755b +0x161:  mov    %ebx,0x18(%esp)
0819755f +0x165:  mov    -0xc(%ebp),%edx
08197562 +0x168:  mov    %edx,0x14(%esp)
08197566 +0x16c:  movl   $0x1,0x10(%esp)
0819756e +0x174:  mov    %eax,0xc(%esp)
08197572 +0x178:  movl   $0x0,0x8(%esp)
0819757a +0x180:  mov    0xc(%ebp),%eax
0819757d +0x183:  mov    %eax,0x4(%esp)
08197581 +0x187:  mov    0x8(%ebp),%eax
08197584 +0x18a:  mov    %eax,(%esp)
08197587 +0x18d:  call   08555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
0819758c +0x192:  jmp    081975e4 <+0x1ea>
0819758e +0x194:  mov    0xc(%ebp),%eax
08197591 +0x197:  mov    0x7(%eax),%esi
08197594 +0x19a:  mov    0xc(%ebp),%eax
08197597 +0x19d:  mov    0x2(%eax),%ebx
0819759a +0x1a0:  mov    0x8(%ebp),%eax
0819759d +0x1a3:  mov    %eax,(%esp)
081975a0 +0x1a6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081975a5 +0x1ab:  mov    %esi,0x1c(%esp)
081975a9 +0x1af:  mov    %ebx,0x18(%esp)
081975ad +0x1b3:  mov    %eax,0x14(%esp)
081975b1 +0x1b7:  movl   $"Error process Item (charac:%u, item:%u, count:%d)",0x10(%esp)
081975b9 +0x1bf:  movl   $0x187,0xc(%esp)
081975c1 +0x1c7:  movl   $&_ZZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_ItemE19__PRETTY_FUNCTION__,0x8(%esp)
081975c9 +0x1cf:  movl   $"localjapan/Arad_Function_Set.cpp",0x4(%esp)
081975d1 +0x1d7:  movl   $0x1,(%esp)
081975d8 +0x1de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081975dd +0x1e3:  mov    $0x0,%ebx
081975e2 +0x1e8:  jmp    08197600 <+0x206>
081975e4 +0x1ea:  mov    $0x1,%ebx
081975e9 +0x1ef:  jmp    08197600 <+0x206>
081975eb +0x1f1:  mov    %edx,%ebx
081975ed +0x1f3:  mov    %eax,%esi
081975ef +0x1f5:  lea    -0x40(%ebp),%eax
081975f2 +0x1f8:  mov    %eax,(%esp)
081975f5 +0x1fb:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
081975fa +0x200:  mov    %esi,%eax
081975fc +0x202:  mov    %ebx,%edx
081975fe +0x204:  jmp    0819760d <+0x213>
08197600 +0x206:  lea    -0x40(%ebp),%eax
08197603 +0x209:  mov    %eax,(%esp)
08197606 +0x20c:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
0819760b +0x211:  jmp    08197628 <+0x22e>
0819760d +0x213:  mov    %edx,%ebx
0819760f +0x215:  mov    %eax,%esi
08197611 +0x217:  lea    -0x28(%ebp),%eax
08197614 +0x21a:  mov    %eax,(%esp)
08197617 +0x21d:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0819761c +0x222:  mov    %esi,%eax
0819761e +0x224:  mov    %ebx,%edx
08197620 +0x226:  mov    %eax,(%esp)
08197623 +0x229:  call   08ae3750 <_Unwind_Resume>
08197628 +0x22e:  lea    -0x28(%ebp),%eax
0819762b +0x231:  mov    %eax,(%esp)
0819762e +0x234:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08197633 +0x239:  mov    %ebx,%eax
08197635 +0x23b:  sub    $0xffffff80,%esp
08197638 +0x23e:  pop    %ebx
08197639 +0x23f:  pop    %esi
0819763a +0x240:  pop    %ebp
0819763b +0x241:  ret
```

## 反编译 C

```c
// ARAD::ARAD_ITEM::arad_process_item @ 0x81973fa

/* ARAD::ARAD_ITEM::arad_process_item(CUser*, Inven_Item const&) */

undefined4 ARAD::ARAD_ITEM::arad_process_item(CUser *param_1,Inven_Item *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  stCeraShopItemParam_t local_44 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_2c [12];
  int local_20;
  int local_1c;
  long local_18;
  int local_14;
  char *local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)(param_2 + 2) == 0)) {
    uVar8 = 0;
  }
  else {
    local_1c = -1;
    local_20 = 0;
    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_2c);
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar1 = *(int *)(param_2 + 2);
                    /* try { // try from 0819744c to 0819746d has its CatchHandler @ 0819760d */
    iVar4 = G_CDataManager();
    local_14 = CItemList::GetRestrictCode(*(CItemList **)(iVar4 + 0xc),iVar1);
    WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_44);
                    /* try { // try from 081974d4 to 081975dc has its CatchHandler @ 081975eb */
    cVar3 = WongWork::CCeraShop::ProcessSpecialItem
                      (GlobalData::s_pCeraShop,param_1,*(int *)(param_2 + 2),local_14,&local_20,
                       local_18,true,(vector *)local_2c,local_44,'\0','\0',false,1);
    if (cVar3 == '\x01') {
      uVar8 = *(undefined4 *)(param_2 + 7);
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_Function_Set.cpp",
                 "bool ARAD::ARAD_ITEM::arad_process_item(CUser*, const Inven_Item&)",0x187,
                 "Error process Item (charac:%u, item:%u, count:%d)",uVar7,uVar2,uVar8);
      uVar8 = 0;
    }
    else {
      if (local_1c == -1) {
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewMail(param_1,param_2,0,uVar6,true,local_10,sVar5);
      }
      else {
        CUser::SendUpdateItemList(param_1,1,0,local_1c);
        CUser::SaveInventory(param_1);
      }
      uVar8 = 1;
    }
                    /* try { // try from 08197606 to 0819760a has its CatchHandler @ 0819760d */
    WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_44);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_2c);
  }
  return uVar8;
}
```
