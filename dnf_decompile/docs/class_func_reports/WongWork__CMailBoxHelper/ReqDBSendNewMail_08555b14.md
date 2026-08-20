# ReqDBSendNewMail

`_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji`

`WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555b14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555b14  _ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji
#           WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool, unsigned int, int)
# range [0x08555b14, 0x085561af]
08555b14 +0x000:  push   %ebp
08555b15 +0x001:  mov    %esp,%ebp
08555b17 +0x003:  push   %esi
08555b18 +0x004:  push   %ebx
08555b19 +0x005:  sub    $0x120,%esp
08555b1f +0x00b:  mov    0x14(%ebp),%eax
08555b22 +0x00e:  mov    %al,-0xac(%ebp)
08555b28 +0x014:  mov    0xc(%ebp),%eax
08555b2b +0x017:  mov    0x3d(%eax),%eax
08555b2e +0x01a:  test   %eax,%eax
08555b30 +0x01c:  jns    08555b3c <+0x28>
08555b32 +0x01e:  mov    $0x11,%eax
08555b37 +0x023:  jmp    085561a6 <+0x692>
08555b3c +0x028:  movl   $0x3e8,-0x28(%ebp)
08555b43 +0x02f:  mov    0xc(%ebp),%eax
08555b46 +0x032:  mov    0x39(%eax),%eax
08555b49 +0x035:  test   %eax,%eax
08555b4b +0x037:  jne    08555b54 <+0x40>
08555b4d +0x039:  movl   $0x64,-0x28(%ebp)
08555b54 +0x040:  mov    0xc(%ebp),%eax
08555b57 +0x043:  mov    0x2e(%eax),%eax
08555b5a +0x046:  test   %eax,%eax
08555b5c +0x048:  je     08555bd2 <+0xbe>
08555b5e +0x04a:  mov    0xc(%ebp),%eax
08555b61 +0x04d:  mov    0x2e(%eax),%edx
08555b64 +0x050:  mov    %edx,%eax
08555b66 +0x052:  shl    $0x2,%eax
08555b69 +0x055:  add    %edx,%eax
08555b6b +0x057:  mov    %eax,-0xfc(%ebp)
08555b71 +0x05d:  mov    $0x51eb851f,%edx
08555b76 +0x062:  mov    -0xfc(%ebp),%eax
08555b7c +0x068:  mul    %edx
08555b7e +0x06a:  shr    $0x5,%edx
08555b81 +0x06d:  mov    -0x28(%ebp),%eax
08555b84 +0x070:  lea    (%edx,%eax,1),%eax
08555b87 +0x073:  mov    %eax,-0x28(%ebp)
08555b8a +0x076:  mov    0xc(%ebp),%eax
08555b8d +0x079:  mov    0x39(%eax),%eax
08555b90 +0x07c:  test   %eax,%eax
08555b92 +0x07e:  jne    08555bb4 <+0xa0>
08555b94 +0x080:  movl   $0x2774,-0x24(%ebp)
08555b9b +0x087:  lea    -0x28(%ebp),%eax
08555b9e +0x08a:  mov    %eax,0x4(%esp)
08555ba2 +0x08e:  lea    -0x24(%ebp),%eax
08555ba5 +0x091:  mov    %eax,(%esp)
08555ba8 +0x094:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08555bad +0x099:  mov    (%eax),%eax
08555baf +0x09b:  mov    %eax,-0x28(%ebp)
08555bb2 +0x09e:  jmp    08555bd2 <+0xbe>
08555bb4 +0x0a0:  movl   $0x2af8,-0x20(%ebp)
08555bbb +0x0a7:  lea    -0x28(%ebp),%eax
08555bbe +0x0aa:  mov    %eax,0x4(%esp)
08555bc2 +0x0ae:  lea    -0x20(%ebp),%eax
08555bc5 +0x0b1:  mov    %eax,(%esp)
08555bc8 +0x0b4:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08555bcd +0x0b9:  mov    (%eax),%eax
08555bcf +0x0bb:  mov    %eax,-0x28(%ebp)
08555bd2 +0x0be:  mov    0x8(%ebp),%eax
08555bd5 +0x0c1:  mov    %eax,(%esp)
08555bd8 +0x0c4:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08555bdd +0x0c9:  mov    0xc(%ebp),%edx
08555be0 +0x0cc:  mov    0x2e(%edx),%edx
08555be3 +0x0cf:  mov    %edx,%ecx
08555be5 +0x0d1:  mov    -0x28(%ebp),%edx
08555be8 +0x0d4:  lea    (%ecx,%edx,1),%edx
08555beb +0x0d7:  cmp    %edx,%eax
08555bed +0x0d9:  setl   %al
08555bf0 +0x0dc:  test   %al,%al
08555bf2 +0x0de:  je     08555bfe <+0xea>
08555bf4 +0x0e0:  mov    $0xa,%eax
08555bf9 +0x0e5:  jmp    085561a6 <+0x692>
08555bfe +0x0ea:  mov    0x8(%ebp),%eax
08555c01 +0x0ed:  mov    %eax,(%esp)
08555c04 +0x0f0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08555c09 +0x0f5:  mov    %eax,-0x1c(%ebp)
08555c0c +0x0f8:  movl   $0x6,-0x18(%ebp)
08555c13 +0x0ff:  movl   $0x0,-0x14(%ebp)
08555c1a +0x106:  lea    -0x65(%ebp),%eax
08555c1d +0x109:  mov    %eax,(%esp)
08555c20 +0x10c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08555c25 +0x111:  lea    -0xa2(%ebp),%eax
08555c2b +0x117:  mov    %eax,(%esp)
08555c2e +0x11a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08555c33 +0x11f:  mov    0xc(%ebp),%eax
08555c36 +0x122:  mov    0x39(%eax),%eax
08555c39 +0x125:  test   %eax,%eax
08555c3b +0x127:  je     08555f3d <+0x429>
08555c41 +0x12d:  mov    0xc(%ebp),%eax
08555c44 +0x130:  movzbl 0x36(%eax),%eax
08555c48 +0x134:  movzbl %al,%eax
08555c4b +0x137:  cmp    $0x1,%eax
08555c4e +0x13a:  je     08555c62 <+0x14e>
08555c50 +0x13c:  cmp    $0x7,%eax
08555c53 +0x13f:  je     08555c6b <+0x157>
08555c55 +0x141:  test   %eax,%eax
08555c57 +0x143:  jne    08555c74 <+0x160>
08555c59 +0x145:  movl   $0x1,-0x18(%ebp)
08555c60 +0x14c:  jmp    08555c7e <+0x16a>
08555c62 +0x14e:  movl   $0x2,-0x18(%ebp)
08555c69 +0x155:  jmp    08555c7e <+0x16a>
08555c6b +0x157:  movl   $0x3,-0x18(%ebp)
08555c72 +0x15e:  jmp    08555c7e <+0x16a>
08555c74 +0x160:  mov    $0x17,%eax
08555c79 +0x165:  jmp    085561a6 <+0x692>
08555c7e +0x16a:  mov    0xc(%ebp),%eax
08555c81 +0x16d:  movzwl 0x37(%eax),%eax
08555c85 +0x171:  movzwl %ax,%edx
08555c88 +0x174:  lea    -0xf8(%ebp),%eax
08555c8e +0x17a:  mov    %edx,0xc(%esp)
08555c92 +0x17e:  mov    -0x18(%ebp),%edx
08555c95 +0x181:  mov    %edx,0x8(%esp)
08555c99 +0x185:  mov    -0x1c(%ebp),%edx
08555c9c +0x188:  mov    %edx,0x4(%esp)
08555ca0 +0x18c:  mov    %eax,(%esp)
08555ca3 +0x18f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08555ca8 +0x194:  sub    $0x4,%esp
08555cab +0x197:  mov    -0xf8(%ebp),%eax
08555cb1 +0x19d:  mov    %eax,-0x65(%ebp)
08555cb4 +0x1a0:  mov    -0xf4(%ebp),%eax
08555cba +0x1a6:  mov    %eax,-0x61(%ebp)
08555cbd +0x1a9:  mov    -0xf0(%ebp),%eax
08555cc3 +0x1af:  mov    %eax,-0x5d(%ebp)
08555cc6 +0x1b2:  mov    -0xec(%ebp),%eax
08555ccc +0x1b8:  mov    %eax,-0x59(%ebp)
08555ccf +0x1bb:  mov    -0xe8(%ebp),%eax
08555cd5 +0x1c1:  mov    %eax,-0x55(%ebp)
08555cd8 +0x1c4:  mov    -0xe4(%ebp),%eax
08555cde +0x1ca:  mov    %eax,-0x51(%ebp)
08555ce1 +0x1cd:  mov    -0xe0(%ebp),%eax
08555ce7 +0x1d3:  mov    %eax,-0x4d(%ebp)
08555cea +0x1d6:  mov    -0xdc(%ebp),%eax
08555cf0 +0x1dc:  mov    %eax,-0x49(%ebp)
08555cf3 +0x1df:  mov    -0xd8(%ebp),%eax
08555cf9 +0x1e5:  mov    %eax,-0x45(%ebp)
08555cfc +0x1e8:  mov    -0xd4(%ebp),%eax
08555d02 +0x1ee:  mov    %eax,-0x41(%ebp)
08555d05 +0x1f1:  mov    -0xd0(%ebp),%eax
08555d0b +0x1f7:  mov    %eax,-0x3d(%ebp)
08555d0e +0x1fa:  mov    -0xcc(%ebp),%eax
08555d14 +0x200:  mov    %eax,-0x39(%ebp)
08555d17 +0x203:  mov    -0xc8(%ebp),%eax
08555d1d +0x209:  mov    %eax,-0x35(%ebp)
08555d20 +0x20c:  mov    -0xc4(%ebp),%eax
08555d26 +0x212:  mov    %eax,-0x31(%ebp)
08555d29 +0x215:  mov    -0xc0(%ebp),%eax
08555d2f +0x21b:  mov    %eax,-0x2d(%ebp)
08555d32 +0x21e:  movzbl -0xbc(%ebp),%eax
08555d39 +0x225:  mov    %al,-0x29(%ebp)
08555d3c +0x228:  mov    -0x63(%ebp),%edx
08555d3f +0x22b:  mov    0xc(%ebp),%eax
08555d42 +0x22e:  mov    0x39(%eax),%eax
08555d45 +0x231:  cmp    %eax,%edx
08555d47 +0x233:  je     08555d53 <+0x23f>
08555d49 +0x235:  mov    $0x11,%eax
08555d4e +0x23a:  jmp    085561a6 <+0x692>
08555d53 +0x23f:  movzbl -0x64(%ebp),%eax
08555d57 +0x243:  cmp    $0x4,%al
08555d59 +0x245:  jne    08555d65 <+0x251>
08555d5b +0x247:  mov    $0x17,%eax
08555d60 +0x24c:  jmp    085561a6 <+0x692>
08555d65 +0x251:  lea    -0x65(%ebp),%eax
08555d68 +0x254:  mov    %eax,(%esp)
08555d6b +0x257:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08555d70 +0x25c:  xor    $0x1,%eax
08555d73 +0x25f:  test   %al,%al
08555d75 +0x261:  je     08555d8e <+0x27a>
08555d77 +0x263:  mov    -0x5e(%ebp),%edx
08555d7a +0x266:  mov    0xc(%ebp),%eax
08555d7d +0x269:  mov    0x3d(%eax),%eax
08555d80 +0x26c:  cmp    %eax,%edx
08555d82 +0x26e:  jge    08555d8e <+0x27a>
08555d84 +0x270:  mov    $0x11,%eax
08555d89 +0x275:  jmp    085561a6 <+0x692>
08555d8e +0x27a:  mov    -0x63(%ebp),%eax
08555d91 +0x27d:  mov    %eax,%ebx
08555d93 +0x27f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08555d98 +0x284:  mov    %ebx,0x4(%esp)
08555d9c +0x288:  mov    %eax,(%esp)
08555d9f +0x28b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08555da4 +0x290:  mov    %eax,-0x10(%ebp)
08555da7 +0x293:  cmpl   $0x0,-0x10(%ebp)
08555dab +0x297:  jne    08555db7 <+0x2a3>
08555dad +0x299:  mov    $0x1,%eax
08555db2 +0x29e:  jmp    085561a6 <+0x692>
08555db7 +0x2a3:  mov    -0x10(%ebp),%eax
08555dba +0x2a6:  mov    %eax,(%esp)
08555dbd +0x2a9:  call   0828b5b4 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x29>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x29
08555dc2 +0x2ae:  xor    $0x1,%eax
08555dc5 +0x2b1:  test   %al,%al
08555dc7 +0x2b3:  je     08555dd3 <+0x2bf>
08555dc9 +0x2b5:  mov    $0x17,%eax
08555dce +0x2ba:  jmp    085561a6 <+0x692>
08555dd3 +0x2bf:  mov    -0x10(%ebp),%eax
08555dd6 +0x2c2:  mov    %eax,(%esp)
08555dd9 +0x2c5:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08555dde +0x2ca:  mov    %eax,-0xc(%ebp)
08555de1 +0x2cd:  mov    -0xc(%ebp),%eax
08555de4 +0x2d0:  cmp    $0x7,%eax
08555de7 +0x2d3:  ja     08555e73 <+0x35f>
08555ded +0x2d9:  mov    &data#6b3476b2(.rodata)(,%eax,4),%eax
08555df4 +0x2e0:  jmp    *%eax
08555df6 +0x2e2:  mov    $0x17,%eax
08555dfb +0x2e7:  jmp    085561a6 <+0x692>
08555e00 +0x2ec:  movzbl -0x65(%ebp),%eax
08555e04 +0x2f0:  xor    $0x1,%eax
08555e07 +0x2f3:  test   %al,%al
08555e09 +0x2f5:  je     08555e72 <+0x35e>
08555e0b +0x2f7:  mov    $0x17,%eax
08555e10 +0x2fc:  jmp    085561a6 <+0x692>
08555e15 +0x301:  lea    -0x65(%ebp),%eax
08555e18 +0x304:  mov    %eax,(%esp)
08555e1b +0x307:  call   0812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>  ; DecreaseTradeLimitCount(Inven_Item&)
08555e20 +0x30c:  xor    $0x1,%eax
08555e23 +0x30f:  test   %al,%al
08555e25 +0x311:  je     08555e31 <+0x31d>
08555e27 +0x313:  mov    $0x17,%eax
08555e2c +0x318:  jmp    085561a6 <+0x692>
08555e31 +0x31d:  mov    -0x63(%ebp),%eax
08555e34 +0x320:  mov    %eax,%edx
08555e36 +0x322:  mov    0xc(%ebp),%eax
08555e39 +0x325:  movzwl 0x37(%eax),%eax
08555e3d +0x329:  movzwl %ax,%eax
08555e40 +0x32c:  mov    0x8(%ebp),%ecx
08555e43 +0x32f:  add    $0x79700,%ecx
08555e49 +0x335:  movl   $0x3,0x14(%esp)
08555e51 +0x33d:  movl   $0xffffffff,0x10(%esp)
08555e59 +0x345:  mov    %edx,0xc(%esp)
08555e5d +0x349:  mov    %eax,0x8(%esp)
08555e61 +0x34d:  mov    -0x18(%ebp),%eax
08555e64 +0x350:  mov    %eax,0x4(%esp)
08555e68 +0x354:  mov    %ecx,(%esp)
08555e6b +0x357:  call   08686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>  ; cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)
08555e70 +0x35c:  jmp    08555e73 <+0x35f>
08555e72 +0x35e:  nop
08555e73 +0x35f:  lea    -0x65(%ebp),%eax
08555e76 +0x362:  add    $0x33,%eax
08555e79 +0x365:  mov    %eax,(%esp)
08555e7c +0x368:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
08555e81 +0x36d:  test   %al,%al
08555e83 +0x36f:  setne  %al
08555e86 +0x372:  test   %al,%al
08555e88 +0x374:  je     08555e94 <+0x380>
08555e8a +0x376:  mov    $0x17,%eax
08555e8f +0x37b:  jmp    085561a6 <+0x692>
08555e94 +0x380:  lea    -0x65(%ebp),%eax
08555e97 +0x383:  mov    %eax,0x4(%esp)
08555e9b +0x387:  lea    -0xa2(%ebp),%eax
08555ea1 +0x38d:  mov    %eax,(%esp)
08555ea4 +0x390:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08555ea9 +0x395:  lea    -0xa2(%ebp),%eax
08555eaf +0x39b:  mov    %eax,(%esp)
08555eb2 +0x39e:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08555eb7 +0x3a3:  xor    $0x1,%eax
08555eba +0x3a6:  test   %al,%al
08555ebc +0x3a8:  je     08555ed6 <+0x3c2>
08555ebe +0x3aa:  mov    0xc(%ebp),%eax
08555ec1 +0x3ad:  mov    0x3d(%eax),%eax
08555ec4 +0x3b0:  mov    %eax,0x4(%esp)
08555ec8 +0x3b4:  lea    -0xa2(%ebp),%eax
08555ece +0x3ba:  mov    %eax,(%esp)
08555ed1 +0x3bd:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08555ed6 +0x3c2:  mov    -0x10(%ebp),%eax
08555ed9 +0x3c5:  mov    (%eax),%eax
08555edb +0x3c7:  add    $0x10,%eax
08555ede +0x3ca:  mov    (%eax),%edx
08555ee0 +0x3cc:  mov    -0x10(%ebp),%eax
08555ee3 +0x3cf:  mov    %eax,(%esp)
08555ee6 +0x3d2:  call   *%edx
08555ee8 +0x3d4:  test   %al,%al
08555eea +0x3d6:  je     08555f3d <+0x429>
08555eec +0x3d8:  mov    -0x1c(%ebp),%eax
08555eef +0x3db:  mov    %eax,(%esp)
08555ef2 +0x3de:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08555ef7 +0x3e3:  mov    -0x5e(%ebp),%eax
08555efa +0x3e6:  mov    %eax,(%esp)
08555efd +0x3e9:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
08555f02 +0x3ee:  test   %al,%al
08555f04 +0x3f0:  je     08555f10 <+0x3fc>
08555f06 +0x3f2:  mov    $0x11,%eax
08555f0b +0x3f7:  jmp    085561a6 <+0x692>
08555f10 +0x3fc:  mov    -0x5e(%ebp),%ebx
08555f13 +0x3ff:  mov    -0x1c(%ebp),%eax
08555f16 +0x402:  mov    %eax,(%esp)
08555f19 +0x405:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
08555f1e +0x40a:  mov    %ebx,0x4(%esp)
08555f22 +0x40e:  mov    %eax,(%esp)
08555f25 +0x411:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08555f2a +0x416:  test   %eax,%eax
08555f2c +0x418:  setne  %al
08555f2f +0x41b:  test   %al,%al
08555f31 +0x41d:  je     08555f3d <+0x429>
08555f33 +0x41f:  mov    $0x11,%eax
08555f38 +0x424:  jmp    085561a6 <+0x692>
08555f3d +0x429:  mov    -0x28(%ebp),%eax
08555f40 +0x42c:  movl   $0x1,0xc(%esp)
08555f48 +0x434:  movl   $0x10,0x8(%esp)
08555f50 +0x43c:  mov    %eax,0x4(%esp)
08555f54 +0x440:  mov    -0x1c(%ebp),%eax
08555f57 +0x443:  mov    %eax,(%esp)
08555f5a +0x446:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08555f5f +0x44b:  xor    $0x1,%eax
08555f62 +0x44e:  test   %al,%al
08555f64 +0x450:  je     08555f70 <+0x45c>
08555f66 +0x452:  mov    $0xa,%eax
08555f6b +0x457:  jmp    085561a6 <+0x692>
08555f70 +0x45c:  mov    0xc(%ebp),%eax
08555f73 +0x45f:  mov    0x2e(%eax),%eax
08555f76 +0x462:  test   %eax,%eax
08555f78 +0x464:  je     08555fcd <+0x4b9>
08555f7a +0x466:  mov    0xc(%ebp),%eax
08555f7d +0x469:  lea    0x11(%eax),%ebx
08555f80 +0x46c:  mov    0x8(%ebp),%eax
08555f83 +0x46f:  mov    %eax,(%esp)
08555f86 +0x472:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
08555f8b +0x477:  mov    %ebx,0x4(%esp)
08555f8f +0x47b:  mov    %eax,(%esp)
08555f92 +0x47e:  call   08287ee0 <_ZN16Secu_GoldControl15SetMailCharNameEPKc>  ; Secu_GoldControl::SetMailCharName(char const*)
08555f97 +0x483:  mov    0xc(%ebp),%eax
08555f9a +0x486:  mov    0x2e(%eax),%eax
08555f9d +0x489:  movl   $0x1,0xc(%esp)
08555fa5 +0x491:  movl   $0x11,0x8(%esp)
08555fad +0x499:  mov    %eax,0x4(%esp)
08555fb1 +0x49d:  mov    -0x1c(%ebp),%eax
08555fb4 +0x4a0:  mov    %eax,(%esp)
08555fb7 +0x4a3:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08555fbc +0x4a8:  xor    $0x1,%eax
08555fbf +0x4ab:  test   %al,%al
08555fc1 +0x4ad:  je     08555fcd <+0x4b9>
08555fc3 +0x4af:  mov    $0xa,%eax
08555fc8 +0x4b4:  jmp    085561a6 <+0x692>
08555fcd +0x4b9:  mov    0xc(%ebp),%eax
08555fd0 +0x4bc:  mov    0x39(%eax),%eax
08555fd3 +0x4bf:  test   %eax,%eax
08555fd5 +0x4c1:  je     0855613b <+0x627>
08555fdb +0x4c7:  movzbl -0x64(%ebp),%eax
08555fdf +0x4cb:  cmp    $0x8,%al
08555fe1 +0x4cd:  jne    085560b1 <+0x59d>
08555fe7 +0x4d3:  mov    0xc(%ebp),%eax
08555fea +0x4d6:  movzwl 0x37(%eax),%eax
08555fee +0x4da:  movzwl %ax,%eax
08555ff1 +0x4dd:  movl   $0x1,0x14(%esp)
08555ff9 +0x4e5:  movl   $0x2,0x10(%esp)
08556001 +0x4ed:  movl   $0x1,0xc(%esp)
08556009 +0x4f5:  mov    %eax,0x8(%esp)
0855600d +0x4f9:  movl   $0x2,0x4(%esp)
08556015 +0x501:  mov    -0x1c(%ebp),%eax
08556018 +0x504:  mov    %eax,(%esp)
0855601b +0x507:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08556020 +0x50c:  xor    $0x1,%eax
08556023 +0x50f:  test   %al,%al
08556025 +0x511:  je     08556031 <+0x51d>
08556027 +0x513:  mov    $0x11,%eax
0855602c +0x518:  jmp    085561a6 <+0x692>
08556031 +0x51d:  mov    0xc(%ebp),%eax
08556034 +0x520:  movzwl 0x37(%eax),%eax
08556038 +0x524:  movzwl %ax,%eax
0855603b +0x527:  lea    0xa(%eax),%edx
0855603e +0x52a:  mov    -0x5e(%ebp),%eax
08556041 +0x52d:  movl   $0x0,0x14(%esp)
08556049 +0x535:  mov    %edx,0x10(%esp)
0855604d +0x539:  movl   $0x2,0xc(%esp)
08556055 +0x541:  mov    %eax,0x8(%esp)
08556059 +0x545:  movl   $0x36,0x4(%esp)
08556061 +0x54d:  mov    -0x1c(%ebp),%eax
08556064 +0x550:  mov    %eax,(%esp)
08556067 +0x553:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0855606c +0x558:  mov    0x8(%ebp),%eax
0855606f +0x55b:  mov    %eax,(%esp)
08556072 +0x55e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08556077 +0x563:  mov    -0x5e(%ebp),%edx
0855607a +0x566:  movl   $0x0,0xc(%esp)
08556082 +0x56e:  mov    0x10(%ebp),%ecx
08556085 +0x571:  mov    %ecx,0x8(%esp)
08556089 +0x575:  mov    %eax,0x4(%esp)
0855608d +0x579:  mov    %edx,(%esp)
08556090 +0x57c:  call   0840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>  ; DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char)
08556095 +0x581:  mov    -0x5e(%ebp),%ebx
08556098 +0x584:  mov    -0x1c(%ebp),%eax
0855609b +0x587:  mov    %eax,(%esp)
0855609e +0x58a:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
085560a3 +0x58f:  mov    %ebx,0x4(%esp)
085560a7 +0x593:  mov    %eax,(%esp)
085560aa +0x596:  call   082f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>  ; WongWork::CAvatarItemMgr::UnRegistItem(int)
085560af +0x59b:  jmp    085560fc <+0x5e8>
085560b1 +0x59d:  mov    0xc(%ebp),%eax
085560b4 +0x5a0:  mov    0x3d(%eax),%ecx
085560b7 +0x5a3:  mov    0xc(%ebp),%eax
085560ba +0x5a6:  movzwl 0x37(%eax),%eax
085560be +0x5aa:  movzwl %ax,%edx
085560c1 +0x5ad:  mov    -0x18(%ebp),%eax
085560c4 +0x5b0:  movl   $0x1,0x14(%esp)
085560cc +0x5b8:  movl   $0xf,0x10(%esp)
085560d4 +0x5c0:  mov    %ecx,0xc(%esp)
085560d8 +0x5c4:  mov    %edx,0x8(%esp)
085560dc +0x5c8:  mov    %eax,0x4(%esp)
085560e0 +0x5cc:  mov    -0x1c(%ebp),%eax
085560e3 +0x5cf:  mov    %eax,(%esp)
085560e6 +0x5d2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085560eb +0x5d7:  xor    $0x1,%eax
085560ee +0x5da:  test   %al,%al
085560f0 +0x5dc:  je     085560fc <+0x5e8>
085560f2 +0x5de:  mov    $0x11,%eax
085560f7 +0x5e3:  jmp    085561a6 <+0x692>
085560fc +0x5e8:  lea    -0x65(%ebp),%eax
085560ff +0x5eb:  mov    %eax,(%esp)
08556102 +0x5ee:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
08556107 +0x5f3:  test   %al,%al
08556109 +0x5f5:  je     0855613b <+0x627>
0855610b +0x5f7:  mov    0xc(%ebp),%eax
0855610e +0x5fa:  movzwl 0x37(%eax),%eax
08556112 +0x5fe:  movzwl %ax,%ebx
08556115 +0x601:  mov    -0x1c(%ebp),%eax
08556118 +0x604:  mov    %eax,(%esp)
0855611b +0x607:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08556120 +0x60c:  movl   $0xf,0xc(%esp)
08556128 +0x614:  mov    %ebx,0x8(%esp)
0855612c +0x618:  lea    -0x65(%ebp),%edx
0855612f +0x61b:  mov    %edx,0x4(%esp)
08556133 +0x61f:  mov    %eax,(%esp)
08556136 +0x622:  call   0833aa32 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii>  ; user_creature::CCreatureMgr::SendMail(Inven_Item*, int, int)
0855613b +0x627:  mov    0x8(%ebp),%eax
0855613e +0x62a:  lea    0x79700(%eax),%edx
08556144 +0x630:  mov    0x18(%ebp),%eax
08556147 +0x633:  mov    %eax,0x8(%esp)
0855614b +0x637:  mov    0xc(%ebp),%eax
0855614e +0x63a:  mov    %eax,0x4(%esp)
08556152 +0x63e:  mov    %edx,(%esp)
08556155 +0x641:  call   086847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>  ; cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)
0855615a +0x646:  mov    0xc(%ebp),%eax
0855615d +0x649:  mov    0x41(%eax),%ecx
08556160 +0x64c:  mov    0xc(%ebp),%eax
08556163 +0x64f:  lea    0x45(%eax),%esi
08556166 +0x652:  movzbl -0xac(%ebp),%edx
0855616d +0x659:  mov    0xc(%ebp),%eax
08556170 +0x65c:  mov    0x2e(%eax),%eax
08556173 +0x65f:  mov    0x1c(%ebp),%ebx
08556176 +0x662:  mov    %ebx,0x1c(%esp)
0855617a +0x666:  mov    %ecx,0x18(%esp)
0855617e +0x66a:  mov    %esi,0x14(%esp)
08556182 +0x66e:  mov    %edx,0x10(%esp)
08556186 +0x672:  mov    0x10(%ebp),%edx
08556189 +0x675:  mov    %edx,0xc(%esp)
0855618d +0x679:  mov    %eax,0x8(%esp)
08556191 +0x67d:  lea    -0xa2(%ebp),%eax
08556197 +0x683:  mov    %eax,0x4(%esp)
0855619b +0x687:  mov    0x8(%ebp),%eax
0855619e +0x68a:  mov    %eax,(%esp)
085561a1 +0x68d:  call   08555916 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii>  ; WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int, int)
085561a6 +0x692:  lea    -0x8(%ebp),%esp
085561a9 +0x695:  add    $0x0,%esp
085561ac +0x698:  pop    %ebx
085561ad +0x699:  pop    %esi
085561ae +0x69a:  pop    %ebp
085561af +0x69b:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMail @ 0x8555b14

/* WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool,
   unsigned int, int) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewMail
          (CUser *param_1,MSG_MAILBOX_SEND *param_2,uint param_3,bool param_4,uint param_5,
          int param_6)

{
  MSG_MAILBOX_SEND MVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  CDataManager *this;
  CAvatarItemMgr *this_00;
  Secu_GoldControl *this_01;
  uint uVar7;
  CCreatureMgr *this_02;
  undefined1 local_fc [12];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  bool local_b0;
  Inven_Item local_a6 [61];
  Inven_Item local_69;
  char cStack_68;
  undefined2 uStack_67;
  undefined2 local_65;
  undefined1 uStack_63;
  uint uStack_62;
  undefined1 uStack_5e;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined1 local_2d;
  int local_2c [3];
  CInventory *local_20;
  int local_1c;
  undefined4 local_18;
  CItem *local_14;
  undefined4 local_10;
  
  local_b0 = param_4;
  if (*(int *)(param_2 + 0x3d) < 0) {
    uVar4 = 0x11;
  }
  else {
    local_2c[0] = 1000;
    if (*(int *)(param_2 + 0x39) == 0) {
      local_2c[0] = 100;
    }
    if (*(int *)(param_2 + 0x2e) != 0) {
      local_2c[0] = (uint)(*(int *)(param_2 + 0x2e) * 5) / 100 + local_2c[0];
      if (*(int *)(param_2 + 0x39) == 0) {
        local_2c[1] = 0x2774;
        piVar5 = std::min<int>(local_2c + 1,local_2c);
        local_2c[0] = *piVar5;
      }
      else {
        local_2c[2] = 11000;
        piVar5 = std::min<int>(local_2c + 2,local_2c);
        local_2c[0] = *piVar5;
      }
    }
    iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    if (iVar6 < *(int *)(param_2 + 0x2e) + local_2c[0]) {
      uVar4 = 10;
    }
    else {
      local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_1c = 6;
      local_18 = 0;
      Inven_Item::Inven_Item(&local_69);
      Inven_Item::Inven_Item(local_a6);
      if (*(int *)(param_2 + 0x39) != 0) {
        MVar1 = param_2[0x36];
        if (MVar1 == (MSG_MAILBOX_SEND)0x1) {
          local_1c = 2;
        }
        else if (MVar1 == (MSG_MAILBOX_SEND)0x7) {
          local_1c = 3;
        }
        else {
          if (MVar1 != (MSG_MAILBOX_SEND)0x0) {
            return 0x17;
          }
          local_1c = 1;
        }
        CInventory::GetInvenSlot((int)local_fc,(int)local_20);
        local_69 = SUB41(local_fc._0_4_,0);
        cStack_68 = SUB41(local_fc._0_4_,1);
        uStack_67 = SUB42(local_fc._0_4_,2);
        local_65 = (undefined2)local_fc._4_4_;
        uStack_63 = SUB41(local_fc._4_4_,2);
        uStack_62._1_3_ = (undefined3)local_fc._8_4_;
        uStack_62 = CONCAT31(uStack_62._1_3_,SUB41(local_fc._4_4_,3));
        uStack_5e = SUB41(local_fc._8_4_,3);
        local_5d = local_f0;
        local_59 = local_ec;
        local_55 = local_e8;
        local_51 = local_e4;
        local_4d = local_e0;
        local_49 = local_dc;
        local_45 = local_d8;
        local_41 = local_d4;
        local_3d = local_d0;
        local_39 = local_cc;
        local_35 = local_c8;
        local_31 = local_c4;
        local_2d = local_c0;
        if (CONCAT22(local_65,uStack_67) != *(int *)(param_2 + 0x39)) {
          return 0x11;
        }
        if (cStack_68 == '\x04') {
          return 0x17;
        }
        cVar3 = Inven_Item::isEquipableItemType(&local_69);
        if ((cVar3 != '\x01') && ((int)uStack_62 < *(int *)(param_2 + 0x3d))) {
          return 0x11;
        }
        iVar6 = CONCAT22(local_65,uStack_67);
        this = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this,iVar6);
        if (local_14 == (CItem *)0x0) {
          return 1;
        }
        cVar3 = CItem::isPackagable(local_14);
        if (cVar3 != '\x01') {
          return 0x17;
        }
        local_10 = CItem::GetAttachType(local_14);
        switch(local_10) {
        case 1:
        case 2:
          return 0x17;
        case 3:
          if (local_69 != (Inven_Item)0x1) {
            return 0x17;
          }
          break;
        case 7:
          cVar3 = DecreaseTradeLimitCount(&local_69);
          if (cVar3 != '\x01') {
            return 0x17;
          }
          cUserHistoryLog::ChangeItemLimitCount
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_1c,
                     (uint)*(ushort *)(param_2 + 0x37),CONCAT22(local_65,uStack_67),-1,3);
        }
        cVar3 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_39 + 3))
        ;
        if (cVar3 != '\0') {
          return 0x17;
        }
        Inven_Item::setCopy(local_a6,&local_69);
        cVar3 = Inven_Item::isEquipableItemType(local_a6);
        if (cVar3 != '\x01') {
          Inven_Item::set_add_info(local_a6,*(int *)(param_2 + 0x3d));
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
        if (cVar3 != '\0') {
          CInventory::GetAvatarItemMgrR(local_20);
          cVar3 = CAvatarItemMgr::IsTempKey(uStack_62);
          uVar7 = uStack_62;
          if (cVar3 != '\0') {
            return 0x11;
          }
          this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_20);
          iVar6 = CAvatarItemMgr::GetExpireDate(this_00,uVar7);
          if (iVar6 != 0) {
            return 0x11;
          }
        }
      }
      cVar3 = CInventory::use_money(local_20,local_2c[0],0x10,1);
      if (cVar3 == '\x01') {
        if (*(int *)(param_2 + 0x2e) != 0) {
          this_01 = (Secu_GoldControl *)CUser::GetGoldControl(param_1);
          Secu_GoldControl::SetMailCharName(this_01,(char *)(param_2 + 0x11));
          cVar3 = CInventory::use_money(local_20,*(undefined4 *)(param_2 + 0x2e),0x11,1);
          if (cVar3 != '\x01') {
            return 10;
          }
        }
        if (*(int *)(param_2 + 0x39) != 0) {
          if (cStack_68 == '\b') {
            cVar3 = CInventory::delete_item(local_20,2,*(undefined2 *)(param_2 + 0x37),1,2,1);
            if (cVar3 != '\x01') {
              return 0x11;
            }
            CInventory::SendAvatarEvent
                      (local_20,0x36,uStack_62,2,*(ushort *)(param_2 + 0x37) + 10,0);
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            DB_AvatarChangeOwner::makeRequest(uStack_62,uVar7,param_3,'\0');
            iVar6 = CInventory::GetAvatarItemMgrW(local_20);
            CAvatarItemMgr::UnRegistItem(iVar6);
          }
          else {
            cVar3 = CInventory::delete_item
                              (local_20,local_1c,*(undefined2 *)(param_2 + 0x37),
                               *(undefined4 *)(param_2 + 0x3d),0xf,1);
            if (cVar3 != '\x01') {
              return 0x11;
            }
          }
          cVar3 = Inven_Item::IsCreatureItemType(&local_69);
          if (cVar3 != '\0') {
            uVar2 = *(ushort *)(param_2 + 0x37);
            this_02 = (CCreatureMgr *)CInventory::GetCreatureMgrW(local_20);
            user_creature::CCreatureMgr::SendMail(this_02,&local_69,(uint)uVar2,0xf);
          }
        }
        cUserHistoryLog::SendMail((cUserHistoryLog *)(param_1 + 0x79700),param_2,param_5);
        uVar4 = _DoSendNewMail(param_1,local_a6,*(uint *)(param_2 + 0x2e),param_3,local_b0,
                               (char *)(param_2 + 0x45),*(int *)(param_2 + 0x41),param_6);
      }
      else {
        uVar4 = 10;
      }
    }
  }
  return uVar4;
}
```
