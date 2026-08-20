# respond_special_item_booster

`_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_booster(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827ca4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ca4a  _ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_booster(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827ca4a, 0x0827ccfb]
0827ca4a +0x000:  push   %ebp
0827ca4b +0x001:  mov    %esp,%ebp
0827ca4d +0x003:  push   %edi
0827ca4e +0x004:  push   %esi
0827ca4f +0x005:  push   %ebx
0827ca50 +0x006:  sub    $0x7c,%esp
0827ca53 +0x009:  mov    0x10(%ebp),%eax
0827ca56 +0x00c:  mov    (%eax),%eax
0827ca58 +0x00e:  mov    %eax,-0x3c(%ebp)
0827ca5b +0x011:  mov    0x10(%ebp),%eax
0827ca5e +0x014:  mov    0x4(%eax),%eax
0827ca61 +0x017:  mov    %eax,-0x38(%ebp)
0827ca64 +0x01a:  mov    0x10(%ebp),%eax
0827ca67 +0x01d:  mov    0xc(%eax),%eax
0827ca6a +0x020:  mov    %eax,-0x34(%ebp)
0827ca6d +0x023:  mov    0x10(%ebp),%eax
0827ca70 +0x026:  mov    0x10(%eax),%eax
0827ca73 +0x029:  mov    %eax,-0x30(%ebp)
0827ca76 +0x02c:  mov    0x10(%ebp),%eax
0827ca79 +0x02f:  mov    0x14(%eax),%eax
0827ca7c +0x032:  mov    %eax,-0x2c(%ebp)
0827ca7f +0x035:  mov    0x10(%ebp),%eax
0827ca82 +0x038:  mov    0x18(%eax),%eax
0827ca85 +0x03b:  mov    %eax,-0x28(%ebp)
0827ca88 +0x03e:  mov    -0x38(%ebp),%edx
0827ca8b +0x041:  mov    0x8(%ebp),%eax
0827ca8e +0x044:  mov    (%eax),%eax
0827ca90 +0x046:  mov    %edx,0x4(%esp)
0827ca94 +0x04a:  mov    %eax,(%esp)
0827ca97 +0x04d:  call   08327ee6 <_ZN8WongWork9CCeraShop15setOriginalItemEi>  ; WongWork::CCeraShop::setOriginalItem(int)
0827ca9c +0x052:  mov    0x8(%ebp),%eax
0827ca9f +0x055:  mov    (%eax),%eax
0827caa1 +0x057:  mov    -0x38(%ebp),%edx
0827caa4 +0x05a:  mov    %edx,0xc(%esp)
0827caa8 +0x05e:  movl   $0x6,0x8(%esp)
0827cab0 +0x066:  mov    -0x3c(%ebp),%edx
0827cab3 +0x069:  mov    %edx,0x4(%esp)
0827cab7 +0x06d:  mov    %eax,(%esp)
0827caba +0x070:  call   08327454 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm>  ; WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long)
0827cabf +0x075:  movl   $0x0,-0x24(%ebp)
0827cac6 +0x07c:  mov    -0x38(%ebp),%ebx
0827cac9 +0x07f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827cace +0x084:  mov    %ebx,0x4(%esp)
0827cad2 +0x088:  mov    %eax,(%esp)
0827cad5 +0x08b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827cada +0x090:  mov    %eax,-0x20(%ebp)
0827cadd +0x093:  lea    -0x50(%ebp),%eax
0827cae0 +0x096:  mov    %eax,(%esp)
0827cae3 +0x099:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
0827cae8 +0x09e:  lea    -0x50(%ebp),%eax
0827caeb +0x0a1:  mov    %eax,0x4(%esp)
0827caef +0x0a5:  mov    -0x20(%ebp),%eax
0827caf2 +0x0a8:  mov    %eax,(%esp)
0827caf5 +0x0ab:  call   0850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>  ; CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
0827cafa +0x0b0:  lea    -0x44(%ebp),%eax
0827cafd +0x0b3:  lea    -0x50(%ebp),%edx
0827cb00 +0x0b6:  mov    %edx,0x4(%esp)
0827cb04 +0x0ba:  mov    %eax,(%esp)
0827cb07 +0x0bd:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
0827cb0c +0x0c2:  sub    $0x4,%esp
0827cb0f +0x0c5:  lea    -0x44(%ebp),%eax
0827cb12 +0x0c8:  mov    %eax,0x4(%esp)
0827cb16 +0x0cc:  lea    -0x54(%ebp),%eax
0827cb19 +0x0cf:  mov    %eax,(%esp)
0827cb1c +0x0d2:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
0827cb21 +0x0d7:  lea    -0x40(%ebp),%eax
0827cb24 +0x0da:  lea    -0x50(%ebp),%edx
0827cb27 +0x0dd:  mov    %edx,0x4(%esp)
0827cb2b +0x0e1:  mov    %eax,(%esp)
0827cb2e +0x0e4:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
0827cb33 +0x0e9:  sub    $0x4,%esp
0827cb36 +0x0ec:  lea    -0x40(%ebp),%eax
0827cb39 +0x0ef:  mov    %eax,0x4(%esp)
0827cb3d +0x0f3:  lea    -0x58(%ebp),%eax
0827cb40 +0x0f6:  mov    %eax,(%esp)
0827cb43 +0x0f9:  call   08111b3e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1050>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1050
0827cb48 +0x0fe:  jmp    0827cc37 <+0x1ed>
0827cb4d +0x103:  lea    -0x54(%ebp),%eax
0827cb50 +0x106:  mov    %eax,(%esp)
0827cb53 +0x109:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0827cb58 +0x10e:  mov    (%eax),%eax
0827cb5a +0x110:  mov    %eax,%ebx
0827cb5c +0x112:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827cb61 +0x117:  mov    %ebx,0x4(%esp)
0827cb65 +0x11b:  mov    %eax,(%esp)
0827cb68 +0x11e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827cb6d +0x123:  mov    %eax,-0x1c(%ebp)
0827cb70 +0x126:  cmpl   $0x0,-0x1c(%ebp)
0827cb74 +0x12a:  je     0827cb8f <+0x145>
0827cb76 +0x12c:  mov    -0x1c(%ebp),%eax
0827cb79 +0x12f:  mov    (%eax),%eax
0827cb7b +0x131:  add    $0x60,%eax
0827cb7e +0x134:  mov    (%eax),%edx
0827cb80 +0x136:  mov    -0x38(%ebp),%eax
0827cb83 +0x139:  mov    %eax,0x4(%esp)
0827cb87 +0x13d:  mov    -0x1c(%ebp),%eax
0827cb8a +0x140:  mov    %eax,(%esp)
0827cb8d +0x143:  call   *%edx
0827cb8f +0x145:  lea    -0x54(%ebp),%eax
0827cb92 +0x148:  mov    %eax,(%esp)
0827cb95 +0x14b:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0827cb9a +0x150:  movzbl 0xd(%eax),%eax
0827cb9e +0x154:  movzbl %al,%edi
0827cba1 +0x157:  lea    -0x54(%ebp),%eax
0827cba4 +0x15a:  mov    %eax,(%esp)
0827cba7 +0x15d:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0827cbac +0x162:  movzbl 0xe(%eax),%eax
0827cbb0 +0x166:  movzbl %al,%esi
0827cbb3 +0x169:  lea    -0x54(%ebp),%eax
0827cbb6 +0x16c:  mov    %eax,(%esp)
0827cbb9 +0x16f:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0827cbbe +0x174:  movzwl 0x8(%eax),%eax
0827cbc2 +0x178:  movzwl %ax,%ebx
0827cbc5 +0x17b:  lea    -0x54(%ebp),%eax
0827cbc8 +0x17e:  mov    %eax,(%esp)
0827cbcb +0x181:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0827cbd0 +0x186:  mov    (%eax),%edx
0827cbd2 +0x188:  mov    0x8(%ebp),%eax
0827cbd5 +0x18b:  mov    (%eax),%eax
0827cbd7 +0x18d:  movl   $0x0,0x20(%esp)
0827cbdf +0x195:  mov    -0x30(%ebp),%ecx
0827cbe2 +0x198:  mov    %ecx,0x1c(%esp)
0827cbe6 +0x19c:  mov    -0x34(%ebp),%ecx
0827cbe9 +0x19f:  mov    %ecx,0x18(%esp)
0827cbed +0x1a3:  mov    %edi,0x14(%esp)
0827cbf1 +0x1a7:  mov    %esi,0x10(%esp)
0827cbf5 +0x1ab:  mov    %ebx,0xc(%esp)
0827cbf9 +0x1af:  mov    %edx,0x8(%esp)
0827cbfd +0x1b3:  mov    -0x3c(%ebp),%edx
0827cc00 +0x1b6:  mov    %edx,0x4(%esp)
0827cc04 +0x1ba:  mov    %eax,(%esp)
0827cc07 +0x1bd:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
0827cc0c +0x1c2:  cmpl   $0x0,-0x1c(%ebp)
0827cc10 +0x1c6:  je     0827cc2c <+0x1e2>
0827cc12 +0x1c8:  mov    -0x1c(%ebp),%eax
0827cc15 +0x1cb:  mov    (%eax),%eax
0827cc17 +0x1cd:  add    $0x60,%eax
0827cc1a +0x1d0:  mov    (%eax),%edx
0827cc1c +0x1d2:  movl   $0x0,0x4(%esp)
0827cc24 +0x1da:  mov    -0x1c(%ebp),%eax
0827cc27 +0x1dd:  mov    %eax,(%esp)
0827cc2a +0x1e0:  call   *%edx
0827cc2c +0x1e2:  lea    -0x54(%ebp),%eax
0827cc2f +0x1e5:  mov    %eax,(%esp)
0827cc32 +0x1e8:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
0827cc37 +0x1ed:  lea    -0x58(%ebp),%eax
0827cc3a +0x1f0:  mov    %eax,0x4(%esp)
0827cc3e +0x1f4:  lea    -0x54(%ebp),%eax
0827cc41 +0x1f7:  mov    %eax,(%esp)
0827cc44 +0x1fa:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
0827cc49 +0x1ff:  test   %al,%al
0827cc4b +0x201:  jne    0827cb4d <+0x103>
0827cc51 +0x207:  mov    -0x38(%ebp),%ebx
0827cc54 +0x20a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827cc59 +0x20f:  mov    0xc(%eax),%eax
0827cc5c +0x212:  mov    %ebx,0x4(%esp)
0827cc60 +0x216:  mov    %eax,(%esp)
0827cc63 +0x219:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
0827cc68 +0x21e:  mov    %eax,-0x2c(%ebp)
0827cc6b +0x221:  cmpl   $0x0,-0x2c(%ebp)
0827cc6f +0x225:  je     0827ccbd <+0x273>
0827cc71 +0x227:  mov    -0x2c(%ebp),%eax
0827cc74 +0x22a:  mov    %eax,0x4(%esp)
0827cc78 +0x22e:  mov    -0x3c(%ebp),%eax
0827cc7b +0x231:  mov    %eax,(%esp)
0827cc7e +0x234:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
0827cc83 +0x239:  xor    $0x1,%eax
0827cc86 +0x23c:  test   %al,%al
0827cc88 +0x23e:  je     0827ccbd <+0x273>
0827cc8a +0x240:  mov    -0x2c(%ebp),%eax
0827cc8d +0x243:  mov    %eax,0x4(%esp)
0827cc91 +0x247:  mov    -0x3c(%ebp),%eax
0827cc94 +0x24a:  mov    %eax,(%esp)
0827cc97 +0x24d:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
0827cc9c +0x252:  movl   $0x0,0xc(%esp)
0827cca4 +0x25a:  mov    -0x28(%ebp),%eax
0827cca7 +0x25d:  mov    %eax,0x8(%esp)
0827ccab +0x261:  mov    -0x2c(%ebp),%eax
0827ccae +0x264:  mov    %eax,0x4(%esp)
0827ccb2 +0x268:  mov    -0x3c(%ebp),%eax
0827ccb5 +0x26b:  mov    %eax,(%esp)
0827ccb8 +0x26e:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0827ccbd +0x273:  mov    -0x3c(%ebp),%eax
0827ccc0 +0x276:  mov    %eax,(%esp)
0827ccc3 +0x279:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0827ccc8 +0x27e:  jmp    0827cce5 <+0x29b>
0827ccca +0x280:  mov    %edx,%ebx
0827cccc +0x282:  mov    %eax,%esi
0827ccce +0x284:  lea    -0x50(%ebp),%eax
0827ccd1 +0x287:  mov    %eax,(%esp)
0827ccd4 +0x28a:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0827ccd9 +0x28f:  mov    %esi,%eax
0827ccdb +0x291:  mov    %ebx,%edx
0827ccdd +0x293:  mov    %eax,(%esp)
0827cce0 +0x296:  call   08ae3750 <_Unwind_Resume>
0827cce5 +0x29b:  lea    -0x50(%ebp),%eax
0827cce8 +0x29e:  mov    %eax,(%esp)
0827cceb +0x2a1:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
0827ccf0 +0x2a6:  lea    -0xc(%ebp),%esp
0827ccf3 +0x2a9:  add    $0x0,%esp
0827ccf6 +0x2ac:  pop    %ebx
0827ccf7 +0x2ad:  pop    %esi
0827ccf8 +0x2ae:  pop    %edi
0827ccf9 +0x2af:  pop    %ebp
0827ccfa +0x2b0:  ret
0827ccfb +0x2b1:  nop
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_booster @ 0x827ca4a

/* SpecialItemHandler::respond_special_item_booster(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_booster
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  uchar uVar1;
  uchar uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  CDataManager *pCVar6;
  int *piVar7;
  int iVar8;
  ulong *puVar9;
  int iVar10;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_58 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_54 [12];
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  CUser *local_40;
  int local_3c;
  vector *local_38;
  stCeraShopItemParam_t *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  CStackableItem *local_24;
  int *local_20;
  
  local_40 = *(CUser **)param_3;
  local_3c = *(int *)(param_3 + 4);
  local_38 = *(vector **)(param_3 + 0xc);
  local_34 = *(stCeraShopItemParam_t **)(param_3 + 0x10);
  local_30 = *(int *)(param_3 + 0x14);
  local_2c = *(int *)(param_3 + 0x18);
  WongWork::CCeraShop::setOriginalItem(*(CCeraShop **)param_1,local_3c);
  WongWork::CCeraShop::_onBuySpecialItem(*(CCeraShop **)param_1,local_40,6,local_3c);
  iVar8 = local_3c;
  local_28 = 0;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_24 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            (local_54);
                    /* try { // try from 0827caf5 to 0827ccc7 has its CatchHandler @ 0827ccca */
  CStackableItem::getBoosterItem(local_24,(vector *)local_54);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
  __gnu_cxx::
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_58,local_48);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
  __gnu_cxx::
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_44);
  while( true ) {
    bVar4 = __gnu_cxx::operator!=(local_58,local_5c);
    iVar8 = local_3c;
    if (!bVar4) break;
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                    ::operator->(local_58);
    iVar8 = *piVar7;
    pCVar6 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar6,iVar8);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0x60))(local_20,local_3c);
    }
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar1 = *(uchar *)(iVar8 + 0xd);
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar2 = *(uchar *)(iVar8 + 0xe);
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar3 = *(ushort *)(iVar8 + 8);
    puVar9 = (ulong *)__gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_58);
    WongWork::CCeraShop::_processAdditionalItem
              (*(CCeraShop **)param_1,local_40,*puVar9,uVar3,uVar2,uVar1,local_38,local_34,'\0');
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0x60))(local_20,0);
    }
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::operator++(local_58);
  }
  iVar10 = G_CDataManager();
  local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar10 + 0xc),iVar8);
  if (local_30 != 0) {
    cVar5 = CUser::IsRestrictedGoods(local_40,local_30);
    if (cVar5 != '\x01') {
      CUser::SetRestrictedGoods(local_40,local_30);
      WongWork::CCeraShop::SaveFeaturedIdx(local_40,local_30,local_2c,0);
    }
  }
  CUser::SaveInventory(local_40);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            (local_54);
  return;
}
```
