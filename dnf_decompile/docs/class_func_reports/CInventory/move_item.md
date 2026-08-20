# move_item

`_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i`

`CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08500688` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08500688  _ZN10CInventory9move_itemE10INVEN_TYPEiS0_i
#           CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
# range [0x08500688, 0x0850185d]
08500688 +0x0000:  push   %ebp
08500689 +0x0001:  mov    %esp,%ebp
0850068b +0x0003:  push   %edi
0850068c +0x0004:  push   %esi
0850068d +0x0005:  push   %ebx
0850068e +0x0006:  sub    $0x25c,%esp
08500694 +0x000c:  mov    0x10(%ebp),%edx
08500697 +0x000f:  mov    0xc(%ebp),%eax
0850069a +0x0012:  mov    %edx,0x8(%esp)
0850069e +0x0016:  mov    %eax,0x4(%esp)
085006a2 +0x001a:  mov    0x8(%ebp),%eax
085006a5 +0x001d:  mov    %eax,(%esp)
085006a8 +0x0020:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
085006ad +0x0025:  xor    $0x1,%eax
085006b0 +0x0028:  test   %al,%al
085006b2 +0x002a:  jne    085006d4 <+0x4c>
085006b4 +0x002c:  mov    0x18(%ebp),%edx
085006b7 +0x002f:  mov    0x14(%ebp),%eax
085006ba +0x0032:  mov    %edx,0x8(%esp)
085006be +0x0036:  mov    %eax,0x4(%esp)
085006c2 +0x003a:  mov    0x8(%ebp),%eax
085006c5 +0x003d:  mov    %eax,(%esp)
085006c8 +0x0040:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
085006cd +0x0045:  xor    $0x1,%eax
085006d0 +0x0048:  test   %al,%al
085006d2 +0x004a:  je     085006db <+0x53>
085006d4 +0x004c:  mov    $0x1,%eax
085006d9 +0x0051:  jmp    085006e0 <+0x58>
085006db +0x0053:  mov    $0x0,%eax
085006e0 +0x0058:  test   %al,%al
085006e2 +0x005a:  je     08500756 <+0xce>
085006e4 +0x005c:  mov    0x18(%ebp),%eax
085006e7 +0x005f:  mov    %eax,-0x244(%ebp)
085006ed +0x0065:  mov    0x14(%ebp),%eax
085006f0 +0x0068:  mov    %eax,%edi
085006f2 +0x006a:  mov    0x10(%ebp),%esi
085006f5 +0x006d:  mov    0xc(%ebp),%eax
085006f8 +0x0070:  mov    %eax,%ebx
085006fa +0x0072:  movl   $0x5,0xc(%esp)
08500702 +0x007a:  movl   $0x112c,0x8(%esp)
0850070a +0x0082:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
08500712 +0x008a:  lea    -0xc8(%ebp),%eax
08500718 +0x0090:  mov    %eax,(%esp)
0850071b +0x0093:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08500720 +0x0098:  mov    -0x244(%ebp),%ecx
08500726 +0x009e:  mov    %ecx,0x14(%esp)
0850072a +0x00a2:  mov    %edi,0x10(%esp)
0850072e +0x00a6:  mov    %esi,0xc(%esp)
08500732 +0x00aa:  mov    %ebx,0x8(%esp)
08500736 +0x00ae:  movl   $"CInventory::move_item move_item return false 0, %d,%d,%d,%d",0x4(%esp)
0850073e +0x00b6:  lea    -0xc8(%ebp),%eax
08500744 +0x00bc:  mov    %eax,(%esp)
08500747 +0x00bf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850074c +0x00c4:  mov    $0x11,%eax
08500751 +0x00c9:  jmp    08501852 <+0x11ca>
08500756 +0x00ce:  mov    0xc(%ebp),%eax
08500759 +0x00d1:  add    $0x0,%eax
0850075c +0x00d4:  cmp    $0x2,%eax
0850075f +0x00d7:  ja     0850078d <+0x105>
08500761 +0x00d9:  mov    0x14(%ebp),%eax
08500764 +0x00dc:  cmp    $0x3,%eax
08500767 +0x00df:  jne    0850078d <+0x105>
08500769 +0x00e1:  lea    0x18(%ebp),%eax
0850076c +0x00e4:  mov    %eax,0x4(%esp)
08500770 +0x00e8:  lea    0x10(%ebp),%eax
08500773 +0x00eb:  mov    %eax,(%esp)
08500776 +0x00ee:  call   0813ba7b <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7682>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7682
0850077b +0x00f3:  lea    0x14(%ebp),%eax
0850077e +0x00f6:  mov    %eax,0x4(%esp)
08500782 +0x00fa:  lea    0xc(%ebp),%eax
08500785 +0x00fd:  mov    %eax,(%esp)
08500788 +0x0100:  call   0850d575 <_GLOBAL__I_g_emptySlot+0x4aa>  ; global constructors keyed to g_emptySlot+0x4aa
0850078d +0x0105:  mov    0xc(%ebp),%eax
08500790 +0x0108:  cmp    $0x1,%eax
08500793 +0x010b:  je     08500ead <+0x825>
08500799 +0x0111:  cmp    $0x1,%eax
0850079c +0x0114:  jg     085007a7 <+0x11f>
0850079e +0x0116:  test   %eax,%eax
085007a0 +0x0118:  je     085007be <+0x136>
085007a2 +0x011a:  jmp    0850184d <+0x11c5>
085007a7 +0x011f:  cmp    $0x2,%eax
085007aa +0x0122:  je     08501383 <+0xcfb>
085007b0 +0x0128:  cmp    $0x3,%eax
085007b3 +0x012b:  je     085016ff <+0x1077>
085007b9 +0x0131:  jmp    0850184d <+0x11c5>
085007be +0x0136:  mov    0x14(%ebp),%eax
085007c1 +0x0139:  cmp    $0x1,%eax
085007c4 +0x013c:  je     085007ef <+0x167>
085007c6 +0x013e:  cmp    $0x1,%eax
085007c9 +0x0141:  jg     085007d8 <+0x150>
085007cb +0x0143:  test   %eax,%eax
085007cd +0x0145:  je     08500e62 <+0x7da>
085007d3 +0x014b:  jmp    0850184d <+0x11c5>
085007d8 +0x0150:  cmp    $0x2,%eax
085007db +0x0153:  je     08500bcc <+0x544>
085007e1 +0x0159:  cmp    $0x3,%eax
085007e4 +0x015c:  je     08500e1c <+0x794>
085007ea +0x0162:  jmp    0850184d <+0x11c5>
085007ef +0x0167:  mov    0x8(%ebp),%eax
085007f2 +0x016a:  mov    0x650(%eax),%edx
085007f8 +0x0170:  mov    0x18(%ebp),%eax
085007fb +0x0173:  imul   $0x3d,%eax,%eax
085007fe +0x0176:  add    %eax,%edx
08500800 +0x0178:  mov    0x10(%ebp),%eax
08500803 +0x017b:  imul   $0x3d,%eax,%eax
08500806 +0x017e:  add    $0x10,%eax
08500809 +0x0181:  add    0x8(%ebp),%eax
0850080c +0x0184:  add    $0xc,%eax
0850080f +0x0187:  mov    %edx,0x4(%esp)
08500813 +0x018b:  mov    %eax,(%esp)
08500816 +0x018e:  call   085002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>  ; CheckEquipable(Inven_Item const&, Inven_Item const&)
0850081b +0x0193:  xor    $0x1,%eax
0850081e +0x0196:  test   %al,%al
08500820 +0x0198:  je     0850082c <+0x1a4>
08500822 +0x019a:  mov    $0x11,%eax
08500827 +0x019f:  jmp    08501852 <+0x11ca>
0850082c +0x01a4:  mov    0x18(%ebp),%eax
0850082f +0x01a7:  mov    %eax,(%esp)
08500832 +0x01aa:  call   08500354 <_ZN10CInventory31isEquipmentPlaceableAtInventoryEi>  ; CInventory::isEquipmentPlaceableAtInventory(int)
08500837 +0x01af:  xor    $0x1,%eax
0850083a +0x01b2:  test   %al,%al
0850083c +0x01b4:  je     08500848 <+0x1c0>
0850083e +0x01b6:  mov    $0x11,%eax
08500843 +0x01bb:  jmp    08501852 <+0x11ca>
08500848 +0x01c0:  mov    0x8(%ebp),%eax
0850084b +0x01c3:  mov    0x650(%eax),%edx
08500851 +0x01c9:  mov    0x18(%ebp),%eax
08500854 +0x01cc:  imul   $0x3d,%eax,%eax
08500857 +0x01cf:  lea    (%edx,%eax,1),%eax
0850085a +0x01d2:  mov    0x2(%eax),%eax
0850085d +0x01d5:  mov    %eax,%ebx
0850085f +0x01d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08500864 +0x01dc:  mov    %ebx,0x4(%esp)
08500868 +0x01e0:  mov    %eax,(%esp)
0850086b +0x01e3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08500870 +0x01e8:  mov    %eax,-0x68(%ebp)
08500873 +0x01eb:  mov    0x8(%ebp),%eax
08500876 +0x01ee:  mov    (%eax),%eax
08500878 +0x01f0:  test   %eax,%eax
0850087a +0x01f2:  je     08500953 <+0x2cb>
08500880 +0x01f8:  cmpl   $0x0,-0x68(%ebp)
08500884 +0x01fc:  je     08500953 <+0x2cb>
0850088a +0x0202:  mov    -0x68(%ebp),%eax
0850088d +0x0205:  mov    (%eax),%eax
0850088f +0x0207:  add    $0x10,%eax
08500892 +0x020a:  mov    (%eax),%edx
08500894 +0x020c:  mov    -0x68(%ebp),%eax
08500897 +0x020f:  mov    %eax,(%esp)
0850089a +0x0212:  call   *%edx
0850089c +0x0214:  test   %al,%al
0850089e +0x0216:  je     085008aa <+0x222>
085008a0 +0x0218:  mov    $0x11,%eax
085008a5 +0x021d:  jmp    08501852 <+0x11ca>
085008aa +0x0222:  mov    -0x68(%ebp),%eax
085008ad +0x0225:  mov    (%eax),%eax
085008af +0x0227:  add    $0x14,%eax
085008b2 +0x022a:  mov    (%eax),%edx
085008b4 +0x022c:  mov    -0x68(%ebp),%eax
085008b7 +0x022f:  mov    %eax,(%esp)
085008ba +0x0232:  call   *%edx
085008bc +0x0234:  test   %al,%al
085008be +0x0236:  je     085008ca <+0x242>
085008c0 +0x0238:  mov    $0x11,%eax
085008c5 +0x023d:  jmp    08501852 <+0x11ca>
085008ca +0x0242:  movl   $0x0,-0x60(%ebp)
085008d1 +0x0249:  mov    0x10(%ebp),%edx
085008d4 +0x024c:  mov    0x8(%ebp),%eax
085008d7 +0x024f:  mov    (%eax),%eax
085008d9 +0x0251:  mov    %edx,0x8(%esp)
085008dd +0x0255:  mov    -0x68(%ebp),%edx
085008e0 +0x0258:  mov    %edx,0x4(%esp)
085008e4 +0x025c:  mov    %eax,(%esp)
085008e7 +0x025f:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
085008ec +0x0264:  mov    %eax,-0x60(%ebp)
085008ef +0x0267:  cmpl   $0x0,-0x60(%ebp)
085008f3 +0x026b:  setne  %al
085008f6 +0x026e:  test   %al,%al
085008f8 +0x0270:  je     08500902 <+0x27a>
085008fa +0x0272:  mov    -0x60(%ebp),%eax
085008fd +0x0275:  jmp    08501852 <+0x11ca>
08500902 +0x027a:  mov    -0x68(%ebp),%eax
08500905 +0x027d:  mov    (%eax),%eax
08500907 +0x027f:  add    $0x4c,%eax
0850090a +0x0282:  mov    (%eax),%edx
0850090c +0x0284:  mov    -0x68(%ebp),%eax
0850090f +0x0287:  mov    %eax,(%esp)
08500912 +0x028a:  call   *%edx
08500914 +0x028c:  test   %al,%al
08500916 +0x028e:  je     08500940 <+0x2b8>
08500918 +0x0290:  mov    0x8(%ebp),%eax
0850091b +0x0293:  mov    0x650(%eax),%edx
08500921 +0x0299:  mov    0x18(%ebp),%eax
08500924 +0x029c:  imul   $0x3d,%eax,%eax
08500927 +0x029f:  lea    (%edx,%eax,1),%eax
0850092a +0x02a2:  add    $0x25,%eax
0850092d +0x02a5:  mov    %eax,(%esp)
08500930 +0x02a8:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
08500935 +0x02ad:  test   %al,%al
08500937 +0x02af:  je     08500940 <+0x2b8>
08500939 +0x02b1:  mov    $0x1,%eax
0850093e +0x02b6:  jmp    08500945 <+0x2bd>
08500940 +0x02b8:  mov    $0x0,%eax
08500945 +0x02bd:  test   %al,%al
08500947 +0x02bf:  je     08500953 <+0x2cb>
08500949 +0x02c1:  mov    $0x11,%eax
0850094e +0x02c6:  jmp    08501852 <+0x11ca>
08500953 +0x02cb:  mov    0x18(%ebp),%eax
08500956 +0x02ce:  mov    %eax,0x4(%esp)
0850095a +0x02d2:  mov    0x8(%ebp),%eax
0850095d +0x02d5:  mov    %eax,(%esp)
08500960 +0x02d8:  call   08500384 <_ZNK10CInventory15GetSlotItemTypeEi>  ; CInventory::GetSlotItemType(int) const
08500965 +0x02dd:  mov    %eax,-0x64(%ebp)
08500968 +0x02e0:  cmpl   $0xb,-0x64(%ebp)
0850096c +0x02e4:  jne    08500978 <+0x2f0>
0850096e +0x02e6:  mov    $0x11,%eax
08500973 +0x02eb:  jmp    08501852 <+0x11ca>
08500978 +0x02f0:  mov    0x10(%ebp),%eax
0850097b +0x02f3:  imul   $0x3d,%eax,%eax
0850097e +0x02f6:  add    $0x20,%eax
08500981 +0x02f9:  add    0x8(%ebp),%eax
08500984 +0x02fc:  add    $0xd,%eax
08500987 +0x02ff:  mov    %eax,(%esp)
0850098a +0x0302:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0850098f +0x0307:  xor    $0x1,%eax
08500992 +0x030a:  test   %al,%al
08500994 +0x030c:  jne    085009ba <+0x332>
08500996 +0x030e:  mov    0x8(%ebp),%eax
08500999 +0x0311:  mov    0x650(%eax),%edx
0850099f +0x0317:  mov    0x18(%ebp),%eax
085009a2 +0x031a:  imul   $0x3d,%eax,%eax
085009a5 +0x031d:  lea    (%edx,%eax,1),%eax
085009a8 +0x0320:  add    $0x11,%eax
085009ab +0x0323:  mov    %eax,(%esp)
085009ae +0x0326:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
085009b3 +0x032b:  xor    $0x1,%eax
085009b6 +0x032e:  test   %al,%al
085009b8 +0x0330:  je     085009c1 <+0x339>
085009ba +0x0332:  mov    $0x1,%eax
085009bf +0x0337:  jmp    085009c6 <+0x33e>
085009c1 +0x0339:  mov    $0x0,%eax
085009c6 +0x033e:  test   %al,%al
085009c8 +0x0340:  je     085009d4 <+0x34c>
085009ca +0x0342:  mov    $0x11,%eax
085009cf +0x0347:  jmp    08501852 <+0x11ca>
085009d4 +0x034c:  mov    0x8(%ebp),%eax
085009d7 +0x034f:  mov    0x650(%eax),%edx
085009dd +0x0355:  mov    0x18(%ebp),%eax
085009e0 +0x0358:  imul   $0x3d,%eax,%eax
085009e3 +0x035b:  lea    (%edx,%eax,1),%eax
085009e6 +0x035e:  movzbl (%eax),%eax
085009e9 +0x0361:  test   %al,%al
085009eb +0x0363:  je     08500a1e <+0x396>
085009ed +0x0365:  mov    0x8(%ebp),%eax
085009f0 +0x0368:  mov    (%eax),%ebx
085009f2 +0x036a:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
085009f7 +0x036f:  movl   $0xe,0xc(%esp)
085009ff +0x0377:  movl   $0x1,0x8(%esp)
08500a07 +0x037f:  mov    %ebx,0x4(%esp)
08500a0b +0x0383:  mov    %eax,(%esp)
08500a0e +0x0386:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08500a13 +0x038b:  test   %al,%al
08500a15 +0x038d:  je     08500a1e <+0x396>
08500a17 +0x038f:  mov    $0x1,%eax
08500a1c +0x0394:  jmp    08500a23 <+0x39b>
08500a1e +0x0396:  mov    $0x0,%eax
08500a23 +0x039b:  test   %al,%al
08500a25 +0x039d:  je     08500a31 <+0x3a9>
08500a27 +0x039f:  mov    $0xd1,%eax
08500a2c +0x03a4:  jmp    08501852 <+0x11ca>
08500a31 +0x03a9:  lea    -0x105(%ebp),%eax
08500a37 +0x03af:  mov    %eax,(%esp)
08500a3a +0x03b2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08500a3f +0x03b7:  mov    0x10(%ebp),%eax
08500a42 +0x03ba:  imul   $0x3d,%eax,%eax
08500a45 +0x03bd:  add    $0x10,%eax
08500a48 +0x03c0:  add    0x8(%ebp),%eax
08500a4b +0x03c3:  add    $0xc,%eax
08500a4e +0x03c6:  mov    %eax,0x4(%esp)
08500a52 +0x03ca:  lea    -0x105(%ebp),%eax
08500a58 +0x03d0:  mov    %eax,(%esp)
08500a5b +0x03d3:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500a60 +0x03d8:  mov    0x8(%ebp),%eax
08500a63 +0x03db:  mov    0x650(%eax),%edx
08500a69 +0x03e1:  mov    0x18(%ebp),%eax
08500a6c +0x03e4:  imul   $0x3d,%eax,%eax
08500a6f +0x03e7:  add    %eax,%edx
08500a71 +0x03e9:  mov    0x10(%ebp),%eax
08500a74 +0x03ec:  imul   $0x3d,%eax,%eax
08500a77 +0x03ef:  add    $0x10,%eax
08500a7a +0x03f2:  add    0x8(%ebp),%eax
08500a7d +0x03f5:  add    $0xc,%eax
08500a80 +0x03f8:  mov    %edx,0x4(%esp)
08500a84 +0x03fc:  mov    %eax,(%esp)
08500a87 +0x03ff:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500a8c +0x0404:  mov    0x8(%ebp),%eax
08500a8f +0x0407:  mov    (%eax),%eax
08500a91 +0x0409:  test   %eax,%eax
08500a93 +0x040b:  je     08500afb <+0x473>
08500a95 +0x040d:  mov    0x10(%ebp),%eax
08500a98 +0x0410:  mov    0x8(%ebp),%edx
08500a9b +0x0413:  imul   $0x3d,%eax,%eax
08500a9e +0x0416:  lea    (%edx,%eax,1),%eax
08500aa1 +0x0419:  add    $0x10,%eax
08500aa4 +0x041c:  movzbl 0xc(%eax),%eax
08500aa8 +0x0420:  test   %al,%al
08500aaa +0x0422:  je     08500afb <+0x473>
08500aac +0x0424:  mov    0x10(%ebp),%eax
08500aaf +0x0427:  imul   $0x3d,%eax,%eax
08500ab2 +0x042a:  add    $0x10,%eax
08500ab5 +0x042d:  add    0x8(%ebp),%eax
08500ab8 +0x0430:  add    $0xc,%eax
08500abb +0x0433:  mov    %eax,(%esp)
08500abe +0x0436:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08500ac3 +0x043b:  movzbl %al,%edx
08500ac6 +0x043e:  mov    0x10(%ebp),%eax
08500ac9 +0x0441:  mov    0x8(%ebp),%ecx
08500acc +0x0444:  imul   $0x3d,%eax,%eax
08500acf +0x0447:  lea    (%ecx,%eax,1),%eax
08500ad2 +0x044a:  add    $0x10,%eax
08500ad5 +0x044d:  mov    0xe(%eax),%eax
08500ad8 +0x0450:  mov    0x8(%ebp),%ecx
08500adb +0x0453:  mov    (%ecx),%ecx
08500add +0x0455:  add    $0x79700,%ecx
08500ae3 +0x045b:  movl   $0x1,0xc(%esp)
08500aeb +0x0463:  mov    %edx,0x8(%esp)
08500aef +0x0467:  mov    %eax,0x4(%esp)
08500af3 +0x046b:  mov    %ecx,(%esp)
08500af6 +0x046e:  call   08686c36 <_ZN15cUserHistoryLog9seal_ItemEis15eSealItemReason>  ; cUserHistoryLog::seal_Item(int, short, eSealItemReason)
08500afb +0x0473:  mov    0x10(%ebp),%eax
08500afe +0x0476:  mov    0x8(%ebp),%edx
08500b01 +0x0479:  imul   $0x3d,%eax,%eax
08500b04 +0x047c:  lea    (%edx,%eax,1),%eax
08500b07 +0x047f:  add    $0x10,%eax
08500b0a +0x0482:  movb   $0x0,0xc(%eax)
08500b0e +0x0486:  cmpl   $0x0,-0x68(%ebp)
08500b12 +0x048a:  je     08500b31 <+0x4a9>
08500b14 +0x048c:  mov    -0x68(%ebp),%eax
08500b17 +0x048f:  mov    (%eax),%eax
08500b19 +0x0491:  add    $0x48,%eax
08500b1c +0x0494:  mov    (%eax),%edx
08500b1e +0x0496:  mov    -0x68(%ebp),%eax
08500b21 +0x0499:  mov    %eax,(%esp)
08500b24 +0x049c:  call   *%edx
08500b26 +0x049e:  test   %eax,%eax
08500b28 +0x04a0:  je     08500b31 <+0x4a9>
08500b2a +0x04a2:  mov    $0x1,%eax
08500b2f +0x04a7:  jmp    08500b36 <+0x4ae>
08500b31 +0x04a9:  mov    $0x0,%eax
08500b36 +0x04ae:  test   %al,%al
08500b38 +0x04b0:  je     08500ba4 <+0x51c>
08500b3a +0x04b2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08500b41 +0x04b9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08500b46 +0x04be:  mov    %eax,%ebx
08500b48 +0x04c0:  mov    -0x68(%ebp),%eax
08500b4b +0x04c3:  mov    (%eax),%eax
08500b4d +0x04c5:  add    $0x48,%eax
08500b50 +0x04c8:  mov    (%eax),%edx
08500b52 +0x04ca:  mov    -0x68(%ebp),%eax
08500b55 +0x04cd:  mov    %eax,(%esp)
08500b58 +0x04d0:  call   *%edx
08500b5a +0x04d2:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08500b60 +0x04d8:  lea    (%ebx,%eax,1),%eax
08500b63 +0x04db:  mov    %eax,-0x5c(%ebp)
08500b66 +0x04de:  cmpl   $0x0,-0x5c(%ebp)
08500b6a +0x04e2:  je     08500ba4 <+0x51c>
08500b6c +0x04e4:  mov    0x10(%ebp),%ebx
08500b6f +0x04e7:  mov    -0x5c(%ebp),%eax
08500b72 +0x04ea:  lea    -0x44a54a80(%eax),%ecx
08500b78 +0x04f0:  mov    $0xc22e4507,%edx
08500b7d +0x04f5:  mov    %ecx,%eax
08500b7f +0x04f7:  imul   %edx
08500b81 +0x04f9:  lea    (%edx,%ecx,1),%eax
08500b84 +0x04fc:  mov    %eax,%edx
08500b86 +0x04fe:  sar    $0x10,%edx
08500b89 +0x0501:  mov    %ecx,%eax
08500b8b +0x0503:  sar    $0x1f,%eax
08500b8e +0x0506:  mov    %edx,%ecx
08500b90 +0x0508:  sub    %eax,%ecx
08500b92 +0x050a:  mov    %ecx,%eax
08500b94 +0x050c:  mov    0x8(%ebp),%ecx
08500b97 +0x050f:  imul   $0x3d,%ebx,%edx
08500b9a +0x0512:  lea    (%ecx,%edx,1),%edx
08500b9d +0x0515:  add    $0x10,%edx
08500ba0 +0x0518:  mov    %ax,0x17(%edx)
08500ba4 +0x051c:  mov    0x8(%ebp),%eax
08500ba7 +0x051f:  mov    0x650(%eax),%edx
08500bad +0x0525:  mov    0x18(%ebp),%eax
08500bb0 +0x0528:  imul   $0x3d,%eax,%eax
08500bb3 +0x052b:  add    %eax,%edx
08500bb5 +0x052d:  lea    -0x105(%ebp),%eax
08500bbb +0x0533:  mov    %eax,0x4(%esp)
08500bbf +0x0537:  mov    %edx,(%esp)
08500bc2 +0x053a:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500bc7 +0x053f:  jmp    08500ea8 <+0x820>
08500bcc +0x0544:  mov    0x8(%ebp),%eax
08500bcf +0x0547:  mov    0x654(%eax),%edx
08500bd5 +0x054d:  mov    0x18(%ebp),%eax
08500bd8 +0x0550:  imul   $0x3d,%eax,%eax
08500bdb +0x0553:  add    %eax,%edx
08500bdd +0x0555:  mov    0x10(%ebp),%eax
08500be0 +0x0558:  imul   $0x3d,%eax,%eax
08500be3 +0x055b:  add    $0x10,%eax
08500be6 +0x055e:  add    0x8(%ebp),%eax
08500be9 +0x0561:  add    $0xc,%eax
08500bec +0x0564:  mov    %edx,0x4(%esp)
08500bf0 +0x0568:  mov    %eax,(%esp)
08500bf3 +0x056b:  call   085002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>  ; CheckEquipable(Inven_Item const&, Inven_Item const&)
08500bf8 +0x0570:  xor    $0x1,%eax
08500bfb +0x0573:  test   %al,%al
08500bfd +0x0575:  je     08500c09 <+0x581>
08500bff +0x0577:  mov    $0x11,%eax
08500c04 +0x057c:  jmp    08501852 <+0x11ca>
08500c09 +0x0581:  mov    0x8(%ebp),%eax
08500c0c +0x0584:  mov    0x654(%eax),%edx
08500c12 +0x058a:  mov    0x18(%ebp),%eax
08500c15 +0x058d:  imul   $0x3d,%eax,%eax
08500c18 +0x0590:  lea    (%edx,%eax,1),%eax
08500c1b +0x0593:  mov    0x2(%eax),%eax
08500c1e +0x0596:  test   %eax,%eax
08500c20 +0x0598:  je     08500cdf <+0x657>
08500c26 +0x059e:  mov    0x8(%ebp),%eax
08500c29 +0x05a1:  mov    0x654(%eax),%edx
08500c2f +0x05a7:  mov    0x18(%ebp),%eax
08500c32 +0x05aa:  imul   $0x3d,%eax,%eax
08500c35 +0x05ad:  lea    (%edx,%eax,1),%eax
08500c38 +0x05b0:  mov    0x2(%eax),%eax
08500c3b +0x05b3:  mov    %eax,%ebx
08500c3d +0x05b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08500c42 +0x05ba:  mov    %ebx,0x4(%esp)
08500c46 +0x05be:  mov    %eax,(%esp)
08500c49 +0x05c1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08500c4e +0x05c6:  mov    %eax,-0x50(%ebp)
08500c51 +0x05c9:  mov    0x8(%ebp),%eax
08500c54 +0x05cc:  mov    (%eax),%eax
08500c56 +0x05ce:  test   %eax,%eax
08500c58 +0x05d0:  je     08500cdf <+0x657>
08500c5e +0x05d6:  cmpl   $0x0,-0x50(%ebp)
08500c62 +0x05da:  je     08500cdf <+0x657>
08500c64 +0x05dc:  mov    -0x50(%ebp),%eax
08500c67 +0x05df:  mov    (%eax),%eax
08500c69 +0x05e1:  add    $0x10,%eax
08500c6c +0x05e4:  mov    (%eax),%edx
08500c6e +0x05e6:  mov    -0x50(%ebp),%eax
08500c71 +0x05e9:  mov    %eax,(%esp)
08500c74 +0x05ec:  call   *%edx
08500c76 +0x05ee:  xor    $0x1,%eax
08500c79 +0x05f1:  test   %al,%al
08500c7b +0x05f3:  je     08500c87 <+0x5ff>
08500c7d +0x05f5:  mov    $0x11,%eax
08500c82 +0x05fa:  jmp    08501852 <+0x11ca>
08500c87 +0x05ff:  mov    -0x50(%ebp),%eax
08500c8a +0x0602:  mov    (%eax),%eax
08500c8c +0x0604:  add    $0x14,%eax
08500c8f +0x0607:  mov    (%eax),%edx
08500c91 +0x0609:  mov    -0x50(%ebp),%eax
08500c94 +0x060c:  mov    %eax,(%esp)
08500c97 +0x060f:  call   *%edx
08500c99 +0x0611:  test   %al,%al
08500c9b +0x0613:  je     08500ca7 <+0x61f>
08500c9d +0x0615:  mov    $0x11,%eax
08500ca2 +0x061a:  jmp    08501852 <+0x11ca>
08500ca7 +0x061f:  movl   $0x0,-0x4c(%ebp)
08500cae +0x0626:  mov    0x10(%ebp),%edx
08500cb1 +0x0629:  mov    0x8(%ebp),%eax
08500cb4 +0x062c:  mov    (%eax),%eax
08500cb6 +0x062e:  mov    %edx,0x8(%esp)
08500cba +0x0632:  mov    -0x50(%ebp),%edx
08500cbd +0x0635:  mov    %edx,0x4(%esp)
08500cc1 +0x0639:  mov    %eax,(%esp)
08500cc4 +0x063c:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
08500cc9 +0x0641:  mov    %eax,-0x4c(%ebp)
08500ccc +0x0644:  cmpl   $0x0,-0x4c(%ebp)
08500cd0 +0x0648:  setne  %al
08500cd3 +0x064b:  test   %al,%al
08500cd5 +0x064d:  je     08500cdf <+0x657>
08500cd7 +0x064f:  mov    -0x4c(%ebp),%eax
08500cda +0x0652:  jmp    08501852 <+0x11ca>
08500cdf +0x0657:  mov    0x10(%ebp),%eax
08500ce2 +0x065a:  mov    0x8(%ebp),%edx
08500ce5 +0x065d:  imul   $0x3d,%eax,%eax
08500ce8 +0x0660:  lea    (%edx,%eax,1),%eax
08500ceb +0x0663:  add    $0x10,%eax
08500cee +0x0666:  mov    0x13(%eax),%eax
08500cf1 +0x0669:  mov    %eax,-0x58(%ebp)
08500cf4 +0x066c:  mov    0x8(%ebp),%eax
08500cf7 +0x066f:  mov    0x654(%eax),%edx
08500cfd +0x0675:  mov    0x18(%ebp),%eax
08500d00 +0x0678:  imul   $0x3d,%eax,%eax
08500d03 +0x067b:  lea    (%edx,%eax,1),%eax
08500d06 +0x067e:  mov    0x7(%eax),%eax
08500d09 +0x0681:  mov    %eax,-0x54(%ebp)
08500d0c +0x0684:  mov    0x10(%ebp),%eax
08500d0f +0x0687:  mov    0x8(%ebp),%edx
08500d12 +0x068a:  imul   $0x3d,%eax,%eax
08500d15 +0x068d:  lea    (%edx,%eax,1),%eax
08500d18 +0x0690:  add    $0x10,%eax
08500d1b +0x0693:  mov    0xe(%eax),%eax
08500d1e +0x0696:  mov    %eax,%ecx
08500d20 +0x0698:  mov    0x10(%ebp),%edx
08500d23 +0x069b:  mov    0x8(%ebp),%eax
08500d26 +0x069e:  mov    0x654(%eax),%ebx
08500d2c +0x06a4:  mov    0x18(%ebp),%eax
08500d2f +0x06a7:  imul   $0x3d,%eax,%eax
08500d32 +0x06aa:  lea    (%ebx,%eax,1),%eax
08500d35 +0x06ad:  mov    0x2(%eax),%eax
08500d38 +0x06b0:  mov    0x18(%ebp),%ebx
08500d3b +0x06b3:  add    $0xa,%ebx
08500d3e +0x06b6:  mov    %ecx,0x18(%esp)
08500d42 +0x06ba:  mov    -0x58(%ebp),%ecx
08500d45 +0x06bd:  mov    %ecx,0x14(%esp)
08500d49 +0x06c1:  mov    %edx,0x10(%esp)
08500d4d +0x06c5:  mov    %eax,0xc(%esp)
08500d51 +0x06c9:  mov    -0x54(%ebp),%eax
08500d54 +0x06cc:  mov    %eax,0x8(%esp)
08500d58 +0x06d0:  mov    %ebx,0x4(%esp)
08500d5c +0x06d4:  mov    0x8(%ebp),%eax
08500d5f +0x06d7:  mov    %eax,(%esp)
08500d62 +0x06da:  call   08508fd0 <_ZN10CInventory15MoveClearAvatarEiiiiii>  ; CInventory::MoveClearAvatar(int, int, int, int, int, int)
08500d67 +0x06df:  lea    -0x142(%ebp),%eax
08500d6d +0x06e5:  mov    %eax,(%esp)
08500d70 +0x06e8:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08500d75 +0x06ed:  mov    0x10(%ebp),%eax
08500d78 +0x06f0:  imul   $0x3d,%eax,%eax
08500d7b +0x06f3:  add    $0x10,%eax
08500d7e +0x06f6:  add    0x8(%ebp),%eax
08500d81 +0x06f9:  add    $0xc,%eax
08500d84 +0x06fc:  mov    %eax,0x4(%esp)
08500d88 +0x0700:  lea    -0x142(%ebp),%eax
08500d8e +0x0706:  mov    %eax,(%esp)
08500d91 +0x0709:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500d96 +0x070e:  mov    0x8(%ebp),%eax
08500d99 +0x0711:  mov    0x654(%eax),%edx
08500d9f +0x0717:  mov    0x18(%ebp),%eax
08500da2 +0x071a:  imul   $0x3d,%eax,%eax
08500da5 +0x071d:  add    %eax,%edx
08500da7 +0x071f:  mov    0x10(%ebp),%eax
08500daa +0x0722:  imul   $0x3d,%eax,%eax
08500dad +0x0725:  add    $0x10,%eax
08500db0 +0x0728:  add    0x8(%ebp),%eax
08500db3 +0x072b:  add    $0xc,%eax
08500db6 +0x072e:  mov    %edx,0x4(%esp)
08500dba +0x0732:  mov    %eax,(%esp)
08500dbd +0x0735:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500dc2 +0x073a:  mov    0x8(%ebp),%eax
08500dc5 +0x073d:  mov    0x654(%eax),%edx
08500dcb +0x0743:  mov    0x18(%ebp),%eax
08500dce +0x0746:  imul   $0x3d,%eax,%eax
08500dd1 +0x0749:  add    %eax,%edx
08500dd3 +0x074b:  lea    -0x142(%ebp),%eax
08500dd9 +0x0751:  mov    %eax,0x4(%esp)
08500ddd +0x0755:  mov    %edx,(%esp)
08500de0 +0x0758:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500de5 +0x075d:  mov    0x18(%ebp),%eax
08500de8 +0x0760:  lea    0xa(%eax),%ecx
08500deb +0x0763:  mov    0x10(%ebp),%eax
08500dee +0x0766:  mov    -0x54(%ebp),%edx
08500df1 +0x0769:  mov    %edx,0x14(%esp)
08500df5 +0x076d:  mov    -0x58(%ebp),%edx
08500df8 +0x0770:  mov    %edx,0x10(%esp)
08500dfc +0x0774:  mov    %ecx,0xc(%esp)
08500e00 +0x0778:  mov    %eax,0x8(%esp)
08500e04 +0x077c:  movl   $0x32,0x4(%esp)
08500e0c +0x0784:  mov    0x8(%ebp),%eax
08500e0f +0x0787:  mov    %eax,(%esp)
08500e12 +0x078a:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08500e17 +0x078f:  jmp    08500ea8 <+0x820>
08500e1c +0x0794:  movl   $0x5,0xc(%esp)
08500e24 +0x079c:  movl   $0x1224,0x8(%esp)
08500e2c +0x07a4:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
08500e34 +0x07ac:  lea    -0xb8(%ebp),%eax
08500e3a +0x07b2:  mov    %eax,(%esp)
08500e3d +0x07b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08500e42 +0x07ba:  movl   $"CInventory::move_item move_item return false 10",0x4(%esp)
08500e4a +0x07c2:  lea    -0xb8(%ebp),%eax
08500e50 +0x07c8:  mov    %eax,(%esp)
08500e53 +0x07cb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08500e58 +0x07d0:  mov    $0x11,%eax
08500e5d +0x07d5:  jmp    08501852 <+0x11ca>
08500e62 +0x07da:  movl   $0x5,0xc(%esp)
08500e6a +0x07e2:  movl   $0x122a,0x8(%esp)
08500e72 +0x07ea:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
08500e7a +0x07f2:  lea    -0xa8(%ebp),%eax
08500e80 +0x07f8:  mov    %eax,(%esp)
08500e83 +0x07fb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08500e88 +0x0800:  movl   $"CInventory::move_item move_item return false 3",0x4(%esp)
08500e90 +0x0808:  lea    -0xa8(%ebp),%eax
08500e96 +0x080e:  mov    %eax,(%esp)
08500e99 +0x0811:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08500e9e +0x0816:  mov    $0x11,%eax
08500ea3 +0x081b:  jmp    08501852 <+0x11ca>
08500ea8 +0x0820:  jmp    0850184d <+0x11c5>
08500ead +0x0825:  mov    0x14(%ebp),%eax
08500eb0 +0x0828:  cmp    $0x1,%eax
08500eb3 +0x082b:  je     085011f4 <+0xb6c>
08500eb9 +0x0831:  cmp    $0x1,%eax
08500ebc +0x0834:  jg     08500ec7 <+0x83f>
08500ebe +0x0836:  test   %eax,%eax
08500ec0 +0x0838:  je     08500ede <+0x856>
08500ec2 +0x083a:  jmp    0850184d <+0x11c5>
08500ec7 +0x083f:  cmp    $0x2,%eax
08500eca +0x0842:  je     0850136a <+0xce2>
08500ed0 +0x0848:  cmp    $0x3,%eax
08500ed3 +0x084b:  je     08501374 <+0xcec>
08500ed9 +0x0851:  jmp    0850184d <+0x11c5>
08500ede +0x0856:  mov    0x18(%ebp),%eax
08500ee1 +0x0859:  imul   $0x3d,%eax,%eax
08500ee4 +0x085c:  add    $0x10,%eax
08500ee7 +0x085f:  add    0x8(%ebp),%eax
08500eea +0x0862:  lea    0xc(%eax),%edx
08500eed +0x0865:  mov    0x8(%ebp),%eax
08500ef0 +0x0868:  mov    0x650(%eax),%ecx
08500ef6 +0x086e:  mov    0x10(%ebp),%eax
08500ef9 +0x0871:  imul   $0x3d,%eax,%eax
08500efc +0x0874:  lea    (%ecx,%eax,1),%eax
08500eff +0x0877:  mov    %edx,0x4(%esp)
08500f03 +0x087b:  mov    %eax,(%esp)
08500f06 +0x087e:  call   085002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>  ; CheckEquipable(Inven_Item const&, Inven_Item const&)
08500f0b +0x0883:  xor    $0x1,%eax
08500f0e +0x0886:  test   %al,%al
08500f10 +0x0888:  je     08500f1c <+0x894>
08500f12 +0x088a:  mov    $0x11,%eax
08500f17 +0x088f:  jmp    08501852 <+0x11ca>
08500f1c +0x0894:  mov    0x8(%ebp),%eax
08500f1f +0x0897:  mov    0x650(%eax),%edx
08500f25 +0x089d:  mov    0x10(%ebp),%eax
08500f28 +0x08a0:  imul   $0x3d,%eax,%eax
08500f2b +0x08a3:  lea    (%edx,%eax,1),%eax
08500f2e +0x08a6:  add    $0x11,%eax
08500f31 +0x08a9:  mov    %eax,(%esp)
08500f34 +0x08ac:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
08500f39 +0x08b1:  xor    $0x1,%eax
08500f3c +0x08b4:  test   %al,%al
08500f3e +0x08b6:  jne    08500f5e <+0x8d6>
08500f40 +0x08b8:  mov    0x18(%ebp),%eax
08500f43 +0x08bb:  imul   $0x3d,%eax,%eax
08500f46 +0x08be:  add    $0x20,%eax
08500f49 +0x08c1:  add    0x8(%ebp),%eax
08500f4c +0x08c4:  add    $0xd,%eax
08500f4f +0x08c7:  mov    %eax,(%esp)
08500f52 +0x08ca:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
08500f57 +0x08cf:  xor    $0x1,%eax
08500f5a +0x08d2:  test   %al,%al
08500f5c +0x08d4:  je     08500f65 <+0x8dd>
08500f5e +0x08d6:  mov    $0x1,%eax
08500f63 +0x08db:  jmp    08500f6a <+0x8e2>
08500f65 +0x08dd:  mov    $0x0,%eax
08500f6a +0x08e2:  test   %al,%al
08500f6c +0x08e4:  je     08500f78 <+0x8f0>
08500f6e +0x08e6:  mov    $0x11,%eax
08500f73 +0x08eb:  jmp    08501852 <+0x11ca>
08500f78 +0x08f0:  mov    0x10(%ebp),%eax
08500f7b +0x08f3:  mov    %eax,0x4(%esp)
08500f7f +0x08f7:  mov    0x8(%ebp),%eax
08500f82 +0x08fa:  mov    %eax,(%esp)
08500f85 +0x08fd:  call   08500384 <_ZNK10CInventory15GetSlotItemTypeEi>  ; CInventory::GetSlotItemType(int) const
08500f8a +0x0902:  mov    %eax,-0x48(%ebp)
08500f8d +0x0905:  cmpl   $0xb,-0x48(%ebp)
08500f91 +0x0909:  jne    08500f9d <+0x915>
08500f93 +0x090b:  mov    $0x11,%eax
08500f98 +0x0910:  jmp    08501852 <+0x11ca>
08500f9d +0x0915:  lea    -0x17f(%ebp),%eax
08500fa3 +0x091b:  mov    %eax,(%esp)
08500fa6 +0x091e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08500fab +0x0923:  mov    0x8(%ebp),%eax
08500fae +0x0926:  mov    0x650(%eax),%edx
08500fb4 +0x092c:  mov    0x10(%ebp),%eax
08500fb7 +0x092f:  imul   $0x3d,%eax,%eax
08500fba +0x0932:  lea    (%edx,%eax,1),%eax
08500fbd +0x0935:  mov    %eax,0x4(%esp)
08500fc1 +0x0939:  lea    -0x17f(%ebp),%eax
08500fc7 +0x093f:  mov    %eax,(%esp)
08500fca +0x0942:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08500fcf +0x0947:  mov    -0x17d(%ebp),%eax
08500fd5 +0x094d:  test   %eax,%eax
08500fd7 +0x094f:  je     0850119a <+0xb12>
08500fdd +0x0955:  mov    -0x17d(%ebp),%eax
08500fe3 +0x095b:  mov    %eax,%ebx
08500fe5 +0x095d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08500fea +0x0962:  mov    %ebx,0x4(%esp)
08500fee +0x0966:  mov    %eax,(%esp)
08500ff1 +0x0969:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08500ff6 +0x096e:  mov    %eax,-0x44(%ebp)
08500ff9 +0x0971:  cmpl   $0x0,-0x44(%ebp)
08500ffd +0x0975:  je     08501008 <+0x980>
08500fff +0x0977:  mov    0x8(%ebp),%eax
08501002 +0x097a:  mov    (%eax),%eax
08501004 +0x097c:  test   %eax,%eax
08501006 +0x097e:  jne    08501058 <+0x9d0>
08501008 +0x0980:  mov    -0x17d(%ebp),%ebx
0850100e +0x0986:  movl   $0x5,0xc(%esp)
08501016 +0x098e:  movl   $0x1276,0x8(%esp)
0850101e +0x0996:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
08501026 +0x099e:  lea    -0x98(%ebp),%eax
0850102c +0x09a4:  mov    %eax,(%esp)
0850102f +0x09a7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08501034 +0x09ac:  mov    %ebx,0x8(%esp)
08501038 +0x09b0:  movl   $"CInventory::move_item move_item return false 4,%d",0x4(%esp)
08501040 +0x09b8:  lea    -0x98(%ebp),%eax
08501046 +0x09be:  mov    %eax,(%esp)
08501049 +0x09c1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850104e +0x09c6:  mov    $0x11,%eax
08501053 +0x09cb:  jmp    08501852 <+0x11ca>
08501058 +0x09d0:  mov    -0x44(%ebp),%eax
0850105b +0x09d3:  mov    (%eax),%eax
0850105d +0x09d5:  add    $0x10,%eax
08501060 +0x09d8:  mov    (%eax),%edx
08501062 +0x09da:  mov    -0x44(%ebp),%eax
08501065 +0x09dd:  mov    %eax,(%esp)
08501068 +0x09e0:  call   *%edx
0850106a +0x09e2:  test   %al,%al
0850106c +0x09e4:  je     08501078 <+0x9f0>
0850106e +0x09e6:  mov    $0x11,%eax
08501073 +0x09eb:  jmp    08501852 <+0x11ca>
08501078 +0x09f0:  mov    -0x44(%ebp),%eax
0850107b +0x09f3:  mov    (%eax),%eax
0850107d +0x09f5:  add    $0x14,%eax
08501080 +0x09f8:  mov    (%eax),%edx
08501082 +0x09fa:  mov    -0x44(%ebp),%eax
08501085 +0x09fd:  mov    %eax,(%esp)
08501088 +0x0a00:  call   *%edx
0850108a +0x0a02:  test   %al,%al
0850108c +0x0a04:  je     08501098 <+0xa10>
0850108e +0x0a06:  mov    $0x11,%eax
08501093 +0x0a0b:  jmp    08501852 <+0x11ca>
08501098 +0x0a10:  movl   $0x0,-0x40(%ebp)
0850109f +0x0a17:  mov    0x18(%ebp),%edx
085010a2 +0x0a1a:  mov    0x8(%ebp),%eax
085010a5 +0x0a1d:  mov    (%eax),%eax
085010a7 +0x0a1f:  mov    %edx,0x8(%esp)
085010ab +0x0a23:  mov    -0x44(%ebp),%edx
085010ae +0x0a26:  mov    %edx,0x4(%esp)
085010b2 +0x0a2a:  mov    %eax,(%esp)
085010b5 +0x0a2d:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
085010ba +0x0a32:  mov    %eax,-0x40(%ebp)
085010bd +0x0a35:  cmpl   $0x0,-0x40(%ebp)
085010c1 +0x0a39:  setne  %al
085010c4 +0x0a3c:  test   %al,%al
085010c6 +0x0a3e:  je     085010d0 <+0xa48>
085010c8 +0x0a40:  mov    -0x40(%ebp),%eax
085010cb +0x0a43:  jmp    08501852 <+0x11ca>
085010d0 +0x0a48:  mov    -0x44(%ebp),%eax
085010d3 +0x0a4b:  mov    (%eax),%eax
085010d5 +0x0a4d:  add    $0x4c,%eax
085010d8 +0x0a50:  mov    (%eax),%edx
085010da +0x0a52:  mov    -0x44(%ebp),%eax
085010dd +0x0a55:  mov    %eax,(%esp)
085010e0 +0x0a58:  call   *%edx
085010e2 +0x0a5a:  test   %al,%al
085010e4 +0x0a5c:  je     0850110e <+0xa86>
085010e6 +0x0a5e:  mov    0x8(%ebp),%eax
085010e9 +0x0a61:  mov    0x650(%eax),%edx
085010ef +0x0a67:  mov    0x10(%ebp),%eax
085010f2 +0x0a6a:  imul   $0x3d,%eax,%eax
085010f5 +0x0a6d:  lea    (%edx,%eax,1),%eax
085010f8 +0x0a70:  add    $0x25,%eax
085010fb +0x0a73:  mov    %eax,(%esp)
085010fe +0x0a76:  call   0822abd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x27a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x27a
08501103 +0x0a7b:  test   %al,%al
08501105 +0x0a7d:  je     0850110e <+0xa86>
08501107 +0x0a7f:  mov    $0x1,%eax
0850110c +0x0a84:  jmp    08501113 <+0xa8b>
0850110e +0x0a86:  mov    $0x0,%eax
08501113 +0x0a8b:  test   %al,%al
08501115 +0x0a8d:  je     08501121 <+0xa99>
08501117 +0x0a8f:  mov    $0x11,%eax
0850111c +0x0a94:  jmp    08501852 <+0x11ca>
08501121 +0x0a99:  mov    -0x44(%ebp),%eax
08501124 +0x0a9c:  mov    (%eax),%eax
08501126 +0x0a9e:  add    $0x48,%eax
08501129 +0x0aa1:  mov    (%eax),%edx
0850112b +0x0aa3:  mov    -0x44(%ebp),%eax
0850112e +0x0aa6:  mov    %eax,(%esp)
08501131 +0x0aa9:  call   *%edx
08501133 +0x0aab:  test   %eax,%eax
08501135 +0x0aad:  setne  %al
08501138 +0x0ab0:  test   %al,%al
0850113a +0x0ab2:  je     0850119a <+0xb12>
0850113c +0x0ab4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08501143 +0x0abb:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08501148 +0x0ac0:  mov    %eax,%ebx
0850114a +0x0ac2:  mov    -0x44(%ebp),%eax
0850114d +0x0ac5:  mov    (%eax),%eax
0850114f +0x0ac7:  add    $0x48,%eax
08501152 +0x0aca:  mov    (%eax),%edx
08501154 +0x0acc:  mov    -0x44(%ebp),%eax
08501157 +0x0acf:  mov    %eax,(%esp)
0850115a +0x0ad2:  call   *%edx
0850115c +0x0ad4:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08501162 +0x0ada:  lea    (%ebx,%eax,1),%eax
08501165 +0x0add:  mov    %eax,-0x3c(%ebp)
08501168 +0x0ae0:  cmpl   $0x0,-0x3c(%ebp)
0850116c +0x0ae4:  je     0850119a <+0xb12>
0850116e +0x0ae6:  mov    -0x3c(%ebp),%eax
08501171 +0x0ae9:  lea    -0x44a54a80(%eax),%ecx
08501177 +0x0aef:  mov    $0xc22e4507,%edx
0850117c +0x0af4:  mov    %ecx,%eax
0850117e +0x0af6:  imul   %edx
08501180 +0x0af8:  lea    (%edx,%ecx,1),%eax
08501183 +0x0afb:  mov    %eax,%edx
08501185 +0x0afd:  sar    $0x10,%edx
08501188 +0x0b00:  mov    %ecx,%eax
0850118a +0x0b02:  sar    $0x1f,%eax
0850118d +0x0b05:  mov    %edx,%ecx
0850118f +0x0b07:  sub    %eax,%ecx
08501191 +0x0b09:  mov    %ecx,%eax
08501193 +0x0b0b:  mov    %ax,-0x174(%ebp)
0850119a +0x0b12:  mov    0x18(%ebp),%eax
0850119d +0x0b15:  imul   $0x3d,%eax,%eax
085011a0 +0x0b18:  add    $0x10,%eax
085011a3 +0x0b1b:  add    0x8(%ebp),%eax
085011a6 +0x0b1e:  lea    0xc(%eax),%edx
085011a9 +0x0b21:  mov    0x8(%ebp),%eax
085011ac +0x0b24:  mov    0x650(%eax),%ecx
085011b2 +0x0b2a:  mov    0x10(%ebp),%eax
085011b5 +0x0b2d:  imul   $0x3d,%eax,%eax
085011b8 +0x0b30:  lea    (%ecx,%eax,1),%eax
085011bb +0x0b33:  mov    %edx,0x4(%esp)
085011bf +0x0b37:  mov    %eax,(%esp)
085011c2 +0x0b3a:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085011c7 +0x0b3f:  movb   $0x0,-0x17f(%ebp)
085011ce +0x0b46:  mov    0x18(%ebp),%eax
085011d1 +0x0b49:  imul   $0x3d,%eax,%eax
085011d4 +0x0b4c:  add    $0x10,%eax
085011d7 +0x0b4f:  add    0x8(%ebp),%eax
085011da +0x0b52:  lea    0xc(%eax),%edx
085011dd +0x0b55:  lea    -0x17f(%ebp),%eax
085011e3 +0x0b5b:  mov    %eax,0x4(%esp)
085011e7 +0x0b5f:  mov    %edx,(%esp)
085011ea +0x0b62:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085011ef +0x0b67:  jmp    0850137e <+0xcf6>
085011f4 +0x0b6c:  mov    0x10(%ebp),%eax
085011f7 +0x0b6f:  mov    %eax,0x4(%esp)
085011fb +0x0b73:  mov    0x8(%ebp),%eax
085011fe +0x0b76:  mov    %eax,(%esp)
08501201 +0x0b79:  call   08500384 <_ZNK10CInventory15GetSlotItemTypeEi>  ; CInventory::GetSlotItemType(int) const
08501206 +0x0b7e:  mov    %eax,-0x38(%ebp)
08501209 +0x0b81:  mov    0x18(%ebp),%eax
0850120c +0x0b84:  mov    %eax,0x4(%esp)
08501210 +0x0b88:  mov    0x8(%ebp),%eax
08501213 +0x0b8b:  mov    %eax,(%esp)
08501216 +0x0b8e:  call   08500384 <_ZNK10CInventory15GetSlotItemTypeEi>  ; CInventory::GetSlotItemType(int) const
0850121b +0x0b93:  mov    %eax,-0x34(%ebp)
0850121e +0x0b96:  cmpl   $0xb,-0x38(%ebp)
08501222 +0x0b9a:  je     0850122a <+0xba2>
08501224 +0x0b9c:  cmpl   $0xb,-0x34(%ebp)
08501228 +0x0ba0:  jne    08501234 <+0xbac>
0850122a +0x0ba2:  mov    $0x11,%eax
0850122f +0x0ba7:  jmp    08501852 <+0x11ca>
08501234 +0x0bac:  cmpl   $0x0,-0x38(%ebp)
08501238 +0x0bb0:  je     08501252 <+0xbca>
0850123a +0x0bb2:  cmpl   $0x0,-0x34(%ebp)
0850123e +0x0bb6:  je     08501252 <+0xbca>
08501240 +0x0bb8:  mov    -0x38(%ebp),%eax
08501243 +0x0bbb:  cmp    -0x34(%ebp),%eax
08501246 +0x0bbe:  je     08501252 <+0xbca>
08501248 +0x0bc0:  mov    $0x11,%eax
0850124d +0x0bc5:  jmp    08501852 <+0x11ca>
08501252 +0x0bca:  cmpl   $0x0,-0x38(%ebp)
08501256 +0x0bce:  je     0850129b <+0xc13>
08501258 +0x0bd0:  mov    0x8(%ebp),%eax
0850125b +0x0bd3:  mov    0x650(%eax),%edx
08501261 +0x0bd9:  mov    0x18(%ebp),%eax
08501264 +0x0bdc:  imul   $0x3d,%eax,%eax
08501267 +0x0bdf:  lea    (%edx,%eax,1),%eax
0850126a +0x0be2:  mov    0x2(%eax),%eax
0850126d +0x0be5:  test   %eax,%eax
0850126f +0x0be7:  je     0850129b <+0xc13>
08501271 +0x0be9:  mov    0x8(%ebp),%eax
08501274 +0x0bec:  mov    0x650(%eax),%edx
0850127a +0x0bf2:  mov    0x18(%ebp),%eax
0850127d +0x0bf5:  imul   $0x3d,%eax,%eax
08501280 +0x0bf8:  lea    (%edx,%eax,1),%eax
08501283 +0x0bfb:  movzbl 0x1(%eax),%eax
08501287 +0x0bff:  movzbl %al,%edx
0850128a +0x0c02:  mov    -0x38(%ebp),%eax
0850128d +0x0c05:  cmp    %eax,%edx
0850128f +0x0c07:  je     0850129b <+0xc13>
08501291 +0x0c09:  mov    $0x11,%eax
08501296 +0x0c0e:  jmp    08501852 <+0x11ca>
0850129b +0x0c13:  cmpl   $0x0,-0x34(%ebp)
0850129f +0x0c17:  je     085012e4 <+0xc5c>
085012a1 +0x0c19:  mov    0x8(%ebp),%eax
085012a4 +0x0c1c:  mov    0x650(%eax),%edx
085012aa +0x0c22:  mov    0x10(%ebp),%eax
085012ad +0x0c25:  imul   $0x3d,%eax,%eax
085012b0 +0x0c28:  lea    (%edx,%eax,1),%eax
085012b3 +0x0c2b:  mov    0x2(%eax),%eax
085012b6 +0x0c2e:  test   %eax,%eax
085012b8 +0x0c30:  je     085012e4 <+0xc5c>
085012ba +0x0c32:  mov    0x8(%ebp),%eax
085012bd +0x0c35:  mov    0x650(%eax),%edx
085012c3 +0x0c3b:  mov    0x10(%ebp),%eax
085012c6 +0x0c3e:  imul   $0x3d,%eax,%eax
085012c9 +0x0c41:  lea    (%edx,%eax,1),%eax
085012cc +0x0c44:  movzbl 0x1(%eax),%eax
085012d0 +0x0c48:  movzbl %al,%edx
085012d3 +0x0c4b:  mov    -0x34(%ebp),%eax
085012d6 +0x0c4e:  cmp    %eax,%edx
085012d8 +0x0c50:  je     085012e4 <+0xc5c>
085012da +0x0c52:  mov    $0x11,%eax
085012df +0x0c57:  jmp    08501852 <+0x11ca>
085012e4 +0x0c5c:  lea    -0x1bc(%ebp),%eax
085012ea +0x0c62:  mov    %eax,(%esp)
085012ed +0x0c65:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085012f2 +0x0c6a:  mov    0x8(%ebp),%eax
085012f5 +0x0c6d:  mov    0x650(%eax),%edx
085012fb +0x0c73:  mov    0x10(%ebp),%eax
085012fe +0x0c76:  imul   $0x3d,%eax,%eax
08501301 +0x0c79:  lea    (%edx,%eax,1),%eax
08501304 +0x0c7c:  mov    %eax,0x4(%esp)
08501308 +0x0c80:  lea    -0x1bc(%ebp),%eax
0850130e +0x0c86:  mov    %eax,(%esp)
08501311 +0x0c89:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08501316 +0x0c8e:  mov    0x8(%ebp),%eax
08501319 +0x0c91:  mov    0x650(%eax),%edx
0850131f +0x0c97:  mov    0x18(%ebp),%eax
08501322 +0x0c9a:  imul   $0x3d,%eax,%eax
08501325 +0x0c9d:  add    %eax,%edx
08501327 +0x0c9f:  mov    0x8(%ebp),%eax
0850132a +0x0ca2:  mov    0x650(%eax),%ecx
08501330 +0x0ca8:  mov    0x10(%ebp),%eax
08501333 +0x0cab:  imul   $0x3d,%eax,%eax
08501336 +0x0cae:  lea    (%ecx,%eax,1),%eax
08501339 +0x0cb1:  mov    %edx,0x4(%esp)
0850133d +0x0cb5:  mov    %eax,(%esp)
08501340 +0x0cb8:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08501345 +0x0cbd:  mov    0x8(%ebp),%eax
08501348 +0x0cc0:  mov    0x650(%eax),%edx
0850134e +0x0cc6:  mov    0x18(%ebp),%eax
08501351 +0x0cc9:  imul   $0x3d,%eax,%eax
08501354 +0x0ccc:  add    %eax,%edx
08501356 +0x0cce:  lea    -0x1bc(%ebp),%eax
0850135c +0x0cd4:  mov    %eax,0x4(%esp)
08501360 +0x0cd8:  mov    %edx,(%esp)
08501363 +0x0cdb:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08501368 +0x0ce0:  jmp    0850137e <+0xcf6>
0850136a +0x0ce2:  mov    $0x11,%eax
0850136f +0x0ce7:  jmp    08501852 <+0x11ca>
08501374 +0x0cec:  mov    $0x11,%eax
08501379 +0x0cf1:  jmp    08501852 <+0x11ca>
0850137e +0x0cf6:  jmp    0850184d <+0x11c5>
08501383 +0x0cfb:  mov    0x14(%ebp),%eax
08501386 +0x0cfe:  cmp    $0x1,%eax
08501389 +0x0d01:  je     085016b4 <+0x102c>
0850138f +0x0d07:  cmp    $0x2,%eax
08501392 +0x0d0a:  je     085015c9 <+0xf41>
08501398 +0x0d10:  test   %eax,%eax
0850139a +0x0d12:  jne    08501846 <+0x11be>
085013a0 +0x0d18:  lea    -0x1f9(%ebp),%eax
085013a6 +0x0d1e:  mov    %eax,(%esp)
085013a9 +0x0d21:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085013ae +0x0d26:  mov    0x8(%ebp),%eax
085013b1 +0x0d29:  mov    0x654(%eax),%edx
085013b7 +0x0d2f:  mov    0x10(%ebp),%eax
085013ba +0x0d32:  imul   $0x3d,%eax,%eax
085013bd +0x0d35:  lea    (%edx,%eax,1),%eax
085013c0 +0x0d38:  mov    %eax,0x4(%esp)
085013c4 +0x0d3c:  lea    -0x1f9(%ebp),%eax
085013ca +0x0d42:  mov    %eax,(%esp)
085013cd +0x0d45:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085013d2 +0x0d4a:  mov    0x18(%ebp),%eax
085013d5 +0x0d4d:  imul   $0x3d,%eax,%eax
085013d8 +0x0d50:  add    $0x10,%eax
085013db +0x0d53:  add    0x8(%ebp),%eax
085013de +0x0d56:  lea    0xc(%eax),%edx
085013e1 +0x0d59:  mov    0x8(%ebp),%eax
085013e4 +0x0d5c:  mov    0x654(%eax),%ecx
085013ea +0x0d62:  mov    0x10(%ebp),%eax
085013ed +0x0d65:  imul   $0x3d,%eax,%eax
085013f0 +0x0d68:  lea    (%ecx,%eax,1),%eax
085013f3 +0x0d6b:  mov    %edx,0x4(%esp)
085013f7 +0x0d6f:  mov    %eax,(%esp)
085013fa +0x0d72:  call   085002e0 <_Z14CheckEquipableRK10Inven_ItemS1_>  ; CheckEquipable(Inven_Item const&, Inven_Item const&)
085013ff +0x0d77:  xor    $0x1,%eax
08501402 +0x0d7a:  test   %al,%al
08501404 +0x0d7c:  je     08501410 <+0xd88>
08501406 +0x0d7e:  mov    $0x11,%eax
0850140b +0x0d83:  jmp    08501852 <+0x11ca>
08501410 +0x0d88:  mov    0x18(%ebp),%eax
08501413 +0x0d8b:  mov    0x8(%ebp),%edx
08501416 +0x0d8e:  imul   $0x3d,%eax,%eax
08501419 +0x0d91:  lea    (%edx,%eax,1),%eax
0850141c +0x0d94:  add    $0x10,%eax
0850141f +0x0d97:  mov    0xe(%eax),%eax
08501422 +0x0d9a:  test   %eax,%eax
08501424 +0x0d9c:  je     085014bc <+0xe34>
0850142a +0x0da2:  mov    0x18(%ebp),%eax
0850142d +0x0da5:  mov    0x8(%ebp),%edx
08501430 +0x0da8:  imul   $0x3d,%eax,%eax
08501433 +0x0dab:  lea    (%edx,%eax,1),%eax
08501436 +0x0dae:  add    $0x10,%eax
08501439 +0x0db1:  mov    0xe(%eax),%eax
0850143c +0x0db4:  mov    %eax,%ebx
0850143e +0x0db6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08501443 +0x0dbb:  mov    %ebx,0x4(%esp)
08501447 +0x0dbf:  mov    %eax,(%esp)
0850144a +0x0dc2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850144f +0x0dc7:  mov    %eax,-0x28(%ebp)
08501452 +0x0dca:  mov    0x8(%ebp),%eax
08501455 +0x0dcd:  mov    (%eax),%eax
08501457 +0x0dcf:  test   %eax,%eax
08501459 +0x0dd1:  je     085014bc <+0xe34>
0850145b +0x0dd3:  cmpl   $0x0,-0x28(%ebp)
0850145f +0x0dd7:  je     085014bc <+0xe34>
08501461 +0x0dd9:  mov    -0x28(%ebp),%eax
08501464 +0x0ddc:  mov    (%eax),%eax
08501466 +0x0dde:  add    $0x10,%eax
08501469 +0x0de1:  mov    (%eax),%edx
0850146b +0x0de3:  mov    -0x28(%ebp),%eax
0850146e +0x0de6:  mov    %eax,(%esp)
08501471 +0x0de9:  call   *%edx
08501473 +0x0deb:  xor    $0x1,%eax
08501476 +0x0dee:  test   %al,%al
08501478 +0x0df0:  je     08501484 <+0xdfc>
0850147a +0x0df2:  mov    $0x11,%eax
0850147f +0x0df7:  jmp    08501852 <+0x11ca>
08501484 +0x0dfc:  movl   $0x0,-0x24(%ebp)
0850148b +0x0e03:  mov    0x18(%ebp),%edx
0850148e +0x0e06:  mov    0x8(%ebp),%eax
08501491 +0x0e09:  mov    (%eax),%eax
08501493 +0x0e0b:  mov    %edx,0x8(%esp)
08501497 +0x0e0f:  mov    -0x28(%ebp),%edx
0850149a +0x0e12:  mov    %edx,0x4(%esp)
0850149e +0x0e16:  mov    %eax,(%esp)
085014a1 +0x0e19:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
085014a6 +0x0e1e:  mov    %eax,-0x24(%ebp)
085014a9 +0x0e21:  cmpl   $0x0,-0x24(%ebp)
085014ad +0x0e25:  setne  %al
085014b0 +0x0e28:  test   %al,%al
085014b2 +0x0e2a:  je     085014bc <+0xe34>
085014b4 +0x0e2c:  mov    -0x24(%ebp),%eax
085014b7 +0x0e2f:  jmp    08501852 <+0x11ca>
085014bc +0x0e34:  mov    0x8(%ebp),%eax
085014bf +0x0e37:  mov    0x654(%eax),%edx
085014c5 +0x0e3d:  mov    0x10(%ebp),%eax
085014c8 +0x0e40:  imul   $0x3d,%eax,%eax
085014cb +0x0e43:  lea    (%edx,%eax,1),%eax
085014ce +0x0e46:  mov    0x7(%eax),%eax
085014d1 +0x0e49:  mov    %eax,-0x30(%ebp)
085014d4 +0x0e4c:  mov    0x18(%ebp),%eax
085014d7 +0x0e4f:  mov    0x8(%ebp),%edx
085014da +0x0e52:  imul   $0x3d,%eax,%eax
085014dd +0x0e55:  lea    (%edx,%eax,1),%eax
085014e0 +0x0e58:  add    $0x10,%eax
085014e3 +0x0e5b:  mov    0x13(%eax),%eax
085014e6 +0x0e5e:  mov    %eax,-0x2c(%ebp)
085014e9 +0x0e61:  mov    0x18(%ebp),%eax
085014ec +0x0e64:  mov    0x8(%ebp),%edx
085014ef +0x0e67:  imul   $0x3d,%eax,%eax
085014f2 +0x0e6a:  lea    (%edx,%eax,1),%eax
085014f5 +0x0e6d:  add    $0x10,%eax
085014f8 +0x0e70:  mov    0xe(%eax),%eax
085014fb +0x0e73:  mov    %eax,%ecx
085014fd +0x0e75:  mov    0x18(%ebp),%edx
08501500 +0x0e78:  mov    0x8(%ebp),%eax
08501503 +0x0e7b:  mov    0x654(%eax),%ebx
08501509 +0x0e81:  mov    0x10(%ebp),%eax
0850150c +0x0e84:  imul   $0x3d,%eax,%eax
0850150f +0x0e87:  lea    (%ebx,%eax,1),%eax
08501512 +0x0e8a:  mov    0x2(%eax),%eax
08501515 +0x0e8d:  mov    0x10(%ebp),%ebx
08501518 +0x0e90:  add    $0xa,%ebx
0850151b +0x0e93:  mov    %ecx,0x18(%esp)
0850151f +0x0e97:  mov    -0x2c(%ebp),%ecx
08501522 +0x0e9a:  mov    %ecx,0x14(%esp)
08501526 +0x0e9e:  mov    %edx,0x10(%esp)
0850152a +0x0ea2:  mov    %eax,0xc(%esp)
0850152e +0x0ea6:  mov    -0x30(%ebp),%eax
08501531 +0x0ea9:  mov    %eax,0x8(%esp)
08501535 +0x0ead:  mov    %ebx,0x4(%esp)
08501539 +0x0eb1:  mov    0x8(%ebp),%eax
0850153c +0x0eb4:  mov    %eax,(%esp)
0850153f +0x0eb7:  call   08508fd0 <_ZN10CInventory15MoveClearAvatarEiiiiii>  ; CInventory::MoveClearAvatar(int, int, int, int, int, int)
08501544 +0x0ebc:  mov    0x18(%ebp),%eax
08501547 +0x0ebf:  imul   $0x3d,%eax,%eax
0850154a +0x0ec2:  add    $0x10,%eax
0850154d +0x0ec5:  add    0x8(%ebp),%eax
08501550 +0x0ec8:  lea    0xc(%eax),%edx
08501553 +0x0ecb:  mov    0x8(%ebp),%eax
08501556 +0x0ece:  mov    0x654(%eax),%ecx
0850155c +0x0ed4:  mov    0x10(%ebp),%eax
0850155f +0x0ed7:  imul   $0x3d,%eax,%eax
08501562 +0x0eda:  lea    (%ecx,%eax,1),%eax
08501565 +0x0edd:  mov    %edx,0x4(%esp)
08501569 +0x0ee1:  mov    %eax,(%esp)
0850156c +0x0ee4:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08501571 +0x0ee9:  mov    0x18(%ebp),%eax
08501574 +0x0eec:  imul   $0x3d,%eax,%eax
08501577 +0x0eef:  add    $0x10,%eax
0850157a +0x0ef2:  add    0x8(%ebp),%eax
0850157d +0x0ef5:  lea    0xc(%eax),%edx
08501580 +0x0ef8:  lea    -0x1f9(%ebp),%eax
08501586 +0x0efe:  mov    %eax,0x4(%esp)
0850158a +0x0f02:  mov    %edx,(%esp)
0850158d +0x0f05:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08501592 +0x0f0a:  mov    0x18(%ebp),%eax
08501595 +0x0f0d:  mov    0x10(%ebp),%edx
08501598 +0x0f10:  lea    0xa(%edx),%ecx
0850159b +0x0f13:  mov    -0x2c(%ebp),%edx
0850159e +0x0f16:  mov    %edx,0x14(%esp)
085015a2 +0x0f1a:  mov    -0x30(%ebp),%edx
085015a5 +0x0f1d:  mov    %edx,0x10(%esp)
085015a9 +0x0f21:  mov    %eax,0xc(%esp)
085015ad +0x0f25:  mov    %ecx,0x8(%esp)
085015b1 +0x0f29:  movl   $0x32,0x4(%esp)
085015b9 +0x0f31:  mov    0x8(%ebp),%eax
085015bc +0x0f34:  mov    %eax,(%esp)
085015bf +0x0f37:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085015c4 +0x0f3c:  jmp    085016fa <+0x1072>
085015c9 +0x0f41:  mov    0x8(%ebp),%eax
085015cc +0x0f44:  mov    0x654(%eax),%edx
085015d2 +0x0f4a:  mov    0x10(%ebp),%eax
085015d5 +0x0f4d:  imul   $0x3d,%eax,%eax
085015d8 +0x0f50:  lea    (%edx,%eax,1),%eax
085015db +0x0f53:  mov    0x7(%eax),%eax
085015de +0x0f56:  mov    %eax,-0x20(%ebp)
085015e1 +0x0f59:  mov    0x8(%ebp),%eax
085015e4 +0x0f5c:  mov    0x654(%eax),%edx
085015ea +0x0f62:  mov    0x18(%ebp),%eax
085015ed +0x0f65:  imul   $0x3d,%eax,%eax
085015f0 +0x0f68:  lea    (%edx,%eax,1),%eax
085015f3 +0x0f6b:  mov    0x7(%eax),%eax
085015f6 +0x0f6e:  mov    %eax,-0x1c(%ebp)
085015f9 +0x0f71:  lea    -0x236(%ebp),%eax
085015ff +0x0f77:  mov    %eax,(%esp)
08501602 +0x0f7a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08501607 +0x0f7f:  mov    0x8(%ebp),%eax
0850160a +0x0f82:  mov    0x654(%eax),%edx
08501610 +0x0f88:  mov    0x10(%ebp),%eax
08501613 +0x0f8b:  imul   $0x3d,%eax,%eax
08501616 +0x0f8e:  lea    (%edx,%eax,1),%eax
08501619 +0x0f91:  mov    %eax,0x4(%esp)
0850161d +0x0f95:  lea    -0x236(%ebp),%eax
08501623 +0x0f9b:  mov    %eax,(%esp)
08501626 +0x0f9e:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850162b +0x0fa3:  mov    0x8(%ebp),%eax
0850162e +0x0fa6:  mov    0x654(%eax),%edx
08501634 +0x0fac:  mov    0x18(%ebp),%eax
08501637 +0x0faf:  imul   $0x3d,%eax,%eax
0850163a +0x0fb2:  add    %eax,%edx
0850163c +0x0fb4:  mov    0x8(%ebp),%eax
0850163f +0x0fb7:  mov    0x654(%eax),%ecx
08501645 +0x0fbd:  mov    0x10(%ebp),%eax
08501648 +0x0fc0:  imul   $0x3d,%eax,%eax
0850164b +0x0fc3:  lea    (%ecx,%eax,1),%eax
0850164e +0x0fc6:  mov    %edx,0x4(%esp)
08501652 +0x0fca:  mov    %eax,(%esp)
08501655 +0x0fcd:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850165a +0x0fd2:  mov    0x8(%ebp),%eax
0850165d +0x0fd5:  mov    0x654(%eax),%edx
08501663 +0x0fdb:  mov    0x18(%ebp),%eax
08501666 +0x0fde:  imul   $0x3d,%eax,%eax
08501669 +0x0fe1:  add    %eax,%edx
0850166b +0x0fe3:  lea    -0x236(%ebp),%eax
08501671 +0x0fe9:  mov    %eax,0x4(%esp)
08501675 +0x0fed:  mov    %edx,(%esp)
08501678 +0x0ff0:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850167d +0x0ff5:  mov    0x18(%ebp),%eax
08501680 +0x0ff8:  lea    0xa(%eax),%ecx
08501683 +0x0ffb:  mov    0x10(%ebp),%eax
08501686 +0x0ffe:  lea    0xa(%eax),%edx
08501689 +0x1001:  mov    -0x1c(%ebp),%eax
0850168c +0x1004:  mov    %eax,0x14(%esp)
08501690 +0x1008:  mov    -0x20(%ebp),%eax
08501693 +0x100b:  mov    %eax,0x10(%esp)
08501697 +0x100f:  mov    %ecx,0xc(%esp)
0850169b +0x1013:  mov    %edx,0x8(%esp)
0850169f +0x1017:  movl   $0x32,0x4(%esp)
085016a7 +0x101f:  mov    0x8(%ebp),%eax
085016aa +0x1022:  mov    %eax,(%esp)
085016ad +0x1025:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085016b2 +0x102a:  jmp    085016fa <+0x1072>
085016b4 +0x102c:  movl   $0x5,0xc(%esp)
085016bc +0x1034:  movl   $0x1306,0x8(%esp)
085016c4 +0x103c:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
085016cc +0x1044:  lea    -0x88(%ebp),%eax
085016d2 +0x104a:  mov    %eax,(%esp)
085016d5 +0x104d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085016da +0x1052:  movl   $"CInventory::move_item move_item return false 8",0x4(%esp)
085016e2 +0x105a:  lea    -0x88(%ebp),%eax
085016e8 +0x1060:  mov    %eax,(%esp)
085016eb +0x1063:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085016f0 +0x1068:  mov    $0x11,%eax
085016f5 +0x106d:  jmp    08501852 <+0x11ca>
085016fa +0x1072:  jmp    0850184d <+0x11c5>
085016ff +0x1077:  mov    0x14(%ebp),%eax
08501702 +0x107a:  cmp    $0x1,%eax
08501705 +0x107d:  je     08501809 <+0x1181>
0850170b +0x1083:  cmp    $0x3,%eax
0850170e +0x1086:  je     08501795 <+0x110d>
08501714 +0x108c:  test   %eax,%eax
08501716 +0x108e:  jne    0850184d <+0x11c5>
0850171c +0x1094:  mov    0xc(%ebp),%eax
0850171f +0x1097:  mov    %eax,%esi
08501721 +0x1099:  mov    0x10(%ebp),%ebx
08501724 +0x109c:  mov    0x8(%ebp),%eax
08501727 +0x109f:  mov    0x6e4(%eax),%edx
0850172d +0x10a5:  mov    0x10(%ebp),%eax
08501730 +0x10a8:  imul   $0x3d,%eax,%eax
08501733 +0x10ab:  add    %eax,%edx
08501735 +0x10ad:  mov    %edx,-0x240(%ebp)
0850173b +0x10b3:  mov    0x14(%ebp),%eax
0850173e +0x10b6:  mov    %eax,%ecx
08501740 +0x10b8:  mov    0x18(%ebp),%edx
08501743 +0x10bb:  mov    0x18(%ebp),%eax
08501746 +0x10be:  imul   $0x3d,%eax,%eax
08501749 +0x10c1:  add    $0x10,%eax
0850174c +0x10c4:  add    0x8(%ebp),%eax
0850174f +0x10c7:  lea    0xc(%eax),%edi
08501752 +0x10ca:  mov    0x8(%ebp),%eax
08501755 +0x10cd:  add    $0x6e8,%eax
0850175a +0x10d2:  mov    %esi,0x18(%esp)
0850175e +0x10d6:  mov    %ebx,0x14(%esp)
08501762 +0x10da:  mov    -0x240(%ebp),%ebx
08501768 +0x10e0:  mov    %ebx,0x10(%esp)
0850176c +0x10e4:  mov    %ecx,0xc(%esp)
08501770 +0x10e8:  mov    %edx,0x8(%esp)
08501774 +0x10ec:  mov    %edi,0x4(%esp)
08501778 +0x10f0:  mov    %eax,(%esp)
0850177b +0x10f3:  call   083399fa <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii>  ; user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int)
08501780 +0x10f8:  xor    $0x1,%eax
08501783 +0x10fb:  test   %al,%al
08501785 +0x10fd:  je     08501849 <+0x11c1>
0850178b +0x1103:  mov    $0x11,%eax
08501790 +0x1108:  jmp    08501852 <+0x11ca>
08501795 +0x110d:  mov    0xc(%ebp),%eax
08501798 +0x1110:  mov    %eax,%edi
0850179a +0x1112:  mov    0x10(%ebp),%esi
0850179d +0x1115:  mov    0x8(%ebp),%eax
085017a0 +0x1118:  mov    0x6e4(%eax),%edx
085017a6 +0x111e:  mov    0x10(%ebp),%eax
085017a9 +0x1121:  imul   $0x3d,%eax,%eax
085017ac +0x1124:  add    %eax,%edx
085017ae +0x1126:  mov    %edx,-0x23c(%ebp)
085017b4 +0x112c:  mov    0x14(%ebp),%eax
085017b7 +0x112f:  mov    %eax,%ebx
085017b9 +0x1131:  mov    0x18(%ebp),%ecx
085017bc +0x1134:  mov    0x8(%ebp),%eax
085017bf +0x1137:  mov    0x6e4(%eax),%edx
085017c5 +0x113d:  mov    0x18(%ebp),%eax
085017c8 +0x1140:  imul   $0x3d,%eax,%eax
085017cb +0x1143:  add    %eax,%edx
085017cd +0x1145:  mov    0x8(%ebp),%eax
085017d0 +0x1148:  add    $0x6e8,%eax
085017d5 +0x114d:  mov    %edi,0x18(%esp)
085017d9 +0x1151:  mov    %esi,0x14(%esp)
085017dd +0x1155:  mov    -0x23c(%ebp),%esi
085017e3 +0x115b:  mov    %esi,0x10(%esp)
085017e7 +0x115f:  mov    %ebx,0xc(%esp)
085017eb +0x1163:  mov    %ecx,0x8(%esp)
085017ef +0x1167:  mov    %edx,0x4(%esp)
085017f3 +0x116b:  mov    %eax,(%esp)
085017f6 +0x116e:  call   083399fa <_ZN13user_creature12CCreatureMgr16SwapCreatureItemEP10Inven_ItemiiS2_ii>  ; user_creature::CCreatureMgr::SwapCreatureItem(Inven_Item*, int, int, Inven_Item*, int, int)
085017fb +0x1173:  xor    $0x1,%eax
085017fe +0x1176:  test   %al,%al
08501800 +0x1178:  je     0850184c <+0x11c4>
08501802 +0x117a:  mov    $0x11,%eax
08501807 +0x117f:  jmp    08501852 <+0x11ca>
08501809 +0x1181:  movl   $0x5,0xc(%esp)
08501811 +0x1189:  movl   $0x131c,0x8(%esp)
08501819 +0x1191:  movl   $&_ZZN10CInventory9move_itemE10INVEN_TYPEiS0_iE19__PRETTY_FUNCTION__,0x4(%esp)
08501821 +0x1199:  lea    -0x78(%ebp),%eax
08501824 +0x119c:  mov    %eax,(%esp)
08501827 +0x119f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850182c +0x11a4:  movl   $"CInventory::move_item move_item return false 9",0x4(%esp)
08501834 +0x11ac:  lea    -0x78(%ebp),%eax
08501837 +0x11af:  mov    %eax,(%esp)
0850183a +0x11b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850183f +0x11b7:  mov    $0x11,%eax
08501844 +0x11bc:  jmp    08501852 <+0x11ca>
08501846 +0x11be:  nop
08501847 +0x11bf:  jmp    0850184d <+0x11c5>
08501849 +0x11c1:  nop
0850184a +0x11c2:  jmp    0850184d <+0x11c5>
0850184c +0x11c4:  nop
0850184d +0x11c5:  mov    $0x0,%eax
08501852 +0x11ca:  add    $0x25c,%esp
08501858 +0x11d0:  pop    %ebx
08501859 +0x11d1:  pop    %esi
0850185a +0x11d2:  pop    %edi
0850185b +0x11d3:  pop    %ebp
0850185c +0x11d4:  ret
0850185d +0x11d5:  nop
```

## 反编译 C

```c
// CInventory::move_item @ 0x8500688

/* CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int) */

int __thiscall
CInventory::move_item(CInventory *this,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  ServiceRestrictManager *pSVar7;
  int iVar8;
  int iVar9;
  CDataManager *pCVar10;
  Inven_Item local_23a [61];
  Inven_Item local_1fd [61];
  Inven_Item local_1c0 [61];
  Inven_Item local_183 [2];
  int local_181;
  undefined2 local_178;
  Inven_Item local_146 [61];
  Inven_Item local_109 [61];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  CItem *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CItem *local_54;
  int local_50;
  int local_4c;
  CItem *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  CItem *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  cVar5 = CheckValidSlot(this,param_2,param_3);
  if ((cVar5 == '\x01') && (cVar5 = CheckValidSlot(this,param_4,param_5), cVar5 == '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar4 = param_5;
  iVar9 = param_4;
  iVar8 = param_3;
  uVar3 = param_2;
  if (bVar2) {
    cMyTrace::cMyTrace(local_cc,"int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",0x112c
                       ,5);
    cMyTrace::operator()
              (local_cc,"CInventory::move_item move_item return false 0, %d,%d,%d,%d",uVar3,iVar8,
               iVar9,iVar4);
    return 0x11;
  }
  if ((param_2 < 3) && (param_4 == 3)) {
    std::swap<int>(&param_3,&param_5);
    std::swap<INVEN_TYPE>((INVEN_TYPE *)&param_2,(INVEN_TYPE *)&param_4);
  }
  if (param_2 == 1) {
    if (param_4 != 1) {
      if (1 < param_4) {
        if (param_4 == 2) {
          return 0x11;
        }
        if (param_4 != 3) {
          return 0;
        }
        return 0x11;
      }
      if (param_4 != 0) {
        return 0;
      }
      cVar5 = CheckEquipable((Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d),
                             (Inven_Item *)(this + param_5 * 0x3d + 0x1c));
      if (cVar5 == '\x01') {
        cVar5 = stAmplifyOption_t::isIdentified
                          ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_3 * 0x3d + 0x11));
        if ((cVar5 == '\x01') &&
           (cVar5 = stAmplifyOption_t::isIdentified
                              ((stAmplifyOption_t *)(this + param_5 * 0x3d + 0x2d)), cVar5 == '\x01'
           )) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return 0x11;
        }
        local_4c = GetSlotItemType(this,param_3);
        if (local_4c == 0xb) {
          return 0x11;
        }
        Inven_Item::Inven_Item(local_183);
        Inven_Item::setCopy(local_183,(Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
        iVar8 = local_181;
        if (local_181 != 0) {
          pCVar10 = (CDataManager *)G_CDataManager();
          local_48 = (CItem *)CDataManager::find_item(pCVar10,iVar8);
          if ((local_48 == (CItem *)0x0) || (*(int *)this == 0)) {
            cMyTrace::cMyTrace(local_9c,
                               "int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",0x1276,
                               5);
            cMyTrace::operator()
                      (local_9c,"CInventory::move_item move_item return false 4,%d",local_181);
            return 0x11;
          }
          cVar5 = (**(code **)(*(int *)local_48 + 0x10))(local_48);
          if (cVar5 != '\0') {
            return 0x11;
          }
          cVar5 = (**(code **)(*(int *)local_48 + 0x14))(local_48);
          if (cVar5 != '\0') {
            return 0x11;
          }
          local_44 = 0;
          local_44 = IsEquipable(*(CUser **)this,local_48,param_5);
          if (local_44 != 0) {
            return local_44;
          }
          cVar5 = (**(code **)(*(int *)local_48 + 0x4c))(local_48);
          if ((cVar5 == '\0') ||
             (cVar5 = RandomOption::empty((RandomOption *)
                                          (*(int *)(this + 0x650) + param_3 * 0x3d + 0x25)),
             cVar5 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            return 0x11;
          }
          iVar8 = (**(code **)(*(int *)local_48 + 0x48))(local_48);
          if (iVar8 != 0) {
            iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            iVar9 = (**(code **)(*(int *)local_48 + 0x48))(local_48);
            local_40 = iVar8 + iVar9 * 0x15180;
            if (local_40 != 0) {
              local_178 = (undefined2)((local_40 + -0x44a54a80) / 0x15180);
            }
          }
        }
        Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d),
                            (Inven_Item *)(this + param_5 * 0x3d + 0x1c));
        local_183[0] = (Inven_Item)0x0;
        Inven_Item::setCopy((Inven_Item *)(this + param_5 * 0x3d + 0x1c),local_183);
        return 0;
      }
      return 0x11;
    }
    local_3c = GetSlotItemType(this,param_3);
    local_38 = GetSlotItemType(this,param_5);
    if ((local_3c == 0xb) || (local_38 == 0xb)) {
      return 0x11;
    }
    if (((local_3c != 0) && (local_38 != 0)) && (local_3c != local_38)) {
      return 0x11;
    }
    if (((local_3c != 0) && (*(int *)(*(int *)(this + 0x650) + param_5 * 0x3d + 2) != 0)) &&
       (*(byte *)(*(int *)(this + 0x650) + param_5 * 0x3d + 1) != local_3c)) {
      return 0x11;
    }
    if (((local_38 != 0) && (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) != 0)) &&
       (*(byte *)(*(int *)(this + 0x650) + param_3 * 0x3d + 1) != local_38)) {
      return 0x11;
    }
    Inven_Item::Inven_Item(local_1c0);
    Inven_Item::setCopy(local_1c0,(Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d),
                        (Inven_Item *)(*(int *)(this + 0x650) + param_5 * 0x3d));
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + param_5 * 0x3d),local_1c0);
    return 0;
  }
  if (1 < (int)param_2) {
    if (param_2 == 2) {
      if (param_4 == 1) {
        cMyTrace::cMyTrace(local_8c,"int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",
                           0x1306,5);
        cMyTrace::operator()(local_8c,"CInventory::move_item move_item return false 8");
        return 0x11;
      }
      if (param_4 == 2) {
        local_24 = *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7);
        local_20 = *(int *)(*(int *)(this + 0x654) + param_5 * 0x3d + 7);
        Inven_Item::Inven_Item(local_23a);
        Inven_Item::setCopy(local_23a,(Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d));
        Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d),
                            (Inven_Item *)(*(int *)(this + 0x654) + param_5 * 0x3d));
        Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x654) + param_5 * 0x3d),local_23a);
        SendAvatarEvent(this,0x32,param_3 + 10,param_5 + 10,local_24,local_20);
        return 0;
      }
      if (param_4 != 0) {
        return 0;
      }
      Inven_Item::Inven_Item(local_1fd);
      Inven_Item::setCopy(local_1fd,(Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d));
      cVar5 = CheckEquipable((Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d),
                             (Inven_Item *)(this + param_5 * 0x3d + 0x1c));
      if (cVar5 == '\x01') {
        if (*(int *)(this + param_5 * 0x3d + 0x1e) != 0) {
          iVar8 = *(int *)(this + param_5 * 0x3d + 0x1e);
          pCVar10 = (CDataManager *)G_CDataManager();
          local_2c = (CItem *)CDataManager::find_item(pCVar10,iVar8);
          if ((*(int *)this != 0) && (local_2c != (CItem *)0x0)) {
            cVar5 = (**(code **)(*(int *)local_2c + 0x10))(local_2c);
            if (cVar5 != '\x01') {
              return 0x11;
            }
            local_28 = 0;
            local_28 = IsEquipable(*(CUser **)this,local_2c,param_5);
            if (local_28 != 0) {
              return local_28;
            }
          }
        }
        local_34 = *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7);
        local_30 = *(int *)(this + param_5 * 0x3d + 0x23);
        MoveClearAvatar(this,param_3 + 10,local_34,
                        *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 2),param_5,local_30,
                        *(int *)(this + param_5 * 0x3d + 0x1e));
        Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d),
                            (Inven_Item *)(this + param_5 * 0x3d + 0x1c));
        Inven_Item::setCopy((Inven_Item *)(this + param_5 * 0x3d + 0x1c),local_1fd);
        SendAvatarEvent(this,0x32,param_3 + 10,param_5,local_34,local_30);
        return 0;
      }
      return 0x11;
    }
    if (param_2 != 3) {
      return 0;
    }
    if (param_4 == 1) {
      cMyTrace::cMyTrace(local_7c,"int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",
                         0x131c,5);
      cMyTrace::operator()(local_7c,"CInventory::move_item move_item return false 9");
      return 0x11;
    }
    if (param_4 == 3) {
      cVar5 = user_creature::CCreatureMgr::SwapCreatureItem
                        ((CCreatureMgr *)(this + 0x6e8),
                         (Inven_Item *)(*(int *)(this + 0x6e4) + param_5 * 0x3d),param_5,3,
                         (Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d),param_3,3);
      if (cVar5 == '\x01') {
        return 0;
      }
      return 0x11;
    }
    if (param_4 != 0) {
      return 0;
    }
    cVar5 = user_creature::CCreatureMgr::SwapCreatureItem
                      ((CCreatureMgr *)(this + 0x6e8),(Inven_Item *)(this + param_5 * 0x3d + 0x1c),
                       param_5,0,(Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d),param_3,3);
    if (cVar5 == '\x01') {
      return 0;
    }
    return 0x11;
  }
  if (param_2 != 0) {
    return 0;
  }
  if (param_4 != 1) {
    if (param_4 < 2) {
      if (param_4 != 0) {
        return 0;
      }
      cMyTrace::cMyTrace(local_ac,"int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",
                         0x122a,5);
      cMyTrace::operator()(local_ac,"CInventory::move_item move_item return false 3");
      return 0x11;
    }
    if (param_4 != 2) {
      if (param_4 != 3) {
        return 0;
      }
      cMyTrace::cMyTrace(local_bc,"int CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)",
                         0x1224,5);
      cMyTrace::operator()(local_bc,"CInventory::move_item move_item return false 10");
      return 0x11;
    }
    cVar5 = CheckEquipable((Inven_Item *)(this + param_3 * 0x3d + 0x1c),
                           (Inven_Item *)(*(int *)(this + 0x654) + param_5 * 0x3d));
    if (cVar5 != '\x01') {
      return 0x11;
    }
    if (*(int *)(*(int *)(this + 0x654) + param_5 * 0x3d + 2) != 0) {
      iVar8 = *(int *)(*(int *)(this + 0x654) + param_5 * 0x3d + 2);
      pCVar10 = (CDataManager *)G_CDataManager();
      local_54 = (CItem *)CDataManager::find_item(pCVar10,iVar8);
      if ((*(int *)this != 0) && (local_54 != (CItem *)0x0)) {
        cVar5 = (**(code **)(*(int *)local_54 + 0x10))(local_54);
        if (cVar5 != '\x01') {
          return 0x11;
        }
        cVar5 = (**(code **)(*(int *)local_54 + 0x14))(local_54);
        if (cVar5 != '\0') {
          return 0x11;
        }
        local_50 = 0;
        local_50 = IsEquipable(*(CUser **)this,local_54,param_3);
        if (local_50 != 0) {
          return local_50;
        }
      }
    }
    local_5c = *(int *)(this + param_3 * 0x3d + 0x23);
    local_58 = *(int *)(*(int *)(this + 0x654) + param_5 * 0x3d + 7);
    MoveClearAvatar(this,param_5 + 10,local_58,*(int *)(*(int *)(this + 0x654) + param_5 * 0x3d + 2)
                    ,param_3,local_5c,*(int *)(this + param_3 * 0x3d + 0x1e));
    Inven_Item::Inven_Item(local_146);
    Inven_Item::setCopy(local_146,(Inven_Item *)(this + param_3 * 0x3d + 0x1c));
    Inven_Item::setCopy((Inven_Item *)(this + param_3 * 0x3d + 0x1c),
                        (Inven_Item *)(*(int *)(this + 0x654) + param_5 * 0x3d));
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x654) + param_5 * 0x3d),local_146);
    SendAvatarEvent(this,0x32,param_3,param_5 + 10,local_5c,local_58);
    return 0;
  }
  cVar5 = CheckEquipable((Inven_Item *)(this + param_3 * 0x3d + 0x1c),
                         (Inven_Item *)(*(int *)(this + 0x650) + param_5 * 0x3d));
  if (cVar5 != '\x01') {
    return 0x11;
  }
  cVar5 = isEquipmentPlaceableAtInventory(param_5);
  if (cVar5 != '\x01') {
    return 0x11;
  }
  iVar8 = *(int *)(*(int *)(this + 0x650) + param_5 * 0x3d + 2);
  pCVar10 = (CDataManager *)G_CDataManager();
  local_6c = (CItem *)CDataManager::find_item(pCVar10,iVar8);
  if ((*(int *)this != 0) && (local_6c != (CItem *)0x0)) {
    cVar5 = (**(code **)(*(int *)local_6c + 0x10))(local_6c);
    if (cVar5 != '\0') {
      return 0x11;
    }
    cVar5 = (**(code **)(*(int *)local_6c + 0x14))(local_6c);
    if (cVar5 != '\0') {
      return 0x11;
    }
    local_64 = 0;
    local_64 = IsEquipable(*(CUser **)this,local_6c,param_3);
    if (local_64 != 0) {
      return local_64;
    }
    cVar5 = (**(code **)(*(int *)local_6c + 0x4c))(local_6c);
    if ((cVar5 == '\0') ||
       (cVar5 = RandomOption::empty((RandomOption *)(*(int *)(this + 0x650) + param_5 * 0x3d + 0x25)
                                   ), cVar5 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return 0x11;
    }
  }
  local_68 = GetSlotItemType(this,param_5);
  if (local_68 == 0xb) {
    return 0x11;
  }
  cVar5 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(this + param_3 * 0x3d + 0x2d));
  if ((cVar5 == '\x01') &&
     (cVar5 = stAmplifyOption_t::isIdentified
                        ((stAmplifyOption_t *)(*(int *)(this + 0x650) + param_5 * 0x3d + 0x11)),
     cVar5 == '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0x11;
  }
  if (*(char *)(*(int *)(this + 0x650) + param_5 * 0x3d) != '\0') {
    uVar1 = *(undefined4 *)this;
    pSVar7 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar5 = ServiceRestrictManager::isRestricted(pSVar7,uVar1,1,0xe);
    if (cVar5 != '\0') {
      bVar2 = true;
      goto LAB_08500a23;
    }
  }
  bVar2 = false;
LAB_08500a23:
  if (!bVar2) {
    Inven_Item::Inven_Item(local_109);
    Inven_Item::setCopy(local_109,(Inven_Item *)(this + param_3 * 0x3d + 0x1c));
    Inven_Item::setCopy((Inven_Item *)(this + param_3 * 0x3d + 0x1c),
                        (Inven_Item *)(*(int *)(this + 0x650) + param_5 * 0x3d));
    if ((*(int *)this != 0) && (this[param_3 * 0x3d + 0x1c] != (CInventory)0x0)) {
      uVar6 = Inven_Item::GetReSealCount((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
      cUserHistoryLog::seal_Item
                ((cUserHistoryLog *)(*(int *)this + 0x79700),
                 *(undefined4 *)(this + param_3 * 0x3d + 0x1e),uVar6,1);
    }
    this[param_3 * 0x3d + 0x1c] = (CInventory)0x0;
    if ((local_6c == (CItem *)0x0) ||
       (iVar8 = (**(code **)(*(int *)local_6c + 0x48))(local_6c), iVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar9 = (**(code **)(*(int *)local_6c + 0x48))(local_6c);
      local_60 = iVar8 + iVar9 * 0x15180;
      if (local_60 != 0) {
        *(short *)(this + param_3 * 0x3d + 0x27) = (short)((local_60 + -0x44a54a80) / 0x15180);
      }
    }
    Inven_Item::setCopy((Inven_Item *)(*(int *)(this + 0x650) + param_5 * 0x3d),local_109);
    return 0;
  }
  return 0xd1;
}
```
