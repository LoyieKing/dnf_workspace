# _processBoosterSelect

`_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc`

`WongWork::CCeraShop::_processBoosterSelect(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327894` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327894  _ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc
#           WongWork::CCeraShop::_processBoosterSelect(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char)
# range [0x08327894, 0x08327bb5]
08327894 +0x000:  push   %ebp
08327895 +0x001:  mov    %esp,%ebp
08327897 +0x003:  push   %edi
08327898 +0x004:  push   %esi
08327899 +0x005:  push   %ebx
0832789a +0x006:  sub    $0x8c,%esp
083278a0 +0x00c:  mov    0x20(%ebp),%ecx
083278a3 +0x00f:  mov    0x2c(%ebp),%edx
083278a6 +0x012:  mov    0x30(%ebp),%eax
083278a9 +0x015:  mov    %cl,-0x4c(%ebp)
083278ac +0x018:  mov    %dl,-0x50(%ebp)
083278af +0x01b:  mov    %al,-0x54(%ebp)
083278b2 +0x01e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083278b7 +0x023:  mov    0x10(%ebp),%edx
083278ba +0x026:  mov    %edx,0x4(%esp)
083278be +0x02a:  mov    %eax,(%esp)
083278c1 +0x02d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
083278c6 +0x032:  mov    %eax,-0x28(%ebp)
083278c9 +0x035:  cmpl   $0x0,-0x28(%ebp)
083278cd +0x039:  je     08327ba4 <+0x310>
083278d3 +0x03f:  lea    -0x3c(%ebp),%eax
083278d6 +0x042:  mov    %eax,(%esp)
083278d9 +0x045:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
083278de +0x04a:  lea    -0x2e(%ebp),%eax
083278e1 +0x04d:  lea    -0x54(%ebp),%edx
083278e4 +0x050:  mov    %edx,0x8(%esp)
083278e8 +0x054:  lea    -0x50(%ebp),%edx
083278eb +0x057:  mov    %edx,0x4(%esp)
083278ef +0x05b:  mov    %eax,(%esp)
083278f2 +0x05e:  call   08237973 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd01d>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd01d
083278f7 +0x063:  sub    $0x4,%esp
083278fa +0x066:  mov    -0x28(%ebp),%eax
083278fd +0x069:  lea    0x24c(%eax),%ecx
08327903 +0x06f:  lea    -0x40(%ebp),%eax
08327906 +0x072:  lea    -0x2e(%ebp),%edx
08327909 +0x075:  mov    %edx,0x8(%esp)
0832790d +0x079:  mov    %ecx,0x4(%esp)
08327911 +0x07d:  mov    %eax,(%esp)
08327914 +0x080:  call   082379b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd05c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd05c
08327919 +0x085:  sub    $0x4,%esp
0832791c +0x088:  mov    -0x28(%ebp),%eax
0832791f +0x08b:  lea    0x24c(%eax),%edx
08327925 +0x091:  lea    -0x2c(%ebp),%eax
08327928 +0x094:  mov    %edx,0x4(%esp)
0832792c +0x098:  mov    %eax,(%esp)
0832792f +0x09b:  call   082379de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd088>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd088
08327934 +0x0a0:  sub    $0x4,%esp
08327937 +0x0a3:  lea    -0x2c(%ebp),%eax
0832793a +0x0a6:  mov    %eax,0x4(%esp)
0832793e +0x0aa:  lea    -0x40(%ebp),%eax
08327941 +0x0ad:  mov    %eax,(%esp)
08327944 +0x0b0:  call   0823d7de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x895c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x895c
08327949 +0x0b5:  test   %al,%al
0832794b +0x0b7:  je     0832795c <+0xc8>
0832794d +0x0b9:  mov    $0x0,%esi
08327952 +0x0be:  mov    $0x0,%ebx
08327957 +0x0c3:  jmp    08327b95 <+0x301>
0832795c +0x0c8:  lea    -0x40(%ebp),%eax
0832795f +0x0cb:  mov    %eax,(%esp)
08327962 +0x0ce:  call   08237a18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd0c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd0c2
08327967 +0x0d3:  add    $0x4,%eax
0832796a +0x0d6:  mov    %eax,-0x24(%ebp)
0832796d +0x0d9:  movl   $0x0,-0x20(%ebp)
08327974 +0x0e0:  jmp    083279ef <+0x15b>
08327976 +0x0e2:  movl   $0x0,-0x1c(%ebp)
0832797d +0x0e9:  jmp    083279d6 <+0x142>
0832797f +0x0eb:  mov    -0x1c(%ebp),%eax
08327982 +0x0ee:  mov    %eax,0x4(%esp)
08327986 +0x0f2:  mov    -0x24(%ebp),%eax
08327989 +0x0f5:  mov    %eax,(%esp)
0832798c +0x0f8:  call   08328410 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x369>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x369
08327991 +0x0fd:  mov    (%eax),%ebx
08327993 +0x0ff:  mov    -0x20(%ebp),%eax
08327996 +0x102:  mov    %eax,0x4(%esp)
0832799a +0x106:  mov    0x24(%ebp),%eax
0832799d +0x109:  mov    %eax,(%esp)
083279a0 +0x10c:  call   08328422 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x37b>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x37b
083279a5 +0x111:  mov    0x2(%eax),%eax
083279a8 +0x114:  cmp    %eax,%ebx
083279aa +0x116:  sete   %al
083279ad +0x119:  test   %al,%al
083279af +0x11b:  je     083279d2 <+0x13e>
083279b1 +0x11d:  mov    -0x1c(%ebp),%eax
083279b4 +0x120:  mov    %eax,0x4(%esp)
083279b8 +0x124:  mov    -0x24(%ebp),%eax
083279bb +0x127:  mov    %eax,(%esp)
083279be +0x12a:  call   08328410 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x369>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x369
083279c3 +0x12f:  mov    %eax,0x4(%esp)
083279c7 +0x133:  lea    -0x3c(%ebp),%eax
083279ca +0x136:  mov    %eax,(%esp)
083279cd +0x139:  call   08328436 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x38f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x38f
083279d2 +0x13e:  addl   $0x1,-0x1c(%ebp)
083279d6 +0x142:  mov    -0x24(%ebp),%eax
083279d9 +0x145:  mov    %eax,(%esp)
083279dc +0x148:  call   08237a6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd114>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd114
083279e1 +0x14d:  cmp    -0x1c(%ebp),%eax
083279e4 +0x150:  seta   %al
083279e7 +0x153:  test   %al,%al
083279e9 +0x155:  jne    0832797f <+0xeb>
083279eb +0x157:  addl   $0x1,-0x20(%ebp)
083279ef +0x15b:  mov    0x24(%ebp),%eax
083279f2 +0x15e:  mov    %eax,(%esp)
083279f5 +0x161:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
083279fa +0x166:  cmp    -0x20(%ebp),%eax
083279fd +0x169:  setg   %al
08327a00 +0x16c:  test   %al,%al
08327a02 +0x16e:  jne    08327976 <+0xe2>
08327a08 +0x174:  mov    0x24(%ebp),%eax
08327a0b +0x177:  mov    %eax,(%esp)
08327a0e +0x17a:  call   08152ad0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2405>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2405
08327a13 +0x17f:  lea    -0x44(%ebp),%eax
08327a16 +0x182:  lea    -0x3c(%ebp),%edx
08327a19 +0x185:  mov    %edx,0x4(%esp)
08327a1d +0x189:  mov    %eax,(%esp)
08327a20 +0x18c:  call   08111b1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x102c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x102c
08327a25 +0x191:  sub    $0x4,%esp
08327a28 +0x194:  lea    -0x48(%ebp),%eax
08327a2b +0x197:  lea    -0x3c(%ebp),%edx
08327a2e +0x19a:  mov    %edx,0x4(%esp)
08327a32 +0x19e:  mov    %eax,(%esp)
08327a35 +0x1a1:  call   08111b58 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x106a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x106a
08327a3a +0x1a6:  sub    $0x4,%esp
08327a3d +0x1a9:  jmp    08327ae2 <+0x24e>
08327a42 +0x1ae:  lea    -0x44(%ebp),%eax
08327a45 +0x1b1:  mov    %eax,(%esp)
08327a48 +0x1b4:  call   083284ec <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x445>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x445
08327a4d +0x1b9:  movzbl 0xa(%eax),%eax
08327a51 +0x1bd:  movzbl %al,%eax
08327a54 +0x1c0:  mov    %eax,-0x5c(%ebp)
08327a57 +0x1c3:  lea    -0x44(%ebp),%eax
08327a5a +0x1c6:  mov    %eax,(%esp)
08327a5d +0x1c9:  call   083284ec <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x445>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x445
08327a62 +0x1ce:  movzbl 0xd(%eax),%eax
08327a66 +0x1d2:  movzbl %al,%eax
08327a69 +0x1d5:  mov    %eax,-0x58(%ebp)
08327a6c +0x1d8:  lea    -0x44(%ebp),%eax
08327a6f +0x1db:  mov    %eax,(%esp)
08327a72 +0x1de:  call   083284ec <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x445>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x445
08327a77 +0x1e3:  movzbl 0xe(%eax),%eax
08327a7b +0x1e7:  movzbl %al,%edi
08327a7e +0x1ea:  lea    -0x44(%ebp),%eax
08327a81 +0x1ed:  mov    %eax,(%esp)
08327a84 +0x1f0:  call   083284ec <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x445>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x445
08327a89 +0x1f5:  movzwl 0x8(%eax),%eax
08327a8d +0x1f9:  movzwl %ax,%ebx
08327a90 +0x1fc:  lea    -0x44(%ebp),%eax
08327a93 +0x1ff:  mov    %eax,(%esp)
08327a96 +0x202:  call   083284ec <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x445>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x445
08327a9b +0x207:  mov    (%eax),%eax
08327a9d +0x209:  mov    -0x5c(%ebp),%edx
08327aa0 +0x20c:  mov    %edx,0x20(%esp)
08327aa4 +0x210:  mov    0x28(%ebp),%edx
08327aa7 +0x213:  mov    %edx,0x1c(%esp)
08327aab +0x217:  mov    0x24(%ebp),%edx
08327aae +0x21a:  mov    %edx,0x18(%esp)
08327ab2 +0x21e:  mov    -0x58(%ebp),%edx
08327ab5 +0x221:  mov    %edx,0x14(%esp)
08327ab9 +0x225:  mov    %edi,0x10(%esp)
08327abd +0x229:  mov    %ebx,0xc(%esp)
08327ac1 +0x22d:  mov    %eax,0x8(%esp)
08327ac5 +0x231:  mov    0xc(%ebp),%eax
08327ac8 +0x234:  mov    %eax,0x4(%esp)
08327acc +0x238:  mov    0x8(%ebp),%eax
08327acf +0x23b:  mov    %eax,(%esp)
08327ad2 +0x23e:  call   083267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>  ; WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
08327ad7 +0x243:  lea    -0x44(%ebp),%eax
08327ada +0x246:  mov    %eax,(%esp)
08327add +0x249:  call   083284d6 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x42f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x42f
08327ae2 +0x24e:  lea    -0x48(%ebp),%eax
08327ae5 +0x251:  mov    %eax,0x4(%esp)
08327ae9 +0x255:  lea    -0x44(%ebp),%eax
08327aec +0x258:  mov    %eax,(%esp)
08327aef +0x25b:  call   083284a9 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x402>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x402
08327af4 +0x260:  test   %al,%al
08327af6 +0x262:  jne    08327a42 <+0x1ae>
08327afc +0x268:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08327b01 +0x26d:  mov    0xc(%eax),%eax
08327b04 +0x270:  mov    0x10(%ebp),%edx
08327b07 +0x273:  mov    %edx,0x4(%esp)
08327b0b +0x277:  mov    %eax,(%esp)
08327b0e +0x27a:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08327b13 +0x27f:  mov    %eax,0x14(%ebp)
08327b16 +0x282:  cmpl   $0x0,0x14(%ebp)
08327b1a +0x286:  je     08327b68 <+0x2d4>
08327b1c +0x288:  mov    0x14(%ebp),%eax
08327b1f +0x28b:  mov    %eax,0x4(%esp)
08327b23 +0x28f:  mov    0xc(%ebp),%eax
08327b26 +0x292:  mov    %eax,(%esp)
08327b29 +0x295:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
08327b2e +0x29a:  xor    $0x1,%eax
08327b31 +0x29d:  test   %al,%al
08327b33 +0x29f:  je     08327b68 <+0x2d4>
08327b35 +0x2a1:  mov    0x14(%ebp),%eax
08327b38 +0x2a4:  mov    %eax,0x4(%esp)
08327b3c +0x2a8:  mov    0xc(%ebp),%eax
08327b3f +0x2ab:  mov    %eax,(%esp)
08327b42 +0x2ae:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
08327b47 +0x2b3:  movl   $0x0,0xc(%esp)
08327b4f +0x2bb:  mov    0x1c(%ebp),%eax
08327b52 +0x2be:  mov    %eax,0x8(%esp)
08327b56 +0x2c2:  mov    0x14(%ebp),%eax
08327b59 +0x2c5:  mov    %eax,0x4(%esp)
08327b5d +0x2c9:  mov    0xc(%ebp),%eax
08327b60 +0x2cc:  mov    %eax,(%esp)
08327b63 +0x2cf:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
08327b68 +0x2d4:  mov    0xc(%ebp),%eax
08327b6b +0x2d7:  mov    %eax,(%esp)
08327b6e +0x2da:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
08327b73 +0x2df:  mov    $0x1,%ebx
08327b78 +0x2e4:  jmp    08327b95 <+0x301>
08327b7a +0x2e6:  mov    %edx,%ebx
08327b7c +0x2e8:  mov    %eax,%esi
08327b7e +0x2ea:  lea    -0x3c(%ebp),%eax
08327b81 +0x2ed:  mov    %eax,(%esp)
08327b84 +0x2f0:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08327b89 +0x2f5:  mov    %esi,%eax
08327b8b +0x2f7:  mov    %ebx,%edx
08327b8d +0x2f9:  mov    %eax,(%esp)
08327b90 +0x2fc:  call   08ae3750 <_Unwind_Resume>
08327b95 +0x301:  lea    -0x3c(%ebp),%eax
08327b98 +0x304:  mov    %eax,(%esp)
08327b9b +0x307:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08327ba0 +0x30c:  test   %ebx,%ebx
08327ba2 +0x30e:  je     08327ba9 <+0x315>
08327ba4 +0x310:  mov    $0x1,%esi
08327ba9 +0x315:  mov    %esi,%eax
08327bab +0x317:  lea    -0xc(%ebp),%esp
08327bae +0x31a:  add    $0x0,%esp
08327bb1 +0x31d:  pop    %ebx
08327bb2 +0x31e:  pop    %esi
08327bb3 +0x31f:  pop    %edi
08327bb4 +0x320:  pop    %ebp
08327bb5 +0x321:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_processBoosterSelect @ 0x8327894

/* WongWork::CCeraShop::_processBoosterSelect(CUser*, int, int, int&, long, bool,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, char, char) */

undefined4
WongWork::CCeraShop::_processBoosterSelect
          (CUser *param_1,int param_2,int param_3,int *param_4,long param_5,bool param_6,
          vector *param_7,stCeraShopItemParam_t *param_8,char param_9,char param_10)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  CDataManager *this;
  int iVar7;
  int *piVar8;
  int iVar9;
  stStackableBoosterItemInfo_t *psVar10;
  uint uVar11;
  ulong *puVar12;
  undefined4 unaff_ESI;
  undefined3 in_stack_00000019;
  undefined3 in_stack_00000025;
  char local_54 [4];
  undefined1 local_50;
  __normal_iterator local_4c [4];
  __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_48 [4];
  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
  local_44 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [14];
  char local_32 [2];
  map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
  local_30 [4];
  int local_2c;
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *local_28;
  uint local_24;
  uint local_20;
  
  local_50 = SUB41(param_7,0);
  local_54[0] = param_10;
  this = (CDataManager *)G_CDataManager();
  local_2c = CDataManager::find_item(this,param_3);
  if (local_2c != 0) {
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
              (local_40);
                    /* try { // try from 083278f2 to 08327b72 has its CatchHandler @ 08327b7a */
    std::make_pair<char&,char&>(local_32,local_54);
    std::
    map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
    ::find(local_44);
    std::
    map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
    ::end(local_30);
    cVar5 = std::
            _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
            ::operator==(local_44,(_Rb_tree_const_iterator *)local_30);
    if (cVar5 == '\0') {
      iVar7 = std::
              _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
              ::operator->(local_44);
      local_28 = (vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                  *)(iVar7 + 4);
      local_24 = 0;
      while (iVar7 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                               ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8),
            (int)local_24 < iVar7) {
        local_20 = 0;
        while (uVar11 = std::
                        vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                        ::size(local_28), local_20 < uVar11) {
          piVar8 = (int *)std::
                          vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                          ::operator[](local_28,local_20);
          iVar7 = *piVar8;
          iVar9 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,local_24);
          if (iVar7 == *(int *)(iVar9 + 2)) {
            psVar10 = (stStackableBoosterItemInfo_t *)
                      std::
                      vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                      ::operator[](local_28,local_20);
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            push_back(local_40,psVar10);
          }
          local_20 = local_20 + 1;
        }
        local_24 = local_24 + 1;
      }
      std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
                ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      while (bVar6 = __gnu_cxx::operator!=(local_48,local_4c), bVar6) {
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar1 = *(uchar *)(iVar7 + 10);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar2 = *(uchar *)(iVar7 + 0xd);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar3 = *(uchar *)(iVar7 + 0xe);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar4 = *(ushort *)(iVar7 + 8);
        puVar12 = (ulong *)__gnu_cxx::
                           __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                           ::operator->(local_48);
        _processAdditionalItem
                  ((CCeraShop *)param_1,(CUser *)param_2,*puVar12,uVar4,uVar3,uVar2,
                   (vector *)param_8,_param_9,uVar1);
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_48);
      }
      iVar7 = G_CDataManager();
      iVar7 = CItemList::GetRestrictCode(*(CItemList **)(iVar7 + 0xc),param_3);
      if ((iVar7 != 0) &&
         (cVar5 = CUser::IsRestrictedGoods((CUser *)param_2,iVar7), cVar5 != '\x01')) {
        CUser::SetRestrictedGoods((CUser *)param_2,iVar7);
        SaveFeaturedIdx((CUser *)param_2,iVar7,_param_6,0);
      }
      CUser::SaveInventory((CUser *)param_2);
      bVar6 = true;
    }
    else {
      unaff_ESI = 0;
      bVar6 = false;
    }
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
              (local_40);
    if (!bVar6) {
      return unaff_ESI;
    }
  }
  return 1;
}
```
