# BuyMileageItem

`_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE`

`Arad_MileageProcess::BuyMileageItem(CUser*, int, unsigned long, unsigned short, int, long, int, char, char, int, int, int, char const*, WongWork::CCeraShop::stCeraShopItemParam_t&)`

| 类 | 地址 |
|---|---|
| `Arad_MileageProcess` | `0x0819dd4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819dd4e  _ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE
#           Arad_MileageProcess::BuyMileageItem(CUser*, int, unsigned long, unsigned short, int, long, int, char, char, int, int, int, char const*, WongWork::CCeraShop::stCeraShopItemParam_t&)
# range [0x0819dd4e, 0x0819e21f]
0819dd4e +0x000:  push   %ebp
0819dd4f +0x001:  mov    %esp,%ebp
0819dd51 +0x003:  push   %edi
0819dd52 +0x004:  push   %esi
0819dd53 +0x005:  push   %ebx
0819dd54 +0x006:  sub    $0xfc,%esp
0819dd5a +0x00c:  mov    0x18(%ebp),%ecx
0819dd5d +0x00f:  mov    0x28(%ebp),%edx
0819dd60 +0x012:  mov    0x2c(%ebp),%eax
0819dd63 +0x015:  mov    %cx,-0x8c(%ebp)
0819dd6a +0x01c:  mov    %dl,-0x90(%ebp)
0819dd70 +0x022:  mov    %al,-0x94(%ebp)
0819dd76 +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819dd7b +0x02d:  mov    0x10(%ebp),%edx
0819dd7e +0x030:  mov    %edx,0x4(%esp)
0819dd82 +0x034:  mov    %eax,(%esp)
0819dd85 +0x037:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
0819dd8a +0x03c:  mov    %eax,-0x2c(%ebp)
0819dd8d +0x03f:  cmpl   $0x0,-0x2c(%ebp)
0819dd91 +0x043:  jne    0819dd9d <+0x4f>
0819dd93 +0x045:  mov    $0x15,%ebx
0819dd98 +0x04a:  jmp    0819e213 <+0x4c5>
0819dd9d +0x04f:  movl   $0x0,-0x28(%ebp)
0819dda4 +0x056:  lea    -0x7d(%ebp),%eax
0819dda7 +0x059:  mov    %eax,(%esp)
0819ddaa +0x05c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0819ddaf +0x061:  mov    -0x2c(%ebp),%eax
0819ddb2 +0x064:  mov    %eax,(%esp)
0819ddb5 +0x067:  call   0817a03c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xba>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xba
0819ddba +0x06c:  cmp    $0x1,%eax
0819ddbd +0x06f:  setne  %al
0819ddc0 +0x072:  test   %al,%al
0819ddc2 +0x074:  je     0819de14 <+0xc6>
0819ddc4 +0x076:  mov    0x14(%ebp),%ebx
0819ddc7 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819ddcc +0x07e:  mov    %ebx,0x4(%esp)
0819ddd0 +0x082:  mov    %eax,(%esp)
0819ddd3 +0x085:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0819ddd8 +0x08a:  mov    %eax,-0x28(%ebp)
0819dddb +0x08d:  cmpl   $0x0,-0x28(%ebp)
0819dddf +0x091:  jne    0819ddeb <+0x9d>
0819dde1 +0x093:  mov    $0x15,%ebx
0819dde6 +0x098:  jmp    0819e213 <+0x4c5>
0819ddeb +0x09d:  mov    -0x28(%ebp),%eax
0819ddee +0x0a0:  mov    (%eax),%eax
0819ddf0 +0x0a2:  add    $0x8,%eax
0819ddf3 +0x0a5:  mov    (%eax),%edx
0819ddf5 +0x0a7:  lea    -0x7d(%ebp),%eax
0819ddf8 +0x0aa:  mov    %eax,0x4(%esp)
0819ddfc +0x0ae:  mov    -0x28(%ebp),%eax
0819ddff +0x0b1:  mov    %eax,(%esp)
0819de02 +0x0b4:  call   *%edx
0819de04 +0x0b6:  mov    0x14(%ebp),%eax
0819de07 +0x0b9:  mov    %eax,-0x7b(%ebp)
0819de0a +0x0bc:  movzwl -0x8c(%ebp),%eax
0819de11 +0x0c3:  mov    %eax,-0x76(%ebp)
0819de14 +0x0c6:  mov    0xc(%ebp),%eax
0819de17 +0x0c9:  mov    %eax,(%esp)
0819de1a +0x0cc:  call   08650a94 <_ZN5CUser10GetMileageEv>  ; CUser::GetMileage()
0819de1f +0x0d1:  cmp    0x30(%ebp),%eax
0819de22 +0x0d4:  setl   %al
0819de25 +0x0d7:  test   %al,%al
0819de27 +0x0d9:  je     0819de33 <+0xe5>
0819de29 +0x0db:  mov    $0x3ed,%ebx
0819de2e +0x0e0:  jmp    0819e213 <+0x4c5>
0819de33 +0x0e5:  movl   $0x0,-0x30(%ebp)
0819de3a +0x0ec:  movl   $0x0,-0x34(%ebp)
0819de41 +0x0f3:  lea    -0x40(%ebp),%eax
0819de44 +0x0f6:  mov    %eax,(%esp)
0819de47 +0x0f9:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
0819de4c +0x0fe:  mov    -0x2c(%ebp),%eax
0819de4f +0x101:  mov    %eax,(%esp)
0819de52 +0x104:  call   0817a03c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xba>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xba
0819de57 +0x109:  mov    %eax,-0x24(%ebp)
0819de5a +0x10c:  cmpl   $0x9,-0x24(%ebp)
0819de5e +0x110:  ja     0819e13b <+0x3ed>
0819de64 +0x116:  mov    -0x24(%ebp),%eax
0819de67 +0x119:  shl    $0x2,%eax
0819de6a +0x11c:  mov    &data#fef8f14d(.rodata)(%eax),%eax
0819de70 +0x122:  jmp    *%eax
0819de72 +0x124:  movsbl -0x94(%ebp),%edi
0819de79 +0x12b:  movsbl -0x90(%ebp),%esi
0819de80 +0x132:  mov    0x14(%ebp),%ebx
0819de83 +0x135:  mov    0xc(%ebp),%eax
0819de86 +0x138:  mov    %eax,(%esp)
0819de89 +0x13b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819de8e +0x140:  movl   $0x0,0x24(%esp)
0819de96 +0x148:  movl   $0x0,0x20(%esp)
0819de9e +0x150:  movl   $0x0,0x1c(%esp)
0819dea6 +0x158:  mov    0x3c(%ebp),%edx
0819dea9 +0x15b:  mov    %edx,0x18(%esp)
0819dead +0x15f:  mov    %edi,0x14(%esp)
0819deb1 +0x163:  mov    %esi,0x10(%esp)
0819deb5 +0x167:  movl   $0x0,0xc(%esp)
0819debd +0x16f:  mov    0x24(%ebp),%edx
0819dec0 +0x172:  mov    %edx,0x8(%esp)
0819dec4 +0x176:  mov    %ebx,0x4(%esp)
0819dec8 +0x17a:  mov    %eax,(%esp)
0819decb +0x17d:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0819ded0 +0x182:  mov    %eax,-0x20(%ebp)
0819ded3 +0x185:  cmpl   $0x0,-0x20(%ebp)
0819ded7 +0x189:  jns    0819df70 <+0x222>
0819dedd +0x18f:  movl   $0x0,0xc(%esp)
0819dee5 +0x197:  movl   $"game_server_msg_104",0x8(%esp)
0819deed +0x19f:  movl   $0x4,0x4(%esp)
0819def5 +0x1a7:  movl   $&g_scriptStringManager_,(%esp)
0819defc +0x1ae:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0819df01 +0x1b3:  mov    %eax,-0x1c(%ebp)
0819df04 +0x1b6:  mov    -0x1c(%ebp),%eax
0819df07 +0x1b9:  mov    %eax,(%esp)
0819df0a +0x1bc:  call   0807e3b0 <_init+0xca8>
0819df0f +0x1c1:  mov    %eax,-0x98(%ebp)
0819df15 +0x1c7:  movsbl -0x94(%ebp),%edi
0819df1c +0x1ce:  movsbl -0x90(%ebp),%esi
0819df23 +0x1d5:  mov    0x14(%ebp),%ebx
0819df26 +0x1d8:  mov    0xc(%ebp),%eax
0819df29 +0x1db:  mov    %eax,(%esp)
0819df2c +0x1de:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819df31 +0x1e3:  mov    -0x98(%ebp),%edx
0819df37 +0x1e9:  mov    %edx,0x20(%esp)
0819df3b +0x1ed:  mov    -0x1c(%ebp),%edx
0819df3e +0x1f0:  mov    %edx,0x1c(%esp)
0819df42 +0x1f4:  mov    0x3c(%ebp),%edx
0819df45 +0x1f7:  mov    %edx,0x18(%esp)
0819df49 +0x1fb:  mov    %edi,0x14(%esp)
0819df4d +0x1ff:  mov    %esi,0x10(%esp)
0819df51 +0x203:  mov    0x24(%ebp),%edx
0819df54 +0x206:  mov    %edx,0xc(%esp)
0819df58 +0x20a:  mov    %ebx,0x8(%esp)
0819df5c +0x20e:  mov    %eax,0x4(%esp)
0819df60 +0x212:  mov    0xc(%ebp),%eax
0819df63 +0x215:  mov    %eax,(%esp)
0819df66 +0x218:  call   08556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char const*, char const*, int)
0819df6b +0x21d:  jmp    0819e13b <+0x3ed>
0819df70 +0x222:  mov    -0x20(%ebp),%eax
0819df73 +0x225:  mov    %eax,0xc(%esp)
0819df77 +0x229:  movl   $0x1,0x8(%esp)
0819df7f +0x231:  movl   $0x1,0x4(%esp)
0819df87 +0x239:  mov    0xc(%ebp),%eax
0819df8a +0x23c:  mov    %eax,(%esp)
0819df8d +0x23f:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0819df92 +0x244:  jmp    0819e13b <+0x3ed>
0819df97 +0x249:  movzwl -0x8c(%ebp),%edx
0819df9e +0x250:  mov    0x8(%ebp),%eax
0819dfa1 +0x253:  mov    (%eax),%eax
0819dfa3 +0x255:  movl   $0x1,0xc(%esp)
0819dfab +0x25d:  mov    %edx,0x8(%esp)
0819dfaf +0x261:  mov    0xc(%ebp),%edx
0819dfb2 +0x264:  mov    %edx,0x4(%esp)
0819dfb6 +0x268:  mov    %eax,(%esp)
0819dfb9 +0x26b:  call   08325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>  ; WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)
0819dfbe +0x270:  jmp    0819e13b <+0x3ed>
0819dfc3 +0x275:  mov    0x8(%ebp),%eax
0819dfc6 +0x278:  mov    (%eax),%eax
0819dfc8 +0x27a:  mov    0x40(%ebp),%edx
0819dfcb +0x27d:  mov    %edx,0x60(%esp)
0819dfcf +0x281:  lea    -0x40(%ebp),%edx
0819dfd2 +0x284:  mov    %edx,0x5c(%esp)
0819dfd6 +0x288:  movl   $0x1,0x58(%esp)
0819dfde +0x290:  movl   $0x0,0x54(%esp)
0819dfe6 +0x298:  mov    0x20(%ebp),%edx
0819dfe9 +0x29b:  mov    %edx,0x50(%esp)
0819dfed +0x29f:  lea    -0x34(%ebp),%edx
0819dff0 +0x2a2:  mov    %edx,0x4c(%esp)
0819dff4 +0x2a6:  mov    0x1c(%ebp),%edx
0819dff7 +0x2a9:  mov    %edx,0x48(%esp)
0819dffb +0x2ad:  mov    -0x7d(%ebp),%edx
0819dffe +0x2b0:  mov    %edx,0x8(%esp)
0819e002 +0x2b4:  mov    -0x79(%ebp),%edx
0819e005 +0x2b7:  mov    %edx,0xc(%esp)
0819e009 +0x2bb:  mov    -0x75(%ebp),%edx
0819e00c +0x2be:  mov    %edx,0x10(%esp)
0819e010 +0x2c2:  mov    -0x71(%ebp),%edx
0819e013 +0x2c5:  mov    %edx,0x14(%esp)
0819e017 +0x2c9:  mov    -0x6d(%ebp),%edx
0819e01a +0x2cc:  mov    %edx,0x18(%esp)
0819e01e +0x2d0:  mov    -0x69(%ebp),%edx
0819e021 +0x2d3:  mov    %edx,0x1c(%esp)
0819e025 +0x2d7:  mov    -0x65(%ebp),%edx
0819e028 +0x2da:  mov    %edx,0x20(%esp)
0819e02c +0x2de:  mov    -0x61(%ebp),%edx
0819e02f +0x2e1:  mov    %edx,0x24(%esp)
0819e033 +0x2e5:  mov    -0x5d(%ebp),%edx
0819e036 +0x2e8:  mov    %edx,0x28(%esp)
0819e03a +0x2ec:  mov    -0x59(%ebp),%edx
0819e03d +0x2ef:  mov    %edx,0x2c(%esp)
0819e041 +0x2f3:  mov    -0x55(%ebp),%edx
0819e044 +0x2f6:  mov    %edx,0x30(%esp)
0819e048 +0x2fa:  mov    -0x51(%ebp),%edx
0819e04b +0x2fd:  mov    %edx,0x34(%esp)
0819e04f +0x301:  mov    -0x4d(%ebp),%edx
0819e052 +0x304:  mov    %edx,0x38(%esp)
0819e056 +0x308:  mov    -0x49(%ebp),%edx
0819e059 +0x30b:  mov    %edx,0x3c(%esp)
0819e05d +0x30f:  mov    -0x45(%ebp),%edx
0819e060 +0x312:  mov    %edx,0x40(%esp)
0819e064 +0x316:  movzbl -0x41(%ebp),%edx
0819e068 +0x31a:  mov    %dl,0x44(%esp)
0819e06c +0x31e:  mov    0xc(%ebp),%edx
0819e06f +0x321:  mov    %edx,0x4(%esp)
0819e073 +0x325:  mov    %eax,(%esp)
0819e076 +0x328:  call   08325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>  ; WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
0819e07b +0x32d:  jmp    0819e13b <+0x3ed>
0819e080 +0x332:  mov    -0x28(%ebp),%eax
0819e083 +0x335:  mov    %eax,(%esp)
0819e086 +0x338:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0819e08b +0x33d:  mov    %eax,%ebx
0819e08d +0x33f:  mov    -0x28(%ebp),%eax
0819e090 +0x342:  mov    %eax,(%esp)
0819e093 +0x345:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0819e098 +0x34a:  mov    0x8(%ebp),%edx
0819e09b +0x34d:  mov    (%edx),%edx
0819e09d +0x34f:  mov    %ebx,0x58(%esp)
0819e0a1 +0x353:  mov    %eax,0x54(%esp)
0819e0a5 +0x357:  movl   $0x1,0x50(%esp)
0819e0ad +0x35f:  lea    -0x34(%ebp),%eax
0819e0b0 +0x362:  mov    %eax,0x4c(%esp)
0819e0b4 +0x366:  lea    -0x30(%ebp),%eax
0819e0b7 +0x369:  mov    %eax,0x48(%esp)
0819e0bb +0x36d:  mov    -0x7d(%ebp),%eax
0819e0be +0x370:  mov    %eax,0x8(%esp)
0819e0c2 +0x374:  mov    -0x79(%ebp),%eax
0819e0c5 +0x377:  mov    %eax,0xc(%esp)
0819e0c9 +0x37b:  mov    -0x75(%ebp),%eax
0819e0cc +0x37e:  mov    %eax,0x10(%esp)
0819e0d0 +0x382:  mov    -0x71(%ebp),%eax
0819e0d3 +0x385:  mov    %eax,0x14(%esp)
0819e0d7 +0x389:  mov    -0x6d(%ebp),%eax
0819e0da +0x38c:  mov    %eax,0x18(%esp)
0819e0de +0x390:  mov    -0x69(%ebp),%eax
0819e0e1 +0x393:  mov    %eax,0x1c(%esp)
0819e0e5 +0x397:  mov    -0x65(%ebp),%eax
0819e0e8 +0x39a:  mov    %eax,0x20(%esp)
0819e0ec +0x39e:  mov    -0x61(%ebp),%eax
0819e0ef +0x3a1:  mov    %eax,0x24(%esp)
0819e0f3 +0x3a5:  mov    -0x5d(%ebp),%eax
0819e0f6 +0x3a8:  mov    %eax,0x28(%esp)
0819e0fa +0x3ac:  mov    -0x59(%ebp),%eax
0819e0fd +0x3af:  mov    %eax,0x2c(%esp)
0819e101 +0x3b3:  mov    -0x55(%ebp),%eax
0819e104 +0x3b6:  mov    %eax,0x30(%esp)
0819e108 +0x3ba:  mov    -0x51(%ebp),%eax
0819e10b +0x3bd:  mov    %eax,0x34(%esp)
0819e10f +0x3c1:  mov    -0x4d(%ebp),%eax
0819e112 +0x3c4:  mov    %eax,0x38(%esp)
0819e116 +0x3c8:  mov    -0x49(%ebp),%eax
0819e119 +0x3cb:  mov    %eax,0x3c(%esp)
0819e11d +0x3cf:  mov    -0x45(%ebp),%eax
0819e120 +0x3d2:  mov    %eax,0x40(%esp)
0819e124 +0x3d6:  movzbl -0x41(%ebp),%eax
0819e128 +0x3da:  mov    %al,0x44(%esp)
0819e12c +0x3de:  mov    0xc(%ebp),%eax
0819e12f +0x3e1:  mov    %eax,0x4(%esp)
0819e133 +0x3e5:  mov    %edx,(%esp)
0819e136 +0x3e8:  call   08325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>  ; WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)
0819e13b +0x3ed:  mov    -0x34(%ebp),%eax
0819e13e +0x3f0:  test   %eax,%eax
0819e140 +0x3f2:  jne    0819e1e8 <+0x49a>
0819e146 +0x3f8:  mov    -0x30(%ebp),%edx
0819e149 +0x3fb:  movzwl -0x8c(%ebp),%eax
0819e150 +0x402:  lea    -0x40(%ebp),%ecx
0819e153 +0x405:  mov    %ecx,0x20(%esp)
0819e157 +0x409:  mov    0x38(%ebp),%ecx
0819e15a +0x40c:  mov    %ecx,0x1c(%esp)
0819e15e +0x410:  mov    0x34(%ebp),%ecx
0819e161 +0x413:  mov    %ecx,0x18(%esp)
0819e165 +0x417:  mov    0x30(%ebp),%ecx
0819e168 +0x41a:  mov    %ecx,0x14(%esp)
0819e16c +0x41e:  mov    %edx,0x10(%esp)
0819e170 +0x422:  mov    %eax,0xc(%esp)
0819e174 +0x426:  mov    0x10(%ebp),%eax
0819e177 +0x429:  mov    %eax,0x8(%esp)
0819e17b +0x42d:  mov    0xc(%ebp),%eax
0819e17e +0x430:  mov    %eax,0x4(%esp)
0819e182 +0x434:  mov    0x8(%ebp),%eax
0819e185 +0x437:  mov    %eax,(%esp)
0819e188 +0x43a:  call   0819e220 <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE>  ; Arad_MileageProcess::BuySuccess(CUser*, int, int, int, int, int, int, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0819e18d +0x43f:  movzwl -0x8c(%ebp),%edx
0819e194 +0x446:  mov    0x8(%ebp),%eax
0819e197 +0x449:  mov    (%eax),%eax
0819e199 +0x44b:  movl   $0x0,0x28(%esp)
0819e1a1 +0x453:  movl   $0x0,0x20(%esp)
0819e1a9 +0x45b:  movl   $0x0,0x24(%esp)
0819e1b1 +0x463:  mov    %edx,0x1c(%esp)
0819e1b5 +0x467:  movl   $"mileage item",0x18(%esp)
0819e1bd +0x46f:  mov    0x3c(%ebp),%edx
0819e1c0 +0x472:  mov    %edx,0x14(%esp)
0819e1c4 +0x476:  mov    0x30(%ebp),%edx
0819e1c7 +0x479:  mov    %edx,0x10(%esp)
0819e1cb +0x47d:  mov    -0x24(%ebp),%edx
0819e1ce +0x480:  mov    %edx,0xc(%esp)
0819e1d2 +0x484:  mov    0x10(%ebp),%edx
0819e1d5 +0x487:  mov    %edx,0x8(%esp)
0819e1d9 +0x48b:  mov    0xc(%ebp),%edx
0819e1dc +0x48e:  mov    %edx,0x4(%esp)
0819e1e0 +0x492:  mov    %eax,(%esp)
0819e1e3 +0x495:  call   0817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>  ; ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned long long, char)
0819e1e8 +0x49a:  mov    -0x34(%ebp),%ebx
0819e1eb +0x49d:  lea    -0x40(%ebp),%eax
0819e1ee +0x4a0:  mov    %eax,(%esp)
0819e1f1 +0x4a3:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0819e1f6 +0x4a8:  jmp    0819e213 <+0x4c5>
0819e1f8 +0x4aa:  mov    %edx,%ebx
0819e1fa +0x4ac:  mov    %eax,%esi
0819e1fc +0x4ae:  lea    -0x40(%ebp),%eax
0819e1ff +0x4b1:  mov    %eax,(%esp)
0819e202 +0x4b4:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0819e207 +0x4b9:  mov    %esi,%eax
0819e209 +0x4bb:  mov    %ebx,%edx
0819e20b +0x4bd:  mov    %eax,(%esp)
0819e20e +0x4c0:  call   08ae3750 <_Unwind_Resume>
0819e213 +0x4c5:  mov    %ebx,%eax
0819e215 +0x4c7:  add    $0xfc,%esp
0819e21b +0x4cd:  pop    %ebx
0819e21c +0x4ce:  pop    %esi
0819e21d +0x4cf:  pop    %edi
0819e21e +0x4d0:  pop    %ebp
0819e21f +0x4d1:  ret
```

## 反编译 C

```c
// Arad_MileageProcess::BuyMileageItem @ 0x819dd4e

/* Arad_MileageProcess::BuyMileageItem(CUser*, int, unsigned long, unsigned short, int, long, int,
   char, char, int, int, int, char const*, WongWork::CCeraShop::stCeraShopItemParam_t&) */

int __thiscall
Arad_MileageProcess::BuyMileageItem
          (Arad_MileageProcess *this,CUser *param_1,int param_2,ulong param_3,ushort param_4,
          int param_5,long param_6,int param_7,char param_8,char param_9,int param_10,int param_11,
          int param_12,char *param_13,stCeraShopItemParam_t *param_14)

{
  int iVar1;
  CDataManager *this_00;
  CInventory *pCVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 local_81;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  uint uStack_7a;
  undefined1 uStack_76;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined1 local_45;
  vector<Inven_Item,std::allocator<Inven_Item>> local_44 [12];
  int local_38;
  int local_34;
  CCeraShopGoods *local_30;
  CItem *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  
  iVar1 = G_CDataManager();
  local_30 = (CCeraShopGoods *)CDataManager::FindGoods(iVar1);
  if (local_30 == (CCeraShopGoods *)0x0) {
    iVar1 = 0x15;
  }
  else {
    local_2c = (CItem *)0x0;
    Inven_Item::Inven_Item((Inven_Item *)&local_81);
    iVar1 = CCeraShopGoods::GetSubGroupIndex(local_30);
    uStack_7f = CONCAT22(uStack_7f._2_2_,(undefined2)uStack_7f);
    if (iVar1 != 1) {
      this_00 = (CDataManager *)G_CDataManager();
      local_2c = (CItem *)CDataManager::find_item(this_00,param_3);
      if (local_2c == (CItem *)0x0) {
        return 0x15;
      }
      (**(code **)(*(int *)local_2c + 8))(local_2c,&local_81);
      uStack_7a = (uint)param_4;
      uStack_7f = param_3;
    }
    iVar1 = CUser::GetMileage(param_1);
    if (iVar1 < param_10) {
      iVar1 = 0x3ed;
    }
    else {
      local_34 = 0;
      local_38 = 0;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_44);
      local_28 = CCeraShopGoods::GetSubGroupIndex(local_30);
      switch(local_28) {
      case 0:
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0819decb to 0819e1e7 has its CatchHandler @ 0819e1f8 */
        local_24 = CInventory::AddAvatarItem
                             (pCVar2,param_3,param_7,0,(int)param_8,(int)param_9,param_13,0,0,0);
        if (local_24 < 0) {
          local_20 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_104",(bool *)0x0);
          sVar3 = strlen(local_20);
          iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
                    (param_1,iVar1,param_3,param_7,param_8,param_9,param_13,local_20,sVar3);
        }
        else {
          CUser::SendUpdateItemList(param_1,1,1,local_24);
        }
        break;
      case 1:
        WongWork::CCeraShop::_processCoin(*(CUser **)this,(ushort)param_1,SUB21(param_4,0));
        break;
      case 2:
      case 7:
      case 9:
        WongWork::CCeraShop::_processItem
                  (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_7f,local_81),
                   CONCAT13((undefined1)uStack_7a,CONCAT12(uStack_7b,uStack_7f._2_2_)),
                   CONCAT13(uStack_76,uStack_7a._1_3_),local_75,local_71,local_6d,local_69,local_65,
                   local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,param_5,
                   &local_38,param_6,0,1,local_44,param_14);
        break;
      case 3:
        uVar4 = CItem::getExpirationDate(local_2c);
        uVar5 = CItem::getUsablePeriod(local_2c);
        WongWork::CCeraShop::_processCreature
                  (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_7f,local_81),
                   CONCAT13((undefined1)uStack_7a,CONCAT12(uStack_7b,uStack_7f._2_2_)),
                   CONCAT13(uStack_76,uStack_7a._1_3_),local_75,local_71,local_6d,local_69,local_65,
                   local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,&local_34
                   ,&local_38,1,uVar5,uVar4);
      }
      if (local_38 == 0) {
        BuySuccess(this,param_1,param_2,(uint)param_4,local_34,param_10,param_11,param_12,
                   (vector *)local_44);
        ItemVendingMachine::BillingRecord
                  (*(CUser **)this,(int)param_1,param_2,local_28,(char *)param_10,param_13,0x8ba66f4
                   ,(ulonglong)param_4,'\0');
      }
      iVar1 = local_38;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_44);
    }
  }
  return iVar1;
}
```
