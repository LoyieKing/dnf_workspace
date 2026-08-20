# putTitle

`_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08642058` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08642058  _ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08642058, 0x086425c3]
08642058 +0x000:  push   %ebp
08642059 +0x001:  mov    %esp,%ebp
0864205b +0x003:  push   %edi
0864205c +0x004:  push   %esi
0864205d +0x005:  push   %ebx
0864205e +0x006:  sub    $0x15c,%esp
08642064 +0x00c:  movl   $0xe,0x4(%esp)
0864206c +0x014:  mov    0x8(%ebp),%eax
0864206f +0x017:  mov    %eax,(%esp)
08642072 +0x01a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08642077 +0x01f:  mov    %eax,-0x30(%ebp)
0864207a +0x022:  cmpl   $0x0,-0x30(%ebp)
0864207e +0x026:  jne    0864208a <+0x32>
08642080 +0x028:  mov    $0x3,%ebx
08642085 +0x02d:  jmp    086425b7 <+0x55f>
0864208a +0x032:  cmpl   $0x12,0xc(%ebp)
0864208e +0x036:  jne    08642097 <+0x3f>
08642090 +0x038:  movl   $0x3,0xc(%ebp)
08642097 +0x03f:  mov    0x8(%ebp),%eax
0864209a +0x042:  mov    %eax,(%esp)
0864209d +0x045:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086420a2 +0x04a:  mov    %eax,-0x2c(%ebp)
086420a5 +0x04d:  mov    0xc(%ebp),%eax
086420a8 +0x050:  mov    %eax,(%esp)
086420ab +0x053:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
086420b0 +0x058:  mov    %eax,-0x28(%ebp)
086420b3 +0x05b:  mov    -0x28(%ebp),%edx
086420b6 +0x05e:  lea    -0x8d(%ebp),%eax
086420bc +0x064:  mov    0x10(%ebp),%ecx
086420bf +0x067:  mov    %ecx,0xc(%esp)
086420c3 +0x06b:  mov    %edx,0x8(%esp)
086420c7 +0x06f:  mov    -0x2c(%ebp),%edx
086420ca +0x072:  mov    %edx,0x4(%esp)
086420ce +0x076:  mov    %eax,(%esp)
086420d1 +0x079:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086420d6 +0x07e:  sub    $0x4,%esp
086420d9 +0x081:  cmpl   $0x0,0x14(%ebp)
086420dd +0x085:  je     086420ec <+0x94>
086420df +0x087:  mov    -0x8b(%ebp),%edx
086420e5 +0x08d:  mov    0x14(%ebp),%eax
086420e8 +0x090:  cmp    %eax,%edx
086420ea +0x092:  je     086420f6 <+0x9e>
086420ec +0x094:  mov    $0x2,%ebx
086420f1 +0x099:  jmp    086425b7 <+0x55f>
086420f6 +0x09e:  mov    0x1c(%ebp),%eax
086420f9 +0x0a1:  mov    %eax,0x4(%esp)
086420fd +0x0a5:  mov    0x18(%ebp),%eax
08642100 +0x0a8:  mov    %eax,(%esp)
08642103 +0x0ab:  call   0828bcb8 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi>  ; CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int)
08642108 +0x0b0:  mov    %eax,-0x24(%ebp)
0864210b +0x0b3:  cmpl   $0xffffffff,-0x24(%ebp)
0864210f +0x0b7:  je     0864219f <+0x147>
08642115 +0x0bd:  mov    -0x24(%ebp),%esi
08642118 +0x0c0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864211d +0x0c5:  add    $0xa794,%eax
08642122 +0x0ca:  mov    %esi,0x4(%esp)
08642126 +0x0ce:  mov    %eax,(%esp)
08642129 +0x0d1:  call   0828dd32 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4df>  ; global constructors keyed to CAchievement::CAchievement()+0x4df
0864212e +0x0d6:  mov    %eax,0x4(%esp)
08642132 +0x0da:  lea    -0x10c(%ebp),%eax
08642138 +0x0e0:  mov    %eax,(%esp)
0864213b +0x0e3:  call   0828dac2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x26f>  ; global constructors keyed to CAchievement::CAchievement()+0x26f
08642140 +0x0e8:  lea    -0x10c(%ebp),%eax
08642146 +0x0ee:  add    $0x30,%eax
08642149 +0x0f1:  mov    %eax,(%esp)
0864214c +0x0f4:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08642151 +0x0f9:  xor    $0x1,%eax
08642154 +0x0fc:  test   %al,%al
08642156 +0x0fe:  je     08642164 <+0x10c>
08642158 +0x100:  mov    $0xc,%ebx
0864215d +0x105:  mov    $0x0,%esi
08642162 +0x10a:  jmp    08642189 <+0x131>
08642164 +0x10c:  mov    $0x1,%esi
08642169 +0x111:  jmp    08642189 <+0x131>
0864216b +0x113:  mov    %edx,%ebx
0864216d +0x115:  mov    %eax,%esi
0864216f +0x117:  lea    -0x10c(%ebp),%eax
08642175 +0x11d:  mov    %eax,(%esp)
08642178 +0x120:  call   0828d972 <_GLOBAL__I__ZN12CAchievementC2Ev+0x11f>  ; global constructors keyed to CAchievement::CAchievement()+0x11f
0864217d +0x125:  mov    %esi,%eax
0864217f +0x127:  mov    %ebx,%edx
08642181 +0x129:  mov    %eax,(%esp)
08642184 +0x12c:  call   08ae3750 <_Unwind_Resume>
08642189 +0x131:  lea    -0x10c(%ebp),%eax
0864218f +0x137:  mov    %eax,(%esp)
08642192 +0x13a:  call   0828d972 <_GLOBAL__I__ZN12CAchievementC2Ev+0x11f>  ; global constructors keyed to CAchievement::CAchievement()+0x11f
08642197 +0x13f:  test   %esi,%esi
08642199 +0x141:  je     086425b7 <+0x55f>
0864219f +0x147:  mov    0x8(%ebp),%eax
086421a2 +0x14a:  mov    %eax,(%esp)
086421a5 +0x14d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086421aa +0x152:  cmp    $0x9,%eax
086421ad +0x155:  setle  %al
086421b0 +0x158:  test   %al,%al
086421b2 +0x15a:  je     086421be <+0x166>
086421b4 +0x15c:  mov    $0x8,%ebx
086421b9 +0x161:  jmp    086425b7 <+0x55f>
086421be +0x166:  cmpl   $0x2,0x18(%ebp)
086421c2 +0x16a:  jne    086421db <+0x183>
086421c4 +0x16c:  mov    0x8(%ebp),%eax
086421c7 +0x16f:  mov    %eax,(%esp)
086421ca +0x172:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086421cf +0x177:  cmp    $0x45,%eax
086421d2 +0x17a:  jg     086421db <+0x183>
086421d4 +0x17c:  mov    $0x1,%eax
086421d9 +0x181:  jmp    086421e0 <+0x188>
086421db +0x183:  mov    $0x0,%eax
086421e0 +0x188:  test   %al,%al
086421e2 +0x18a:  je     086421ee <+0x196>
086421e4 +0x18c:  mov    $0x9,%ebx
086421e9 +0x191:  jmp    086425b7 <+0x55f>
086421ee +0x196:  mov    0x1c(%ebp),%eax
086421f1 +0x199:  mov    %eax,0x8(%esp)
086421f5 +0x19d:  mov    0x18(%ebp),%eax
086421f8 +0x1a0:  mov    %eax,0x4(%esp)
086421fc +0x1a4:  mov    0x14(%ebp),%eax
086421ff +0x1a7:  mov    %eax,(%esp)
08642202 +0x1aa:  call   08642d42 <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_checkFitSlot(int, ENUM_TITLE_BOOK_CATEGORY, int)
08642207 +0x1af:  xor    $0x1,%eax
0864220a +0x1b2:  test   %al,%al
0864220c +0x1b4:  je     08642218 <+0x1c0>
0864220e +0x1b6:  mov    $0x2,%ebx
08642213 +0x1bb:  jmp    086425b7 <+0x55f>
08642218 +0x1c0:  lea    -0x8d(%ebp),%eax
0864221e +0x1c6:  mov    %eax,0xc(%esp)
08642222 +0x1ca:  mov    0x1c(%ebp),%eax
08642225 +0x1cd:  mov    %eax,0x8(%esp)
08642229 +0x1d1:  mov    0x18(%ebp),%eax
0864222c +0x1d4:  mov    %eax,0x4(%esp)
08642230 +0x1d8:  mov    -0x30(%ebp),%eax
08642233 +0x1db:  mov    %eax,(%esp)
08642236 +0x1de:  call   08641bdc <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>  ; CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
0864223b +0x1e3:  xor    $0x1,%eax
0864223e +0x1e6:  test   %al,%al
08642240 +0x1e8:  je     0864224c <+0x1f4>
08642242 +0x1ea:  mov    $0x2,%ebx
08642247 +0x1ef:  jmp    086425b7 <+0x55f>
0864224c +0x1f4:  movl   $0x1,0x14(%esp)
08642254 +0x1fc:  movl   $0x2b,0x10(%esp)
0864225c +0x204:  movl   $0x1,0xc(%esp)
08642264 +0x20c:  mov    0x10(%ebp),%eax
08642267 +0x20f:  mov    %eax,0x8(%esp)
0864226b +0x213:  mov    -0x28(%ebp),%eax
0864226e +0x216:  mov    %eax,0x4(%esp)
08642272 +0x21a:  mov    -0x2c(%ebp),%eax
08642275 +0x21d:  mov    %eax,(%esp)
08642278 +0x220:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0864227d +0x225:  xor    $0x1,%eax
08642280 +0x228:  test   %al,%al
08642282 +0x22a:  je     0864228e <+0x236>
08642284 +0x22c:  mov    $0x2,%ebx
08642289 +0x231:  jmp    086425b7 <+0x55f>
0864228e +0x236:  cmpl   $0x0,-0x28(%ebp)
08642292 +0x23a:  jne    086422ac <+0x254>
08642294 +0x23c:  cmpl   $0xb,0x10(%ebp)
08642298 +0x240:  jne    086422ac <+0x254>
0864229a +0x242:  mov    0x10(%ebp),%eax
0864229d +0x245:  mov    %eax,0x4(%esp)
086422a1 +0x249:  mov    0x8(%ebp),%eax
086422a4 +0x24c:  mov    %eax,(%esp)
086422a7 +0x24f:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
086422ac +0x254:  lea    -0xca(%ebp),%eax
086422b2 +0x25a:  mov    0x1c(%ebp),%edx
086422b5 +0x25d:  mov    %edx,0xc(%esp)
086422b9 +0x261:  mov    0x18(%ebp),%edx
086422bc +0x264:  mov    %edx,0x8(%esp)
086422c0 +0x268:  mov    -0x30(%ebp),%edx
086422c3 +0x26b:  mov    %edx,0x4(%esp)
086422c7 +0x26f:  mov    %eax,(%esp)
086422ca +0x272:  call   086416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int)
086422cf +0x277:  sub    $0x4,%esp
086422d2 +0x27a:  mov    -0xc8(%ebp),%eax
086422d8 +0x280:  test   %eax,%eax
086422da +0x282:  je     0864258f <+0x537>
086422e0 +0x288:  cmpl   $0x1,-0x28(%ebp)
086422e4 +0x28c:  jne    08642432 <+0x3da>
086422ea +0x292:  movl   $0x0,0x4c(%esp)
086422f2 +0x29a:  movl   $0x1,0x48(%esp)
086422fa +0x2a2:  movl   $0x7,0x44(%esp)
08642302 +0x2aa:  mov    -0xca(%ebp),%eax
08642308 +0x2b0:  mov    %eax,0x4(%esp)
0864230c +0x2b4:  mov    -0xc6(%ebp),%eax
08642312 +0x2ba:  mov    %eax,0x8(%esp)
08642316 +0x2be:  mov    -0xc2(%ebp),%eax
0864231c +0x2c4:  mov    %eax,0xc(%esp)
08642320 +0x2c8:  mov    -0xbe(%ebp),%eax
08642326 +0x2ce:  mov    %eax,0x10(%esp)
0864232a +0x2d2:  mov    -0xba(%ebp),%eax
08642330 +0x2d8:  mov    %eax,0x14(%esp)
08642334 +0x2dc:  mov    -0xb6(%ebp),%eax
0864233a +0x2e2:  mov    %eax,0x18(%esp)
0864233e +0x2e6:  mov    -0xb2(%ebp),%eax
08642344 +0x2ec:  mov    %eax,0x1c(%esp)
08642348 +0x2f0:  mov    -0xae(%ebp),%eax
0864234e +0x2f6:  mov    %eax,0x20(%esp)
08642352 +0x2fa:  mov    -0xaa(%ebp),%eax
08642358 +0x300:  mov    %eax,0x24(%esp)
0864235c +0x304:  mov    -0xa6(%ebp),%eax
08642362 +0x30a:  mov    %eax,0x28(%esp)
08642366 +0x30e:  mov    -0xa2(%ebp),%eax
0864236c +0x314:  mov    %eax,0x2c(%esp)
08642370 +0x318:  mov    -0x9e(%ebp),%eax
08642376 +0x31e:  mov    %eax,0x30(%esp)
0864237a +0x322:  mov    -0x9a(%ebp),%eax
08642380 +0x328:  mov    %eax,0x34(%esp)
08642384 +0x32c:  mov    -0x96(%ebp),%eax
0864238a +0x332:  mov    %eax,0x38(%esp)
0864238e +0x336:  mov    -0x92(%ebp),%eax
08642394 +0x33c:  mov    %eax,0x3c(%esp)
08642398 +0x340:  movzbl -0x8e(%ebp),%eax
0864239f +0x347:  mov    %al,0x40(%esp)
086423a3 +0x34b:  mov    -0x2c(%ebp),%eax
086423a6 +0x34e:  mov    %eax,(%esp)
086423a9 +0x351:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086423ae +0x356:  mov    %eax,-0x20(%ebp)
086423b1 +0x359:  cmpl   $0x0,-0x20(%ebp)
086423b5 +0x35d:  jns    0864258f <+0x537>
086423bb +0x363:  mov    -0xc8(%ebp),%edi
086423c1 +0x369:  mov    0x8(%ebp),%eax
086423c4 +0x36c:  mov    %eax,(%esp)
086423c7 +0x36f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086423cc +0x374:  mov    %eax,%esi
086423ce +0x376:  mov    0x8(%ebp),%eax
086423d1 +0x379:  mov    %eax,(%esp)
086423d4 +0x37c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086423d9 +0x381:  movl   $0x0,0x4(%esp)
086423e1 +0x389:  mov    %eax,(%esp)
086423e4 +0x38c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086423e9 +0x391:  mov    %eax,%ebx
086423eb +0x393:  movl   $0x5,0xc(%esp)
086423f3 +0x39b:  movl   $0x24f,0x8(%esp)
086423fb +0x3a3:  movl   $&_ZZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYiE19__PRETTY_FUNCTION__,0x4(%esp)
08642403 +0x3ab:  lea    -0x50(%ebp),%eax
08642406 +0x3ae:  mov    %eax,(%esp)
08642409 +0x3b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864240e +0x3b6:  mov    %edi,0x10(%esp)
08642412 +0x3ba:  mov    %esi,0xc(%esp)
08642416 +0x3be:  mov    %ebx,0x8(%esp)
0864241a +0x3c2:  movl   $"insertItemIntoInventory failed(title) %s %d %d",0x4(%esp)
08642422 +0x3ca:  lea    -0x50(%ebp),%eax
08642425 +0x3cd:  mov    %eax,(%esp)
08642428 +0x3d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864242d +0x3d5:  jmp    0864258f <+0x537>
08642432 +0x3da:  cmpl   $0x0,-0x28(%ebp)
08642436 +0x3de:  jne    0864258f <+0x537>
0864243c +0x3e4:  movl   $0x0,0x4c(%esp)
08642444 +0x3ec:  movl   $0x1,0x48(%esp)
0864244c +0x3f4:  movl   $0x7,0x44(%esp)
08642454 +0x3fc:  mov    -0xca(%ebp),%eax
0864245a +0x402:  mov    %eax,0x4(%esp)
0864245e +0x406:  mov    -0xc6(%ebp),%eax
08642464 +0x40c:  mov    %eax,0x8(%esp)
08642468 +0x410:  mov    -0xc2(%ebp),%eax
0864246e +0x416:  mov    %eax,0xc(%esp)
08642472 +0x41a:  mov    -0xbe(%ebp),%eax
08642478 +0x420:  mov    %eax,0x10(%esp)
0864247c +0x424:  mov    -0xba(%ebp),%eax
08642482 +0x42a:  mov    %eax,0x14(%esp)
08642486 +0x42e:  mov    -0xb6(%ebp),%eax
0864248c +0x434:  mov    %eax,0x18(%esp)
08642490 +0x438:  mov    -0xb2(%ebp),%eax
08642496 +0x43e:  mov    %eax,0x1c(%esp)
0864249a +0x442:  mov    -0xae(%ebp),%eax
086424a0 +0x448:  mov    %eax,0x20(%esp)
086424a4 +0x44c:  mov    -0xaa(%ebp),%eax
086424aa +0x452:  mov    %eax,0x24(%esp)
086424ae +0x456:  mov    -0xa6(%ebp),%eax
086424b4 +0x45c:  mov    %eax,0x28(%esp)
086424b8 +0x460:  mov    -0xa2(%ebp),%eax
086424be +0x466:  mov    %eax,0x2c(%esp)
086424c2 +0x46a:  mov    -0x9e(%ebp),%eax
086424c8 +0x470:  mov    %eax,0x30(%esp)
086424cc +0x474:  mov    -0x9a(%ebp),%eax
086424d2 +0x47a:  mov    %eax,0x34(%esp)
086424d6 +0x47e:  mov    -0x96(%ebp),%eax
086424dc +0x484:  mov    %eax,0x38(%esp)
086424e0 +0x488:  mov    -0x92(%ebp),%eax
086424e6 +0x48e:  mov    %eax,0x3c(%esp)
086424ea +0x492:  movzbl -0x8e(%ebp),%eax
086424f1 +0x499:  mov    %al,0x40(%esp)
086424f5 +0x49d:  mov    -0x2c(%ebp),%eax
086424f8 +0x4a0:  mov    %eax,(%esp)
086424fb +0x4a3:  call   08502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
08642500 +0x4a8:  mov    %eax,-0x1c(%ebp)
08642503 +0x4ab:  cmpl   $0x0,-0x1c(%ebp)
08642507 +0x4af:  jns    0864257d <+0x525>
08642509 +0x4b1:  mov    -0xc8(%ebp),%edi
0864250f +0x4b7:  mov    0x8(%ebp),%eax
08642512 +0x4ba:  mov    %eax,(%esp)
08642515 +0x4bd:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0864251a +0x4c2:  mov    %eax,%esi
0864251c +0x4c4:  mov    0x8(%ebp),%eax
0864251f +0x4c7:  mov    %eax,(%esp)
08642522 +0x4ca:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08642527 +0x4cf:  movl   $0x0,0x4(%esp)
0864252f +0x4d7:  mov    %eax,(%esp)
08642532 +0x4da:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08642537 +0x4df:  mov    %eax,%ebx
08642539 +0x4e1:  movl   $0x5,0xc(%esp)
08642541 +0x4e9:  movl   $0x256,0x8(%esp)
08642549 +0x4f1:  movl   $&_ZZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYiE19__PRETTY_FUNCTION__,0x4(%esp)
08642551 +0x4f9:  lea    -0x40(%ebp),%eax
08642554 +0x4fc:  mov    %eax,(%esp)
08642557 +0x4ff:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864255c +0x504:  mov    %edi,0x10(%esp)
08642560 +0x508:  mov    %esi,0xc(%esp)
08642564 +0x50c:  mov    %ebx,0x8(%esp)
08642568 +0x510:  movl   $"insertItemIntoEquipment failed(title) %s %d %d",0x4(%esp)
08642570 +0x518:  lea    -0x40(%ebp),%eax
08642573 +0x51b:  mov    %eax,(%esp)
08642576 +0x51e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864257b +0x523:  jmp    0864258f <+0x537>
0864257d +0x525:  mov    0x10(%ebp),%eax
08642580 +0x528:  mov    %eax,0x4(%esp)
08642584 +0x52c:  mov    0x8(%ebp),%eax
08642587 +0x52f:  mov    %eax,(%esp)
0864258a +0x532:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
0864258f +0x537:  lea    -0x8d(%ebp),%eax
08642595 +0x53d:  mov    %eax,0xc(%esp)
08642599 +0x541:  mov    0x1c(%ebp),%eax
0864259c +0x544:  mov    %eax,0x8(%esp)
086425a0 +0x548:  mov    0x18(%ebp),%eax
086425a3 +0x54b:  mov    %eax,0x4(%esp)
086425a7 +0x54f:  mov    -0x30(%ebp),%eax
086425aa +0x552:  mov    %eax,(%esp)
086425ad +0x555:  call   08641d16 <_ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>  ; CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*)
086425b2 +0x55a:  mov    $0x0,%ebx
086425b7 +0x55f:  mov    %ebx,%eax
086425b9 +0x561:  lea    -0xc(%ebp),%esp
086425bc +0x564:  add    $0x0,%esp
086425bf +0x567:  pop    %ebx
086425c0 +0x568:  pop    %esi
086425c1 +0x569:  pop    %edi
086425c2 +0x56a:  pop    %ebp
086425c3 +0x56b:  ret
```

## 反编译 C

```c
// CTitleBook::putTitle @ 0x8642058

/* CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4
CTitleBook::putTitle
          (CUser *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  stTitleSection *psVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  stTitleSection local_110 [48];
  string asStack_e0 [18];
  undefined2 local_ce;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined1 local_92;
  undefined1 local_91 [2];
  int local_8f;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CTitleBook *local_34;
  CInventory *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  local_34 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_34 == (CTitleBook *)0x0) {
    uVar8 = 3;
  }
  else {
    if (param_2 == 0x12) {
      param_2 = 3;
    }
    local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = GetInvenTypeFromItemSpace(param_2);
    iVar5 = param_3;
    local_2c = iVar3;
    CInventory::GetInvenSlot((int)local_91,(int)local_30);
    if ((param_4 == 0) || (local_8f != param_4)) {
      uVar8 = 2;
    }
    else {
      uVar4 = CAchievement::_getSectionIdx(param_5,param_6,iVar3,iVar5);
      local_28 = uVar4;
      if (uVar4 != 0xffffffff) {
        iVar5 = G_CDataManager();
        psVar6 = (stTitleSection *)
                 std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                           ((vector<stTitleSection,std::allocator<stTitleSection>> *)
                            (iVar5 + 0xa794),uVar4);
        stTitleSection::stTitleSection(local_110,psVar6);
                    /* try { // try from 0864214c to 08642150 has its CatchHandler @ 0864216b */
        cVar2 = std::string::empty(asStack_e0);
        if (cVar2 != '\x01') {
          unaff_EBX = 0xc;
        }
        stTitleSection::~stTitleSection(local_110);
        if (cVar2 != '\x01') {
          return unaff_EBX;
        }
      }
      iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (iVar5 < 10) {
        uVar8 = 8;
      }
      else {
        if ((param_5 == 2) &&
           (iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar5 < 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar8 = 9;
        }
        else {
          cVar2 = _checkFitSlot(param_4,param_5,param_6);
          if (cVar2 == '\x01') {
            cVar2 = _checkInsertTitle(local_34,param_5,param_6,local_91);
            if (cVar2 == '\x01') {
              cVar2 = CInventory::delete_item(local_30,local_2c,param_3,1,0x2b,1);
              if (cVar2 == '\x01') {
                if ((local_2c == 0) && (param_3 == 0xb)) {
                  CUser::send_equip(param_1,0xb);
                }
                getTitleSlotR(&local_ce,local_34,param_5,param_6);
                if (CONCAT22(uStack_ca,uStack_cc) != 0) {
                  if (local_2c == 1) {
                    local_24 = CInventory::insertItemIntoInventory
                                         (local_30,CONCAT22(uStack_cc,local_ce),
                                          CONCAT22(uStack_c8,uStack_ca),local_c6,local_c2,local_be,
                                          local_ba,local_b6,local_b2,local_ae,local_aa,local_a6,
                                          local_a2,local_9e,local_9a,local_96,local_92,7,1,0);
                    if (local_24 < 0) {
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar4 = CUser::get_acc_id(param_1);
                      uVar7 = NumberToString(uVar4,0);
                      cMyTrace::cMyTrace(local_54,
                                         "static int CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)"
                                         ,0x24f,5);
                      cMyTrace::operator()
                                (local_54,"insertItemIntoInventory failed(title) %s %d %d",uVar7,
                                 uVar8,CONCAT22(uStack_ca,uStack_cc));
                    }
                  }
                  else if (local_2c == 0) {
                    local_20 = CInventory::insertItemIntoEquipment
                                         (local_30,CONCAT22(uStack_cc,local_ce),
                                          CONCAT22(uStack_c8,uStack_ca),local_c6,local_c2,local_be,
                                          local_ba,local_b6,local_b2,local_ae,local_aa,local_a6,
                                          local_a2,local_9e,local_9a,local_96,local_92,7,1,0);
                    if (local_20 < 0) {
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar4 = CUser::get_acc_id(param_1);
                      uVar7 = NumberToString(uVar4,0);
                      cMyTrace::cMyTrace(local_44,
                                         "static int CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)"
                                         ,0x256,5);
                      cMyTrace::operator()
                                (local_44,"insertItemIntoEquipment failed(title) %s %d %d",uVar7,
                                 uVar8,CONCAT22(uStack_ca,uStack_cc));
                    }
                    else {
                      CUser::send_equip(param_1,param_3);
                    }
                  }
                }
                _insertTitle(local_34,param_5,param_6,local_91);
                uVar8 = 0;
              }
              else {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
          }
          else {
            uVar8 = 2;
          }
        }
      }
    }
  }
  return uVar8;
}
```
