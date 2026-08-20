# getTitle

`_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi`

`CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086425c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086425c4  _ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi
#           CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)
# range [0x086425c4, 0x08642ba9]
086425c4 +0x000:  push   %ebp
086425c5 +0x001:  mov    %esp,%ebp
086425c7 +0x003:  push   %edi
086425c8 +0x004:  push   %esi
086425c9 +0x005:  push   %ebx
086425ca +0x006:  sub    $0xdc,%esp
086425d0 +0x00c:  movl   $0xe,0x4(%esp)
086425d8 +0x014:  mov    0x8(%ebp),%eax
086425db +0x017:  mov    %eax,(%esp)
086425de +0x01a:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086425e3 +0x01f:  mov    %eax,-0x34(%ebp)
086425e6 +0x022:  cmpl   $0x0,-0x34(%ebp)
086425ea +0x026:  jne    086425f6 <+0x32>
086425ec +0x028:  mov    $0x3,%eax
086425f1 +0x02d:  jmp    08642b9e <+0x5da>
086425f6 +0x032:  cmpl   $0x12,0x18(%ebp)
086425fa +0x036:  jne    08642603 <+0x3f>
086425fc +0x038:  movl   $0x3,0x18(%ebp)
08642603 +0x03f:  mov    0x10(%ebp),%eax
08642606 +0x042:  mov    %eax,0x8(%esp)
0864260a +0x046:  mov    0xc(%ebp),%eax
0864260d +0x049:  mov    %eax,0x4(%esp)
08642611 +0x04d:  mov    0x8(%ebp),%eax
08642614 +0x050:  mov    %eax,(%esp)
08642617 +0x053:  call   08641fac <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::checkError(CUser*, ENUM_TITLE_BOOK_CATEGORY, int)
0864261c +0x058:  mov    %eax,-0x30(%ebp)
0864261f +0x05b:  cmpl   $0x0,-0x30(%ebp)
08642623 +0x05f:  je     0864262d <+0x69>
08642625 +0x061:  mov    -0x30(%ebp),%eax
08642628 +0x064:  jmp    08642b9e <+0x5da>
0864262d +0x069:  mov    0x8(%ebp),%eax
08642630 +0x06c:  mov    %eax,(%esp)
08642633 +0x06f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08642638 +0x074:  mov    %eax,-0x2c(%ebp)
0864263b +0x077:  mov    0x18(%ebp),%eax
0864263e +0x07a:  mov    %eax,(%esp)
08642641 +0x07d:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08642646 +0x082:  mov    %eax,-0x28(%ebp)
08642649 +0x085:  mov    0x10(%ebp),%eax
0864264c +0x088:  mov    %eax,0x8(%esp)
08642650 +0x08c:  mov    0xc(%ebp),%eax
08642653 +0x08f:  mov    %eax,0x4(%esp)
08642657 +0x093:  mov    -0x34(%ebp),%eax
0864265a +0x096:  mov    %eax,(%esp)
0864265d +0x099:  call   08641d84 <_ZN10CTitleBook9_getTitleE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_getTitle(ENUM_TITLE_BOOK_CATEGORY, int)
08642662 +0x09e:  mov    (%eax),%edx
08642664 +0x0a0:  mov    %edx,-0x91(%ebp)
0864266a +0x0a6:  mov    0x4(%eax),%edx
0864266d +0x0a9:  mov    %edx,-0x8d(%ebp)
08642673 +0x0af:  mov    0x8(%eax),%edx
08642676 +0x0b2:  mov    %edx,-0x89(%ebp)
0864267c +0x0b8:  mov    0xc(%eax),%edx
0864267f +0x0bb:  mov    %edx,-0x85(%ebp)
08642685 +0x0c1:  mov    0x10(%eax),%edx
08642688 +0x0c4:  mov    %edx,-0x81(%ebp)
0864268e +0x0ca:  mov    0x14(%eax),%edx
08642691 +0x0cd:  mov    %edx,-0x7d(%ebp)
08642694 +0x0d0:  mov    0x18(%eax),%edx
08642697 +0x0d3:  mov    %edx,-0x79(%ebp)
0864269a +0x0d6:  mov    0x1c(%eax),%edx
0864269d +0x0d9:  mov    %edx,-0x75(%ebp)
086426a0 +0x0dc:  mov    0x20(%eax),%edx
086426a3 +0x0df:  mov    %edx,-0x71(%ebp)
086426a6 +0x0e2:  mov    0x24(%eax),%edx
086426a9 +0x0e5:  mov    %edx,-0x6d(%ebp)
086426ac +0x0e8:  mov    0x28(%eax),%edx
086426af +0x0eb:  mov    %edx,-0x69(%ebp)
086426b2 +0x0ee:  mov    0x2c(%eax),%edx
086426b5 +0x0f1:  mov    %edx,-0x65(%ebp)
086426b8 +0x0f4:  mov    0x30(%eax),%edx
086426bb +0x0f7:  mov    %edx,-0x61(%ebp)
086426be +0x0fa:  mov    0x34(%eax),%edx
086426c1 +0x0fd:  mov    %edx,-0x5d(%ebp)
086426c4 +0x100:  mov    0x38(%eax),%edx
086426c7 +0x103:  mov    %edx,-0x59(%ebp)
086426ca +0x106:  movzbl 0x3c(%eax),%eax
086426ce +0x10a:  mov    %al,-0x55(%ebp)
086426d1 +0x10d:  cmpl   $0x0,0x14(%ebp)
086426d5 +0x111:  je     086426e4 <+0x120>
086426d7 +0x113:  mov    -0x8f(%ebp),%edx
086426dd +0x119:  mov    0x14(%ebp),%eax
086426e0 +0x11c:  cmp    %eax,%edx
086426e2 +0x11e:  je     086426ee <+0x12a>
086426e4 +0x120:  mov    $0x2,%eax
086426e9 +0x125:  jmp    08642b9e <+0x5da>
086426ee +0x12a:  mov    -0x8f(%ebp),%eax
086426f4 +0x130:  mov    %eax,%ebx
086426f6 +0x132:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086426fb +0x137:  mov    %ebx,0x4(%esp)
086426ff +0x13b:  mov    %eax,(%esp)
08642702 +0x13e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08642707 +0x143:  mov    %eax,-0x24(%ebp)
0864270a +0x146:  cmpl   $0x0,-0x24(%ebp)
0864270e +0x14a:  jne    0864271a <+0x156>
08642710 +0x14c:  mov    $0x2,%eax
08642715 +0x151:  jmp    08642b9e <+0x5da>
0864271a +0x156:  cmpl   $0x1,-0x28(%ebp)
0864271e +0x15a:  jne    08642927 <+0x363>
08642724 +0x160:  mov    0x10(%ebp),%eax
08642727 +0x163:  mov    %eax,0x4(%esp)
0864272b +0x167:  mov    0xc(%ebp),%eax
0864272e +0x16a:  mov    %eax,(%esp)
08642731 +0x16d:  call   08641c52 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_checkMovetoInven(ENUM_TITLE_BOOK_CATEGORY, int)
08642736 +0x172:  xor    $0x1,%eax
08642739 +0x175:  test   %al,%al
0864273b +0x177:  je     08642747 <+0x183>
0864273d +0x179:  mov    $0x5,%eax
08642742 +0x17e:  jmp    08642b9e <+0x5da>
08642747 +0x183:  mov    -0x91(%ebp),%eax
0864274d +0x189:  mov    %eax,0x4(%esp)
08642751 +0x18d:  mov    -0x8d(%ebp),%eax
08642757 +0x193:  mov    %eax,0x8(%esp)
0864275b +0x197:  mov    -0x89(%ebp),%eax
08642761 +0x19d:  mov    %eax,0xc(%esp)
08642765 +0x1a1:  mov    -0x85(%ebp),%eax
0864276b +0x1a7:  mov    %eax,0x10(%esp)
0864276f +0x1ab:  mov    -0x81(%ebp),%eax
08642775 +0x1b1:  mov    %eax,0x14(%esp)
08642779 +0x1b5:  mov    -0x7d(%ebp),%eax
0864277c +0x1b8:  mov    %eax,0x18(%esp)
08642780 +0x1bc:  mov    -0x79(%ebp),%eax
08642783 +0x1bf:  mov    %eax,0x1c(%esp)
08642787 +0x1c3:  mov    -0x75(%ebp),%eax
0864278a +0x1c6:  mov    %eax,0x20(%esp)
0864278e +0x1ca:  mov    -0x71(%ebp),%eax
08642791 +0x1cd:  mov    %eax,0x24(%esp)
08642795 +0x1d1:  mov    -0x6d(%ebp),%eax
08642798 +0x1d4:  mov    %eax,0x28(%esp)
0864279c +0x1d8:  mov    -0x69(%ebp),%eax
0864279f +0x1db:  mov    %eax,0x2c(%esp)
086427a3 +0x1df:  mov    -0x65(%ebp),%eax
086427a6 +0x1e2:  mov    %eax,0x30(%esp)
086427aa +0x1e6:  mov    -0x61(%ebp),%eax
086427ad +0x1e9:  mov    %eax,0x34(%esp)
086427b1 +0x1ed:  mov    -0x5d(%ebp),%eax
086427b4 +0x1f0:  mov    %eax,0x38(%esp)
086427b8 +0x1f4:  mov    -0x59(%ebp),%eax
086427bb +0x1f7:  mov    %eax,0x3c(%esp)
086427bf +0x1fb:  movzbl -0x55(%ebp),%eax
086427c3 +0x1ff:  mov    %al,0x40(%esp)
086427c7 +0x203:  mov    -0x2c(%ebp),%eax
086427ca +0x206:  mov    %eax,(%esp)
086427cd +0x209:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
086427d2 +0x20e:  shr    $0x1f,%eax
086427d5 +0x211:  test   %al,%al
086427d7 +0x213:  je     086427e3 <+0x21f>
086427d9 +0x215:  mov    $0xb,%eax
086427de +0x21a:  jmp    08642b9e <+0x5da>
086427e3 +0x21f:  mov    0x10(%ebp),%eax
086427e6 +0x222:  mov    %eax,0x8(%esp)
086427ea +0x226:  mov    0xc(%ebp),%eax
086427ed +0x229:  mov    %eax,0x4(%esp)
086427f1 +0x22d:  mov    -0x34(%ebp),%eax
086427f4 +0x230:  mov    %eax,(%esp)
086427f7 +0x233:  call   08641d50 <_ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int)
086427fc +0x238:  movl   $0x0,0x4c(%esp)
08642804 +0x240:  movl   $0x1,0x48(%esp)
0864280c +0x248:  movl   $0x7,0x44(%esp)
08642814 +0x250:  mov    -0x91(%ebp),%eax
0864281a +0x256:  mov    %eax,0x4(%esp)
0864281e +0x25a:  mov    -0x8d(%ebp),%eax
08642824 +0x260:  mov    %eax,0x8(%esp)
08642828 +0x264:  mov    -0x89(%ebp),%eax
0864282e +0x26a:  mov    %eax,0xc(%esp)
08642832 +0x26e:  mov    -0x85(%ebp),%eax
08642838 +0x274:  mov    %eax,0x10(%esp)
0864283c +0x278:  mov    -0x81(%ebp),%eax
08642842 +0x27e:  mov    %eax,0x14(%esp)
08642846 +0x282:  mov    -0x7d(%ebp),%eax
08642849 +0x285:  mov    %eax,0x18(%esp)
0864284d +0x289:  mov    -0x79(%ebp),%eax
08642850 +0x28c:  mov    %eax,0x1c(%esp)
08642854 +0x290:  mov    -0x75(%ebp),%eax
08642857 +0x293:  mov    %eax,0x20(%esp)
0864285b +0x297:  mov    -0x71(%ebp),%eax
0864285e +0x29a:  mov    %eax,0x24(%esp)
08642862 +0x29e:  mov    -0x6d(%ebp),%eax
08642865 +0x2a1:  mov    %eax,0x28(%esp)
08642869 +0x2a5:  mov    -0x69(%ebp),%eax
0864286c +0x2a8:  mov    %eax,0x2c(%esp)
08642870 +0x2ac:  mov    -0x65(%ebp),%eax
08642873 +0x2af:  mov    %eax,0x30(%esp)
08642877 +0x2b3:  mov    -0x61(%ebp),%eax
0864287a +0x2b6:  mov    %eax,0x34(%esp)
0864287e +0x2ba:  mov    -0x5d(%ebp),%eax
08642881 +0x2bd:  mov    %eax,0x38(%esp)
08642885 +0x2c1:  mov    -0x59(%ebp),%eax
08642888 +0x2c4:  mov    %eax,0x3c(%esp)
0864288c +0x2c8:  movzbl -0x55(%ebp),%eax
08642890 +0x2cc:  mov    %al,0x40(%esp)
08642894 +0x2d0:  mov    -0x2c(%ebp),%eax
08642897 +0x2d3:  mov    %eax,(%esp)
0864289a +0x2d6:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0864289f +0x2db:  mov    %eax,-0x20(%ebp)
086428a2 +0x2de:  cmpl   $0x0,-0x20(%ebp)
086428a6 +0x2e2:  jns    0864291a <+0x356>
086428a8 +0x2e4:  mov    -0x8f(%ebp),%edi
086428ae +0x2ea:  mov    0x8(%ebp),%eax
086428b1 +0x2ed:  mov    %eax,(%esp)
086428b4 +0x2f0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086428b9 +0x2f5:  mov    %eax,%esi
086428bb +0x2f7:  mov    0x8(%ebp),%eax
086428be +0x2fa:  mov    %eax,(%esp)
086428c1 +0x2fd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086428c6 +0x302:  movl   $0x0,0x4(%esp)
086428ce +0x30a:  mov    %eax,(%esp)
086428d1 +0x30d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086428d6 +0x312:  mov    %eax,%ebx
086428d8 +0x314:  movl   $0x5,0xc(%esp)
086428e0 +0x31c:  movl   $0x2a5,0x8(%esp)
086428e8 +0x324:  movl   $&_ZZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERiE19__PRETTY_FUNCTION__,0x4(%esp)
086428f0 +0x32c:  lea    -0x54(%ebp),%eax
086428f3 +0x32f:  mov    %eax,(%esp)
086428f6 +0x332:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086428fb +0x337:  mov    %edi,0x10(%esp)
086428ff +0x33b:  mov    %esi,0xc(%esp)
08642903 +0x33f:  mov    %ebx,0x8(%esp)
08642907 +0x343:  movl   $"insertItemIntoInventory failed(title) %s %d %d",0x4(%esp)
0864290f +0x34b:  lea    -0x54(%ebp),%eax
08642912 +0x34e:  mov    %eax,(%esp)
08642915 +0x351:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864291a +0x356:  mov    0x1c(%ebp),%eax
0864291d +0x359:  mov    -0x20(%ebp),%edx
08642920 +0x35c:  mov    %edx,(%eax)
08642922 +0x35e:  jmp    08642b99 <+0x5d5>
08642927 +0x363:  cmpl   $0x0,-0x28(%ebp)
0864292b +0x367:  jne    08642b99 <+0x5d5>
08642931 +0x36d:  mov    0x1c(%ebp),%eax
08642934 +0x370:  mov    (%eax),%eax
08642936 +0x372:  cmp    $0xb,%eax
08642939 +0x375:  je     08642945 <+0x381>
0864293b +0x377:  mov    $0x7,%eax
08642940 +0x37c:  jmp    08642b9e <+0x5da>
08642945 +0x381:  mov    -0x91(%ebp),%eax
0864294b +0x387:  mov    %eax,0x4(%esp)
0864294f +0x38b:  mov    -0x8d(%ebp),%eax
08642955 +0x391:  mov    %eax,0x8(%esp)
08642959 +0x395:  mov    -0x89(%ebp),%eax
0864295f +0x39b:  mov    %eax,0xc(%esp)
08642963 +0x39f:  mov    -0x85(%ebp),%eax
08642969 +0x3a5:  mov    %eax,0x10(%esp)
0864296d +0x3a9:  mov    -0x81(%ebp),%eax
08642973 +0x3af:  mov    %eax,0x14(%esp)
08642977 +0x3b3:  mov    -0x7d(%ebp),%eax
0864297a +0x3b6:  mov    %eax,0x18(%esp)
0864297e +0x3ba:  mov    -0x79(%ebp),%eax
08642981 +0x3bd:  mov    %eax,0x1c(%esp)
08642985 +0x3c1:  mov    -0x75(%ebp),%eax
08642988 +0x3c4:  mov    %eax,0x20(%esp)
0864298c +0x3c8:  mov    -0x71(%ebp),%eax
0864298f +0x3cb:  mov    %eax,0x24(%esp)
08642993 +0x3cf:  mov    -0x6d(%ebp),%eax
08642996 +0x3d2:  mov    %eax,0x28(%esp)
0864299a +0x3d6:  mov    -0x69(%ebp),%eax
0864299d +0x3d9:  mov    %eax,0x2c(%esp)
086429a1 +0x3dd:  mov    -0x65(%ebp),%eax
086429a4 +0x3e0:  mov    %eax,0x30(%esp)
086429a8 +0x3e4:  mov    -0x61(%ebp),%eax
086429ab +0x3e7:  mov    %eax,0x34(%esp)
086429af +0x3eb:  mov    -0x5d(%ebp),%eax
086429b2 +0x3ee:  mov    %eax,0x38(%esp)
086429b6 +0x3f2:  mov    -0x59(%ebp),%eax
086429b9 +0x3f5:  mov    %eax,0x3c(%esp)
086429bd +0x3f9:  movzbl -0x55(%ebp),%eax
086429c1 +0x3fd:  mov    %al,0x40(%esp)
086429c5 +0x401:  mov    -0x2c(%ebp),%eax
086429c8 +0x404:  mov    %eax,(%esp)
086429cb +0x407:  call   08501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>  ; CInventory::tryInsertItemIntoEquipment(Inven_Item) const
086429d0 +0x40c:  shr    $0x1f,%eax
086429d3 +0x40f:  test   %al,%al
086429d5 +0x411:  je     086429e1 <+0x41d>
086429d7 +0x413:  mov    $0x7,%eax
086429dc +0x418:  jmp    08642b9e <+0x5da>
086429e1 +0x41d:  mov    0x1c(%ebp),%eax
086429e4 +0x420:  mov    (%eax),%eax
086429e6 +0x422:  mov    %eax,0x8(%esp)
086429ea +0x426:  mov    -0x24(%ebp),%eax
086429ed +0x429:  mov    %eax,0x4(%esp)
086429f1 +0x42d:  mov    0x8(%ebp),%eax
086429f4 +0x430:  mov    %eax,(%esp)
086429f7 +0x433:  call   085003be <_Z11IsEquipableP5CUserPK5CItemi>  ; IsEquipable(CUser*, CItem const*, int)
086429fc +0x438:  test   %eax,%eax
086429fe +0x43a:  setne  %al
08642a01 +0x43d:  test   %al,%al
08642a03 +0x43f:  je     08642a0f <+0x44b>
08642a05 +0x441:  mov    $0x6,%eax
08642a0a +0x446:  jmp    08642b9e <+0x5da>
08642a0f +0x44b:  lea    -0x91(%ebp),%eax
08642a15 +0x451:  add    $0x11,%eax
08642a18 +0x454:  mov    %eax,(%esp)
08642a1b +0x457:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08642a20 +0x45c:  test   %al,%al
08642a22 +0x45e:  je     08642a36 <+0x472>
08642a24 +0x460:  movzbl -0x91(%ebp),%eax
08642a2b +0x467:  test   %al,%al
08642a2d +0x469:  je     08642a36 <+0x472>
08642a2f +0x46b:  mov    $0x1,%eax
08642a34 +0x470:  jmp    08642a3b <+0x477>
08642a36 +0x472:  mov    $0x0,%eax
08642a3b +0x477:  test   %al,%al
08642a3d +0x479:  je     08642a49 <+0x485>
08642a3f +0x47b:  mov    $0x1,%eax
08642a44 +0x480:  jmp    08642b9e <+0x5da>
08642a49 +0x485:  movb   $0x0,-0x91(%ebp)
08642a50 +0x48c:  mov    0x10(%ebp),%eax
08642a53 +0x48f:  mov    %eax,0x8(%esp)
08642a57 +0x493:  mov    0xc(%ebp),%eax
08642a5a +0x496:  mov    %eax,0x4(%esp)
08642a5e +0x49a:  mov    -0x34(%ebp),%eax
08642a61 +0x49d:  mov    %eax,(%esp)
08642a64 +0x4a0:  call   08641d50 <_ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int)
08642a69 +0x4a5:  movl   $0x0,0x4c(%esp)
08642a71 +0x4ad:  movl   $0x1,0x48(%esp)
08642a79 +0x4b5:  movl   $0x7,0x44(%esp)
08642a81 +0x4bd:  mov    -0x91(%ebp),%eax
08642a87 +0x4c3:  mov    %eax,0x4(%esp)
08642a8b +0x4c7:  mov    -0x8d(%ebp),%eax
08642a91 +0x4cd:  mov    %eax,0x8(%esp)
08642a95 +0x4d1:  mov    -0x89(%ebp),%eax
08642a9b +0x4d7:  mov    %eax,0xc(%esp)
08642a9f +0x4db:  mov    -0x85(%ebp),%eax
08642aa5 +0x4e1:  mov    %eax,0x10(%esp)
08642aa9 +0x4e5:  mov    -0x81(%ebp),%eax
08642aaf +0x4eb:  mov    %eax,0x14(%esp)
08642ab3 +0x4ef:  mov    -0x7d(%ebp),%eax
08642ab6 +0x4f2:  mov    %eax,0x18(%esp)
08642aba +0x4f6:  mov    -0x79(%ebp),%eax
08642abd +0x4f9:  mov    %eax,0x1c(%esp)
08642ac1 +0x4fd:  mov    -0x75(%ebp),%eax
08642ac4 +0x500:  mov    %eax,0x20(%esp)
08642ac8 +0x504:  mov    -0x71(%ebp),%eax
08642acb +0x507:  mov    %eax,0x24(%esp)
08642acf +0x50b:  mov    -0x6d(%ebp),%eax
08642ad2 +0x50e:  mov    %eax,0x28(%esp)
08642ad6 +0x512:  mov    -0x69(%ebp),%eax
08642ad9 +0x515:  mov    %eax,0x2c(%esp)
08642add +0x519:  mov    -0x65(%ebp),%eax
08642ae0 +0x51c:  mov    %eax,0x30(%esp)
08642ae4 +0x520:  mov    -0x61(%ebp),%eax
08642ae7 +0x523:  mov    %eax,0x34(%esp)
08642aeb +0x527:  mov    -0x5d(%ebp),%eax
08642aee +0x52a:  mov    %eax,0x38(%esp)
08642af2 +0x52e:  mov    -0x59(%ebp),%eax
08642af5 +0x531:  mov    %eax,0x3c(%esp)
08642af9 +0x535:  movzbl -0x55(%ebp),%eax
08642afd +0x539:  mov    %al,0x40(%esp)
08642b01 +0x53d:  mov    -0x2c(%ebp),%eax
08642b04 +0x540:  mov    %eax,(%esp)
08642b07 +0x543:  call   08502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
08642b0c +0x548:  mov    %eax,-0x1c(%ebp)
08642b0f +0x54b:  cmpl   $0x0,-0x1c(%ebp)
08642b13 +0x54f:  jns    08642b87 <+0x5c3>
08642b15 +0x551:  mov    -0x8f(%ebp),%edi
08642b1b +0x557:  mov    0x8(%ebp),%eax
08642b1e +0x55a:  mov    %eax,(%esp)
08642b21 +0x55d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08642b26 +0x562:  mov    %eax,%esi
08642b28 +0x564:  mov    0x8(%ebp),%eax
08642b2b +0x567:  mov    %eax,(%esp)
08642b2e +0x56a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08642b33 +0x56f:  movl   $0x0,0x4(%esp)
08642b3b +0x577:  mov    %eax,(%esp)
08642b3e +0x57a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08642b43 +0x57f:  mov    %eax,%ebx
08642b45 +0x581:  movl   $0x5,0xc(%esp)
08642b4d +0x589:  movl   $0x2c7,0x8(%esp)
08642b55 +0x591:  movl   $&_ZZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERiE19__PRETTY_FUNCTION__,0x4(%esp)
08642b5d +0x599:  lea    -0x44(%ebp),%eax
08642b60 +0x59c:  mov    %eax,(%esp)
08642b63 +0x59f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08642b68 +0x5a4:  mov    %edi,0x10(%esp)
08642b6c +0x5a8:  mov    %esi,0xc(%esp)
08642b70 +0x5ac:  mov    %ebx,0x8(%esp)
08642b74 +0x5b0:  movl   $"insertItemIntoEquipment failed(title) %s %d %d",0x4(%esp)
08642b7c +0x5b8:  lea    -0x44(%ebp),%eax
08642b7f +0x5bb:  mov    %eax,(%esp)
08642b82 +0x5be:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08642b87 +0x5c3:  mov    -0x1c(%ebp),%eax
08642b8a +0x5c6:  mov    %eax,0x4(%esp)
08642b8e +0x5ca:  mov    0x8(%ebp),%eax
08642b91 +0x5cd:  mov    %eax,(%esp)
08642b94 +0x5d0:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08642b99 +0x5d5:  mov    $0x0,%eax
08642b9e +0x5da:  add    $0xdc,%esp
08642ba4 +0x5e0:  pop    %ebx
08642ba5 +0x5e1:  pop    %esi
08642ba6 +0x5e2:  pop    %edi
08642ba7 +0x5e3:  pop    %ebp
08642ba8 +0x5e4:  ret
08642ba9 +0x5e5:  nop
```

## 反编译 C

```c
// CTitleBook::getTitle @ 0x86425c4

/* CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&) */

int CTitleBook::getTitle
              (CUser *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
              int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint *puVar6;
  CDataManager *this;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char local_95;
  undefined2 uStack_93;
  undefined2 local_91;
  undefined4 local_85;
  uint local_81;
  uint local_7d;
  uint local_79;
  uint local_75;
  uint local_71;
  uint local_6d;
  uint local_69;
  uint local_65;
  uint local_61;
  uint local_5d;
  undefined1 local_59;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  CTitleBook *local_38;
  int local_34;
  CInventory *local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  int local_20;
  
  local_38 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_38 == (CTitleBook *)0x0) {
    local_34 = 3;
  }
  else {
    if (param_5 == 0x12) {
      param_5 = 3;
    }
    local_34 = checkError(param_1,param_2,param_3);
    if (local_34 == 0) {
      local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_2c = GetInvenTypeFromItemSpace(param_5);
      puVar6 = (uint *)_getTitle(local_38,param_2,param_3);
      uVar9 = *puVar6;
      local_95 = (char)uVar9;
      uStack_93 = (undefined2)(uVar9 >> 0x10);
      uVar1 = puVar6[1];
      local_91 = (undefined2)uVar1;
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      local_85 = puVar6[4];
      local_81 = puVar6[5];
      local_7d = puVar6[6];
      local_79 = puVar6[7];
      local_75 = puVar6[8];
      local_71 = puVar6[9];
      local_6d = puVar6[10];
      local_69 = puVar6[0xb];
      local_65 = puVar6[0xc];
      local_61 = puVar6[0xd];
      local_5d = puVar6[0xe];
      local_59 = (undefined1)puVar6[0xf];
      if ((param_4 == 0) || (CONCAT22(local_91,uStack_93) != param_4)) {
        local_34 = 2;
      }
      else {
        this = (CDataManager *)G_CDataManager();
        local_28 = (CItem *)CDataManager::find_item(this,CONCAT22(local_91,uStack_93));
        if (local_28 == (CItem *)0x0) {
          local_34 = 2;
        }
        else {
          if (local_2c == 1) {
            cVar5 = _checkMovetoInven(param_2,param_3);
            if (cVar5 != '\x01') {
              return 5;
            }
            iVar7 = CInventory::tryInsertItemIntoInventory
                              (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,local_79,
                               local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,
                               local_59);
            if (iVar7 < 0) {
              return 0xb;
            }
            _deleteTitle(local_38,param_2,param_3);
            local_24 = CInventory::insertItemIntoInventory
                                 (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,
                                  local_79,local_75,local_71,local_6d,local_69,local_65,local_61,
                                  local_5d,local_59,7,1,0);
            if (local_24 < 0) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              uVar10 = NumberToString(uVar9,0);
              cMyTrace::cMyTrace(local_58,
                                 "static int CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)"
                                 ,0x2a5,5);
              cMyTrace::operator()
                        (local_58,"insertItemIntoInventory failed(title) %s %d %d",uVar10,uVar8,
                         CONCAT22(local_91,uStack_93));
            }
            *param_6 = local_24;
          }
          else if (local_2c == 0) {
            if (*param_6 != 0xb) {
              return 7;
            }
            iVar7 = CInventory::tryInsertItemIntoEquipment
                              (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,local_79,
                               local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,
                               local_59);
            if (iVar7 < 0) {
              return 7;
            }
            iVar7 = IsEquipable(param_1,local_28,*param_6);
            if (iVar7 != 0) {
              return 6;
            }
            cVar5 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)((int)&local_85 + 1));
            if ((cVar5 == '\0') || (local_95 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              return 1;
            }
            _deleteTitle(local_38,param_2,param_3);
            local_20 = CInventory::insertItemIntoEquipment
                                 (local_30,uVar9 & 0xffffff00,uVar1,uVar2,uVar3,local_85,local_81,
                                  local_7d,local_79,local_75,local_71,local_6d,local_69,local_65,
                                  local_61,local_5d,local_59,7,1,0);
            if (local_20 < 0) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              uVar10 = NumberToString(uVar9,0);
              cMyTrace::cMyTrace(local_48,
                                 "static int CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)"
                                 ,0x2c7,5);
              cMyTrace::operator()
                        (local_48,"insertItemIntoEquipment failed(title) %s %d %d",uVar10,uVar8,
                         CONCAT22(local_91,uStack_93));
            }
            CUser::send_equip(param_1,local_20);
          }
          local_34 = 0;
        }
      }
    }
  }
  return local_34;
}
```
