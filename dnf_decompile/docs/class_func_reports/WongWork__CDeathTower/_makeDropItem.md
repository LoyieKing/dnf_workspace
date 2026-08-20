# _makeDropItem

`_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item`

`WongWork::CDeathTower::_makeDropItem(CUser*, char, int, int, map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x0846638c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846638c  _ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item
#           WongWork::CDeathTower::_makeDropItem(CUser*, char, int, int, map_item&)
# range [0x0846638c, 0x08466b01]
0846638c +0x000:  push   %ebp
0846638d +0x001:  mov    %esp,%ebp
0846638f +0x003:  push   %ebx
08466390 +0x004:  sub    $0xc4,%esp
08466396 +0x00a:  mov    0x10(%ebp),%eax
08466399 +0x00d:  mov    %al,-0x5c(%ebp)
0846639c +0x010:  lea    -0x55(%ebp),%eax
0846639f +0x013:  mov    %eax,(%esp)
084663a2 +0x016:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084663a7 +0x01b:  movsbl -0x5c(%ebp),%eax
084663ab +0x01f:  cmp    $0x2,%eax
084663ae +0x022:  je     084664da <+0x14e>
084663b4 +0x028:  cmp    $0x2,%eax
084663b7 +0x02b:  jg     084663c2 <+0x36>
084663b9 +0x02d:  test   %eax,%eax
084663bb +0x02f:  je     084663d9 <+0x4d>
084663bd +0x031:  jmp    084666f8 <+0x36c>
084663c2 +0x036:  cmp    $0x3,%eax
084663c5 +0x039:  je     08466585 <+0x1f9>
084663cb +0x03f:  cmp    $0x7,%eax
084663ce +0x042:  je     08466638 <+0x2ac>
084663d4 +0x048:  jmp    084666f8 <+0x36c>
084663d9 +0x04d:  cmpl   $0x0,0x14(%ebp)
084663dd +0x051:  jne    08466427 <+0x9b>
084663df +0x053:  mov    0x1c(%ebp),%eax
084663e2 +0x056:  movb   $0x0,(%eax)
084663e5 +0x059:  mov    0x1c(%ebp),%eax
084663e8 +0x05c:  movb   $0x2,0x11(%eax)
084663ec +0x060:  mov    0x1c(%ebp),%eax
084663ef +0x063:  movl   $0x0,0x12(%eax)
084663f6 +0x06a:  mov    0x1c(%ebp),%eax
084663f9 +0x06d:  lea    0x10(%eax),%edx
084663fc +0x070:  mov    0x18(%ebp),%eax
084663ff +0x073:  mov    %eax,0x4(%esp)
08466403 +0x077:  mov    %edx,(%esp)
08466406 +0x07a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0846640b +0x07f:  mov    0x1c(%ebp),%eax
0846640e +0x082:  movw   $0x0,0x1b(%eax)
08466414 +0x088:  mov    0x1c(%ebp),%eax
08466417 +0x08b:  add    $0x10,%eax
0846641a +0x08e:  mov    %eax,(%esp)
0846641d +0x091:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08466422 +0x096:  jmp    08466703 <+0x377>
08466427 +0x09b:  mov    0xc(%ebp),%eax
0846642a +0x09e:  mov    %eax,(%esp)
0846642d +0x0a1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08466432 +0x0a6:  lea    -0xa8(%ebp),%edx
08466438 +0x0ac:  mov    0x14(%ebp),%ecx
0846643b +0x0af:  mov    %ecx,0xc(%esp)
0846643f +0x0b3:  movl   $0x1,0x8(%esp)
08466447 +0x0bb:  mov    %eax,0x4(%esp)
0846644b +0x0bf:  mov    %edx,(%esp)
0846644e +0x0c2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08466453 +0x0c7:  sub    $0x4,%esp
08466456 +0x0ca:  mov    -0xa8(%ebp),%eax
0846645c +0x0d0:  mov    %eax,-0x55(%ebp)
0846645f +0x0d3:  mov    -0xa4(%ebp),%eax
08466465 +0x0d9:  mov    %eax,-0x51(%ebp)
08466468 +0x0dc:  mov    -0xa0(%ebp),%eax
0846646e +0x0e2:  mov    %eax,-0x4d(%ebp)
08466471 +0x0e5:  mov    -0x9c(%ebp),%eax
08466477 +0x0eb:  mov    %eax,-0x49(%ebp)
0846647a +0x0ee:  mov    -0x98(%ebp),%eax
08466480 +0x0f4:  mov    %eax,-0x45(%ebp)
08466483 +0x0f7:  mov    -0x94(%ebp),%eax
08466489 +0x0fd:  mov    %eax,-0x41(%ebp)
0846648c +0x100:  mov    -0x90(%ebp),%eax
08466492 +0x106:  mov    %eax,-0x3d(%ebp)
08466495 +0x109:  mov    -0x8c(%ebp),%eax
0846649b +0x10f:  mov    %eax,-0x39(%ebp)
0846649e +0x112:  mov    -0x88(%ebp),%eax
084664a4 +0x118:  mov    %eax,-0x35(%ebp)
084664a7 +0x11b:  mov    -0x84(%ebp),%eax
084664ad +0x121:  mov    %eax,-0x31(%ebp)
084664b0 +0x124:  mov    -0x80(%ebp),%eax
084664b3 +0x127:  mov    %eax,-0x2d(%ebp)
084664b6 +0x12a:  mov    -0x7c(%ebp),%eax
084664b9 +0x12d:  mov    %eax,-0x29(%ebp)
084664bc +0x130:  mov    -0x78(%ebp),%eax
084664bf +0x133:  mov    %eax,-0x25(%ebp)
084664c2 +0x136:  mov    -0x74(%ebp),%eax
084664c5 +0x139:  mov    %eax,-0x21(%ebp)
084664c8 +0x13c:  mov    -0x70(%ebp),%eax
084664cb +0x13f:  mov    %eax,-0x1d(%ebp)
084664ce +0x142:  movzbl -0x6c(%ebp),%eax
084664d2 +0x146:  mov    %al,-0x19(%ebp)
084664d5 +0x149:  jmp    08466703 <+0x377>
084664da +0x14e:  mov    0xc(%ebp),%eax
084664dd +0x151:  mov    %eax,(%esp)
084664e0 +0x154:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
084664e5 +0x159:  lea    -0xa8(%ebp),%edx
084664eb +0x15f:  mov    0x14(%ebp),%ecx
084664ee +0x162:  mov    %ecx,0x8(%esp)
084664f2 +0x166:  mov    %eax,0x4(%esp)
084664f6 +0x16a:  mov    %edx,(%esp)
084664f9 +0x16d:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
084664fe +0x172:  sub    $0x4,%esp
08466501 +0x175:  mov    -0xa8(%ebp),%eax
08466507 +0x17b:  mov    %eax,-0x55(%ebp)
0846650a +0x17e:  mov    -0xa4(%ebp),%eax
08466510 +0x184:  mov    %eax,-0x51(%ebp)
08466513 +0x187:  mov    -0xa0(%ebp),%eax
08466519 +0x18d:  mov    %eax,-0x4d(%ebp)
0846651c +0x190:  mov    -0x9c(%ebp),%eax
08466522 +0x196:  mov    %eax,-0x49(%ebp)
08466525 +0x199:  mov    -0x98(%ebp),%eax
0846652b +0x19f:  mov    %eax,-0x45(%ebp)
0846652e +0x1a2:  mov    -0x94(%ebp),%eax
08466534 +0x1a8:  mov    %eax,-0x41(%ebp)
08466537 +0x1ab:  mov    -0x90(%ebp),%eax
0846653d +0x1b1:  mov    %eax,-0x3d(%ebp)
08466540 +0x1b4:  mov    -0x8c(%ebp),%eax
08466546 +0x1ba:  mov    %eax,-0x39(%ebp)
08466549 +0x1bd:  mov    -0x88(%ebp),%eax
0846654f +0x1c3:  mov    %eax,-0x35(%ebp)
08466552 +0x1c6:  mov    -0x84(%ebp),%eax
08466558 +0x1cc:  mov    %eax,-0x31(%ebp)
0846655b +0x1cf:  mov    -0x80(%ebp),%eax
0846655e +0x1d2:  mov    %eax,-0x2d(%ebp)
08466561 +0x1d5:  mov    -0x7c(%ebp),%eax
08466564 +0x1d8:  mov    %eax,-0x29(%ebp)
08466567 +0x1db:  mov    -0x78(%ebp),%eax
0846656a +0x1de:  mov    %eax,-0x25(%ebp)
0846656d +0x1e1:  mov    -0x74(%ebp),%eax
08466570 +0x1e4:  mov    %eax,-0x21(%ebp)
08466573 +0x1e7:  mov    -0x70(%ebp),%eax
08466576 +0x1ea:  mov    %eax,-0x1d(%ebp)
08466579 +0x1ed:  movzbl -0x6c(%ebp),%eax
0846657d +0x1f1:  mov    %al,-0x19(%ebp)
08466580 +0x1f4:  jmp    08466703 <+0x377>
08466585 +0x1f9:  mov    0xc(%ebp),%eax
08466588 +0x1fc:  mov    %eax,(%esp)
0846658b +0x1ff:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08466590 +0x204:  lea    -0xa8(%ebp),%edx
08466596 +0x20a:  mov    0x14(%ebp),%ecx
08466599 +0x20d:  mov    %ecx,0xc(%esp)
0846659d +0x211:  movl   $0x0,0x8(%esp)
084665a5 +0x219:  mov    %eax,0x4(%esp)
084665a9 +0x21d:  mov    %edx,(%esp)
084665ac +0x220:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084665b1 +0x225:  sub    $0x4,%esp
084665b4 +0x228:  mov    -0xa8(%ebp),%eax
084665ba +0x22e:  mov    %eax,-0x55(%ebp)
084665bd +0x231:  mov    -0xa4(%ebp),%eax
084665c3 +0x237:  mov    %eax,-0x51(%ebp)
084665c6 +0x23a:  mov    -0xa0(%ebp),%eax
084665cc +0x240:  mov    %eax,-0x4d(%ebp)
084665cf +0x243:  mov    -0x9c(%ebp),%eax
084665d5 +0x249:  mov    %eax,-0x49(%ebp)
084665d8 +0x24c:  mov    -0x98(%ebp),%eax
084665de +0x252:  mov    %eax,-0x45(%ebp)
084665e1 +0x255:  mov    -0x94(%ebp),%eax
084665e7 +0x25b:  mov    %eax,-0x41(%ebp)
084665ea +0x25e:  mov    -0x90(%ebp),%eax
084665f0 +0x264:  mov    %eax,-0x3d(%ebp)
084665f3 +0x267:  mov    -0x8c(%ebp),%eax
084665f9 +0x26d:  mov    %eax,-0x39(%ebp)
084665fc +0x270:  mov    -0x88(%ebp),%eax
08466602 +0x276:  mov    %eax,-0x35(%ebp)
08466605 +0x279:  mov    -0x84(%ebp),%eax
0846660b +0x27f:  mov    %eax,-0x31(%ebp)
0846660e +0x282:  mov    -0x80(%ebp),%eax
08466611 +0x285:  mov    %eax,-0x2d(%ebp)
08466614 +0x288:  mov    -0x7c(%ebp),%eax
08466617 +0x28b:  mov    %eax,-0x29(%ebp)
0846661a +0x28e:  mov    -0x78(%ebp),%eax
0846661d +0x291:  mov    %eax,-0x25(%ebp)
08466620 +0x294:  mov    -0x74(%ebp),%eax
08466623 +0x297:  mov    %eax,-0x21(%ebp)
08466626 +0x29a:  mov    -0x70(%ebp),%eax
08466629 +0x29d:  mov    %eax,-0x1d(%ebp)
0846662c +0x2a0:  movzbl -0x6c(%ebp),%eax
08466630 +0x2a4:  mov    %al,-0x19(%ebp)
08466633 +0x2a7:  jmp    08466703 <+0x377>
08466638 +0x2ac:  mov    0xc(%ebp),%eax
0846663b +0x2af:  mov    %eax,(%esp)
0846663e +0x2b2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08466643 +0x2b7:  lea    -0xa8(%ebp),%edx
08466649 +0x2bd:  mov    0x14(%ebp),%ecx
0846664c +0x2c0:  mov    %ecx,0xc(%esp)
08466650 +0x2c4:  movl   $0x3,0x8(%esp)
08466658 +0x2cc:  mov    %eax,0x4(%esp)
0846665c +0x2d0:  mov    %edx,(%esp)
0846665f +0x2d3:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08466664 +0x2d8:  sub    $0x4,%esp
08466667 +0x2db:  mov    -0xa8(%ebp),%eax
0846666d +0x2e1:  mov    %eax,-0x55(%ebp)
08466670 +0x2e4:  mov    -0xa4(%ebp),%eax
08466676 +0x2ea:  mov    %eax,-0x51(%ebp)
08466679 +0x2ed:  mov    -0xa0(%ebp),%eax
0846667f +0x2f3:  mov    %eax,-0x4d(%ebp)
08466682 +0x2f6:  mov    -0x9c(%ebp),%eax
08466688 +0x2fc:  mov    %eax,-0x49(%ebp)
0846668b +0x2ff:  mov    -0x98(%ebp),%eax
08466691 +0x305:  mov    %eax,-0x45(%ebp)
08466694 +0x308:  mov    -0x94(%ebp),%eax
0846669a +0x30e:  mov    %eax,-0x41(%ebp)
0846669d +0x311:  mov    -0x90(%ebp),%eax
084666a3 +0x317:  mov    %eax,-0x3d(%ebp)
084666a6 +0x31a:  mov    -0x8c(%ebp),%eax
084666ac +0x320:  mov    %eax,-0x39(%ebp)
084666af +0x323:  mov    -0x88(%ebp),%eax
084666b5 +0x329:  mov    %eax,-0x35(%ebp)
084666b8 +0x32c:  mov    -0x84(%ebp),%eax
084666be +0x332:  mov    %eax,-0x31(%ebp)
084666c1 +0x335:  mov    -0x80(%ebp),%eax
084666c4 +0x338:  mov    %eax,-0x2d(%ebp)
084666c7 +0x33b:  mov    -0x7c(%ebp),%eax
084666ca +0x33e:  mov    %eax,-0x29(%ebp)
084666cd +0x341:  mov    -0x78(%ebp),%eax
084666d0 +0x344:  mov    %eax,-0x25(%ebp)
084666d3 +0x347:  mov    -0x74(%ebp),%eax
084666d6 +0x34a:  mov    %eax,-0x21(%ebp)
084666d9 +0x34d:  mov    -0x70(%ebp),%eax
084666dc +0x350:  mov    %eax,-0x1d(%ebp)
084666df +0x353:  movzbl -0x6c(%ebp),%eax
084666e3 +0x357:  mov    %al,-0x19(%ebp)
084666e6 +0x35a:  movzbl -0x54(%ebp),%eax
084666ea +0x35e:  cmp    $0x5,%al
084666ec +0x360:  jne    08466702 <+0x376>
084666ee +0x362:  mov    $0x0,%eax
084666f3 +0x367:  jmp    08466afc <+0x770>
084666f8 +0x36c:  mov    $0x0,%eax
084666fd +0x371:  jmp    08466afc <+0x770>
08466702 +0x376:  nop
08466703 +0x377:  movl   $0x0,-0x18(%ebp)
0846670a +0x37e:  mov    -0x53(%ebp),%eax
0846670d +0x381:  test   %eax,%eax
0846670f +0x383:  je     084668c1 <+0x535>
08466715 +0x389:  mov    -0x53(%ebp),%eax
08466718 +0x38c:  mov    %eax,%ebx
0846671a +0x38e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0846671f +0x393:  mov    %ebx,0x4(%esp)
08466723 +0x397:  mov    %eax,(%esp)
08466726 +0x39a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0846672b +0x39f:  mov    %eax,-0x14(%ebp)
0846672e +0x3a2:  cmpl   $0x0,-0x14(%ebp)
08466732 +0x3a6:  jne    0846673e <+0x3b2>
08466734 +0x3a8:  mov    $0x0,%eax
08466739 +0x3ad:  jmp    08466afc <+0x770>
0846673e +0x3b2:  mov    -0x14(%ebp),%eax
08466741 +0x3b5:  mov    %eax,(%esp)
08466744 +0x3b8:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08466749 +0x3bd:  mov    %eax,-0x10(%ebp)
0846674c +0x3c0:  mov    -0x10(%ebp),%eax
0846674f +0x3c3:  cmp    $0x5,%eax
08466752 +0x3c6:  ja     0846677c <+0x3f0>
08466754 +0x3c8:  mov    &data#4b494825(.rodata)(,%eax,4),%eax
0846675b +0x3cf:  jmp    *%eax
0846675d +0x3d1:  mov    $0x0,%eax
08466762 +0x3d6:  jmp    08466afc <+0x770>
08466767 +0x3db:  movzbl -0x55(%ebp),%eax
0846676b +0x3df:  xor    $0x1,%eax
0846676e +0x3e2:  test   %al,%al
08466770 +0x3e4:  je     0846677c <+0x3f0>
08466772 +0x3e6:  mov    $0x0,%eax
08466777 +0x3eb:  jmp    08466afc <+0x770>
0846677c +0x3f0:  lea    -0x55(%ebp),%eax
0846677f +0x3f3:  add    $0x33,%eax
08466782 +0x3f6:  mov    %eax,(%esp)
08466785 +0x3f9:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
0846678a +0x3fe:  test   %al,%al
0846678c +0x400:  setne  %al
0846678f +0x403:  test   %al,%al
08466791 +0x405:  je     0846679d <+0x411>
08466793 +0x407:  mov    $0x0,%eax
08466798 +0x40c:  jmp    08466afc <+0x770>
0846679d +0x411:  lea    -0x55(%ebp),%eax
084667a0 +0x414:  mov    %eax,(%esp)
084667a3 +0x417:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
084667a8 +0x41c:  test   %al,%al
084667aa +0x41e:  je     084667d8 <+0x44c>
084667ac +0x420:  mov    -0x14(%ebp),%eax
084667af +0x423:  mov    %eax,-0xc(%ebp)
084667b2 +0x426:  mov    -0xc(%ebp),%eax
084667b5 +0x429:  mov    0x234(%eax),%eax
084667bb +0x42f:  cmp    $0xb,%eax
084667be +0x432:  je     084667ce <+0x442>
084667c0 +0x434:  mov    -0xc(%ebp),%eax
084667c3 +0x437:  mov    0x234(%eax),%eax
084667c9 +0x43d:  cmp    $0x9,%eax
084667cc +0x440:  jg     084667d8 <+0x44c>
084667ce +0x442:  mov    $0x0,%eax
084667d3 +0x447:  jmp    08466afc <+0x770>
084667d8 +0x44c:  mov    0x1c(%ebp),%eax
084667db +0x44f:  movb   $0x0,(%eax)
084667de +0x452:  movzbl -0x54(%ebp),%edx
084667e2 +0x456:  mov    0x1c(%ebp),%eax
084667e5 +0x459:  mov    %dl,0x11(%eax)
084667e8 +0x45c:  mov    -0x53(%ebp),%edx
084667eb +0x45f:  mov    0x1c(%ebp),%eax
084667ee +0x462:  mov    %edx,0x12(%eax)
084667f1 +0x465:  mov    -0x48(%ebp),%edx
084667f4 +0x468:  mov    0x1c(%ebp),%eax
084667f7 +0x46b:  mov    %edx,0x1d(%eax)
084667fa +0x46e:  mov    0x1c(%ebp),%eax
084667fd +0x471:  mov    -0x40(%ebp),%edx
08466800 +0x474:  mov    %edx,0x25(%eax)
08466803 +0x477:  mov    -0x3c(%ebp),%edx
08466806 +0x47a:  mov    %edx,0x29(%eax)
08466809 +0x47d:  movzwl -0x38(%ebp),%edx
0846680d +0x481:  mov    %dx,0x2d(%eax)
08466811 +0x485:  mov    0x1c(%ebp),%eax
08466814 +0x488:  mov    -0x44(%ebp),%edx
08466817 +0x48b:  mov    %edx,0x21(%eax)
0846681a +0x48e:  lea    -0x55(%ebp),%eax
0846681d +0x491:  mov    %eax,(%esp)
08466820 +0x494:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08466825 +0x499:  xor    $0x1,%eax
08466828 +0x49c:  test   %al,%al
0846682a +0x49e:  je     08466843 <+0x4b7>
0846682c +0x4a0:  mov    0x1c(%ebp),%eax
0846682f +0x4a3:  lea    0x10(%eax),%edx
08466832 +0x4a6:  mov    0x18(%ebp),%eax
08466835 +0x4a9:  mov    %eax,0x4(%esp)
08466839 +0x4ad:  mov    %edx,(%esp)
0846683c +0x4b0:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08466841 +0x4b5:  jmp    08466858 <+0x4cc>
08466843 +0x4b7:  mov    -0x4e(%ebp),%eax
08466846 +0x4ba:  mov    0x1c(%ebp),%edx
08466849 +0x4bd:  add    $0x10,%edx
0846684c +0x4c0:  mov    %eax,0x4(%esp)
08466850 +0x4c4:  mov    %edx,(%esp)
08466853 +0x4c7:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08466858 +0x4cc:  lea    -0x55(%ebp),%eax
0846685b +0x4cf:  mov    %eax,(%esp)
0846685e +0x4d2:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08466863 +0x4d7:  movzbl %al,%eax
08466866 +0x4da:  mov    0x1c(%ebp),%edx
08466869 +0x4dd:  add    $0x10,%edx
0846686c +0x4e0:  mov    %eax,0x4(%esp)
08466870 +0x4e4:  mov    %edx,(%esp)
08466873 +0x4e7:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
08466878 +0x4ec:  movzwl -0x4a(%ebp),%edx
0846687c +0x4f0:  mov    0x1c(%ebp),%eax
0846687f +0x4f3:  mov    %dx,0x1b(%eax)
08466883 +0x4f7:  movzbl -0x55(%ebp),%edx
08466887 +0x4fb:  mov    0x1c(%ebp),%eax
0846688a +0x4fe:  mov    %dl,0x10(%eax)
0846688d +0x501:  mov    0x18(%ebp),%eax
08466890 +0x504:  movswl %ax,%ebx
08466893 +0x507:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
08466898 +0x50c:  lea    -0x18(%ebp),%edx
0846689b +0x50f:  mov    %edx,0x14(%esp)
0846689f +0x513:  movl   $0x0,0x10(%esp)
084668a7 +0x51b:  mov    %ebx,0xc(%esp)
084668ab +0x51f:  mov    -0x14(%ebp),%edx
084668ae +0x522:  mov    %edx,0x8(%esp)
084668b2 +0x526:  lea    -0x55(%ebp),%edx
084668b5 +0x529:  mov    %edx,0x4(%esp)
084668b9 +0x52d:  mov    %eax,(%esp)
084668bc +0x530:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
084668c1 +0x535:  movsbl -0x5c(%ebp),%eax
084668c5 +0x539:  cmp    $0x2,%eax
084668c8 +0x53c:  je     084669d0 <+0x644>
084668ce +0x542:  cmp    $0x2,%eax
084668d1 +0x545:  jg     084668dc <+0x550>
084668d3 +0x547:  test   %eax,%eax
084668d5 +0x549:  je     084668f3 <+0x567>
084668d7 +0x54b:  jmp    08466aef <+0x763>
084668dc +0x550:  cmp    $0x3,%eax
084668df +0x553:  je     08466a0e <+0x682>
084668e5 +0x559:  cmp    $0x7,%eax
084668e8 +0x55c:  je     08466a80 <+0x6f4>
084668ee +0x562:  jmp    08466aef <+0x763>
084668f3 +0x567:  cmpl   $0x0,0x14(%ebp)
084668f7 +0x56b:  jne    0846695c <+0x5d0>
084668f9 +0x56d:  mov    0xc(%ebp),%eax
084668fc +0x570:  mov    %eax,(%esp)
084668ff +0x573:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08466904 +0x578:  movl   $0x1,0xc(%esp)
0846690c +0x580:  movl   $0x6,0x8(%esp)
08466914 +0x588:  mov    0x18(%ebp),%edx
08466917 +0x58b:  mov    %edx,0x4(%esp)
0846691b +0x58f:  mov    %eax,(%esp)
0846691e +0x592:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08466923 +0x597:  xor    $0x1,%eax
08466926 +0x59a:  test   %al,%al
08466928 +0x59c:  je     08466934 <+0x5a8>
0846692a +0x59e:  mov    $0x0,%eax
0846692f +0x5a3:  jmp    08466afc <+0x770>
08466934 +0x5a8:  mov    0x18(%ebp),%ebx
08466937 +0x5ab:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0846693c +0x5b0:  mov    %ebx,0xc(%esp)
08466940 +0x5b4:  mov    0xc(%ebp),%edx
08466943 +0x5b7:  mov    %edx,0x8(%esp)
08466947 +0x5bb:  movl   $0x17,0x4(%esp)
0846694f +0x5c3:  mov    %eax,(%esp)
08466952 +0x5c6:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08466957 +0x5cb:  jmp    08466af7 <+0x76b>
0846695c +0x5d0:  mov    0xc(%ebp),%eax
0846695f +0x5d3:  mov    %eax,(%esp)
08466962 +0x5d6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08466967 +0x5db:  movl   $0x1,0x14(%esp)
0846696f +0x5e3:  movl   $0x6,0x10(%esp)
08466977 +0x5eb:  mov    0x18(%ebp),%edx
0846697a +0x5ee:  mov    %edx,0xc(%esp)
0846697e +0x5f2:  mov    0x14(%ebp),%edx
08466981 +0x5f5:  mov    %edx,0x8(%esp)
08466985 +0x5f9:  movl   $0x1,0x4(%esp)
0846698d +0x601:  mov    %eax,(%esp)
08466990 +0x604:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08466995 +0x609:  xor    $0x1,%eax
08466998 +0x60c:  test   %al,%al
0846699a +0x60e:  je     084669a6 <+0x61a>
0846699c +0x610:  mov    $0x0,%eax
084669a1 +0x615:  jmp    08466afc <+0x770>
084669a6 +0x61a:  mov    -0x18(%ebp),%eax
084669a9 +0x61d:  mov    %eax,%ebx
084669ab +0x61f:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084669b0 +0x624:  mov    %ebx,0xc(%esp)
084669b4 +0x628:  mov    0xc(%ebp),%edx
084669b7 +0x62b:  mov    %edx,0x8(%esp)
084669bb +0x62f:  movl   $0x16,0x4(%esp)
084669c3 +0x637:  mov    %eax,(%esp)
084669c6 +0x63a:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084669cb +0x63f:  jmp    08466af7 <+0x76b>
084669d0 +0x644:  mov    0xc(%ebp),%eax
084669d3 +0x647:  mov    %eax,(%esp)
084669d6 +0x64a:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
084669db +0x64f:  movl   $0x10,0xc(%esp)
084669e3 +0x657:  mov    0x18(%ebp),%edx
084669e6 +0x65a:  mov    %edx,0x8(%esp)
084669ea +0x65e:  mov    0x14(%ebp),%edx
084669ed +0x661:  mov    %edx,0x4(%esp)
084669f1 +0x665:  mov    %eax,(%esp)
084669f4 +0x668:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
084669f9 +0x66d:  xor    $0x1,%eax
084669fc +0x670:  test   %al,%al
084669fe +0x672:  je     08466af6 <+0x76a>
08466a04 +0x678:  mov    $0x0,%eax
08466a09 +0x67d:  jmp    08466afc <+0x770>
08466a0e +0x682:  mov    0xc(%ebp),%eax
08466a11 +0x685:  mov    %eax,(%esp)
08466a14 +0x688:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08466a19 +0x68d:  movl   $0x1,0x14(%esp)
08466a21 +0x695:  movl   $0x6,0x10(%esp)
08466a29 +0x69d:  movl   $0x1,0xc(%esp)
08466a31 +0x6a5:  mov    0x14(%ebp),%edx
08466a34 +0x6a8:  mov    %edx,0x8(%esp)
08466a38 +0x6ac:  movl   $0x0,0x4(%esp)
08466a40 +0x6b4:  mov    %eax,(%esp)
08466a43 +0x6b7:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08466a48 +0x6bc:  xor    $0x1,%eax
08466a4b +0x6bf:  test   %al,%al
08466a4d +0x6c1:  je     08466a59 <+0x6cd>
08466a4f +0x6c3:  mov    $0x0,%eax
08466a54 +0x6c8:  jmp    08466afc <+0x770>
08466a59 +0x6cd:  mov    -0x18(%ebp),%eax
08466a5c +0x6d0:  mov    %eax,%ebx
08466a5e +0x6d2:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08466a63 +0x6d7:  mov    %ebx,0xc(%esp)
08466a67 +0x6db:  mov    0xc(%ebp),%edx
08466a6a +0x6de:  mov    %edx,0x8(%esp)
08466a6e +0x6e2:  movl   $0x16,0x4(%esp)
08466a76 +0x6ea:  mov    %eax,(%esp)
08466a79 +0x6ed:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08466a7e +0x6f2:  jmp    08466af7 <+0x76b>
08466a80 +0x6f4:  mov    0xc(%ebp),%eax
08466a83 +0x6f7:  mov    %eax,(%esp)
08466a86 +0x6fa:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08466a8b +0x6ff:  movl   $0x1,0x14(%esp)
08466a93 +0x707:  movl   $0x6,0x10(%esp)
08466a9b +0x70f:  movl   $0x1,0xc(%esp)
08466aa3 +0x717:  mov    0x14(%ebp),%edx
08466aa6 +0x71a:  mov    %edx,0x8(%esp)
08466aaa +0x71e:  movl   $0x3,0x4(%esp)
08466ab2 +0x726:  mov    %eax,(%esp)
08466ab5 +0x729:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08466aba +0x72e:  xor    $0x1,%eax
08466abd +0x731:  test   %al,%al
08466abf +0x733:  je     08466ac8 <+0x73c>
08466ac1 +0x735:  mov    $0x0,%eax
08466ac6 +0x73a:  jmp    08466afc <+0x770>
08466ac8 +0x73c:  mov    -0x18(%ebp),%eax
08466acb +0x73f:  mov    %eax,%ebx
08466acd +0x741:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08466ad2 +0x746:  mov    %ebx,0xc(%esp)
08466ad6 +0x74a:  mov    0xc(%ebp),%edx
08466ad9 +0x74d:  mov    %edx,0x8(%esp)
08466add +0x751:  movl   $0x16,0x4(%esp)
08466ae5 +0x759:  mov    %eax,(%esp)
08466ae8 +0x75c:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08466aed +0x761:  jmp    08466af7 <+0x76b>
08466aef +0x763:  mov    $0x0,%eax
08466af4 +0x768:  jmp    08466afc <+0x770>
08466af6 +0x76a:  nop
08466af7 +0x76b:  mov    $0x1,%eax
08466afc +0x770:  mov    -0x4(%ebp),%ebx
08466aff +0x773:  leave
08466b00 +0x774:  ret
08466b01 +0x775:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_makeDropItem @ 0x846638c

/* WongWork::CDeathTower::_makeDropItem(CUser*, char, int, int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::_makeDropItem
          (CDeathTower *this,CUser *param_1,char param_2,int param_3,int param_4,map_item *param_5)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar4;
  CValueStatistic *pCVar5;
  CCargo *pCVar6;
  undefined1 local_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  char local_60;
  map_item local_59;
  map_item mStack_58;
  undefined2 uStack_57;
  undefined2 uStack_55;
  undefined1 uStack_53;
  int iStack_52;
  undefined1 local_4e;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined1 uStack_3d;
  undefined2 local_3c;
  undefined1 uStack_3a;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined1 local_1d;
  int local_1c;
  CItem *local_18;
  undefined4 local_14;
  CItem *local_10;
  
  local_60 = param_2;
  Inven_Item::Inven_Item((Inven_Item *)&local_59);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      *param_5 = (map_item)0x0;
      param_5[0x11] = (map_item)0x2;
      *(undefined4 *)(param_5 + 0x12) = 0;
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
      *(undefined2 *)(param_5 + 0x1b) = 0;
      Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_ac,iVar3);
      local_59 = SUB41(local_ac._0_4_,0);
      mStack_58 = SUB41(local_ac._0_4_,1);
      uStack_57 = SUB42(local_ac._0_4_,2);
      uStack_55 = (undefined2)local_ac._4_4_;
      uStack_53 = SUB41(local_ac._4_4_,2);
      iStack_52._1_3_ = (undefined3)local_ac._8_4_;
      iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
      local_4e = SUB41(local_ac._8_4_,3);
      uStack_4d = local_a0;
      uStack_49 = local_9c;
      uStack_45 = local_98;
      uStack_41 = local_94;
      uStack_3d = (undefined1)local_90;
      local_3c = (undefined2)((uint)local_90 >> 8);
      uStack_3a = (undefined1)((uint)local_90 >> 0x18);
      local_39 = local_8c;
      local_35 = local_88;
      local_31 = local_84;
      local_2d = local_80;
      local_29 = local_7c;
      local_25 = local_78;
      local_21 = local_74;
      local_1d = local_70;
    }
  }
  else if (local_60 == '\x03') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar3);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
  }
  else {
    if (local_60 != '\a') {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar3);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
    if (mStack_58 == (map_item)0x5) {
      return 0;
    }
  }
  local_1c = 0;
  if (CONCAT22(uStack_55,uStack_57) != 0) {
    iVar3 = CONCAT22(uStack_55,uStack_57);
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_18 == (CItem *)0x0) {
      return 0;
    }
    local_14 = CItem::GetAttachType(local_18);
    switch(local_14) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 3:
      if (local_59 != (map_item)0x1) {
        return 0;
      }
    }
    cVar1 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_29 + 3));
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_59);
    if ((cVar1 != '\0') &&
       ((local_10 = local_18, *(int *)(local_18 + 0x234) == 0xb || (*(int *)(local_18 + 0x234) < 10)
        ))) {
      return 0;
    }
    *param_5 = (map_item)0x0;
    param_5[0x11] = mStack_58;
    *(uint *)(param_5 + 0x12) = CONCAT22(uStack_55,uStack_57);
    *(uint *)(param_5 + 0x1d) = CONCAT13((undefined1)uStack_49,uStack_4d._1_3_);
    *(uint *)(param_5 + 0x25) = CONCAT13((undefined1)uStack_41,uStack_45._1_3_);
    *(uint *)(param_5 + 0x29) = CONCAT13(uStack_3d,uStack_41._1_3_);
    *(undefined2 *)(param_5 + 0x2d) = local_3c;
    *(uint *)(param_5 + 0x21) = CONCAT13((undefined1)uStack_45,uStack_49._1_3_);
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_59);
    if (cVar1 == '\x01') {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),iStack_52);
    }
    else {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    }
    uVar2 = Inven_Item::GetItemAttr((Inven_Item *)&local_59);
    Inven_Item::SetItemAttr((Inven_Item *)(param_5 + 0x10),uVar2);
    *(ushort *)(param_5 + 0x1b) = CONCAT11((undefined1)uStack_4d,local_4e);
    param_5[0x10] = local_59;
    this_01 = (Store *)G_Store();
    Store::GetSellItemPrice(this_01,(Inven_Item *)&local_59,local_18,(short)param_4,false,&local_1c)
    ;
  }
  if (local_60 == '\x02') {
    pCVar6 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    cVar1 = CCargo::delete_item(pCVar6,param_3,param_4,0x10);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::use_money(pCVar4,param_4,6,1);
      if (cVar1 != '\x01') {
        return 0;
      }
      pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar5,0x17,param_1,param_4);
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::delete_item(pCVar4,1,param_3,param_4,6,1);
      iVar3 = local_1c;
      if (cVar1 != '\x01') {
        return 0;
      }
      pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
    }
  }
  else if (local_60 == '\x03') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,0,param_3,1,6,1);
    iVar3 = local_1c;
    if (cVar1 != '\x01') {
      return 0;
    }
    pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
  }
  else {
    if (local_60 != '\a') {
      return 0;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,3,param_3,1,6,1);
    iVar3 = local_1c;
    if (cVar1 != '\x01') {
      return 0;
    }
    pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
  }
  return 1;
}
```
