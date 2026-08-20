# tryInsertEventItems

`_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE`

`CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850675e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850675e  _ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE
#           CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0850675e, 0x08506bb1]
0850675e +0x000:  push   %ebp
0850675f +0x001:  mov    %esp,%ebp
08506761 +0x003:  sub    $0xe8,%esp
08506767 +0x009:  movl   $0x0,-0x20(%ebp)
0850676e +0x010:  mov    0xc(%ebp),%eax
08506771 +0x013:  mov    %eax,(%esp)
08506774 +0x016:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08506779 +0x01b:  test   %eax,%eax
0850677b +0x01d:  sete   %al
0850677e +0x020:  test   %al,%al
08506780 +0x022:  je     0850678a <+0x2c>
08506782 +0x024:  mov    -0x20(%ebp),%eax
08506785 +0x027:  jmp    08506baf <+0x451>
0850678a +0x02c:  lea    -0x44(%ebp),%eax
0850678d +0x02f:  mov    %eax,(%esp)
08506790 +0x032:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08506795 +0x037:  lea    -0x48(%ebp),%eax
08506798 +0x03a:  mov    %eax,(%esp)
0850679b +0x03d:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
085067a0 +0x042:  lea    -0x8c(%ebp),%eax
085067a6 +0x048:  mov    0xc(%ebp),%edx
085067a9 +0x04b:  mov    %edx,0x4(%esp)
085067ad +0x04f:  mov    %eax,(%esp)
085067b0 +0x052:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
085067b5 +0x057:  sub    $0x4,%esp
085067b8 +0x05a:  mov    -0x8c(%ebp),%eax
085067be +0x060:  mov    %eax,-0x48(%ebp)
085067c1 +0x063:  lea    -0x85(%ebp),%eax
085067c7 +0x069:  mov    %eax,(%esp)
085067ca +0x06c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085067cf +0x071:  jmp    08506b77 <+0x419>
085067d4 +0x076:  lea    -0x48(%ebp),%eax
085067d7 +0x079:  mov    %eax,(%esp)
085067da +0x07c:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
085067df +0x081:  mov    0x4(%eax),%edx
085067e2 +0x084:  mov    (%eax),%eax
085067e4 +0x086:  mov    %eax,-0x38(%ebp)
085067e7 +0x089:  mov    %edx,-0x34(%ebp)
085067ea +0x08c:  lea    -0x38(%ebp),%eax
085067ed +0x08f:  mov    %eax,0x4(%esp)
085067f1 +0x093:  lea    -0x44(%ebp),%eax
085067f4 +0x096:  mov    %eax,(%esp)
085067f7 +0x099:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
085067fc +0x09e:  mov    -0x44(%ebp),%eax
085067ff +0x0a1:  mov    %eax,-0x14(%ebp)
08506802 +0x0a4:  mov    -0x40(%ebp),%eax
08506805 +0x0a7:  mov    %eax,-0x18(%ebp)
08506808 +0x0aa:  cmpl   $0x0,-0x14(%ebp)
0850680c +0x0ae:  jne    08506834 <+0xd6>
0850680e +0x0b0:  addl   $0x1,-0x20(%ebp)
08506812 +0x0b4:  lea    -0x30(%ebp),%eax
08506815 +0x0b7:  movl   $0x0,0x8(%esp)
0850681d +0x0bf:  lea    -0x48(%ebp),%edx
08506820 +0x0c2:  mov    %edx,0x4(%esp)
08506824 +0x0c6:  mov    %eax,(%esp)
08506827 +0x0c9:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850682c +0x0ce:  sub    $0x4,%esp
0850682f +0x0d1:  jmp    08506b77 <+0x419>
08506834 +0x0d6:  cmpl   $0x1,-0x14(%ebp)
08506838 +0x0da:  jne    08506860 <+0x102>
0850683a +0x0dc:  addl   $0x1,-0x20(%ebp)
0850683e +0x0e0:  lea    -0x2c(%ebp),%eax
08506841 +0x0e3:  movl   $0x0,0x8(%esp)
08506849 +0x0eb:  lea    -0x48(%ebp),%edx
0850684c +0x0ee:  mov    %edx,0x4(%esp)
08506850 +0x0f2:  mov    %eax,(%esp)
08506853 +0x0f5:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08506858 +0x0fa:  sub    $0x4,%esp
0850685b +0x0fd:  jmp    08506b77 <+0x419>
08506860 +0x102:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08506865 +0x107:  mov    -0x14(%ebp),%edx
08506868 +0x10a:  mov    %edx,0x4(%esp)
0850686c +0x10e:  mov    %eax,(%esp)
0850686f +0x111:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08506874 +0x116:  mov    %eax,-0x1c(%ebp)
08506877 +0x119:  cmpl   $0x0,-0x1c(%ebp)
0850687b +0x11d:  jne    085068a2 <+0x144>
0850687d +0x11f:  lea    -0x28(%ebp),%eax
08506880 +0x122:  movl   $0x0,0x8(%esp)
08506888 +0x12a:  lea    -0x48(%ebp),%edx
0850688b +0x12d:  mov    %edx,0x4(%esp)
0850688f +0x131:  mov    %eax,(%esp)
08506892 +0x134:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08506897 +0x139:  sub    $0x4,%esp
0850689a +0x13c:  mov    -0x20(%ebp),%eax
0850689d +0x13f:  jmp    08506baf <+0x451>
085068a2 +0x144:  mov    -0x14(%ebp),%eax
085068a5 +0x147:  mov    %eax,-0x83(%ebp)
085068ab +0x14d:  mov    -0x1c(%ebp),%eax
085068ae +0x150:  mov    %eax,(%esp)
085068b1 +0x153:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085068b6 +0x158:  test   %al,%al
085068b8 +0x15a:  je     08506990 <+0x232>
085068be +0x160:  mov    -0x18(%ebp),%eax
085068c1 +0x163:  mov    %eax,-0x7e(%ebp)
085068c4 +0x166:  mov    -0x1c(%ebp),%eax
085068c7 +0x169:  mov    (%eax),%eax
085068c9 +0x16b:  add    $0x8,%eax
085068cc +0x16e:  mov    (%eax),%edx
085068ce +0x170:  lea    -0x85(%ebp),%eax
085068d4 +0x176:  mov    %eax,0x4(%esp)
085068d8 +0x17a:  mov    -0x1c(%ebp),%eax
085068db +0x17d:  mov    %eax,(%esp)
085068de +0x180:  call   *%edx
085068e0 +0x182:  movl   $0x1,0x4c(%esp)
085068e8 +0x18a:  movl   $0x0,0x48(%esp)
085068f0 +0x192:  movl   $0x8,0x44(%esp)
085068f8 +0x19a:  mov    -0x85(%ebp),%eax
085068fe +0x1a0:  mov    %eax,0x4(%esp)
08506902 +0x1a4:  mov    -0x81(%ebp),%eax
08506908 +0x1aa:  mov    %eax,0x8(%esp)
0850690c +0x1ae:  mov    -0x7d(%ebp),%eax
0850690f +0x1b1:  mov    %eax,0xc(%esp)
08506913 +0x1b5:  mov    -0x79(%ebp),%eax
08506916 +0x1b8:  mov    %eax,0x10(%esp)
0850691a +0x1bc:  mov    -0x75(%ebp),%eax
0850691d +0x1bf:  mov    %eax,0x14(%esp)
08506921 +0x1c3:  mov    -0x71(%ebp),%eax
08506924 +0x1c6:  mov    %eax,0x18(%esp)
08506928 +0x1ca:  mov    -0x6d(%ebp),%eax
0850692b +0x1cd:  mov    %eax,0x1c(%esp)
0850692f +0x1d1:  mov    -0x69(%ebp),%eax
08506932 +0x1d4:  mov    %eax,0x20(%esp)
08506936 +0x1d8:  mov    -0x65(%ebp),%eax
08506939 +0x1db:  mov    %eax,0x24(%esp)
0850693d +0x1df:  mov    -0x61(%ebp),%eax
08506940 +0x1e2:  mov    %eax,0x28(%esp)
08506944 +0x1e6:  mov    -0x5d(%ebp),%eax
08506947 +0x1e9:  mov    %eax,0x2c(%esp)
0850694b +0x1ed:  mov    -0x59(%ebp),%eax
0850694e +0x1f0:  mov    %eax,0x30(%esp)
08506952 +0x1f4:  mov    -0x55(%ebp),%eax
08506955 +0x1f7:  mov    %eax,0x34(%esp)
08506959 +0x1fb:  mov    -0x51(%ebp),%eax
0850695c +0x1fe:  mov    %eax,0x38(%esp)
08506960 +0x202:  mov    -0x4d(%ebp),%eax
08506963 +0x205:  mov    %eax,0x3c(%esp)
08506967 +0x209:  movzbl -0x49(%ebp),%eax
0850696b +0x20d:  mov    %al,0x40(%esp)
0850696f +0x211:  mov    0x8(%ebp),%eax
08506972 +0x214:  mov    %eax,(%esp)
08506975 +0x217:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0850697a +0x21c:  mov    %eax,-0x10(%ebp)
0850697d +0x21f:  cmpl   $0xffffffff,-0x10(%ebp)
08506981 +0x223:  je     08506ba8 <+0x44a>
08506987 +0x229:  addl   $0x1,-0x20(%ebp)
0850698b +0x22d:  jmp    08506b5a <+0x3fc>
08506990 +0x232:  mov    -0x1c(%ebp),%eax
08506993 +0x235:  mov    (%eax),%eax
08506995 +0x237:  add    $0x10,%eax
08506998 +0x23a:  mov    (%eax),%edx
0850699a +0x23c:  mov    -0x1c(%ebp),%eax
0850699d +0x23f:  mov    %eax,(%esp)
085069a0 +0x242:  call   *%edx
085069a2 +0x244:  test   %al,%al
085069a4 +0x246:  je     08506a73 <+0x315>
085069aa +0x24c:  mov    -0x1c(%ebp),%eax
085069ad +0x24f:  mov    (%eax),%eax
085069af +0x251:  add    $0x8,%eax
085069b2 +0x254:  mov    (%eax),%edx
085069b4 +0x256:  lea    -0x85(%ebp),%eax
085069ba +0x25c:  mov    %eax,0x4(%esp)
085069be +0x260:  mov    -0x1c(%ebp),%eax
085069c1 +0x263:  mov    %eax,(%esp)
085069c4 +0x266:  call   *%edx
085069c6 +0x268:  movl   $0x0,0x48(%esp)
085069ce +0x270:  movl   $0x0,0x44(%esp)
085069d6 +0x278:  mov    -0x85(%ebp),%eax
085069dc +0x27e:  mov    %eax,0x4(%esp)
085069e0 +0x282:  mov    -0x81(%ebp),%eax
085069e6 +0x288:  mov    %eax,0x8(%esp)
085069ea +0x28c:  mov    -0x7d(%ebp),%eax
085069ed +0x28f:  mov    %eax,0xc(%esp)
085069f1 +0x293:  mov    -0x79(%ebp),%eax
085069f4 +0x296:  mov    %eax,0x10(%esp)
085069f8 +0x29a:  mov    -0x75(%ebp),%eax
085069fb +0x29d:  mov    %eax,0x14(%esp)
085069ff +0x2a1:  mov    -0x71(%ebp),%eax
08506a02 +0x2a4:  mov    %eax,0x18(%esp)
08506a06 +0x2a8:  mov    -0x6d(%ebp),%eax
08506a09 +0x2ab:  mov    %eax,0x1c(%esp)
08506a0d +0x2af:  mov    -0x69(%ebp),%eax
08506a10 +0x2b2:  mov    %eax,0x20(%esp)
08506a14 +0x2b6:  mov    -0x65(%ebp),%eax
08506a17 +0x2b9:  mov    %eax,0x24(%esp)
08506a1b +0x2bd:  mov    -0x61(%ebp),%eax
08506a1e +0x2c0:  mov    %eax,0x28(%esp)
08506a22 +0x2c4:  mov    -0x5d(%ebp),%eax
08506a25 +0x2c7:  mov    %eax,0x2c(%esp)
08506a29 +0x2cb:  mov    -0x59(%ebp),%eax
08506a2c +0x2ce:  mov    %eax,0x30(%esp)
08506a30 +0x2d2:  mov    -0x55(%ebp),%eax
08506a33 +0x2d5:  mov    %eax,0x34(%esp)
08506a37 +0x2d9:  mov    -0x51(%ebp),%eax
08506a3a +0x2dc:  mov    %eax,0x38(%esp)
08506a3e +0x2e0:  mov    -0x4d(%ebp),%eax
08506a41 +0x2e3:  mov    %eax,0x3c(%esp)
08506a45 +0x2e7:  movzbl -0x49(%ebp),%eax
08506a49 +0x2eb:  mov    %al,0x40(%esp)
08506a4d +0x2ef:  mov    0x8(%ebp),%eax
08506a50 +0x2f2:  mov    %eax,(%esp)
08506a53 +0x2f5:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
08506a58 +0x2fa:  mov    %eax,-0x10(%ebp)
08506a5b +0x2fd:  cmpl   $0xffffffff,-0x10(%ebp)
08506a5f +0x301:  sete   %al
08506a62 +0x304:  test   %al,%al
08506a64 +0x306:  jne    08506bab <+0x44d>
08506a6a +0x30c:  addl   $0x1,-0x20(%ebp)
08506a6e +0x310:  jmp    08506b5a <+0x3fc>
08506a73 +0x315:  movl   $0x0,-0xc(%ebp)
08506a7a +0x31c:  jmp    08506b46 <+0x3e8>
08506a7f +0x321:  mov    -0x1c(%ebp),%eax
08506a82 +0x324:  mov    (%eax),%eax
08506a84 +0x326:  add    $0x8,%eax
08506a87 +0x329:  mov    (%eax),%edx
08506a89 +0x32b:  lea    -0x85(%ebp),%eax
08506a8f +0x331:  mov    %eax,0x4(%esp)
08506a93 +0x335:  mov    -0x1c(%ebp),%eax
08506a96 +0x338:  mov    %eax,(%esp)
08506a99 +0x33b:  call   *%edx
08506a9b +0x33d:  movl   $0x1,0x4c(%esp)
08506aa3 +0x345:  movl   $0x0,0x48(%esp)
08506aab +0x34d:  movl   $0x8,0x44(%esp)
08506ab3 +0x355:  mov    -0x85(%ebp),%eax
08506ab9 +0x35b:  mov    %eax,0x4(%esp)
08506abd +0x35f:  mov    -0x81(%ebp),%eax
08506ac3 +0x365:  mov    %eax,0x8(%esp)
08506ac7 +0x369:  mov    -0x7d(%ebp),%eax
08506aca +0x36c:  mov    %eax,0xc(%esp)
08506ace +0x370:  mov    -0x79(%ebp),%eax
08506ad1 +0x373:  mov    %eax,0x10(%esp)
08506ad5 +0x377:  mov    -0x75(%ebp),%eax
08506ad8 +0x37a:  mov    %eax,0x14(%esp)
08506adc +0x37e:  mov    -0x71(%ebp),%eax
08506adf +0x381:  mov    %eax,0x18(%esp)
08506ae3 +0x385:  mov    -0x6d(%ebp),%eax
08506ae6 +0x388:  mov    %eax,0x1c(%esp)
08506aea +0x38c:  mov    -0x69(%ebp),%eax
08506aed +0x38f:  mov    %eax,0x20(%esp)
08506af1 +0x393:  mov    -0x65(%ebp),%eax
08506af4 +0x396:  mov    %eax,0x24(%esp)
08506af8 +0x39a:  mov    -0x61(%ebp),%eax
08506afb +0x39d:  mov    %eax,0x28(%esp)
08506aff +0x3a1:  mov    -0x5d(%ebp),%eax
08506b02 +0x3a4:  mov    %eax,0x2c(%esp)
08506b06 +0x3a8:  mov    -0x59(%ebp),%eax
08506b09 +0x3ab:  mov    %eax,0x30(%esp)
08506b0d +0x3af:  mov    -0x55(%ebp),%eax
08506b10 +0x3b2:  mov    %eax,0x34(%esp)
08506b14 +0x3b6:  mov    -0x51(%ebp),%eax
08506b17 +0x3b9:  mov    %eax,0x38(%esp)
08506b1b +0x3bd:  mov    -0x4d(%ebp),%eax
08506b1e +0x3c0:  mov    %eax,0x3c(%esp)
08506b22 +0x3c4:  movzbl -0x49(%ebp),%eax
08506b26 +0x3c8:  mov    %al,0x40(%esp)
08506b2a +0x3cc:  mov    0x8(%ebp),%eax
08506b2d +0x3cf:  mov    %eax,(%esp)
08506b30 +0x3d2:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08506b35 +0x3d7:  mov    %eax,-0x10(%ebp)
08506b38 +0x3da:  cmpl   $0xffffffff,-0x10(%ebp)
08506b3c +0x3de:  je     08506b59 <+0x3fb>
08506b3e +0x3e0:  addl   $0x1,-0x20(%ebp)
08506b42 +0x3e4:  addl   $0x1,-0xc(%ebp)
08506b46 +0x3e8:  mov    -0xc(%ebp),%eax
08506b49 +0x3eb:  cmp    -0x18(%ebp),%eax
08506b4c +0x3ee:  setl   %al
08506b4f +0x3f1:  test   %al,%al
08506b51 +0x3f3:  jne    08506a7f <+0x321>
08506b57 +0x3f9:  jmp    08506b5a <+0x3fc>
08506b59 +0x3fb:  nop
08506b5a +0x3fc:  lea    -0x24(%ebp),%eax
08506b5d +0x3ff:  movl   $0x0,0x8(%esp)
08506b65 +0x407:  lea    -0x48(%ebp),%edx
08506b68 +0x40a:  mov    %edx,0x4(%esp)
08506b6c +0x40e:  mov    %eax,(%esp)
08506b6f +0x411:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08506b74 +0x416:  sub    $0x4,%esp
08506b77 +0x419:  lea    -0x3c(%ebp),%eax
08506b7a +0x41c:  mov    0xc(%ebp),%edx
08506b7d +0x41f:  mov    %edx,0x4(%esp)
08506b81 +0x423:  mov    %eax,(%esp)
08506b84 +0x426:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08506b89 +0x42b:  sub    $0x4,%esp
08506b8c +0x42e:  lea    -0x3c(%ebp),%eax
08506b8f +0x431:  mov    %eax,0x4(%esp)
08506b93 +0x435:  lea    -0x48(%ebp),%eax
08506b96 +0x438:  mov    %eax,(%esp)
08506b99 +0x43b:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08506b9e +0x440:  test   %al,%al
08506ba0 +0x442:  jne    085067d4 <+0x76>
08506ba6 +0x448:  jmp    08506bac <+0x44e>
08506ba8 +0x44a:  nop
08506ba9 +0x44b:  jmp    08506bac <+0x44e>
08506bab +0x44d:  nop
08506bac +0x44e:  mov    -0x20(%ebp),%eax
08506baf +0x451:  leave
08506bb0 +0x452:  ret
08506bb1 +0x453:  nop
```

## 反编译 C

```c
// CInventory::tryInsertEventItems @ 0x850675e

/* CInventory::tryInsertEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

int __thiscall CInventory::tryInsertEventItems(CInventory *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  CDataManager *this_00;
  undefined2 local_89;
  undefined2 uStack_87;
  undefined2 uStack_85;
  undefined1 uStack_83;
  int iStack_82;
  undefined1 uStack_7e;
  undefined4 local_7d;
  undefined4 local_79;
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
  undefined1 local_4d;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_4c [4];
  int local_48;
  int local_44;
  __normal_iterator local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_34 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  int local_24;
  CItem *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = 0;
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (iVar3 != 0) {
    std::pair<int,int>::pair((pair<int,int> *)&local_48);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    Inven_Item::Inven_Item((Inven_Item *)&local_89);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_4c,local_40);
      if (!bVar2) break;
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_4c);
      local_38 = puVar4[1];
      local_3c = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_48,(pair *)&local_3c);
      local_18 = local_48;
      local_1c = local_44;
      if (local_48 == 0) {
        local_24 = local_24 + 1;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_34,(int)local_4c);
      }
      else if (local_48 == 1) {
        local_24 = local_24 + 1;
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_30,(int)local_4c);
      }
      else {
        this_00 = (CDataManager *)G_CDataManager();
        local_20 = (CItem *)CDataManager::find_item(this_00,local_18);
        if (local_20 == (CItem *)0x0) {
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_2c,(int)local_4c);
          return local_24;
        }
        uStack_87 = (undefined2)local_18;
        uStack_85 = (undefined2)((uint)local_18 >> 0x10);
        cVar1 = CItem::is_stackable(local_20);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
          if (cVar1 == '\0') {
            for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
              (**(code **)(*(int *)local_20 + 8))(local_20,&local_89);
              local_14 = insertItemIntoInventory
                                   (this,CONCAT22(uStack_87,local_89),
                                    CONCAT13((undefined1)iStack_82,CONCAT12(uStack_83,uStack_85)),
                                    CONCAT13(uStack_7e,iStack_82._1_3_),local_7d,local_79,local_75,
                                    local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                                    local_55,local_51,local_4d,8,0,1);
              if (local_14 == -1) break;
              local_24 = local_24 + 1;
            }
          }
          else {
            (**(code **)(*(int *)local_20 + 8))(local_20,&local_89);
            local_14 = insertAvatarIntoInventory
                                 (this,CONCAT22(uStack_87,local_89),
                                  CONCAT13((undefined1)iStack_82,CONCAT12(uStack_83,uStack_85)),
                                  CONCAT13(uStack_7e,iStack_82._1_3_),local_7d,local_79,local_75,
                                  local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                                  local_55,local_51,local_4d,0,0);
            if (local_14 == -1) {
              return local_24;
            }
            local_24 = local_24 + 1;
          }
        }
        else {
          iStack_82 = local_1c;
          (**(code **)(*(int *)local_20 + 8))(local_20,&local_89);
          local_14 = insertItemIntoInventory
                               (this,CONCAT22(uStack_87,local_89),
                                CONCAT13((undefined1)iStack_82,CONCAT12(uStack_83,uStack_85)),
                                CONCAT13(uStack_7e,iStack_82._1_3_),local_7d,local_79,local_75,
                                local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                                local_55,local_51,local_4d,8,0,1);
          if (local_14 == -1) {
            return local_24;
          }
          local_24 = local_24 + 1;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_28,(int)local_4c);
      }
    }
  }
  return local_24;
}
```
