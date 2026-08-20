# exchange_interspace

`_ZN5CUser19exchange_interspaceEiimiiimPi`

`CUser::exchange_interspace(int, int, unsigned long, int, int, int, unsigned long, int*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865f7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865f7b0  _ZN5CUser19exchange_interspaceEiimiiimPi
#           CUser::exchange_interspace(int, int, unsigned long, int, int, int, unsigned long, int*)
# range [0x0865f7b0, 0x086624f7]
0865f7b0 +0x0000:  push   %ebp
0865f7b1 +0x0001:  mov    %esp,%ebp
0865f7b3 +0x0003:  push   %edi
0865f7b4 +0x0004:  push   %esi
0865f7b5 +0x0005:  push   %ebx
0865f7b6 +0x0006:  sub    $0x45c,%esp
0865f7bc +0x000c:  lea    -0xf4(%ebp),%eax
0865f7c2 +0x0012:  mov    %eax,(%esp)
0865f7c5 +0x0015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865f7ca +0x001a:  lea    -0x131(%ebp),%eax
0865f7d0 +0x0020:  mov    %eax,(%esp)
0865f7d3 +0x0023:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0865f7d8 +0x0028:  movl   $0x0,-0x88(%ebp)
0865f7e2 +0x0032:  mov    0x1c(%ebp),%edx
0865f7e5 +0x0035:  mov    0xc(%ebp),%eax
0865f7e8 +0x0038:  mov    0x24(%ebp),%ecx
0865f7eb +0x003b:  mov    %ecx,0x18(%esp)
0865f7ef +0x003f:  mov    0x20(%ebp),%ecx
0865f7f2 +0x0042:  mov    %ecx,0x14(%esp)
0865f7f6 +0x0046:  mov    %edx,0x10(%esp)
0865f7fa +0x004a:  mov    0x14(%ebp),%edx
0865f7fd +0x004d:  mov    %edx,0xc(%esp)
0865f801 +0x0051:  mov    0x10(%ebp),%edx
0865f804 +0x0054:  mov    %edx,0x8(%esp)
0865f808 +0x0058:  mov    %eax,0x4(%esp)
0865f80c +0x005c:  mov    0x8(%ebp),%eax
0865f80f +0x005f:  mov    %eax,(%esp)
0865f812 +0x0062:  call   0865f1e1 <_Z17_checkItemMovablePK5CUser14ENUM_ITEMSPACEimS2_im>  ; _checkItemMovable(CUser const*, ENUM_ITEMSPACE, int, unsigned long, ENUM_ITEMSPACE, int, unsigned long)
0865f817 +0x0067:  xor    $0x1,%eax
0865f81a +0x006a:  test   %al,%al
0865f81c +0x006c:  je     0865f831 <+0x81>
0865f81e +0x006e:  mov    0x28(%ebp),%eax
0865f821 +0x0071:  movl   $0xffffffff,(%eax)
0865f827 +0x0077:  mov    $0x15,%ebx
0865f82c +0x007c:  jmp    086624dd <+0x2d2d>
0865f831 +0x0081:  cmpl   $0xc,0xc(%ebp)
0865f835 +0x0085:  ja     086624b1 <+0x2d01>
0865f83b +0x008b:  mov    0xc(%ebp),%eax
0865f83e +0x008e:  shl    $0x2,%eax
0865f841 +0x0091:  mov    &data#36179fdd(.rodata)(%eax),%eax
0865f847 +0x0097:  jmp    *%eax
0865f849 +0x0099:  cmpl   $0xc,0x1c(%ebp)
0865f84d +0x009d:  ja     08660327 <+0xb77>
0865f853 +0x00a3:  mov    0x1c(%ebp),%eax
0865f856 +0x00a6:  shl    $0x2,%eax
0865f859 +0x00a9:  mov    &data#7dca6398(.rodata)(%eax),%eax
0865f85f +0x00af:  jmp    *%eax
0865f861 +0x00b1:  movl   $0x0,-0x80(%ebp)
0865f868 +0x00b8:  mov    0x8(%ebp),%eax
0865f86b +0x00bb:  mov    %eax,(%esp)
0865f86e +0x00be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865f873 +0x00c3:  mov    0x20(%ebp),%edx
0865f876 +0x00c6:  mov    %edx,0x10(%esp)
0865f87a +0x00ca:  movl   $0x1,0xc(%esp)
0865f882 +0x00d2:  mov    0x10(%ebp),%edx
0865f885 +0x00d5:  mov    %edx,0x8(%esp)
0865f889 +0x00d9:  movl   $0x1,0x4(%esp)
0865f891 +0x00e1:  mov    %eax,(%esp)
0865f894 +0x00e4:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
0865f899 +0x00e9:  mov    %eax,-0x80(%ebp)
0865f89c +0x00ec:  cmpl   $0x0,-0x80(%ebp)
0865f8a0 +0x00f0:  setne  %al
0865f8a3 +0x00f3:  test   %al,%al
0865f8a5 +0x00f5:  je     0865f8af <+0xff>
0865f8a7 +0x00f7:  mov    -0x80(%ebp),%ebx
0865f8aa +0x00fa:  jmp    086624dd <+0x2d2d>
0865f8af +0x00ff:  mov    0x28(%ebp),%eax
0865f8b2 +0x0102:  mov    0x20(%ebp),%edx
0865f8b5 +0x0105:  mov    %edx,(%eax)
0865f8b7 +0x0107:  mov    $0x0,%ebx
0865f8bc +0x010c:  jmp    086624dd <+0x2d2d>
0865f8c1 +0x0111:  mov    0x8(%ebp),%eax
0865f8c4 +0x0114:  mov    %eax,(%esp)
0865f8c7 +0x0117:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f8cc +0x011c:  test   %al,%al
0865f8ce +0x011e:  je     0865f8da <+0x12a>
0865f8d0 +0x0120:  mov    $0x13,%ebx
0865f8d5 +0x0125:  jmp    086624dd <+0x2d2d>
0865f8da +0x012a:  mov    0x8(%ebp),%eax
0865f8dd +0x012d:  mov    %eax,(%esp)
0865f8e0 +0x0130:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865f8e5 +0x0135:  lea    -0x418(%ebp),%edx
0865f8eb +0x013b:  mov    0x10(%ebp),%ecx
0865f8ee +0x013e:  mov    %ecx,0xc(%esp)
0865f8f2 +0x0142:  movl   $0x1,0x8(%esp)
0865f8fa +0x014a:  mov    %eax,0x4(%esp)
0865f8fe +0x014e:  mov    %edx,(%esp)
0865f901 +0x0151:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0865f906 +0x0156:  sub    $0x4,%esp
0865f909 +0x0159:  mov    -0x418(%ebp),%eax
0865f90f +0x015f:  mov    %eax,-0x131(%ebp)
0865f915 +0x0165:  mov    -0x414(%ebp),%eax
0865f91b +0x016b:  mov    %eax,-0x12d(%ebp)
0865f921 +0x0171:  mov    -0x410(%ebp),%eax
0865f927 +0x0177:  mov    %eax,-0x129(%ebp)
0865f92d +0x017d:  mov    -0x40c(%ebp),%eax
0865f933 +0x0183:  mov    %eax,-0x125(%ebp)
0865f939 +0x0189:  mov    -0x408(%ebp),%eax
0865f93f +0x018f:  mov    %eax,-0x121(%ebp)
0865f945 +0x0195:  mov    -0x404(%ebp),%eax
0865f94b +0x019b:  mov    %eax,-0x11d(%ebp)
0865f951 +0x01a1:  mov    -0x400(%ebp),%eax
0865f957 +0x01a7:  mov    %eax,-0x119(%ebp)
0865f95d +0x01ad:  mov    -0x3fc(%ebp),%eax
0865f963 +0x01b3:  mov    %eax,-0x115(%ebp)
0865f969 +0x01b9:  mov    -0x3f8(%ebp),%eax
0865f96f +0x01bf:  mov    %eax,-0x111(%ebp)
0865f975 +0x01c5:  mov    -0x3f4(%ebp),%eax
0865f97b +0x01cb:  mov    %eax,-0x10d(%ebp)
0865f981 +0x01d1:  mov    -0x3f0(%ebp),%eax
0865f987 +0x01d7:  mov    %eax,-0x109(%ebp)
0865f98d +0x01dd:  mov    -0x3ec(%ebp),%eax
0865f993 +0x01e3:  mov    %eax,-0x105(%ebp)
0865f999 +0x01e9:  mov    -0x3e8(%ebp),%eax
0865f99f +0x01ef:  mov    %eax,-0x101(%ebp)
0865f9a5 +0x01f5:  mov    -0x3e4(%ebp),%eax
0865f9ab +0x01fb:  mov    %eax,-0xfd(%ebp)
0865f9b1 +0x0201:  mov    -0x3e0(%ebp),%eax
0865f9b7 +0x0207:  mov    %eax,-0xf9(%ebp)
0865f9bd +0x020d:  movzbl -0x3dc(%ebp),%eax
0865f9c4 +0x0214:  mov    %al,-0xf5(%ebp)
0865f9ca +0x021a:  mov    -0x12f(%ebp),%eax
0865f9d0 +0x0220:  mov    %eax,%ebx
0865f9d2 +0x0222:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865f9d7 +0x0227:  mov    %ebx,0x4(%esp)
0865f9db +0x022b:  mov    %eax,(%esp)
0865f9de +0x022e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0865f9e3 +0x0233:  mov    %eax,-0x7c(%ebp)
0865f9e6 +0x0236:  cmpl   $0x0,-0x7c(%ebp)
0865f9ea +0x023a:  jne    0865f9f6 <+0x246>
0865f9ec +0x023c:  mov    $0x17,%ebx
0865f9f1 +0x0241:  jmp    086624dd <+0x2d2d>
0865f9f6 +0x0246:  mov    -0x7c(%ebp),%eax
0865f9f9 +0x0249:  mov    (%eax),%eax
0865f9fb +0x024b:  add    $0x40,%eax
0865f9fe +0x024e:  mov    (%eax),%edx
0865fa00 +0x0250:  mov    -0x7c(%ebp),%eax
0865fa03 +0x0253:  mov    %eax,(%esp)
0865fa06 +0x0256:  call   *%edx
0865fa08 +0x0258:  test   %al,%al
0865fa0a +0x025a:  je     0865fa16 <+0x266>
0865fa0c +0x025c:  mov    $0x17,%ebx
0865fa11 +0x0261:  jmp    086624dd <+0x2d2d>
0865fa16 +0x0266:  mov    -0x12f(%ebp),%eax
0865fa1c +0x026c:  cmp    $0x1963,%eax
0865fa21 +0x0271:  jbe    0865fa3a <+0x28a>
0865fa23 +0x0273:  mov    -0x12f(%ebp),%eax
0865fa29 +0x0279:  cmp    $0x1b57,%eax
0865fa2e +0x027e:  ja     0865fa3a <+0x28a>
0865fa30 +0x0280:  mov    $0x17,%ebx
0865fa35 +0x0285:  jmp    086624dd <+0x2d2d>
0865fa3a +0x028a:  movzbl -0x130(%ebp),%eax
0865fa41 +0x0291:  cmp    $0x1,%al
0865fa43 +0x0293:  jne    0865fa98 <+0x2e8>
0865fa45 +0x0295:  mov    0x8(%ebp),%eax
0865fa48 +0x0298:  mov    %eax,(%esp)
0865fa4b +0x029b:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fa50 +0x02a0:  mov    0x20(%ebp),%edx
0865fa53 +0x02a3:  mov    %edx,0x4(%esp)
0865fa57 +0x02a7:  mov    %eax,(%esp)
0865fa5a +0x02aa:  call   0850bbca <_ZNK6CCargo16check_slot_emptyEi>  ; CCargo::check_slot_empty(int) const
0865fa5f +0x02af:  xor    $0x1,%eax
0865fa62 +0x02b2:  test   %al,%al
0865fa64 +0x02b4:  je     0865fb68 <+0x3b8>
0865fa6a +0x02ba:  mov    0x8(%ebp),%eax
0865fa6d +0x02bd:  mov    %eax,(%esp)
0865fa70 +0x02c0:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fa75 +0x02c5:  mov    %eax,(%esp)
0865fa78 +0x02c8:  call   0850c406 <_ZNK6CCargo14get_empty_slotEv>  ; CCargo::get_empty_slot() const
0865fa7d +0x02cd:  mov    %eax,0x20(%ebp)
0865fa80 +0x02d0:  mov    0x20(%ebp),%eax
0865fa83 +0x02d3:  shr    $0x1f,%eax
0865fa86 +0x02d6:  test   %al,%al
0865fa88 +0x02d8:  je     0865fb68 <+0x3b8>
0865fa8e +0x02de:  mov    $0x4,%ebx
0865fa93 +0x02e3:  jmp    086624dd <+0x2d2d>
0865fa98 +0x02e8:  movzbl -0x130(%ebp),%eax
0865fa9f +0x02ef:  cmp    $0x4,%al
0865faa1 +0x02f1:  jne    0865faad <+0x2fd>
0865faa3 +0x02f3:  mov    $0x17,%ebx
0865faa8 +0x02f8:  jmp    086624dd <+0x2d2d>
0865faad +0x02fd:  lea    -0x131(%ebp),%eax
0865fab3 +0x0303:  mov    %eax,(%esp)
0865fab6 +0x0306:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0865fabb +0x030b:  cmp    0x18(%ebp),%eax
0865fabe +0x030e:  setl   %al
0865fac1 +0x0311:  test   %al,%al
0865fac3 +0x0313:  je     0865facf <+0x31f>
0865fac5 +0x0315:  mov    $0x11,%ebx
0865faca +0x031a:  jmp    086624dd <+0x2d2d>
0865facf +0x031f:  mov    0x18(%ebp),%eax
0865fad2 +0x0322:  mov    %eax,0x4(%esp)
0865fad6 +0x0326:  lea    -0x131(%ebp),%eax
0865fadc +0x032c:  mov    %eax,(%esp)
0865fadf +0x032f:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0865fae4 +0x0334:  movl   $0x0,-0x74(%ebp)
0865faeb +0x033b:  mov    -0x12f(%ebp),%eax
0865faf1 +0x0341:  mov    %eax,%ebx
0865faf3 +0x0343:  mov    0x8(%ebp),%eax
0865faf6 +0x0346:  mov    %eax,(%esp)
0865faf9 +0x0349:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fafe +0x034e:  mov    %ebx,0x4(%esp)
0865fb02 +0x0352:  mov    %eax,(%esp)
0865fb05 +0x0355:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
0865fb0a +0x035a:  mov    %eax,-0x74(%ebp)
0865fb0d +0x035d:  mov    -0x74(%ebp),%eax
0865fb10 +0x0360:  shr    $0x1f,%eax
0865fb13 +0x0363:  test   %al,%al
0865fb15 +0x0365:  je     0865fb62 <+0x3b2>
0865fb17 +0x0367:  mov    0x8(%ebp),%eax
0865fb1a +0x036a:  mov    %eax,(%esp)
0865fb1d +0x036d:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fb22 +0x0372:  mov    0x20(%ebp),%edx
0865fb25 +0x0375:  mov    %edx,0x4(%esp)
0865fb29 +0x0379:  mov    %eax,(%esp)
0865fb2c +0x037c:  call   0850bbca <_ZNK6CCargo16check_slot_emptyEi>  ; CCargo::check_slot_empty(int) const
0865fb31 +0x0381:  xor    $0x1,%eax
0865fb34 +0x0384:  test   %al,%al
0865fb36 +0x0386:  je     0865fb68 <+0x3b8>
0865fb38 +0x0388:  mov    0x8(%ebp),%eax
0865fb3b +0x038b:  mov    %eax,(%esp)
0865fb3e +0x038e:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fb43 +0x0393:  mov    %eax,(%esp)
0865fb46 +0x0396:  call   0850c406 <_ZNK6CCargo14get_empty_slotEv>  ; CCargo::get_empty_slot() const
0865fb4b +0x039b:  mov    %eax,0x20(%ebp)
0865fb4e +0x039e:  mov    0x20(%ebp),%eax
0865fb51 +0x03a1:  shr    $0x1f,%eax
0865fb54 +0x03a4:  test   %al,%al
0865fb56 +0x03a6:  je     0865fb68 <+0x3b8>
0865fb58 +0x03a8:  mov    $0x4,%ebx
0865fb5d +0x03ad:  jmp    086624dd <+0x2d2d>
0865fb62 +0x03b2:  mov    -0x74(%ebp),%eax
0865fb65 +0x03b5:  mov    %eax,0x20(%ebp)
0865fb68 +0x03b8:  mov    0x8(%ebp),%eax
0865fb6b +0x03bb:  mov    %eax,(%esp)
0865fb6e +0x03be:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fb73 +0x03c3:  mov    0x20(%ebp),%edx
0865fb76 +0x03c6:  mov    %edx,0x8(%esp)
0865fb7a +0x03ca:  lea    -0x131(%ebp),%edx
0865fb80 +0x03d0:  mov    %edx,0x4(%esp)
0865fb84 +0x03d4:  mov    %eax,(%esp)
0865fb87 +0x03d7:  call   0850b570 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi>  ; CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const
0865fb8c +0x03dc:  mov    %eax,0x20(%ebp)
0865fb8f +0x03df:  mov    0x20(%ebp),%eax
0865fb92 +0x03e2:  shr    $0x1f,%eax
0865fb95 +0x03e5:  test   %al,%al
0865fb97 +0x03e7:  je     0865fba3 <+0x3f3>
0865fb99 +0x03e9:  mov    $0x4,%ebx
0865fb9e +0x03ee:  jmp    086624dd <+0x2d2d>
0865fba3 +0x03f3:  mov    0x8(%ebp),%eax
0865fba6 +0x03f6:  mov    %eax,(%esp)
0865fba9 +0x03f9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865fbae +0x03fe:  movl   $0x1,0x14(%esp)
0865fbb6 +0x0406:  movl   $0x7,0x10(%esp)
0865fbbe +0x040e:  mov    0x18(%ebp),%edx
0865fbc1 +0x0411:  mov    %edx,0xc(%esp)
0865fbc5 +0x0415:  mov    0x10(%ebp),%edx
0865fbc8 +0x0418:  mov    %edx,0x8(%esp)
0865fbcc +0x041c:  movl   $0x1,0x4(%esp)
0865fbd4 +0x0424:  mov    %eax,(%esp)
0865fbd7 +0x0427:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0865fbdc +0x042c:  mov    %al,-0x75(%ebp)
0865fbdf +0x042f:  cmpb   $0x0,-0x75(%ebp)
0865fbe3 +0x0433:  je     0865fcab <+0x4fb>
0865fbe9 +0x0439:  mov    0x8(%ebp),%eax
0865fbec +0x043c:  mov    %eax,(%esp)
0865fbef +0x043f:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0865fbf4 +0x0444:  mov    0x20(%ebp),%edx
0865fbf7 +0x0447:  mov    %edx,0x8(%esp)
0865fbfb +0x044b:  lea    -0x131(%ebp),%edx
0865fc01 +0x0451:  mov    %edx,0x4(%esp)
0865fc05 +0x0455:  mov    %eax,(%esp)
0865fc08 +0x0458:  call   0850b672 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi>  ; CCargo::insert_item_special_slot(Inven_Item&, int)
0865fc0d +0x045d:  mov    0x28(%ebp),%edx
0865fc10 +0x0460:  mov    %eax,(%edx)
0865fc12 +0x0462:  mov    0x28(%ebp),%eax
0865fc15 +0x0465:  mov    (%eax),%ebx
0865fc17 +0x0467:  mov    0x8(%ebp),%eax
0865fc1a +0x046a:  mov    %eax,(%esp)
0865fc1d +0x046d:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0865fc22 +0x0472:  lea    -0x16e(%ebp),%edx
0865fc28 +0x0478:  mov    %ebx,0x8(%esp)
0865fc2c +0x047c:  mov    %eax,0x4(%esp)
0865fc30 +0x0480:  mov    %edx,(%esp)
0865fc33 +0x0483:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
0865fc38 +0x0488:  sub    $0x4,%esp
0865fc3b +0x048b:  movzbl -0x16d(%ebp),%eax
0865fc42 +0x0492:  cmp    $0x1,%al
0865fc44 +0x0494:  jne    0865fc75 <+0x4c5>
0865fc46 +0x0496:  mov    -0x12f(%ebp),%eax
0865fc4c +0x049c:  mov    0x8(%ebp),%edx
0865fc4f +0x049f:  lea    0x79700(%edx),%ecx
0865fc55 +0x04a5:  movl   $0x1,0xc(%esp)
0865fc5d +0x04ad:  mov    0x18(%ebp),%edx
0865fc60 +0x04b0:  mov    %edx,0x8(%esp)
0865fc64 +0x04b4:  mov    %eax,0x4(%esp)
0865fc68 +0x04b8:  mov    %ecx,(%esp)
0865fc6b +0x04bb:  call   08683cee <_ZN15cUserHistoryLog12ItemAddCargoEiii>  ; cUserHistoryLog::ItemAddCargo(int, int, int)
0865fc70 +0x04c0:  jmp    0865fd06 <+0x556>
0865fc75 +0x04c5:  lea    -0x16e(%ebp),%eax
0865fc7b +0x04cb:  mov    %eax,(%esp)
0865fc7e +0x04ce:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0865fc83 +0x04d3:  mov    -0x12f(%ebp),%edx
0865fc89 +0x04d9:  mov    0x8(%ebp),%ecx
0865fc8c +0x04dc:  add    $0x79700,%ecx
0865fc92 +0x04e2:  mov    %eax,0xc(%esp)
0865fc96 +0x04e6:  mov    0x18(%ebp),%eax
0865fc99 +0x04e9:  mov    %eax,0x8(%esp)
0865fc9d +0x04ed:  mov    %edx,0x4(%esp)
0865fca1 +0x04f1:  mov    %ecx,(%esp)
0865fca4 +0x04f4:  call   08683cee <_ZN15cUserHistoryLog12ItemAddCargoEiii>  ; cUserHistoryLog::ItemAddCargo(int, int, int)
0865fca9 +0x04f9:  jmp    0865fd06 <+0x556>
0865fcab +0x04fb:  mov    0x8(%ebp),%eax
0865fcae +0x04fe:  mov    %eax,(%esp)
0865fcb1 +0x0501:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865fcb6 +0x0506:  mov    %eax,%ebx
0865fcb8 +0x0508:  movl   $0x5,0xc(%esp)
0865fcc0 +0x0510:  movl   $0x3b21,0x8(%esp)
0865fcc8 +0x0518:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
0865fcd0 +0x0520:  lea    -0xe8(%ebp),%eax
0865fcd6 +0x0526:  mov    %eax,(%esp)
0865fcd9 +0x0529:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865fcde +0x052e:  mov    0x18(%ebp),%eax
0865fce1 +0x0531:  mov    %eax,0x10(%esp)
0865fce5 +0x0535:  mov    0x10(%ebp),%eax
0865fce8 +0x0538:  mov    %eax,0xc(%esp)
0865fcec +0x053c:  mov    %ebx,0x8(%esp)
0865fcf0 +0x0540:  movl   $"delete_item failed %d %d %d",0x4(%esp)
0865fcf8 +0x0548:  lea    -0xe8(%ebp),%eax
0865fcfe +0x054e:  mov    %eax,(%esp)
0865fd01 +0x0551:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865fd06 +0x0556:  jmp    08660331 <+0xb81>
0865fd0b +0x055b:  mov    0x8(%ebp),%eax
0865fd0e +0x055e:  mov    %eax,(%esp)
0865fd11 +0x0561:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865fd16 +0x0566:  test   %al,%al
0865fd18 +0x0568:  je     0865fd24 <+0x574>
0865fd1a +0x056a:  mov    $0x13,%ebx
0865fd1f +0x056f:  jmp    086624dd <+0x2d2d>
0865fd24 +0x0574:  mov    0x10(%ebp),%eax
0865fd27 +0x0577:  cwtl
0865fd28 +0x0578:  mov    0x20(%ebp),%edx
0865fd2b +0x057b:  mov    %edx,0xc(%esp)
0865fd2f +0x057f:  mov    %eax,0x8(%esp)
0865fd33 +0x0583:  mov    0xc(%ebp),%eax
0865fd36 +0x0586:  mov    %eax,0x4(%esp)
0865fd3a +0x058a:  mov    0x8(%ebp),%eax
0865fd3d +0x058d:  mov    %eax,(%esp)
0865fd40 +0x0590:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
0865fd45 +0x0595:  mov    %eax,-0x88(%ebp)
0865fd4b +0x059b:  cmpl   $0x0,-0x88(%ebp)
0865fd52 +0x05a2:  je     0865fd5f <+0x5af>
0865fd54 +0x05a4:  mov    -0x88(%ebp),%ebx
0865fd5a +0x05aa:  jmp    086624dd <+0x2d2d>
0865fd5f +0x05af:  mov    0x28(%ebp),%eax
0865fd62 +0x05b2:  mov    0x20(%ebp),%edx
0865fd65 +0x05b5:  mov    %edx,(%eax)
0865fd67 +0x05b7:  mov    0x8(%ebp),%eax
0865fd6a +0x05ba:  mov    %eax,(%esp)
0865fd6d +0x05bd:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0865fd72 +0x05c2:  mov    %eax,-0x70(%ebp)
0865fd75 +0x05c5:  cmpl   $0x0,-0x70(%ebp)
0865fd79 +0x05c9:  je     0865fd86 <+0x5d6>
0865fd7b +0x05cb:  mov    -0x70(%ebp),%eax
0865fd7e +0x05ce:  mov    %eax,(%esp)
0865fd81 +0x05d1:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
0865fd86 +0x05d6:  mov    $0x0,%ebx
0865fd8b +0x05db:  jmp    086624dd <+0x2d2d>
0865fd90 +0x05e0:  mov    0x8(%ebp),%eax
0865fd93 +0x05e3:  movzwl 0x8d002(%eax),%eax
0865fd9a +0x05ea:  movswl %ax,%ebx
0865fd9d +0x05ed:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0865fda2 +0x05f2:  mov    %ebx,0x4(%esp)
0865fda6 +0x05f6:  mov    %eax,(%esp)
0865fda9 +0x05f9:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
0865fdae +0x05fe:  mov    %eax,-0x84(%ebp)
0865fdb4 +0x0604:  cmpl   $0x0,-0x84(%ebp)
0865fdbb +0x060b:  jne    0865fdc7 <+0x617>
0865fdbd +0x060d:  mov    $0x1,%ebx
0865fdc2 +0x0612:  jmp    086624dd <+0x2d2d>
0865fdc7 +0x0617:  mov    -0x84(%ebp),%eax
0865fdcd +0x061d:  mov    %eax,(%esp)
0865fdd0 +0x0620:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
0865fdd5 +0x0625:  test   %al,%al
0865fdd7 +0x0627:  je     0865fdef <+0x63f>
0865fdd9 +0x0629:  mov    0x8(%ebp),%eax
0865fddc +0x062c:  movw   $0xffff,0x8d002(%eax)
0865fde5 +0x0635:  mov    $0x15,%ebx
0865fdea +0x063a:  jmp    086624dd <+0x2d2d>
0865fdef +0x063f:  mov    -0x84(%ebp),%eax
0865fdf5 +0x0645:  mov    %eax,(%esp)
0865fdf8 +0x0648:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
0865fdfd +0x064d:  xor    $0x1,%eax
0865fe00 +0x0650:  test   %al,%al
0865fe02 +0x0652:  je     0865fe2e <+0x67e>
0865fe04 +0x0654:  mov    -0x84(%ebp),%eax
0865fe0a +0x065a:  mov    %eax,(%esp)
0865fe0d +0x065d:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
0865fe12 +0x0662:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0865fe17 +0x0667:  mov    -0x84(%ebp),%edx
0865fe1d +0x066d:  mov    %edx,0x4(%esp)
0865fe21 +0x0671:  mov    %eax,(%esp)
0865fe24 +0x0674:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
0865fe29 +0x0679:  jmp    08660331 <+0xb81>
0865fe2e +0x067e:  mov    -0x84(%ebp),%eax
0865fe34 +0x0684:  mov    %eax,(%esp)
0865fe37 +0x0687:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
0865fe3c +0x068c:  test   %al,%al
0865fe3e +0x068e:  je     0865fe4a <+0x69a>
0865fe40 +0x0690:  mov    $0x11,%ebx
0865fe45 +0x0695:  jmp    086624dd <+0x2d2d>
0865fe4a +0x069a:  mov    0x18(%ebp),%eax
0865fe4d +0x069d:  mov    %eax,0x10(%esp)
0865fe51 +0x06a1:  mov    0x10(%ebp),%eax
0865fe54 +0x06a4:  mov    %eax,0xc(%esp)
0865fe58 +0x06a8:  movl   $0x0,0x8(%esp)
0865fe60 +0x06b0:  mov    0x8(%ebp),%eax
0865fe63 +0x06b3:  mov    %eax,0x4(%esp)
0865fe67 +0x06b7:  mov    -0x84(%ebp),%eax
0865fe6d +0x06bd:  mov    %eax,(%esp)
0865fe70 +0x06c0:  call   08529e7e <_ZN11CTradeSpace11regist_itemEP5CUseriii>  ; CTradeSpace::regist_item(CUser*, int, int, int)
0865fe75 +0x06c5:  mov    %eax,-0x88(%ebp)
0865fe7b +0x06cb:  cmpl   $0x0,-0x88(%ebp)
0865fe82 +0x06d2:  jns    0865ff2b <+0x77b>
0865fe88 +0x06d8:  mov    0x8(%ebp),%eax
0865fe8b +0x06db:  mov    %eax,(%esp)
0865fe8e +0x06de:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865fe93 +0x06e3:  mov    %eax,%esi
0865fe95 +0x06e5:  mov    0x8(%ebp),%eax
0865fe98 +0x06e8:  mov    %eax,(%esp)
0865fe9b +0x06eb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865fea0 +0x06f0:  movl   $0x0,0x4(%esp)
0865fea8 +0x06f8:  mov    %eax,(%esp)
0865feab +0x06fb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0865feb0 +0x0700:  mov    %eax,%ebx
0865feb2 +0x0702:  movl   $0x5,0xc(%esp)
0865feba +0x070a:  movl   $0x3b57,0x8(%esp)
0865fec2 +0x0712:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
0865feca +0x071a:  lea    -0xd8(%ebp),%eax
0865fed0 +0x0720:  mov    %eax,(%esp)
0865fed3 +0x0723:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0865fed8 +0x0728:  mov    0x18(%ebp),%eax
0865fedb +0x072b:  mov    %eax,0x18(%esp)
0865fedf +0x072f:  mov    0x10(%ebp),%eax
0865fee2 +0x0732:  mov    %eax,0x14(%esp)
0865fee6 +0x0736:  mov    %esi,0x10(%esp)
0865feea +0x073a:  mov    %ebx,0xc(%esp)
0865feee +0x073e:  mov    -0x88(%ebp),%eax
0865fef4 +0x0744:  mov    %eax,0x8(%esp)
0865fef8 +0x0748:  movl   $"(regist_item(): %d)(m_id: %s) (CharacNo: %d) (from_slot: %d) (item_count: %d)",0x4(%esp)
0865ff00 +0x0750:  lea    -0xd8(%ebp),%eax
0865ff06 +0x0756:  mov    %eax,(%esp)
0865ff09 +0x0759:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865ff0e +0x075e:  cmpl   $0xfffffffc,-0x88(%ebp)
0865ff15 +0x0765:  jne    0865ff21 <+0x771>
0865ff17 +0x0767:  mov    $0x5e,%ebx
0865ff1c +0x076c:  jmp    086624dd <+0x2d2d>
0865ff21 +0x0771:  mov    $0x11,%ebx
0865ff26 +0x0776:  jmp    086624dd <+0x2d2d>
0865ff2b +0x077b:  mov    0x28(%ebp),%eax
0865ff2e +0x077e:  mov    -0x88(%ebp),%edx
0865ff34 +0x0784:  mov    %edx,(%eax)
0865ff36 +0x0786:  jmp    08660331 <+0xb81>
0865ff3b +0x078b:  mov    0x8(%ebp),%eax
0865ff3e +0x078e:  mov    %eax,(%esp)
0865ff41 +0x0791:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865ff46 +0x0796:  test   %al,%al
0865ff48 +0x0798:  je     0865ff54 <+0x7a4>
0865ff4a +0x079a:  mov    $0x13,%ebx
0865ff4f +0x079f:  jmp    086624dd <+0x2d2d>
0865ff54 +0x07a4:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0865ff59 +0x07a9:  movl   $0x1b,0xc(%esp)
0865ff61 +0x07b1:  movl   $0x1,0x8(%esp)
0865ff69 +0x07b9:  mov    0x8(%ebp),%edx
0865ff6c +0x07bc:  mov    %edx,0x4(%esp)
0865ff70 +0x07c0:  mov    %eax,(%esp)
0865ff73 +0x07c3:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0865ff78 +0x07c8:  test   %al,%al
0865ff7a +0x07ca:  je     0865ff86 <+0x7d6>
0865ff7c +0x07cc:  mov    $0xd1,%ebx
0865ff81 +0x07d1:  jmp    086624dd <+0x2d2d>
0865ff86 +0x07d6:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0865ff8b +0x07db:  movl   $0x1,0x8(%esp)
0865ff93 +0x07e3:  mov    0x8(%ebp),%edx
0865ff96 +0x07e6:  mov    %edx,0x4(%esp)
0865ff9a +0x07ea:  mov    %eax,(%esp)
0865ff9d +0x07ed:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0865ffa2 +0x07f2:  mov    %eax,-0x6c(%ebp)
0865ffa5 +0x07f5:  cmpl   $0x0,-0x6c(%ebp)
0865ffa9 +0x07f9:  je     0865ffb3 <+0x803>
0865ffab +0x07fb:  mov    -0x6c(%ebp),%ebx
0865ffae +0x07fe:  jmp    086624dd <+0x2d2d>
0865ffb3 +0x0803:  mov    0x8(%ebp),%eax
0865ffb6 +0x0806:  mov    %eax,(%esp)
0865ffb9 +0x0809:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0865ffbe +0x080e:  xor    $0x1,%eax
0865ffc1 +0x0811:  test   %al,%al
0865ffc3 +0x0813:  je     0865ffcf <+0x81f>
0865ffc5 +0x0815:  mov    $0x13,%ebx
0865ffca +0x081a:  jmp    086624dd <+0x2d2d>
0865ffcf +0x081f:  mov    0x8(%ebp),%eax
0865ffd2 +0x0822:  mov    %eax,(%esp)
0865ffd5 +0x0825:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0865ffda +0x082a:  mov    %eax,-0x68(%ebp)
0865ffdd +0x082d:  mov    0x8(%ebp),%eax
0865ffe0 +0x0830:  mov    %eax,(%esp)
0865ffe3 +0x0833:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865ffe8 +0x0838:  lea    -0x418(%ebp),%edx
0865ffee +0x083e:  mov    0x10(%ebp),%ecx
0865fff1 +0x0841:  mov    %ecx,0xc(%esp)
0865fff5 +0x0845:  movl   $0x1,0x8(%esp)
0865fffd +0x084d:  mov    %eax,0x4(%esp)
08660001 +0x0851:  mov    %edx,(%esp)
08660004 +0x0854:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08660009 +0x0859:  sub    $0x4,%esp
0866000c +0x085c:  mov    -0x418(%ebp),%eax
08660012 +0x0862:  mov    %eax,-0x131(%ebp)
08660018 +0x0868:  mov    -0x414(%ebp),%eax
0866001e +0x086e:  mov    %eax,-0x12d(%ebp)
08660024 +0x0874:  mov    -0x410(%ebp),%eax
0866002a +0x087a:  mov    %eax,-0x129(%ebp)
08660030 +0x0880:  mov    -0x40c(%ebp),%eax
08660036 +0x0886:  mov    %eax,-0x125(%ebp)
0866003c +0x088c:  mov    -0x408(%ebp),%eax
08660042 +0x0892:  mov    %eax,-0x121(%ebp)
08660048 +0x0898:  mov    -0x404(%ebp),%eax
0866004e +0x089e:  mov    %eax,-0x11d(%ebp)
08660054 +0x08a4:  mov    -0x400(%ebp),%eax
0866005a +0x08aa:  mov    %eax,-0x119(%ebp)
08660060 +0x08b0:  mov    -0x3fc(%ebp),%eax
08660066 +0x08b6:  mov    %eax,-0x115(%ebp)
0866006c +0x08bc:  mov    -0x3f8(%ebp),%eax
08660072 +0x08c2:  mov    %eax,-0x111(%ebp)
08660078 +0x08c8:  mov    -0x3f4(%ebp),%eax
0866007e +0x08ce:  mov    %eax,-0x10d(%ebp)
08660084 +0x08d4:  mov    -0x3f0(%ebp),%eax
0866008a +0x08da:  mov    %eax,-0x109(%ebp)
08660090 +0x08e0:  mov    -0x3ec(%ebp),%eax
08660096 +0x08e6:  mov    %eax,-0x105(%ebp)
0866009c +0x08ec:  mov    -0x3e8(%ebp),%eax
086600a2 +0x08f2:  mov    %eax,-0x101(%ebp)
086600a8 +0x08f8:  mov    -0x3e4(%ebp),%eax
086600ae +0x08fe:  mov    %eax,-0xfd(%ebp)
086600b4 +0x0904:  mov    -0x3e0(%ebp),%eax
086600ba +0x090a:  mov    %eax,-0xf9(%ebp)
086600c0 +0x0910:  movzbl -0x3dc(%ebp),%eax
086600c7 +0x0917:  mov    %al,-0xf5(%ebp)
086600cd +0x091d:  lea    -0x131(%ebp),%eax
086600d3 +0x0923:  mov    %eax,(%esp)
086600d6 +0x0926:  call   081201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>  ; IsTradeLimitAttachTypeItem(Inven_Item const&)
086600db +0x092b:  test   %al,%al
086600dd +0x092d:  je     086600e9 <+0x939>
086600df +0x092f:  mov    $0x17,%ebx
086600e4 +0x0934:  jmp    086624dd <+0x2d2d>
086600e9 +0x0939:  lea    -0x131(%ebp),%eax
086600ef +0x093f:  mov    %eax,0x4(%esp)
086600f3 +0x0943:  mov    -0x68(%ebp),%eax
086600f6 +0x0946:  mov    %eax,(%esp)
086600f9 +0x0949:  call   08289a4a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item>  ; CAccountCargo::CheckInsertCondition(Inven_Item&)
086600fe +0x094e:  xor    $0x1,%eax
08660101 +0x0951:  test   %al,%al
08660103 +0x0953:  je     0866010f <+0x95f>
08660105 +0x0955:  mov    $0x11,%ebx
0866010a +0x095a:  jmp    086624dd <+0x2d2d>
0866010f +0x095f:  movzbl -0x130(%ebp),%eax
08660116 +0x0966:  cmp    $0x1,%al
08660118 +0x0968:  jne    0866015d <+0x9ad>
0866011a +0x096a:  mov    0x20(%ebp),%eax
0866011d +0x096d:  mov    %eax,0x4(%esp)
08660121 +0x0971:  mov    -0x68(%ebp),%eax
08660124 +0x0974:  mov    %eax,(%esp)
08660127 +0x0977:  call   0828a5d4 <_ZN13CAccountCargo14CheckSlotEmptyEi>  ; CAccountCargo::CheckSlotEmpty(int)
0866012c +0x097c:  xor    $0x1,%eax
0866012f +0x097f:  test   %al,%al
08660131 +0x0981:  je     08660229 <+0xa79>
08660137 +0x0987:  mov    -0x68(%ebp),%eax
0866013a +0x098a:  mov    %eax,(%esp)
0866013d +0x098d:  call   0828a580 <_ZN13CAccountCargo12GetEmptySlotEv>  ; CAccountCargo::GetEmptySlot()
08660142 +0x0992:  mov    %eax,0x20(%ebp)
08660145 +0x0995:  mov    0x20(%ebp),%eax
08660148 +0x0998:  shr    $0x1f,%eax
0866014b +0x099b:  test   %al,%al
0866014d +0x099d:  je     08660229 <+0xa79>
08660153 +0x09a3:  mov    $0x4,%ebx
08660158 +0x09a8:  jmp    086624dd <+0x2d2d>
0866015d +0x09ad:  lea    -0x131(%ebp),%eax
08660163 +0x09b3:  mov    %eax,(%esp)
08660166 +0x09b6:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0866016b +0x09bb:  cmp    0x18(%ebp),%eax
0866016e +0x09be:  setl   %al
08660171 +0x09c1:  test   %al,%al
08660173 +0x09c3:  je     0866017f <+0x9cf>
08660175 +0x09c5:  mov    $0x11,%ebx
0866017a +0x09ca:  jmp    086624dd <+0x2d2d>
0866017f +0x09cf:  mov    0x18(%ebp),%eax
08660182 +0x09d2:  mov    %eax,0x4(%esp)
08660186 +0x09d6:  lea    -0x131(%ebp),%eax
0866018c +0x09dc:  mov    %eax,(%esp)
0866018f +0x09df:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08660194 +0x09e4:  mov    -0x12f(%ebp),%eax
0866019a +0x09ea:  mov    %eax,0x4(%esp)
0866019e +0x09ee:  mov    -0x68(%ebp),%eax
086601a1 +0x09f1:  mov    %eax,(%esp)
086601a4 +0x09f4:  call   0828a61a <_ZN13CAccountCargo19GetSpecificItemSlotEi>  ; CAccountCargo::GetSpecificItemSlot(int)
086601a9 +0x09f9:  mov    %eax,-0x60(%ebp)
086601ac +0x09fc:  cmpl   $0x0,-0x60(%ebp)
086601b0 +0x0a00:  js     086601ee <+0xa3e>
086601b2 +0x0a02:  mov    -0x12f(%ebp),%eax
086601b8 +0x0a08:  mov    0x18(%ebp),%edx
086601bb +0x0a0b:  mov    %edx,0xc(%esp)
086601bf +0x0a0f:  mov    %eax,0x8(%esp)
086601c3 +0x0a13:  mov    -0x60(%ebp),%eax
086601c6 +0x0a16:  mov    %eax,0x4(%esp)
086601ca +0x0a1a:  mov    -0x68(%ebp),%eax
086601cd +0x0a1d:  mov    %eax,(%esp)
086601d0 +0x0a20:  call   0828a670 <_ZN13CAccountCargo15CheckStackLimitEiii>  ; CAccountCargo::CheckStackLimit(int, int, int)
086601d5 +0x0a25:  xor    $0x1,%eax
086601d8 +0x0a28:  test   %al,%al
086601da +0x0a2a:  je     086601e6 <+0xa36>
086601dc +0x0a2c:  mov    $0x4,%ebx
086601e1 +0x0a31:  jmp    086624dd <+0x2d2d>
086601e6 +0x0a36:  mov    -0x60(%ebp),%eax
086601e9 +0x0a39:  mov    %eax,0x20(%ebp)
086601ec +0x0a3c:  jmp    08660229 <+0xa79>
086601ee +0x0a3e:  mov    0x20(%ebp),%eax
086601f1 +0x0a41:  mov    %eax,0x4(%esp)
086601f5 +0x0a45:  mov    -0x68(%ebp),%eax
086601f8 +0x0a48:  mov    %eax,(%esp)
086601fb +0x0a4b:  call   0828a5d4 <_ZN13CAccountCargo14CheckSlotEmptyEi>  ; CAccountCargo::CheckSlotEmpty(int)
08660200 +0x0a50:  xor    $0x1,%eax
08660203 +0x0a53:  test   %al,%al
08660205 +0x0a55:  je     08660229 <+0xa79>
08660207 +0x0a57:  mov    -0x68(%ebp),%eax
0866020a +0x0a5a:  mov    %eax,(%esp)
0866020d +0x0a5d:  call   0828a580 <_ZN13CAccountCargo12GetEmptySlotEv>  ; CAccountCargo::GetEmptySlot()
08660212 +0x0a62:  mov    %eax,0x20(%ebp)
08660215 +0x0a65:  mov    0x20(%ebp),%eax
08660218 +0x0a68:  shr    $0x1f,%eax
0866021b +0x0a6b:  test   %al,%al
0866021d +0x0a6d:  je     08660229 <+0xa79>
0866021f +0x0a6f:  mov    $0x4,%ebx
08660224 +0x0a74:  jmp    086624dd <+0x2d2d>
08660229 +0x0a79:  mov    0x8(%ebp),%eax
0866022c +0x0a7c:  mov    %eax,(%esp)
0866022f +0x0a7f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08660234 +0x0a84:  movl   $0x1,0x14(%esp)
0866023c +0x0a8c:  movl   $0x25,0x10(%esp)
08660244 +0x0a94:  mov    0x18(%ebp),%edx
08660247 +0x0a97:  mov    %edx,0xc(%esp)
0866024b +0x0a9b:  mov    0x10(%ebp),%edx
0866024e +0x0a9e:  mov    %edx,0x8(%esp)
08660252 +0x0aa2:  movl   $0x1,0x4(%esp)
0866025a +0x0aaa:  mov    %eax,(%esp)
0866025d +0x0aad:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08660262 +0x0ab2:  mov    %al,-0x61(%ebp)
08660265 +0x0ab5:  cmpb   $0x0,-0x61(%ebp)
08660269 +0x0ab9:  je     08660325 <+0xb75>
0866026f +0x0abf:  mov    0x20(%ebp),%eax
08660272 +0x0ac2:  mov    %eax,0x8(%esp)
08660276 +0x0ac6:  lea    -0x131(%ebp),%eax
0866027c +0x0acc:  mov    %eax,0x4(%esp)
08660280 +0x0ad0:  mov    -0x68(%ebp),%eax
08660283 +0x0ad3:  mov    %eax,(%esp)
08660286 +0x0ad6:  call   08289c82 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi>  ; CAccountCargo::InsertItem(Inven_Item&, int)
0866028b +0x0adb:  mov    0x28(%ebp),%edx
0866028e +0x0ade:  mov    %eax,(%edx)
08660290 +0x0ae0:  mov    0x28(%ebp),%eax
08660293 +0x0ae3:  mov    (%eax),%edx
08660295 +0x0ae5:  lea    -0x1ab(%ebp),%eax
0866029b +0x0aeb:  mov    %edx,0x8(%esp)
0866029f +0x0aef:  mov    -0x68(%ebp),%edx
086602a2 +0x0af2:  mov    %edx,0x4(%esp)
086602a6 +0x0af6:  mov    %eax,(%esp)
086602a9 +0x0af9:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
086602ae +0x0afe:  sub    $0x4,%esp
086602b1 +0x0b01:  movzbl -0x1aa(%ebp),%eax
086602b8 +0x0b08:  cmp    $0x1,%al
086602ba +0x0b0a:  jne    086602f1 <+0xb41>
086602bc +0x0b0c:  mov    -0x1a9(%ebp),%eax
086602c2 +0x0b12:  mov    0x8(%ebp),%edx
086602c5 +0x0b15:  add    $0x79700,%edx
086602cb +0x0b1b:  movl   $0x2d,0x10(%esp)
086602d3 +0x0b23:  movl   $0x1,0xc(%esp)
086602db +0x0b2b:  movl   $0x1,0x8(%esp)
086602e3 +0x0b33:  mov    %eax,0x4(%esp)
086602e7 +0x0b37:  mov    %edx,(%esp)
086602ea +0x0b3a:  call   086868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>  ; cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
086602ef +0x0b3f:  jmp    08660325 <+0xb75>
086602f1 +0x0b41:  mov    -0x1a4(%ebp),%edx
086602f7 +0x0b47:  mov    -0x1a9(%ebp),%eax
086602fd +0x0b4d:  mov    0x8(%ebp),%ecx
08660300 +0x0b50:  lea    0x79700(%ecx),%ebx
08660306 +0x0b56:  movl   $0x2d,0x10(%esp)
0866030e +0x0b5e:  mov    0x18(%ebp),%ecx
08660311 +0x0b61:  mov    %ecx,0xc(%esp)
08660315 +0x0b65:  mov    %edx,0x8(%esp)
08660319 +0x0b69:  mov    %eax,0x4(%esp)
0866031d +0x0b6d:  mov    %ebx,(%esp)
08660320 +0x0b70:  call   086868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>  ; cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
08660325 +0x0b75:  jmp    08660331 <+0xb81>
08660327 +0x0b77:  mov    $0x1,%ebx
0866032c +0x0b7c:  jmp    086624dd <+0x2d2d>
08660331 +0x0b81:  jmp    086624b8 <+0x2d08>
08660336 +0x0b86:  cmpl   $0xc,0x1c(%ebp)
0866033a +0x0b8a:  ja     08660be8 <+0x1438>
08660340 +0x0b90:  mov    0x1c(%ebp),%eax
08660343 +0x0b93:  shl    $0x2,%eax
08660346 +0x0b96:  mov    &data#f619d927(.rodata)(%eax),%eax
0866034c +0x0b9c:  jmp    *%eax
0866034e +0x0b9e:  mov    0x8(%ebp),%eax
08660351 +0x0ba1:  mov    %eax,(%esp)
08660354 +0x0ba4:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08660359 +0x0ba9:  test   %al,%al
0866035b +0x0bab:  je     08660367 <+0xbb7>
0866035d +0x0bad:  mov    $0x13,%ebx
08660362 +0x0bb2:  jmp    086624dd <+0x2d2d>
08660367 +0x0bb7:  mov    0x8(%ebp),%eax
0866036a +0x0bba:  mov    %eax,(%esp)
0866036d +0x0bbd:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08660372 +0x0bc2:  lea    -0x418(%ebp),%edx
08660378 +0x0bc8:  mov    0x10(%ebp),%ecx
0866037b +0x0bcb:  mov    %ecx,0x8(%esp)
0866037f +0x0bcf:  mov    %eax,0x4(%esp)
08660383 +0x0bd3:  mov    %edx,(%esp)
08660386 +0x0bd6:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
0866038b +0x0bdb:  sub    $0x4,%esp
0866038e +0x0bde:  mov    -0x418(%ebp),%eax
08660394 +0x0be4:  mov    %eax,-0x131(%ebp)
0866039a +0x0bea:  mov    -0x414(%ebp),%eax
086603a0 +0x0bf0:  mov    %eax,-0x12d(%ebp)
086603a6 +0x0bf6:  mov    -0x410(%ebp),%eax
086603ac +0x0bfc:  mov    %eax,-0x129(%ebp)
086603b2 +0x0c02:  mov    -0x40c(%ebp),%eax
086603b8 +0x0c08:  mov    %eax,-0x125(%ebp)
086603be +0x0c0e:  mov    -0x408(%ebp),%eax
086603c4 +0x0c14:  mov    %eax,-0x121(%ebp)
086603ca +0x0c1a:  mov    -0x404(%ebp),%eax
086603d0 +0x0c20:  mov    %eax,-0x11d(%ebp)
086603d6 +0x0c26:  mov    -0x400(%ebp),%eax
086603dc +0x0c2c:  mov    %eax,-0x119(%ebp)
086603e2 +0x0c32:  mov    -0x3fc(%ebp),%eax
086603e8 +0x0c38:  mov    %eax,-0x115(%ebp)
086603ee +0x0c3e:  mov    -0x3f8(%ebp),%eax
086603f4 +0x0c44:  mov    %eax,-0x111(%ebp)
086603fa +0x0c4a:  mov    -0x3f4(%ebp),%eax
08660400 +0x0c50:  mov    %eax,-0x10d(%ebp)
08660406 +0x0c56:  mov    -0x3f0(%ebp),%eax
0866040c +0x0c5c:  mov    %eax,-0x109(%ebp)
08660412 +0x0c62:  mov    -0x3ec(%ebp),%eax
08660418 +0x0c68:  mov    %eax,-0x105(%ebp)
0866041e +0x0c6e:  mov    -0x3e8(%ebp),%eax
08660424 +0x0c74:  mov    %eax,-0x101(%ebp)
0866042a +0x0c7a:  mov    -0x3e4(%ebp),%eax
08660430 +0x0c80:  mov    %eax,-0xfd(%ebp)
08660436 +0x0c86:  mov    -0x3e0(%ebp),%eax
0866043c +0x0c8c:  mov    %eax,-0xf9(%ebp)
08660442 +0x0c92:  movzbl -0x3dc(%ebp),%eax
08660449 +0x0c99:  mov    %al,-0xf5(%ebp)
0866044f +0x0c9f:  mov    -0x131(%ebp),%eax
08660455 +0x0ca5:  mov    %eax,-0x1e8(%ebp)
0866045b +0x0cab:  mov    -0x12d(%ebp),%eax
08660461 +0x0cb1:  mov    %eax,-0x1e4(%ebp)
08660467 +0x0cb7:  mov    -0x129(%ebp),%eax
0866046d +0x0cbd:  mov    %eax,-0x1e0(%ebp)
08660473 +0x0cc3:  mov    -0x125(%ebp),%eax
08660479 +0x0cc9:  mov    %eax,-0x1dc(%ebp)
0866047f +0x0ccf:  mov    -0x121(%ebp),%eax
08660485 +0x0cd5:  mov    %eax,-0x1d8(%ebp)
0866048b +0x0cdb:  mov    -0x11d(%ebp),%eax
08660491 +0x0ce1:  mov    %eax,-0x1d4(%ebp)
08660497 +0x0ce7:  mov    -0x119(%ebp),%eax
0866049d +0x0ced:  mov    %eax,-0x1d0(%ebp)
086604a3 +0x0cf3:  mov    -0x115(%ebp),%eax
086604a9 +0x0cf9:  mov    %eax,-0x1cc(%ebp)
086604af +0x0cff:  mov    -0x111(%ebp),%eax
086604b5 +0x0d05:  mov    %eax,-0x1c8(%ebp)
086604bb +0x0d0b:  mov    -0x10d(%ebp),%eax
086604c1 +0x0d11:  mov    %eax,-0x1c4(%ebp)
086604c7 +0x0d17:  mov    -0x109(%ebp),%eax
086604cd +0x0d1d:  mov    %eax,-0x1c0(%ebp)
086604d3 +0x0d23:  mov    -0x105(%ebp),%eax
086604d9 +0x0d29:  mov    %eax,-0x1bc(%ebp)
086604df +0x0d2f:  mov    -0x101(%ebp),%eax
086604e5 +0x0d35:  mov    %eax,-0x1b8(%ebp)
086604eb +0x0d3b:  mov    -0xfd(%ebp),%eax
086604f1 +0x0d41:  mov    %eax,-0x1b4(%ebp)
086604f7 +0x0d47:  mov    -0xf9(%ebp),%eax
086604fd +0x0d4d:  mov    %eax,-0x1b0(%ebp)
08660503 +0x0d53:  movzbl -0xf5(%ebp),%eax
0866050a +0x0d5a:  mov    %al,-0x1ac(%ebp)
08660510 +0x0d60:  movzbl -0x1e7(%ebp),%eax
08660517 +0x0d67:  cmp    $0x1,%al
08660519 +0x0d69:  je     08660530 <+0xd80>
0866051b +0x0d6b:  mov    0x18(%ebp),%eax
0866051e +0x0d6e:  mov    %eax,0x4(%esp)
08660522 +0x0d72:  lea    -0x1e8(%ebp),%eax
08660528 +0x0d78:  mov    %eax,(%esp)
0866052b +0x0d7b:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08660530 +0x0d80:  mov    0x8(%ebp),%eax
08660533 +0x0d83:  mov    %eax,(%esp)
08660536 +0x0d86:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0866053b +0x0d8b:  mov    -0x1e8(%ebp),%edx
08660541 +0x0d91:  mov    %edx,0x4(%esp)
08660545 +0x0d95:  mov    -0x1e4(%ebp),%edx
0866054b +0x0d9b:  mov    %edx,0x8(%esp)
0866054f +0x0d9f:  mov    -0x1e0(%ebp),%edx
08660555 +0x0da5:  mov    %edx,0xc(%esp)
08660559 +0x0da9:  mov    -0x1dc(%ebp),%edx
0866055f +0x0daf:  mov    %edx,0x10(%esp)
08660563 +0x0db3:  mov    -0x1d8(%ebp),%edx
08660569 +0x0db9:  mov    %edx,0x14(%esp)
0866056d +0x0dbd:  mov    -0x1d4(%ebp),%edx
08660573 +0x0dc3:  mov    %edx,0x18(%esp)
08660577 +0x0dc7:  mov    -0x1d0(%ebp),%edx
0866057d +0x0dcd:  mov    %edx,0x1c(%esp)
08660581 +0x0dd1:  mov    -0x1cc(%ebp),%edx
08660587 +0x0dd7:  mov    %edx,0x20(%esp)
0866058b +0x0ddb:  mov    -0x1c8(%ebp),%edx
08660591 +0x0de1:  mov    %edx,0x24(%esp)
08660595 +0x0de5:  mov    -0x1c4(%ebp),%edx
0866059b +0x0deb:  mov    %edx,0x28(%esp)
0866059f +0x0def:  mov    -0x1c0(%ebp),%edx
086605a5 +0x0df5:  mov    %edx,0x2c(%esp)
086605a9 +0x0df9:  mov    -0x1bc(%ebp),%edx
086605af +0x0dff:  mov    %edx,0x30(%esp)
086605b3 +0x0e03:  mov    -0x1b8(%ebp),%edx
086605b9 +0x0e09:  mov    %edx,0x34(%esp)
086605bd +0x0e0d:  mov    -0x1b4(%ebp),%edx
086605c3 +0x0e13:  mov    %edx,0x38(%esp)
086605c7 +0x0e17:  mov    -0x1b0(%ebp),%edx
086605cd +0x0e1d:  mov    %edx,0x3c(%esp)
086605d1 +0x0e21:  movzbl -0x1ac(%ebp),%edx
086605d8 +0x0e28:  mov    %dl,0x40(%esp)
086605dc +0x0e2c:  mov    %eax,(%esp)
086605df +0x0e2f:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
086605e4 +0x0e34:  cmp    $0xffffffff,%eax
086605e7 +0x0e37:  sete   %al
086605ea +0x0e3a:  test   %al,%al
086605ec +0x0e3c:  je     086605f8 <+0xe48>
086605ee +0x0e3e:  mov    $0x11,%ebx
086605f3 +0x0e43:  jmp    086624dd <+0x2d2d>
086605f8 +0x0e48:  mov    0x8(%ebp),%eax
086605fb +0x0e4b:  mov    %eax,(%esp)
086605fe +0x0e4e:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08660603 +0x0e53:  movl   $0x7,0xc(%esp)
0866060b +0x0e5b:  mov    0x18(%ebp),%edx
0866060e +0x0e5e:  mov    %edx,0x8(%esp)
08660612 +0x0e62:  mov    0x10(%ebp),%edx
08660615 +0x0e65:  mov    %edx,0x4(%esp)
08660619 +0x0e69:  mov    %eax,(%esp)
0866061c +0x0e6c:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
08660621 +0x0e71:  mov    %al,-0x59(%ebp)
08660624 +0x0e74:  cmpb   $0x0,-0x59(%ebp)
08660628 +0x0e78:  je     0866078e <+0xfde>
0866062e +0x0e7e:  mov    0x8(%ebp),%eax
08660631 +0x0e81:  mov    %eax,(%esp)
08660634 +0x0e84:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08660639 +0x0e89:  movl   $0x0,0x4c(%esp)
08660641 +0x0e91:  movl   $0x1,0x48(%esp)
08660649 +0x0e99:  movl   $0x7,0x44(%esp)
08660651 +0x0ea1:  mov    -0x1e8(%ebp),%edx
08660657 +0x0ea7:  mov    %edx,0x4(%esp)
0866065b +0x0eab:  mov    -0x1e4(%ebp),%edx
08660661 +0x0eb1:  mov    %edx,0x8(%esp)
08660665 +0x0eb5:  mov    -0x1e0(%ebp),%edx
0866066b +0x0ebb:  mov    %edx,0xc(%esp)
0866066f +0x0ebf:  mov    -0x1dc(%ebp),%edx
08660675 +0x0ec5:  mov    %edx,0x10(%esp)
08660679 +0x0ec9:  mov    -0x1d8(%ebp),%edx
0866067f +0x0ecf:  mov    %edx,0x14(%esp)
08660683 +0x0ed3:  mov    -0x1d4(%ebp),%edx
08660689 +0x0ed9:  mov    %edx,0x18(%esp)
0866068d +0x0edd:  mov    -0x1d0(%ebp),%edx
08660693 +0x0ee3:  mov    %edx,0x1c(%esp)
08660697 +0x0ee7:  mov    -0x1cc(%ebp),%edx
0866069d +0x0eed:  mov    %edx,0x20(%esp)
086606a1 +0x0ef1:  mov    -0x1c8(%ebp),%edx
086606a7 +0x0ef7:  mov    %edx,0x24(%esp)
086606ab +0x0efb:  mov    -0x1c4(%ebp),%edx
086606b1 +0x0f01:  mov    %edx,0x28(%esp)
086606b5 +0x0f05:  mov    -0x1c0(%ebp),%edx
086606bb +0x0f0b:  mov    %edx,0x2c(%esp)
086606bf +0x0f0f:  mov    -0x1bc(%ebp),%edx
086606c5 +0x0f15:  mov    %edx,0x30(%esp)
086606c9 +0x0f19:  mov    -0x1b8(%ebp),%edx
086606cf +0x0f1f:  mov    %edx,0x34(%esp)
086606d3 +0x0f23:  mov    -0x1b4(%ebp),%edx
086606d9 +0x0f29:  mov    %edx,0x38(%esp)
086606dd +0x0f2d:  mov    -0x1b0(%ebp),%edx
086606e3 +0x0f33:  mov    %edx,0x3c(%esp)
086606e7 +0x0f37:  movzbl -0x1ac(%ebp),%edx
086606ee +0x0f3e:  mov    %dl,0x40(%esp)
086606f2 +0x0f42:  mov    %eax,(%esp)
086606f5 +0x0f45:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086606fa +0x0f4a:  mov    0x28(%ebp),%edx
086606fd +0x0f4d:  mov    %eax,(%edx)
086606ff +0x0f4f:  mov    0x28(%ebp),%eax
08660702 +0x0f52:  mov    (%eax),%eax
08660704 +0x0f54:  cmp    $0xffffffff,%eax
08660707 +0x0f57:  jne    086607ec <+0x103c>
0866070d +0x0f5d:  mov    -0x1e6(%ebp),%edi
08660713 +0x0f63:  mov    0x8(%ebp),%eax
08660716 +0x0f66:  mov    %eax,(%esp)
08660719 +0x0f69:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866071e +0x0f6e:  mov    %eax,%esi
08660720 +0x0f70:  mov    0x8(%ebp),%eax
08660723 +0x0f73:  mov    %eax,(%esp)
08660726 +0x0f76:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866072b +0x0f7b:  movl   $0x0,0x4(%esp)
08660733 +0x0f83:  mov    %eax,(%esp)
08660736 +0x0f86:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0866073b +0x0f8b:  mov    %eax,%ebx
0866073d +0x0f8d:  movl   $0x5,0xc(%esp)
08660745 +0x0f95:  movl   $0x3be5,0x8(%esp)
0866074d +0x0f9d:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
08660755 +0x0fa5:  lea    -0xc8(%ebp),%eax
0866075b +0x0fab:  mov    %eax,(%esp)
0866075e +0x0fae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08660763 +0x0fb3:  mov    0x18(%ebp),%eax
08660766 +0x0fb6:  mov    %eax,0x14(%esp)
0866076a +0x0fba:  mov    %edi,0x10(%esp)
0866076e +0x0fbe:  mov    %esi,0xc(%esp)
08660772 +0x0fc2:  mov    %ebx,0x8(%esp)
08660776 +0x0fc6:  movl   $"insertItemIntoInventory failed %s %d %d %d",0x4(%esp)
0866077e +0x0fce:  lea    -0xc8(%ebp),%eax
08660784 +0x0fd4:  mov    %eax,(%esp)
08660787 +0x0fd7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866078c +0x0fdc:  jmp    086607ec <+0x103c>
0866078e +0x0fde:  mov    -0x12f(%ebp),%esi
08660794 +0x0fe4:  mov    0x8(%ebp),%eax
08660797 +0x0fe7:  mov    %eax,(%esp)
0866079a +0x0fea:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0866079f +0x0fef:  mov    %eax,%ebx
086607a1 +0x0ff1:  movl   $0x5,0xc(%esp)
086607a9 +0x0ff9:  movl   $0x3bea,0x8(%esp)
086607b1 +0x1001:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
086607b9 +0x1009:  lea    -0xb8(%ebp),%eax
086607bf +0x100f:  mov    %eax,(%esp)
086607c2 +0x1012:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086607c7 +0x1017:  mov    0x18(%ebp),%eax
086607ca +0x101a:  mov    %eax,0x10(%esp)
086607ce +0x101e:  mov    %esi,0xc(%esp)
086607d2 +0x1022:  mov    %ebx,0x8(%esp)
086607d6 +0x1026:  movl   $"delete_item failed %d %d %d",0x4(%esp)
086607de +0x102e:  lea    -0xb8(%ebp),%eax
086607e4 +0x1034:  mov    %eax,(%esp)
086607e7 +0x1037:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086607ec +0x103c:  jmp    08660bf2 <+0x1442>
086607f1 +0x1041:  mov    0x8(%ebp),%eax
086607f4 +0x1044:  mov    %eax,(%esp)
086607f7 +0x1047:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
086607fc +0x104c:  mov    0x20(%ebp),%edx
086607ff +0x104f:  mov    %edx,0x8(%esp)
08660803 +0x1053:  mov    0x10(%ebp),%edx
08660806 +0x1056:  mov    %edx,0x4(%esp)
0866080a +0x105a:  mov    %eax,(%esp)
0866080d +0x105d:  call   0850b904 <_ZN6CCargo9move_itemEii>  ; CCargo::move_item(int, int)
08660812 +0x1062:  xor    $0x1,%eax
08660815 +0x1065:  test   %al,%al
08660817 +0x1067:  je     08660823 <+0x1073>
08660819 +0x1069:  mov    $0x11,%ebx
0866081e +0x106e:  jmp    086624dd <+0x2d2d>
08660823 +0x1073:  mov    0x28(%ebp),%eax
08660826 +0x1076:  mov    0x20(%ebp),%edx
08660829 +0x1079:  mov    %edx,(%eax)
0866082b +0x107b:  mov    $0x0,%ebx
08660830 +0x1080:  jmp    086624dd <+0x2d2d>
08660835 +0x1085:  mov    0x8(%ebp),%eax
08660838 +0x1088:  mov    %eax,(%esp)
0866083b +0x108b:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08660840 +0x1090:  test   %al,%al
08660842 +0x1092:  je     0866084e <+0x109e>
08660844 +0x1094:  mov    $0x13,%ebx
08660849 +0x1099:  jmp    086624dd <+0x2d2d>
0866084e +0x109e:  mov    $0x1,%ebx
08660853 +0x10a3:  jmp    086624dd <+0x2d2d>
08660858 +0x10a8:  mov    $0x1,%ebx
0866085d +0x10ad:  jmp    086624dd <+0x2d2d>
08660862 +0x10b2:  mov    0x8(%ebp),%eax
08660865 +0x10b5:  mov    %eax,(%esp)
08660868 +0x10b8:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0866086d +0x10bd:  test   %al,%al
0866086f +0x10bf:  je     0866087b <+0x10cb>
08660871 +0x10c1:  mov    $0x13,%ebx
08660876 +0x10c6:  jmp    086624dd <+0x2d2d>
0866087b +0x10cb:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08660880 +0x10d0:  movl   $0x1,0x8(%esp)
08660888 +0x10d8:  mov    0x8(%ebp),%edx
0866088b +0x10db:  mov    %edx,0x4(%esp)
0866088f +0x10df:  mov    %eax,(%esp)
08660892 +0x10e2:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08660897 +0x10e7:  mov    %eax,-0x58(%ebp)
0866089a +0x10ea:  cmpl   $0x0,-0x58(%ebp)
0866089e +0x10ee:  je     086608a8 <+0x10f8>
086608a0 +0x10f0:  mov    -0x58(%ebp),%ebx
086608a3 +0x10f3:  jmp    086624dd <+0x2d2d>
086608a8 +0x10f8:  mov    0x8(%ebp),%eax
086608ab +0x10fb:  mov    %eax,(%esp)
086608ae +0x10fe:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
086608b3 +0x1103:  xor    $0x1,%eax
086608b6 +0x1106:  test   %al,%al
086608b8 +0x1108:  je     086608c4 <+0x1114>
086608ba +0x110a:  mov    $0x13,%ebx
086608bf +0x110f:  jmp    086624dd <+0x2d2d>
086608c4 +0x1114:  mov    0x8(%ebp),%eax
086608c7 +0x1117:  mov    %eax,(%esp)
086608ca +0x111a:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
086608cf +0x111f:  mov    %eax,-0x54(%ebp)
086608d2 +0x1122:  mov    0x8(%ebp),%eax
086608d5 +0x1125:  mov    %eax,(%esp)
086608d8 +0x1128:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086608dd +0x112d:  lea    -0x418(%ebp),%edx
086608e3 +0x1133:  mov    0x10(%ebp),%ecx
086608e6 +0x1136:  mov    %ecx,0x8(%esp)
086608ea +0x113a:  mov    %eax,0x4(%esp)
086608ee +0x113e:  mov    %edx,(%esp)
086608f1 +0x1141:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
086608f6 +0x1146:  sub    $0x4,%esp
086608f9 +0x1149:  mov    -0x418(%ebp),%eax
086608ff +0x114f:  mov    %eax,-0x131(%ebp)
08660905 +0x1155:  mov    -0x414(%ebp),%eax
0866090b +0x115b:  mov    %eax,-0x12d(%ebp)
08660911 +0x1161:  mov    -0x410(%ebp),%eax
08660917 +0x1167:  mov    %eax,-0x129(%ebp)
0866091d +0x116d:  mov    -0x40c(%ebp),%eax
08660923 +0x1173:  mov    %eax,-0x125(%ebp)
08660929 +0x1179:  mov    -0x408(%ebp),%eax
0866092f +0x117f:  mov    %eax,-0x121(%ebp)
08660935 +0x1185:  mov    -0x404(%ebp),%eax
0866093b +0x118b:  mov    %eax,-0x11d(%ebp)
08660941 +0x1191:  mov    -0x400(%ebp),%eax
08660947 +0x1197:  mov    %eax,-0x119(%ebp)
0866094d +0x119d:  mov    -0x3fc(%ebp),%eax
08660953 +0x11a3:  mov    %eax,-0x115(%ebp)
08660959 +0x11a9:  mov    -0x3f8(%ebp),%eax
0866095f +0x11af:  mov    %eax,-0x111(%ebp)
08660965 +0x11b5:  mov    -0x3f4(%ebp),%eax
0866096b +0x11bb:  mov    %eax,-0x10d(%ebp)
08660971 +0x11c1:  mov    -0x3f0(%ebp),%eax
08660977 +0x11c7:  mov    %eax,-0x109(%ebp)
0866097d +0x11cd:  mov    -0x3ec(%ebp),%eax
08660983 +0x11d3:  mov    %eax,-0x105(%ebp)
08660989 +0x11d9:  mov    -0x3e8(%ebp),%eax
0866098f +0x11df:  mov    %eax,-0x101(%ebp)
08660995 +0x11e5:  mov    -0x3e4(%ebp),%eax
0866099b +0x11eb:  mov    %eax,-0xfd(%ebp)
086609a1 +0x11f1:  mov    -0x3e0(%ebp),%eax
086609a7 +0x11f7:  mov    %eax,-0xf9(%ebp)
086609ad +0x11fd:  movzbl -0x3dc(%ebp),%eax
086609b4 +0x1204:  mov    %al,-0xf5(%ebp)
086609ba +0x120a:  lea    -0x131(%ebp),%eax
086609c0 +0x1210:  mov    %eax,0x4(%esp)
086609c4 +0x1214:  mov    -0x54(%ebp),%eax
086609c7 +0x1217:  mov    %eax,(%esp)
086609ca +0x121a:  call   08289a4a <_ZN13CAccountCargo20CheckInsertConditionER10Inven_Item>  ; CAccountCargo::CheckInsertCondition(Inven_Item&)
086609cf +0x121f:  xor    $0x1,%eax
086609d2 +0x1222:  test   %al,%al
086609d4 +0x1224:  je     086609e0 <+0x1230>
086609d6 +0x1226:  mov    $0x11,%ebx
086609db +0x122b:  jmp    086624dd <+0x2d2d>
086609e0 +0x1230:  movzbl -0x130(%ebp),%eax
086609e7 +0x1237:  cmp    $0x1,%al
086609e9 +0x1239:  jne    08660a2e <+0x127e>
086609eb +0x123b:  mov    0x20(%ebp),%eax
086609ee +0x123e:  mov    %eax,0x4(%esp)
086609f2 +0x1242:  mov    -0x54(%ebp),%eax
086609f5 +0x1245:  mov    %eax,(%esp)
086609f8 +0x1248:  call   0828a5d4 <_ZN13CAccountCargo14CheckSlotEmptyEi>  ; CAccountCargo::CheckSlotEmpty(int)
086609fd +0x124d:  xor    $0x1,%eax
08660a00 +0x1250:  test   %al,%al
08660a02 +0x1252:  je     08660afa <+0x134a>
08660a08 +0x1258:  mov    -0x54(%ebp),%eax
08660a0b +0x125b:  mov    %eax,(%esp)
08660a0e +0x125e:  call   0828a580 <_ZN13CAccountCargo12GetEmptySlotEv>  ; CAccountCargo::GetEmptySlot()
08660a13 +0x1263:  mov    %eax,0x20(%ebp)
08660a16 +0x1266:  mov    0x20(%ebp),%eax
08660a19 +0x1269:  shr    $0x1f,%eax
08660a1c +0x126c:  test   %al,%al
08660a1e +0x126e:  je     08660afa <+0x134a>
08660a24 +0x1274:  mov    $0x4,%ebx
08660a29 +0x1279:  jmp    086624dd <+0x2d2d>
08660a2e +0x127e:  lea    -0x131(%ebp),%eax
08660a34 +0x1284:  mov    %eax,(%esp)
08660a37 +0x1287:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08660a3c +0x128c:  cmp    0x18(%ebp),%eax
08660a3f +0x128f:  setl   %al
08660a42 +0x1292:  test   %al,%al
08660a44 +0x1294:  je     08660a50 <+0x12a0>
08660a46 +0x1296:  mov    $0x11,%ebx
08660a4b +0x129b:  jmp    086624dd <+0x2d2d>
08660a50 +0x12a0:  mov    0x18(%ebp),%eax
08660a53 +0x12a3:  mov    %eax,0x4(%esp)
08660a57 +0x12a7:  lea    -0x131(%ebp),%eax
08660a5d +0x12ad:  mov    %eax,(%esp)
08660a60 +0x12b0:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08660a65 +0x12b5:  mov    -0x12f(%ebp),%eax
08660a6b +0x12bb:  mov    %eax,0x4(%esp)
08660a6f +0x12bf:  mov    -0x54(%ebp),%eax
08660a72 +0x12c2:  mov    %eax,(%esp)
08660a75 +0x12c5:  call   0828a61a <_ZN13CAccountCargo19GetSpecificItemSlotEi>  ; CAccountCargo::GetSpecificItemSlot(int)
08660a7a +0x12ca:  mov    %eax,-0x4c(%ebp)
08660a7d +0x12cd:  cmpl   $0x0,-0x4c(%ebp)
08660a81 +0x12d1:  js     08660abf <+0x130f>
08660a83 +0x12d3:  mov    -0x12f(%ebp),%eax
08660a89 +0x12d9:  mov    0x18(%ebp),%edx
08660a8c +0x12dc:  mov    %edx,0xc(%esp)
08660a90 +0x12e0:  mov    %eax,0x8(%esp)
08660a94 +0x12e4:  mov    -0x4c(%ebp),%eax
08660a97 +0x12e7:  mov    %eax,0x4(%esp)
08660a9b +0x12eb:  mov    -0x54(%ebp),%eax
08660a9e +0x12ee:  mov    %eax,(%esp)
08660aa1 +0x12f1:  call   0828a670 <_ZN13CAccountCargo15CheckStackLimitEiii>  ; CAccountCargo::CheckStackLimit(int, int, int)
08660aa6 +0x12f6:  xor    $0x1,%eax
08660aa9 +0x12f9:  test   %al,%al
08660aab +0x12fb:  je     08660ab7 <+0x1307>
08660aad +0x12fd:  mov    $0x4,%ebx
08660ab2 +0x1302:  jmp    086624dd <+0x2d2d>
08660ab7 +0x1307:  mov    -0x4c(%ebp),%eax
08660aba +0x130a:  mov    %eax,0x20(%ebp)
08660abd +0x130d:  jmp    08660afa <+0x134a>
08660abf +0x130f:  mov    0x20(%ebp),%eax
08660ac2 +0x1312:  mov    %eax,0x4(%esp)
08660ac6 +0x1316:  mov    -0x54(%ebp),%eax
08660ac9 +0x1319:  mov    %eax,(%esp)
08660acc +0x131c:  call   0828a5d4 <_ZN13CAccountCargo14CheckSlotEmptyEi>  ; CAccountCargo::CheckSlotEmpty(int)
08660ad1 +0x1321:  xor    $0x1,%eax
08660ad4 +0x1324:  test   %al,%al
08660ad6 +0x1326:  je     08660afa <+0x134a>
08660ad8 +0x1328:  mov    -0x54(%ebp),%eax
08660adb +0x132b:  mov    %eax,(%esp)
08660ade +0x132e:  call   0828a580 <_ZN13CAccountCargo12GetEmptySlotEv>  ; CAccountCargo::GetEmptySlot()
08660ae3 +0x1333:  mov    %eax,0x20(%ebp)
08660ae6 +0x1336:  mov    0x20(%ebp),%eax
08660ae9 +0x1339:  shr    $0x1f,%eax
08660aec +0x133c:  test   %al,%al
08660aee +0x133e:  je     08660afa <+0x134a>
08660af0 +0x1340:  mov    $0x4,%ebx
08660af5 +0x1345:  jmp    086624dd <+0x2d2d>
08660afa +0x134a:  mov    0x8(%ebp),%eax
08660afd +0x134d:  mov    %eax,(%esp)
08660b00 +0x1350:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08660b05 +0x1355:  movl   $0x25,0xc(%esp)
08660b0d +0x135d:  mov    0x18(%ebp),%edx
08660b10 +0x1360:  mov    %edx,0x8(%esp)
08660b14 +0x1364:  mov    0x10(%ebp),%edx
08660b17 +0x1367:  mov    %edx,0x4(%esp)
08660b1b +0x136b:  mov    %eax,(%esp)
08660b1e +0x136e:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
08660b23 +0x1373:  mov    %al,-0x4d(%ebp)
08660b26 +0x1376:  cmpb   $0x0,-0x4d(%ebp)
08660b2a +0x137a:  je     08660be6 <+0x1436>
08660b30 +0x1380:  mov    0x20(%ebp),%eax
08660b33 +0x1383:  mov    %eax,0x8(%esp)
08660b37 +0x1387:  lea    -0x131(%ebp),%eax
08660b3d +0x138d:  mov    %eax,0x4(%esp)
08660b41 +0x1391:  mov    -0x54(%ebp),%eax
08660b44 +0x1394:  mov    %eax,(%esp)
08660b47 +0x1397:  call   08289c82 <_ZN13CAccountCargo10InsertItemER10Inven_Itemi>  ; CAccountCargo::InsertItem(Inven_Item&, int)
08660b4c +0x139c:  mov    0x28(%ebp),%edx
08660b4f +0x139f:  mov    %eax,(%edx)
08660b51 +0x13a1:  mov    0x28(%ebp),%eax
08660b54 +0x13a4:  mov    (%eax),%edx
08660b56 +0x13a6:  lea    -0x225(%ebp),%eax
08660b5c +0x13ac:  mov    %edx,0x8(%esp)
08660b60 +0x13b0:  mov    -0x54(%ebp),%edx
08660b63 +0x13b3:  mov    %edx,0x4(%esp)
08660b67 +0x13b7:  mov    %eax,(%esp)
08660b6a +0x13ba:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
08660b6f +0x13bf:  sub    $0x4,%esp
08660b72 +0x13c2:  movzbl -0x224(%ebp),%eax
08660b79 +0x13c9:  cmp    $0x1,%al
08660b7b +0x13cb:  jne    08660bb2 <+0x1402>
08660b7d +0x13cd:  mov    -0x223(%ebp),%eax
08660b83 +0x13d3:  mov    0x8(%ebp),%edx
08660b86 +0x13d6:  add    $0x79700,%edx
08660b8c +0x13dc:  movl   $0x2e,0x10(%esp)
08660b94 +0x13e4:  movl   $0x1,0xc(%esp)
08660b9c +0x13ec:  movl   $0x1,0x8(%esp)
08660ba4 +0x13f4:  mov    %eax,0x4(%esp)
08660ba8 +0x13f8:  mov    %edx,(%esp)
08660bab +0x13fb:  call   086868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>  ; cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
08660bb0 +0x1400:  jmp    08660be6 <+0x1436>
08660bb2 +0x1402:  mov    -0x21e(%ebp),%edx
08660bb8 +0x1408:  mov    -0x223(%ebp),%eax
08660bbe +0x140e:  mov    0x8(%ebp),%ecx
08660bc1 +0x1411:  lea    0x79700(%ecx),%ebx
08660bc7 +0x1417:  movl   $0x2e,0x10(%esp)
08660bcf +0x141f:  mov    0x18(%ebp),%ecx
08660bd2 +0x1422:  mov    %ecx,0xc(%esp)
08660bd6 +0x1426:  mov    %edx,0x8(%esp)
08660bda +0x142a:  mov    %eax,0x4(%esp)
08660bde +0x142e:  mov    %ebx,(%esp)
08660be1 +0x1431:  call   086868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>  ; cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
08660be6 +0x1436:  jmp    08660bf2 <+0x1442>
08660be8 +0x1438:  mov    $0x1,%ebx
08660bed +0x143d:  jmp    086624dd <+0x2d2d>
08660bf2 +0x1442:  jmp    086624b8 <+0x2d08>
08660bf7 +0x1447:  cmpl   $0x7,0x1c(%ebp)
08660bfb +0x144b:  ja     08660fa0 <+0x17f0>
08660c01 +0x1451:  mov    0x1c(%ebp),%eax
08660c04 +0x1454:  shl    $0x2,%eax
08660c07 +0x1457:  mov    &data#84ea1dd5(.rodata)(%eax),%eax
08660c0d +0x145d:  jmp    *%eax
08660c0f +0x145f:  mov    0x8(%ebp),%eax
08660c12 +0x1462:  mov    %eax,(%esp)
08660c15 +0x1465:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08660c1a +0x146a:  lea    -0x262(%ebp),%edx
08660c20 +0x1470:  mov    0x10(%ebp),%ecx
08660c23 +0x1473:  mov    %ecx,0xc(%esp)
08660c27 +0x1477:  movl   $0x0,0x8(%esp)
08660c2f +0x147f:  mov    %eax,0x4(%esp)
08660c33 +0x1483:  mov    %edx,(%esp)
08660c36 +0x1486:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08660c3b +0x148b:  sub    $0x4,%esp
08660c3e +0x148e:  mov    0x8(%ebp),%eax
08660c41 +0x1491:  mov    %eax,(%esp)
08660c44 +0x1494:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08660c49 +0x1499:  lea    -0x29f(%ebp),%edx
08660c4f +0x149f:  mov    0x20(%ebp),%ecx
08660c52 +0x14a2:  mov    %ecx,0xc(%esp)
08660c56 +0x14a6:  movl   $0x2,0x8(%esp)
08660c5e +0x14ae:  mov    %eax,0x4(%esp)
08660c62 +0x14b2:  mov    %edx,(%esp)
08660c65 +0x14b5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08660c6a +0x14ba:  sub    $0x4,%esp
08660c6d +0x14bd:  mov    -0x25b(%ebp),%eax
08660c73 +0x14c3:  mov    %eax,(%esp)
08660c76 +0x14c6:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
08660c7b +0x14cb:  test   %al,%al
08660c7d +0x14cd:  jne    08660c91 <+0x14e1>
08660c7f +0x14cf:  mov    -0x298(%ebp),%eax
08660c85 +0x14d5:  mov    %eax,(%esp)
08660c88 +0x14d8:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
08660c8d +0x14dd:  test   %al,%al
08660c8f +0x14df:  je     08660c98 <+0x14e8>
08660c91 +0x14e1:  mov    $0x1,%eax
08660c96 +0x14e6:  jmp    08660c9d <+0x14ed>
08660c98 +0x14e8:  mov    $0x0,%eax
08660c9d +0x14ed:  test   %al,%al
08660c9f +0x14ef:  je     08660cab <+0x14fb>
08660ca1 +0x14f1:  mov    $0x13,%ebx
08660ca6 +0x14f6:  jmp    086624dd <+0x2d2d>
08660cab +0x14fb:  mov    0x10(%ebp),%eax
08660cae +0x14fe:  cwtl
08660caf +0x14ff:  mov    0x20(%ebp),%edx
08660cb2 +0x1502:  mov    %edx,0xc(%esp)
08660cb6 +0x1506:  mov    %eax,0x8(%esp)
08660cba +0x150a:  mov    0xc(%ebp),%eax
08660cbd +0x150d:  mov    %eax,0x4(%esp)
08660cc1 +0x1511:  mov    0x8(%ebp),%eax
08660cc4 +0x1514:  mov    %eax,(%esp)
08660cc7 +0x1517:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
08660ccc +0x151c:  mov    %eax,-0x88(%ebp)
08660cd2 +0x1522:  cmpl   $0x0,-0x88(%ebp)
08660cd9 +0x1529:  jle    08660ce6 <+0x1536>
08660cdb +0x152b:  mov    -0x88(%ebp),%ebx
08660ce1 +0x1531:  jmp    086624dd <+0x2d2d>
08660ce6 +0x1536:  mov    0x28(%ebp),%eax
08660ce9 +0x1539:  mov    0x20(%ebp),%edx
08660cec +0x153c:  mov    %edx,(%eax)
08660cee +0x153e:  mov    $0x0,%ebx
08660cf3 +0x1543:  jmp    086624dd <+0x2d2d>
08660cf8 +0x1548:  mov    0x8(%ebp),%eax
08660cfb +0x154b:  mov    %eax,(%esp)
08660cfe +0x154e:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08660d03 +0x1553:  test   %al,%al
08660d05 +0x1555:  je     08660d11 <+0x1561>
08660d07 +0x1557:  mov    $0x13,%ebx
08660d0c +0x155c:  jmp    086624dd <+0x2d2d>
08660d11 +0x1561:  mov    0x20(%ebp),%eax
08660d14 +0x1564:  cwtl
08660d15 +0x1565:  mov    0x10(%ebp),%edx
08660d18 +0x1568:  mov    %edx,0xc(%esp)
08660d1c +0x156c:  mov    %eax,0x8(%esp)
08660d20 +0x1570:  mov    0x1c(%ebp),%eax
08660d23 +0x1573:  mov    %eax,0x4(%esp)
08660d27 +0x1577:  mov    0x8(%ebp),%eax
08660d2a +0x157a:  mov    %eax,(%esp)
08660d2d +0x157d:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
08660d32 +0x1582:  mov    %eax,-0x88(%ebp)
08660d38 +0x1588:  cmpl   $0x0,-0x88(%ebp)
08660d3f +0x158f:  je     08660d4c <+0x159c>
08660d41 +0x1591:  mov    -0x88(%ebp),%ebx
08660d47 +0x1597:  jmp    086624dd <+0x2d2d>
08660d4c +0x159c:  mov    0x28(%ebp),%eax
08660d4f +0x159f:  mov    0x10(%ebp),%edx
08660d52 +0x15a2:  mov    %edx,(%eax)
08660d54 +0x15a4:  mov    $0x0,%ebx
08660d59 +0x15a9:  jmp    086624dd <+0x2d2d>
08660d5e +0x15ae:  mov    0x8(%ebp),%eax
08660d61 +0x15b1:  mov    %eax,(%esp)
08660d64 +0x15b4:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08660d69 +0x15b9:  test   %al,%al
08660d6b +0x15bb:  je     08660d77 <+0x15c7>
08660d6d +0x15bd:  mov    $0x13,%ebx
08660d72 +0x15c2:  jmp    086624dd <+0x2d2d>
08660d77 +0x15c7:  mov    $0x1,%ebx
08660d7c +0x15cc:  jmp    086624dd <+0x2d2d>
08660d81 +0x15d1:  mov    0x8(%ebp),%eax
08660d84 +0x15d4:  movzwl 0x8d002(%eax),%eax
08660d8b +0x15db:  movswl %ax,%ebx
08660d8e +0x15de:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08660d93 +0x15e3:  mov    %ebx,0x4(%esp)
08660d97 +0x15e7:  mov    %eax,(%esp)
08660d9a +0x15ea:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
08660d9f +0x15ef:  mov    %eax,-0x84(%ebp)
08660da5 +0x15f5:  cmpl   $0x0,-0x84(%ebp)
08660dac +0x15fc:  jne    08660db8 <+0x1608>
08660dae +0x15fe:  mov    $0x1,%ebx
08660db3 +0x1603:  jmp    086624dd <+0x2d2d>
08660db8 +0x1608:  mov    -0x84(%ebp),%eax
08660dbe +0x160e:  mov    %eax,(%esp)
08660dc1 +0x1611:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
08660dc6 +0x1616:  test   %al,%al
08660dc8 +0x1618:  je     08660de0 <+0x1630>
08660dca +0x161a:  mov    0x8(%ebp),%eax
08660dcd +0x161d:  movw   $0xffff,0x8d002(%eax)
08660dd6 +0x1626:  mov    $0x15,%ebx
08660ddb +0x162b:  jmp    086624dd <+0x2d2d>
08660de0 +0x1630:  mov    -0x84(%ebp),%eax
08660de6 +0x1636:  mov    %eax,(%esp)
08660de9 +0x1639:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
08660dee +0x163e:  xor    $0x1,%eax
08660df1 +0x1641:  test   %al,%al
08660df3 +0x1643:  je     08660e1f <+0x166f>
08660df5 +0x1645:  mov    -0x84(%ebp),%eax
08660dfb +0x164b:  mov    %eax,(%esp)
08660dfe +0x164e:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
08660e03 +0x1653:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08660e08 +0x1658:  mov    -0x84(%ebp),%edx
08660e0e +0x165e:  mov    %edx,0x4(%esp)
08660e12 +0x1662:  mov    %eax,(%esp)
08660e15 +0x1665:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
08660e1a +0x166a:  jmp    08660faa <+0x17fa>
08660e1f +0x166f:  mov    -0x84(%ebp),%eax
08660e25 +0x1675:  mov    %eax,(%esp)
08660e28 +0x1678:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
08660e2d +0x167d:  test   %al,%al
08660e2f +0x167f:  je     08660e3b <+0x168b>
08660e31 +0x1681:  mov    $0x11,%ebx
08660e36 +0x1686:  jmp    086624dd <+0x2d2d>
08660e3b +0x168b:  mov    0x18(%ebp),%eax
08660e3e +0x168e:  mov    %eax,0x10(%esp)
08660e42 +0x1692:  mov    0x10(%ebp),%eax
08660e45 +0x1695:  mov    %eax,0xc(%esp)
08660e49 +0x1699:  movl   $0x3,0x8(%esp)
08660e51 +0x16a1:  mov    0x8(%ebp),%eax
08660e54 +0x16a4:  mov    %eax,0x4(%esp)
08660e58 +0x16a8:  mov    -0x84(%ebp),%eax
08660e5e +0x16ae:  mov    %eax,(%esp)
08660e61 +0x16b1:  call   08529e7e <_ZN11CTradeSpace11regist_itemEP5CUseriii>  ; CTradeSpace::regist_item(CUser*, int, int, int)
08660e66 +0x16b6:  mov    %eax,-0x88(%ebp)
08660e6c +0x16bc:  cmpl   $0x0,-0x88(%ebp)
08660e73 +0x16c3:  jns    08660e7f <+0x16cf>
08660e75 +0x16c5:  mov    $0x11,%ebx
08660e7a +0x16ca:  jmp    086624dd <+0x2d2d>
08660e7f +0x16cf:  mov    0x28(%ebp),%eax
08660e82 +0x16d2:  mov    -0x88(%ebp),%edx
08660e88 +0x16d8:  mov    %edx,(%eax)
08660e8a +0x16da:  mov    0x10(%ebp),%eax
08660e8d +0x16dd:  mov    %eax,0x4(%esp)
08660e91 +0x16e1:  mov    0x8(%ebp),%eax
08660e94 +0x16e4:  mov    %eax,(%esp)
08660e97 +0x16e7:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08660e9c +0x16ec:  jmp    08660faa <+0x17fa>
08660ea1 +0x16f1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08660ea6 +0x16f6:  mov    %eax,(%esp)
08660ea9 +0x16f9:  call   0869779e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ff3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ff3
08660eae +0x16fe:  test   %al,%al
08660eb0 +0x1700:  je     08660f2e <+0x177e>
08660eb2 +0x1702:  mov    0x8(%ebp),%eax
08660eb5 +0x1705:  mov    %eax,(%esp)
08660eb8 +0x1708:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08660ebd +0x170d:  mov    0x20(%ebp),%edx
08660ec0 +0x1710:  mov    %edx,0x8(%esp)
08660ec4 +0x1714:  movl   $0x3,0x4(%esp)
08660ecc +0x171c:  mov    %eax,(%esp)
08660ecf +0x171f:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08660ed4 +0x1724:  mov    %eax,-0x44(%ebp)
08660ed7 +0x1727:  mov    -0x44(%ebp),%eax
08660eda +0x172a:  mov    %eax,(%esp)
08660edd +0x172d:  call   08560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
08660ee2 +0x1732:  xor    $0x1,%eax
08660ee5 +0x1735:  test   %al,%al
08660ee7 +0x1737:  je     08660f2e <+0x177e>
08660ee9 +0x1739:  movl   $0x0,0xc(%esp)
08660ef1 +0x1741:  movl   $"game_server_msg_146",0x8(%esp)
08660ef9 +0x1749:  movl   $0x4,0x4(%esp)
08660f01 +0x1751:  movl   $&g_scriptStringManager_,(%esp)
08660f08 +0x1758:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08660f0d +0x175d:  movl   $0x0,0x8(%esp)
08660f15 +0x1765:  mov    %eax,0x4(%esp)
08660f19 +0x1769:  mov    0x8(%ebp),%eax
08660f1c +0x176c:  mov    %eax,(%esp)
08660f1f +0x176f:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
08660f24 +0x1774:  mov    $0x1,%ebx
08660f29 +0x1779:  jmp    086624dd <+0x2d2d>
08660f2e +0x177e:  movl   $0x0,-0x48(%ebp)
08660f35 +0x1785:  mov    0x8(%ebp),%eax
08660f38 +0x1788:  mov    %eax,(%esp)
08660f3b +0x178b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08660f40 +0x1790:  mov    0x20(%ebp),%edx
08660f43 +0x1793:  mov    %edx,0x10(%esp)
08660f47 +0x1797:  movl   $0x3,0xc(%esp)
08660f4f +0x179f:  mov    0x10(%ebp),%edx
08660f52 +0x17a2:  mov    %edx,0x8(%esp)
08660f56 +0x17a6:  movl   $0x0,0x4(%esp)
08660f5e +0x17ae:  mov    %eax,(%esp)
08660f61 +0x17b1:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
08660f66 +0x17b6:  mov    %eax,-0x48(%ebp)
08660f69 +0x17b9:  cmpl   $0x0,-0x48(%ebp)
08660f6d +0x17bd:  setne  %al
08660f70 +0x17c0:  test   %al,%al
08660f72 +0x17c2:  je     08660f7c <+0x17cc>
08660f74 +0x17c4:  mov    -0x48(%ebp),%ebx
08660f77 +0x17c7:  jmp    086624dd <+0x2d2d>
08660f7c +0x17cc:  mov    0x28(%ebp),%eax
08660f7f +0x17cf:  mov    0x20(%ebp),%edx
08660f82 +0x17d2:  mov    %edx,(%eax)
08660f84 +0x17d4:  mov    0x20(%ebp),%eax
08660f87 +0x17d7:  mov    %eax,0x4(%esp)
08660f8b +0x17db:  mov    0x8(%ebp),%eax
08660f8e +0x17de:  mov    %eax,(%esp)
08660f91 +0x17e1:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08660f96 +0x17e6:  mov    $0x0,%ebx
08660f9b +0x17eb:  jmp    086624dd <+0x2d2d>
08660fa0 +0x17f0:  mov    $0x1,%ebx
08660fa5 +0x17f5:  jmp    086624dd <+0x2d2d>
08660faa +0x17fa:  jmp    086624b8 <+0x2d08>
08660faf +0x17ff:  cmpl   $0x7,0x1c(%ebp)
08660fb3 +0x1803:  ja     086610ff <+0x194f>
08660fb9 +0x1809:  mov    0x1c(%ebp),%eax
08660fbc +0x180c:  mov    $0x1,%edx
08660fc1 +0x1811:  mov    %edx,%ebx
08660fc3 +0x1813:  mov    %eax,%ecx
08660fc5 +0x1815:  shl    %cl,%ebx
08660fc7 +0x1817:  mov    %ebx,%eax
08660fc9 +0x1819:  and    $0x8b,%eax
08660fce +0x181e:  test   %eax,%eax
08660fd0 +0x1820:  je     086610ff <+0x194f>
08660fd6 +0x1826:  mov    0x8(%ebp),%eax
08660fd9 +0x1829:  movzwl 0x8d002(%eax),%eax
08660fe0 +0x1830:  movswl %ax,%ebx
08660fe3 +0x1833:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08660fe8 +0x1838:  mov    %ebx,0x4(%esp)
08660fec +0x183c:  mov    %eax,(%esp)
08660fef +0x183f:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
08660ff4 +0x1844:  mov    %eax,-0x84(%ebp)
08660ffa +0x184a:  cmpl   $0x0,-0x84(%ebp)
08661001 +0x1851:  jne    0866100d <+0x185d>
08661003 +0x1853:  mov    $0x1,%ebx
08661008 +0x1858:  jmp    086624dd <+0x2d2d>
0866100d +0x185d:  mov    -0x84(%ebp),%eax
08661013 +0x1863:  mov    %eax,(%esp)
08661016 +0x1866:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
0866101b +0x186b:  test   %al,%al
0866101d +0x186d:  je     08661035 <+0x1885>
0866101f +0x186f:  mov    0x8(%ebp),%eax
08661022 +0x1872:  movw   $0xffff,0x8d002(%eax)
0866102b +0x187b:  mov    $0x15,%ebx
08661030 +0x1880:  jmp    086624dd <+0x2d2d>
08661035 +0x1885:  mov    -0x84(%ebp),%eax
0866103b +0x188b:  mov    %eax,(%esp)
0866103e +0x188e:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
08661043 +0x1893:  xor    $0x1,%eax
08661046 +0x1896:  test   %al,%al
08661048 +0x1898:  je     08661074 <+0x18c4>
0866104a +0x189a:  mov    -0x84(%ebp),%eax
08661050 +0x18a0:  mov    %eax,(%esp)
08661053 +0x18a3:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
08661058 +0x18a8:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0866105d +0x18ad:  mov    -0x84(%ebp),%edx
08661063 +0x18b3:  mov    %edx,0x4(%esp)
08661067 +0x18b7:  mov    %eax,(%esp)
0866106a +0x18ba:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
0866106f +0x18bf:  jmp    08661109 <+0x1959>
08661074 +0x18c4:  mov    -0x84(%ebp),%eax
0866107a +0x18ca:  mov    %eax,(%esp)
0866107d +0x18cd:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
08661082 +0x18d2:  test   %al,%al
08661084 +0x18d4:  je     08661090 <+0x18e0>
08661086 +0x18d6:  mov    $0x11,%ebx
0866108b +0x18db:  jmp    086624dd <+0x2d2d>
08661090 +0x18e0:  mov    0x18(%ebp),%eax
08661093 +0x18e3:  mov    %eax,0x14(%esp)
08661097 +0x18e7:  mov    0x20(%ebp),%eax
0866109a +0x18ea:  mov    %eax,0x10(%esp)
0866109e +0x18ee:  mov    0x1c(%ebp),%eax
086610a1 +0x18f1:  mov    %eax,0xc(%esp)
086610a5 +0x18f5:  mov    0x10(%ebp),%eax
086610a8 +0x18f8:  mov    %eax,0x8(%esp)
086610ac +0x18fc:  mov    0x8(%ebp),%eax
086610af +0x18ff:  mov    %eax,0x4(%esp)
086610b3 +0x1903:  mov    -0x84(%ebp),%eax
086610b9 +0x1909:  mov    %eax,(%esp)
086610bc +0x190c:  call   0852bfcc <_ZN11CTradeSpace11remove_itemEP5CUseriiii>  ; CTradeSpace::remove_item(CUser*, int, int, int, int)
086610c1 +0x1911:  mov    %eax,-0x88(%ebp)
086610c7 +0x1917:  cmpl   $0x0,-0x88(%ebp)
086610ce +0x191e:  jns    086610da <+0x192a>
086610d0 +0x1920:  mov    $0x11,%ebx
086610d5 +0x1925:  jmp    086624dd <+0x2d2d>
086610da +0x192a:  mov    0x28(%ebp),%eax
086610dd +0x192d:  mov    -0x88(%ebp),%edx
086610e3 +0x1933:  mov    %edx,(%eax)
086610e5 +0x1935:  cmpl   $0x3,0x1c(%ebp)
086610e9 +0x1939:  jne    086610fd <+0x194d>
086610eb +0x193b:  mov    0x20(%ebp),%eax
086610ee +0x193e:  mov    %eax,0x4(%esp)
086610f2 +0x1942:  mov    0x8(%ebp),%eax
086610f5 +0x1945:  mov    %eax,(%esp)
086610f8 +0x1948:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
086610fd +0x194d:  jmp    08661109 <+0x1959>
086610ff +0x194f:  mov    $0x1,%ebx
08661104 +0x1954:  jmp    086624dd <+0x2d2d>
08661109 +0x1959:  jmp    086624b8 <+0x2d08>
0866110e +0x195e:  lea    -0x2dc(%ebp),%eax
08661114 +0x1964:  mov    %eax,(%esp)
08661117 +0x1967:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866111c +0x196c:  lea    -0x319(%ebp),%eax
08661122 +0x1972:  mov    %eax,(%esp)
08661125 +0x1975:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866112a +0x197a:  mov    0x1c(%ebp),%eax
0866112d +0x197d:  cmp    $0x3,%eax
08661130 +0x1980:  je     08661149 <+0x1999>
08661132 +0x1982:  cmp    $0x4,%eax
08661135 +0x1985:  je     08661513 <+0x1d63>
0866113b +0x198b:  cmp    $0x1,%eax
0866113e +0x198e:  je     0866132e <+0x1b7e>
08661144 +0x1994:  jmp    08661603 <+0x1e53>
08661149 +0x1999:  mov    0x8(%ebp),%eax
0866114c +0x199c:  mov    %eax,(%esp)
0866114f +0x199f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08661154 +0x19a4:  lea    -0x418(%ebp),%edx
0866115a +0x19aa:  mov    0x10(%ebp),%ecx
0866115d +0x19ad:  mov    %ecx,0xc(%esp)
08661161 +0x19b1:  movl   $0x2,0x8(%esp)
08661169 +0x19b9:  mov    %eax,0x4(%esp)
0866116d +0x19bd:  mov    %edx,(%esp)
08661170 +0x19c0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08661175 +0x19c5:  sub    $0x4,%esp
08661178 +0x19c8:  mov    -0x418(%ebp),%eax
0866117e +0x19ce:  mov    %eax,-0x319(%ebp)
08661184 +0x19d4:  mov    -0x414(%ebp),%eax
0866118a +0x19da:  mov    %eax,-0x315(%ebp)
08661190 +0x19e0:  mov    -0x410(%ebp),%eax
08661196 +0x19e6:  mov    %eax,-0x311(%ebp)
0866119c +0x19ec:  mov    -0x40c(%ebp),%eax
086611a2 +0x19f2:  mov    %eax,-0x30d(%ebp)
086611a8 +0x19f8:  mov    -0x408(%ebp),%eax
086611ae +0x19fe:  mov    %eax,-0x309(%ebp)
086611b4 +0x1a04:  mov    -0x404(%ebp),%eax
086611ba +0x1a0a:  mov    %eax,-0x305(%ebp)
086611c0 +0x1a10:  mov    -0x400(%ebp),%eax
086611c6 +0x1a16:  mov    %eax,-0x301(%ebp)
086611cc +0x1a1c:  mov    -0x3fc(%ebp),%eax
086611d2 +0x1a22:  mov    %eax,-0x2fd(%ebp)
086611d8 +0x1a28:  mov    -0x3f8(%ebp),%eax
086611de +0x1a2e:  mov    %eax,-0x2f9(%ebp)
086611e4 +0x1a34:  mov    -0x3f4(%ebp),%eax
086611ea +0x1a3a:  mov    %eax,-0x2f5(%ebp)
086611f0 +0x1a40:  mov    -0x3f0(%ebp),%eax
086611f6 +0x1a46:  mov    %eax,-0x2f1(%ebp)
086611fc +0x1a4c:  mov    -0x3ec(%ebp),%eax
08661202 +0x1a52:  mov    %eax,-0x2ed(%ebp)
08661208 +0x1a58:  mov    -0x3e8(%ebp),%eax
0866120e +0x1a5e:  mov    %eax,-0x2e9(%ebp)
08661214 +0x1a64:  mov    -0x3e4(%ebp),%eax
0866121a +0x1a6a:  mov    %eax,-0x2e5(%ebp)
08661220 +0x1a70:  mov    -0x3e0(%ebp),%eax
08661226 +0x1a76:  mov    %eax,-0x2e1(%ebp)
0866122c +0x1a7c:  movzbl -0x3dc(%ebp),%eax
08661233 +0x1a83:  mov    %al,-0x2dd(%ebp)
08661239 +0x1a89:  mov    0x8(%ebp),%eax
0866123c +0x1a8c:  mov    %eax,(%esp)
0866123f +0x1a8f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08661244 +0x1a94:  lea    -0x418(%ebp),%edx
0866124a +0x1a9a:  mov    0x20(%ebp),%ecx
0866124d +0x1a9d:  mov    %ecx,0xc(%esp)
08661251 +0x1aa1:  movl   $0x0,0x8(%esp)
08661259 +0x1aa9:  mov    %eax,0x4(%esp)
0866125d +0x1aad:  mov    %edx,(%esp)
08661260 +0x1ab0:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08661265 +0x1ab5:  sub    $0x4,%esp
08661268 +0x1ab8:  mov    -0x418(%ebp),%eax
0866126e +0x1abe:  mov    %eax,-0x2dc(%ebp)
08661274 +0x1ac4:  mov    -0x414(%ebp),%eax
0866127a +0x1aca:  mov    %eax,-0x2d8(%ebp)
08661280 +0x1ad0:  mov    -0x410(%ebp),%eax
08661286 +0x1ad6:  mov    %eax,-0x2d4(%ebp)
0866128c +0x1adc:  mov    -0x40c(%ebp),%eax
08661292 +0x1ae2:  mov    %eax,-0x2d0(%ebp)
08661298 +0x1ae8:  mov    -0x408(%ebp),%eax
0866129e +0x1aee:  mov    %eax,-0x2cc(%ebp)
086612a4 +0x1af4:  mov    -0x404(%ebp),%eax
086612aa +0x1afa:  mov    %eax,-0x2c8(%ebp)
086612b0 +0x1b00:  mov    -0x400(%ebp),%eax
086612b6 +0x1b06:  mov    %eax,-0x2c4(%ebp)
086612bc +0x1b0c:  mov    -0x3fc(%ebp),%eax
086612c2 +0x1b12:  mov    %eax,-0x2c0(%ebp)
086612c8 +0x1b18:  mov    -0x3f8(%ebp),%eax
086612ce +0x1b1e:  mov    %eax,-0x2bc(%ebp)
086612d4 +0x1b24:  mov    -0x3f4(%ebp),%eax
086612da +0x1b2a:  mov    %eax,-0x2b8(%ebp)
086612e0 +0x1b30:  mov    -0x3f0(%ebp),%eax
086612e6 +0x1b36:  mov    %eax,-0x2b4(%ebp)
086612ec +0x1b3c:  mov    -0x3ec(%ebp),%eax
086612f2 +0x1b42:  mov    %eax,-0x2b0(%ebp)
086612f8 +0x1b48:  mov    -0x3e8(%ebp),%eax
086612fe +0x1b4e:  mov    %eax,-0x2ac(%ebp)
08661304 +0x1b54:  mov    -0x3e4(%ebp),%eax
0866130a +0x1b5a:  mov    %eax,-0x2a8(%ebp)
08661310 +0x1b60:  mov    -0x3e0(%ebp),%eax
08661316 +0x1b66:  mov    %eax,-0x2a4(%ebp)
0866131c +0x1b6c:  movzbl -0x3dc(%ebp),%eax
08661323 +0x1b73:  mov    %al,-0x2a0(%ebp)
08661329 +0x1b79:  jmp    08661603 <+0x1e53>
0866132e +0x1b7e:  mov    0x8(%ebp),%eax
08661331 +0x1b81:  mov    %eax,(%esp)
08661334 +0x1b84:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08661339 +0x1b89:  lea    -0x418(%ebp),%edx
0866133f +0x1b8f:  mov    0x10(%ebp),%ecx
08661342 +0x1b92:  mov    %ecx,0xc(%esp)
08661346 +0x1b96:  movl   $0x2,0x8(%esp)
0866134e +0x1b9e:  mov    %eax,0x4(%esp)
08661352 +0x1ba2:  mov    %edx,(%esp)
08661355 +0x1ba5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0866135a +0x1baa:  sub    $0x4,%esp
0866135d +0x1bad:  mov    -0x418(%ebp),%eax
08661363 +0x1bb3:  mov    %eax,-0x319(%ebp)
08661369 +0x1bb9:  mov    -0x414(%ebp),%eax
0866136f +0x1bbf:  mov    %eax,-0x315(%ebp)
08661375 +0x1bc5:  mov    -0x410(%ebp),%eax
0866137b +0x1bcb:  mov    %eax,-0x311(%ebp)
08661381 +0x1bd1:  mov    -0x40c(%ebp),%eax
08661387 +0x1bd7:  mov    %eax,-0x30d(%ebp)
0866138d +0x1bdd:  mov    -0x408(%ebp),%eax
08661393 +0x1be3:  mov    %eax,-0x309(%ebp)
08661399 +0x1be9:  mov    -0x404(%ebp),%eax
0866139f +0x1bef:  mov    %eax,-0x305(%ebp)
086613a5 +0x1bf5:  mov    -0x400(%ebp),%eax
086613ab +0x1bfb:  mov    %eax,-0x301(%ebp)
086613b1 +0x1c01:  mov    -0x3fc(%ebp),%eax
086613b7 +0x1c07:  mov    %eax,-0x2fd(%ebp)
086613bd +0x1c0d:  mov    -0x3f8(%ebp),%eax
086613c3 +0x1c13:  mov    %eax,-0x2f9(%ebp)
086613c9 +0x1c19:  mov    -0x3f4(%ebp),%eax
086613cf +0x1c1f:  mov    %eax,-0x2f5(%ebp)
086613d5 +0x1c25:  mov    -0x3f0(%ebp),%eax
086613db +0x1c2b:  mov    %eax,-0x2f1(%ebp)
086613e1 +0x1c31:  mov    -0x3ec(%ebp),%eax
086613e7 +0x1c37:  mov    %eax,-0x2ed(%ebp)
086613ed +0x1c3d:  mov    -0x3e8(%ebp),%eax
086613f3 +0x1c43:  mov    %eax,-0x2e9(%ebp)
086613f9 +0x1c49:  mov    -0x3e4(%ebp),%eax
086613ff +0x1c4f:  mov    %eax,-0x2e5(%ebp)
08661405 +0x1c55:  mov    -0x3e0(%ebp),%eax
0866140b +0x1c5b:  mov    %eax,-0x2e1(%ebp)
08661411 +0x1c61:  movzbl -0x3dc(%ebp),%eax
08661418 +0x1c68:  mov    %al,-0x2dd(%ebp)
0866141e +0x1c6e:  mov    0x8(%ebp),%eax
08661421 +0x1c71:  mov    %eax,(%esp)
08661424 +0x1c74:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08661429 +0x1c79:  lea    -0x418(%ebp),%edx
0866142f +0x1c7f:  mov    0x20(%ebp),%ecx
08661432 +0x1c82:  mov    %ecx,0xc(%esp)
08661436 +0x1c86:  movl   $0x2,0x8(%esp)
0866143e +0x1c8e:  mov    %eax,0x4(%esp)
08661442 +0x1c92:  mov    %edx,(%esp)
08661445 +0x1c95:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0866144a +0x1c9a:  sub    $0x4,%esp
0866144d +0x1c9d:  mov    -0x418(%ebp),%eax
08661453 +0x1ca3:  mov    %eax,-0x2dc(%ebp)
08661459 +0x1ca9:  mov    -0x414(%ebp),%eax
0866145f +0x1caf:  mov    %eax,-0x2d8(%ebp)
08661465 +0x1cb5:  mov    -0x410(%ebp),%eax
0866146b +0x1cbb:  mov    %eax,-0x2d4(%ebp)
08661471 +0x1cc1:  mov    -0x40c(%ebp),%eax
08661477 +0x1cc7:  mov    %eax,-0x2d0(%ebp)
0866147d +0x1ccd:  mov    -0x408(%ebp),%eax
08661483 +0x1cd3:  mov    %eax,-0x2cc(%ebp)
08661489 +0x1cd9:  mov    -0x404(%ebp),%eax
0866148f +0x1cdf:  mov    %eax,-0x2c8(%ebp)
08661495 +0x1ce5:  mov    -0x400(%ebp),%eax
0866149b +0x1ceb:  mov    %eax,-0x2c4(%ebp)
086614a1 +0x1cf1:  mov    -0x3fc(%ebp),%eax
086614a7 +0x1cf7:  mov    %eax,-0x2c0(%ebp)
086614ad +0x1cfd:  mov    -0x3f8(%ebp),%eax
086614b3 +0x1d03:  mov    %eax,-0x2bc(%ebp)
086614b9 +0x1d09:  mov    -0x3f4(%ebp),%eax
086614bf +0x1d0f:  mov    %eax,-0x2b8(%ebp)
086614c5 +0x1d15:  mov    -0x3f0(%ebp),%eax
086614cb +0x1d1b:  mov    %eax,-0x2b4(%ebp)
086614d1 +0x1d21:  mov    -0x3ec(%ebp),%eax
086614d7 +0x1d27:  mov    %eax,-0x2b0(%ebp)
086614dd +0x1d2d:  mov    -0x3e8(%ebp),%eax
086614e3 +0x1d33:  mov    %eax,-0x2ac(%ebp)
086614e9 +0x1d39:  mov    -0x3e4(%ebp),%eax
086614ef +0x1d3f:  mov    %eax,-0x2a8(%ebp)
086614f5 +0x1d45:  mov    -0x3e0(%ebp),%eax
086614fb +0x1d4b:  mov    %eax,-0x2a4(%ebp)
08661501 +0x1d51:  movzbl -0x3dc(%ebp),%eax
08661508 +0x1d58:  mov    %al,-0x2a0(%ebp)
0866150e +0x1d5e:  jmp    08661603 <+0x1e53>
08661513 +0x1d63:  mov    0x8(%ebp),%eax
08661516 +0x1d66:  mov    %eax,(%esp)
08661519 +0x1d69:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866151e +0x1d6e:  lea    -0x418(%ebp),%edx
08661524 +0x1d74:  mov    0x10(%ebp),%ecx
08661527 +0x1d77:  mov    %ecx,0xc(%esp)
0866152b +0x1d7b:  movl   $0x2,0x8(%esp)
08661533 +0x1d83:  mov    %eax,0x4(%esp)
08661537 +0x1d87:  mov    %edx,(%esp)
0866153a +0x1d8a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0866153f +0x1d8f:  sub    $0x4,%esp
08661542 +0x1d92:  mov    -0x418(%ebp),%eax
08661548 +0x1d98:  mov    %eax,-0x319(%ebp)
0866154e +0x1d9e:  mov    -0x414(%ebp),%eax
08661554 +0x1da4:  mov    %eax,-0x315(%ebp)
0866155a +0x1daa:  mov    -0x410(%ebp),%eax
08661560 +0x1db0:  mov    %eax,-0x311(%ebp)
08661566 +0x1db6:  mov    -0x40c(%ebp),%eax
0866156c +0x1dbc:  mov    %eax,-0x30d(%ebp)
08661572 +0x1dc2:  mov    -0x408(%ebp),%eax
08661578 +0x1dc8:  mov    %eax,-0x309(%ebp)
0866157e +0x1dce:  mov    -0x404(%ebp),%eax
08661584 +0x1dd4:  mov    %eax,-0x305(%ebp)
0866158a +0x1dda:  mov    -0x400(%ebp),%eax
08661590 +0x1de0:  mov    %eax,-0x301(%ebp)
08661596 +0x1de6:  mov    -0x3fc(%ebp),%eax
0866159c +0x1dec:  mov    %eax,-0x2fd(%ebp)
086615a2 +0x1df2:  mov    -0x3f8(%ebp),%eax
086615a8 +0x1df8:  mov    %eax,-0x2f9(%ebp)
086615ae +0x1dfe:  mov    -0x3f4(%ebp),%eax
086615b4 +0x1e04:  mov    %eax,-0x2f5(%ebp)
086615ba +0x1e0a:  mov    -0x3f0(%ebp),%eax
086615c0 +0x1e10:  mov    %eax,-0x2f1(%ebp)
086615c6 +0x1e16:  mov    -0x3ec(%ebp),%eax
086615cc +0x1e1c:  mov    %eax,-0x2ed(%ebp)
086615d2 +0x1e22:  mov    -0x3e8(%ebp),%eax
086615d8 +0x1e28:  mov    %eax,-0x2e9(%ebp)
086615de +0x1e2e:  mov    -0x3e4(%ebp),%eax
086615e4 +0x1e34:  mov    %eax,-0x2e5(%ebp)
086615ea +0x1e3a:  mov    -0x3e0(%ebp),%eax
086615f0 +0x1e40:  mov    %eax,-0x2e1(%ebp)
086615f6 +0x1e46:  movzbl -0x3dc(%ebp),%eax
086615fd +0x1e4d:  mov    %al,-0x2dd(%ebp)
08661603 +0x1e53:  mov    -0x312(%ebp),%eax
08661609 +0x1e59:  mov    %eax,(%esp)
0866160c +0x1e5c:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
08661611 +0x1e61:  test   %al,%al
08661613 +0x1e63:  jne    08661627 <+0x1e77>
08661615 +0x1e65:  mov    -0x2d5(%ebp),%eax
0866161b +0x1e6b:  mov    %eax,(%esp)
0866161e +0x1e6e:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
08661623 +0x1e73:  test   %al,%al
08661625 +0x1e75:  je     0866162e <+0x1e7e>
08661627 +0x1e77:  mov    $0x1,%eax
0866162c +0x1e7c:  jmp    08661633 <+0x1e83>
0866162e +0x1e7e:  mov    $0x0,%eax
08661633 +0x1e83:  test   %al,%al
08661635 +0x1e85:  je     08661641 <+0x1e91>
08661637 +0x1e87:  mov    $0x13,%ebx
0866163c +0x1e8c:  jmp    086624dd <+0x2d2d>
08661641 +0x1e91:  mov    0x1c(%ebp),%eax
08661644 +0x1e94:  cmp    $0x3,%eax
08661647 +0x1e97:  je     0866165c <+0x1eac>
08661649 +0x1e99:  cmp    $0x4,%eax
0866164c +0x1e9c:  je     086616ff <+0x1f4f>
08661652 +0x1ea2:  cmp    $0x1,%eax
08661655 +0x1ea5:  je     086616a4 <+0x1ef4>
08661657 +0x1ea7:  jmp    08661807 <+0x2057>
0866165c +0x1eac:  mov    0x10(%ebp),%eax
0866165f +0x1eaf:  cwtl
08661660 +0x1eb0:  mov    0x20(%ebp),%edx
08661663 +0x1eb3:  mov    %edx,0xc(%esp)
08661667 +0x1eb7:  mov    %eax,0x8(%esp)
0866166b +0x1ebb:  mov    0xc(%ebp),%eax
0866166e +0x1ebe:  mov    %eax,0x4(%esp)
08661672 +0x1ec2:  mov    0x8(%ebp),%eax
08661675 +0x1ec5:  mov    %eax,(%esp)
08661678 +0x1ec8:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
0866167d +0x1ecd:  mov    %eax,-0x88(%ebp)
08661683 +0x1ed3:  cmpl   $0x0,-0x88(%ebp)
0866168a +0x1eda:  jle    08661697 <+0x1ee7>
0866168c +0x1edc:  mov    -0x88(%ebp),%ebx
08661692 +0x1ee2:  jmp    086624dd <+0x2d2d>
08661697 +0x1ee7:  mov    0x28(%ebp),%eax
0866169a +0x1eea:  mov    0x20(%ebp),%edx
0866169d +0x1eed:  mov    %edx,(%eax)
0866169f +0x1eef:  jmp    08661811 <+0x2061>
086616a4 +0x1ef4:  movl   $0x0,-0x40(%ebp)
086616ab +0x1efb:  mov    0x8(%ebp),%eax
086616ae +0x1efe:  mov    %eax,(%esp)
086616b1 +0x1f01:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086616b6 +0x1f06:  mov    0x20(%ebp),%edx
086616b9 +0x1f09:  mov    %edx,0x10(%esp)
086616bd +0x1f0d:  movl   $0x2,0xc(%esp)
086616c5 +0x1f15:  mov    0x10(%ebp),%edx
086616c8 +0x1f18:  mov    %edx,0x8(%esp)
086616cc +0x1f1c:  movl   $0x2,0x4(%esp)
086616d4 +0x1f24:  mov    %eax,(%esp)
086616d7 +0x1f27:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
086616dc +0x1f2c:  mov    %eax,-0x40(%ebp)
086616df +0x1f2f:  cmpl   $0x0,-0x40(%ebp)
086616e3 +0x1f33:  setne  %al
086616e6 +0x1f36:  test   %al,%al
086616e8 +0x1f38:  je     086616f2 <+0x1f42>
086616ea +0x1f3a:  mov    -0x40(%ebp),%ebx
086616ed +0x1f3d:  jmp    086624dd <+0x2d2d>
086616f2 +0x1f42:  mov    0x28(%ebp),%eax
086616f5 +0x1f45:  mov    0x20(%ebp),%edx
086616f8 +0x1f48:  mov    %edx,(%eax)
086616fa +0x1f4a:  jmp    08661811 <+0x2061>
086616ff +0x1f4f:  mov    0x8(%ebp),%eax
08661702 +0x1f52:  movzwl 0x8d002(%eax),%eax
08661709 +0x1f59:  movswl %ax,%ebx
0866170c +0x1f5c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08661711 +0x1f61:  mov    %ebx,0x4(%esp)
08661715 +0x1f65:  mov    %eax,(%esp)
08661718 +0x1f68:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
0866171d +0x1f6d:  mov    %eax,-0x84(%ebp)
08661723 +0x1f73:  cmpl   $0x0,-0x84(%ebp)
0866172a +0x1f7a:  jne    08661736 <+0x1f86>
0866172c +0x1f7c:  mov    $0x1,%ebx
08661731 +0x1f81:  jmp    086624dd <+0x2d2d>
08661736 +0x1f86:  mov    -0x84(%ebp),%eax
0866173c +0x1f8c:  mov    %eax,(%esp)
0866173f +0x1f8f:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
08661744 +0x1f94:  test   %al,%al
08661746 +0x1f96:  je     0866175e <+0x1fae>
08661748 +0x1f98:  mov    0x8(%ebp),%eax
0866174b +0x1f9b:  movw   $0xffff,0x8d002(%eax)
08661754 +0x1fa4:  mov    $0x15,%ebx
08661759 +0x1fa9:  jmp    086624dd <+0x2d2d>
0866175e +0x1fae:  mov    -0x84(%ebp),%eax
08661764 +0x1fb4:  mov    %eax,(%esp)
08661767 +0x1fb7:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
0866176c +0x1fbc:  xor    $0x1,%eax
0866176f +0x1fbf:  test   %al,%al
08661771 +0x1fc1:  je     0866179a <+0x1fea>
08661773 +0x1fc3:  mov    -0x84(%ebp),%eax
08661779 +0x1fc9:  mov    %eax,(%esp)
0866177c +0x1fcc:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
08661781 +0x1fd1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08661786 +0x1fd6:  mov    -0x84(%ebp),%edx
0866178c +0x1fdc:  mov    %edx,0x4(%esp)
08661790 +0x1fe0:  mov    %eax,(%esp)
08661793 +0x1fe3:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
08661798 +0x1fe8:  jmp    08661811 <+0x2061>
0866179a +0x1fea:  mov    -0x84(%ebp),%eax
086617a0 +0x1ff0:  mov    %eax,(%esp)
086617a3 +0x1ff3:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
086617a8 +0x1ff8:  test   %al,%al
086617aa +0x1ffa:  je     086617b6 <+0x2006>
086617ac +0x1ffc:  mov    $0x11,%ebx
086617b1 +0x2001:  jmp    086624dd <+0x2d2d>
086617b6 +0x2006:  mov    0x18(%ebp),%eax
086617b9 +0x2009:  mov    %eax,0x10(%esp)
086617bd +0x200d:  mov    0x10(%ebp),%eax
086617c0 +0x2010:  mov    %eax,0xc(%esp)
086617c4 +0x2014:  movl   $0x1,0x8(%esp)
086617cc +0x201c:  mov    0x8(%ebp),%eax
086617cf +0x201f:  mov    %eax,0x4(%esp)
086617d3 +0x2023:  mov    -0x84(%ebp),%eax
086617d9 +0x2029:  mov    %eax,(%esp)
086617dc +0x202c:  call   08529e7e <_ZN11CTradeSpace11regist_itemEP5CUseriii>  ; CTradeSpace::regist_item(CUser*, int, int, int)
086617e1 +0x2031:  mov    %eax,-0x88(%ebp)
086617e7 +0x2037:  cmpl   $0x0,-0x88(%ebp)
086617ee +0x203e:  jns    086617fa <+0x204a>
086617f0 +0x2040:  mov    $0x11,%ebx
086617f5 +0x2045:  jmp    086624dd <+0x2d2d>
086617fa +0x204a:  mov    0x28(%ebp),%eax
086617fd +0x204d:  mov    -0x88(%ebp),%edx
08661803 +0x2053:  mov    %edx,(%eax)
08661805 +0x2055:  jmp    08661811 <+0x2061>
08661807 +0x2057:  mov    $0x1,%ebx
0866180c +0x205c:  jmp    086624dd <+0x2d2d>
08661811 +0x2061:  jmp    086624b8 <+0x2d08>
08661816 +0x2066:  mov    0x1c(%ebp),%eax
08661819 +0x2069:  cmp    $0x4,%eax
0866181c +0x206c:  je     0866198e <+0x21de>
08661822 +0x2072:  cmp    $0x7,%eax
08661825 +0x2075:  je     08661933 <+0x2183>
0866182b +0x207b:  cmp    $0x3,%eax
0866182e +0x207e:  jne    08661a96 <+0x22e6>
08661834 +0x2084:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08661839 +0x2089:  mov    %eax,(%esp)
0866183c +0x208c:  call   0869779e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3ff3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3ff3
08661841 +0x2091:  test   %al,%al
08661843 +0x2093:  je     086618c1 <+0x2111>
08661845 +0x2095:  mov    0x8(%ebp),%eax
08661848 +0x2098:  mov    %eax,(%esp)
0866184b +0x209b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08661850 +0x20a0:  mov    0x10(%ebp),%edx
08661853 +0x20a3:  mov    %edx,0x8(%esp)
08661857 +0x20a7:  movl   $0x3,0x4(%esp)
0866185f +0x20af:  mov    %eax,(%esp)
08661862 +0x20b2:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08661867 +0x20b7:  mov    %eax,-0x38(%ebp)
0866186a +0x20ba:  mov    -0x38(%ebp),%eax
0866186d +0x20bd:  mov    %eax,(%esp)
08661870 +0x20c0:  call   08560920 <_ZN18online_preliminary18COnlinePreliminary22CheckUnusableEquipmentEPK10Inven_Item>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipment(Inven_Item const*)
08661875 +0x20c5:  xor    $0x1,%eax
08661878 +0x20c8:  test   %al,%al
0866187a +0x20ca:  je     086618c1 <+0x2111>
0866187c +0x20cc:  movl   $0x0,0xc(%esp)
08661884 +0x20d4:  movl   $"game_server_msg_146",0x8(%esp)
0866188c +0x20dc:  movl   $0x4,0x4(%esp)
08661894 +0x20e4:  movl   $&g_scriptStringManager_,(%esp)
0866189b +0x20eb:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
086618a0 +0x20f0:  movl   $0x0,0x8(%esp)
086618a8 +0x20f8:  mov    %eax,0x4(%esp)
086618ac +0x20fc:  mov    0x8(%ebp),%eax
086618af +0x20ff:  mov    %eax,(%esp)
086618b2 +0x2102:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
086618b7 +0x2107:  mov    $0x1,%ebx
086618bc +0x210c:  jmp    086624dd <+0x2d2d>
086618c1 +0x2111:  movl   $0x0,-0x3c(%ebp)
086618c8 +0x2118:  mov    0x8(%ebp),%eax
086618cb +0x211b:  mov    %eax,(%esp)
086618ce +0x211e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086618d3 +0x2123:  mov    0x20(%ebp),%edx
086618d6 +0x2126:  mov    %edx,0x10(%esp)
086618da +0x212a:  movl   $0x0,0xc(%esp)
086618e2 +0x2132:  mov    0x10(%ebp),%edx
086618e5 +0x2135:  mov    %edx,0x8(%esp)
086618e9 +0x2139:  movl   $0x3,0x4(%esp)
086618f1 +0x2141:  mov    %eax,(%esp)
086618f4 +0x2144:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
086618f9 +0x2149:  mov    %eax,-0x3c(%ebp)
086618fc +0x214c:  cmpl   $0x0,-0x3c(%ebp)
08661900 +0x2150:  setne  %al
08661903 +0x2153:  test   %al,%al
08661905 +0x2155:  je     0866190f <+0x215f>
08661907 +0x2157:  mov    -0x3c(%ebp),%ebx
0866190a +0x215a:  jmp    086624dd <+0x2d2d>
0866190f +0x215f:  mov    0x28(%ebp),%eax
08661912 +0x2162:  mov    0x20(%ebp),%edx
08661915 +0x2165:  mov    %edx,(%eax)
08661917 +0x2167:  mov    0x20(%ebp),%eax
0866191a +0x216a:  mov    %eax,0x4(%esp)
0866191e +0x216e:  mov    0x8(%ebp),%eax
08661921 +0x2171:  mov    %eax,(%esp)
08661924 +0x2174:  call   0865dd14 <_ZN5CUser10send_equipEi>  ; CUser::send_equip(int)
08661929 +0x2179:  mov    $0x0,%ebx
0866192e +0x217e:  jmp    086624dd <+0x2d2d>
08661933 +0x2183:  movl   $0x0,-0x34(%ebp)
0866193a +0x218a:  mov    0x8(%ebp),%eax
0866193d +0x218d:  mov    %eax,(%esp)
08661940 +0x2190:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08661945 +0x2195:  mov    0x20(%ebp),%edx
08661948 +0x2198:  mov    %edx,0x10(%esp)
0866194c +0x219c:  movl   $0x3,0xc(%esp)
08661954 +0x21a4:  mov    0x10(%ebp),%edx
08661957 +0x21a7:  mov    %edx,0x8(%esp)
0866195b +0x21ab:  movl   $0x3,0x4(%esp)
08661963 +0x21b3:  mov    %eax,(%esp)
08661966 +0x21b6:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
0866196b +0x21bb:  mov    %eax,-0x34(%ebp)
0866196e +0x21be:  cmpl   $0x0,-0x34(%ebp)
08661972 +0x21c2:  setne  %al
08661975 +0x21c5:  test   %al,%al
08661977 +0x21c7:  je     08661981 <+0x21d1>
08661979 +0x21c9:  mov    -0x34(%ebp),%ebx
0866197c +0x21cc:  jmp    086624dd <+0x2d2d>
08661981 +0x21d1:  mov    0x28(%ebp),%eax
08661984 +0x21d4:  mov    0x20(%ebp),%edx
08661987 +0x21d7:  mov    %edx,(%eax)
08661989 +0x21d9:  jmp    08661aa0 <+0x22f0>
0866198e +0x21de:  mov    0x8(%ebp),%eax
08661991 +0x21e1:  movzwl 0x8d002(%eax),%eax
08661998 +0x21e8:  movswl %ax,%ebx
0866199b +0x21eb:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086619a0 +0x21f0:  mov    %ebx,0x4(%esp)
086619a4 +0x21f4:  mov    %eax,(%esp)
086619a7 +0x21f7:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
086619ac +0x21fc:  mov    %eax,-0x84(%ebp)
086619b2 +0x2202:  cmpl   $0x0,-0x84(%ebp)
086619b9 +0x2209:  jne    086619c5 <+0x2215>
086619bb +0x220b:  mov    $0x1,%ebx
086619c0 +0x2210:  jmp    086624dd <+0x2d2d>
086619c5 +0x2215:  mov    -0x84(%ebp),%eax
086619cb +0x221b:  mov    %eax,(%esp)
086619ce +0x221e:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
086619d3 +0x2223:  test   %al,%al
086619d5 +0x2225:  je     086619ed <+0x223d>
086619d7 +0x2227:  mov    0x8(%ebp),%eax
086619da +0x222a:  movw   $0xffff,0x8d002(%eax)
086619e3 +0x2233:  mov    $0x15,%ebx
086619e8 +0x2238:  jmp    086624dd <+0x2d2d>
086619ed +0x223d:  mov    -0x84(%ebp),%eax
086619f3 +0x2243:  mov    %eax,(%esp)
086619f6 +0x2246:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
086619fb +0x224b:  xor    $0x1,%eax
086619fe +0x224e:  test   %al,%al
08661a00 +0x2250:  je     08661a29 <+0x2279>
08661a02 +0x2252:  mov    -0x84(%ebp),%eax
08661a08 +0x2258:  mov    %eax,(%esp)
08661a0b +0x225b:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
08661a10 +0x2260:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08661a15 +0x2265:  mov    -0x84(%ebp),%edx
08661a1b +0x226b:  mov    %edx,0x4(%esp)
08661a1f +0x226f:  mov    %eax,(%esp)
08661a22 +0x2272:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
08661a27 +0x2277:  jmp    08661aa0 <+0x22f0>
08661a29 +0x2279:  mov    -0x84(%ebp),%eax
08661a2f +0x227f:  mov    %eax,(%esp)
08661a32 +0x2282:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
08661a37 +0x2287:  test   %al,%al
08661a39 +0x2289:  je     08661a45 <+0x2295>
08661a3b +0x228b:  mov    $0x11,%ebx
08661a40 +0x2290:  jmp    086624dd <+0x2d2d>
08661a45 +0x2295:  mov    0x18(%ebp),%eax
08661a48 +0x2298:  mov    %eax,0x10(%esp)
08661a4c +0x229c:  mov    0x10(%ebp),%eax
08661a4f +0x229f:  mov    %eax,0xc(%esp)
08661a53 +0x22a3:  movl   $0x7,0x8(%esp)
08661a5b +0x22ab:  mov    0x8(%ebp),%eax
08661a5e +0x22ae:  mov    %eax,0x4(%esp)
08661a62 +0x22b2:  mov    -0x84(%ebp),%eax
08661a68 +0x22b8:  mov    %eax,(%esp)
08661a6b +0x22bb:  call   08529e7e <_ZN11CTradeSpace11regist_itemEP5CUseriii>  ; CTradeSpace::regist_item(CUser*, int, int, int)
08661a70 +0x22c0:  mov    %eax,-0x88(%ebp)
08661a76 +0x22c6:  cmpl   $0x0,-0x88(%ebp)
08661a7d +0x22cd:  jns    08661a89 <+0x22d9>
08661a7f +0x22cf:  mov    $0x11,%ebx
08661a84 +0x22d4:  jmp    086624dd <+0x2d2d>
08661a89 +0x22d9:  mov    0x28(%ebp),%eax
08661a8c +0x22dc:  mov    -0x88(%ebp),%edx
08661a92 +0x22e2:  mov    %edx,(%eax)
08661a94 +0x22e4:  jmp    08661aa0 <+0x22f0>
08661a96 +0x22e6:  mov    $0x1,%ebx
08661a9b +0x22eb:  jmp    086624dd <+0x2d2d>
08661aa0 +0x22f0:  jmp    086624b8 <+0x2d08>
08661aa5 +0x22f5:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08661aaa +0x22fa:  movl   $0x1b,0xc(%esp)
08661ab2 +0x2302:  movl   $0x1,0x8(%esp)
08661aba +0x230a:  mov    0x8(%ebp),%edx
08661abd +0x230d:  mov    %edx,0x4(%esp)
08661ac1 +0x2311:  mov    %eax,(%esp)
08661ac4 +0x2314:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08661ac9 +0x2319:  test   %al,%al
08661acb +0x231b:  je     08661ad7 <+0x2327>
08661acd +0x231d:  mov    $0xd1,%ebx
08661ad2 +0x2322:  jmp    086624dd <+0x2d2d>
08661ad7 +0x2327:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08661adc +0x232c:  movl   $0x1,0x8(%esp)
08661ae4 +0x2334:  mov    0x8(%ebp),%edx
08661ae7 +0x2337:  mov    %edx,0x4(%esp)
08661aeb +0x233b:  mov    %eax,(%esp)
08661aee +0x233e:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08661af3 +0x2343:  mov    %eax,-0x30(%ebp)
08661af6 +0x2346:  cmpl   $0x0,-0x30(%ebp)
08661afa +0x234a:  je     08661b04 <+0x2354>
08661afc +0x234c:  mov    -0x30(%ebp),%ebx
08661aff +0x234f:  jmp    086624dd <+0x2d2d>
08661b04 +0x2354:  cmpl   $0xc,0x1c(%ebp)
08661b08 +0x2358:  ja     086624a8 <+0x2cf8>
08661b0e +0x235e:  mov    0x1c(%ebp),%eax
08661b11 +0x2361:  shl    $0x2,%eax
08661b14 +0x2364:  mov    &data#3515168c(.rodata)(%eax),%eax
08661b1a +0x236a:  jmp    *%eax
08661b1c +0x236c:  mov    0x8(%ebp),%eax
08661b1f +0x236f:  mov    %eax,(%esp)
08661b22 +0x2372:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08661b27 +0x2377:  test   %al,%al
08661b29 +0x2379:  je     08661b35 <+0x2385>
08661b2b +0x237b:  mov    $0x13,%ebx
08661b30 +0x2380:  jmp    086624dd <+0x2d2d>
08661b35 +0x2385:  mov    0x8(%ebp),%eax
08661b38 +0x2388:  mov    %eax,(%esp)
08661b3b +0x238b:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
08661b40 +0x2390:  xor    $0x1,%eax
08661b43 +0x2393:  test   %al,%al
08661b45 +0x2395:  je     08661b51 <+0x23a1>
08661b47 +0x2397:  mov    $0x13,%ebx
08661b4c +0x239c:  jmp    086624dd <+0x2d2d>
08661b51 +0x23a1:  mov    0x8(%ebp),%eax
08661b54 +0x23a4:  mov    %eax,(%esp)
08661b57 +0x23a7:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
08661b5c +0x23ac:  mov    %eax,-0x2c(%ebp)
08661b5f +0x23af:  mov    0x20(%ebp),%eax
08661b62 +0x23b2:  mov    %eax,0x8(%esp)
08661b66 +0x23b6:  mov    0x10(%ebp),%eax
08661b69 +0x23b9:  mov    %eax,0x4(%esp)
08661b6d +0x23bd:  mov    -0x2c(%ebp),%eax
08661b70 +0x23c0:  mov    %eax,(%esp)
08661b73 +0x23c3:  call   08289f26 <_ZN13CAccountCargo8MoveItemEii>  ; CAccountCargo::MoveItem(int, int)
08661b78 +0x23c8:  xor    $0x1,%eax
08661b7b +0x23cb:  test   %al,%al
08661b7d +0x23cd:  je     08661b89 <+0x23d9>
08661b7f +0x23cf:  mov    $0x11,%ebx
08661b84 +0x23d4:  jmp    086624dd <+0x2d2d>
08661b89 +0x23d9:  mov    0x28(%ebp),%eax
08661b8c +0x23dc:  mov    0x20(%ebp),%edx
08661b8f +0x23df:  mov    %edx,(%eax)
08661b91 +0x23e1:  jmp    086624af <+0x2cff>
08661b96 +0x23e6:  mov    0x8(%ebp),%eax
08661b99 +0x23e9:  mov    %eax,(%esp)
08661b9c +0x23ec:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08661ba1 +0x23f1:  test   %al,%al
08661ba3 +0x23f3:  je     08661baf <+0x23ff>
08661ba5 +0x23f5:  mov    $0x13,%ebx
08661baa +0x23fa:  jmp    086624dd <+0x2d2d>
08661baf +0x23ff:  mov    0x8(%ebp),%eax
08661bb2 +0x2402:  mov    %eax,(%esp)
08661bb5 +0x2405:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
08661bba +0x240a:  xor    $0x1,%eax
08661bbd +0x240d:  test   %al,%al
08661bbf +0x240f:  je     08661bcb <+0x241b>
08661bc1 +0x2411:  mov    $0x13,%ebx
08661bc6 +0x2416:  jmp    086624dd <+0x2d2d>
08661bcb +0x241b:  mov    0x8(%ebp),%eax
08661bce +0x241e:  mov    %eax,(%esp)
08661bd1 +0x2421:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
08661bd6 +0x2426:  mov    %eax,-0x28(%ebp)
08661bd9 +0x2429:  lea    -0x418(%ebp),%eax
08661bdf +0x242f:  mov    0x10(%ebp),%edx
08661be2 +0x2432:  mov    %edx,0x8(%esp)
08661be6 +0x2436:  mov    -0x28(%ebp),%edx
08661be9 +0x2439:  mov    %edx,0x4(%esp)
08661bed +0x243d:  mov    %eax,(%esp)
08661bf0 +0x2440:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
08661bf5 +0x2445:  sub    $0x4,%esp
08661bf8 +0x2448:  mov    -0x418(%ebp),%eax
08661bfe +0x244e:  mov    %eax,-0x131(%ebp)
08661c04 +0x2454:  mov    -0x414(%ebp),%eax
08661c0a +0x245a:  mov    %eax,-0x12d(%ebp)
08661c10 +0x2460:  mov    -0x410(%ebp),%eax
08661c16 +0x2466:  mov    %eax,-0x129(%ebp)
08661c1c +0x246c:  mov    -0x40c(%ebp),%eax
08661c22 +0x2472:  mov    %eax,-0x125(%ebp)
08661c28 +0x2478:  mov    -0x408(%ebp),%eax
08661c2e +0x247e:  mov    %eax,-0x121(%ebp)
08661c34 +0x2484:  mov    -0x404(%ebp),%eax
08661c3a +0x248a:  mov    %eax,-0x11d(%ebp)
08661c40 +0x2490:  mov    -0x400(%ebp),%eax
08661c46 +0x2496:  mov    %eax,-0x119(%ebp)
08661c4c +0x249c:  mov    -0x3fc(%ebp),%eax
08661c52 +0x24a2:  mov    %eax,-0x115(%ebp)
08661c58 +0x24a8:  mov    -0x3f8(%ebp),%eax
08661c5e +0x24ae:  mov    %eax,-0x111(%ebp)
08661c64 +0x24b4:  mov    -0x3f4(%ebp),%eax
08661c6a +0x24ba:  mov    %eax,-0x10d(%ebp)
08661c70 +0x24c0:  mov    -0x3f0(%ebp),%eax
08661c76 +0x24c6:  mov    %eax,-0x109(%ebp)
08661c7c +0x24cc:  mov    -0x3ec(%ebp),%eax
08661c82 +0x24d2:  mov    %eax,-0x105(%ebp)
08661c88 +0x24d8:  mov    -0x3e8(%ebp),%eax
08661c8e +0x24de:  mov    %eax,-0x101(%ebp)
08661c94 +0x24e4:  mov    -0x3e4(%ebp),%eax
08661c9a +0x24ea:  mov    %eax,-0xfd(%ebp)
08661ca0 +0x24f0:  mov    -0x3e0(%ebp),%eax
08661ca6 +0x24f6:  mov    %eax,-0xf9(%ebp)
08661cac +0x24fc:  movzbl -0x3dc(%ebp),%eax
08661cb3 +0x2503:  mov    %al,-0xf5(%ebp)
08661cb9 +0x2509:  mov    -0x131(%ebp),%eax
08661cbf +0x250f:  mov    %eax,-0x356(%ebp)
08661cc5 +0x2515:  mov    -0x12d(%ebp),%eax
08661ccb +0x251b:  mov    %eax,-0x352(%ebp)
08661cd1 +0x2521:  mov    -0x129(%ebp),%eax
08661cd7 +0x2527:  mov    %eax,-0x34e(%ebp)
08661cdd +0x252d:  mov    -0x125(%ebp),%eax
08661ce3 +0x2533:  mov    %eax,-0x34a(%ebp)
08661ce9 +0x2539:  mov    -0x121(%ebp),%eax
08661cef +0x253f:  mov    %eax,-0x346(%ebp)
08661cf5 +0x2545:  mov    -0x11d(%ebp),%eax
08661cfb +0x254b:  mov    %eax,-0x342(%ebp)
08661d01 +0x2551:  mov    -0x119(%ebp),%eax
08661d07 +0x2557:  mov    %eax,-0x33e(%ebp)
08661d0d +0x255d:  mov    -0x115(%ebp),%eax
08661d13 +0x2563:  mov    %eax,-0x33a(%ebp)
08661d19 +0x2569:  mov    -0x111(%ebp),%eax
08661d1f +0x256f:  mov    %eax,-0x336(%ebp)
08661d25 +0x2575:  mov    -0x10d(%ebp),%eax
08661d2b +0x257b:  mov    %eax,-0x332(%ebp)
08661d31 +0x2581:  mov    -0x109(%ebp),%eax
08661d37 +0x2587:  mov    %eax,-0x32e(%ebp)
08661d3d +0x258d:  mov    -0x105(%ebp),%eax
08661d43 +0x2593:  mov    %eax,-0x32a(%ebp)
08661d49 +0x2599:  mov    -0x101(%ebp),%eax
08661d4f +0x259f:  mov    %eax,-0x326(%ebp)
08661d55 +0x25a5:  mov    -0xfd(%ebp),%eax
08661d5b +0x25ab:  mov    %eax,-0x322(%ebp)
08661d61 +0x25b1:  mov    -0xf9(%ebp),%eax
08661d67 +0x25b7:  mov    %eax,-0x31e(%ebp)
08661d6d +0x25bd:  movzbl -0xf5(%ebp),%eax
08661d74 +0x25c4:  mov    %al,-0x31a(%ebp)
08661d7a +0x25ca:  movzbl -0x355(%ebp),%eax
08661d81 +0x25d1:  cmp    $0x1,%al
08661d83 +0x25d3:  je     08661d9a <+0x25ea>
08661d85 +0x25d5:  mov    0x18(%ebp),%eax
08661d88 +0x25d8:  mov    %eax,0x4(%esp)
08661d8c +0x25dc:  lea    -0x356(%ebp),%eax
08661d92 +0x25e2:  mov    %eax,(%esp)
08661d95 +0x25e5:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08661d9a +0x25ea:  mov    0x8(%ebp),%eax
08661d9d +0x25ed:  mov    %eax,(%esp)
08661da0 +0x25f0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08661da5 +0x25f5:  mov    -0x356(%ebp),%edx
08661dab +0x25fb:  mov    %edx,0x4(%esp)
08661daf +0x25ff:  mov    -0x352(%ebp),%edx
08661db5 +0x2605:  mov    %edx,0x8(%esp)
08661db9 +0x2609:  mov    -0x34e(%ebp),%edx
08661dbf +0x260f:  mov    %edx,0xc(%esp)
08661dc3 +0x2613:  mov    -0x34a(%ebp),%edx
08661dc9 +0x2619:  mov    %edx,0x10(%esp)
08661dcd +0x261d:  mov    -0x346(%ebp),%edx
08661dd3 +0x2623:  mov    %edx,0x14(%esp)
08661dd7 +0x2627:  mov    -0x342(%ebp),%edx
08661ddd +0x262d:  mov    %edx,0x18(%esp)
08661de1 +0x2631:  mov    -0x33e(%ebp),%edx
08661de7 +0x2637:  mov    %edx,0x1c(%esp)
08661deb +0x263b:  mov    -0x33a(%ebp),%edx
08661df1 +0x2641:  mov    %edx,0x20(%esp)
08661df5 +0x2645:  mov    -0x336(%ebp),%edx
08661dfb +0x264b:  mov    %edx,0x24(%esp)
08661dff +0x264f:  mov    -0x332(%ebp),%edx
08661e05 +0x2655:  mov    %edx,0x28(%esp)
08661e09 +0x2659:  mov    -0x32e(%ebp),%edx
08661e0f +0x265f:  mov    %edx,0x2c(%esp)
08661e13 +0x2663:  mov    -0x32a(%ebp),%edx
08661e19 +0x2669:  mov    %edx,0x30(%esp)
08661e1d +0x266d:  mov    -0x326(%ebp),%edx
08661e23 +0x2673:  mov    %edx,0x34(%esp)
08661e27 +0x2677:  mov    -0x322(%ebp),%edx
08661e2d +0x267d:  mov    %edx,0x38(%esp)
08661e31 +0x2681:  mov    -0x31e(%ebp),%edx
08661e37 +0x2687:  mov    %edx,0x3c(%esp)
08661e3b +0x268b:  movzbl -0x31a(%ebp),%edx
08661e42 +0x2692:  mov    %dl,0x40(%esp)
08661e46 +0x2696:  mov    %eax,(%esp)
08661e49 +0x2699:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08661e4e +0x269e:  cmp    $0xffffffff,%eax
08661e51 +0x26a1:  sete   %al
08661e54 +0x26a4:  test   %al,%al
08661e56 +0x26a6:  je     08661e62 <+0x26b2>
08661e58 +0x26a8:  mov    $0x11,%ebx
08661e5d +0x26ad:  jmp    086624dd <+0x2d2d>
08661e62 +0x26b2:  mov    0x18(%ebp),%eax
08661e65 +0x26b5:  mov    %eax,0x8(%esp)
08661e69 +0x26b9:  mov    0x10(%ebp),%eax
08661e6c +0x26bc:  mov    %eax,0x4(%esp)
08661e70 +0x26c0:  mov    -0x28(%ebp),%eax
08661e73 +0x26c3:  mov    %eax,(%esp)
08661e76 +0x26c6:  call   08289e3c <_ZN13CAccountCargo10DeleteItemEii>  ; CAccountCargo::DeleteItem(int, int)
08661e7b +0x26cb:  mov    %al,-0x21(%ebp)
08661e7e +0x26ce:  cmpb   $0x0,-0x21(%ebp)
08661e82 +0x26d2:  je     08662075 <+0x28c5>
08661e88 +0x26d8:  mov    0x8(%ebp),%eax
08661e8b +0x26db:  mov    %eax,(%esp)
08661e8e +0x26de:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08661e93 +0x26e3:  movl   $0x0,0x4c(%esp)
08661e9b +0x26eb:  movl   $0x1,0x48(%esp)
08661ea3 +0x26f3:  movl   $0x7,0x44(%esp)
08661eab +0x26fb:  mov    -0x356(%ebp),%edx
08661eb1 +0x2701:  mov    %edx,0x4(%esp)
08661eb5 +0x2705:  mov    -0x352(%ebp),%edx
08661ebb +0x270b:  mov    %edx,0x8(%esp)
08661ebf +0x270f:  mov    -0x34e(%ebp),%edx
08661ec5 +0x2715:  mov    %edx,0xc(%esp)
08661ec9 +0x2719:  mov    -0x34a(%ebp),%edx
08661ecf +0x271f:  mov    %edx,0x10(%esp)
08661ed3 +0x2723:  mov    -0x346(%ebp),%edx
08661ed9 +0x2729:  mov    %edx,0x14(%esp)
08661edd +0x272d:  mov    -0x342(%ebp),%edx
08661ee3 +0x2733:  mov    %edx,0x18(%esp)
08661ee7 +0x2737:  mov    -0x33e(%ebp),%edx
08661eed +0x273d:  mov    %edx,0x1c(%esp)
08661ef1 +0x2741:  mov    -0x33a(%ebp),%edx
08661ef7 +0x2747:  mov    %edx,0x20(%esp)
08661efb +0x274b:  mov    -0x336(%ebp),%edx
08661f01 +0x2751:  mov    %edx,0x24(%esp)
08661f05 +0x2755:  mov    -0x332(%ebp),%edx
08661f0b +0x275b:  mov    %edx,0x28(%esp)
08661f0f +0x275f:  mov    -0x32e(%ebp),%edx
08661f15 +0x2765:  mov    %edx,0x2c(%esp)
08661f19 +0x2769:  mov    -0x32a(%ebp),%edx
08661f1f +0x276f:  mov    %edx,0x30(%esp)
08661f23 +0x2773:  mov    -0x326(%ebp),%edx
08661f29 +0x2779:  mov    %edx,0x34(%esp)
08661f2d +0x277d:  mov    -0x322(%ebp),%edx
08661f33 +0x2783:  mov    %edx,0x38(%esp)
08661f37 +0x2787:  mov    -0x31e(%ebp),%edx
08661f3d +0x278d:  mov    %edx,0x3c(%esp)
08661f41 +0x2791:  movzbl -0x31a(%ebp),%edx
08661f48 +0x2798:  mov    %dl,0x40(%esp)
08661f4c +0x279c:  mov    %eax,(%esp)
08661f4f +0x279f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08661f54 +0x27a4:  mov    0x28(%ebp),%edx
08661f57 +0x27a7:  mov    %eax,(%edx)
08661f59 +0x27a9:  mov    0x28(%ebp),%eax
08661f5c +0x27ac:  mov    (%eax),%eax
08661f5e +0x27ae:  cmp    $0xffffffff,%eax
08661f61 +0x27b1:  jne    08661fe2 <+0x2832>
08661f63 +0x27b3:  mov    -0x354(%ebp),%edi
08661f69 +0x27b9:  mov    0x8(%ebp),%eax
08661f6c +0x27bc:  mov    %eax,(%esp)
08661f6f +0x27bf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08661f74 +0x27c4:  mov    %eax,%esi
08661f76 +0x27c6:  mov    0x8(%ebp),%eax
08661f79 +0x27c9:  mov    %eax,(%esp)
08661f7c +0x27cc:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08661f81 +0x27d1:  movl   $0x0,0x4(%esp)
08661f89 +0x27d9:  mov    %eax,(%esp)
08661f8c +0x27dc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08661f91 +0x27e1:  mov    %eax,%ebx
08661f93 +0x27e3:  movl   $0x5,0xc(%esp)
08661f9b +0x27eb:  movl   $0x3ed3,0x8(%esp)
08661fa3 +0x27f3:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
08661fab +0x27fb:  lea    -0xa8(%ebp),%eax
08661fb1 +0x2801:  mov    %eax,(%esp)
08661fb4 +0x2804:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08661fb9 +0x2809:  mov    0x18(%ebp),%eax
08661fbc +0x280c:  mov    %eax,0x14(%esp)
08661fc0 +0x2810:  mov    %edi,0x10(%esp)
08661fc4 +0x2814:  mov    %esi,0xc(%esp)
08661fc8 +0x2818:  mov    %ebx,0x8(%esp)
08661fcc +0x281c:  movl   $"insertItemIntoInventory failed %s %d %d %d",0x4(%esp)
08661fd4 +0x2824:  lea    -0xa8(%ebp),%eax
08661fda +0x282a:  mov    %eax,(%esp)
08661fdd +0x282d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08661fe2 +0x2832:  lea    -0x393(%ebp),%eax
08661fe8 +0x2838:  mov    0x10(%ebp),%edx
08661feb +0x283b:  mov    %edx,0x8(%esp)
08661fef +0x283f:  mov    -0x28(%ebp),%edx
08661ff2 +0x2842:  mov    %edx,0x4(%esp)
08661ff6 +0x2846:  mov    %eax,(%esp)
08661ff9 +0x2849:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
08661ffe +0x284e:  sub    $0x4,%esp
08662001 +0x2851:  movzbl -0x392(%ebp),%eax
08662008 +0x2858:  cmp    $0x1,%al
0866200a +0x285a:  jne    08662041 <+0x2891>
0866200c +0x285c:  mov    -0x354(%ebp),%eax
08662012 +0x2862:  mov    0x8(%ebp),%edx
08662015 +0x2865:  add    $0x79700,%edx
0866201b +0x286b:  movl   $0x26,0x10(%esp)
08662023 +0x2873:  movl   $0x1,0xc(%esp)
0866202b +0x287b:  movl   $0x0,0x8(%esp)
08662033 +0x2883:  mov    %eax,0x4(%esp)
08662037 +0x2887:  mov    %edx,(%esp)
0866203a +0x288a:  call   086868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>  ; cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
0866203f +0x288f:  jmp    08662075 <+0x28c5>
08662041 +0x2891:  mov    -0x38c(%ebp),%edx
08662047 +0x2897:  mov    -0x354(%ebp),%eax
0866204d +0x289d:  mov    0x8(%ebp),%ecx
08662050 +0x28a0:  lea    0x79700(%ecx),%ebx
08662056 +0x28a6:  movl   $0x26,0x10(%esp)
0866205e +0x28ae:  mov    0x18(%ebp),%ecx
08662061 +0x28b1:  mov    %ecx,0xc(%esp)
08662065 +0x28b5:  mov    %edx,0x8(%esp)
08662069 +0x28b9:  mov    %eax,0x4(%esp)
0866206d +0x28bd:  mov    %ebx,(%esp)
08662070 +0x28c0:  call   086868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>  ; cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
08662075 +0x28c5:  jmp    086624af <+0x2cff>
0866207a +0x28ca:  mov    0x8(%ebp),%eax
0866207d +0x28cd:  mov    %eax,(%esp)
08662080 +0x28d0:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08662085 +0x28d5:  test   %al,%al
08662087 +0x28d7:  je     08662093 <+0x28e3>
08662089 +0x28d9:  mov    $0x13,%ebx
0866208e +0x28de:  jmp    086624dd <+0x2d2d>
08662093 +0x28e3:  mov    0x8(%ebp),%eax
08662096 +0x28e6:  mov    %eax,(%esp)
08662099 +0x28e9:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0866209e +0x28ee:  xor    $0x1,%eax
086620a1 +0x28f1:  test   %al,%al
086620a3 +0x28f3:  je     086620af <+0x28ff>
086620a5 +0x28f5:  mov    $0x13,%ebx
086620aa +0x28fa:  jmp    086624dd <+0x2d2d>
086620af +0x28ff:  mov    0x8(%ebp),%eax
086620b2 +0x2902:  mov    %eax,(%esp)
086620b5 +0x2905:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
086620ba +0x290a:  mov    %eax,-0x20(%ebp)
086620bd +0x290d:  lea    -0x418(%ebp),%eax
086620c3 +0x2913:  mov    0x10(%ebp),%edx
086620c6 +0x2916:  mov    %edx,0x8(%esp)
086620ca +0x291a:  mov    -0x20(%ebp),%edx
086620cd +0x291d:  mov    %edx,0x4(%esp)
086620d1 +0x2921:  mov    %eax,(%esp)
086620d4 +0x2924:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
086620d9 +0x2929:  sub    $0x4,%esp
086620dc +0x292c:  mov    -0x418(%ebp),%eax
086620e2 +0x2932:  mov    %eax,-0x131(%ebp)
086620e8 +0x2938:  mov    -0x414(%ebp),%eax
086620ee +0x293e:  mov    %eax,-0x12d(%ebp)
086620f4 +0x2944:  mov    -0x410(%ebp),%eax
086620fa +0x294a:  mov    %eax,-0x129(%ebp)
08662100 +0x2950:  mov    -0x40c(%ebp),%eax
08662106 +0x2956:  mov    %eax,-0x125(%ebp)
0866210c +0x295c:  mov    -0x408(%ebp),%eax
08662112 +0x2962:  mov    %eax,-0x121(%ebp)
08662118 +0x2968:  mov    -0x404(%ebp),%eax
0866211e +0x296e:  mov    %eax,-0x11d(%ebp)
08662124 +0x2974:  mov    -0x400(%ebp),%eax
0866212a +0x297a:  mov    %eax,-0x119(%ebp)
08662130 +0x2980:  mov    -0x3fc(%ebp),%eax
08662136 +0x2986:  mov    %eax,-0x115(%ebp)
0866213c +0x298c:  mov    -0x3f8(%ebp),%eax
08662142 +0x2992:  mov    %eax,-0x111(%ebp)
08662148 +0x2998:  mov    -0x3f4(%ebp),%eax
0866214e +0x299e:  mov    %eax,-0x10d(%ebp)
08662154 +0x29a4:  mov    -0x3f0(%ebp),%eax
0866215a +0x29aa:  mov    %eax,-0x109(%ebp)
08662160 +0x29b0:  mov    -0x3ec(%ebp),%eax
08662166 +0x29b6:  mov    %eax,-0x105(%ebp)
0866216c +0x29bc:  mov    -0x3e8(%ebp),%eax
08662172 +0x29c2:  mov    %eax,-0x101(%ebp)
08662178 +0x29c8:  mov    -0x3e4(%ebp),%eax
0866217e +0x29ce:  mov    %eax,-0xfd(%ebp)
08662184 +0x29d4:  mov    -0x3e0(%ebp),%eax
0866218a +0x29da:  mov    %eax,-0xf9(%ebp)
08662190 +0x29e0:  movzbl -0x3dc(%ebp),%eax
08662197 +0x29e7:  mov    %al,-0xf5(%ebp)
0866219d +0x29ed:  mov    -0x12f(%ebp),%eax
086621a3 +0x29f3:  cmp    $0x1963,%eax
086621a8 +0x29f8:  jbe    086621c1 <+0x2a11>
086621aa +0x29fa:  mov    -0x12f(%ebp),%eax
086621b0 +0x2a00:  cmp    $0x1b57,%eax
086621b5 +0x2a05:  ja     086621c1 <+0x2a11>
086621b7 +0x2a07:  mov    $0x17,%ebx
086621bc +0x2a0c:  jmp    086624dd <+0x2d2d>
086621c1 +0x2a11:  movzbl -0x130(%ebp),%eax
086621c8 +0x2a18:  cmp    $0x4,%al
086621ca +0x2a1a:  jne    086621d6 <+0x2a26>
086621cc +0x2a1c:  mov    $0x17,%ebx
086621d1 +0x2a21:  jmp    086624dd <+0x2d2d>
086621d6 +0x2a26:  movzbl -0x130(%ebp),%eax
086621dd +0x2a2d:  cmp    $0x1,%al
086621df +0x2a2f:  jne    08662234 <+0x2a84>
086621e1 +0x2a31:  mov    0x8(%ebp),%eax
086621e4 +0x2a34:  mov    %eax,(%esp)
086621e7 +0x2a37:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086621ec +0x2a3c:  mov    0x20(%ebp),%edx
086621ef +0x2a3f:  mov    %edx,0x4(%esp)
086621f3 +0x2a43:  mov    %eax,(%esp)
086621f6 +0x2a46:  call   0850bbca <_ZNK6CCargo16check_slot_emptyEi>  ; CCargo::check_slot_empty(int) const
086621fb +0x2a4b:  xor    $0x1,%eax
086621fe +0x2a4e:  test   %al,%al
08662200 +0x2a50:  je     086622dc <+0x2b2c>
08662206 +0x2a56:  mov    0x8(%ebp),%eax
08662209 +0x2a59:  mov    %eax,(%esp)
0866220c +0x2a5c:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08662211 +0x2a61:  mov    %eax,(%esp)
08662214 +0x2a64:  call   0850c406 <_ZNK6CCargo14get_empty_slotEv>  ; CCargo::get_empty_slot() const
08662219 +0x2a69:  mov    %eax,0x20(%ebp)
0866221c +0x2a6c:  mov    0x20(%ebp),%eax
0866221f +0x2a6f:  shr    $0x1f,%eax
08662222 +0x2a72:  test   %al,%al
08662224 +0x2a74:  je     086622dc <+0x2b2c>
0866222a +0x2a7a:  mov    $0x4,%ebx
0866222f +0x2a7f:  jmp    086624dd <+0x2d2d>
08662234 +0x2a84:  lea    -0x131(%ebp),%eax
0866223a +0x2a8a:  mov    %eax,(%esp)
0866223d +0x2a8d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08662242 +0x2a92:  cmp    0x18(%ebp),%eax
08662245 +0x2a95:  setl   %al
08662248 +0x2a98:  test   %al,%al
0866224a +0x2a9a:  je     08662256 <+0x2aa6>
0866224c +0x2a9c:  mov    $0x11,%ebx
08662251 +0x2aa1:  jmp    086624dd <+0x2d2d>
08662256 +0x2aa6:  mov    0x18(%ebp),%eax
08662259 +0x2aa9:  mov    %eax,0x4(%esp)
0866225d +0x2aad:  lea    -0x131(%ebp),%eax
08662263 +0x2ab3:  mov    %eax,(%esp)
08662266 +0x2ab6:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0866226b +0x2abb:  mov    -0x12f(%ebp),%eax
08662271 +0x2ac1:  mov    %eax,%ebx
08662273 +0x2ac3:  mov    0x8(%ebp),%eax
08662276 +0x2ac6:  mov    %eax,(%esp)
08662279 +0x2ac9:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0866227e +0x2ace:  mov    %ebx,0x4(%esp)
08662282 +0x2ad2:  mov    %eax,(%esp)
08662285 +0x2ad5:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
0866228a +0x2ada:  shr    $0x1f,%eax
0866228d +0x2add:  test   %al,%al
0866228f +0x2adf:  je     086622dc <+0x2b2c>
08662291 +0x2ae1:  mov    0x8(%ebp),%eax
08662294 +0x2ae4:  mov    %eax,(%esp)
08662297 +0x2ae7:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0866229c +0x2aec:  mov    0x20(%ebp),%edx
0866229f +0x2aef:  mov    %edx,0x4(%esp)
086622a3 +0x2af3:  mov    %eax,(%esp)
086622a6 +0x2af6:  call   0850bbca <_ZNK6CCargo16check_slot_emptyEi>  ; CCargo::check_slot_empty(int) const
086622ab +0x2afb:  xor    $0x1,%eax
086622ae +0x2afe:  test   %al,%al
086622b0 +0x2b00:  je     086622dc <+0x2b2c>
086622b2 +0x2b02:  mov    0x8(%ebp),%eax
086622b5 +0x2b05:  mov    %eax,(%esp)
086622b8 +0x2b08:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086622bd +0x2b0d:  mov    %eax,(%esp)
086622c0 +0x2b10:  call   0850c406 <_ZNK6CCargo14get_empty_slotEv>  ; CCargo::get_empty_slot() const
086622c5 +0x2b15:  mov    %eax,0x20(%ebp)
086622c8 +0x2b18:  mov    0x20(%ebp),%eax
086622cb +0x2b1b:  shr    $0x1f,%eax
086622ce +0x2b1e:  test   %al,%al
086622d0 +0x2b20:  je     086622dc <+0x2b2c>
086622d2 +0x2b22:  mov    $0x4,%ebx
086622d7 +0x2b27:  jmp    086624dd <+0x2d2d>
086622dc +0x2b2c:  mov    0x8(%ebp),%eax
086622df +0x2b2f:  mov    %eax,(%esp)
086622e2 +0x2b32:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086622e7 +0x2b37:  mov    0x20(%ebp),%edx
086622ea +0x2b3a:  mov    %edx,0x8(%esp)
086622ee +0x2b3e:  lea    -0x131(%ebp),%edx
086622f4 +0x2b44:  mov    %edx,0x4(%esp)
086622f8 +0x2b48:  mov    %eax,(%esp)
086622fb +0x2b4b:  call   0850b570 <_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi>  ; CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const
08662300 +0x2b50:  mov    %eax,0x20(%ebp)
08662303 +0x2b53:  mov    0x20(%ebp),%eax
08662306 +0x2b56:  shr    $0x1f,%eax
08662309 +0x2b59:  test   %al,%al
0866230b +0x2b5b:  je     08662317 <+0x2b67>
0866230d +0x2b5d:  mov    $0x4,%ebx
08662312 +0x2b62:  jmp    086624dd <+0x2d2d>
08662317 +0x2b67:  mov    0x18(%ebp),%eax
0866231a +0x2b6a:  mov    %eax,0x8(%esp)
0866231e +0x2b6e:  mov    0x10(%ebp),%eax
08662321 +0x2b71:  mov    %eax,0x4(%esp)
08662325 +0x2b75:  mov    -0x20(%ebp),%eax
08662328 +0x2b78:  mov    %eax,(%esp)
0866232b +0x2b7b:  call   08289e3c <_ZN13CAccountCargo10DeleteItemEii>  ; CAccountCargo::DeleteItem(int, int)
08662330 +0x2b80:  mov    %al,-0x19(%ebp)
08662333 +0x2b83:  cmpb   $0x0,-0x19(%ebp)
08662337 +0x2b87:  je     08662482 <+0x2cd2>
0866233d +0x2b8d:  mov    0x8(%ebp),%eax
08662340 +0x2b90:  mov    %eax,(%esp)
08662343 +0x2b93:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08662348 +0x2b98:  mov    0x20(%ebp),%edx
0866234b +0x2b9b:  mov    %edx,0x8(%esp)
0866234f +0x2b9f:  lea    -0x131(%ebp),%edx
08662355 +0x2ba5:  mov    %edx,0x4(%esp)
08662359 +0x2ba9:  mov    %eax,(%esp)
0866235c +0x2bac:  call   0850b672 <_ZN6CCargo24insert_item_special_slotER10Inven_Itemi>  ; CCargo::insert_item_special_slot(Inven_Item&, int)
08662361 +0x2bb1:  mov    0x28(%ebp),%edx
08662364 +0x2bb4:  mov    %eax,(%edx)
08662366 +0x2bb6:  mov    0x28(%ebp),%eax
08662369 +0x2bb9:  mov    (%eax),%eax
0866236b +0x2bbb:  cmp    $0xffffffff,%eax
0866236e +0x2bbe:  jne    086623ef <+0x2c3f>
08662370 +0x2bc0:  mov    -0x12f(%ebp),%edi
08662376 +0x2bc6:  mov    0x8(%ebp),%eax
08662379 +0x2bc9:  mov    %eax,(%esp)
0866237c +0x2bcc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08662381 +0x2bd1:  mov    %eax,%esi
08662383 +0x2bd3:  mov    0x8(%ebp),%eax
08662386 +0x2bd6:  mov    %eax,(%esp)
08662389 +0x2bd9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0866238e +0x2bde:  movl   $0x0,0x4(%esp)
08662396 +0x2be6:  mov    %eax,(%esp)
08662399 +0x2be9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0866239e +0x2bee:  mov    %eax,%ebx
086623a0 +0x2bf0:  movl   $0x5,0xc(%esp)
086623a8 +0x2bf8:  movl   $0x3f17,0x8(%esp)
086623b0 +0x2c00:  movl   $&_ZZN5CUser19exchange_interspaceEiimiiimPiE19__PRETTY_FUNCTION__,0x4(%esp)
086623b8 +0x2c08:  lea    -0x98(%ebp),%eax
086623be +0x2c0e:  mov    %eax,(%esp)
086623c1 +0x2c11:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086623c6 +0x2c16:  mov    0x18(%ebp),%eax
086623c9 +0x2c19:  mov    %eax,0x14(%esp)
086623cd +0x2c1d:  mov    %edi,0x10(%esp)
086623d1 +0x2c21:  mov    %esi,0xc(%esp)
086623d5 +0x2c25:  mov    %ebx,0x8(%esp)
086623d9 +0x2c29:  movl   $"insertItemIntoInventory failed %s %d %d %d",0x4(%esp)
086623e1 +0x2c31:  lea    -0x98(%ebp),%eax
086623e7 +0x2c37:  mov    %eax,(%esp)
086623ea +0x2c3a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086623ef +0x2c3f:  lea    -0x3d0(%ebp),%eax
086623f5 +0x2c45:  mov    0x10(%ebp),%edx
086623f8 +0x2c48:  mov    %edx,0x8(%esp)
086623fc +0x2c4c:  mov    -0x20(%ebp),%edx
086623ff +0x2c4f:  mov    %edx,0x4(%esp)
08662403 +0x2c53:  mov    %eax,(%esp)
08662406 +0x2c56:  call   082898f8 <_ZN13CAccountCargo7GetSlotEi>  ; CAccountCargo::GetSlot(int)
0866240b +0x2c5b:  sub    $0x4,%esp
0866240e +0x2c5e:  movzbl -0x3cf(%ebp),%eax
08662415 +0x2c65:  cmp    $0x1,%al
08662417 +0x2c67:  jne    0866244e <+0x2c9e>
08662419 +0x2c69:  mov    -0x12f(%ebp),%eax
0866241f +0x2c6f:  mov    0x8(%ebp),%edx
08662422 +0x2c72:  add    $0x79700,%edx
08662428 +0x2c78:  movl   $0x27,0x10(%esp)
08662430 +0x2c80:  movl   $0x1,0xc(%esp)
08662438 +0x2c88:  movl   $0x0,0x8(%esp)
08662440 +0x2c90:  mov    %eax,0x4(%esp)
08662444 +0x2c94:  mov    %edx,(%esp)
08662447 +0x2c97:  call   086868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>  ; cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
0866244c +0x2c9c:  jmp    08662482 <+0x2cd2>
0866244e +0x2c9e:  mov    -0x3c9(%ebp),%edx
08662454 +0x2ca4:  mov    -0x12f(%ebp),%eax
0866245a +0x2caa:  mov    0x8(%ebp),%ecx
0866245d +0x2cad:  lea    0x79700(%ecx),%ebx
08662463 +0x2cb3:  movl   $0x27,0x10(%esp)
0866246b +0x2cbb:  mov    0x18(%ebp),%ecx
0866246e +0x2cbe:  mov    %ecx,0xc(%esp)
08662472 +0x2cc2:  mov    %edx,0x8(%esp)
08662476 +0x2cc6:  mov    %eax,0x4(%esp)
0866247a +0x2cca:  mov    %ebx,(%esp)
0866247d +0x2ccd:  call   086868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>  ; cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
08662482 +0x2cd2:  jmp    086624af <+0x2cff>
08662484 +0x2cd4:  mov    0x8(%ebp),%eax
08662487 +0x2cd7:  mov    %eax,(%esp)
0866248a +0x2cda:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0866248f +0x2cdf:  test   %al,%al
08662491 +0x2ce1:  je     0866249a <+0x2cea>
08662493 +0x2ce3:  mov    $0x13,%ebx
08662498 +0x2ce8:  jmp    086624dd <+0x2d2d>
0866249a +0x2cea:  mov    $0x1,%ebx
0866249f +0x2cef:  jmp    086624dd <+0x2d2d>
086624a1 +0x2cf1:  mov    $0x1,%ebx
086624a6 +0x2cf6:  jmp    086624dd <+0x2d2d>
086624a8 +0x2cf8:  mov    $0x1,%ebx
086624ad +0x2cfd:  jmp    086624dd <+0x2d2d>
086624af +0x2cff:  jmp    086624b8 <+0x2d08>
086624b1 +0x2d01:  mov    $0x1,%ebx
086624b6 +0x2d06:  jmp    086624dd <+0x2d2d>
086624b8 +0x2d08:  mov    $0x0,%ebx
086624bd +0x2d0d:  jmp    086624dd <+0x2d2d>
086624bf +0x2d0f:  mov    %edx,%ebx
086624c1 +0x2d11:  mov    %eax,%esi
086624c3 +0x2d13:  lea    -0xf4(%ebp),%eax
086624c9 +0x2d19:  mov    %eax,(%esp)
086624cc +0x2d1c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086624d1 +0x2d21:  mov    %esi,%eax
086624d3 +0x2d23:  mov    %ebx,%edx
086624d5 +0x2d25:  mov    %eax,(%esp)
086624d8 +0x2d28:  call   08ae3750 <_Unwind_Resume>
086624dd +0x2d2d:  lea    -0xf4(%ebp),%eax
086624e3 +0x2d33:  mov    %eax,(%esp)
086624e6 +0x2d36:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086624eb +0x2d3b:  mov    %ebx,%eax
086624ed +0x2d3d:  lea    -0xc(%ebp),%esp
086624f0 +0x2d40:  add    $0x0,%esp
086624f3 +0x2d43:  pop    %ebx
086624f4 +0x2d44:  pop    %esi
086624f5 +0x2d45:  pop    %edi
086624f6 +0x2d46:  pop    %ebp
086624f7 +0x2d47:  ret
```

## 反编译 C

```c
// CUser::exchange_interspace @ 0x865f7b0

/* CUser::exchange_interspace(int, int, unsigned long, int, int, int, unsigned long, int*) */

int __thiscall
CUser::exchange_interspace
          (CUser *this,int param_1,int param_2,ulong param_3,int param_4,int param_5,int param_6,
          ulong param_7,int *param_8)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  CDataManager *this_00;
  int iVar4;
  GameWorld *pGVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  CGameManager *pCVar8;
  ServiceRestrictManager *pSVar9;
  CCargo *pCVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined1 local_3e0;
  undefined1 local_3d4;
  char local_3d3;
  undefined4 local_3cd;
  undefined1 local_397;
  char local_396;
  undefined4 local_390;
  Inven_Item local_35a;
  char cStack_359;
  undefined2 uStack_358;
  undefined2 local_356;
  undefined2 uStack_354;
  undefined4 local_352;
  undefined4 local_34e;
  undefined4 local_34a;
  undefined4 local_346;
  undefined4 local_342;
  undefined4 local_33e;
  undefined4 local_33a;
  undefined4 local_336;
  undefined4 local_332;
  undefined4 local_32e;
  undefined4 local_32a;
  undefined4 local_326;
  undefined4 local_322;
  undefined1 local_31e;
  undefined4 local_31d;
  undefined4 uStack_319;
  undefined4 uStack_315;
  undefined4 local_311;
  undefined4 local_30d;
  undefined4 local_309;
  undefined4 local_305;
  undefined4 local_301;
  undefined4 local_2fd;
  undefined4 local_2f9;
  undefined4 local_2f5;
  undefined4 local_2f1;
  undefined4 local_2ed;
  undefined4 local_2e9;
  undefined4 local_2e5;
  undefined1 local_2e1;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined1 local_2a3 [7];
  int local_29c;
  undefined1 local_266 [7];
  int local_25f;
  undefined1 local_229;
  char local_228;
  undefined4 local_227;
  undefined4 local_222;
  Inven_Item local_1ec;
  char cStack_1eb;
  undefined2 uStack_1ea;
  undefined2 local_1e8;
  undefined2 uStack_1e6;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined1 local_1af;
  char local_1ae;
  undefined4 local_1ad;
  undefined4 local_1a8;
  Inven_Item local_172;
  char local_171;
  Inven_Item local_135;
  char cStack_134;
  undefined2 uStack_133;
  undefined2 local_131;
  undefined2 uStack_12f;
  undefined4 local_12d;
  undefined4 local_129;
  undefined4 local_125;
  undefined4 local_121;
  undefined4 local_11d;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  undefined4 local_105;
  undefined4 local_101;
  undefined4 local_fd;
  undefined1 local_f9;
  PacketGuard local_f8 [12];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  int local_8c;
  CTradeSpace *local_88;
  int local_84;
  int *local_80;
  char local_79;
  int local_78;
  CParty *local_74;
  int local_70;
  CAccountCargo *local_6c;
  char local_65;
  int local_64;
  char local_5d;
  int local_5c;
  CAccountCargo *local_58;
  char local_51;
  int local_50;
  int local_4c;
  Inven_Item *local_48;
  int local_44;
  int local_40;
  Inven_Item *local_3c;
  int local_38;
  int local_34;
  CAccountCargo *local_30;
  CAccountCargo *local_2c;
  char local_25;
  CAccountCargo *local_24;
  char local_1d;
  
  PacketGuard::PacketGuard(local_f8);
  Inven_Item::Inven_Item(&local_135);
  local_8c = 0;
                    /* try { // try from 0865f812 to 08662481 has its CatchHandler @ 086624bf */
  cVar2 = _checkItemMovable(this,param_1,param_2,param_3,param_5,param_6,param_7);
  if (cVar2 != '\x01') {
    *param_8 = -1;
    iVar4 = 0x15;
    goto LAB_086624dd;
  }
  sVar3 = (short)param_2;
  switch(param_1) {
  case 0:
    switch(param_5) {
    case 0:
      local_84 = 0;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_84 = CInventory::move_item(pCVar6,1,param_2,1,param_6);
      iVar4 = local_84;
      if (local_84 == 0) {
        *param_8 = param_6;
        iVar4 = 0;
      }
      goto LAB_086624dd;
    default:
      iVar4 = 1;
      goto LAB_086624dd;
    case 2:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      uVar7 = 1;
      iVar14 = param_2;
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      iVar4 = CONCAT22(local_131,uStack_133);
      this_00 = (CDataManager *)G_CDataManager();
      local_80 = (int *)CDataManager::find_item(this_00,iVar4);
      if (local_80 == (int *)0x0) {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      cVar2 = (**(code **)(*local_80 + 0x40))(local_80,iVar4,uVar7,iVar14);
      if (cVar2 != '\0') {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      if ((0x1963 < CONCAT22(local_131,uStack_133)) && (CONCAT22(local_131,uStack_133) < 7000)) {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      if (cStack_134 == '\x01') {
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        cVar2 = CCargo::check_slot_empty(pCVar10,param_6);
        iVar4 = param_6;
        if (cVar2 != '\x01') {
          pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
          iVar4 = CCargo::get_empty_slot(pCVar10);
          if (iVar4 < 0) {
            iVar4 = 4;
            goto LAB_086624dd;
          }
        }
      }
      else {
        if (cStack_134 == '\x04') {
          iVar4 = 0x17;
          goto LAB_086624dd;
        }
        iVar4 = Inven_Item::get_add_info(&local_135);
        if (iVar4 < param_4) {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        Inven_Item::set_add_info(&local_135,param_4);
        local_78 = 0;
        iVar4 = CONCAT22(local_131,uStack_133);
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        local_78 = CCargo::check_item_exist(pCVar10,iVar4);
        iVar4 = local_78;
        if (local_78 < 0) {
          pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
          cVar2 = CCargo::check_slot_empty(pCVar10,param_6);
          iVar4 = param_6;
          if (cVar2 != '\x01') {
            pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
            iVar4 = CCargo::get_empty_slot(pCVar10);
            if (iVar4 < 0) {
              iVar4 = 4;
              goto LAB_086624dd;
            }
          }
        }
      }
      param_6 = iVar4;
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      iVar4 = CCargo::tryInsertItemSpecialSlot(pCVar10,&local_135,param_6);
      if (iVar4 < 0) {
        iVar4 = 4;
        goto LAB_086624dd;
      }
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_79 = CInventory::delete_item(pCVar6,1,param_2,param_4,7,1);
      if (local_79 == '\0') {
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_ec,
                           "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                           ,0x3b21,5);
        cMyTrace::operator()(local_ec,"delete_item failed %d %d %d",uVar7,param_2,param_4);
      }
      else {
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
        iVar4 = CCargo::insert_item_special_slot(pCVar10,&local_135,iVar4);
        *param_8 = iVar4;
        CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        CCargo::get_cargo_slot((int)&local_172);
        if (local_171 == '\x01') {
          cUserHistoryLog::ItemAddCargo
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_131,uStack_133),param_4,1);
        }
        else {
          iVar4 = Inven_Item::get_add_info(&local_172);
          cUserHistoryLog::ItemAddCargo
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_131,uStack_133),param_4,
                     iVar4);
        }
      }
      break;
    case 3:
      cVar2 = CheckInTrade(this);
      if (cVar2 == '\0') {
        local_8c = change_equip(this,param_1,sVar3,param_6);
        iVar4 = local_8c;
        if (local_8c == 0) {
          *param_8 = param_6;
          local_74 = (CParty *)GetParty(this);
          if (local_74 != (CParty *)0x0) {
            CParty::Reset_party_overlapped_drop_ratio(local_74);
          }
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0x13;
      }
      goto LAB_086624dd;
    case 4:
      sVar3 = *(short *)(this + 0x8d002);
      pCVar8 = (CGameManager *)G_CGameManager();
      local_88 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar8,(int)sVar3);
      if (local_88 == (CTradeSpace *)0x0) {
        iVar4 = 1;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::is_empty(local_88);
      if (cVar2 != '\0') {
        *(undefined2 *)(this + 0x8d002) = 0xffff;
        iVar4 = 0x15;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::check_trade_possibility(local_88);
      if (cVar2 == '\x01') {
        cVar2 = CTradeSpace::IsLocked(local_88);
        if (cVar2 != '\0') {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        local_8c = CTradeSpace::regist_item(local_88,this,0,param_2,param_4);
        if (local_8c < 0) {
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = get_acc_id(this);
          uVar11 = NumberToString(uVar12,0);
          cMyTrace::cMyTrace(local_dc,
                             "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                             ,0x3b57,5);
          cMyTrace::operator()
                    (local_dc,
                     "(regist_item(): %d)(m_id: %s) (CharacNo: %d) (from_slot: %d) (item_count: %d)"
                     ,local_8c,uVar11,uVar7,param_2,param_4);
          if (local_8c == -4) {
            iVar4 = 0x5e;
          }
          else {
            iVar4 = 0x11;
          }
          goto LAB_086624dd;
        }
        *param_8 = local_8c;
      }
      else {
        CTradeSpace::cancel_trade(local_88);
        pCVar8 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar8,local_88);
      }
      break;
    case 0xc:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      pSVar9 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar2 = ServiceRestrictManager::isRestricted(pSVar9,this,1,0x1b);
      if (cVar2 != '\0') {
        iVar4 = 0xd1;
        goto LAB_086624dd;
      }
      local_70 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,1);
      iVar4 = local_70;
      if (local_70 != 0) goto LAB_086624dd;
      cVar2 = IsExistAccountCargo(this);
      if (cVar2 != '\x01') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      local_6c = (CAccountCargo *)GetAccountCargo(this);
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      cVar2 = IsTradeLimitAttachTypeItem(&local_135);
      if (cVar2 != '\0') {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      cVar2 = CAccountCargo::CheckInsertCondition(local_6c,&local_135);
      if (cVar2 != '\x01') {
        iVar4 = 0x11;
        goto LAB_086624dd;
      }
      if (cStack_134 == '\x01') {
        cVar2 = CAccountCargo::CheckSlotEmpty(local_6c,param_6);
        if ((cVar2 != '\x01') && (param_6 = CAccountCargo::GetEmptySlot(local_6c), param_6 < 0)) {
          iVar4 = 4;
          goto LAB_086624dd;
        }
      }
      else {
        iVar4 = Inven_Item::get_add_info(&local_135);
        if (iVar4 < param_4) {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        Inven_Item::set_add_info(&local_135,param_4);
        local_64 = CAccountCargo::GetSpecificItemSlot(local_6c,CONCAT22(local_131,uStack_133));
        if (local_64 < 0) {
          cVar2 = CAccountCargo::CheckSlotEmpty(local_6c,param_6);
          if ((cVar2 != '\x01') && (param_6 = CAccountCargo::GetEmptySlot(local_6c), param_6 < 0)) {
            iVar4 = 4;
            goto LAB_086624dd;
          }
        }
        else {
          cVar2 = CAccountCargo::CheckStackLimit
                            (local_6c,local_64,CONCAT22(local_131,uStack_133),param_4);
          if (cVar2 != '\x01') {
            iVar4 = 4;
            goto LAB_086624dd;
          }
          param_6 = local_64;
        }
      }
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_65 = CInventory::delete_item(pCVar6,1,param_2,param_4,0x25,1);
      if (local_65 != '\0') {
        iVar4 = CAccountCargo::InsertItem(local_6c,&local_135,param_6);
        *param_8 = iVar4;
        CAccountCargo::GetSlot((int)&local_1af);
        if (local_1ae == '\x01') {
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(this + 0x79700),local_1ad,1,1,0x2d);
        }
        else {
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(this + 0x79700),local_1ad,local_1a8,param_4,0x2d);
        }
      }
    }
    break;
  case 1:
    Inven_Item::Inven_Item((Inven_Item *)&local_2e0);
    Inven_Item::Inven_Item((Inven_Item *)&local_31d);
    if (param_5 == 3) {
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_31d = local_41c;
      uStack_319 = local_418;
      uStack_315 = local_414;
      local_311 = local_410;
      local_30d = local_40c;
      local_309 = local_408;
      local_305 = local_404;
      local_301 = local_400;
      local_2fd = local_3fc;
      local_2f9 = local_3f8;
      local_2f5 = local_3f4;
      local_2f1 = local_3f0;
      local_2ed = local_3ec;
      local_2e9 = local_3e8;
      local_2e5 = local_3e4;
      local_2e1 = local_3e0;
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_2e0 = local_41c;
      uStack_2dc = local_418;
      uStack_2d8 = local_414;
      local_2d4 = local_410;
      local_2d0 = local_40c;
      local_2cc = local_408;
      local_2c8 = local_404;
      local_2c4 = local_400;
      local_2c0 = local_3fc;
      local_2bc = local_3f8;
      local_2b8 = local_3f4;
      local_2b4 = local_3f0;
      local_2b0 = local_3ec;
      local_2ac = local_3e8;
      local_2a8 = local_3e4;
      local_2a4 = local_3e0;
    }
    else if (param_5 == 4) {
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_31d = local_41c;
      uStack_319 = local_418;
      uStack_315 = local_414;
      local_311 = local_410;
      local_30d = local_40c;
      local_309 = local_408;
      local_305 = local_404;
      local_301 = local_400;
      local_2fd = local_3fc;
      local_2f9 = local_3f8;
      local_2f5 = local_3f4;
      local_2f1 = local_3f0;
      local_2ed = local_3ec;
      local_2e9 = local_3e8;
      local_2e5 = local_3e4;
      local_2e1 = local_3e0;
    }
    else if (param_5 == 1) {
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_31d = local_41c;
      uStack_319 = local_418;
      uStack_315 = local_414;
      local_311 = local_410;
      local_30d = local_40c;
      local_309 = local_408;
      local_305 = local_404;
      local_301 = local_400;
      local_2fd = local_3fc;
      local_2f9 = local_3f8;
      local_2f5 = local_3f4;
      local_2f1 = local_3f0;
      local_2ed = local_3ec;
      local_2e9 = local_3e8;
      local_2e5 = local_3e4;
      local_2e1 = local_3e0;
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)&local_41c,iVar4);
      local_2e0 = local_41c;
      uStack_2dc = local_418;
      uStack_2d8 = local_414;
      local_2d4 = local_410;
      local_2d0 = local_40c;
      local_2cc = local_408;
      local_2c8 = local_404;
      local_2c4 = local_400;
      local_2c0 = local_3fc;
      local_2bc = local_3f8;
      local_2b8 = local_3f4;
      local_2b4 = local_3f0;
      local_2b0 = local_3ec;
      local_2ac = local_3e8;
      local_2a8 = local_3e4;
      local_2a4 = local_3e0;
    }
    cVar2 = WongWork::CAvatarItemMgr::IsTempKey(CONCAT31((undefined3)uStack_315,uStack_319._3_1_));
    if (cVar2 == '\0') {
      cVar2 = WongWork::CAvatarItemMgr::IsTempKey(CONCAT31((undefined3)uStack_2d8,uStack_2dc._3_1_))
      ;
      if (cVar2 != '\0') goto LAB_08661627;
      bVar1 = false;
    }
    else {
LAB_08661627:
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = 0x13;
      goto LAB_086624dd;
    }
    if (param_5 == 3) {
      local_8c = change_equip(this,param_1,sVar3,param_6);
      iVar4 = local_8c;
      if (0 < local_8c) goto LAB_086624dd;
      *param_8 = param_6;
    }
    else if (param_5 == 4) {
      sVar3 = *(short *)(this + 0x8d002);
      pCVar8 = (CGameManager *)G_CGameManager();
      local_88 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar8,(int)sVar3);
      if (local_88 == (CTradeSpace *)0x0) {
        iVar4 = 1;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::is_empty(local_88);
      if (cVar2 != '\0') {
        *(undefined2 *)(this + 0x8d002) = 0xffff;
        iVar4 = 0x15;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::check_trade_possibility(local_88);
      if (cVar2 == '\x01') {
        cVar2 = CTradeSpace::IsLocked(local_88);
        if (cVar2 != '\0') {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        local_8c = CTradeSpace::regist_item(local_88,this,1,param_2,param_4);
        if (local_8c < 0) {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        *param_8 = local_8c;
      }
      else {
        CTradeSpace::cancel_trade(local_88);
        pCVar8 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar8,local_88);
      }
    }
    else {
      if (param_5 != 1) {
        iVar4 = 1;
        goto LAB_086624dd;
      }
      local_44 = 0;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_44 = CInventory::move_item(pCVar6,2,param_2,2,param_6);
      iVar4 = local_44;
      if (local_44 != 0) goto LAB_086624dd;
      *param_8 = param_6;
    }
    break;
  case 2:
    switch(param_5) {
    case 0:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        break;
      }
      CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      CCargo::get_cargo_slot((int)&local_41c);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      local_1e4 = local_414;
      local_1e0 = local_410;
      local_1dc = local_40c;
      local_1d8 = local_408;
      local_1d4 = local_404;
      local_1d0 = local_400;
      local_1cc = local_3fc;
      local_1c8 = local_3f8;
      local_1c4 = local_3f4;
      local_1c0 = local_3f0;
      local_1bc = local_3ec;
      local_1b8 = local_3e8;
      local_1b4 = local_3e4;
      local_1b0 = local_3e0;
      local_1ec = local_135;
      cStack_1eb = cStack_134;
      uStack_1ea = uStack_133;
      local_1e8 = local_131;
      uStack_1e6 = uStack_12f;
      if (cStack_134 != '\x01') {
        Inven_Item::set_add_info(&local_1ec,param_4);
      }
      uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      iVar4 = CInventory::tryInsertItemIntoInventory
                        (uVar7,CONCAT22(uStack_1ea,CONCAT11(cStack_1eb,local_1ec)),
                         CONCAT22(uStack_1e6,local_1e8),local_1e4,local_1e0,local_1dc,local_1d8,
                         local_1d4,local_1d0,local_1cc,local_1c8,local_1c4,local_1c0,local_1bc,
                         local_1b8,local_1b4,local_1b0);
      if (iVar4 == -1) {
        iVar4 = 0x11;
        break;
      }
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      local_5d = CCargo::delete_item(pCVar10,param_2,param_4,7);
      if (local_5d == '\0') {
        uVar7 = CONCAT22(local_131,uStack_133);
        uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        cMyTrace::cMyTrace(local_bc,
                           "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                           ,0x3bea,5);
        cMyTrace::operator()(local_bc,"delete_item failed %d %d %d",uVar11,uVar7,param_4);
      }
      else {
        uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        iVar4 = CInventory::insertItemIntoInventory
                          (uVar7,CONCAT22(uStack_1ea,CONCAT11(cStack_1eb,local_1ec)),
                           CONCAT22(uStack_1e6,local_1e8),local_1e4,local_1e0,local_1dc,local_1d8,
                           local_1d4,local_1d0,local_1cc,local_1c8,local_1c4,local_1c0,local_1bc,
                           local_1b8,local_1b4,local_1b0,7,1,0);
        *param_8 = iVar4;
        if (*param_8 == -1) {
          uVar7 = CONCAT22(local_1e8,uStack_1ea);
          uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = get_acc_id(this);
          uVar13 = NumberToString(uVar12,0);
          cMyTrace::cMyTrace(local_cc,
                             "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                             ,0x3be5,5);
          cMyTrace::operator()
                    (local_cc,"insertItemIntoInventory failed %s %d %d %d",uVar13,uVar11,uVar7,
                     param_4);
        }
      }
      goto LAB_086624b8;
    default:
      iVar4 = 1;
      break;
    case 2:
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      cVar2 = CCargo::move_item(pCVar10,param_2,param_6);
      if (cVar2 == '\x01') {
        *param_8 = param_6;
        iVar4 = 0;
      }
      else {
        iVar4 = 0x11;
      }
      break;
    case 3:
      cVar2 = CheckInTrade(this);
      if (cVar2 == '\0') {
        iVar4 = 1;
      }
      else {
        iVar4 = 0x13;
      }
      break;
    case 7:
      iVar4 = 1;
      break;
    case 0xc:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        break;
      }
      local_5c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,1);
      iVar4 = local_5c;
      if (local_5c != 0) break;
      cVar2 = IsExistAccountCargo(this);
      if (cVar2 != '\x01') {
        iVar4 = 0x13;
        break;
      }
      local_58 = (CAccountCargo *)GetAccountCargo(this);
      CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      CCargo::get_cargo_slot((int)&local_41c);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      cVar2 = CAccountCargo::CheckInsertCondition(local_58,&local_135);
      if (cVar2 != '\x01') {
        iVar4 = 0x11;
        break;
      }
      if (cStack_134 == '\x01') {
        cVar2 = CAccountCargo::CheckSlotEmpty(local_58,param_6);
        if ((cVar2 != '\x01') && (param_6 = CAccountCargo::GetEmptySlot(local_58), param_6 < 0)) {
          iVar4 = 4;
          break;
        }
      }
      else {
        iVar4 = Inven_Item::get_add_info(&local_135);
        if (iVar4 < param_4) {
          iVar4 = 0x11;
          break;
        }
        Inven_Item::set_add_info(&local_135,param_4);
        local_50 = CAccountCargo::GetSpecificItemSlot(local_58,CONCAT22(local_131,uStack_133));
        if (local_50 < 0) {
          cVar2 = CAccountCargo::CheckSlotEmpty(local_58,param_6);
          if ((cVar2 != '\x01') && (param_6 = CAccountCargo::GetEmptySlot(local_58), param_6 < 0)) {
            iVar4 = 4;
            break;
          }
        }
        else {
          cVar2 = CAccountCargo::CheckStackLimit
                            (local_58,local_50,CONCAT22(local_131,uStack_133),param_4);
          if (cVar2 != '\x01') {
            iVar4 = 4;
            break;
          }
          param_6 = local_50;
        }
      }
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      local_51 = CCargo::delete_item(pCVar10,param_2,param_4,0x25);
      if (local_51 != '\0') {
        iVar4 = CAccountCargo::InsertItem(local_58,&local_135,param_6);
        *param_8 = iVar4;
        CAccountCargo::GetSlot((int)&local_229);
        if (local_228 == '\x01') {
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(this + 0x79700),local_227,1,1,0x2e);
        }
        else {
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(this + 0x79700),local_227,local_222,param_4,0x2e);
        }
      }
      goto LAB_086624b8;
    }
    goto LAB_086624dd;
  case 3:
    switch(param_5) {
    case 0:
      cVar2 = CheckInTrade(this);
      if (cVar2 == '\0') {
        local_8c = change_equip(this,param_5,(short)param_6,param_2);
        iVar4 = local_8c;
        if (local_8c == 0) {
          *param_8 = param_2;
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0x13;
      }
      break;
    case 1:
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)local_266,iVar4);
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::GetInvenSlot((int)local_2a3,iVar4);
      cVar2 = WongWork::CAvatarItemMgr::IsTempKey(local_25f);
      if ((cVar2 == '\0') && (cVar2 = WongWork::CAvatarItemMgr::IsTempKey(local_29c), cVar2 == '\0')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar4 = 0x13;
      }
      else {
        local_8c = change_equip(this,param_1,sVar3,param_6);
        iVar4 = local_8c;
        if (local_8c < 1) {
          *param_8 = param_6;
          iVar4 = 0;
        }
      }
      break;
    case 2:
      cVar2 = CheckInTrade(this);
      if (cVar2 == '\0') {
        iVar4 = 1;
      }
      else {
        iVar4 = 0x13;
      }
      break;
    default:
      iVar4 = 1;
      break;
    case 4:
      sVar3 = *(short *)(this + 0x8d002);
      pCVar8 = (CGameManager *)G_CGameManager();
      local_88 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar8,(int)sVar3);
      if (local_88 == (CTradeSpace *)0x0) {
        iVar4 = 1;
        break;
      }
      cVar2 = CTradeSpace::is_empty(local_88);
      if (cVar2 != '\0') {
        *(undefined2 *)(this + 0x8d002) = 0xffff;
        iVar4 = 0x15;
        break;
      }
      cVar2 = CTradeSpace::check_trade_possibility(local_88);
      if (cVar2 == '\x01') {
        cVar2 = CTradeSpace::IsLocked(local_88);
        if (cVar2 != '\0') {
          iVar4 = 0x11;
          break;
        }
        local_8c = CTradeSpace::regist_item(local_88,this,3,param_2,param_4);
        if (local_8c < 0) {
          iVar4 = 0x11;
          break;
        }
        *param_8 = local_8c;
        send_equip(this,param_2);
      }
      else {
        CTradeSpace::cancel_trade(local_88);
        pCVar8 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar8,local_88);
      }
      goto LAB_086624b8;
    case 7:
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsCheckUnusableEquipmentChannel(pGVar5);
      if (cVar2 != '\0') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        local_48 = (Inven_Item *)CInventory::GetInvenRef(pCVar6,3,param_6);
        cVar2 = online_preliminary::COnlinePreliminary::CheckUnusableEquipment(local_48);
        if (cVar2 != '\x01') {
          uVar7 = RDARScriptStringManager::findString
                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                             "game_server_msg_146",(bool *)0x0);
          SendNotiPacketMessage(this,uVar7,0);
          iVar4 = 1;
          break;
        }
      }
      local_4c = 0;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_4c = CInventory::move_item(pCVar6,0,param_2,3,param_6);
      iVar4 = local_4c;
      if (local_4c == 0) {
        *param_8 = param_6;
        send_equip(this,param_6);
        iVar4 = 0;
      }
    }
    goto LAB_086624dd;
  case 4:
    if ((7 < (uint)param_5) || ((1 << ((byte)param_5 & 0x1f) & 0x8bU) == 0)) {
      iVar4 = 1;
      goto LAB_086624dd;
    }
    sVar3 = *(short *)(this + 0x8d002);
    pCVar8 = (CGameManager *)G_CGameManager();
    local_88 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar8,(int)sVar3);
    if (local_88 == (CTradeSpace *)0x0) {
      iVar4 = 1;
      goto LAB_086624dd;
    }
    cVar2 = CTradeSpace::is_empty(local_88);
    if (cVar2 != '\0') {
      *(undefined2 *)(this + 0x8d002) = 0xffff;
      iVar4 = 0x15;
      goto LAB_086624dd;
    }
    cVar2 = CTradeSpace::check_trade_possibility(local_88);
    if (cVar2 == '\x01') {
      cVar2 = CTradeSpace::IsLocked(local_88);
      if (cVar2 != '\0') {
        iVar4 = 0x11;
        goto LAB_086624dd;
      }
      local_8c = CTradeSpace::remove_item(local_88,this,param_2,param_5,param_6,param_4);
      if (local_8c < 0) {
        iVar4 = 0x11;
        goto LAB_086624dd;
      }
      *param_8 = local_8c;
      if (param_5 == 3) {
        send_equip(this,param_6);
      }
    }
    else {
      CTradeSpace::cancel_trade(local_88);
      pCVar8 = (CGameManager *)G_CGameManager();
      CGameManager::PutTradeSpace(pCVar8,local_88);
    }
    break;
  default:
    iVar4 = 1;
    goto LAB_086624dd;
  case 7:
    if (param_5 == 4) {
      sVar3 = *(short *)(this + 0x8d002);
      pCVar8 = (CGameManager *)G_CGameManager();
      local_88 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar8,(int)sVar3);
      if (local_88 == (CTradeSpace *)0x0) {
        iVar4 = 1;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::is_empty(local_88);
      if (cVar2 != '\0') {
        *(undefined2 *)(this + 0x8d002) = 0xffff;
        iVar4 = 0x15;
        goto LAB_086624dd;
      }
      cVar2 = CTradeSpace::check_trade_possibility(local_88);
      if (cVar2 == '\x01') {
        cVar2 = CTradeSpace::IsLocked(local_88);
        if (cVar2 != '\0') {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        local_8c = CTradeSpace::regist_item(local_88,this,7,param_2,param_4);
        if (local_8c < 0) {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        *param_8 = local_8c;
      }
      else {
        CTradeSpace::cancel_trade(local_88);
        pCVar8 = (CGameManager *)G_CGameManager();
        CGameManager::PutTradeSpace(pCVar8,local_88);
      }
    }
    else {
      if (param_5 != 7) {
        if (param_5 == 3) {
          pGVar5 = (GameWorld *)G_GameWorld();
          cVar2 = GameWorld::IsCheckUnusableEquipmentChannel(pGVar5);
          if (cVar2 != '\0') {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
            local_3c = (Inven_Item *)CInventory::GetInvenRef(pCVar6,3,param_2);
            cVar2 = online_preliminary::COnlinePreliminary::CheckUnusableEquipment(local_3c);
            if (cVar2 != '\x01') {
              uVar7 = RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_146",(bool *)0x0);
              SendNotiPacketMessage(this,uVar7,0);
              iVar4 = 1;
              goto LAB_086624dd;
            }
          }
          local_40 = 0;
          pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
          local_40 = CInventory::move_item(pCVar6,3,param_2,0,param_6);
          iVar4 = local_40;
          if (local_40 == 0) {
            *param_8 = param_6;
            send_equip(this,param_6);
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 1;
        }
        goto LAB_086624dd;
      }
      local_38 = 0;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_38 = CInventory::move_item(pCVar6,3,param_2,3,param_6);
      iVar4 = local_38;
      if (local_38 != 0) goto LAB_086624dd;
      *param_8 = param_6;
    }
    break;
  case 0xc:
    pSVar9 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar9,this,1,0x1b);
    if (cVar2 != '\0') {
      iVar4 = 0xd1;
      goto LAB_086624dd;
    }
    local_34 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,1);
    iVar4 = local_34;
    if (local_34 != 0) goto LAB_086624dd;
    switch(param_5) {
    case 0:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      cVar2 = IsExistAccountCargo(this);
      if (cVar2 != '\x01') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      local_2c = (CAccountCargo *)GetAccountCargo(this);
      CAccountCargo::GetSlot((int)&local_41c);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      local_352 = local_414;
      local_34e = local_410;
      local_34a = local_40c;
      local_346 = local_408;
      local_342 = local_404;
      local_33e = local_400;
      local_33a = local_3fc;
      local_336 = local_3f8;
      local_332 = local_3f4;
      local_32e = local_3f0;
      local_32a = local_3ec;
      local_326 = local_3e8;
      local_322 = local_3e4;
      local_31e = local_3e0;
      local_35a = local_135;
      cStack_359 = cStack_134;
      uStack_358 = uStack_133;
      local_356 = local_131;
      uStack_354 = uStack_12f;
      if (cStack_134 != '\x01') {
        Inven_Item::set_add_info(&local_35a,param_4);
      }
      uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      iVar4 = CInventory::tryInsertItemIntoInventory
                        (uVar7,CONCAT22(uStack_358,CONCAT11(cStack_359,local_35a)),
                         CONCAT22(uStack_354,local_356),local_352,local_34e,local_34a,local_346,
                         local_342,local_33e,local_33a,local_336,local_332,local_32e,local_32a,
                         local_326,local_322,local_31e);
      if (iVar4 == -1) {
        iVar4 = 0x11;
        goto LAB_086624dd;
      }
      local_25 = CAccountCargo::DeleteItem(local_2c,param_2,param_4);
      if (local_25 != '\0') {
        uVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        iVar4 = CInventory::insertItemIntoInventory
                          (uVar7,CONCAT22(uStack_358,CONCAT11(cStack_359,local_35a)),
                           CONCAT22(uStack_354,local_356),local_352,local_34e,local_34a,local_346,
                           local_342,local_33e,local_33a,local_336,local_332,local_32e,local_32a,
                           local_326,local_322,local_31e,7,1,0);
        *param_8 = iVar4;
        if (*param_8 == -1) {
          uVar7 = CONCAT22(local_356,uStack_358);
          uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = get_acc_id(this);
          uVar13 = NumberToString(uVar12,0);
          cMyTrace::cMyTrace(local_ac,
                             "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                             ,0x3ed3,5);
          cMyTrace::operator()
                    (local_ac,"insertItemIntoInventory failed %s %d %d %d",uVar13,uVar11,uVar7,
                     param_4);
        }
        CAccountCargo::GetSlot((int)&local_397);
        if (local_396 == '\x01') {
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_356,uStack_358),0,1,0x26);
        }
        else {
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_356,uStack_358),local_390,
                     param_4,0x26);
        }
      }
      break;
    default:
      iVar4 = 1;
      goto LAB_086624dd;
    case 2:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      cVar2 = IsExistAccountCargo(this);
      if (cVar2 != '\x01') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      local_24 = (CAccountCargo *)GetAccountCargo(this);
      CAccountCargo::GetSlot((int)&local_41c);
      local_135 = SUB41(local_41c,0);
      cStack_134 = (char)((uint)local_41c >> 8);
      uStack_133 = (undefined2)((uint)local_41c >> 0x10);
      local_131 = (undefined2)local_418;
      uStack_12f = (undefined2)((uint)local_418 >> 0x10);
      local_12d = local_414;
      local_129 = local_410;
      local_125 = local_40c;
      local_121 = local_408;
      local_11d = local_404;
      local_119 = local_400;
      local_115 = local_3fc;
      local_111 = local_3f8;
      local_10d = local_3f4;
      local_109 = local_3f0;
      local_105 = local_3ec;
      local_101 = local_3e8;
      local_fd = local_3e4;
      local_f9 = local_3e0;
      if ((0x1963 < CONCAT22(local_131,uStack_133)) && (CONCAT22(local_131,uStack_133) < 7000)) {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      if (cStack_134 == '\x04') {
        iVar4 = 0x17;
        goto LAB_086624dd;
      }
      if (cStack_134 == '\x01') {
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        cVar2 = CCargo::check_slot_empty(pCVar10,param_6);
        if (cVar2 != '\x01') {
          pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
          param_6 = CCargo::get_empty_slot(pCVar10);
          if (param_6 < 0) {
            iVar4 = 4;
            goto LAB_086624dd;
          }
        }
      }
      else {
        iVar4 = Inven_Item::get_add_info(&local_135);
        if (iVar4 < param_4) {
          iVar4 = 0x11;
          goto LAB_086624dd;
        }
        Inven_Item::set_add_info(&local_135,param_4);
        iVar4 = CONCAT22(local_131,uStack_133);
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
        iVar4 = CCargo::check_item_exist(pCVar10,iVar4);
        if (iVar4 < 0) {
          pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
          cVar2 = CCargo::check_slot_empty(pCVar10,param_6);
          if (cVar2 != '\x01') {
            pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
            param_6 = CCargo::get_empty_slot(pCVar10);
            if (param_6 < 0) {
              iVar4 = 4;
              goto LAB_086624dd;
            }
          }
        }
      }
      pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      iVar4 = CCargo::tryInsertItemSpecialSlot(pCVar10,&local_135,param_6);
      if (iVar4 < 0) {
        iVar4 = 4;
        goto LAB_086624dd;
      }
      local_1d = CAccountCargo::DeleteItem(local_24,param_2,param_4);
      if (local_1d != '\0') {
        pCVar10 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
        iVar4 = CCargo::insert_item_special_slot(pCVar10,&local_135,iVar4);
        *param_8 = iVar4;
        if (*param_8 == -1) {
          uVar7 = CONCAT22(local_131,uStack_133);
          uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = get_acc_id(this);
          uVar13 = NumberToString(uVar12,0);
          cMyTrace::cMyTrace(local_9c,
                             "int CUser::exchange_interspace(int, int, itemIndexOnlyServer_t, int, int, int, itemIndexOnlyServer_t, int*)"
                             ,0x3f17,5);
          cMyTrace::operator()
                    (local_9c,"insertItemIntoInventory failed %s %d %d %d",uVar13,uVar11,uVar7,
                     param_4);
        }
        CAccountCargo::GetSlot((int)&local_3d4);
        if (local_3d3 == '\x01') {
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_131,uStack_133),0,1,0x27);
        }
        else {
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(this + 0x79700),CONCAT22(local_131,uStack_133),local_3cd,
                     param_4,0x27);
        }
      }
      break;
    case 3:
      cVar2 = CheckInTrade(this);
      if (cVar2 == '\0') {
        iVar4 = 1;
      }
      else {
        iVar4 = 0x13;
      }
      goto LAB_086624dd;
    case 7:
      iVar4 = 1;
      goto LAB_086624dd;
    case 0xc:
      cVar2 = CheckInTrade(this);
      if (cVar2 != '\0') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      cVar2 = IsExistAccountCargo(this);
      if (cVar2 != '\x01') {
        iVar4 = 0x13;
        goto LAB_086624dd;
      }
      local_30 = (CAccountCargo *)GetAccountCargo(this);
      cVar2 = CAccountCargo::MoveItem(local_30,param_2,param_6);
      if (cVar2 != '\x01') {
        iVar4 = 0x11;
        goto LAB_086624dd;
      }
      *param_8 = param_6;
    }
  }
LAB_086624b8:
  iVar4 = 0;
LAB_086624dd:
  PacketGuard::~PacketGuard(local_f8);
  return iVar4;
}
```
