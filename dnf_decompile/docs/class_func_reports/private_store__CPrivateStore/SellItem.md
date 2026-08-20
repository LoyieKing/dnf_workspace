# SellItem

`_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii`

`private_store::CPrivateStore::SellItem(int, Inven_Item&, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c97e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c97e2  _ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii
#           private_store::CPrivateStore::SellItem(int, Inven_Item&, int, int, int, int)
# range [0x085c97e2, 0x085c9b8b]
085c97e2 +0x000:  push   %ebp
085c97e3 +0x001:  mov    %esp,%ebp
085c97e5 +0x003:  push   %edi
085c97e6 +0x004:  push   %esi
085c97e7 +0x005:  push   %ebx
085c97e8 +0x006:  sub    $0x19c,%esp
085c97ee +0x00c:  mov    0x18(%ebp),%eax
085c97f1 +0x00f:  mov    0x14(%ebp),%edx
085c97f4 +0x012:  mov    %edx,%ecx
085c97f6 +0x014:  sub    %eax,%ecx
085c97f8 +0x016:  mov    %ecx,%eax
085c97fa +0x018:  mov    %eax,-0x20(%ebp)
085c97fd +0x01b:  mov    0x10(%ebp),%eax
085c9800 +0x01e:  mov    %eax,(%esp)
085c9803 +0x021:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085c9808 +0x026:  test   %al,%al
085c980a +0x028:  je     085c981c <+0x3a>
085c980c +0x02a:  movl   $0x0,0x20(%ebp)
085c9813 +0x031:  movl   $0x1,0x1c(%ebp)
085c981a +0x038:  jmp    085c9822 <+0x40>
085c981c +0x03a:  mov    0x1c(%ebp),%eax
085c981f +0x03d:  sub    %eax,0x20(%ebp)
085c9822 +0x040:  mov    0x8(%ebp),%eax
085c9825 +0x043:  mov    0x30(%eax),%eax
085c9828 +0x046:  mov    %eax,(%esp)
085c982b +0x049:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c9830 +0x04e:  mov    %eax,%ebx
085c9832 +0x050:  mov    0x8(%ebp),%eax
085c9835 +0x053:  mov    0x2c(%eax),%eax
085c9838 +0x056:  mov    %eax,(%esp)
085c983b +0x059:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c9840 +0x05e:  mov    0x8(%ebp),%edx
085c9843 +0x061:  mov    0x2c(%edx),%edx
085c9846 +0x064:  add    $0x79700,%edx
085c984c +0x06a:  mov    %ebx,0x1c(%esp)
085c9850 +0x06e:  mov    %eax,0x18(%esp)
085c9854 +0x072:  movl   $0x16,0x14(%esp)
085c985c +0x07a:  mov    0x20(%ebp),%eax
085c985f +0x07d:  mov    %eax,0x10(%esp)
085c9863 +0x081:  mov    0x1c(%ebp),%eax
085c9866 +0x084:  mov    %eax,0xc(%esp)
085c986a +0x088:  mov    0x10(%ebp),%eax
085c986d +0x08b:  mov    %eax,0x8(%esp)
085c9871 +0x08f:  movl   $0x1,0x4(%esp)
085c9879 +0x097:  mov    %edx,(%esp)
085c987c +0x09a:  call   0868412a <_ZN15cUserHistoryLog19PrivateStoreItemDelE10INVEN_TYPERK10Inven_Itemii14eItemDelReasonPKcS6_>  ; cUserHistoryLog::PrivateStoreItemDel(INVEN_TYPE, Inven_Item const&, int, int, eItemDelReason, char const*, char const*)
085c9881 +0x09f:  mov    0x8(%ebp),%eax
085c9884 +0x0a2:  mov    %eax,(%esp)
085c9887 +0x0a5:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c988c +0x0aa:  test   %al,%al
085c988e +0x0ac:  je     085c9b1d <+0x33b>
085c9894 +0x0b2:  lea    -0x172(%ebp),%edx
085c989a +0x0b8:  mov    $0x100,%ebx
085c989f +0x0bd:  mov    $0x0,%eax
085c98a4 +0x0c2:  mov    %edx,%ecx
085c98a6 +0x0c4:  and    $0x2,%ecx
085c98a9 +0x0c7:  test   %ecx,%ecx
085c98ab +0x0c9:  je     085c98b6 <+0xd4>
085c98ad +0x0cb:  mov    %ax,(%edx)
085c98b0 +0x0ce:  add    $0x2,%edx
085c98b3 +0x0d1:  sub    $0x2,%ebx
085c98b6 +0x0d4:  mov    %ebx,%ecx
085c98b8 +0x0d6:  shr    $0x2,%ecx
085c98bb +0x0d9:  mov    %edx,%edi
085c98bd +0x0db:  rep stos %eax,%es:(%edi)
085c98bf +0x0dd:  mov    %edi,%edx
085c98c1 +0x0df:  mov    %ebx,%ecx
085c98c3 +0x0e1:  and    $0x2,%ecx
085c98c6 +0x0e4:  test   %ecx,%ecx
085c98c8 +0x0e6:  je     085c98d0 <+0xee>
085c98ca +0x0e8:  mov    %ax,(%edx)
085c98cd +0x0eb:  add    $0x2,%edx
085c98d0 +0x0ee:  mov    %ebx,%ecx
085c98d2 +0x0f0:  and    $0x1,%ecx
085c98d5 +0x0f3:  test   %ecx,%ecx
085c98d7 +0x0f5:  je     085c98de <+0xfc>
085c98d9 +0x0f7:  mov    %al,(%edx)
085c98db +0x0f9:  add    $0x1,%edx
085c98de +0x0fc:  lea    -0x35(%ebp),%eax
085c98e1 +0x0ff:  mov    $0x15,%edx
085c98e6 +0x104:  mov    $0x0,%ecx
085c98eb +0x109:  mov    %eax,%ebx
085c98ed +0x10b:  and    $0x1,%ebx
085c98f0 +0x10e:  test   %ebx,%ebx
085c98f2 +0x110:  je     085c98fc <+0x11a>
085c98f4 +0x112:  mov    %cl,(%eax)
085c98f6 +0x114:  add    $0x1,%eax
085c98f9 +0x117:  sub    $0x1,%edx
085c98fc +0x11a:  mov    %eax,%ebx
085c98fe +0x11c:  and    $0x2,%ebx
085c9901 +0x11f:  test   %ebx,%ebx
085c9903 +0x121:  je     085c990e <+0x12c>
085c9905 +0x123:  mov    %cx,(%eax)
085c9908 +0x126:  add    $0x2,%eax
085c990b +0x129:  sub    $0x2,%edx
085c990e +0x12c:  mov    %edx,%esi
085c9910 +0x12e:  and    $0xfffffffc,%esi
085c9913 +0x131:  mov    $0x0,%ebx
085c9918 +0x136:  mov    %ecx,(%eax,%ebx,1)
085c991b +0x139:  add    $0x4,%ebx
085c991e +0x13c:  cmp    %esi,%ebx
085c9920 +0x13e:  jb     085c9918 <+0x136>
085c9922 +0x140:  add    %ebx,%eax
085c9924 +0x142:  mov    %edx,%ebx
085c9926 +0x144:  and    $0x2,%ebx
085c9929 +0x147:  test   %ebx,%ebx
085c992b +0x149:  je     085c9933 <+0x151>
085c992d +0x14b:  mov    %cx,(%eax)
085c9930 +0x14e:  add    $0x2,%eax
085c9933 +0x151:  and    $0x1,%edx
085c9936 +0x154:  test   %edx,%edx
085c9938 +0x156:  je     085c993f <+0x15d>
085c993a +0x158:  mov    %cl,(%eax)
085c993c +0x15a:  add    $0x1,%eax
085c993f +0x15d:  movl   $0x0,0xc(%esp)
085c9947 +0x165:  movl   $"game_server_msg_183",0x8(%esp)
085c994f +0x16d:  movl   $0x4,0x4(%esp)
085c9957 +0x175:  movl   $&g_scriptStringManager_,(%esp)
085c995e +0x17c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085c9963 +0x181:  movl   $0x14,0x8(%esp)
085c996b +0x189:  mov    %eax,0x4(%esp)
085c996f +0x18d:  lea    -0x35(%ebp),%eax
085c9972 +0x190:  mov    %eax,(%esp)
085c9975 +0x193:  call   0807d8d0 <_init+0x1c8>
085c997a +0x198:  mov    0x10(%ebp),%eax
085c997d +0x19b:  mov    0x2(%eax),%eax
085c9980 +0x19e:  mov    %eax,%ebx
085c9982 +0x1a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c9987 +0x1a5:  mov    %ebx,0x4(%esp)
085c998b +0x1a9:  mov    %eax,(%esp)
085c998e +0x1ac:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c9993 +0x1b1:  mov    %eax,-0x1c(%ebp)
085c9996 +0x1b4:  mov    -0x1c(%ebp),%eax
085c9999 +0x1b7:  mov    %eax,(%esp)
085c999c +0x1ba:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c99a1 +0x1bf:  xor    $0x1,%eax
085c99a4 +0x1c2:  test   %al,%al
085c99a6 +0x1c4:  je     085c9a1f <+0x23d>
085c99a8 +0x1c6:  mov    -0x1c(%ebp),%eax
085c99ab +0x1c9:  mov    %eax,(%esp)
085c99ae +0x1cc:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
085c99b3 +0x1d1:  mov    %eax,%esi
085c99b5 +0x1d3:  mov    -0x1c(%ebp),%eax
085c99b8 +0x1d6:  mov    %eax,(%esp)
085c99bb +0x1d9:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
085c99c0 +0x1de:  mov    %eax,%ebx
085c99c2 +0x1e0:  movl   $0x0,0xc(%esp)
085c99ca +0x1e8:  movl   $"game_server_msg_184",0x8(%esp)
085c99d2 +0x1f0:  movl   $0x4,0x4(%esp)
085c99da +0x1f8:  movl   $&g_scriptStringManager_,(%esp)
085c99e1 +0x1ff:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085c99e6 +0x204:  mov    -0x20(%ebp),%edx
085c99e9 +0x207:  mov    %edx,0x1c(%esp)
085c99ed +0x20b:  mov    %esi,0x18(%esp)
085c99f1 +0x20f:  mov    0x18(%ebp),%edx
085c99f4 +0x212:  mov    %edx,0x14(%esp)
085c99f8 +0x216:  mov    0x14(%ebp),%edx
085c99fb +0x219:  mov    %edx,0x10(%esp)
085c99ff +0x21d:  mov    %ebx,0xc(%esp)
085c9a03 +0x221:  mov    %eax,0x8(%esp)
085c9a07 +0x225:  movl   $0xff,0x4(%esp)
085c9a0f +0x22d:  lea    -0x172(%ebp),%eax
085c9a15 +0x233:  mov    %eax,(%esp)
085c9a18 +0x236:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
085c9a1d +0x23b:  jmp    085c9a9b <+0x2b9>
085c9a1f +0x23d:  mov    -0x1c(%ebp),%eax
085c9a22 +0x240:  mov    %eax,(%esp)
085c9a25 +0x243:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
085c9a2a +0x248:  mov    %eax,%esi
085c9a2c +0x24a:  mov    -0x1c(%ebp),%eax
085c9a2f +0x24d:  mov    %eax,(%esp)
085c9a32 +0x250:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
085c9a37 +0x255:  mov    %eax,%ebx
085c9a39 +0x257:  movl   $0x0,0xc(%esp)
085c9a41 +0x25f:  movl   $"game_server_msg_185",0x8(%esp)
085c9a49 +0x267:  movl   $0x4,0x4(%esp)
085c9a51 +0x26f:  movl   $&g_scriptStringManager_,(%esp)
085c9a58 +0x276:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
085c9a5d +0x27b:  mov    -0x20(%ebp),%edx
085c9a60 +0x27e:  mov    %edx,0x20(%esp)
085c9a64 +0x282:  mov    %esi,0x1c(%esp)
085c9a68 +0x286:  mov    0x18(%ebp),%edx
085c9a6b +0x289:  mov    %edx,0x18(%esp)
085c9a6f +0x28d:  mov    0x14(%ebp),%edx
085c9a72 +0x290:  mov    %edx,0x14(%esp)
085c9a76 +0x294:  mov    0x1c(%ebp),%edx
085c9a79 +0x297:  mov    %edx,0x10(%esp)
085c9a7d +0x29b:  mov    %ebx,0xc(%esp)
085c9a81 +0x29f:  mov    %eax,0x8(%esp)
085c9a85 +0x2a3:  movl   $0xff,0x4(%esp)
085c9a8d +0x2ab:  lea    -0x172(%ebp),%eax
085c9a93 +0x2b1:  mov    %eax,(%esp)
085c9a96 +0x2b4:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
085c9a9b +0x2b9:  lea    -0x72(%ebp),%eax
085c9a9e +0x2bc:  mov    %eax,(%esp)
085c9aa1 +0x2bf:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085c9aa6 +0x2c4:  mov    0x8(%ebp),%eax
085c9aa9 +0x2c7:  mov    0x2c(%eax),%eax
085c9aac +0x2ca:  mov    %eax,(%esp)
085c9aaf +0x2cd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085c9ab4 +0x2d2:  mov    %eax,%ebx
085c9ab6 +0x2d4:  lea    -0x172(%ebp),%eax
085c9abc +0x2da:  mov    %eax,(%esp)
085c9abf +0x2dd:  call   0807e3b0 <_init+0xca8>
085c9ac4 +0x2e2:  mov    %eax,%esi
085c9ac6 +0x2e4:  mov    0x8(%ebp),%eax
085c9ac9 +0x2e7:  mov    0x2c(%eax),%eax
085c9acc +0x2ea:  mov    %eax,(%esp)
085c9acf +0x2ed:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c9ad4 +0x2f2:  mov    -0x20(%ebp),%edx
085c9ad7 +0x2f5:  movl   $0x0,0x24(%esp)
085c9adf +0x2fd:  movl   $0x0,0x20(%esp)
085c9ae7 +0x305:  mov    %ebx,0x1c(%esp)
085c9aeb +0x309:  movl   $0x0,0x18(%esp)
085c9af3 +0x311:  mov    %esi,0x14(%esp)
085c9af7 +0x315:  lea    -0x172(%ebp),%ecx
085c9afd +0x31b:  mov    %ecx,0x10(%esp)
085c9b01 +0x31f:  mov    %eax,0xc(%esp)
085c9b05 +0x323:  mov    %edx,0x8(%esp)
085c9b09 +0x327:  lea    -0x72(%ebp),%eax
085c9b0c +0x32a:  mov    %eax,0x4(%esp)
085c9b10 +0x32e:  lea    -0x35(%ebp),%eax
085c9b13 +0x331:  mov    %eax,(%esp)
085c9b16 +0x334:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
085c9b1b +0x339:  jmp    085c9b52 <+0x370>
085c9b1d +0x33b:  mov    0x8(%ebp),%eax
085c9b20 +0x33e:  mov    0x2c(%eax),%eax
085c9b23 +0x341:  mov    %eax,(%esp)
085c9b26 +0x344:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085c9b2b +0x349:  movl   $0x0,0x10(%esp)
085c9b33 +0x351:  movl   $0x1,0xc(%esp)
085c9b3b +0x359:  movl   $0xb,0x8(%esp)
085c9b43 +0x361:  mov    -0x20(%ebp),%edx
085c9b46 +0x364:  mov    %edx,0x4(%esp)
085c9b4a +0x368:  mov    %eax,(%esp)
085c9b4d +0x36b:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085c9b52 +0x370:  mov    0x10(%ebp),%eax
085c9b55 +0x373:  mov    0x7(%eax),%ecx
085c9b58 +0x376:  mov    0x10(%ebp),%eax
085c9b5b +0x379:  mov    0x2(%eax),%eax
085c9b5e +0x37c:  mov    %eax,%edx
085c9b60 +0x37e:  mov    0x8(%ebp),%eax
085c9b63 +0x381:  mov    0x2c(%eax),%eax
085c9b66 +0x384:  mov    0x796f8(%eax),%eax
085c9b6c +0x38a:  mov    %ecx,0x8(%esp)
085c9b70 +0x38e:  mov    %edx,0x4(%esp)
085c9b74 +0x392:  mov    %eax,(%esp)
085c9b77 +0x395:  call   084ba23a <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii>  ; HistoryLog::WriteSellItem(_IO_FILE*, int, int)
085c9b7c +0x39a:  mov    $0x1,%eax
085c9b81 +0x39f:  add    $0x19c,%esp
085c9b87 +0x3a5:  pop    %ebx
085c9b88 +0x3a6:  pop    %esi
085c9b89 +0x3a7:  pop    %edi
085c9b8a +0x3a8:  pop    %ebp
085c9b8b +0x3a9:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::SellItem @ 0x85c97e2

/* WARNING: Removing unreachable block (ram,0x085c98d9) */
/* private_store::CPrivateStore::SellItem(int, Inven_Item&, int, int, int, int) */

undefined4 __thiscall
private_store::CPrivateStore::SellItem
          (CPrivateStore *this,int param_1,Inven_Item *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  CDataManager *this_00;
  size_t sVar7;
  CInventory *pCVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_176 [256];
  Inven_Item local_76 [61];
  char local_39;
  char local_38 [20];
  int local_24;
  CItem *local_20;
  
  bVar12 = 0;
  local_24 = param_3 - param_4;
  cVar3 = Inven_Item::isEquipableItemType(param_2);
  if (cVar3 == '\0') {
    param_6 = param_6 - param_5;
  }
  else {
    param_6 = 0;
    param_5 = 1;
  }
  uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
  uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cUserHistoryLog::PrivateStoreItemDel
            ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),1,param_2,param_5,param_6,0x16,
             uVar5,uVar4);
  cVar3 = isDollCreated(this);
  if (cVar3 == '\0') {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    CInventory::gain_money(pCVar8,local_24,0xb,1,0);
  }
  else {
    pcVar6 = local_176;
    uVar9 = 0x100;
    bVar11 = ((uint)pcVar6 & 2) != 0;
    if (bVar11) {
      local_176[0] = '\0';
      local_176[1] = '\0';
      pcVar6 = local_176 + 2;
      uVar9 = 0xfe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar12 * -2 + 1) * 4;
    }
    if (bVar11) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    pcVar6 = &local_39;
    uVar9 = 0x15;
    bVar11 = ((uint)pcVar6 & 1) != 0;
    if (bVar11) {
      local_39 = '\0';
      pcVar6 = local_38;
      uVar9 = 0x14;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar9 = uVar9 - 2;
    }
    uVar10 = 0;
    do {
      pcVar1 = pcVar6 + uVar10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar10 = uVar10 + 4;
    } while (uVar10 < (uVar9 & 0xfffffffc));
    pcVar6 = pcVar6 + uVar10;
    if ((uVar9 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar11) {
      *pcVar6 = '\0';
    }
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_183",(bool *)0x0);
    strncpy(&local_39,pcVar6,0x14);
    iVar2 = *(int *)(param_2 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this_00,iVar2);
    cVar3 = CItem::is_stackable(local_20);
    if (cVar3 == '\x01') {
      uVar4 = CItem::GetItemName(local_20);
      uVar5 = CItem::GetItemName(local_20);
      pcVar6 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_185",(bool *)0x0);
      OS_API::snprintf(local_176,0xff,pcVar6,uVar5,param_5,param_3,param_4,uVar4,local_24);
    }
    else {
      uVar4 = CItem::GetItemName(local_20);
      uVar5 = CItem::GetItemName(local_20);
      pcVar6 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_184",(bool *)0x0);
      OS_API::snprintf(local_176,0xff,pcVar6,uVar5,param_3,param_4,uVar4,local_24);
    }
    Inven_Item::Inven_Item(local_76);
    uVar4 = CUser::GetServerGroup(*(CUser **)(this + 0x2c));
    sVar7 = strlen(local_176);
    uVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_39,local_76,local_24,uVar5,local_176,sVar7,0,uVar4,0,0);
  }
  HistoryLog::WriteSellItem
            (*(_IO_FILE **)(*(int *)(this + 0x2c) + 0x796f8),*(int *)(param_2 + 2),
             *(int *)(param_2 + 7));
  return 1;
}
```
