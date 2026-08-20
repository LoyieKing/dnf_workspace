# CalBlankSlot

`_ZNK10CInventory12CalBlankSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE`

`CInventory::CalBlankSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08508536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08508536  _ZNK10CInventory12CalBlankSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE
#           CInventory::CalBlankSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
# range [0x08508536, 0x08508919]
08508536 +0x000:  push   %ebp
08508537 +0x001:  mov    %esp,%ebp
08508539 +0x003:  sub    $0x68,%esp
0850853c +0x006:  mov    0x10(%ebp),%eax
0850853f +0x009:  mov    %eax,(%esp)
08508542 +0x00c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08508547 +0x011:  test   %eax,%eax
08508549 +0x013:  sete   %al
0850854c +0x016:  test   %al,%al
0850854e +0x018:  jne    08508916 <+0x3e0>
08508554 +0x01e:  lea    -0x3c(%ebp),%eax
08508557 +0x021:  mov    0x10(%ebp),%edx
0850855a +0x024:  mov    %edx,0x4(%esp)
0850855e +0x028:  mov    %eax,(%esp)
08508561 +0x02b:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08508566 +0x030:  sub    $0x4,%esp
08508569 +0x033:  lea    -0x44(%ebp),%eax
0850856c +0x036:  mov    %eax,(%esp)
0850856f +0x039:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08508574 +0x03e:  jmp    085088e5 <+0x3af>
08508579 +0x043:  movb   $0x0,-0x1d(%ebp)
0850857d +0x047:  lea    -0x3c(%ebp),%eax
08508580 +0x04a:  mov    %eax,(%esp)
08508583 +0x04d:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08508588 +0x052:  mov    0x4(%eax),%edx
0850858b +0x055:  mov    (%eax),%eax
0850858d +0x057:  mov    %eax,-0x34(%ebp)
08508590 +0x05a:  mov    %edx,-0x30(%ebp)
08508593 +0x05d:  lea    -0x34(%ebp),%eax
08508596 +0x060:  mov    %eax,0x4(%esp)
0850859a +0x064:  lea    -0x44(%ebp),%eax
0850859d +0x067:  mov    %eax,(%esp)
085085a0 +0x06a:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
085085a5 +0x06f:  mov    -0x44(%ebp),%eax
085085a8 +0x072:  mov    %eax,-0x1c(%ebp)
085085ab +0x075:  mov    -0x40(%ebp),%eax
085085ae +0x078:  mov    %eax,-0x10(%ebp)
085085b1 +0x07b:  cmpl   $0x0,-0x1c(%ebp)
085085b5 +0x07f:  je     085085bd <+0x87>
085085b7 +0x081:  cmpl   $0x2,-0x1c(%ebp)
085085bb +0x085:  jne    085085df <+0xa9>
085085bd +0x087:  lea    -0x2c(%ebp),%eax
085085c0 +0x08a:  movl   $0x0,0x8(%esp)
085085c8 +0x092:  lea    -0x3c(%ebp),%edx
085085cb +0x095:  mov    %edx,0x4(%esp)
085085cf +0x099:  mov    %eax,(%esp)
085085d2 +0x09c:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085085d7 +0x0a1:  sub    $0x4,%esp
085085da +0x0a4:  jmp    085088e5 <+0x3af>
085085df +0x0a9:  mov    -0x1c(%ebp),%eax
085085e2 +0x0ac:  mov    %eax,0x4(%esp)
085085e6 +0x0b0:  mov    0x8(%ebp),%eax
085085e9 +0x0b3:  mov    %eax,(%esp)
085085ec +0x0b6:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
085085f1 +0x0bb:  mov    %eax,-0x14(%ebp)
085085f4 +0x0be:  cmpl   $0x0,-0x14(%ebp)
085085f8 +0x0c2:  jne    0850861c <+0xe6>
085085fa +0x0c4:  lea    -0x28(%ebp),%eax
085085fd +0x0c7:  movl   $0x0,0x8(%esp)
08508605 +0x0cf:  lea    -0x3c(%ebp),%edx
08508608 +0x0d2:  mov    %edx,0x4(%esp)
0850860c +0x0d6:  mov    %eax,(%esp)
0850860f +0x0d9:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08508614 +0x0de:  sub    $0x4,%esp
08508617 +0x0e1:  jmp    085088e5 <+0x3af>
0850861c +0x0e6:  lea    -0x4c(%ebp),%eax
0850861f +0x0e9:  mov    %eax,0xc(%esp)
08508623 +0x0ed:  lea    -0x48(%ebp),%eax
08508626 +0x0f0:  mov    %eax,0x8(%esp)
0850862a +0x0f4:  mov    -0x14(%ebp),%eax
0850862d +0x0f7:  mov    %eax,0x4(%esp)
08508631 +0x0fb:  mov    0x8(%ebp),%eax
08508634 +0x0fe:  mov    %eax,(%esp)
08508637 +0x101:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850863c +0x106:  cmpl   $0x1,-0x14(%ebp)
08508640 +0x10a:  jne    08508703 <+0x1cd>
08508646 +0x110:  movl   $0x0,-0xc(%ebp)
0850864d +0x117:  mov    -0x48(%ebp),%eax
08508650 +0x11a:  mov    %eax,-0x18(%ebp)
08508653 +0x11d:  jmp    08508691 <+0x15b>
08508655 +0x11f:  mov    0x8(%ebp),%eax
08508658 +0x122:  mov    0x650(%eax),%edx
0850865e +0x128:  mov    -0x18(%ebp),%eax
08508661 +0x12b:  imul   $0x3d,%eax,%eax
08508664 +0x12e:  lea    (%edx,%eax,1),%eax
08508667 +0x131:  mov    0x2(%eax),%edx
0850866a +0x134:  mov    -0x1c(%ebp),%eax
0850866d +0x137:  cmp    %eax,%edx
0850866f +0x139:  jne    0850868d <+0x157>
08508671 +0x13b:  addl   $0x1,-0xc(%ebp)
08508675 +0x13f:  mov    -0x14(%ebp),%eax
08508678 +0x142:  shl    $0x2,%eax
0850867b +0x145:  add    0xc(%ebp),%eax
0850867e +0x148:  mov    (%eax),%edx
08508680 +0x14a:  add    $0x1,%edx
08508683 +0x14d:  mov    %edx,(%eax)
08508685 +0x14f:  mov    -0xc(%ebp),%eax
08508688 +0x152:  cmp    -0x10(%ebp),%eax
0850868b +0x155:  je     085086a0 <+0x16a>
0850868d +0x157:  addl   $0x1,-0x18(%ebp)
08508691 +0x15b:  mov    -0x4c(%ebp),%eax
08508694 +0x15e:  cmp    %eax,-0x18(%ebp)
08508697 +0x161:  setle  %al
0850869a +0x164:  test   %al,%al
0850869c +0x166:  jne    08508655 <+0x11f>
0850869e +0x168:  jmp    085086a1 <+0x16b>
085086a0 +0x16a:  nop
085086a1 +0x16b:  mov    -0xc(%ebp),%eax
085086a4 +0x16e:  cmp    -0x10(%ebp),%eax
085086a7 +0x171:  jae    085088c4 <+0x38e>
085086ad +0x177:  movl   $0x3,-0x18(%ebp)
085086b4 +0x17e:  jmp    085086f3 <+0x1bd>
085086b6 +0x180:  mov    0x8(%ebp),%eax
085086b9 +0x183:  mov    0x650(%eax),%edx
085086bf +0x189:  mov    -0x18(%ebp),%eax
085086c2 +0x18c:  imul   $0x3d,%eax,%eax
085086c5 +0x18f:  lea    (%edx,%eax,1),%eax
085086c8 +0x192:  mov    0x2(%eax),%edx
085086cb +0x195:  mov    -0x1c(%ebp),%eax
085086ce +0x198:  cmp    %eax,%edx
085086d0 +0x19a:  jne    085086ef <+0x1b9>
085086d2 +0x19c:  addl   $0x1,-0xc(%ebp)
085086d6 +0x1a0:  mov    0xc(%ebp),%eax
085086d9 +0x1a3:  mov    (%eax),%eax
085086db +0x1a5:  lea    0x1(%eax),%edx
085086de +0x1a8:  mov    0xc(%ebp),%eax
085086e1 +0x1ab:  mov    %edx,(%eax)
085086e3 +0x1ad:  mov    -0xc(%ebp),%eax
085086e6 +0x1b0:  cmp    -0x10(%ebp),%eax
085086e9 +0x1b3:  je     085088c7 <+0x391>
085086ef +0x1b9:  addl   $0x1,-0x18(%ebp)
085086f3 +0x1bd:  cmpl   $0x8,-0x18(%ebp)
085086f7 +0x1c1:  setle  %al
085086fa +0x1c4:  test   %al,%al
085086fc +0x1c6:  jne    085086b6 <+0x180>
085086fe +0x1c8:  jmp    085088c8 <+0x392>
08508703 +0x1cd:  mov    -0x14(%ebp),%eax
08508706 +0x1d0:  mov    %eax,(%esp)
08508709 +0x1d3:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
0850870e +0x1d8:  test   %al,%al
08508710 +0x1da:  je     085087f3 <+0x2bd>
08508716 +0x1e0:  mov    -0x14(%ebp),%eax
08508719 +0x1e3:  mov    %eax,(%esp)
0850871c +0x1e6:  call   0850d17c <_GLOBAL__I_g_emptySlot+0xb1>  ; global constructors keyed to g_emptySlot+0xb1
08508721 +0x1eb:  test   %al,%al
08508723 +0x1ed:  je     08508788 <+0x252>
08508725 +0x1ef:  movl   $0x0,-0xc(%ebp)
0850872c +0x1f6:  mov    -0x48(%ebp),%eax
0850872f +0x1f9:  mov    %eax,-0x18(%ebp)
08508732 +0x1fc:  jmp    08508776 <+0x240>
08508734 +0x1fe:  mov    0x8(%ebp),%eax
08508737 +0x201:  mov    0x650(%eax),%edx
0850873d +0x207:  mov    -0x18(%ebp),%eax
08508740 +0x20a:  imul   $0x3d,%eax,%eax
08508743 +0x20d:  lea    (%edx,%eax,1),%eax
08508746 +0x210:  mov    0x2(%eax),%edx
08508749 +0x213:  mov    -0x1c(%ebp),%eax
0850874c +0x216:  cmp    %eax,%edx
0850874e +0x218:  jne    08508772 <+0x23c>
08508750 +0x21a:  addl   $0x1,-0xc(%ebp)
08508754 +0x21e:  mov    -0x14(%ebp),%eax
08508757 +0x221:  shl    $0x2,%eax
0850875a +0x224:  add    0xc(%ebp),%eax
0850875d +0x227:  mov    (%eax),%edx
0850875f +0x229:  add    $0x1,%edx
08508762 +0x22c:  mov    %edx,(%eax)
08508764 +0x22e:  mov    -0xc(%ebp),%eax
08508767 +0x231:  cmp    -0x10(%ebp),%eax
0850876a +0x234:  jne    08508772 <+0x23c>
0850876c +0x236:  nop
0850876d +0x237:  jmp    085088c8 <+0x392>
08508772 +0x23c:  addl   $0x1,-0x18(%ebp)
08508776 +0x240:  mov    -0x4c(%ebp),%eax
08508779 +0x243:  cmp    %eax,-0x18(%ebp)
0850877c +0x246:  setle  %al
0850877f +0x249:  test   %al,%al
08508781 +0x24b:  jne    08508734 <+0x1fe>
08508783 +0x24d:  jmp    085088c8 <+0x392>
08508788 +0x252:  mov    -0x48(%ebp),%eax
0850878b +0x255:  mov    %eax,-0x18(%ebp)
0850878e +0x258:  jmp    085087e1 <+0x2ab>
08508790 +0x25a:  mov    0x8(%ebp),%eax
08508793 +0x25d:  mov    0x650(%eax),%edx
08508799 +0x263:  mov    -0x18(%ebp),%eax
0850879c +0x266:  imul   $0x3d,%eax,%eax
0850879f +0x269:  lea    (%edx,%eax,1),%eax
085087a2 +0x26c:  mov    0x2(%eax),%edx
085087a5 +0x26f:  mov    -0x1c(%ebp),%eax
085087a8 +0x272:  cmp    %eax,%edx
085087aa +0x274:  jne    085087dc <+0x2a6>
085087ac +0x276:  mov    0x8(%ebp),%eax
085087af +0x279:  mov    0x650(%eax),%edx
085087b5 +0x27f:  mov    -0x18(%ebp),%eax
085087b8 +0x282:  imul   $0x3d,%eax,%eax
085087bb +0x285:  lea    (%edx,%eax,1),%eax
085087be +0x288:  mov    0x7(%eax),%eax
085087c1 +0x28b:  cmp    -0x10(%ebp),%eax
085087c4 +0x28e:  jne    085087dd <+0x2a7>
085087c6 +0x290:  mov    -0x14(%ebp),%eax
085087c9 +0x293:  shl    $0x2,%eax
085087cc +0x296:  add    0xc(%ebp),%eax
085087cf +0x299:  mov    (%eax),%edx
085087d1 +0x29b:  add    $0x1,%edx
085087d4 +0x29e:  mov    %edx,(%eax)
085087d6 +0x2a0:  nop
085087d7 +0x2a1:  jmp    085088c8 <+0x392>
085087dc +0x2a6:  nop
085087dd +0x2a7:  addl   $0x1,-0x18(%ebp)
085087e1 +0x2ab:  mov    -0x4c(%ebp),%eax
085087e4 +0x2ae:  cmp    %eax,-0x18(%ebp)
085087e7 +0x2b1:  setle  %al
085087ea +0x2b4:  test   %al,%al
085087ec +0x2b6:  jne    08508790 <+0x25a>
085087ee +0x2b8:  jmp    085088c8 <+0x392>
085087f3 +0x2bd:  mov    -0x48(%ebp),%eax
085087f6 +0x2c0:  mov    %eax,-0x18(%ebp)
085087f9 +0x2c3:  jmp    0850884c <+0x316>
085087fb +0x2c5:  mov    0x8(%ebp),%eax
085087fe +0x2c8:  mov    0x650(%eax),%edx
08508804 +0x2ce:  mov    -0x18(%ebp),%eax
08508807 +0x2d1:  imul   $0x3d,%eax,%eax
0850880a +0x2d4:  lea    (%edx,%eax,1),%eax
0850880d +0x2d7:  mov    0x2(%eax),%edx
08508810 +0x2da:  mov    -0x1c(%ebp),%eax
08508813 +0x2dd:  cmp    %eax,%edx
08508815 +0x2df:  jne    08508847 <+0x311>
08508817 +0x2e1:  mov    0x8(%ebp),%eax
0850881a +0x2e4:  mov    0x650(%eax),%edx
08508820 +0x2ea:  mov    -0x18(%ebp),%eax
08508823 +0x2ed:  imul   $0x3d,%eax,%eax
08508826 +0x2f0:  lea    (%edx,%eax,1),%eax
08508829 +0x2f3:  mov    0x7(%eax),%eax
0850882c +0x2f6:  cmp    -0x10(%ebp),%eax
0850882f +0x2f9:  jne    08508848 <+0x312>
08508831 +0x2fb:  movb   $0x1,-0x1d(%ebp)
08508835 +0x2ff:  mov    -0x14(%ebp),%eax
08508838 +0x302:  shl    $0x2,%eax
0850883b +0x305:  add    0xc(%ebp),%eax
0850883e +0x308:  mov    (%eax),%edx
08508840 +0x30a:  add    $0x1,%edx
08508843 +0x30d:  mov    %edx,(%eax)
08508845 +0x30f:  jmp    08508859 <+0x323>
08508847 +0x311:  nop
08508848 +0x312:  addl   $0x1,-0x18(%ebp)
0850884c +0x316:  mov    -0x4c(%ebp),%eax
0850884f +0x319:  cmp    %eax,-0x18(%ebp)
08508852 +0x31c:  setle  %al
08508855 +0x31f:  test   %al,%al
08508857 +0x321:  jne    085087fb <+0x2c5>
08508859 +0x323:  movzbl -0x1d(%ebp),%eax
0850885d +0x327:  xor    $0x1,%eax
08508860 +0x32a:  test   %al,%al
08508862 +0x32c:  je     085088c8 <+0x392>
08508864 +0x32e:  movl   $0x3,-0x18(%ebp)
0850886b +0x335:  jmp    085088b7 <+0x381>
0850886d +0x337:  mov    0x8(%ebp),%eax
08508870 +0x33a:  mov    0x650(%eax),%edx
08508876 +0x340:  mov    -0x18(%ebp),%eax
08508879 +0x343:  imul   $0x3d,%eax,%eax
0850887c +0x346:  lea    (%edx,%eax,1),%eax
0850887f +0x349:  mov    0x2(%eax),%edx
08508882 +0x34c:  mov    -0x1c(%ebp),%eax
08508885 +0x34f:  cmp    %eax,%edx
08508887 +0x351:  jne    085088b2 <+0x37c>
08508889 +0x353:  mov    0x8(%ebp),%eax
0850888c +0x356:  mov    0x650(%eax),%edx
08508892 +0x35c:  mov    -0x18(%ebp),%eax
08508895 +0x35f:  imul   $0x3d,%eax,%eax
08508898 +0x362:  lea    (%edx,%eax,1),%eax
0850889b +0x365:  mov    0x7(%eax),%eax
0850889e +0x368:  cmp    -0x10(%ebp),%eax
085088a1 +0x36b:  jne    085088b3 <+0x37d>
085088a3 +0x36d:  mov    0xc(%ebp),%eax
085088a6 +0x370:  mov    (%eax),%eax
085088a8 +0x372:  lea    0x1(%eax),%edx
085088ab +0x375:  mov    0xc(%ebp),%eax
085088ae +0x378:  mov    %edx,(%eax)
085088b0 +0x37a:  jmp    085088c8 <+0x392>
085088b2 +0x37c:  nop
085088b3 +0x37d:  addl   $0x1,-0x18(%ebp)
085088b7 +0x381:  cmpl   $0x8,-0x18(%ebp)
085088bb +0x385:  setle  %al
085088be +0x388:  test   %al,%al
085088c0 +0x38a:  jne    0850886d <+0x337>
085088c2 +0x38c:  jmp    085088c8 <+0x392>
085088c4 +0x38e:  nop
085088c5 +0x38f:  jmp    085088c8 <+0x392>
085088c7 +0x391:  nop
085088c8 +0x392:  lea    -0x24(%ebp),%eax
085088cb +0x395:  movl   $0x0,0x8(%esp)
085088d3 +0x39d:  lea    -0x3c(%ebp),%edx
085088d6 +0x3a0:  mov    %edx,0x4(%esp)
085088da +0x3a4:  mov    %eax,(%esp)
085088dd +0x3a7:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085088e2 +0x3ac:  sub    $0x4,%esp
085088e5 +0x3af:  lea    -0x38(%ebp),%eax
085088e8 +0x3b2:  mov    0x10(%ebp),%edx
085088eb +0x3b5:  mov    %edx,0x4(%esp)
085088ef +0x3b9:  mov    %eax,(%esp)
085088f2 +0x3bc:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
085088f7 +0x3c1:  sub    $0x4,%esp
085088fa +0x3c4:  lea    -0x38(%ebp),%eax
085088fd +0x3c7:  mov    %eax,0x4(%esp)
08508901 +0x3cb:  lea    -0x3c(%ebp),%eax
08508904 +0x3ce:  mov    %eax,(%esp)
08508907 +0x3d1:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0850890c +0x3d6:  test   %al,%al
0850890e +0x3d8:  jne    08508579 <+0x43>
08508914 +0x3de:  jmp    08508917 <+0x3e1>
08508916 +0x3e0:  nop
08508917 +0x3e1:  leave
08508918 +0x3e2:  ret
08508919 +0x3e3:  nop
```

## 反编译 C

```c
// CInventory::CalBlankSlot @ 0x8508536

/* CInventory::CalBlankSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) const */

void __thiscall CInventory::CalBlankSlot(CInventory *this,int *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_30 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [7];
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
  if (iVar3 != 0) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_48);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_40,local_3c);
      if (!bVar2) break;
      local_21 = '\0';
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_40);
      local_34 = puVar4[1];
      local_38 = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_48,(pair *)&local_38);
      local_20 = local_48;
      local_14 = local_44;
      if ((local_48 == 0) || (local_48 == 2)) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_30,(int)local_40);
      }
      else {
        local_18 = GetItemType(this,local_48);
        if (local_18 == 0) {
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_2c,(int)local_40);
        }
        else {
          StartEndPos(this,local_18,&local_4c,&local_50);
          if (local_18 == 1) {
            local_10 = 0;
            for (local_1c = local_4c; local_1c <= local_50; local_1c = local_1c + 1) {
              if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) {
                local_10 = local_10 + 1;
                param_1[1] = param_1[1] + 1;
                if (local_10 == local_14) break;
              }
            }
            if (local_10 < local_14) {
              for (local_1c = 3; local_1c < 9; local_1c = local_1c + 1) {
                if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) {
                  local_10 = local_10 + 1;
                  *param_1 = *param_1 + 1;
                  if (local_10 == local_14) break;
                }
              }
            }
          }
          else {
            cVar1 = IsCreatureItemType(local_18);
            if (cVar1 == '\0') {
              for (local_1c = local_4c; local_1c <= local_50; local_1c = local_1c + 1) {
                if ((*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) &&
                   (*(uint *)(*(int *)(this + 0x650) + local_1c * 0x3d + 7) == local_14)) {
                  local_21 = '\x01';
                  param_1[local_18] = param_1[local_18] + 1;
                  break;
                }
              }
              if (local_21 != '\x01') {
                for (local_1c = 3; local_1c < 9; local_1c = local_1c + 1) {
                  if ((*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) &&
                     (*(uint *)(*(int *)(this + 0x650) + local_1c * 0x3d + 7) == local_14)) {
                    *param_1 = *param_1 + 1;
                    break;
                  }
                }
              }
            }
            else {
              cVar1 = isEquipableItemType(local_18);
              if (cVar1 == '\0') {
                for (local_1c = local_4c; local_1c <= local_50; local_1c = local_1c + 1) {
                  if ((*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) &&
                     (*(uint *)(*(int *)(this + 0x650) + local_1c * 0x3d + 7) == local_14)) {
                    param_1[local_18] = param_1[local_18] + 1;
                    break;
                  }
                }
              }
              else {
                local_10 = 0;
                for (local_1c = local_4c; local_1c <= local_50; local_1c = local_1c + 1) {
                  if (*(int *)(*(int *)(this + 0x650) + local_1c * 0x3d + 2) == local_20) {
                    local_10 = local_10 + 1;
                    param_1[local_18] = param_1[local_18] + 1;
                    if (local_10 == local_14) break;
                  }
                }
              }
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_28,(int)local_40);
        }
      }
    }
  }
  return;
}
```
