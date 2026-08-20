# TowerOfDespairMgr

`_GLOBAL__I__ZN17TowerOfDespairMgrC2Ev`

`global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TowerOfDespairMgr` | `0x086444b5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086444b5  _GLOBAL__I__ZN17TowerOfDespairMgrC2Ev
#           global constructors keyed to TowerOfDespairMgr::TowerOfDespairMgr()
# range [0x086444b5, 0x086453a3]
086444b5 +0x000:  push   %ebp
086444b6 +0x001:  mov    %esp,%ebp
086444b8 +0x003:  sub    $0x18,%esp
086444bb +0x006:  movl   $0xffff,0x4(%esp)
086444c3 +0x00e:  movl   $0x1,(%esp)
086444ca +0x015:  call   08644475 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086444cf +0x01a:  leave
086444d0 +0x01b:  ret
086444d1 +0x01c:  nop
086444d2 +0x01d:  push   %ebp
086444d3 +0x01e:  mov    %esp,%ebp
086444d5 +0x020:  sub    $0x18,%esp
086444d8 +0x023:  mov    0x8(%ebp),%eax
086444db +0x026:  mov    %eax,(%esp)
086444de +0x029:  call   086445a6 <+0xf1>
086444e3 +0x02e:  leave
086444e4 +0x02f:  ret
086444e5 +0x030:  nop
086444e6 +0x031:  push   %ebp
086444e7 +0x032:  mov    %esp,%ebp
086444e9 +0x034:  sub    $0x18,%esp
086444ec +0x037:  mov    0x8(%ebp),%eax
086444ef +0x03a:  mov    %eax,(%esp)
086444f2 +0x03d:  call   0864457e <+0xc9>
086444f7 +0x042:  leave
086444f8 +0x043:  ret
086444f9 +0x044:  nop
086444fa +0x045:  push   %ebp
086444fb +0x046:  mov    %esp,%ebp
086444fd +0x048:  sub    $0x18,%esp
08644500 +0x04b:  mov    0x8(%ebp),%eax
08644503 +0x04e:  mov    %eax,(%esp)
08644506 +0x051:  call   086444d2 <+0x1d>
0864450b +0x056:  leave
0864450c +0x057:  ret
0864450d +0x058:  push   %ebp
0864450e +0x059:  mov    %esp,%ebp
08644510 +0x05b:  push   %ebx
08644511 +0x05c:  sub    $0x14,%esp
08644514 +0x05f:  mov    0xc(%ebp),%eax
08644517 +0x062:  mov    %eax,(%esp)
0864451a +0x065:  call   08644659 <+0x1a4>
0864451f +0x06a:  mov    %eax,%ebx
08644521 +0x06c:  mov    0x8(%ebp),%eax
08644524 +0x06f:  mov    %eax,(%esp)
08644527 +0x072:  call   08644659 <+0x1a4>
0864452c +0x077:  mov    0x10(%ebp),%edx
0864452f +0x07a:  mov    %edx,0x8(%esp)
08644533 +0x07e:  mov    %ebx,0x4(%esp)
08644537 +0x082:  mov    %eax,(%esp)
0864453a +0x085:  call   08644661 <+0x1ac>
0864453f +0x08a:  add    $0x14,%esp
08644542 +0x08d:  pop    %ebx
08644543 +0x08e:  pop    %ebp
08644544 +0x08f:  ret
08644545 +0x090:  push   %ebp
08644546 +0x091:  mov    %esp,%ebp
08644548 +0x093:  push   %ebx
08644549 +0x094:  sub    $0x14,%esp
0864454c +0x097:  mov    0xc(%ebp),%eax
0864454f +0x09a:  mov    %eax,(%esp)
08644552 +0x09d:  call   080e428b <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x2031>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x2031
08644557 +0x0a2:  mov    %eax,%ebx
08644559 +0x0a4:  mov    0x8(%ebp),%eax
0864455c +0x0a7:  mov    %eax,(%esp)
0864455f +0x0aa:  call   080e428b <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x2031>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x2031
08644564 +0x0af:  mov    0x10(%ebp),%edx
08644567 +0x0b2:  mov    %edx,0x8(%esp)
0864456b +0x0b6:  mov    %ebx,0x4(%esp)
0864456f +0x0ba:  mov    %eax,(%esp)
08644572 +0x0bd:  call   0864468c <+0x1d7>
08644577 +0x0c2:  add    $0x14,%esp
0864457a +0x0c5:  pop    %ebx
0864457b +0x0c6:  pop    %ebp
0864457c +0x0c7:  ret
0864457d +0x0c8:  nop
0864457e +0x0c9:  push   %ebp
0864457f +0x0ca:  mov    %esp,%ebp
08644581 +0x0cc:  sub    $0x18,%esp
08644584 +0x0cf:  mov    0x8(%ebp),%eax
08644587 +0x0d2:  mov    %eax,(%esp)
0864458a +0x0d5:  call   086446b8 <+0x203>
0864458f +0x0da:  leave
08644590 +0x0db:  ret
08644591 +0x0dc:  nop
08644592 +0x0dd:  push   %ebp
08644593 +0x0de:  mov    %esp,%ebp
08644595 +0x0e0:  sub    $0x18,%esp
08644598 +0x0e3:  mov    0x8(%ebp),%eax
0864459b +0x0e6:  mov    %eax,(%esp)
0864459e +0x0e9:  call   086446cc <+0x217>
086445a3 +0x0ee:  leave
086445a4 +0x0ef:  ret
086445a5 +0x0f0:  nop
086445a6 +0x0f1:  push   %ebp
086445a7 +0x0f2:  mov    %esp,%ebp
086445a9 +0x0f4:  push   %esi
086445aa +0x0f5:  push   %ebx
086445ab +0x0f6:  sub    $0x10,%esp
086445ae +0x0f9:  mov    0x8(%ebp),%eax
086445b1 +0x0fc:  mov    %eax,(%esp)
086445b4 +0x0ff:  call   085ff654 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x577>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x577
086445b9 +0x104:  mov    %eax,0x4(%esp)
086445bd +0x108:  mov    0x8(%ebp),%eax
086445c0 +0x10b:  mov    %eax,(%esp)
086445c3 +0x10e:  call   085ff8ee <_GLOBAL__I__ZN9TOD_LayerC2Et+0x811>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x811
086445c8 +0x113:  jmp    086445e5 <+0x130>
086445ca +0x115:  mov    %edx,%ebx
086445cc +0x117:  mov    %eax,%esi
086445ce +0x119:  mov    0x8(%ebp),%eax
086445d1 +0x11c:  mov    %eax,(%esp)
086445d4 +0x11f:  call   08644592 <+0xdd>
086445d9 +0x124:  mov    %esi,%eax
086445db +0x126:  mov    %ebx,%edx
086445dd +0x128:  mov    %eax,(%esp)
086445e0 +0x12b:  call   08ae3750 <_Unwind_Resume>
086445e5 +0x130:  mov    0x8(%ebp),%eax
086445e8 +0x133:  mov    %eax,(%esp)
086445eb +0x136:  call   08644592 <+0xdd>
086445f0 +0x13b:  add    $0x10,%esp
086445f3 +0x13e:  pop    %ebx
086445f4 +0x13f:  pop    %esi
086445f5 +0x140:  pop    %ebp
086445f6 +0x141:  ret
086445f7 +0x142:  push   %ebp
086445f8 +0x143:  mov    %esp,%ebp
086445fa +0x145:  sub    $0x18,%esp
086445fd +0x148:  lea    0xc(%ebp),%eax
08644600 +0x14b:  mov    %eax,0x4(%esp)
08644604 +0x14f:  lea    0x8(%ebp),%eax
08644607 +0x152:  mov    %eax,(%esp)
0864460a +0x155:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
0864460f +0x15a:  test   %al,%al
08644611 +0x15c:  je     08644657 <+0x1a2>
08644613 +0x15e:  lea    0x8(%ebp),%eax
08644616 +0x161:  mov    %eax,0x4(%esp)
0864461a +0x165:  lea    0xc(%ebp),%eax
0864461d +0x168:  mov    %eax,(%esp)
08644620 +0x16b:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644625 +0x170:  mov    %eax,(%esp)
08644628 +0x173:  call   08134415 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c
0864462d +0x178:  add    %eax,%eax
0864462f +0x17a:  mov    %eax,0x8(%esp)
08644633 +0x17e:  mov    0xc(%ebp),%eax
08644636 +0x181:  mov    %eax,0x4(%esp)
0864463a +0x185:  mov    0x8(%ebp),%eax
0864463d +0x188:  mov    %eax,(%esp)
08644640 +0x18b:  call   086446df <+0x22a>
08644645 +0x190:  mov    0xc(%ebp),%eax
08644648 +0x193:  mov    %eax,0x4(%esp)
0864464c +0x197:  mov    0x8(%ebp),%eax
0864464f +0x19a:  mov    %eax,(%esp)
08644652 +0x19d:  call   08644812 <+0x35d>
08644657 +0x1a2:  leave
08644658 +0x1a3:  ret
08644659 +0x1a4:  push   %ebp
0864465a +0x1a5:  mov    %esp,%ebp
0864465c +0x1a7:  mov    0x8(%ebp),%eax
0864465f +0x1aa:  pop    %ebp
08644660 +0x1ab:  ret
08644661 +0x1ac:  push   %ebp
08644662 +0x1ad:  mov    %esp,%ebp
08644664 +0x1af:  sub    $0x10,%esp
08644667 +0x1b2:  mov    0x10(%ebp),%eax
0864466a +0x1b5:  mov    (%eax),%eax
0864466c +0x1b7:  mov    %eax,-0x4(%ebp)
0864466f +0x1ba:  jmp    0864467d <+0x1c8>
08644671 +0x1bc:  mov    0x8(%ebp),%eax
08644674 +0x1bf:  mov    -0x4(%ebp),%edx
08644677 +0x1c2:  mov    %edx,(%eax)
08644679 +0x1c4:  addl   $0x4,0x8(%ebp)
0864467d +0x1c8:  mov    0x8(%ebp),%eax
08644680 +0x1cb:  cmp    0xc(%ebp),%eax
08644683 +0x1ce:  setne  %al
08644686 +0x1d1:  test   %al,%al
08644688 +0x1d3:  jne    08644671 <+0x1bc>
0864468a +0x1d5:  leave
0864468b +0x1d6:  ret
0864468c +0x1d7:  push   %ebp
0864468d +0x1d8:  mov    %esp,%ebp
0864468f +0x1da:  sub    $0x10,%esp
08644692 +0x1dd:  mov    0x10(%ebp),%eax
08644695 +0x1e0:  mov    (%eax),%eax
08644697 +0x1e2:  mov    %eax,-0x4(%ebp)
0864469a +0x1e5:  jmp    086446a8 <+0x1f3>
0864469c +0x1e7:  mov    -0x4(%ebp),%edx
0864469f +0x1ea:  mov    0x8(%ebp),%eax
086446a2 +0x1ed:  mov    %edx,(%eax)
086446a4 +0x1ef:  addl   $0x4,0x8(%ebp)
086446a8 +0x1f3:  mov    0x8(%ebp),%eax
086446ab +0x1f6:  cmp    0xc(%ebp),%eax
086446ae +0x1f9:  setne  %al
086446b1 +0x1fc:  test   %al,%al
086446b3 +0x1fe:  jne    0864469c <+0x1e7>
086446b5 +0x200:  leave
086446b6 +0x201:  ret
086446b7 +0x202:  nop
086446b8 +0x203:  push   %ebp
086446b9 +0x204:  mov    %esp,%ebp
086446bb +0x206:  sub    $0x18,%esp
086446be +0x209:  mov    0x8(%ebp),%eax
086446c1 +0x20c:  mov    %eax,(%esp)
086446c4 +0x20f:  call   086448b4 <+0x3ff>
086446c9 +0x214:  leave
086446ca +0x215:  ret
086446cb +0x216:  nop
086446cc +0x217:  push   %ebp
086446cd +0x218:  mov    %esp,%ebp
086446cf +0x21a:  sub    $0x18,%esp
086446d2 +0x21d:  mov    0x8(%ebp),%eax
086446d5 +0x220:  mov    %eax,(%esp)
086446d8 +0x223:  call   08644904 <+0x44f>
086446dd +0x228:  leave
086446de +0x229:  ret
086446df +0x22a:  push   %ebp
086446e0 +0x22b:  mov    %esp,%ebp
086446e2 +0x22d:  push   %esi
086446e3 +0x22e:  push   %ebx
086446e4 +0x22f:  sub    $0x30,%esp
086446e7 +0x232:  jmp    086447e8 <+0x333>
086446ec +0x237:  cmpl   $0x0,0x10(%ebp)
086446f0 +0x23b:  jne    08644710 <+0x25b>
086446f2 +0x23d:  mov    0xc(%ebp),%eax
086446f5 +0x240:  mov    %eax,0x8(%esp)
086446f9 +0x244:  mov    0xc(%ebp),%eax
086446fc +0x247:  mov    %eax,0x4(%esp)
08644700 +0x24b:  mov    0x8(%ebp),%eax
08644703 +0x24e:  mov    %eax,(%esp)
08644706 +0x251:  call   08644909 <+0x454>
0864470b +0x256:  jmp    08644808 <+0x353>
08644710 +0x25b:  subl   $0x1,0x10(%ebp)
08644714 +0x25f:  movl   $0x1,-0x14(%ebp)
0864471b +0x266:  lea    -0x18(%ebp),%eax
0864471e +0x269:  lea    -0x14(%ebp),%edx
08644721 +0x26c:  mov    %edx,0x8(%esp)
08644725 +0x270:  lea    0xc(%ebp),%edx
08644728 +0x273:  mov    %edx,0x4(%esp)
0864472c +0x277:  mov    %eax,(%esp)
0864472f +0x27a:  call   08644972 <+0x4bd>
08644734 +0x27f:  sub    $0x4,%esp
08644737 +0x282:  lea    -0x18(%ebp),%eax
0864473a +0x285:  mov    %eax,(%esp)
0864473d +0x288:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644742 +0x28d:  mov    %eax,%esi
08644744 +0x28f:  lea    0x8(%ebp),%eax
08644747 +0x292:  mov    %eax,0x4(%esp)
0864474b +0x296:  lea    0xc(%ebp),%eax
0864474e +0x299:  mov    %eax,(%esp)
08644751 +0x29c:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644756 +0x2a1:  mov    %eax,%edx
08644758 +0x2a3:  shr    $0x1f,%edx
0864475b +0x2a6:  lea    (%edx,%eax,1),%eax
0864475e +0x2a9:  sar    %eax
08644760 +0x2ab:  mov    %eax,-0xc(%ebp)
08644763 +0x2ae:  lea    -0x10(%ebp),%eax
08644766 +0x2b1:  lea    -0xc(%ebp),%edx
08644769 +0x2b4:  mov    %edx,0x8(%esp)
0864476d +0x2b8:  lea    0x8(%ebp),%edx
08644770 +0x2bb:  mov    %edx,0x4(%esp)
08644774 +0x2bf:  mov    %eax,(%esp)
08644777 +0x2c2:  call   0864493c <+0x487>
0864477c +0x2c7:  sub    $0x4,%esp
0864477f +0x2ca:  lea    -0x10(%ebp),%eax
08644782 +0x2cd:  mov    %eax,(%esp)
08644785 +0x2d0:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0864478a +0x2d5:  mov    %eax,%ebx
0864478c +0x2d7:  lea    0x8(%ebp),%eax
0864478f +0x2da:  mov    %eax,(%esp)
08644792 +0x2dd:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644797 +0x2e2:  mov    %esi,0x8(%esp)
0864479b +0x2e6:  mov    %ebx,0x4(%esp)
0864479f +0x2ea:  mov    %eax,(%esp)
086447a2 +0x2ed:  call   086449aa <+0x4f5>
086447a7 +0x2f2:  mov    (%eax),%edx
086447a9 +0x2f4:  lea    -0x1c(%ebp),%eax
086447ac +0x2f7:  mov    %edx,0xc(%esp)
086447b0 +0x2fb:  mov    0xc(%ebp),%edx
086447b3 +0x2fe:  mov    %edx,0x8(%esp)
086447b7 +0x302:  mov    0x8(%ebp),%edx
086447ba +0x305:  mov    %edx,0x4(%esp)
086447be +0x309:  mov    %eax,(%esp)
086447c1 +0x30c:  call   08644a11 <+0x55c>
086447c6 +0x311:  sub    $0x4,%esp
086447c9 +0x314:  mov    0x10(%ebp),%eax
086447cc +0x317:  mov    %eax,0x8(%esp)
086447d0 +0x31b:  mov    0xc(%ebp),%eax
086447d3 +0x31e:  mov    %eax,0x4(%esp)
086447d7 +0x322:  mov    -0x1c(%ebp),%eax
086447da +0x325:  mov    %eax,(%esp)
086447dd +0x328:  call   086446df <+0x22a>
086447e2 +0x32d:  mov    -0x1c(%ebp),%eax
086447e5 +0x330:  mov    %eax,0xc(%ebp)
086447e8 +0x333:  lea    0x8(%ebp),%edx
086447eb +0x336:  mov    %edx,0x4(%esp)
086447ef +0x33a:  lea    0xc(%ebp),%eax
086447f2 +0x33d:  mov    %eax,(%esp)
086447f5 +0x340:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
086447fa +0x345:  cmp    $0x10,%eax
086447fd +0x348:  setg   %al
08644800 +0x34b:  test   %al,%al
08644802 +0x34d:  jne    086446ec <+0x237>
08644808 +0x353:  lea    -0x8(%ebp),%esp
0864480b +0x356:  add    $0x0,%esp
0864480e +0x359:  pop    %ebx
0864480f +0x35a:  pop    %esi
08644810 +0x35b:  pop    %ebp
08644811 +0x35c:  ret
08644812 +0x35d:  push   %ebp
08644813 +0x35e:  mov    %esp,%ebp
08644815 +0x360:  sub    $0x28,%esp
08644818 +0x363:  lea    0x8(%ebp),%eax
0864481b +0x366:  mov    %eax,0x4(%esp)
0864481f +0x36a:  lea    0xc(%ebp),%eax
08644822 +0x36d:  mov    %eax,(%esp)
08644825 +0x370:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
0864482a +0x375:  cmp    $0x10,%eax
0864482d +0x378:  setg   %al
08644830 +0x37b:  test   %al,%al
08644832 +0x37d:  je     086448a0 <+0x3eb>
08644834 +0x37f:  movl   $0x10,-0x14(%ebp)
0864483b +0x386:  lea    -0x18(%ebp),%eax
0864483e +0x389:  lea    -0x14(%ebp),%edx
08644841 +0x38c:  mov    %edx,0x8(%esp)
08644845 +0x390:  lea    0x8(%ebp),%edx
08644848 +0x393:  mov    %edx,0x4(%esp)
0864484c +0x397:  mov    %eax,(%esp)
0864484f +0x39a:  call   0864493c <+0x487>
08644854 +0x39f:  sub    $0x4,%esp
08644857 +0x3a2:  mov    -0x18(%ebp),%eax
0864485a +0x3a5:  mov    %eax,0x4(%esp)
0864485e +0x3a9:  mov    0x8(%ebp),%eax
08644861 +0x3ac:  mov    %eax,(%esp)
08644864 +0x3af:  call   08644ab9 <+0x604>
08644869 +0x3b4:  movl   $0x10,-0xc(%ebp)
08644870 +0x3bb:  lea    -0x10(%ebp),%eax
08644873 +0x3be:  lea    -0xc(%ebp),%edx
08644876 +0x3c1:  mov    %edx,0x8(%esp)
0864487a +0x3c5:  lea    0x8(%ebp),%edx
0864487d +0x3c8:  mov    %edx,0x4(%esp)
08644881 +0x3cc:  mov    %eax,(%esp)
08644884 +0x3cf:  call   0864493c <+0x487>
08644889 +0x3d4:  sub    $0x4,%esp
0864488c +0x3d7:  mov    0xc(%ebp),%eax
0864488f +0x3da:  mov    %eax,0x4(%esp)
08644893 +0x3de:  mov    -0x10(%ebp),%eax
08644896 +0x3e1:  mov    %eax,(%esp)
08644899 +0x3e4:  call   08644bbc <+0x707>
0864489e +0x3e9:  jmp    086448b2 <+0x3fd>
086448a0 +0x3eb:  mov    0xc(%ebp),%eax
086448a3 +0x3ee:  mov    %eax,0x4(%esp)
086448a7 +0x3f2:  mov    0x8(%ebp),%eax
086448aa +0x3f5:  mov    %eax,(%esp)
086448ad +0x3f8:  call   08644ab9 <+0x604>
086448b2 +0x3fd:  leave
086448b3 +0x3fe:  ret
086448b4 +0x3ff:  push   %ebp
086448b5 +0x400:  mov    %esp,%ebp
086448b7 +0x402:  sub    $0x18,%esp
086448ba +0x405:  mov    0x8(%ebp),%eax
086448bd +0x408:  mov    %eax,(%esp)
086448c0 +0x40b:  call   08644c0a <+0x755>
086448c5 +0x410:  mov    0x8(%ebp),%eax
086448c8 +0x413:  movl   $0x0,0x4(%eax)
086448cf +0x41a:  mov    0x8(%ebp),%eax
086448d2 +0x41d:  movl   $0x0,0x8(%eax)
086448d9 +0x424:  mov    0x8(%ebp),%eax
086448dc +0x427:  movl   $0x0,0xc(%eax)
086448e3 +0x42e:  mov    0x8(%ebp),%eax
086448e6 +0x431:  movl   $0x0,0x10(%eax)
086448ed +0x438:  mov    0x8(%ebp),%eax
086448f0 +0x43b:  movl   $0x0,0x14(%eax)
086448f7 +0x442:  mov    0x8(%ebp),%eax
086448fa +0x445:  mov    %eax,(%esp)
086448fd +0x448:  call   08644c1e <+0x769>
08644902 +0x44d:  leave
08644903 +0x44e:  ret
08644904 +0x44f:  push   %ebp
08644905 +0x450:  mov    %esp,%ebp
08644907 +0x452:  pop    %ebp
08644908 +0x453:  ret
08644909 +0x454:  push   %ebp
0864490a +0x455:  mov    %esp,%ebp
0864490c +0x457:  sub    $0x18,%esp
0864490f +0x45a:  mov    0x10(%ebp),%eax
08644912 +0x45d:  mov    %eax,0x8(%esp)
08644916 +0x461:  mov    0xc(%ebp),%eax
08644919 +0x464:  mov    %eax,0x4(%esp)
0864491d +0x468:  mov    0x8(%ebp),%eax
08644920 +0x46b:  mov    %eax,(%esp)
08644923 +0x46e:  call   08644c4f <+0x79a>
08644928 +0x473:  mov    0xc(%ebp),%eax
0864492b +0x476:  mov    %eax,0x4(%esp)
0864492f +0x47a:  mov    0x8(%ebp),%eax
08644932 +0x47d:  mov    %eax,(%esp)
08644935 +0x480:  call   08644cd3 <+0x81e>
0864493a +0x485:  leave
0864493b +0x486:  ret
0864493c +0x487:  push   %ebp
0864493d +0x488:  mov    %esp,%ebp
0864493f +0x48a:  push   %ebx
08644940 +0x48b:  sub    $0x24,%esp
08644943 +0x48e:  mov    0x8(%ebp),%ebx
08644946 +0x491:  mov    0xc(%ebp),%eax
08644949 +0x494:  mov    (%eax),%edx
0864494b +0x496:  mov    0x10(%ebp),%eax
0864494e +0x499:  mov    (%eax),%eax
08644950 +0x49b:  shl    $0x2,%eax
08644953 +0x49e:  lea    (%edx,%eax,1),%eax
08644956 +0x4a1:  mov    %eax,-0xc(%ebp)
08644959 +0x4a4:  lea    -0xc(%ebp),%eax
0864495c +0x4a7:  mov    %eax,0x4(%esp)
08644960 +0x4ab:  mov    %ebx,(%esp)
08644963 +0x4ae:  call   080e3710 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14b6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14b6
08644968 +0x4b3:  mov    %ebx,%eax
0864496a +0x4b5:  add    $0x24,%esp
0864496d +0x4b8:  pop    %ebx
0864496e +0x4b9:  pop    %ebp
0864496f +0x4ba:  ret    $0x4
08644972 +0x4bd:  push   %ebp
08644973 +0x4be:  mov    %esp,%ebp
08644975 +0x4c0:  push   %ebx
08644976 +0x4c1:  sub    $0x24,%esp
08644979 +0x4c4:  mov    0x8(%ebp),%ebx
0864497c +0x4c7:  mov    0xc(%ebp),%eax
0864497f +0x4ca:  mov    (%eax),%edx
08644981 +0x4cc:  mov    0x10(%ebp),%eax
08644984 +0x4cf:  mov    (%eax),%eax
08644986 +0x4d1:  shl    $0x2,%eax
08644989 +0x4d4:  neg    %eax
0864498b +0x4d6:  lea    (%edx,%eax,1),%eax
0864498e +0x4d9:  mov    %eax,-0xc(%ebp)
08644991 +0x4dc:  lea    -0xc(%ebp),%eax
08644994 +0x4df:  mov    %eax,0x4(%esp)
08644998 +0x4e3:  mov    %ebx,(%esp)
0864499b +0x4e6:  call   080e3710 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14b6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14b6
086449a0 +0x4eb:  mov    %ebx,%eax
086449a2 +0x4ed:  add    $0x24,%esp
086449a5 +0x4f0:  pop    %ebx
086449a6 +0x4f1:  pop    %ebp
086449a7 +0x4f2:  ret    $0x4
086449aa +0x4f5:  push   %ebp
086449ab +0x4f6:  mov    %esp,%ebp
086449ad +0x4f8:  mov    0x8(%ebp),%eax
086449b0 +0x4fb:  mov    (%eax),%edx
086449b2 +0x4fd:  mov    0xc(%ebp),%eax
086449b5 +0x500:  mov    (%eax),%eax
086449b7 +0x502:  cmp    %eax,%edx
086449b9 +0x504:  jae    086449e6 <+0x531>
086449bb +0x506:  mov    0xc(%ebp),%eax
086449be +0x509:  mov    (%eax),%edx
086449c0 +0x50b:  mov    0x10(%ebp),%eax
086449c3 +0x50e:  mov    (%eax),%eax
086449c5 +0x510:  cmp    %eax,%edx
086449c7 +0x512:  jae    086449ce <+0x519>
086449c9 +0x514:  mov    0xc(%ebp),%eax
086449cc +0x517:  jmp    08644a0f <+0x55a>
086449ce +0x519:  mov    0x8(%ebp),%eax
086449d1 +0x51c:  mov    (%eax),%edx
086449d3 +0x51e:  mov    0x10(%ebp),%eax
086449d6 +0x521:  mov    (%eax),%eax
086449d8 +0x523:  cmp    %eax,%edx
086449da +0x525:  jae    086449e1 <+0x52c>
086449dc +0x527:  mov    0x10(%ebp),%eax
086449df +0x52a:  jmp    08644a0f <+0x55a>
086449e1 +0x52c:  mov    0x8(%ebp),%eax
086449e4 +0x52f:  jmp    08644a0f <+0x55a>
086449e6 +0x531:  mov    0x8(%ebp),%eax
086449e9 +0x534:  mov    (%eax),%edx
086449eb +0x536:  mov    0x10(%ebp),%eax
086449ee +0x539:  mov    (%eax),%eax
086449f0 +0x53b:  cmp    %eax,%edx
086449f2 +0x53d:  jae    086449f9 <+0x544>
086449f4 +0x53f:  mov    0x8(%ebp),%eax
086449f7 +0x542:  jmp    08644a0f <+0x55a>
086449f9 +0x544:  mov    0xc(%ebp),%eax
086449fc +0x547:  mov    (%eax),%edx
086449fe +0x549:  mov    0x10(%ebp),%eax
08644a01 +0x54c:  mov    (%eax),%eax
08644a03 +0x54e:  cmp    %eax,%edx
08644a05 +0x550:  jae    08644a0c <+0x557>
08644a07 +0x552:  mov    0x10(%ebp),%eax
08644a0a +0x555:  jmp    08644a0f <+0x55a>
08644a0c +0x557:  mov    0xc(%ebp),%eax
08644a0f +0x55a:  pop    %ebp
08644a10 +0x55b:  ret
08644a11 +0x55c:  push   %ebp
08644a12 +0x55d:  mov    %esp,%ebp
08644a14 +0x55f:  push   %ebx
08644a15 +0x560:  sub    $0x14,%esp
08644a18 +0x563:  mov    0x8(%ebp),%ebx
08644a1b +0x566:  jmp    08644a28 <+0x573>
08644a1d +0x568:  lea    0xc(%ebp),%eax
08644a20 +0x56b:  mov    %eax,(%esp)
08644a23 +0x56e:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
08644a28 +0x573:  lea    0xc(%ebp),%eax
08644a2b +0x576:  mov    %eax,(%esp)
08644a2e +0x579:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644a33 +0x57e:  mov    (%eax),%eax
08644a35 +0x580:  cmp    0x14(%ebp),%eax
08644a38 +0x583:  setb   %al
08644a3b +0x586:  test   %al,%al
08644a3d +0x588:  jne    08644a1d <+0x568>
08644a3f +0x58a:  lea    0x10(%ebp),%eax
08644a42 +0x58d:  mov    %eax,(%esp)
08644a45 +0x590:  call   08644d1e <+0x869>
08644a4a +0x595:  jmp    08644a57 <+0x5a2>
08644a4c +0x597:  lea    0x10(%ebp),%eax
08644a4f +0x59a:  mov    %eax,(%esp)
08644a52 +0x59d:  call   08644d1e <+0x869>
08644a57 +0x5a2:  lea    0x10(%ebp),%eax
08644a5a +0x5a5:  mov    %eax,(%esp)
08644a5d +0x5a8:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644a62 +0x5ad:  mov    (%eax),%eax
08644a64 +0x5af:  cmp    0x14(%ebp),%eax
08644a67 +0x5b2:  seta   %al
08644a6a +0x5b5:  test   %al,%al
08644a6c +0x5b7:  jne    08644a4c <+0x597>
08644a6e +0x5b9:  lea    0x10(%ebp),%eax
08644a71 +0x5bc:  mov    %eax,0x4(%esp)
08644a75 +0x5c0:  lea    0xc(%ebp),%eax
08644a78 +0x5c3:  mov    %eax,(%esp)
08644a7b +0x5c6:  call   08644d33 <+0x87e>
08644a80 +0x5cb:  xor    $0x1,%eax
08644a83 +0x5ce:  test   %al,%al
08644a85 +0x5d0:  je     08644a96 <+0x5e1>
08644a87 +0x5d2:  mov    0xc(%ebp),%eax
08644a8a +0x5d5:  mov    %eax,(%ebx)
08644a8c +0x5d7:  mov    %ebx,%eax
08644a8e +0x5d9:  add    $0x14,%esp
08644a91 +0x5dc:  pop    %ebx
08644a92 +0x5dd:  pop    %ebp
08644a93 +0x5de:  ret    $0x4
08644a96 +0x5e1:  mov    0x10(%ebp),%eax
08644a99 +0x5e4:  mov    %eax,0x4(%esp)
08644a9d +0x5e8:  mov    0xc(%ebp),%eax
08644aa0 +0x5eb:  mov    %eax,(%esp)
08644aa3 +0x5ee:  call   08644d5f <+0x8aa>
08644aa8 +0x5f3:  lea    0xc(%ebp),%eax
08644aab +0x5f6:  mov    %eax,(%esp)
08644aae +0x5f9:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
08644ab3 +0x5fe:  nop
08644ab4 +0x5ff:  jmp    08644a28 <+0x573>
08644ab9 +0x604:  push   %ebp
08644aba +0x605:  mov    %esp,%ebp
08644abc +0x607:  sub    $0x38,%esp
08644abf +0x60a:  lea    0xc(%ebp),%eax
08644ac2 +0x60d:  mov    %eax,0x4(%esp)
08644ac6 +0x611:  lea    0x8(%ebp),%eax
08644ac9 +0x614:  mov    %eax,(%esp)
08644acc +0x617:  call   081a4adc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb37>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb37
08644ad1 +0x61c:  test   %al,%al
08644ad3 +0x61e:  jne    08644bb9 <+0x704>
08644ad9 +0x624:  movl   $0x1,-0x1c(%ebp)
08644ae0 +0x62b:  lea    -0x20(%ebp),%eax
08644ae3 +0x62e:  lea    -0x1c(%ebp),%edx
08644ae6 +0x631:  mov    %edx,0x8(%esp)
08644aea +0x635:  lea    0x8(%ebp),%edx
08644aed +0x638:  mov    %edx,0x4(%esp)
08644af1 +0x63c:  mov    %eax,(%esp)
08644af4 +0x63f:  call   0864493c <+0x487>
08644af9 +0x644:  sub    $0x4,%esp
08644afc +0x647:  jmp    08644b9d <+0x6e8>
08644b01 +0x64c:  lea    -0x20(%ebp),%eax
08644b04 +0x64f:  mov    %eax,(%esp)
08644b07 +0x652:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644b0c +0x657:  mov    (%eax),%eax
08644b0e +0x659:  mov    %eax,-0xc(%ebp)
08644b11 +0x65c:  lea    0x8(%ebp),%eax
08644b14 +0x65f:  mov    %eax,(%esp)
08644b17 +0x662:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644b1c +0x667:  mov    (%eax),%eax
08644b1e +0x669:  cmp    -0xc(%ebp),%eax
08644b21 +0x66c:  seta   %al
08644b24 +0x66f:  test   %al,%al
08644b26 +0x671:  je     08644b80 <+0x6cb>
08644b28 +0x673:  movl   $0x1,-0x10(%ebp)
08644b2f +0x67a:  lea    -0x14(%ebp),%eax
08644b32 +0x67d:  lea    -0x10(%ebp),%edx
08644b35 +0x680:  mov    %edx,0x8(%esp)
08644b39 +0x684:  lea    -0x20(%ebp),%edx
08644b3c +0x687:  mov    %edx,0x4(%esp)
08644b40 +0x68b:  mov    %eax,(%esp)
08644b43 +0x68e:  call   0864493c <+0x487>
08644b48 +0x693:  sub    $0x4,%esp
08644b4b +0x696:  lea    -0x18(%ebp),%eax
08644b4e +0x699:  mov    -0x14(%ebp),%edx
08644b51 +0x69c:  mov    %edx,0xc(%esp)
08644b55 +0x6a0:  mov    -0x20(%ebp),%edx
08644b58 +0x6a3:  mov    %edx,0x8(%esp)
08644b5c +0x6a7:  mov    0x8(%ebp),%edx
08644b5f +0x6aa:  mov    %edx,0x4(%esp)
08644b63 +0x6ae:  mov    %eax,(%esp)
08644b66 +0x6b1:  call   08644d79 <+0x8c4>
08644b6b +0x6b6:  sub    $0x4,%esp
08644b6e +0x6b9:  lea    0x8(%ebp),%edx
08644b71 +0x6bc:  mov    %edx,(%esp)
08644b74 +0x6bf:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644b79 +0x6c4:  mov    -0xc(%ebp),%edx
08644b7c +0x6c7:  mov    %edx,(%eax)
08644b7e +0x6c9:  jmp    08644b92 <+0x6dd>
08644b80 +0x6cb:  mov    -0xc(%ebp),%eax
08644b83 +0x6ce:  mov    %eax,0x4(%esp)
08644b87 +0x6d2:  mov    -0x20(%ebp),%eax
08644b8a +0x6d5:  mov    %eax,(%esp)
08644b8d +0x6d8:  call   08644dd6 <+0x921>
08644b92 +0x6dd:  lea    -0x20(%ebp),%eax
08644b95 +0x6e0:  mov    %eax,(%esp)
08644b98 +0x6e3:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
08644b9d +0x6e8:  lea    0xc(%ebp),%eax
08644ba0 +0x6eb:  mov    %eax,0x4(%esp)
08644ba4 +0x6ef:  lea    -0x20(%ebp),%eax
08644ba7 +0x6f2:  mov    %eax,(%esp)
08644baa +0x6f5:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
08644baf +0x6fa:  test   %al,%al
08644bb1 +0x6fc:  jne    08644b01 <+0x64c>
08644bb7 +0x702:  jmp    08644bba <+0x705>
08644bb9 +0x704:  nop
08644bba +0x705:  leave
08644bbb +0x706:  ret
08644bbc +0x707:  push   %ebp
08644bbd +0x708:  mov    %esp,%ebp
08644bbf +0x70a:  sub    $0x28,%esp
08644bc2 +0x70d:  mov    0x8(%ebp),%eax
08644bc5 +0x710:  mov    %eax,-0xc(%ebp)
08644bc8 +0x713:  jmp    08644bf1 <+0x73c>
08644bca +0x715:  lea    -0xc(%ebp),%eax
08644bcd +0x718:  mov    %eax,(%esp)
08644bd0 +0x71b:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644bd5 +0x720:  mov    (%eax),%eax
08644bd7 +0x722:  mov    %eax,0x4(%esp)
08644bdb +0x726:  mov    -0xc(%ebp),%eax
08644bde +0x729:  mov    %eax,(%esp)
08644be1 +0x72c:  call   08644dd6 <+0x921>
08644be6 +0x731:  lea    -0xc(%ebp),%eax
08644be9 +0x734:  mov    %eax,(%esp)
08644bec +0x737:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
08644bf1 +0x73c:  lea    0xc(%ebp),%eax
08644bf4 +0x73f:  mov    %eax,0x4(%esp)
08644bf8 +0x743:  lea    -0xc(%ebp),%eax
08644bfb +0x746:  mov    %eax,(%esp)
08644bfe +0x749:  call   081112f0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x802>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x802
08644c03 +0x74e:  test   %al,%al
08644c05 +0x750:  jne    08644bca <+0x715>
08644c07 +0x752:  leave
08644c08 +0x753:  ret
08644c09 +0x754:  nop
08644c0a +0x755:  push   %ebp
08644c0b +0x756:  mov    %esp,%ebp
08644c0d +0x758:  sub    $0x18,%esp
08644c10 +0x75b:  mov    0x8(%ebp),%eax
08644c13 +0x75e:  mov    %eax,(%esp)
08644c16 +0x761:  call   08644e4a <+0x995>
08644c1b +0x766:  leave
08644c1c +0x767:  ret
08644c1d +0x768:  nop
08644c1e +0x769:  push   %ebp
08644c1f +0x76a:  mov    %esp,%ebp
08644c21 +0x76c:  mov    0x8(%ebp),%eax
08644c24 +0x76f:  movl   $0x0,0x4(%eax)
08644c2b +0x776:  mov    0x8(%ebp),%eax
08644c2e +0x779:  movl   $0x0,0x8(%eax)
08644c35 +0x780:  mov    0x8(%ebp),%eax
08644c38 +0x783:  lea    0x4(%eax),%edx
08644c3b +0x786:  mov    0x8(%ebp),%eax
08644c3e +0x789:  mov    %edx,0xc(%eax)
08644c41 +0x78c:  mov    0x8(%ebp),%eax
08644c44 +0x78f:  lea    0x4(%eax),%edx
08644c47 +0x792:  mov    0x8(%ebp),%eax
08644c4a +0x795:  mov    %edx,0x10(%eax)
08644c4d +0x798:  pop    %ebp
08644c4e +0x799:  ret
08644c4f +0x79a:  push   %ebp
08644c50 +0x79b:  mov    %esp,%ebp
08644c52 +0x79d:  push   %ebx
08644c53 +0x79e:  sub    $0x24,%esp
08644c56 +0x7a1:  mov    0xc(%ebp),%eax
08644c59 +0x7a4:  mov    %eax,0x4(%esp)
08644c5d +0x7a8:  mov    0x8(%ebp),%eax
08644c60 +0x7ab:  mov    %eax,(%esp)
08644c63 +0x7ae:  call   08644e4f <+0x99a>
08644c68 +0x7b3:  mov    0xc(%ebp),%eax
08644c6b +0x7b6:  mov    %eax,-0xc(%ebp)
08644c6e +0x7b9:  jmp    08644cb7 <+0x802>
08644c70 +0x7bb:  lea    -0xc(%ebp),%eax
08644c73 +0x7be:  mov    %eax,(%esp)
08644c76 +0x7c1:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644c7b +0x7c6:  mov    (%eax),%ebx
08644c7d +0x7c8:  lea    0x8(%ebp),%eax
08644c80 +0x7cb:  mov    %eax,(%esp)
08644c83 +0x7ce:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644c88 +0x7d3:  mov    (%eax),%eax
08644c8a +0x7d5:  cmp    %eax,%ebx
08644c8c +0x7d7:  setb   %al
08644c8f +0x7da:  test   %al,%al
08644c91 +0x7dc:  je     08644cac <+0x7f7>
08644c93 +0x7de:  mov    -0xc(%ebp),%eax
08644c96 +0x7e1:  mov    %eax,0x8(%esp)
08644c9a +0x7e5:  mov    0xc(%ebp),%eax
08644c9d +0x7e8:  mov    %eax,0x4(%esp)
08644ca1 +0x7ec:  mov    0x8(%ebp),%eax
08644ca4 +0x7ef:  mov    %eax,(%esp)
08644ca7 +0x7f2:  call   08644f13 <+0xa5e>
08644cac +0x7f7:  lea    -0xc(%ebp),%eax
08644caf +0x7fa:  mov    %eax,(%esp)
08644cb2 +0x7fd:  call   0811131c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82e
08644cb7 +0x802:  lea    0x10(%ebp),%eax
08644cba +0x805:  mov    %eax,0x4(%esp)
08644cbe +0x809:  lea    -0xc(%ebp),%eax
08644cc1 +0x80c:  mov    %eax,(%esp)
08644cc4 +0x80f:  call   08644d33 <+0x87e>
08644cc9 +0x814:  test   %al,%al
08644ccb +0x816:  jne    08644c70 <+0x7bb>
08644ccd +0x818:  add    $0x24,%esp
08644cd0 +0x81b:  pop    %ebx
08644cd1 +0x81c:  pop    %ebp
08644cd2 +0x81d:  ret
08644cd3 +0x81e:  push   %ebp
08644cd4 +0x81f:  mov    %esp,%ebp
08644cd6 +0x821:  sub    $0x18,%esp
08644cd9 +0x824:  jmp    08644cff <+0x84a>
08644cdb +0x826:  lea    0xc(%ebp),%eax
08644cde +0x829:  mov    %eax,(%esp)
08644ce1 +0x82c:  call   08644d1e <+0x869>
08644ce6 +0x831:  mov    0xc(%ebp),%eax
08644ce9 +0x834:  mov    %eax,0x8(%esp)
08644ced +0x838:  mov    0xc(%ebp),%eax
08644cf0 +0x83b:  mov    %eax,0x4(%esp)
08644cf4 +0x83f:  mov    0x8(%ebp),%eax
08644cf7 +0x842:  mov    %eax,(%esp)
08644cfa +0x845:  call   08644f13 <+0xa5e>
08644cff +0x84a:  lea    0x8(%ebp),%eax
08644d02 +0x84d:  mov    %eax,0x4(%esp)
08644d06 +0x851:  lea    0xc(%ebp),%eax
08644d09 +0x854:  mov    %eax,(%esp)
08644d0c +0x857:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644d11 +0x85c:  cmp    $0x1,%eax
08644d14 +0x85f:  setg   %al
08644d17 +0x862:  test   %al,%al
08644d19 +0x864:  jne    08644cdb <+0x826>
08644d1b +0x866:  leave
08644d1c +0x867:  ret
08644d1d +0x868:  nop
08644d1e +0x869:  push   %ebp
08644d1f +0x86a:  mov    %esp,%ebp
08644d21 +0x86c:  mov    0x8(%ebp),%eax
08644d24 +0x86f:  mov    (%eax),%eax
08644d26 +0x871:  lea    -0x4(%eax),%edx
08644d29 +0x874:  mov    0x8(%ebp),%eax
08644d2c +0x877:  mov    %edx,(%eax)
08644d2e +0x879:  mov    0x8(%ebp),%eax
08644d31 +0x87c:  pop    %ebp
08644d32 +0x87d:  ret
08644d33 +0x87e:  push   %ebp
08644d34 +0x87f:  mov    %esp,%ebp
08644d36 +0x881:  push   %ebx
08644d37 +0x882:  sub    $0x14,%esp
08644d3a +0x885:  mov    0x8(%ebp),%eax
08644d3d +0x888:  mov    %eax,(%esp)
08644d40 +0x88b:  call   080e3756 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14fc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14fc
08644d45 +0x890:  mov    (%eax),%ebx
08644d47 +0x892:  mov    0xc(%ebp),%eax
08644d4a +0x895:  mov    %eax,(%esp)
08644d4d +0x898:  call   080e3756 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14fc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14fc
08644d52 +0x89d:  mov    (%eax),%eax
08644d54 +0x89f:  cmp    %eax,%ebx
08644d56 +0x8a1:  setb   %al
08644d59 +0x8a4:  add    $0x14,%esp
08644d5c +0x8a7:  pop    %ebx
08644d5d +0x8a8:  pop    %ebp
08644d5e +0x8a9:  ret
08644d5f +0x8aa:  push   %ebp
08644d60 +0x8ab:  mov    %esp,%ebp
08644d62 +0x8ad:  sub    $0x18,%esp
08644d65 +0x8b0:  mov    0xc(%ebp),%eax
08644d68 +0x8b3:  mov    %eax,0x4(%esp)
08644d6c +0x8b7:  mov    0x8(%ebp),%eax
08644d6f +0x8ba:  mov    %eax,(%esp)
08644d72 +0x8bd:  call   08644f96 <+0xae1>
08644d77 +0x8c2:  leave
08644d78 +0x8c3:  ret
08644d79 +0x8c4:  push   %ebp
08644d7a +0x8c5:  mov    %esp,%ebp
08644d7c +0x8c7:  push   %ebx
08644d7d +0x8c8:  sub    $0x24,%esp
08644d80 +0x8cb:  mov    0x8(%ebp),%ebx
08644d83 +0x8ce:  lea    -0x10(%ebp),%eax
08644d86 +0x8d1:  mov    0x10(%ebp),%edx
08644d89 +0x8d4:  mov    %edx,0x4(%esp)
08644d8d +0x8d8:  mov    %eax,(%esp)
08644d90 +0x8db:  call   08644fc7 <+0xb12>
08644d95 +0x8e0:  sub    $0x4,%esp
08644d98 +0x8e3:  lea    -0xc(%ebp),%eax
08644d9b +0x8e6:  mov    0xc(%ebp),%edx
08644d9e +0x8e9:  mov    %edx,0x4(%esp)
08644da2 +0x8ed:  mov    %eax,(%esp)
08644da5 +0x8f0:  call   08644fc7 <+0xb12>
08644daa +0x8f5:  sub    $0x4,%esp
08644dad +0x8f8:  mov    0x14(%ebp),%eax
08644db0 +0x8fb:  mov    %eax,0xc(%esp)
08644db4 +0x8ff:  mov    -0x10(%ebp),%eax
08644db7 +0x902:  mov    %eax,0x8(%esp)
08644dbb +0x906:  mov    -0xc(%ebp),%eax
08644dbe +0x909:  mov    %eax,0x4(%esp)
08644dc2 +0x90d:  mov    %ebx,(%esp)
08644dc5 +0x910:  call   08644fd6 <+0xb21>
08644dca +0x915:  sub    $0x4,%esp
08644dcd +0x918:  mov    %ebx,%eax
08644dcf +0x91a:  mov    -0x4(%ebp),%ebx
08644dd2 +0x91d:  leave
08644dd3 +0x91e:  ret    $0x4
08644dd6 +0x921:  push   %ebp
08644dd7 +0x922:  mov    %esp,%ebp
08644dd9 +0x924:  push   %ebx
08644dda +0x925:  sub    $0x24,%esp
08644ddd +0x928:  mov    0x8(%ebp),%eax
08644de0 +0x92b:  mov    %eax,-0xc(%ebp)
08644de3 +0x92e:  lea    -0xc(%ebp),%eax
08644de6 +0x931:  mov    %eax,(%esp)
08644de9 +0x934:  call   08644d1e <+0x869>
08644dee +0x939:  jmp    08644e1d <+0x968>
08644df0 +0x93b:  lea    0x8(%ebp),%eax
08644df3 +0x93e:  mov    %eax,(%esp)
08644df6 +0x941:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644dfb +0x946:  mov    %eax,%ebx
08644dfd +0x948:  lea    -0xc(%ebp),%eax
08644e00 +0x94b:  mov    %eax,(%esp)
08644e03 +0x94e:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644e08 +0x953:  mov    (%eax),%eax
08644e0a +0x955:  mov    %eax,(%ebx)
08644e0c +0x957:  mov    -0xc(%ebp),%eax
08644e0f +0x95a:  mov    %eax,0x8(%ebp)
08644e12 +0x95d:  lea    -0xc(%ebp),%eax
08644e15 +0x960:  mov    %eax,(%esp)
08644e18 +0x963:  call   08644d1e <+0x869>
08644e1d +0x968:  lea    -0xc(%ebp),%eax
08644e20 +0x96b:  mov    %eax,(%esp)
08644e23 +0x96e:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644e28 +0x973:  mov    (%eax),%eax
08644e2a +0x975:  cmp    0xc(%ebp),%eax
08644e2d +0x978:  seta   %al
08644e30 +0x97b:  test   %al,%al
08644e32 +0x97d:  jne    08644df0 <+0x93b>
08644e34 +0x97f:  lea    0x8(%ebp),%eax
08644e37 +0x982:  mov    %eax,(%esp)
08644e3a +0x985:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644e3f +0x98a:  mov    0xc(%ebp),%edx
08644e42 +0x98d:  mov    %edx,(%eax)
08644e44 +0x98f:  add    $0x24,%esp
08644e47 +0x992:  pop    %ebx
08644e48 +0x993:  pop    %ebp
08644e49 +0x994:  ret
08644e4a +0x995:  push   %ebp
08644e4b +0x996:  mov    %esp,%ebp
08644e4d +0x998:  pop    %ebp
08644e4e +0x999:  ret
08644e4f +0x99a:  push   %ebp
08644e50 +0x99b:  mov    %esp,%ebp
08644e52 +0x99d:  sub    $0x28,%esp
08644e55 +0x9a0:  lea    0x8(%ebp),%eax
08644e58 +0x9a3:  mov    %eax,0x4(%esp)
08644e5c +0x9a7:  lea    0xc(%ebp),%eax
08644e5f +0x9aa:  mov    %eax,(%esp)
08644e62 +0x9ad:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644e67 +0x9b2:  cmp    $0x1,%eax
08644e6a +0x9b5:  setle  %al
08644e6d +0x9b8:  test   %al,%al
08644e6f +0x9ba:  jne    08644f0d <+0xa58>
08644e75 +0x9c0:  lea    0x8(%ebp),%edx
08644e78 +0x9c3:  mov    %edx,0x4(%esp)
08644e7c +0x9c7:  lea    0xc(%ebp),%eax
08644e7f +0x9ca:  mov    %eax,(%esp)
08644e82 +0x9cd:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644e87 +0x9d2:  mov    %eax,-0xc(%ebp)
08644e8a +0x9d5:  mov    -0xc(%ebp),%eax
08644e8d +0x9d8:  sub    $0x2,%eax
08644e90 +0x9db:  mov    %eax,%edx
08644e92 +0x9dd:  shr    $0x1f,%edx
08644e95 +0x9e0:  lea    (%edx,%eax,1),%eax
08644e98 +0x9e3:  sar    %eax
08644e9a +0x9e5:  mov    %eax,-0x14(%ebp)
08644e9d +0x9e8:  lea    -0x10(%ebp),%eax
08644ea0 +0x9eb:  lea    -0x14(%ebp),%edx
08644ea3 +0x9ee:  mov    %edx,0x8(%esp)
08644ea7 +0x9f2:  lea    0x8(%ebp),%edx
08644eaa +0x9f5:  mov    %edx,0x4(%esp)
08644eae +0x9f9:  mov    %eax,(%esp)
08644eb1 +0x9fc:  call   0864493c <+0x487>
08644eb6 +0xa01:  sub    $0x4,%esp
08644eb9 +0xa04:  lea    -0x10(%ebp),%eax
08644ebc +0xa07:  mov    %eax,(%esp)
08644ebf +0xa0a:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644ec4 +0xa0f:  mov    %eax,(%esp)
08644ec7 +0xa12:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08644ecc +0xa17:  mov    (%eax),%eax
08644ece +0xa19:  mov    %eax,-0x18(%ebp)
08644ed1 +0xa1c:  lea    -0x18(%ebp),%eax
08644ed4 +0xa1f:  mov    %eax,(%esp)
08644ed7 +0xa22:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08644edc +0xa27:  mov    (%eax),%edx
08644ede +0xa29:  mov    -0x14(%ebp),%eax
08644ee1 +0xa2c:  mov    %edx,0xc(%esp)
08644ee5 +0xa30:  mov    -0xc(%ebp),%edx
08644ee8 +0xa33:  mov    %edx,0x8(%esp)
08644eec +0xa37:  mov    %eax,0x4(%esp)
08644ef0 +0xa3b:  mov    0x8(%ebp),%eax
08644ef3 +0xa3e:  mov    %eax,(%esp)
08644ef6 +0xa41:  call   08645035 <+0xb80>
08644efb +0xa46:  mov    -0x14(%ebp),%eax
08644efe +0xa49:  test   %eax,%eax
08644f00 +0xa4b:  je     08644f10 <+0xa5b>
08644f02 +0xa4d:  mov    -0x14(%ebp),%eax
08644f05 +0xa50:  sub    $0x1,%eax
08644f08 +0xa53:  mov    %eax,-0x14(%ebp)
08644f0b +0xa56:  jmp    08644e9d <+0x9e8>
08644f0d +0xa58:  nop
08644f0e +0xa59:  jmp    08644f11 <+0xa5c>
08644f10 +0xa5b:  nop
08644f11 +0xa5c:  leave
08644f12 +0xa5d:  ret
08644f13 +0xa5e:  push   %ebp
08644f14 +0xa5f:  mov    %esp,%ebp
08644f16 +0xa61:  push   %ebx
08644f17 +0xa62:  sub    $0x24,%esp
08644f1a +0xa65:  lea    0x10(%ebp),%eax
08644f1d +0xa68:  mov    %eax,(%esp)
08644f20 +0xa6b:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644f25 +0xa70:  mov    %eax,(%esp)
08644f28 +0xa73:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08644f2d +0xa78:  mov    (%eax),%eax
08644f2f +0xa7a:  mov    %eax,-0xc(%ebp)
08644f32 +0xa7d:  lea    0x10(%ebp),%eax
08644f35 +0xa80:  mov    %eax,(%esp)
08644f38 +0xa83:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644f3d +0xa88:  mov    %eax,%ebx
08644f3f +0xa8a:  lea    0x8(%ebp),%eax
08644f42 +0xa8d:  mov    %eax,(%esp)
08644f45 +0xa90:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644f4a +0xa95:  mov    %eax,(%esp)
08644f4d +0xa98:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08644f52 +0xa9d:  mov    (%eax),%eax
08644f54 +0xa9f:  mov    %eax,(%ebx)
08644f56 +0xaa1:  lea    -0xc(%ebp),%eax
08644f59 +0xaa4:  mov    %eax,(%esp)
08644f5c +0xaa7:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
08644f61 +0xaac:  mov    (%eax),%ebx
08644f63 +0xaae:  lea    0x8(%ebp),%eax
08644f66 +0xab1:  mov    %eax,0x4(%esp)
08644f6a +0xab5:  lea    0xc(%ebp),%eax
08644f6d +0xab8:  mov    %eax,(%esp)
08644f70 +0xabb:  call   080e3871 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1617>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1617
08644f75 +0xac0:  mov    %ebx,0xc(%esp)
08644f79 +0xac4:  mov    %eax,0x8(%esp)
08644f7d +0xac8:  movl   $0x0,0x4(%esp)
08644f85 +0xad0:  mov    0x8(%ebp),%eax
08644f88 +0xad3:  mov    %eax,(%esp)
08644f8b +0xad6:  call   08645035 <+0xb80>
08644f90 +0xadb:  add    $0x24,%esp
08644f93 +0xade:  pop    %ebx
08644f94 +0xadf:  pop    %ebp
08644f95 +0xae0:  ret
08644f96 +0xae1:  push   %ebp
08644f97 +0xae2:  mov    %esp,%ebp
08644f99 +0xae4:  push   %ebx
08644f9a +0xae5:  sub    $0x14,%esp
08644f9d +0xae8:  lea    0xc(%ebp),%eax
08644fa0 +0xaeb:  mov    %eax,(%esp)
08644fa3 +0xaee:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644fa8 +0xaf3:  mov    %eax,%ebx
08644faa +0xaf5:  lea    0x8(%ebp),%eax
08644fad +0xaf8:  mov    %eax,(%esp)
08644fb0 +0xafb:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08644fb5 +0xb00:  mov    %ebx,0x4(%esp)
08644fb9 +0xb04:  mov    %eax,(%esp)
08644fbc +0xb07:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
08644fc1 +0xb0c:  add    $0x14,%esp
08644fc4 +0xb0f:  pop    %ebx
08644fc5 +0xb10:  pop    %ebp
08644fc6 +0xb11:  ret
08644fc7 +0xb12:  push   %ebp
08644fc8 +0xb13:  mov    %esp,%ebp
08644fca +0xb15:  mov    0x8(%ebp),%eax
08644fcd +0xb18:  mov    0xc(%ebp),%edx
08644fd0 +0xb1b:  mov    %edx,(%eax)
08644fd2 +0xb1d:  pop    %ebp
08644fd3 +0xb1e:  ret    $0x4
08644fd6 +0xb21:  push   %ebp
08644fd7 +0xb22:  mov    %esp,%ebp
08644fd9 +0xb24:  push   %edi
08644fda +0xb25:  push   %esi
08644fdb +0xb26:  push   %ebx
08644fdc +0xb27:  sub    $0x2c,%esp
08644fdf +0xb2a:  mov    0x8(%ebp),%edi
08644fe2 +0xb2d:  mov    0x14(%ebp),%eax
08644fe5 +0xb30:  mov    %eax,(%esp)
08644fe8 +0xb33:  call   085eb04b <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x47d3>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x47d3
08644fed +0xb38:  mov    %eax,%esi
08644fef +0xb3a:  mov    0x10(%ebp),%eax
08644ff2 +0xb3d:  mov    %eax,(%esp)
08644ff5 +0xb40:  call   085eb04b <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x47d3>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x47d3
08644ffa +0xb45:  mov    %eax,%ebx
08644ffc +0xb47:  mov    0xc(%ebp),%eax
08644fff +0xb4a:  mov    %eax,(%esp)
08645002 +0xb4d:  call   085eb04b <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x47d3>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x47d3
08645007 +0xb52:  mov    %esi,0x8(%esp)
0864500b +0xb56:  mov    %ebx,0x4(%esp)
0864500f +0xb5a:  mov    %eax,(%esp)
08645012 +0xb5d:  call   08645218 <+0xd63>
08645017 +0xb62:  mov    %eax,-0x1c(%ebp)
0864501a +0xb65:  lea    -0x1c(%ebp),%eax
0864501d +0xb68:  mov    %eax,0x4(%esp)
08645021 +0xb6c:  mov    %edi,(%esp)
08645024 +0xb6f:  call   080e3710 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14b6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14b6
08645029 +0xb74:  mov    %edi,%eax
0864502b +0xb76:  add    $0x2c,%esp
0864502e +0xb79:  pop    %ebx
0864502f +0xb7a:  pop    %esi
08645030 +0xb7b:  pop    %edi
08645031 +0xb7c:  pop    %ebp
08645032 +0xb7d:  ret    $0x4
08645035 +0xb80:  push   %ebp
08645036 +0xb81:  mov    %esp,%ebp
08645038 +0xb83:  push   %ebx
08645039 +0xb84:  sub    $0x44,%esp
0864503c +0xb87:  mov    0xc(%ebp),%eax
0864503f +0xb8a:  mov    %eax,-0xc(%ebp)
08645042 +0xb8d:  mov    0xc(%ebp),%eax
08645045 +0xb90:  mov    %eax,-0x30(%ebp)
08645048 +0xb93:  jmp    08645127 <+0xc72>
0864504d +0xb98:  mov    -0x30(%ebp),%eax
08645050 +0xb9b:  add    $0x1,%eax
08645053 +0xb9e:  add    %eax,%eax
08645055 +0xba0:  mov    %eax,-0x30(%ebp)
08645058 +0xba3:  lea    -0x2c(%ebp),%eax
0864505b +0xba6:  lea    -0x30(%ebp),%edx
0864505e +0xba9:  mov    %edx,0x8(%esp)
08645062 +0xbad:  lea    0x8(%ebp),%edx
08645065 +0xbb0:  mov    %edx,0x4(%esp)
08645069 +0xbb4:  mov    %eax,(%esp)
0864506c +0xbb7:  call   0864493c <+0x487>
08645071 +0xbbc:  sub    $0x4,%esp
08645074 +0xbbf:  lea    -0x2c(%ebp),%eax
08645077 +0xbc2:  mov    %eax,(%esp)
0864507a +0xbc5:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
0864507f +0xbca:  mov    (%eax),%ebx
08645081 +0xbcc:  mov    -0x30(%ebp),%eax
08645084 +0xbcf:  sub    $0x1,%eax
08645087 +0xbd2:  mov    %eax,-0x24(%ebp)
0864508a +0xbd5:  lea    -0x28(%ebp),%eax
0864508d +0xbd8:  lea    -0x24(%ebp),%edx
08645090 +0xbdb:  mov    %edx,0x8(%esp)
08645094 +0xbdf:  lea    0x8(%ebp),%edx
08645097 +0xbe2:  mov    %edx,0x4(%esp)
0864509b +0xbe6:  mov    %eax,(%esp)
0864509e +0xbe9:  call   0864493c <+0x487>
086450a3 +0xbee:  sub    $0x4,%esp
086450a6 +0xbf1:  lea    -0x28(%ebp),%eax
086450a9 +0xbf4:  mov    %eax,(%esp)
086450ac +0xbf7:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086450b1 +0xbfc:  mov    (%eax),%eax
086450b3 +0xbfe:  cmp    %eax,%ebx
086450b5 +0xc00:  setb   %al
086450b8 +0xc03:  test   %al,%al
086450ba +0xc05:  je     086450c5 <+0xc10>
086450bc +0xc07:  mov    -0x30(%ebp),%eax
086450bf +0xc0a:  sub    $0x1,%eax
086450c2 +0xc0d:  mov    %eax,-0x30(%ebp)
086450c5 +0xc10:  lea    -0x20(%ebp),%eax
086450c8 +0xc13:  lea    0xc(%ebp),%edx
086450cb +0xc16:  mov    %edx,0x8(%esp)
086450cf +0xc1a:  lea    0x8(%ebp),%edx
086450d2 +0xc1d:  mov    %edx,0x4(%esp)
086450d6 +0xc21:  mov    %eax,(%esp)
086450d9 +0xc24:  call   0864493c <+0x487>
086450de +0xc29:  sub    $0x4,%esp
086450e1 +0xc2c:  lea    -0x20(%ebp),%eax
086450e4 +0xc2f:  mov    %eax,(%esp)
086450e7 +0xc32:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086450ec +0xc37:  mov    %eax,%ebx
086450ee +0xc39:  lea    -0x1c(%ebp),%eax
086450f1 +0xc3c:  lea    -0x30(%ebp),%edx
086450f4 +0xc3f:  mov    %edx,0x8(%esp)
086450f8 +0xc43:  lea    0x8(%ebp),%edx
086450fb +0xc46:  mov    %edx,0x4(%esp)
086450ff +0xc4a:  mov    %eax,(%esp)
08645102 +0xc4d:  call   0864493c <+0x487>
08645107 +0xc52:  sub    $0x4,%esp
0864510a +0xc55:  lea    -0x1c(%ebp),%eax
0864510d +0xc58:  mov    %eax,(%esp)
08645110 +0xc5b:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08645115 +0xc60:  mov    %eax,(%esp)
08645118 +0xc63:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0864511d +0xc68:  mov    (%eax),%eax
0864511f +0xc6a:  mov    %eax,(%ebx)
08645121 +0xc6c:  mov    -0x30(%ebp),%eax
08645124 +0xc6f:  mov    %eax,0xc(%ebp)
08645127 +0xc72:  mov    0x10(%ebp),%eax
0864512a +0xc75:  sub    $0x1,%eax
0864512d +0xc78:  mov    %eax,%edx
0864512f +0xc7a:  shr    $0x1f,%edx
08645132 +0xc7d:  lea    (%edx,%eax,1),%eax
08645135 +0xc80:  sar    %eax
08645137 +0xc82:  mov    %eax,%edx
08645139 +0xc84:  mov    -0x30(%ebp),%eax
0864513c +0xc87:  cmp    %eax,%edx
0864513e +0xc89:  setg   %al
08645141 +0xc8c:  test   %al,%al
08645143 +0xc8e:  jne    0864504d <+0xb98>
08645149 +0xc94:  mov    0x10(%ebp),%eax
0864514c +0xc97:  and    $0x1,%eax
0864514f +0xc9a:  test   %eax,%eax
08645151 +0xc9c:  jne    086451e9 <+0xd34>
08645157 +0xca2:  mov    0x10(%ebp),%eax
0864515a +0xca5:  sub    $0x2,%eax
0864515d +0xca8:  mov    %eax,%edx
0864515f +0xcaa:  shr    $0x1f,%edx
08645162 +0xcad:  lea    (%edx,%eax,1),%eax
08645165 +0xcb0:  sar    %eax
08645167 +0xcb2:  mov    %eax,%edx
08645169 +0xcb4:  mov    -0x30(%ebp),%eax
0864516c +0xcb7:  cmp    %eax,%edx
0864516e +0xcb9:  jne    086451e9 <+0xd34>
08645170 +0xcbb:  mov    -0x30(%ebp),%eax
08645173 +0xcbe:  add    $0x1,%eax
08645176 +0xcc1:  add    %eax,%eax
08645178 +0xcc3:  mov    %eax,-0x30(%ebp)
0864517b +0xcc6:  lea    -0x18(%ebp),%eax
0864517e +0xcc9:  lea    0xc(%ebp),%edx
08645181 +0xccc:  mov    %edx,0x8(%esp)
08645185 +0xcd0:  lea    0x8(%ebp),%edx
08645188 +0xcd3:  mov    %edx,0x4(%esp)
0864518c +0xcd7:  mov    %eax,(%esp)
0864518f +0xcda:  call   0864493c <+0x487>
08645194 +0xcdf:  sub    $0x4,%esp
08645197 +0xce2:  lea    -0x18(%ebp),%eax
0864519a +0xce5:  mov    %eax,(%esp)
0864519d +0xce8:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086451a2 +0xced:  mov    %eax,%ebx
086451a4 +0xcef:  mov    -0x30(%ebp),%eax
086451a7 +0xcf2:  sub    $0x1,%eax
086451aa +0xcf5:  mov    %eax,-0x10(%ebp)
086451ad +0xcf8:  lea    -0x14(%ebp),%eax
086451b0 +0xcfb:  lea    -0x10(%ebp),%edx
086451b3 +0xcfe:  mov    %edx,0x8(%esp)
086451b7 +0xd02:  lea    0x8(%ebp),%edx
086451ba +0xd05:  mov    %edx,0x4(%esp)
086451be +0xd09:  mov    %eax,(%esp)
086451c1 +0xd0c:  call   0864493c <+0x487>
086451c6 +0xd11:  sub    $0x4,%esp
086451c9 +0xd14:  lea    -0x14(%ebp),%eax
086451cc +0xd17:  mov    %eax,(%esp)
086451cf +0xd1a:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086451d4 +0xd1f:  mov    %eax,(%esp)
086451d7 +0xd22:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
086451dc +0xd27:  mov    (%eax),%eax
086451de +0xd29:  mov    %eax,(%ebx)
086451e0 +0xd2b:  mov    -0x30(%ebp),%eax
086451e3 +0xd2e:  sub    $0x1,%eax
086451e6 +0xd31:  mov    %eax,0xc(%ebp)
086451e9 +0xd34:  lea    0x14(%ebp),%eax
086451ec +0xd37:  mov    %eax,(%esp)
086451ef +0xd3a:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
086451f4 +0xd3f:  mov    (%eax),%edx
086451f6 +0xd41:  mov    0xc(%ebp),%eax
086451f9 +0xd44:  mov    %edx,0xc(%esp)
086451fd +0xd48:  mov    -0xc(%ebp),%edx
08645200 +0xd4b:  mov    %edx,0x8(%esp)
08645204 +0xd4f:  mov    %eax,0x4(%esp)
08645208 +0xd53:  mov    0x8(%ebp),%eax
0864520b +0xd56:  mov    %eax,(%esp)
0864520e +0xd59:  call   0864523d <+0xd88>
08645213 +0xd5e:  mov    -0x4(%ebp),%ebx
08645216 +0xd61:  leave
08645217 +0xd62:  ret
08645218 +0xd63:  push   %ebp
08645219 +0xd64:  mov    %esp,%ebp
0864521b +0xd66:  sub    $0x28,%esp
0864521e +0xd69:  movb   $0x1,-0x9(%ebp)
08645222 +0xd6d:  mov    0x10(%ebp),%eax
08645225 +0xd70:  mov    %eax,0x8(%esp)
08645229 +0xd74:  mov    0xc(%ebp),%eax
0864522c +0xd77:  mov    %eax,0x4(%esp)
08645230 +0xd7b:  mov    0x8(%ebp),%eax
08645233 +0xd7e:  mov    %eax,(%esp)
08645236 +0xd81:  call   08645357 <+0xea2>
0864523b +0xd86:  leave
0864523c +0xd87:  ret
0864523d +0xd88:  push   %ebp
0864523e +0xd89:  mov    %esp,%ebp
08645240 +0xd8b:  push   %ebx
08645241 +0xd8c:  sub    $0x34,%esp
08645244 +0xd8f:  mov    0xc(%ebp),%eax
08645247 +0xd92:  sub    $0x1,%eax
0864524a +0xd95:  mov    %eax,%edx
0864524c +0xd97:  shr    $0x1f,%edx
0864524f +0xd9a:  lea    (%edx,%eax,1),%eax
08645252 +0xd9d:  sar    %eax
08645254 +0xd9f:  mov    %eax,-0x1c(%ebp)
08645257 +0xda2:  jmp    086452ce <+0xe19>
08645259 +0xda4:  lea    -0x14(%ebp),%eax
0864525c +0xda7:  lea    0xc(%ebp),%edx
0864525f +0xdaa:  mov    %edx,0x8(%esp)
08645263 +0xdae:  lea    0x8(%ebp),%edx
08645266 +0xdb1:  mov    %edx,0x4(%esp)
0864526a +0xdb5:  mov    %eax,(%esp)
0864526d +0xdb8:  call   0864493c <+0x487>
08645272 +0xdbd:  sub    $0x4,%esp
08645275 +0xdc0:  lea    -0x14(%ebp),%eax
08645278 +0xdc3:  mov    %eax,(%esp)
0864527b +0xdc6:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08645280 +0xdcb:  mov    %eax,%ebx
08645282 +0xdcd:  lea    -0x10(%ebp),%eax
08645285 +0xdd0:  lea    -0x1c(%ebp),%edx
08645288 +0xdd3:  mov    %edx,0x8(%esp)
0864528c +0xdd7:  lea    0x8(%ebp),%edx
0864528f +0xdda:  mov    %edx,0x4(%esp)
08645293 +0xdde:  mov    %eax,(%esp)
08645296 +0xde1:  call   0864493c <+0x487>
0864529b +0xde6:  sub    $0x4,%esp
0864529e +0xde9:  lea    -0x10(%ebp),%eax
086452a1 +0xdec:  mov    %eax,(%esp)
086452a4 +0xdef:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086452a9 +0xdf4:  mov    %eax,(%esp)
086452ac +0xdf7:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
086452b1 +0xdfc:  mov    (%eax),%eax
086452b3 +0xdfe:  mov    %eax,(%ebx)
086452b5 +0xe00:  mov    -0x1c(%ebp),%eax
086452b8 +0xe03:  mov    %eax,0xc(%ebp)
086452bb +0xe06:  mov    0xc(%ebp),%eax
086452be +0xe09:  sub    $0x1,%eax
086452c1 +0xe0c:  mov    %eax,%edx
086452c3 +0xe0e:  shr    $0x1f,%edx
086452c6 +0xe11:  lea    (%edx,%eax,1),%eax
086452c9 +0xe14:  sar    %eax
086452cb +0xe16:  mov    %eax,-0x1c(%ebp)
086452ce +0xe19:  mov    0xc(%ebp),%eax
086452d1 +0xe1c:  cmp    0x10(%ebp),%eax
086452d4 +0xe1f:  jle    0864530d <+0xe58>
086452d6 +0xe21:  lea    -0x18(%ebp),%eax
086452d9 +0xe24:  lea    -0x1c(%ebp),%edx
086452dc +0xe27:  mov    %edx,0x8(%esp)
086452e0 +0xe2b:  lea    0x8(%ebp),%edx
086452e3 +0xe2e:  mov    %edx,0x4(%esp)
086452e7 +0xe32:  mov    %eax,(%esp)
086452ea +0xe35:  call   0864493c <+0x487>
086452ef +0xe3a:  sub    $0x4,%esp
086452f2 +0xe3d:  lea    -0x18(%ebp),%eax
086452f5 +0xe40:  mov    %eax,(%esp)
086452f8 +0xe43:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
086452fd +0xe48:  mov    (%eax),%edx
086452ff +0xe4a:  mov    0x14(%ebp),%eax
08645302 +0xe4d:  cmp    %eax,%edx
08645304 +0xe4f:  jae    0864530d <+0xe58>
08645306 +0xe51:  mov    $0x1,%eax
0864530b +0xe56:  jmp    08645312 <+0xe5d>
0864530d +0xe58:  mov    $0x0,%eax
08645312 +0xe5d:  test   %al,%al
08645314 +0xe5f:  jne    08645259 <+0xda4>
0864531a +0xe65:  lea    -0xc(%ebp),%eax
0864531d +0xe68:  lea    0xc(%ebp),%edx
08645320 +0xe6b:  mov    %edx,0x8(%esp)
08645324 +0xe6f:  lea    0x8(%ebp),%edx
08645327 +0xe72:  mov    %edx,0x4(%esp)
0864532b +0xe76:  mov    %eax,(%esp)
0864532e +0xe79:  call   0864493c <+0x487>
08645333 +0xe7e:  sub    $0x4,%esp
08645336 +0xe81:  lea    -0xc(%ebp),%eax
08645339 +0xe84:  mov    %eax,(%esp)
0864533c +0xe87:  call   080e379e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1544>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1544
08645341 +0xe8c:  mov    %eax,%ebx
08645343 +0xe8e:  lea    0x14(%ebp),%eax
08645346 +0xe91:  mov    %eax,(%esp)
08645349 +0xe94:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0864534e +0xe99:  mov    (%eax),%eax
08645350 +0xe9b:  mov    %eax,(%ebx)
08645352 +0xe9d:  mov    -0x4(%ebp),%ebx
08645355 +0xea0:  leave
08645356 +0xea1:  ret
08645357 +0xea2:  push   %ebp
08645358 +0xea3:  mov    %esp,%ebp
0864535a +0xea5:  sub    $0x28,%esp
0864535d +0xea8:  mov    0xc(%ebp),%edx
08645360 +0xeab:  mov    0x8(%ebp),%eax
08645363 +0xeae:  mov    %edx,%ecx
08645365 +0xeb0:  sub    %eax,%ecx
08645367 +0xeb2:  mov    %ecx,%eax
08645369 +0xeb4:  sar    $0x2,%eax
0864536c +0xeb7:  mov    %eax,-0xc(%ebp)
0864536f +0xeba:  mov    -0xc(%ebp),%eax
08645372 +0xebd:  lea    0x0(,%eax,4),%edx
08645379 +0xec4:  mov    -0xc(%ebp),%eax
0864537c +0xec7:  shl    $0x2,%eax
0864537f +0xeca:  neg    %eax
08645381 +0xecc:  add    0x10(%ebp),%eax
08645384 +0xecf:  mov    %edx,0x8(%esp)
08645388 +0xed3:  mov    0x8(%ebp),%edx
0864538b +0xed6:  mov    %edx,0x4(%esp)
0864538f +0xeda:  mov    %eax,(%esp)
08645392 +0xedd:  call   0807d880 <_init+0x178>
08645397 +0xee2:  mov    -0xc(%ebp),%eax
0864539a +0xee5:  shl    $0x2,%eax
0864539d +0xee8:  neg    %eax
0864539f +0xeea:  add    0x10(%ebp),%eax
086453a2 +0xeed:  leave
086453a3 +0xeee:  ret
```

## 反编译 C

```c
// <global>::global @ 0x86444b5

/* TowerOfDespairMgr::TowerOfDespairMgr() */

void TowerOfDespairMgr::_GLOBAL__I_TowerOfDespairMgr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
