# user_buy_item

`_ZN5Store13user_buy_itemEP5CUserii`

`Store::user_buy_item(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `Store` | `0x08618a44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08618a44  _ZN5Store13user_buy_itemEP5CUserii
#           Store::user_buy_item(CUser*, int, int)
# range [0x08618a44, 0x08618e9f]
08618a44 +0x000:  push   %ebp
08618a45 +0x001:  mov    %esp,%ebp
08618a47 +0x003:  push   %esi
08618a48 +0x004:  push   %ebx
08618a49 +0x005:  sub    $0xc0,%esp
08618a4f +0x00b:  mov    0xc(%ebp),%eax
08618a52 +0x00e:  mov    %eax,(%esp)
08618a55 +0x011:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08618a5a +0x016:  test   %al,%al
08618a5c +0x018:  je     08618a68 <+0x24>
08618a5e +0x01a:  mov    $0x13,%ebx
08618a63 +0x01f:  jmp    08618e93 <+0x44f>
08618a68 +0x024:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08618a6d +0x029:  mov    0xc(%eax),%eax
08618a70 +0x02c:  mov    0x10(%ebp),%edx
08618a73 +0x02f:  mov    %edx,0x4(%esp)
08618a77 +0x033:  mov    %eax,(%esp)
08618a7a +0x036:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08618a7f +0x03b:  mov    %eax,-0x18(%ebp)
08618a82 +0x03e:  cmpl   $0x0,-0x18(%ebp)
08618a86 +0x042:  jne    08618a92 <+0x4e>
08618a88 +0x044:  mov    $0x11,%ebx
08618a8d +0x049:  jmp    08618e93 <+0x44f>
08618a92 +0x04e:  mov    -0x18(%ebp),%eax
08618a95 +0x051:  mov    %eax,(%esp)
08618a98 +0x054:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08618a9d +0x059:  test   %al,%al
08618a9f +0x05b:  je     08618ab5 <+0x71>
08618aa1 +0x05d:  mov    -0x18(%ebp),%eax
08618aa4 +0x060:  mov    %eax,(%esp)
08618aa7 +0x063:  call   0822c84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ef4
08618aac +0x068:  imul   0x14(%ebp),%eax
08618ab0 +0x06c:  mov    %eax,-0x14(%ebp)
08618ab3 +0x06f:  jmp    08618ac3 <+0x7f>
08618ab5 +0x071:  mov    -0x18(%ebp),%eax
08618ab8 +0x074:  mov    %eax,(%esp)
08618abb +0x077:  call   0822c84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ef4
08618ac0 +0x07c:  mov    %eax,-0x14(%ebp)
08618ac3 +0x07f:  mov    0xc(%ebp),%eax
08618ac6 +0x082:  mov    %eax,(%esp)
08618ac9 +0x085:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08618ace +0x08a:  mov    %eax,(%esp)
08618ad1 +0x08d:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08618ad6 +0x092:  cmp    -0x14(%ebp),%eax
08618ad9 +0x095:  setl   %al
08618adc +0x098:  test   %al,%al
08618ade +0x09a:  je     08618aea <+0xa6>
08618ae0 +0x09c:  mov    $0xa,%ebx
08618ae5 +0x0a1:  jmp    08618e93 <+0x44f>
08618aea +0x0a6:  lea    -0x75(%ebp),%eax
08618aed +0x0a9:  mov    %eax,(%esp)
08618af0 +0x0ac:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08618af5 +0x0b1:  mov    0x10(%ebp),%eax
08618af8 +0x0b4:  mov    %eax,-0x73(%ebp)
08618afb +0x0b7:  mov    -0x18(%ebp),%eax
08618afe +0x0ba:  mov    %eax,(%esp)
08618b01 +0x0bd:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08618b06 +0x0c2:  test   %al,%al
08618b08 +0x0c4:  je     08618be0 <+0x19c>
08618b0e +0x0ca:  mov    -0x18(%ebp),%eax
08618b11 +0x0cd:  mov    (%eax),%eax
08618b13 +0x0cf:  add    $0xc,%eax
08618b16 +0x0d2:  mov    (%eax),%edx
08618b18 +0x0d4:  mov    -0x18(%ebp),%eax
08618b1b +0x0d7:  mov    %eax,(%esp)
08618b1e +0x0da:  call   *%edx
08618b20 +0x0dc:  cmp    $0x1,%eax
08618b23 +0x0df:  sete   %al
08618b26 +0x0e2:  test   %al,%al
08618b28 +0x0e4:  je     08618b2e <+0xea>
08618b2a +0x0e6:  movb   $0x3,-0x74(%ebp)
08618b2e +0x0ea:  mov    -0x18(%ebp),%eax
08618b31 +0x0ed:  mov    (%eax),%eax
08618b33 +0x0ef:  add    $0xc,%eax
08618b36 +0x0f2:  mov    (%eax),%edx
08618b38 +0x0f4:  mov    -0x18(%ebp),%eax
08618b3b +0x0f7:  mov    %eax,(%esp)
08618b3e +0x0fa:  call   *%edx
08618b40 +0x0fc:  cmp    $0x2,%eax
08618b43 +0x0ff:  sete   %al
08618b46 +0x102:  test   %al,%al
08618b48 +0x104:  je     08618b4e <+0x10a>
08618b4a +0x106:  movb   $0xa,-0x74(%ebp)
08618b4e +0x10a:  mov    -0x18(%ebp),%eax
08618b51 +0x10d:  mov    (%eax),%eax
08618b53 +0x10f:  add    $0xc,%eax
08618b56 +0x112:  mov    (%eax),%edx
08618b58 +0x114:  mov    -0x18(%ebp),%eax
08618b5b +0x117:  mov    %eax,(%esp)
08618b5e +0x11a:  call   *%edx
08618b60 +0x11c:  cmp    $0x8,%eax
08618b63 +0x11f:  sete   %al
08618b66 +0x122:  test   %al,%al
08618b68 +0x124:  je     08618b6e <+0x12a>
08618b6a +0x126:  movb   $0x4,-0x74(%ebp)
08618b6e +0x12a:  mov    0x14(%ebp),%eax
08618b71 +0x12d:  mov    %eax,0x4(%esp)
08618b75 +0x131:  lea    -0x75(%ebp),%eax
08618b78 +0x134:  mov    %eax,(%esp)
08618b7b +0x137:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08618b80 +0x13c:  cmpl   $0x3e7,0x14(%ebp)
08618b87 +0x143:  jle    08618bcd <+0x189>
08618b89 +0x145:  mov    -0x73(%ebp),%ebx
08618b8c +0x148:  movl   $0x5,0xc(%esp)
08618b94 +0x150:  movl   $0x3d,0x8(%esp)
08618b9c +0x158:  movl   $&_ZZN5Store13user_buy_itemEP5CUseriiE19__PRETTY_FUNCTION__,0x4(%esp)
08618ba4 +0x160:  lea    -0x28(%ebp),%eax
08618ba7 +0x163:  mov    %eax,(%esp)
08618baa +0x166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08618baf +0x16b:  mov    0x14(%ebp),%eax
08618bb2 +0x16e:  mov    %eax,0xc(%esp)
08618bb6 +0x172:  mov    %ebx,0x8(%esp)
08618bba +0x176:  movl   $"Store::user_buy_item,  ITEM #%d, %d",0x4(%esp)
08618bc2 +0x17e:  lea    -0x28(%ebp),%eax
08618bc5 +0x181:  mov    %eax,(%esp)
08618bc8 +0x184:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08618bcd +0x189:  movw   $0x0,-0x6a(%ebp)
08618bd3 +0x18f:  lea    -0x75(%ebp),%eax
08618bd6 +0x192:  mov    %eax,(%esp)
08618bd9 +0x195:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08618bde +0x19a:  jmp    08618c47 <+0x203>
08618be0 +0x19c:  mov    -0x18(%ebp),%eax
08618be3 +0x19f:  mov    %eax,-0xc(%ebp)
08618be6 +0x1a2:  mov    -0xc(%ebp),%eax
08618be9 +0x1a5:  mov    0x234(%eax),%eax
08618bef +0x1ab:  cmp    $0xb,%eax
08618bf2 +0x1ae:  jne    08618bfe <+0x1ba>
08618bf4 +0x1b0:  mov    $0x17,%ebx
08618bf9 +0x1b5:  jmp    08618e93 <+0x44f>
08618bfe +0x1ba:  mov    -0xc(%ebp),%eax
08618c01 +0x1bd:  mov    %eax,(%esp)
08618c04 +0x1c0:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08618c09 +0x1c5:  cmp    $0x3,%eax
08618c0c +0x1c8:  sete   %al
08618c0f +0x1cb:  test   %al,%al
08618c11 +0x1cd:  je     08618c17 <+0x1d3>
08618c13 +0x1cf:  movb   $0x1,-0x75(%ebp)
08618c17 +0x1d3:  movb   $0x1,-0x74(%ebp)
08618c1b +0x1d7:  mov    0x14(%ebp),%eax
08618c1e +0x1da:  mov    %eax,0x4(%esp)
08618c22 +0x1de:  lea    -0x75(%ebp),%eax
08618c25 +0x1e1:  mov    %eax,(%esp)
08618c28 +0x1e4:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08618c2d +0x1e9:  mov    -0xc(%ebp),%eax
08618c30 +0x1ec:  mov    %eax,(%esp)
08618c33 +0x1ef:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08618c38 +0x1f4:  mov    %ax,-0x6a(%ebp)
08618c3c +0x1f8:  lea    -0x75(%ebp),%eax
08618c3f +0x1fb:  mov    %eax,(%esp)
08618c42 +0x1fe:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08618c47 +0x203:  mov    0xc(%ebp),%eax
08618c4a +0x206:  mov    %eax,(%esp)
08618c4d +0x209:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08618c52 +0x20e:  movl   $0x0,0x4c(%esp)
08618c5a +0x216:  movl   $0x1,0x48(%esp)
08618c62 +0x21e:  movl   $0x0,0x44(%esp)
08618c6a +0x226:  mov    -0x75(%ebp),%edx
08618c6d +0x229:  mov    %edx,0x4(%esp)
08618c71 +0x22d:  mov    -0x71(%ebp),%edx
08618c74 +0x230:  mov    %edx,0x8(%esp)
08618c78 +0x234:  mov    -0x6d(%ebp),%edx
08618c7b +0x237:  mov    %edx,0xc(%esp)
08618c7f +0x23b:  mov    -0x69(%ebp),%edx
08618c82 +0x23e:  mov    %edx,0x10(%esp)
08618c86 +0x242:  mov    -0x65(%ebp),%edx
08618c89 +0x245:  mov    %edx,0x14(%esp)
08618c8d +0x249:  mov    -0x61(%ebp),%edx
08618c90 +0x24c:  mov    %edx,0x18(%esp)
08618c94 +0x250:  mov    -0x5d(%ebp),%edx
08618c97 +0x253:  mov    %edx,0x1c(%esp)
08618c9b +0x257:  mov    -0x59(%ebp),%edx
08618c9e +0x25a:  mov    %edx,0x20(%esp)
08618ca2 +0x25e:  mov    -0x55(%ebp),%edx
08618ca5 +0x261:  mov    %edx,0x24(%esp)
08618ca9 +0x265:  mov    -0x51(%ebp),%edx
08618cac +0x268:  mov    %edx,0x28(%esp)
08618cb0 +0x26c:  mov    -0x4d(%ebp),%edx
08618cb3 +0x26f:  mov    %edx,0x2c(%esp)
08618cb7 +0x273:  mov    -0x49(%ebp),%edx
08618cba +0x276:  mov    %edx,0x30(%esp)
08618cbe +0x27a:  mov    -0x45(%ebp),%edx
08618cc1 +0x27d:  mov    %edx,0x34(%esp)
08618cc5 +0x281:  mov    -0x41(%ebp),%edx
08618cc8 +0x284:  mov    %edx,0x38(%esp)
08618ccc +0x288:  mov    -0x3d(%ebp),%edx
08618ccf +0x28b:  mov    %edx,0x3c(%esp)
08618cd3 +0x28f:  movzbl -0x39(%ebp),%edx
08618cd7 +0x293:  mov    %dl,0x40(%esp)
08618cdb +0x297:  mov    %eax,(%esp)
08618cde +0x29a:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08618ce3 +0x29f:  mov    %eax,-0x10(%ebp)
08618ce6 +0x2a2:  cmpl   $0xffffffff,-0x10(%ebp)
08618cea +0x2a6:  jne    08618cf6 <+0x2b2>
08618cec +0x2a8:  mov    $0x4,%ebx
08618cf1 +0x2ad:  jmp    08618e93 <+0x44f>
08618cf6 +0x2b2:  mov    0xc(%ebp),%eax
08618cf9 +0x2b5:  mov    %eax,(%esp)
08618cfc +0x2b8:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08618d01 +0x2bd:  movl   $0x1,0xc(%esp)
08618d09 +0x2c5:  movl   $0x0,0x8(%esp)
08618d11 +0x2cd:  mov    -0x14(%ebp),%edx
08618d14 +0x2d0:  mov    %edx,0x4(%esp)
08618d18 +0x2d4:  mov    %eax,(%esp)
08618d1b +0x2d7:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08618d20 +0x2dc:  xor    $0x1,%eax
08618d23 +0x2df:  test   %al,%al
08618d25 +0x2e1:  je     08618d31 <+0x2ed>
08618d27 +0x2e3:  mov    $0xa,%ebx
08618d2c +0x2e8:  jmp    08618e93 <+0x44f>
08618d31 +0x2ed:  movl   $0x0,-0x2c(%ebp)
08618d38 +0x2f4:  mov    -0x6e(%ebp),%eax
08618d3b +0x2f7:  cwtl
08618d3c +0x2f8:  lea    -0x2c(%ebp),%edx
08618d3f +0x2fb:  mov    %edx,0x14(%esp)
08618d43 +0x2ff:  movl   $0x0,0x10(%esp)
08618d4b +0x307:  mov    %eax,0xc(%esp)
08618d4f +0x30b:  mov    -0x18(%ebp),%eax
08618d52 +0x30e:  mov    %eax,0x8(%esp)
08618d56 +0x312:  lea    -0x75(%ebp),%eax
08618d59 +0x315:  mov    %eax,0x4(%esp)
08618d5d +0x319:  mov    0x8(%ebp),%eax
08618d60 +0x31c:  mov    %eax,(%esp)
08618d63 +0x31f:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
08618d68 +0x324:  mov    -0x2c(%ebp),%eax
08618d6b +0x327:  mov    %eax,%ebx
08618d6d +0x329:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08618d72 +0x32e:  mov    %ebx,0xc(%esp)
08618d76 +0x332:  mov    0xc(%ebp),%edx
08618d79 +0x335:  mov    %edx,0x8(%esp)
08618d7d +0x339:  movl   $0x6,0x4(%esp)
08618d85 +0x341:  mov    %eax,(%esp)
08618d88 +0x344:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08618d8d +0x349:  mov    -0x14(%ebp),%ebx
08618d90 +0x34c:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08618d95 +0x351:  mov    %ebx,0xc(%esp)
08618d99 +0x355:  mov    0xc(%ebp),%edx
08618d9c +0x358:  mov    %edx,0x8(%esp)
08618da0 +0x35c:  movl   $0xd,0x4(%esp)
08618da8 +0x364:  mov    %eax,(%esp)
08618dab +0x367:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08618db0 +0x36c:  lea    -0x38(%ebp),%eax
08618db3 +0x36f:  mov    %eax,(%esp)
08618db6 +0x372:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08618dbb +0x377:  movl   $0x15,0x8(%esp)
08618dc3 +0x37f:  movl   $0x1,0x4(%esp)
08618dcb +0x387:  lea    -0x38(%ebp),%eax
08618dce +0x38a:  mov    %eax,(%esp)
08618dd1 +0x38d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08618dd6 +0x392:  movl   $0x1,0x4(%esp)
08618dde +0x39a:  lea    -0x38(%ebp),%eax
08618de1 +0x39d:  mov    %eax,(%esp)
08618de4 +0x3a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08618de9 +0x3a5:  mov    0xc(%ebp),%eax
08618dec +0x3a8:  mov    %eax,(%esp)
08618def +0x3ab:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08618df4 +0x3b0:  mov    %eax,(%esp)
08618df7 +0x3b3:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08618dfc +0x3b8:  mov    %eax,0x4(%esp)
08618e00 +0x3bc:  lea    -0x38(%ebp),%eax
08618e03 +0x3bf:  mov    %eax,(%esp)
08618e06 +0x3c2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08618e0b +0x3c7:  mov    -0x10(%ebp),%eax
08618e0e +0x3ca:  mov    %eax,0x4(%esp)
08618e12 +0x3ce:  lea    -0x38(%ebp),%eax
08618e15 +0x3d1:  mov    %eax,(%esp)
08618e18 +0x3d4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08618e1d +0x3d9:  mov    0x10(%ebp),%eax
08618e20 +0x3dc:  mov    %eax,0x4(%esp)
08618e24 +0x3e0:  lea    -0x38(%ebp),%eax
08618e27 +0x3e3:  mov    %eax,(%esp)
08618e2a +0x3e6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08618e2f +0x3eb:  mov    0x14(%ebp),%eax
08618e32 +0x3ee:  mov    %eax,0x4(%esp)
08618e36 +0x3f2:  lea    -0x38(%ebp),%eax
08618e39 +0x3f5:  mov    %eax,(%esp)
08618e3c +0x3f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08618e41 +0x3fd:  movl   $0x1,0x4(%esp)
08618e49 +0x405:  lea    -0x38(%ebp),%eax
08618e4c +0x408:  mov    %eax,(%esp)
08618e4f +0x40b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08618e54 +0x410:  lea    -0x38(%ebp),%eax
08618e57 +0x413:  mov    %eax,0x4(%esp)
08618e5b +0x417:  mov    0xc(%ebp),%eax
08618e5e +0x41a:  mov    %eax,(%esp)
08618e61 +0x41d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08618e66 +0x422:  mov    $0x0,%ebx
08618e6b +0x427:  lea    -0x38(%ebp),%eax
08618e6e +0x42a:  mov    %eax,(%esp)
08618e71 +0x42d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08618e76 +0x432:  jmp    08618e93 <+0x44f>
08618e78 +0x434:  mov    %edx,%ebx
08618e7a +0x436:  mov    %eax,%esi
08618e7c +0x438:  lea    -0x38(%ebp),%eax
08618e7f +0x43b:  mov    %eax,(%esp)
08618e82 +0x43e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08618e87 +0x443:  mov    %esi,%eax
08618e89 +0x445:  mov    %ebx,%edx
08618e8b +0x447:  mov    %eax,(%esp)
08618e8e +0x44a:  call   08ae3750 <_Unwind_Resume>
08618e93 +0x44f:  mov    %ebx,%eax
08618e95 +0x451:  add    $0xc0,%esp
08618e9b +0x457:  pop    %ebx
08618e9c +0x458:  pop    %esi
08618e9d +0x459:  pop    %ebp
08618e9e +0x45a:  ret
08618e9f +0x45b:  nop
```

## 反编译 C

```c
// Store::user_buy_item @ 0x8618a44

/* Store::user_buy_item(CUser*, int, int) */

undefined4 __thiscall Store::user_buy_item(Store *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  CInventory *pCVar4;
  CValueStatistic *pCVar5;
  undefined4 uVar6;
  Inven_Item local_79;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined4 uStack_72;
  undefined1 uStack_6e;
  uint uStack_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined1 local_3d;
  PacketGuard local_3c [12];
  int local_30;
  cMyTrace local_2c [16];
  CItem *local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\0') {
    iVar3 = G_CDataManager();
    local_1c = (CItem *)CItemList::find_item(*(CItemList **)(iVar3 + 0xc),param_2);
    if (local_1c == (CItem *)0x0) {
      uVar6 = 0x11;
    }
    else {
      cVar1 = CItem::is_stackable(local_1c);
      if (cVar1 == '\0') {
        local_18 = CItem::get_price(local_1c);
      }
      else {
        local_18 = CItem::get_price(local_1c);
        local_18 = local_18 * param_3;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar3 = CInventory::get_money(pCVar4);
      if (iVar3 < local_18) {
        uVar6 = 10;
      }
      else {
        Inven_Item::Inven_Item(&local_79);
        uStack_77 = param_2;
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\0') {
          local_10 = local_1c;
          if (*(int *)(local_1c + 0x234) == 0xb) {
            return 0x17;
          }
          iVar3 = CItem::GetAttachType(local_1c);
          if (iVar3 == 3) {
            local_79 = (Inven_Item)0x1;
          }
          uStack_78 = 1;
          Inven_Item::set_add_info(&local_79,param_3);
          uVar2 = CEquipItem::get_endurance((CEquipItem *)local_10);
          uStack_6e = (undefined1)uVar2;
          uStack_6d._0_1_ = (undefined1)((ushort)uVar2 >> 8);
          Inven_Item::ResetItemAttr(&local_79);
        }
        else {
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 1) {
            uStack_78 = 3;
          }
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 2) {
            uStack_78 = 10;
          }
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 8) {
            uStack_78 = 4;
          }
          Inven_Item::set_add_info(&local_79,param_3);
          iVar3 = uStack_77;
          if (999 < param_3) {
            cMyTrace::cMyTrace(local_2c,"int Store::user_buy_item(CUser*, int, int)",0x3d,5);
            cMyTrace::operator()(local_2c,"Store::user_buy_item,  ITEM #%d, %d",iVar3,param_3);
          }
          uStack_6e = 0;
          uStack_6d = uStack_6d & 0xffffff00;
          Inven_Item::ResetItemAttr(&local_79);
        }
        uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_14 = CInventory::insertItemIntoInventory
                             (uVar6,CONCAT22((undefined2)uStack_77,CONCAT11(uStack_78,local_79)),
                              CONCAT13((undefined1)uStack_72,CONCAT12(uStack_73,uStack_77._2_2_)),
                              CONCAT13(uStack_6e,uStack_72._1_3_),uStack_6d,local_69,local_65,
                              local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,
                              local_45,local_41,local_3d,0,1,0);
        if (local_14 == -1) {
          uVar6 = 4;
        }
        else {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar1 = CInventory::use_money(pCVar4,local_18,0,1);
          if (cVar1 == '\x01') {
            local_30 = 0;
            GetSellItemPrice(this,&local_79,local_1c,(short)uStack_72,false,&local_30);
            iVar3 = local_30;
            pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar5,6,param_1,iVar3);
            iVar3 = local_18;
            pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar5,0xd,param_1,iVar3);
            PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08618dd1 to 08618e65 has its CatchHandler @ 08618e78 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x15);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar3 = CInventory::get_money(pCVar4);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,local_14);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_3);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
            CUser::Send(param_1,local_3c);
            uVar6 = 0;
            PacketGuard::~PacketGuard(local_3c);
          }
          else {
            uVar6 = 10;
          }
        }
      }
    }
  }
  else {
    uVar6 = 0x13;
  }
  return uVar6;
}
```
