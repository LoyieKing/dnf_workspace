# _processAdditionalItem

`_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh`

`WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083267a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083267a2  _ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh
#           WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char)
# range [0x083267a2, 0x08327453]
083267a2 +0x000:  push   %ebp
083267a3 +0x001:  mov    %esp,%ebp
083267a5 +0x003:  push   %edi
083267a6 +0x004:  push   %esi
083267a7 +0x005:  push   %ebx
083267a8 +0x006:  sub    $0x47c,%esp
083267ae +0x00c:  mov    0x14(%ebp),%ebx
083267b1 +0x00f:  mov    0x18(%ebp),%ecx
083267b4 +0x012:  mov    0x1c(%ebp),%edx
083267b7 +0x015:  mov    0x28(%ebp),%eax
083267ba +0x018:  mov    %bx,-0x3fc(%ebp)
083267c1 +0x01f:  mov    %cl,-0x400(%ebp)
083267c7 +0x025:  mov    %dl,-0x404(%ebp)
083267cd +0x02b:  mov    %al,-0x408(%ebp)
083267d3 +0x031:  mov    0xc(%ebp),%eax
083267d6 +0x034:  mov    %eax,(%esp)
083267d9 +0x037:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
083267de +0x03c:  test   %eax,%eax
083267e0 +0x03e:  sete   %al
083267e3 +0x041:  test   %al,%al
083267e5 +0x043:  jne    08327444 <+0xca2>
083267eb +0x049:  cmpl   $0x1,0x10(%ebp)
083267ef +0x04d:  jne    08326855 <+0xb3>
083267f1 +0x04f:  movzwl -0x3fc(%ebp),%eax
083267f8 +0x056:  movl   $0x0,0xc(%esp)
08326800 +0x05e:  mov    %eax,0x8(%esp)
08326804 +0x062:  mov    0xc(%ebp),%eax
08326807 +0x065:  mov    %eax,0x4(%esp)
0832680b +0x069:  mov    0x8(%ebp),%eax
0832680e +0x06c:  mov    %eax,(%esp)
08326811 +0x06f:  call   08325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>  ; WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool)
08326816 +0x074:  lea    -0xf9(%ebp),%eax
0832681c +0x07a:  mov    %eax,(%esp)
0832681f +0x07d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08326824 +0x082:  movl   $0x1,-0xf7(%ebp)
0832682e +0x08c:  movzwl -0x3fc(%ebp),%eax
08326835 +0x093:  mov    %eax,-0xf2(%ebp)
0832683b +0x099:  lea    -0xf9(%ebp),%eax
08326841 +0x09f:  mov    %eax,0x4(%esp)
08326845 +0x0a3:  mov    0x20(%ebp),%eax
08326848 +0x0a6:  mov    %eax,(%esp)
0832684b +0x0a9:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08326850 +0x0ae:  jmp    08327448 <+0xca6>
08326855 +0x0b3:  movl   $0x0,-0x5c(%ebp)
0832685c +0x0ba:  movl   $0x0,-0x58(%ebp)
08326863 +0x0c1:  movl   $0xffffffff,-0x54(%ebp)
0832686a +0x0c8:  lea    -0x3ed(%ebp),%edx
08326870 +0x0ce:  mov    $0x200,%ebx
08326875 +0x0d3:  mov    $0x0,%eax
0832687a +0x0d8:  mov    %edx,%ecx
0832687c +0x0da:  and    $0x1,%ecx
0832687f +0x0dd:  test   %ecx,%ecx
08326881 +0x0df:  je     0832688b <+0xe9>
08326883 +0x0e1:  mov    %al,(%edx)
08326885 +0x0e3:  add    $0x1,%edx
08326888 +0x0e6:  sub    $0x1,%ebx
0832688b +0x0e9:  mov    %edx,%ecx
0832688d +0x0eb:  and    $0x2,%ecx
08326890 +0x0ee:  test   %ecx,%ecx
08326892 +0x0f0:  je     0832689d <+0xfb>
08326894 +0x0f2:  mov    %ax,(%edx)
08326897 +0x0f5:  add    $0x2,%edx
0832689a +0x0f8:  sub    $0x2,%ebx
0832689d +0x0fb:  mov    %ebx,%ecx
0832689f +0x0fd:  shr    $0x2,%ecx
083268a2 +0x100:  mov    %edx,%edi
083268a4 +0x102:  rep stos %eax,%es:(%edi)
083268a6 +0x104:  mov    %edi,%edx
083268a8 +0x106:  mov    %ebx,%ecx
083268aa +0x108:  and    $0x2,%ecx
083268ad +0x10b:  test   %ecx,%ecx
083268af +0x10d:  je     083268b7 <+0x115>
083268b1 +0x10f:  mov    %ax,(%edx)
083268b4 +0x112:  add    $0x2,%edx
083268b7 +0x115:  mov    %ebx,%ecx
083268b9 +0x117:  and    $0x1,%ecx
083268bc +0x11a:  test   %ecx,%ecx
083268be +0x11c:  je     083268c5 <+0x123>
083268c0 +0x11e:  mov    %al,(%edx)
083268c2 +0x120:  add    $0x1,%edx
083268c5 +0x123:  movl   $0x0,-0x50(%ebp)
083268cc +0x12a:  cmpl   $0xffffffff,-0x54(%ebp)
083268d0 +0x12e:  je     08326ab8 <+0x316>
083268d6 +0x134:  lea    -0x84(%ebp),%eax
083268dc +0x13a:  mov    %eax,(%esp)
083268df +0x13d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083268e4 +0x142:  mov    -0x5c(%ebp),%eax
083268e7 +0x145:  mov    %eax,0x8(%esp)
083268eb +0x149:  movl   $0x1,0x4(%esp)
083268f3 +0x151:  lea    -0x84(%ebp),%eax
083268f9 +0x157:  mov    %eax,(%esp)
083268fc +0x15a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08326901 +0x15f:  movl   $0x1,0x4(%esp)
08326909 +0x167:  lea    -0x84(%ebp),%eax
0832690f +0x16d:  mov    %eax,(%esp)
08326912 +0x170:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08326917 +0x175:  mov    -0x58(%ebp),%eax
0832691a +0x178:  mov    %eax,0x4(%esp)
0832691e +0x17c:  lea    -0x84(%ebp),%eax
08326924 +0x182:  mov    %eax,(%esp)
08326927 +0x185:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0832692c +0x18a:  movl   $0x1,0x4(%esp)
08326934 +0x192:  lea    -0x84(%ebp),%eax
0832693a +0x198:  mov    %eax,(%esp)
0832693d +0x19b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08326942 +0x1a0:  lea    -0x84(%ebp),%eax
08326948 +0x1a6:  mov    %eax,0x4(%esp)
0832694c +0x1aa:  mov    0xc(%ebp),%eax
0832694f +0x1ad:  mov    %eax,(%esp)
08326952 +0x1b0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08326957 +0x1b5:  lea    -0x136(%ebp),%eax
0832695d +0x1bb:  mov    %eax,(%esp)
08326960 +0x1be:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08326965 +0x1c3:  mov    -0x54(%ebp),%eax
08326968 +0x1c6:  mov    %eax,-0x134(%ebp)
0832696e +0x1cc:  movzwl -0x3fc(%ebp),%eax
08326975 +0x1d3:  mov    %eax,-0x12f(%ebp)
0832697b +0x1d9:  lea    -0x136(%ebp),%eax
08326981 +0x1df:  mov    %eax,0x4(%esp)
08326985 +0x1e3:  mov    0x20(%ebp),%eax
08326988 +0x1e6:  mov    %eax,(%esp)
0832698b +0x1e9:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08326990 +0x1ee:  lea    -0x90(%ebp),%eax
08326996 +0x1f4:  mov    %eax,(%esp)
08326999 +0x1f7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0832699e +0x1fc:  movl   $0xc,0x8(%esp)
083269a6 +0x204:  movl   $0x0,0x4(%esp)
083269ae +0x20c:  lea    -0x90(%ebp),%eax
083269b4 +0x212:  mov    %eax,(%esp)
083269b7 +0x215:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083269bc +0x21a:  movl   $0x0,0x4(%esp)
083269c4 +0x222:  lea    -0x90(%ebp),%eax
083269ca +0x228:  mov    %eax,(%esp)
083269cd +0x22b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083269d2 +0x230:  movl   $0x0,0x4(%esp)
083269da +0x238:  lea    -0x90(%ebp),%eax
083269e0 +0x23e:  mov    %eax,(%esp)
083269e3 +0x241:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083269e8 +0x246:  movl   $0x0,0x4(%esp)
083269f0 +0x24e:  lea    -0x90(%ebp),%eax
083269f6 +0x254:  mov    %eax,(%esp)
083269f9 +0x257:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083269fe +0x25c:  mov    -0x50(%ebp),%eax
08326a01 +0x25f:  mov    %eax,0x4(%esp)
08326a05 +0x263:  lea    -0x90(%ebp),%eax
08326a0b +0x269:  mov    %eax,(%esp)
08326a0e +0x26c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08326a13 +0x271:  mov    -0x50(%ebp),%eax
08326a16 +0x274:  mov    %eax,0x8(%esp)
08326a1a +0x278:  lea    -0x3ed(%ebp),%eax
08326a20 +0x27e:  mov    %eax,0x4(%esp)
08326a24 +0x282:  lea    -0x90(%ebp),%eax
08326a2a +0x288:  mov    %eax,(%esp)
08326a2d +0x28b:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08326a32 +0x290:  movl   $0x1,0x4(%esp)
08326a3a +0x298:  lea    -0x90(%ebp),%eax
08326a40 +0x29e:  mov    %eax,(%esp)
08326a43 +0x2a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08326a48 +0x2a6:  lea    -0x90(%ebp),%eax
08326a4e +0x2ac:  mov    %eax,0x4(%esp)
08326a52 +0x2b0:  mov    0xc(%ebp),%eax
08326a55 +0x2b3:  mov    %eax,(%esp)
08326a58 +0x2b6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08326a5d +0x2bb:  jmp    08326a77 <+0x2d5>
08326a5f +0x2bd:  mov    %edx,%ebx
08326a61 +0x2bf:  mov    %eax,%esi
08326a63 +0x2c1:  lea    -0x90(%ebp),%eax
08326a69 +0x2c7:  mov    %eax,(%esp)
08326a6c +0x2ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08326a71 +0x2cf:  mov    %esi,%eax
08326a73 +0x2d1:  mov    %ebx,%edx
08326a75 +0x2d3:  jmp    08326a87 <+0x2e5>
08326a77 +0x2d5:  lea    -0x90(%ebp),%eax
08326a7d +0x2db:  mov    %eax,(%esp)
08326a80 +0x2de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08326a85 +0x2e3:  jmp    08326aa5 <+0x303>
08326a87 +0x2e5:  mov    %edx,%ebx
08326a89 +0x2e7:  mov    %eax,%esi
08326a8b +0x2e9:  lea    -0x84(%ebp),%eax
08326a91 +0x2ef:  mov    %eax,(%esp)
08326a94 +0x2f2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08326a99 +0x2f7:  mov    %esi,%eax
08326a9b +0x2f9:  mov    %ebx,%edx
08326a9d +0x2fb:  mov    %eax,(%esp)
08326aa0 +0x2fe:  call   08ae3750 <_Unwind_Resume>
08326aa5 +0x303:  lea    -0x84(%ebp),%eax
08326aab +0x309:  mov    %eax,(%esp)
08326aae +0x30c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08326ab3 +0x311:  jmp    08327448 <+0xca6>
08326ab8 +0x316:  mov    0x10(%ebp),%ebx
08326abb +0x319:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08326ac0 +0x31e:  mov    %ebx,0x4(%esp)
08326ac4 +0x322:  mov    %eax,(%esp)
08326ac7 +0x325:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08326acc +0x32a:  mov    %eax,-0x4c(%ebp)
08326acf +0x32d:  cmpl   $0x0,-0x4c(%ebp)
08326ad3 +0x331:  je     08327447 <+0xca5>
08326ad9 +0x337:  mov    -0x4c(%ebp),%eax
08326adc +0x33a:  mov    %eax,(%esp)
08326adf +0x33d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08326ae4 +0x342:  test   %al,%al
08326ae6 +0x344:  je     08326b1d <+0x37b>
08326ae8 +0x346:  mov    -0x4c(%ebp),%eax
08326aeb +0x349:  mov    (%eax),%eax
08326aed +0x34b:  add    $0xc,%eax
08326af0 +0x34e:  mov    (%eax),%edx
08326af2 +0x350:  mov    -0x4c(%ebp),%eax
08326af5 +0x353:  mov    %eax,(%esp)
08326af8 +0x356:  call   *%edx
08326afa +0x358:  cmp    $0x10,%eax
08326afd +0x35b:  je     08326b16 <+0x374>
08326aff +0x35d:  mov    -0x4c(%ebp),%eax
08326b02 +0x360:  mov    (%eax),%eax
08326b04 +0x362:  add    $0xc,%eax
08326b07 +0x365:  mov    (%eax),%edx
08326b09 +0x367:  mov    -0x4c(%ebp),%eax
08326b0c +0x36a:  mov    %eax,(%esp)
08326b0f +0x36d:  call   *%edx
08326b11 +0x36f:  cmp    $0x22,%eax
08326b14 +0x372:  jne    08326b1d <+0x37b>
08326b16 +0x374:  mov    $0x1,%eax
08326b1b +0x379:  jmp    08326b22 <+0x380>
08326b1d +0x37b:  mov    $0x0,%eax
08326b22 +0x380:  test   %al,%al
08326b24 +0x382:  je     08326ccd <+0x52b>
08326b2a +0x388:  movl   $0xffffffff,-0x44(%ebp)
08326b31 +0x38f:  lea    -0x173(%ebp),%eax
08326b37 +0x395:  mov    %eax,(%esp)
08326b3a +0x398:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08326b3f +0x39d:  mov    0x10(%ebp),%eax
08326b42 +0x3a0:  mov    %eax,-0x171(%ebp)
08326b48 +0x3a6:  movzwl -0x3fc(%ebp),%eax
08326b4f +0x3ad:  mov    %eax,-0x16c(%ebp)
08326b55 +0x3b3:  mov    -0x4c(%ebp),%eax
08326b58 +0x3b6:  mov    (%eax),%eax
08326b5a +0x3b8:  add    $0x8,%eax
08326b5d +0x3bb:  mov    (%eax),%edx
08326b5f +0x3bd:  lea    -0x173(%ebp),%eax
08326b65 +0x3c3:  mov    %eax,0x4(%esp)
08326b69 +0x3c7:  mov    -0x4c(%ebp),%eax
08326b6c +0x3ca:  mov    %eax,(%esp)
08326b6f +0x3cd:  call   *%edx
08326b71 +0x3cf:  mov    0xc(%ebp),%eax
08326b74 +0x3d2:  mov    %eax,(%esp)
08326b77 +0x3d5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08326b7c +0x3da:  movl   $0x0,0x4c(%esp)
08326b84 +0x3e2:  movl   $0x1,0x48(%esp)
08326b8c +0x3ea:  movl   $0xf,0x44(%esp)
08326b94 +0x3f2:  mov    -0x173(%ebp),%edx
08326b9a +0x3f8:  mov    %edx,0x4(%esp)
08326b9e +0x3fc:  mov    -0x16f(%ebp),%edx
08326ba4 +0x402:  mov    %edx,0x8(%esp)
08326ba8 +0x406:  mov    -0x16b(%ebp),%edx
08326bae +0x40c:  mov    %edx,0xc(%esp)
08326bb2 +0x410:  mov    -0x167(%ebp),%edx
08326bb8 +0x416:  mov    %edx,0x10(%esp)
08326bbc +0x41a:  mov    -0x163(%ebp),%edx
08326bc2 +0x420:  mov    %edx,0x14(%esp)
08326bc6 +0x424:  mov    -0x15f(%ebp),%edx
08326bcc +0x42a:  mov    %edx,0x18(%esp)
08326bd0 +0x42e:  mov    -0x15b(%ebp),%edx
08326bd6 +0x434:  mov    %edx,0x1c(%esp)
08326bda +0x438:  mov    -0x157(%ebp),%edx
08326be0 +0x43e:  mov    %edx,0x20(%esp)
08326be4 +0x442:  mov    -0x153(%ebp),%edx
08326bea +0x448:  mov    %edx,0x24(%esp)
08326bee +0x44c:  mov    -0x14f(%ebp),%edx
08326bf4 +0x452:  mov    %edx,0x28(%esp)
08326bf8 +0x456:  mov    -0x14b(%ebp),%edx
08326bfe +0x45c:  mov    %edx,0x2c(%esp)
08326c02 +0x460:  mov    -0x147(%ebp),%edx
08326c08 +0x466:  mov    %edx,0x30(%esp)
08326c0c +0x46a:  mov    -0x143(%ebp),%edx
08326c12 +0x470:  mov    %edx,0x34(%esp)
08326c16 +0x474:  mov    -0x13f(%ebp),%edx
08326c1c +0x47a:  mov    %edx,0x38(%esp)
08326c20 +0x47e:  mov    -0x13b(%ebp),%edx
08326c26 +0x484:  mov    %edx,0x3c(%esp)
08326c2a +0x488:  movzbl -0x137(%ebp),%edx
08326c31 +0x48f:  mov    %dl,0x40(%esp)
08326c35 +0x493:  mov    %eax,(%esp)
08326c38 +0x496:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08326c3d +0x49b:  mov    %eax,-0x44(%ebp)
08326c40 +0x49e:  cmpl   $0xffffffff,-0x44(%ebp)
08326c44 +0x4a2:  setne  %al
08326c47 +0x4a5:  test   %al,%al
08326c49 +0x4a7:  je     08326c6f <+0x4cd>
08326c4b +0x4a9:  mov    -0x44(%ebp),%eax
08326c4e +0x4ac:  mov    %eax,0xc(%esp)
08326c52 +0x4b0:  movl   $0x0,0x8(%esp)
08326c5a +0x4b8:  movl   $0x1,0x4(%esp)
08326c62 +0x4c0:  mov    0xc(%ebp),%eax
08326c65 +0x4c3:  mov    %eax,(%esp)
08326c68 +0x4c6:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08326c6d +0x4cb:  jmp    08326cb3 <+0x511>
08326c6f +0x4cd:  mov    0xc(%ebp),%eax
08326c72 +0x4d0:  mov    %eax,(%esp)
08326c75 +0x4d3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08326c7a +0x4d8:  movl   $0x0,0x18(%esp)
08326c82 +0x4e0:  movl   $0x0,0x14(%esp)
08326c8a +0x4e8:  movl   $0x1,0x10(%esp)
08326c92 +0x4f0:  mov    %eax,0xc(%esp)
08326c96 +0x4f4:  movl   $0x0,0x8(%esp)
08326c9e +0x4fc:  lea    -0x173(%ebp),%eax
08326ca4 +0x502:  mov    %eax,0x4(%esp)
08326ca8 +0x506:  mov    0xc(%ebp),%eax
08326cab +0x509:  mov    %eax,(%esp)
08326cae +0x50c:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
08326cb3 +0x511:  lea    -0x173(%ebp),%eax
08326cb9 +0x517:  mov    %eax,0x4(%esp)
08326cbd +0x51b:  mov    0x20(%ebp),%eax
08326cc0 +0x51e:  mov    %eax,(%esp)
08326cc3 +0x521:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08326cc8 +0x526:  jmp    08327448 <+0xca6>
08326ccd +0x52b:  movzwl -0x3fc(%ebp),%eax
08326cd4 +0x532:  mov    %eax,-0x48(%ebp)
08326cd7 +0x535:  mov    -0x4c(%ebp),%eax
08326cda +0x538:  mov    %eax,(%esp)
08326cdd +0x53b:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08326ce2 +0x540:  test   %al,%al
08326ce4 +0x542:  je     08326ced <+0x54b>
08326ce6 +0x544:  movl   $0x1,-0x48(%ebp)
08326ced +0x54b:  lea    -0x74(%ebp),%edx
08326cf0 +0x54e:  mov    $0x0,%ecx
08326cf5 +0x553:  mov    $0x18,%eax
08326cfa +0x558:  mov    %eax,%ebx
08326cfc +0x55a:  and    $0xfffffffc,%ebx
08326cff +0x55d:  mov    $0x0,%eax
08326d04 +0x562:  mov    %ecx,(%edx,%eax,1)
08326d07 +0x565:  add    $0x4,%eax
08326d0a +0x568:  cmp    %ebx,%eax
08326d0c +0x56a:  jb     08326d04 <+0x562>
08326d0e +0x56c:  add    %eax,%edx
08326d10 +0x56e:  mov    -0x4c(%ebp),%eax
08326d13 +0x571:  mov    (%eax),%eax
08326d15 +0x573:  add    $0x10,%eax
08326d18 +0x576:  mov    (%eax),%edx
08326d1a +0x578:  mov    -0x4c(%ebp),%eax
08326d1d +0x57b:  mov    %eax,(%esp)
08326d20 +0x57e:  call   *%edx
08326d22 +0x580:  test   %al,%al
08326d24 +0x582:  je     08326d48 <+0x5a6>
08326d26 +0x584:  mov    0xc(%ebp),%eax
08326d29 +0x587:  mov    %eax,(%esp)
08326d2c +0x58a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08326d31 +0x58f:  lea    -0x74(%ebp),%edx
08326d34 +0x592:  mov    %edx,0x8(%esp)
08326d38 +0x596:  mov    %eax,0x4(%esp)
08326d3c +0x59a:  movl   $0x3,(%esp)
08326d43 +0x5a1:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
08326d48 +0x5a6:  lea    -0x1b0(%ebp),%eax
08326d4e +0x5ac:  mov    %eax,(%esp)
08326d51 +0x5af:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08326d56 +0x5b4:  mov    0x10(%ebp),%eax
08326d59 +0x5b7:  mov    %eax,-0x1ae(%ebp)
08326d5f +0x5bd:  movzwl -0x3fc(%ebp),%eax
08326d66 +0x5c4:  mov    %eax,-0x1a9(%ebp)
08326d6c +0x5ca:  mov    -0x4c(%ebp),%eax
08326d6f +0x5cd:  mov    (%eax),%eax
08326d71 +0x5cf:  add    $0x8,%eax
08326d74 +0x5d2:  mov    (%eax),%edx
08326d76 +0x5d4:  lea    -0x1b0(%ebp),%eax
08326d7c +0x5da:  mov    %eax,0x4(%esp)
08326d80 +0x5de:  mov    -0x4c(%ebp),%eax
08326d83 +0x5e1:  mov    %eax,(%esp)
08326d86 +0x5e4:  call   *%edx
08326d88 +0x5e6:  cmpb   $0x0,-0x408(%ebp)
08326d8f +0x5ed:  je     08326daa <+0x608>
08326d91 +0x5ef:  movzbl -0x408(%ebp),%eax
08326d98 +0x5f6:  mov    %eax,0x4(%esp)
08326d9c +0x5fa:  lea    -0x1b0(%ebp),%eax
08326da2 +0x600:  mov    %eax,(%esp)
08326da5 +0x603:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08326daa +0x608:  mov    -0x1ae(%ebp),%eax
08326db0 +0x60e:  cmp    $0x71db,%eax
08326db5 +0x613:  je     08326deb <+0x649>
08326db7 +0x615:  mov    -0x1ae(%ebp),%eax
08326dbd +0x61b:  cmp    $0x72d0,%eax
08326dc2 +0x620:  je     08326deb <+0x649>
08326dc4 +0x622:  mov    -0x1ae(%ebp),%eax
08326dca +0x628:  cmp    $0x742d,%eax
08326dcf +0x62d:  je     08326deb <+0x649>
08326dd1 +0x62f:  mov    -0x1ae(%ebp),%eax
08326dd7 +0x635:  cmp    $0x7556,%eax
08326ddc +0x63a:  je     08326deb <+0x649>
08326dde +0x63c:  mov    -0x1ae(%ebp),%eax
08326de4 +0x642:  cmp    $0x7661,%eax
08326de9 +0x647:  jne    08326e01 <+0x65f>
08326deb +0x649:  movl   $0xc,0x4(%esp)
08326df3 +0x651:  lea    -0x1b0(%ebp),%eax
08326df9 +0x657:  mov    %eax,(%esp)
08326dfc +0x65a:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08326e01 +0x65f:  lea    -0x1b0(%ebp),%eax
08326e07 +0x665:  mov    %eax,0x8(%esp)
08326e0b +0x669:  mov    -0x4c(%ebp),%eax
08326e0e +0x66c:  mov    %eax,0x4(%esp)
08326e12 +0x670:  mov    0x8(%ebp),%eax
08326e15 +0x673:  mov    %eax,(%esp)
08326e18 +0x676:  call   08327f10 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item>  ; WongWork::CCeraShop::autoUnsealItem(CItem const*, Inven_Item&)
08326e1d +0x67b:  movl   $0x0,-0x78(%ebp)
08326e24 +0x682:  movl   $0x0,-0x40(%ebp)
08326e2b +0x689:  jmp    08327431 <+0xc8f>
08326e30 +0x68e:  mov    -0x4c(%ebp),%eax
08326e33 +0x691:  mov    (%eax),%eax
08326e35 +0x693:  add    $0x10,%eax
08326e38 +0x696:  mov    (%eax),%edx
08326e3a +0x698:  mov    -0x4c(%ebp),%eax
08326e3d +0x69b:  mov    %eax,(%esp)
08326e40 +0x69e:  call   *%edx
08326e42 +0x6a0:  test   %al,%al
08326e44 +0x6a2:  je     08326fe0 <+0x83e>
08326e4a +0x6a8:  mov    -0x4c(%ebp),%eax
08326e4d +0x6ab:  mov    %eax,-0x3c(%ebp)
08326e50 +0x6ae:  movzbl -0x404(%ebp),%eax
08326e57 +0x6b5:  mov    %eax,0x4(%esp)
08326e5b +0x6b9:  mov    -0x3c(%ebp),%eax
08326e5e +0x6bc:  mov    %eax,(%esp)
08326e61 +0x6bf:  call   08151120 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa55>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa55
08326e66 +0x6c4:  mov    %eax,-0x38(%ebp)
08326e69 +0x6c7:  movzbl -0x404(%ebp),%eax
08326e70 +0x6ce:  movsbl %al,%edi
08326e73 +0x6d1:  movzbl -0x400(%ebp),%eax
08326e7a +0x6d8:  movsbl %al,%esi
08326e7d +0x6db:  mov    0x10(%ebp),%ebx
08326e80 +0x6de:  mov    0xc(%ebp),%eax
08326e83 +0x6e1:  mov    %eax,(%esp)
08326e86 +0x6e4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08326e8b +0x6e9:  movl   $0x0,0x24(%esp)
08326e93 +0x6f1:  movl   $0x0,0x20(%esp)
08326e9b +0x6f9:  movl   $0x0,0x1c(%esp)
08326ea3 +0x701:  lea    -0x74(%ebp),%edx
08326ea6 +0x704:  mov    %edx,0x18(%esp)
08326eaa +0x708:  mov    %edi,0x14(%esp)
08326eae +0x70c:  mov    %esi,0x10(%esp)
08326eb2 +0x710:  movl   $0x0,0xc(%esp)
08326eba +0x718:  mov    -0x38(%ebp),%edx
08326ebd +0x71b:  mov    %edx,0x8(%esp)
08326ec1 +0x71f:  mov    %ebx,0x4(%esp)
08326ec5 +0x723:  mov    %eax,(%esp)
08326ec8 +0x726:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
08326ecd +0x72b:  mov    %eax,-0x34(%ebp)
08326ed0 +0x72e:  cmpl   $0x0,-0x34(%ebp)
08326ed4 +0x732:  js     08326efd <+0x75b>
08326ed6 +0x734:  mov    -0x34(%ebp),%eax
08326ed9 +0x737:  mov    %eax,0xc(%esp)
08326edd +0x73b:  movl   $0x1,0x8(%esp)
08326ee5 +0x743:  movl   $0x1,0x4(%esp)
08326eed +0x74b:  mov    0xc(%ebp),%eax
08326ef0 +0x74e:  mov    %eax,(%esp)
08326ef3 +0x751:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08326ef8 +0x756:  jmp    08326fc1 <+0x81f>
08326efd +0x75b:  movl   $0x0,-0x30(%ebp)
08326f04 +0x762:  cmpl   $0x0,-0x38(%ebp)
08326f08 +0x766:  je     08326f2d <+0x78b>
08326f0a +0x768:  cmpl   $0x16d,-0x38(%ebp)
08326f11 +0x76f:  je     08326f2d <+0x78b>
08326f13 +0x771:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08326f1a +0x778:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08326f1f +0x77d:  mov    -0x38(%ebp),%edx
08326f22 +0x780:  imul   $&_ZL14gUnicodeBuffer+0xac54,%edx,%edx
08326f28 +0x786:  add    %edx,%eax
08326f2a +0x788:  mov    %eax,-0x30(%ebp)
08326f2d +0x78b:  movl   $0x0,0xc(%esp)
08326f35 +0x793:  movl   $"game_server_msg_104",0x8(%esp)
08326f3d +0x79b:  movl   $0x4,0x4(%esp)
08326f45 +0x7a3:  movl   $&g_scriptStringManager_,(%esp)
08326f4c +0x7aa:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08326f51 +0x7af:  mov    %eax,-0x2c(%ebp)
08326f54 +0x7b2:  mov    -0x2c(%ebp),%eax
08326f57 +0x7b5:  mov    %eax,(%esp)
08326f5a +0x7b8:  call   0807e3b0 <_init+0xca8>
08326f5f +0x7bd:  mov    %eax,-0x40c(%ebp)
08326f65 +0x7c3:  movzbl -0x404(%ebp),%eax
08326f6c +0x7ca:  movsbl %al,%edi
08326f6f +0x7cd:  movzbl -0x400(%ebp),%eax
08326f76 +0x7d4:  movsbl %al,%esi
08326f79 +0x7d7:  mov    0x10(%ebp),%ebx
08326f7c +0x7da:  mov    0xc(%ebp),%eax
08326f7f +0x7dd:  mov    %eax,(%esp)
08326f82 +0x7e0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08326f87 +0x7e5:  mov    -0x40c(%ebp),%edx
08326f8d +0x7eb:  mov    %edx,0x20(%esp)
08326f91 +0x7ef:  mov    -0x2c(%ebp),%edx
08326f94 +0x7f2:  mov    %edx,0x1c(%esp)
08326f98 +0x7f6:  lea    -0x74(%ebp),%edx
08326f9b +0x7f9:  mov    %edx,0x18(%esp)
08326f9f +0x7fd:  mov    %edi,0x14(%esp)
08326fa3 +0x801:  mov    %esi,0x10(%esp)
08326fa7 +0x805:  mov    -0x30(%ebp),%edx
08326faa +0x808:  mov    %edx,0xc(%esp)
08326fae +0x80c:  mov    %ebx,0x8(%esp)
08326fb2 +0x810:  mov    %eax,0x4(%esp)
08326fb6 +0x814:  mov    0xc(%ebp),%eax
08326fb9 +0x817:  mov    %eax,(%esp)
08326fbc +0x81a:  call   085561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
08326fc1 +0x81f:  movl   $0x1,0x8(%esp)
08326fc9 +0x827:  mov    0x10(%ebp),%eax
08326fcc +0x82a:  mov    %eax,0x4(%esp)
08326fd0 +0x82e:  mov    0xc(%ebp),%eax
08326fd3 +0x831:  mov    %eax,(%esp)
08326fd6 +0x834:  call   08692b84 <_ZN5CUser20SendAradEventItemLogEmi>  ; CUser::SendAradEventItemLog(unsigned long, int)
08326fdb +0x839:  jmp    083273e0 <+0xc3e>
08326fe0 +0x83e:  mov    -0x4c(%ebp),%eax
08326fe3 +0x841:  mov    (%eax),%eax
08326fe5 +0x843:  add    $0x14,%eax
08326fe8 +0x846:  mov    (%eax),%edx
08326fea +0x848:  mov    -0x4c(%ebp),%eax
08326fed +0x84b:  mov    %eax,(%esp)
08326ff0 +0x84e:  call   *%edx
08326ff2 +0x850:  test   %al,%al
08326ff4 +0x852:  je     083270f1 <+0x94f>
08326ffa +0x858:  mov    -0x4c(%ebp),%eax
08326ffd +0x85b:  mov    %eax,-0x28(%ebp)
08327000 +0x85e:  mov    -0x28(%ebp),%eax
08327003 +0x861:  mov    %eax,(%esp)
08327006 +0x864:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0832700b +0x869:  mov    %eax,%ebx
0832700d +0x86b:  mov    -0x28(%ebp),%eax
08327010 +0x86e:  mov    %eax,(%esp)
08327013 +0x871:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08327018 +0x876:  mov    %ebx,0x58(%esp)
0832701c +0x87a:  mov    %eax,0x54(%esp)
08327020 +0x87e:  movl   $0x0,0x50(%esp)
08327028 +0x886:  lea    -0x78(%ebp),%eax
0832702b +0x889:  mov    %eax,0x4c(%esp)
0832702f +0x88d:  lea    -0x94(%ebp),%eax
08327035 +0x893:  mov    %eax,0x48(%esp)
08327039 +0x897:  mov    -0x1b0(%ebp),%eax
0832703f +0x89d:  mov    %eax,0x8(%esp)
08327043 +0x8a1:  mov    -0x1ac(%ebp),%eax
08327049 +0x8a7:  mov    %eax,0xc(%esp)
0832704d +0x8ab:  mov    -0x1a8(%ebp),%eax
08327053 +0x8b1:  mov    %eax,0x10(%esp)
08327057 +0x8b5:  mov    -0x1a4(%ebp),%eax
0832705d +0x8bb:  mov    %eax,0x14(%esp)
08327061 +0x8bf:  mov    -0x1a0(%ebp),%eax
08327067 +0x8c5:  mov    %eax,0x18(%esp)
0832706b +0x8c9:  mov    -0x19c(%ebp),%eax
08327071 +0x8cf:  mov    %eax,0x1c(%esp)
08327075 +0x8d3:  mov    -0x198(%ebp),%eax
0832707b +0x8d9:  mov    %eax,0x20(%esp)
0832707f +0x8dd:  mov    -0x194(%ebp),%eax
08327085 +0x8e3:  mov    %eax,0x24(%esp)
08327089 +0x8e7:  mov    -0x190(%ebp),%eax
0832708f +0x8ed:  mov    %eax,0x28(%esp)
08327093 +0x8f1:  mov    -0x18c(%ebp),%eax
08327099 +0x8f7:  mov    %eax,0x2c(%esp)
0832709d +0x8fb:  mov    -0x188(%ebp),%eax
083270a3 +0x901:  mov    %eax,0x30(%esp)
083270a7 +0x905:  mov    -0x184(%ebp),%eax
083270ad +0x90b:  mov    %eax,0x34(%esp)
083270b1 +0x90f:  mov    -0x180(%ebp),%eax
083270b7 +0x915:  mov    %eax,0x38(%esp)
083270bb +0x919:  mov    -0x17c(%ebp),%eax
083270c1 +0x91f:  mov    %eax,0x3c(%esp)
083270c5 +0x923:  mov    -0x178(%ebp),%eax
083270cb +0x929:  mov    %eax,0x40(%esp)
083270cf +0x92d:  movzbl -0x174(%ebp),%eax
083270d6 +0x934:  mov    %al,0x44(%esp)
083270da +0x938:  mov    0xc(%ebp),%eax
083270dd +0x93b:  mov    %eax,0x4(%esp)
083270e1 +0x93f:  mov    0x8(%ebp),%eax
083270e4 +0x942:  mov    %eax,(%esp)
083270e7 +0x945:  call   08325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>  ; WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)
083270ec +0x94a:  jmp    083273e0 <+0xc3e>
083270f1 +0x94f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
083270f8 +0x956:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
083270fd +0x95b:  mov    %eax,-0x24(%ebp)
08327100 +0x95e:  mov    0x24(%ebp),%eax
08327103 +0x961:  mov    %eax,0x60(%esp)
08327107 +0x965:  mov    0x20(%ebp),%eax
0832710a +0x968:  mov    %eax,0x5c(%esp)
0832710e +0x96c:  movl   $0x0,0x58(%esp)
08327116 +0x974:  movl   $0x1,0x54(%esp)
0832711e +0x97c:  mov    -0x24(%ebp),%eax
08327121 +0x97f:  mov    %eax,0x50(%esp)
08327125 +0x983:  lea    -0x78(%ebp),%eax
08327128 +0x986:  mov    %eax,0x4c(%esp)
0832712c +0x98a:  movl   $0x0,0x48(%esp)
08327134 +0x992:  mov    -0x1b0(%ebp),%eax
0832713a +0x998:  mov    %eax,0x8(%esp)
0832713e +0x99c:  mov    -0x1ac(%ebp),%eax
08327144 +0x9a2:  mov    %eax,0xc(%esp)
08327148 +0x9a6:  mov    -0x1a8(%ebp),%eax
0832714e +0x9ac:  mov    %eax,0x10(%esp)
08327152 +0x9b0:  mov    -0x1a4(%ebp),%eax
08327158 +0x9b6:  mov    %eax,0x14(%esp)
0832715c +0x9ba:  mov    -0x1a0(%ebp),%eax
08327162 +0x9c0:  mov    %eax,0x18(%esp)
08327166 +0x9c4:  mov    -0x19c(%ebp),%eax
0832716c +0x9ca:  mov    %eax,0x1c(%esp)
08327170 +0x9ce:  mov    -0x198(%ebp),%eax
08327176 +0x9d4:  mov    %eax,0x20(%esp)
0832717a +0x9d8:  mov    -0x194(%ebp),%eax
08327180 +0x9de:  mov    %eax,0x24(%esp)
08327184 +0x9e2:  mov    -0x190(%ebp),%eax
0832718a +0x9e8:  mov    %eax,0x28(%esp)
0832718e +0x9ec:  mov    -0x18c(%ebp),%eax
08327194 +0x9f2:  mov    %eax,0x2c(%esp)
08327198 +0x9f6:  mov    -0x188(%ebp),%eax
0832719e +0x9fc:  mov    %eax,0x30(%esp)
083271a2 +0xa00:  mov    -0x184(%ebp),%eax
083271a8 +0xa06:  mov    %eax,0x34(%esp)
083271ac +0xa0a:  mov    -0x180(%ebp),%eax
083271b2 +0xa10:  mov    %eax,0x38(%esp)
083271b6 +0xa14:  mov    -0x17c(%ebp),%eax
083271bc +0xa1a:  mov    %eax,0x3c(%esp)
083271c0 +0xa1e:  mov    -0x178(%ebp),%eax
083271c6 +0xa24:  mov    %eax,0x40(%esp)
083271ca +0xa28:  movzbl -0x174(%ebp),%eax
083271d1 +0xa2f:  mov    %al,0x44(%esp)
083271d5 +0xa33:  mov    0xc(%ebp),%eax
083271d8 +0xa36:  mov    %eax,0x4(%esp)
083271dc +0xa3a:  mov    0x8(%ebp),%eax
083271df +0xa3d:  mov    %eax,(%esp)
083271e2 +0xa40:  call   08325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>  ; WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
083271e7 +0xa45:  mov    -0x1ae(%ebp),%eax
083271ed +0xa4b:  mov    %eax,%ebx
083271ef +0xa4d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083271f4 +0xa52:  mov    %ebx,0x4(%esp)
083271f8 +0xa56:  mov    %eax,(%esp)
083271fb +0xa59:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08327200 +0xa5e:  mov    %eax,-0x20(%ebp)
08327203 +0xa61:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08327208 +0xa66:  movl   $0x10,0x4(%esp)
08327210 +0xa6e:  mov    %eax,(%esp)
08327213 +0xa71:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08327218 +0xa76:  mov    %eax,-0x1c(%ebp)
0832721b +0xa79:  mov    -0x1ae(%ebp),%eax
08327221 +0xa7f:  cmp    $0xc1,%eax
08327226 +0xa84:  jne    083273e0 <+0xc3e>
0832722c +0xa8a:  cmpl   $0x0,-0x20(%ebp)
08327230 +0xa8e:  je     083273e0 <+0xc3e>
08327236 +0xa94:  lea    -0xa0(%ebp),%eax
0832723c +0xa9a:  mov    %eax,(%esp)
0832723f +0xa9d:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08327244 +0xaa2:  lea    -0xb8(%ebp),%eax
0832724a +0xaa8:  mov    %eax,(%esp)
0832724d +0xaab:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08327252 +0xab0:  movl   $0x0,-0xbc(%ebp)
0832725c +0xaba:  lea    -0x1ed(%ebp),%eax
08327262 +0xac0:  mov    %eax,(%esp)
08327265 +0xac3:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0832726a +0xac8:  mov    -0x1c(%ebp),%eax
0832726d +0xacb:  mov    (%eax),%eax
0832726f +0xacd:  add    $0x8,%eax
08327272 +0xad0:  mov    (%eax),%edx
08327274 +0xad2:  lea    -0x1ed(%ebp),%eax
0832727a +0xad8:  mov    %eax,0x4(%esp)
0832727e +0xadc:  mov    -0x1c(%ebp),%eax
08327281 +0xadf:  mov    %eax,(%esp)
08327284 +0xae2:  call   *%edx
08327286 +0xae4:  movl   $0x10,-0x1eb(%ebp)
08327290 +0xaee:  movl   $0x1,-0x1e6(%ebp)
0832729a +0xaf8:  lea    -0xb8(%ebp),%eax
083272a0 +0xafe:  mov    %eax,0x60(%esp)
083272a4 +0xb02:  lea    -0xa0(%ebp),%eax
083272aa +0xb08:  mov    %eax,0x5c(%esp)
083272ae +0xb0c:  movl   $0x1,0x58(%esp)
083272b6 +0xb14:  movl   $0x0,0x54(%esp)
083272be +0xb1c:  mov    -0x24(%ebp),%eax
083272c1 +0xb1f:  mov    %eax,0x50(%esp)
083272c5 +0xb23:  lea    -0xbc(%ebp),%eax
083272cb +0xb29:  mov    %eax,0x4c(%esp)
083272cf +0xb2d:  movl   $0xc352,0x48(%esp)
083272d7 +0xb35:  mov    -0x1ed(%ebp),%eax
083272dd +0xb3b:  mov    %eax,0x8(%esp)
083272e1 +0xb3f:  mov    -0x1e9(%ebp),%eax
083272e7 +0xb45:  mov    %eax,0xc(%esp)
083272eb +0xb49:  mov    -0x1e5(%ebp),%eax
083272f1 +0xb4f:  mov    %eax,0x10(%esp)
083272f5 +0xb53:  mov    -0x1e1(%ebp),%eax
083272fb +0xb59:  mov    %eax,0x14(%esp)
083272ff +0xb5d:  mov    -0x1dd(%ebp),%eax
08327305 +0xb63:  mov    %eax,0x18(%esp)
08327309 +0xb67:  mov    -0x1d9(%ebp),%eax
0832730f +0xb6d:  mov    %eax,0x1c(%esp)
08327313 +0xb71:  mov    -0x1d5(%ebp),%eax
08327319 +0xb77:  mov    %eax,0x20(%esp)
0832731d +0xb7b:  mov    -0x1d1(%ebp),%eax
08327323 +0xb81:  mov    %eax,0x24(%esp)
08327327 +0xb85:  mov    -0x1cd(%ebp),%eax
0832732d +0xb8b:  mov    %eax,0x28(%esp)
08327331 +0xb8f:  mov    -0x1c9(%ebp),%eax
08327337 +0xb95:  mov    %eax,0x2c(%esp)
0832733b +0xb99:  mov    -0x1c5(%ebp),%eax
08327341 +0xb9f:  mov    %eax,0x30(%esp)
08327345 +0xba3:  mov    -0x1c1(%ebp),%eax
0832734b +0xba9:  mov    %eax,0x34(%esp)
0832734f +0xbad:  mov    -0x1bd(%ebp),%eax
08327355 +0xbb3:  mov    %eax,0x38(%esp)
08327359 +0xbb7:  mov    -0x1b9(%ebp),%eax
0832735f +0xbbd:  mov    %eax,0x3c(%esp)
08327363 +0xbc1:  mov    -0x1b5(%ebp),%eax
08327369 +0xbc7:  mov    %eax,0x40(%esp)
0832736d +0xbcb:  movzbl -0x1b1(%ebp),%eax
08327374 +0xbd2:  mov    %al,0x44(%esp)
08327378 +0xbd6:  mov    0xc(%ebp),%eax
0832737b +0xbd9:  mov    %eax,0x4(%esp)
0832737f +0xbdd:  mov    0x8(%ebp),%eax
08327382 +0xbe0:  mov    %eax,(%esp)
08327385 +0xbe3:  call   08325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>  ; WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
0832738a +0xbe8:  jmp    083273a4 <+0xc02>
0832738c +0xbea:  mov    %edx,%ebx
0832738e +0xbec:  mov    %eax,%esi
08327390 +0xbee:  lea    -0xb8(%ebp),%eax
08327396 +0xbf4:  mov    %eax,(%esp)
08327399 +0xbf7:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
0832739e +0xbfc:  mov    %esi,%eax
083273a0 +0xbfe:  mov    %ebx,%edx
083273a2 +0xc00:  jmp    083273b4 <+0xc12>
083273a4 +0xc02:  lea    -0xb8(%ebp),%eax
083273aa +0xc08:  mov    %eax,(%esp)
083273ad +0xc0b:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
083273b2 +0xc10:  jmp    083273d2 <+0xc30>
083273b4 +0xc12:  mov    %edx,%ebx
083273b6 +0xc14:  mov    %eax,%esi
083273b8 +0xc16:  lea    -0xa0(%ebp),%eax
083273be +0xc1c:  mov    %eax,(%esp)
083273c1 +0xc1f:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
083273c6 +0xc24:  mov    %esi,%eax
083273c8 +0xc26:  mov    %ebx,%edx
083273ca +0xc28:  mov    %eax,(%esp)
083273cd +0xc2b:  call   08ae3750 <_Unwind_Resume>
083273d2 +0xc30:  lea    -0xa0(%ebp),%eax
083273d8 +0xc36:  mov    %eax,(%esp)
083273db +0xc39:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
083273e0 +0xc3e:  mov    -0x4c(%ebp),%eax
083273e3 +0xc41:  mov    %eax,(%esp)
083273e6 +0xc44:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
083273eb +0xc49:  test   %al,%al
083273ed +0xc4b:  je     08327418 <+0xc76>
083273ef +0xc4d:  mov    -0x4c(%ebp),%eax
083273f2 +0xc50:  mov    %eax,(%esp)
083273f5 +0xc53:  call   08326739 <_Z14_isPackageItemPK5CItem>  ; _isPackageItem(CItem const*)
083273fa +0xc58:  xor    $0x1,%eax
083273fd +0xc5b:  test   %al,%al
083273ff +0xc5d:  je     0832742d <+0xc8b>
08327401 +0xc5f:  lea    -0x1b0(%ebp),%eax
08327407 +0xc65:  mov    %eax,0x4(%esp)
0832740b +0xc69:  mov    0x20(%ebp),%eax
0832740e +0xc6c:  mov    %eax,(%esp)
08327411 +0xc6f:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08327416 +0xc74:  jmp    0832742d <+0xc8b>
08327418 +0xc76:  lea    -0x1b0(%ebp),%eax
0832741e +0xc7c:  mov    %eax,0x4(%esp)
08327422 +0xc80:  mov    0x20(%ebp),%eax
08327425 +0xc83:  mov    %eax,(%esp)
08327428 +0xc86:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
0832742d +0xc8b:  addl   $0x1,-0x40(%ebp)
08327431 +0xc8f:  mov    -0x40(%ebp),%eax
08327434 +0xc92:  cmp    -0x48(%ebp),%eax
08327437 +0xc95:  setl   %al
0832743a +0xc98:  test   %al,%al
0832743c +0xc9a:  jne    08326e30 <+0x68e>
08327442 +0xca0:  jmp    08327448 <+0xca6>
08327444 +0xca2:  nop
08327445 +0xca3:  jmp    08327448 <+0xca6>
08327447 +0xca5:  nop
08327448 +0xca6:  add    $0x47c,%esp
0832744e +0xcac:  pop    %ebx
0832744f +0xcad:  pop    %esi
08327450 +0xcae:  pop    %edi
08327451 +0xcaf:  pop    %ebp
08327452 +0xcb0:  ret
08327453 +0xcb1:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_processAdditionalItem @ 0x83267a2

/* WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char,
   unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char) */

void __thiscall
WongWork::CCeraShop::_processAdditionalItem
          (CCeraShop *this,CUser *param_1,ulong param_2,ushort param_3,uchar param_4,uchar param_5,
          vector *param_6,stCeraShopItemParam_t *param_7,uchar param_8)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  size_t sVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  char local_3f1;
  char local_3f0 [511];
  undefined2 local_1f1;
  undefined2 uStack_1ef;
  undefined2 uStack_1ed;
  undefined1 uStack_1eb;
  undefined4 uStack_1ea;
  byte bStack_1e6;
  undefined4 local_1e5;
  undefined4 local_1e1;
  undefined4 local_1dd;
  undefined4 local_1d9;
  undefined4 local_1d5;
  undefined4 local_1d1;
  undefined4 local_1cd;
  undefined4 local_1c9;
  undefined4 local_1c5;
  undefined4 local_1c1;
  undefined4 local_1bd;
  undefined4 local_1b9;
  undefined1 local_1b5;
  undefined2 local_1b4;
  undefined4 uStack_1b2;
  undefined1 uStack_1ae;
  uint uStack_1ad;
  undefined1 uStack_1a9;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined2 local_177;
  undefined4 uStack_175;
  undefined1 uStack_171;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined4 local_153;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined1 local_13b;
  Inven_Item local_13a [2];
  int local_138;
  uint local_133;
  Inven_Item local_fd [2];
  undefined4 local_fb;
  uint local_f6;
  undefined4 local_c0;
  stCeraShopItemParam_t local_bc [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_a4 [12];
  undefined1 local_98 [4];
  PacketGuard local_94 [12];
  PacketGuard local_88 [12];
  undefined4 local_7c;
  char local_78 [24];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  CItem *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  CEquipItem *local_40;
  int local_3c;
  int local_38;
  int local_34;
  char *local_30;
  CItem *local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  
  bVar13 = 0;
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    if (param_2 == 1) {
      _processCoin((CUser *)this,(ushort)param_1,SUB21(param_3,0));
      Inven_Item::Inven_Item(local_fd);
      local_fb = 1;
      local_f6 = (uint)param_3;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,local_fd);
    }
    else {
      local_60 = 0;
      local_5c = 0;
      local_58 = -1;
      pcVar10 = &local_3f1;
      uVar11 = 0x200;
      bVar12 = ((uint)pcVar10 & 1) != 0;
      if (bVar12) {
        local_3f1 = '\0';
        pcVar10 = local_3f0;
        uVar11 = 0x1ff;
      }
      if (((uint)pcVar10 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
        uVar11 = uVar11 - 2;
      }
      for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
      }
      if ((uVar11 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      if (bVar12) {
        *pcVar10 = '\0';
      }
      local_54 = 0;
      if (local_58 == -1) {
        pCVar4 = (CDataManager *)G_CDataManager();
        local_50 = (CItem *)CDataManager::find_item(pCVar4,param_2);
        if (local_50 != (CItem *)0x0) {
          cVar2 = CItem::is_stackable(local_50);
          if ((cVar2 == '\0') ||
             ((iVar3 = (**(code **)(*(int *)local_50 + 0xc))(local_50), iVar3 != 0x10 &&
              (iVar3 = (**(code **)(*(int *)local_50 + 0xc))(local_50), iVar3 != 0x22)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (bVar12) {
            local_48 = 0xffffffff;
            Inven_Item::Inven_Item((Inven_Item *)&local_177);
            uStack_170 = (uint)param_3;
            uStack_175 = param_2;
            (**(code **)(*(int *)local_50 + 8))(local_50,&local_177);
            uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_48 = CInventory::insertItemIntoInventory
                                 (uVar5,CONCAT22((undefined2)uStack_175,local_177),
                                  CONCAT13((undefined1)uStack_170,
                                           CONCAT12(uStack_171,uStack_175._2_2_)),
                                  CONCAT13(uStack_16c,uStack_170._1_3_),local_16b,local_167,
                                  local_163,local_15f,local_15b,local_157,local_153,local_14f,
                                  local_14b,local_147,local_143,local_13f,local_13b,0xf,1,0);
            if (local_48 == -1) {
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CMailBoxHelper::ReqDBSendNewMailCashShop
                        (param_1,(Inven_Item *)&local_177,0,uVar11,true,(char *)0x0,0);
            }
            else {
              CUser::SendUpdateItemList(param_1,1,0,local_48);
            }
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                       (Inven_Item *)&local_177);
          }
          else {
            local_4c = (uint)param_3;
            cVar2 = CItem::is_stackable(local_50);
            if (cVar2 != '\0') {
              local_4c = 1;
            }
            uVar11 = 0;
            do {
              pcVar10 = local_78 + uVar11;
              pcVar10[0] = '\0';
              pcVar10[1] = '\0';
              pcVar10[2] = '\0';
              pcVar10[3] = '\0';
              uVar11 = uVar11 + 4;
            } while (uVar11 < 0x18);
            cVar2 = (**(code **)(*(int *)local_50 + 0x10))(local_50);
            if (cVar2 != '\0') {
              uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CGenUniqueNo::genIPGNo(3,uVar5,local_78);
            }
            Inven_Item::Inven_Item((Inven_Item *)&local_1b4);
            uStack_1ad = (uint)param_3;
            uStack_1b2 = param_2;
            (**(code **)(*(int *)local_50 + 8))(local_50,&local_1b4);
            if (param_8 != '\0') {
              Inven_Item::SetUpgrade((Inven_Item *)&local_1b4,param_8);
            }
            if ((((uStack_1b2 == 0x71db) || (uStack_1b2 == 0x72d0)) || (uStack_1b2 == 0x742d)) ||
               ((uStack_1b2 == 0x7556 || (uStack_1b2 == 0x7661)))) {
              Inven_Item::SetUpgrade((Inven_Item *)&local_1b4,'\f');
            }
            autoUnsealItem(this,local_50,(Inven_Item *)&local_1b4);
            local_7c = 0;
            for (local_44 = 0; local_44 < (int)local_4c; local_44 = local_44 + 1) {
              cVar2 = (**(code **)(*(int *)local_50 + 0x10))(local_50);
              if (cVar2 == '\0') {
                cVar2 = (**(code **)(*(int *)local_50 + 0x14))(local_50);
                if (cVar2 == '\0') {
                  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  _processItem(this,param_1,CONCAT22((undefined2)uStack_1b2,local_1b4),
                               CONCAT13((undefined1)uStack_1ad,CONCAT12(uStack_1ae,uStack_1b2._2_2_)
                                       ),CONCAT13(uStack_1a9,uStack_1ad._1_3_),local_1a8,local_1a4,
                               local_1a0,local_19c,local_198,local_194,local_190,local_18c,local_188
                               ,local_184,local_180,local_17c,local_178,0,&local_7c,local_28,1,0,
                               param_6,param_7);
                  uVar1 = uStack_1b2;
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_24 = CDataManager::find_item(pCVar4,uVar1);
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_20 = (int *)CDataManager::find_item(pCVar4,0x10);
                  if ((uStack_1b2 == 0xc1) && (local_24 != 0)) {
                    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_a4);
                    /* try { // try from 0832724d to 08327251 has its CatchHandler @ 083273b4 */
                    stCeraShopItemParam_t::stCeraShopItemParam_t(local_bc);
                    local_c0 = 0;
                    Inven_Item::Inven_Item((Inven_Item *)&local_1f1);
                    /* try { // try from 08327284 to 08327389 has its CatchHandler @ 0832738c */
                    (**(code **)(*local_20 + 8))(local_20,&local_1f1);
                    uStack_1ef = 0x10;
                    uStack_1ed = 0;
                    uStack_1ea = 1;
                    _processItem(this,param_1,CONCAT22(0x10,local_1f1),
                                 (uint)CONCAT11(1,uStack_1eb) << 0x10,(uint)bStack_1e6 << 0x18,
                                 local_1e5,local_1e1,local_1dd,local_1d9,local_1d5,local_1d1,
                                 local_1cd,local_1c9,local_1c5,local_1c1,local_1bd,local_1b9,
                                 local_1b5,0xc352,&local_c0,local_28,0,1,local_a4,local_bc);
                    /* try { // try from 083273ad to 083273b1 has its CatchHandler @ 083273b4 */
                    stCeraShopItemParam_t::~stCeraShopItemParam_t(local_bc);
                    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_a4);
                  }
                }
                else {
                  local_2c = local_50;
                  uVar5 = CItem::getExpirationDate(local_50);
                  uVar8 = CItem::getUsablePeriod(local_2c);
                  _processCreature(this,param_1,CONCAT22((undefined2)uStack_1b2,local_1b4),
                                   CONCAT13((undefined1)uStack_1ad,
                                            CONCAT12(uStack_1ae,uStack_1b2._2_2_)),
                                   CONCAT13(uStack_1a9,uStack_1ad._1_3_),local_1a8,local_1a4,
                                   local_1a0,local_19c,local_198,local_194,local_190,local_18c,
                                   local_188,local_184,local_180,local_17c,local_178,local_98,
                                   &local_7c,0,uVar8,uVar5);
                }
              }
              else {
                local_40 = (CEquipItem *)local_50;
                local_3c = CEquipItem::getAvatarPeriod((CEquipItem *)local_50,param_5);
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_38 = CInventory::AddAvatarItem
                                     (pCVar6,param_2,local_3c,0,(int)(char)param_4,
                                      (int)(char)param_5,local_78,0,0,0);
                if (local_38 < 0) {
                  local_34 = 0;
                  if ((local_3c != 0) && (local_3c != 0x16d)) {
                    local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    local_34 = local_34 + local_3c * 0x15180;
                  }
                  local_30 = (char *)RDARScriptStringManager::findString
                                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                                "game_server_msg_104",(bool *)0x0);
                  sVar7 = strlen(local_30);
                  iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  CMailBoxHelper::ReqDBSendNewAvatarMail
                            (param_1,iVar3,param_2,local_34,param_4,param_5,local_78,local_30,sVar7)
                  ;
                }
                else {
                  CUser::SendUpdateItemList(param_1,1,1,local_38);
                }
                CUser::SendAradEventItemLog(param_1,param_2,1);
              }
              cVar2 = CItem::is_stackable(local_50);
              if (cVar2 == '\0') {
                std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                          ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                           (Inven_Item *)&local_1b4);
              }
              else {
                cVar2 = _isPackageItem(local_50);
                if (cVar2 != '\x01') {
                  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                             (Inven_Item *)&local_1b4);
                }
              }
            }
          }
        }
      }
      else {
        PacketGuard::PacketGuard(local_88);
                    /* try { // try from 083268fc to 0832699d has its CatchHandler @ 08326a87 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,local_60);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,local_5c);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
        CUser::Send(param_1,local_88);
        Inven_Item::Inven_Item(local_13a);
        local_138 = local_58;
        local_133 = (uint)param_3;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,local_13a);
        PacketGuard::PacketGuard(local_94);
                    /* try { // try from 083269b7 to 08326a5c has its CatchHandler @ 08326a5f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_54);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_94,&local_3f1,local_54);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
        CUser::Send(param_1,local_94);
                    /* try { // try from 08326a80 to 08326a84 has its CatchHandler @ 08326a87 */
        PacketGuard::~PacketGuard(local_94);
        PacketGuard::~PacketGuard(local_88);
      }
    }
  }
  return;
}
```
