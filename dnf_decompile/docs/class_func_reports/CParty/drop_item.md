# drop_item

`_ZN6CParty9drop_itemEP5CUseriicii`

`CParty::drop_item(CUser*, int, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a63f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a63f4  _ZN6CParty9drop_itemEP5CUseriicii
#           CParty::drop_item(CUser*, int, int, char, int, int)
# range [0x085a63f4, 0x085a73a5]
085a63f4 +0x000:  push   %ebp
085a63f5 +0x001:  mov    %esp,%ebp
085a63f7 +0x003:  push   %edi
085a63f8 +0x004:  push   %esi
085a63f9 +0x005:  push   %ebx
085a63fa +0x006:  sub    $0x1ec,%esp
085a6400 +0x00c:  mov    0x18(%ebp),%eax
085a6403 +0x00f:  mov    %al,-0x13c(%ebp)
085a6409 +0x015:  cmpl   $0x0,0x20(%ebp)
085a640d +0x019:  jns    085a6475 <+0x81>
085a640f +0x01b:  mov    0xc(%ebp),%eax
085a6412 +0x01e:  mov    %eax,(%esp)
085a6415 +0x021:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085a641a +0x026:  mov    %eax,%ebx
085a641c +0x028:  mov    0xc(%ebp),%eax
085a641f +0x02b:  mov    %eax,(%esp)
085a6422 +0x02e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085a6427 +0x033:  movl   $0x0,0x4(%esp)
085a642f +0x03b:  mov    %eax,(%esp)
085a6432 +0x03e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
085a6437 +0x043:  mov    %ebx,0x18(%esp)
085a643b +0x047:  mov    %eax,0x14(%esp)
085a643f +0x04b:  movl   $"user - accid[%s] %s : count<0",0x10(%esp)
085a6447 +0x053:  movl   $0x1a0c,0xc(%esp)
085a644f +0x05b:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x8(%esp)
085a6457 +0x063:  movl   $"party.cpp",0x4(%esp)
085a645f +0x06b:  movl   $0x1,(%esp)
085a6466 +0x072:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085a646b +0x077:  mov    $0x11,%ebx
085a6470 +0x07c:  jmp    085a7398 <+0xfa4>
085a6475 +0x081:  mov    0xc(%ebp),%eax
085a6478 +0x084:  mov    %eax,(%esp)
085a647b +0x087:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
085a6480 +0x08c:  test   %al,%al
085a6482 +0x08e:  je     085a648e <+0x9a>
085a6484 +0x090:  mov    $0x13,%ebx
085a6489 +0x095:  jmp    085a7398 <+0xfa4>
085a648e +0x09a:  lea    -0x12c(%ebp),%eax
085a6494 +0x0a0:  mov    %eax,(%esp)
085a6497 +0x0a3:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
085a649c +0x0a8:  lea    -0xd5(%ebp),%eax
085a64a2 +0x0ae:  mov    %eax,(%esp)
085a64a5 +0x0b1:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085a64aa +0x0b6:  movsbl -0x13c(%ebp),%eax
085a64b1 +0x0bd:  cmp    $0x2,%eax
085a64b4 +0x0c0:  je     085a6629 <+0x235>
085a64ba +0x0c6:  cmp    $0x2,%eax
085a64bd +0x0c9:  jg     085a64c8 <+0xd4>
085a64bf +0x0cb:  test   %eax,%eax
085a64c1 +0x0cd:  je     085a64df <+0xeb>
085a64c3 +0x0cf:  jmp    085a6910 <+0x51c>
085a64c8 +0x0d4:  cmp    $0x3,%eax
085a64cb +0x0d7:  je     085a6716 <+0x322>
085a64d1 +0x0dd:  cmp    $0x7,%eax
085a64d4 +0x0e0:  je     085a680b <+0x417>
085a64da +0x0e6:  jmp    085a6910 <+0x51c>
085a64df +0x0eb:  cmpl   $0x0,0x1c(%ebp)
085a64e3 +0x0ef:  jne    085a6534 <+0x140>
085a64e5 +0x0f1:  movb   $0x0,-0x12c(%ebp)
085a64ec +0x0f8:  movb   $0x2,-0x11b(%ebp)
085a64f3 +0x0ff:  movl   $0x0,-0x11a(%ebp)
085a64fd +0x109:  mov    0x20(%ebp),%eax
085a6500 +0x10c:  mov    %eax,0x4(%esp)
085a6504 +0x110:  lea    -0x12c(%ebp),%eax
085a650a +0x116:  add    $0x10,%eax
085a650d +0x119:  mov    %eax,(%esp)
085a6510 +0x11c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085a6515 +0x121:  movw   $0x0,-0x111(%ebp)
085a651e +0x12a:  lea    -0x12c(%ebp),%eax
085a6524 +0x130:  add    $0x10,%eax
085a6527 +0x133:  mov    %eax,(%esp)
085a652a +0x136:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
085a652f +0x13b:  jmp    085a6910 <+0x51c>
085a6534 +0x140:  mov    0xc(%ebp),%eax
085a6537 +0x143:  mov    %eax,(%esp)
085a653a +0x146:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a653f +0x14b:  lea    -0x188(%ebp),%edx
085a6545 +0x151:  mov    0x1c(%ebp),%ecx
085a6548 +0x154:  mov    %ecx,0xc(%esp)
085a654c +0x158:  movl   $0x1,0x8(%esp)
085a6554 +0x160:  mov    %eax,0x4(%esp)
085a6558 +0x164:  mov    %edx,(%esp)
085a655b +0x167:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a6560 +0x16c:  sub    $0x4,%esp
085a6563 +0x16f:  mov    -0x188(%ebp),%eax
085a6569 +0x175:  mov    %eax,-0xd5(%ebp)
085a656f +0x17b:  mov    -0x184(%ebp),%eax
085a6575 +0x181:  mov    %eax,-0xd1(%ebp)
085a657b +0x187:  mov    -0x180(%ebp),%eax
085a6581 +0x18d:  mov    %eax,-0xcd(%ebp)
085a6587 +0x193:  mov    -0x17c(%ebp),%eax
085a658d +0x199:  mov    %eax,-0xc9(%ebp)
085a6593 +0x19f:  mov    -0x178(%ebp),%eax
085a6599 +0x1a5:  mov    %eax,-0xc5(%ebp)
085a659f +0x1ab:  mov    -0x174(%ebp),%eax
085a65a5 +0x1b1:  mov    %eax,-0xc1(%ebp)
085a65ab +0x1b7:  mov    -0x170(%ebp),%eax
085a65b1 +0x1bd:  mov    %eax,-0xbd(%ebp)
085a65b7 +0x1c3:  mov    -0x16c(%ebp),%eax
085a65bd +0x1c9:  mov    %eax,-0xb9(%ebp)
085a65c3 +0x1cf:  mov    -0x168(%ebp),%eax
085a65c9 +0x1d5:  mov    %eax,-0xb5(%ebp)
085a65cf +0x1db:  mov    -0x164(%ebp),%eax
085a65d5 +0x1e1:  mov    %eax,-0xb1(%ebp)
085a65db +0x1e7:  mov    -0x160(%ebp),%eax
085a65e1 +0x1ed:  mov    %eax,-0xad(%ebp)
085a65e7 +0x1f3:  mov    -0x15c(%ebp),%eax
085a65ed +0x1f9:  mov    %eax,-0xa9(%ebp)
085a65f3 +0x1ff:  mov    -0x158(%ebp),%eax
085a65f9 +0x205:  mov    %eax,-0xa5(%ebp)
085a65ff +0x20b:  mov    -0x154(%ebp),%eax
085a6605 +0x211:  mov    %eax,-0xa1(%ebp)
085a660b +0x217:  mov    -0x150(%ebp),%eax
085a6611 +0x21d:  mov    %eax,-0x9d(%ebp)
085a6617 +0x223:  movzbl -0x14c(%ebp),%eax
085a661e +0x22a:  mov    %al,-0x99(%ebp)
085a6624 +0x230:  jmp    085a6910 <+0x51c>
085a6629 +0x235:  mov    0xc(%ebp),%eax
085a662c +0x238:  mov    %eax,(%esp)
085a662f +0x23b:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
085a6634 +0x240:  lea    -0x188(%ebp),%edx
085a663a +0x246:  mov    0x1c(%ebp),%ecx
085a663d +0x249:  mov    %ecx,0x8(%esp)
085a6641 +0x24d:  mov    %eax,0x4(%esp)
085a6645 +0x251:  mov    %edx,(%esp)
085a6648 +0x254:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
085a664d +0x259:  sub    $0x4,%esp
085a6650 +0x25c:  mov    -0x188(%ebp),%eax
085a6656 +0x262:  mov    %eax,-0xd5(%ebp)
085a665c +0x268:  mov    -0x184(%ebp),%eax
085a6662 +0x26e:  mov    %eax,-0xd1(%ebp)
085a6668 +0x274:  mov    -0x180(%ebp),%eax
085a666e +0x27a:  mov    %eax,-0xcd(%ebp)
085a6674 +0x280:  mov    -0x17c(%ebp),%eax
085a667a +0x286:  mov    %eax,-0xc9(%ebp)
085a6680 +0x28c:  mov    -0x178(%ebp),%eax
085a6686 +0x292:  mov    %eax,-0xc5(%ebp)
085a668c +0x298:  mov    -0x174(%ebp),%eax
085a6692 +0x29e:  mov    %eax,-0xc1(%ebp)
085a6698 +0x2a4:  mov    -0x170(%ebp),%eax
085a669e +0x2aa:  mov    %eax,-0xbd(%ebp)
085a66a4 +0x2b0:  mov    -0x16c(%ebp),%eax
085a66aa +0x2b6:  mov    %eax,-0xb9(%ebp)
085a66b0 +0x2bc:  mov    -0x168(%ebp),%eax
085a66b6 +0x2c2:  mov    %eax,-0xb5(%ebp)
085a66bc +0x2c8:  mov    -0x164(%ebp),%eax
085a66c2 +0x2ce:  mov    %eax,-0xb1(%ebp)
085a66c8 +0x2d4:  mov    -0x160(%ebp),%eax
085a66ce +0x2da:  mov    %eax,-0xad(%ebp)
085a66d4 +0x2e0:  mov    -0x15c(%ebp),%eax
085a66da +0x2e6:  mov    %eax,-0xa9(%ebp)
085a66e0 +0x2ec:  mov    -0x158(%ebp),%eax
085a66e6 +0x2f2:  mov    %eax,-0xa5(%ebp)
085a66ec +0x2f8:  mov    -0x154(%ebp),%eax
085a66f2 +0x2fe:  mov    %eax,-0xa1(%ebp)
085a66f8 +0x304:  mov    -0x150(%ebp),%eax
085a66fe +0x30a:  mov    %eax,-0x9d(%ebp)
085a6704 +0x310:  movzbl -0x14c(%ebp),%eax
085a670b +0x317:  mov    %al,-0x99(%ebp)
085a6711 +0x31d:  jmp    085a6910 <+0x51c>
085a6716 +0x322:  mov    0xc(%ebp),%eax
085a6719 +0x325:  mov    %eax,(%esp)
085a671c +0x328:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a6721 +0x32d:  lea    -0x188(%ebp),%edx
085a6727 +0x333:  mov    0x1c(%ebp),%ecx
085a672a +0x336:  mov    %ecx,0xc(%esp)
085a672e +0x33a:  movl   $0x0,0x8(%esp)
085a6736 +0x342:  mov    %eax,0x4(%esp)
085a673a +0x346:  mov    %edx,(%esp)
085a673d +0x349:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a6742 +0x34e:  sub    $0x4,%esp
085a6745 +0x351:  mov    -0x188(%ebp),%eax
085a674b +0x357:  mov    %eax,-0xd5(%ebp)
085a6751 +0x35d:  mov    -0x184(%ebp),%eax
085a6757 +0x363:  mov    %eax,-0xd1(%ebp)
085a675d +0x369:  mov    -0x180(%ebp),%eax
085a6763 +0x36f:  mov    %eax,-0xcd(%ebp)
085a6769 +0x375:  mov    -0x17c(%ebp),%eax
085a676f +0x37b:  mov    %eax,-0xc9(%ebp)
085a6775 +0x381:  mov    -0x178(%ebp),%eax
085a677b +0x387:  mov    %eax,-0xc5(%ebp)
085a6781 +0x38d:  mov    -0x174(%ebp),%eax
085a6787 +0x393:  mov    %eax,-0xc1(%ebp)
085a678d +0x399:  mov    -0x170(%ebp),%eax
085a6793 +0x39f:  mov    %eax,-0xbd(%ebp)
085a6799 +0x3a5:  mov    -0x16c(%ebp),%eax
085a679f +0x3ab:  mov    %eax,-0xb9(%ebp)
085a67a5 +0x3b1:  mov    -0x168(%ebp),%eax
085a67ab +0x3b7:  mov    %eax,-0xb5(%ebp)
085a67b1 +0x3bd:  mov    -0x164(%ebp),%eax
085a67b7 +0x3c3:  mov    %eax,-0xb1(%ebp)
085a67bd +0x3c9:  mov    -0x160(%ebp),%eax
085a67c3 +0x3cf:  mov    %eax,-0xad(%ebp)
085a67c9 +0x3d5:  mov    -0x15c(%ebp),%eax
085a67cf +0x3db:  mov    %eax,-0xa9(%ebp)
085a67d5 +0x3e1:  mov    -0x158(%ebp),%eax
085a67db +0x3e7:  mov    %eax,-0xa5(%ebp)
085a67e1 +0x3ed:  mov    -0x154(%ebp),%eax
085a67e7 +0x3f3:  mov    %eax,-0xa1(%ebp)
085a67ed +0x3f9:  mov    -0x150(%ebp),%eax
085a67f3 +0x3ff:  mov    %eax,-0x9d(%ebp)
085a67f9 +0x405:  movzbl -0x14c(%ebp),%eax
085a6800 +0x40c:  mov    %al,-0x99(%ebp)
085a6806 +0x412:  jmp    085a6910 <+0x51c>
085a680b +0x417:  mov    0xc(%ebp),%eax
085a680e +0x41a:  mov    %eax,(%esp)
085a6811 +0x41d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a6816 +0x422:  lea    -0x188(%ebp),%edx
085a681c +0x428:  mov    0x1c(%ebp),%ecx
085a681f +0x42b:  mov    %ecx,0xc(%esp)
085a6823 +0x42f:  movl   $0x3,0x8(%esp)
085a682b +0x437:  mov    %eax,0x4(%esp)
085a682f +0x43b:  mov    %edx,(%esp)
085a6832 +0x43e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a6837 +0x443:  sub    $0x4,%esp
085a683a +0x446:  mov    -0x188(%ebp),%eax
085a6840 +0x44c:  mov    %eax,-0xd5(%ebp)
085a6846 +0x452:  mov    -0x184(%ebp),%eax
085a684c +0x458:  mov    %eax,-0xd1(%ebp)
085a6852 +0x45e:  mov    -0x180(%ebp),%eax
085a6858 +0x464:  mov    %eax,-0xcd(%ebp)
085a685e +0x46a:  mov    -0x17c(%ebp),%eax
085a6864 +0x470:  mov    %eax,-0xc9(%ebp)
085a686a +0x476:  mov    -0x178(%ebp),%eax
085a6870 +0x47c:  mov    %eax,-0xc5(%ebp)
085a6876 +0x482:  mov    -0x174(%ebp),%eax
085a687c +0x488:  mov    %eax,-0xc1(%ebp)
085a6882 +0x48e:  mov    -0x170(%ebp),%eax
085a6888 +0x494:  mov    %eax,-0xbd(%ebp)
085a688e +0x49a:  mov    -0x16c(%ebp),%eax
085a6894 +0x4a0:  mov    %eax,-0xb9(%ebp)
085a689a +0x4a6:  mov    -0x168(%ebp),%eax
085a68a0 +0x4ac:  mov    %eax,-0xb5(%ebp)
085a68a6 +0x4b2:  mov    -0x164(%ebp),%eax
085a68ac +0x4b8:  mov    %eax,-0xb1(%ebp)
085a68b2 +0x4be:  mov    -0x160(%ebp),%eax
085a68b8 +0x4c4:  mov    %eax,-0xad(%ebp)
085a68be +0x4ca:  mov    -0x15c(%ebp),%eax
085a68c4 +0x4d0:  mov    %eax,-0xa9(%ebp)
085a68ca +0x4d6:  mov    -0x158(%ebp),%eax
085a68d0 +0x4dc:  mov    %eax,-0xa5(%ebp)
085a68d6 +0x4e2:  mov    -0x154(%ebp),%eax
085a68dc +0x4e8:  mov    %eax,-0xa1(%ebp)
085a68e2 +0x4ee:  mov    -0x150(%ebp),%eax
085a68e8 +0x4f4:  mov    %eax,-0x9d(%ebp)
085a68ee +0x4fa:  movzbl -0x14c(%ebp),%eax
085a68f5 +0x501:  mov    %al,-0x99(%ebp)
085a68fb +0x507:  movzbl -0xd4(%ebp),%eax
085a6902 +0x50e:  cmp    $0x5,%al
085a6904 +0x510:  jne    085a6910 <+0x51c>
085a6906 +0x512:  mov    $0x17,%ebx
085a690b +0x517:  jmp    085a7398 <+0xfa4>
085a6910 +0x51c:  movl   $0x0,-0x8c(%ebp)
085a691a +0x526:  mov    -0xd3(%ebp),%eax
085a6920 +0x52c:  test   %eax,%eax
085a6922 +0x52e:  je     085a6bc0 <+0x7cc>
085a6928 +0x534:  mov    -0xd3(%ebp),%eax
085a692e +0x53a:  mov    %eax,%ebx
085a6930 +0x53c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a6935 +0x541:  mov    %ebx,0x4(%esp)
085a6939 +0x545:  mov    %eax,(%esp)
085a693c +0x548:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085a6941 +0x54d:  mov    %eax,-0x24(%ebp)
085a6944 +0x550:  cmpl   $0x0,-0x24(%ebp)
085a6948 +0x554:  jne    085a6980 <+0x58c>
085a694a +0x556:  movl   $"[CParty::drop_item] Null Item",0x10(%esp)
085a6952 +0x55e:  movl   $0x1a48,0xc(%esp)
085a695a +0x566:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x8(%esp)
085a6962 +0x56e:  movl   $"party.cpp",0x4(%esp)
085a696a +0x576:  movl   $0x1,(%esp)
085a6971 +0x57d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085a6976 +0x582:  mov    $0xffffffff,%ebx
085a697b +0x587:  jmp    085a7398 <+0xfa4>
085a6980 +0x58c:  mov    -0x24(%ebp),%eax
085a6983 +0x58f:  mov    %eax,(%esp)
085a6986 +0x592:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
085a698b +0x597:  mov    %eax,-0x20(%ebp)
085a698e +0x59a:  mov    -0x20(%ebp),%eax
085a6991 +0x59d:  cmp    $0x5,%eax
085a6994 +0x5a0:  ja     085a69c1 <+0x5cd>
085a6996 +0x5a2:  mov    &data#5dfdae5b(.rodata)(,%eax,4),%eax
085a699d +0x5a9:  jmp    *%eax
085a699f +0x5ab:  mov    $0x17,%ebx
085a69a4 +0x5b0:  jmp    085a7398 <+0xfa4>
085a69a9 +0x5b5:  movzbl -0xd5(%ebp),%eax
085a69b0 +0x5bc:  xor    $0x1,%eax
085a69b3 +0x5bf:  test   %al,%al
085a69b5 +0x5c1:  je     085a69c1 <+0x5cd>
085a69b7 +0x5c3:  mov    $0x17,%ebx
085a69bc +0x5c8:  jmp    085a7398 <+0xfa4>
085a69c1 +0x5cd:  lea    -0xd5(%ebp),%eax
085a69c7 +0x5d3:  add    $0x33,%eax
085a69ca +0x5d6:  mov    %eax,(%esp)
085a69cd +0x5d9:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
085a69d2 +0x5de:  test   %al,%al
085a69d4 +0x5e0:  setne  %al
085a69d7 +0x5e3:  test   %al,%al
085a69d9 +0x5e5:  je     085a69e5 <+0x5f1>
085a69db +0x5e7:  mov    $0x17,%ebx
085a69e0 +0x5ec:  jmp    085a7398 <+0xfa4>
085a69e5 +0x5f1:  mov    -0x24(%ebp),%eax
085a69e8 +0x5f4:  mov    %eax,(%esp)
085a69eb +0x5f7:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085a69f0 +0x5fc:  cmp    $0x2,%eax
085a69f3 +0x5ff:  setg   %al
085a69f6 +0x602:  test   %al,%al
085a69f8 +0x604:  je     085a6a04 <+0x610>
085a69fa +0x606:  mov    $0xd,%ebx
085a69ff +0x60b:  jmp    085a7398 <+0xfa4>
085a6a04 +0x610:  lea    -0xd5(%ebp),%eax
085a6a0a +0x616:  mov    %eax,(%esp)
085a6a0d +0x619:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085a6a12 +0x61e:  test   %al,%al
085a6a14 +0x620:  je     085a6a42 <+0x64e>
085a6a16 +0x622:  mov    -0x24(%ebp),%eax
085a6a19 +0x625:  mov    %eax,-0x1c(%ebp)
085a6a1c +0x628:  mov    -0x1c(%ebp),%eax
085a6a1f +0x62b:  mov    0x234(%eax),%eax
085a6a25 +0x631:  cmp    $0xb,%eax
085a6a28 +0x634:  je     085a6a38 <+0x644>
085a6a2a +0x636:  mov    -0x1c(%ebp),%eax
085a6a2d +0x639:  mov    0x234(%eax),%eax
085a6a33 +0x63f:  cmp    $0x9,%eax
085a6a36 +0x642:  jg     085a6a42 <+0x64e>
085a6a38 +0x644:  mov    $0x17,%ebx
085a6a3d +0x649:  jmp    085a7398 <+0xfa4>
085a6a42 +0x64e:  movb   $0x0,-0x12c(%ebp)
085a6a49 +0x655:  movzbl -0xd4(%ebp),%eax
085a6a50 +0x65c:  mov    %al,-0x11b(%ebp)
085a6a56 +0x662:  mov    -0xd3(%ebp),%eax
085a6a5c +0x668:  mov    %eax,-0x11a(%ebp)
085a6a62 +0x66e:  lea    -0xd5(%ebp),%eax
085a6a68 +0x674:  mov    %eax,(%esp)
085a6a6b +0x677:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085a6a70 +0x67c:  xor    $0x1,%eax
085a6a73 +0x67f:  test   %al,%al
085a6a75 +0x681:  je     085a6a91 <+0x69d>
085a6a77 +0x683:  mov    0x20(%ebp),%eax
085a6a7a +0x686:  mov    %eax,0x4(%esp)
085a6a7e +0x68a:  lea    -0x12c(%ebp),%eax
085a6a84 +0x690:  add    $0x10,%eax
085a6a87 +0x693:  mov    %eax,(%esp)
085a6a8a +0x696:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085a6a8f +0x69b:  jmp    085a6aac <+0x6b8>
085a6a91 +0x69d:  mov    -0xce(%ebp),%eax
085a6a97 +0x6a3:  mov    %eax,0x4(%esp)
085a6a9b +0x6a7:  lea    -0x12c(%ebp),%eax
085a6aa1 +0x6ad:  add    $0x10,%eax
085a6aa4 +0x6b0:  mov    %eax,(%esp)
085a6aa7 +0x6b3:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085a6aac +0x6b8:  lea    -0xd5(%ebp),%eax
085a6ab2 +0x6be:  mov    %eax,(%esp)
085a6ab5 +0x6c1:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085a6aba +0x6c6:  movzbl %al,%eax
085a6abd +0x6c9:  mov    %eax,0x4(%esp)
085a6ac1 +0x6cd:  lea    -0x12c(%ebp),%eax
085a6ac7 +0x6d3:  add    $0x10,%eax
085a6aca +0x6d6:  mov    %eax,(%esp)
085a6acd +0x6d9:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
085a6ad2 +0x6de:  movzwl -0xca(%ebp),%eax
085a6ad9 +0x6e5:  mov    %ax,-0x111(%ebp)
085a6ae0 +0x6ec:  movzbl -0xd5(%ebp),%eax
085a6ae7 +0x6f3:  mov    %al,-0x11c(%ebp)
085a6aed +0x6f9:  mov    -0xc8(%ebp),%eax
085a6af3 +0x6ff:  mov    %eax,-0x10f(%ebp)
085a6af9 +0x705:  mov    -0xc0(%ebp),%eax
085a6aff +0x70b:  mov    %eax,-0x107(%ebp)
085a6b05 +0x711:  mov    -0xbc(%ebp),%eax
085a6b0b +0x717:  mov    %eax,-0x103(%ebp)
085a6b11 +0x71d:  movzwl -0xb8(%ebp),%eax
085a6b18 +0x724:  mov    %ax,-0xff(%ebp)
085a6b1f +0x72b:  mov    -0xc4(%ebp),%eax
085a6b25 +0x731:  mov    %eax,-0x10b(%ebp)
085a6b2b +0x737:  mov    -0xb0(%ebp),%eax
085a6b31 +0x73d:  mov    %eax,-0xf7(%ebp)
085a6b37 +0x743:  mov    -0xac(%ebp),%eax
085a6b3d +0x749:  mov    %eax,-0xf3(%ebp)
085a6b43 +0x74f:  mov    -0xa8(%ebp),%eax
085a6b49 +0x755:  mov    %eax,-0xef(%ebp)
085a6b4f +0x75b:  movzwl -0xa4(%ebp),%eax
085a6b56 +0x762:  mov    %ax,-0xeb(%ebp)
085a6b5d +0x769:  lea    -0xd5(%ebp),%eax
085a6b63 +0x76f:  add    $0x33,%eax
085a6b66 +0x772:  mov    %eax,(%esp)
085a6b69 +0x775:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
085a6b6e +0x77a:  movzbl %al,%eax
085a6b71 +0x77d:  mov    %eax,0x4(%esp)
085a6b75 +0x781:  lea    -0x12c(%ebp),%eax
085a6b7b +0x787:  add    $0x43,%eax
085a6b7e +0x78a:  mov    %eax,(%esp)
085a6b81 +0x78d:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
085a6b86 +0x792:  mov    0x20(%ebp),%eax
085a6b89 +0x795:  movswl %ax,%ebx
085a6b8c +0x798:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
085a6b91 +0x79d:  lea    -0x8c(%ebp),%edx
085a6b97 +0x7a3:  mov    %edx,0x14(%esp)
085a6b9b +0x7a7:  movl   $0x0,0x10(%esp)
085a6ba3 +0x7af:  mov    %ebx,0xc(%esp)
085a6ba7 +0x7b3:  mov    -0x24(%ebp),%edx
085a6baa +0x7b6:  mov    %edx,0x8(%esp)
085a6bae +0x7ba:  lea    -0xd5(%ebp),%edx
085a6bb4 +0x7c0:  mov    %edx,0x4(%esp)
085a6bb8 +0x7c4:  mov    %eax,(%esp)
085a6bbb +0x7c7:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085a6bc0 +0x7cc:  movsbl -0x13c(%ebp),%eax
085a6bc7 +0x7d3:  cmp    $0x2,%eax
085a6bca +0x7d6:  je     085a6db4 <+0x9c0>
085a6bd0 +0x7dc:  cmp    $0x2,%eax
085a6bd3 +0x7df:  jg     085a6bde <+0x7ea>
085a6bd5 +0x7e1:  test   %eax,%eax
085a6bd7 +0x7e3:  je     085a6bf5 <+0x801>
085a6bd9 +0x7e5:  jmp    085a6ff7 <+0xc03>
085a6bde +0x7ea:  cmp    $0x3,%eax
085a6be1 +0x7ed:  je     085a6e70 <+0xa7c>
085a6be7 +0x7f3:  cmp    $0x7,%eax
085a6bea +0x7f6:  je     085a6f36 <+0xb42>
085a6bf0 +0x7fc:  jmp    085a6ff7 <+0xc03>
085a6bf5 +0x801:  cmpl   $0x0,0x1c(%ebp)
085a6bf9 +0x805:  jne    085a6ce8 <+0x8f4>
085a6bff +0x80b:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
085a6c04 +0x810:  movl   $0x2,0xc(%esp)
085a6c0c +0x818:  movl   $0x1,0x8(%esp)
085a6c14 +0x820:  mov    0xc(%ebp),%edx
085a6c17 +0x823:  mov    %edx,0x4(%esp)
085a6c1b +0x827:  mov    %eax,(%esp)
085a6c1e +0x82a:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
085a6c23 +0x82f:  test   %al,%al
085a6c25 +0x831:  je     085a6c31 <+0x83d>
085a6c27 +0x833:  mov    $0xd1,%ebx
085a6c2c +0x838:  jmp    085a7398 <+0xfa4>
085a6c31 +0x83d:  mov    0xc(%ebp),%eax
085a6c34 +0x840:  mov    %eax,(%esp)
085a6c37 +0x843:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a6c3c +0x848:  movl   $0x1,0xc(%esp)
085a6c44 +0x850:  movl   $0x6,0x8(%esp)
085a6c4c +0x858:  mov    0x20(%ebp),%edx
085a6c4f +0x85b:  mov    %edx,0x4(%esp)
085a6c53 +0x85f:  mov    %eax,(%esp)
085a6c56 +0x862:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085a6c5b +0x867:  xor    $0x1,%eax
085a6c5e +0x86a:  test   %al,%al
085a6c60 +0x86c:  je     085a6cc0 <+0x8cc>
085a6c62 +0x86e:  mov    0xc(%ebp),%eax
085a6c65 +0x871:  mov    %eax,(%esp)
085a6c68 +0x874:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a6c6d +0x879:  mov    %eax,%ebx
085a6c6f +0x87b:  movl   $0x5,0xc(%esp)
085a6c77 +0x883:  movl   $0x1aa6,0x8(%esp)
085a6c7f +0x88b:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a6c87 +0x893:  lea    -0x88(%ebp),%eax
085a6c8d +0x899:  mov    %eax,(%esp)
085a6c90 +0x89c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6c95 +0x8a1:  mov    0x20(%ebp),%eax
085a6c98 +0x8a4:  mov    %eax,0xc(%esp)
085a6c9c +0x8a8:  mov    %ebx,0x8(%esp)
085a6ca0 +0x8ac:  movl   $"CParty::drop_item , use_money failed, User ch =%d , %d %d",0x4(%esp)
085a6ca8 +0x8b4:  lea    -0x88(%ebp),%eax
085a6cae +0x8ba:  mov    %eax,(%esp)
085a6cb1 +0x8bd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6cb6 +0x8c2:  mov    $0x11,%ebx
085a6cbb +0x8c7:  jmp    085a7398 <+0xfa4>
085a6cc0 +0x8cc:  mov    0x20(%ebp),%ebx
085a6cc3 +0x8cf:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a6cc8 +0x8d4:  mov    %ebx,0xc(%esp)
085a6ccc +0x8d8:  mov    0xc(%ebp),%edx
085a6ccf +0x8db:  mov    %edx,0x8(%esp)
085a6cd3 +0x8df:  movl   $0x17,0x4(%esp)
085a6cdb +0x8e7:  mov    %eax,(%esp)
085a6cde +0x8ea:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a6ce3 +0x8ef:  jmp    085a6ff7 <+0xc03>
085a6ce8 +0x8f4:  mov    0xc(%ebp),%eax
085a6ceb +0x8f7:  mov    %eax,(%esp)
085a6cee +0x8fa:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a6cf3 +0x8ff:  movl   $0x1,0x14(%esp)
085a6cfb +0x907:  movl   $0x6,0x10(%esp)
085a6d03 +0x90f:  mov    0x20(%ebp),%edx
085a6d06 +0x912:  mov    %edx,0xc(%esp)
085a6d0a +0x916:  mov    0x1c(%ebp),%edx
085a6d0d +0x919:  mov    %edx,0x8(%esp)
085a6d11 +0x91d:  movl   $0x1,0x4(%esp)
085a6d19 +0x925:  mov    %eax,(%esp)
085a6d1c +0x928:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a6d21 +0x92d:  xor    $0x1,%eax
085a6d24 +0x930:  test   %al,%al
085a6d26 +0x932:  je     085a6d87 <+0x993>
085a6d28 +0x934:  mov    0xc(%ebp),%eax
085a6d2b +0x937:  mov    %eax,(%esp)
085a6d2e +0x93a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a6d33 +0x93f:  mov    %eax,%ebx
085a6d35 +0x941:  movl   $0x5,0xc(%esp)
085a6d3d +0x949:  movl   $0x1ab5,0x8(%esp)
085a6d45 +0x951:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a6d4d +0x959:  lea    -0x78(%ebp),%eax
085a6d50 +0x95c:  mov    %eax,(%esp)
085a6d53 +0x95f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6d58 +0x964:  mov    0x20(%ebp),%eax
085a6d5b +0x967:  mov    %eax,0x10(%esp)
085a6d5f +0x96b:  mov    0x1c(%ebp),%eax
085a6d62 +0x96e:  mov    %eax,0xc(%esp)
085a6d66 +0x972:  mov    %ebx,0x8(%esp)
085a6d6a +0x976:  movl   $"CParty::drop_item , delete_item failed, User ch =%d , %d %d",0x4(%esp)
085a6d72 +0x97e:  lea    -0x78(%ebp),%eax
085a6d75 +0x981:  mov    %eax,(%esp)
085a6d78 +0x984:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6d7d +0x989:  mov    $0x11,%ebx
085a6d82 +0x98e:  jmp    085a7398 <+0xfa4>
085a6d87 +0x993:  mov    -0x8c(%ebp),%eax
085a6d8d +0x999:  mov    %eax,%ebx
085a6d8f +0x99b:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a6d94 +0x9a0:  mov    %ebx,0xc(%esp)
085a6d98 +0x9a4:  mov    0xc(%ebp),%edx
085a6d9b +0x9a7:  mov    %edx,0x8(%esp)
085a6d9f +0x9ab:  movl   $0x16,0x4(%esp)
085a6da7 +0x9b3:  mov    %eax,(%esp)
085a6daa +0x9b6:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a6daf +0x9bb:  jmp    085a6ff7 <+0xc03>
085a6db4 +0x9c0:  mov    0xc(%ebp),%eax
085a6db7 +0x9c3:  mov    %eax,(%esp)
085a6dba +0x9c6:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
085a6dbf +0x9cb:  movl   $0x6,0xc(%esp)
085a6dc7 +0x9d3:  mov    0x20(%ebp),%edx
085a6dca +0x9d6:  mov    %edx,0x8(%esp)
085a6dce +0x9da:  mov    0x1c(%ebp),%edx
085a6dd1 +0x9dd:  mov    %edx,0x4(%esp)
085a6dd5 +0x9e1:  mov    %eax,(%esp)
085a6dd8 +0x9e4:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
085a6ddd +0x9e9:  xor    $0x1,%eax
085a6de0 +0x9ec:  test   %al,%al
085a6de2 +0x9ee:  je     085a6e43 <+0xa4f>
085a6de4 +0x9f0:  mov    0xc(%ebp),%eax
085a6de7 +0x9f3:  mov    %eax,(%esp)
085a6dea +0x9f6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a6def +0x9fb:  mov    %eax,%ebx
085a6df1 +0x9fd:  movl   $0x5,0xc(%esp)
085a6df9 +0xa05:  movl   $0x1ac6,0x8(%esp)
085a6e01 +0xa0d:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a6e09 +0xa15:  lea    -0x68(%ebp),%eax
085a6e0c +0xa18:  mov    %eax,(%esp)
085a6e0f +0xa1b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6e14 +0xa20:  mov    0x20(%ebp),%eax
085a6e17 +0xa23:  mov    %eax,0x10(%esp)
085a6e1b +0xa27:  mov    0x1c(%ebp),%eax
085a6e1e +0xa2a:  mov    %eax,0xc(%esp)
085a6e22 +0xa2e:  mov    %ebx,0x8(%esp)
085a6e26 +0xa32:  movl   $"CParty::drop_item , delete_item failed 2, User ch =%d , %d %d",0x4(%esp)
085a6e2e +0xa3a:  lea    -0x68(%ebp),%eax
085a6e31 +0xa3d:  mov    %eax,(%esp)
085a6e34 +0xa40:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6e39 +0xa45:  mov    $0x11,%ebx
085a6e3e +0xa4a:  jmp    085a7398 <+0xfa4>
085a6e43 +0xa4f:  mov    -0x8c(%ebp),%eax
085a6e49 +0xa55:  mov    %eax,%ebx
085a6e4b +0xa57:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a6e50 +0xa5c:  mov    %ebx,0xc(%esp)
085a6e54 +0xa60:  mov    0xc(%ebp),%edx
085a6e57 +0xa63:  mov    %edx,0x8(%esp)
085a6e5b +0xa67:  movl   $0x16,0x4(%esp)
085a6e63 +0xa6f:  mov    %eax,(%esp)
085a6e66 +0xa72:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a6e6b +0xa77:  jmp    085a6ff7 <+0xc03>
085a6e70 +0xa7c:  mov    0xc(%ebp),%eax
085a6e73 +0xa7f:  mov    %eax,(%esp)
085a6e76 +0xa82:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a6e7b +0xa87:  movl   $0x1,0x14(%esp)
085a6e83 +0xa8f:  movl   $0x6,0x10(%esp)
085a6e8b +0xa97:  movl   $0x1,0xc(%esp)
085a6e93 +0xa9f:  mov    0x1c(%ebp),%edx
085a6e96 +0xaa2:  mov    %edx,0x8(%esp)
085a6e9a +0xaa6:  movl   $0x0,0x4(%esp)
085a6ea2 +0xaae:  mov    %eax,(%esp)
085a6ea5 +0xab1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a6eaa +0xab6:  xor    $0x1,%eax
085a6ead +0xab9:  test   %al,%al
085a6eaf +0xabb:  je     085a6f09 <+0xb15>
085a6eb1 +0xabd:  mov    0xc(%ebp),%eax
085a6eb4 +0xac0:  mov    %eax,(%esp)
085a6eb7 +0xac3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a6ebc +0xac8:  mov    %eax,%ebx
085a6ebe +0xaca:  movl   $0x5,0xc(%esp)
085a6ec6 +0xad2:  movl   $0x1ae8,0x8(%esp)
085a6ece +0xada:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a6ed6 +0xae2:  lea    -0x58(%ebp),%eax
085a6ed9 +0xae5:  mov    %eax,(%esp)
085a6edc +0xae8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6ee1 +0xaed:  mov    0x1c(%ebp),%eax
085a6ee4 +0xaf0:  mov    %eax,0xc(%esp)
085a6ee8 +0xaf4:  mov    %ebx,0x8(%esp)
085a6eec +0xaf8:  movl   $"CParty::drop_item , delete_item failed 3, User ch =%d , %d",0x4(%esp)
085a6ef4 +0xb00:  lea    -0x58(%ebp),%eax
085a6ef7 +0xb03:  mov    %eax,(%esp)
085a6efa +0xb06:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6eff +0xb0b:  mov    $0x11,%ebx
085a6f04 +0xb10:  jmp    085a7398 <+0xfa4>
085a6f09 +0xb15:  mov    -0x8c(%ebp),%eax
085a6f0f +0xb1b:  mov    %eax,%ebx
085a6f11 +0xb1d:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a6f16 +0xb22:  mov    %ebx,0xc(%esp)
085a6f1a +0xb26:  mov    0xc(%ebp),%edx
085a6f1d +0xb29:  mov    %edx,0x8(%esp)
085a6f21 +0xb2d:  movl   $0x16,0x4(%esp)
085a6f29 +0xb35:  mov    %eax,(%esp)
085a6f2c +0xb38:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a6f31 +0xb3d:  jmp    085a6ff7 <+0xc03>
085a6f36 +0xb42:  mov    0xc(%ebp),%eax
085a6f39 +0xb45:  mov    %eax,(%esp)
085a6f3c +0xb48:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a6f41 +0xb4d:  movl   $0x1,0x14(%esp)
085a6f49 +0xb55:  movl   $0x6,0x10(%esp)
085a6f51 +0xb5d:  movl   $0x1,0xc(%esp)
085a6f59 +0xb65:  mov    0x1c(%ebp),%edx
085a6f5c +0xb68:  mov    %edx,0x8(%esp)
085a6f60 +0xb6c:  movl   $0x3,0x4(%esp)
085a6f68 +0xb74:  mov    %eax,(%esp)
085a6f6b +0xb77:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a6f70 +0xb7c:  xor    $0x1,%eax
085a6f73 +0xb7f:  test   %al,%al
085a6f75 +0xb81:  je     085a6fcf <+0xbdb>
085a6f77 +0xb83:  mov    0xc(%ebp),%eax
085a6f7a +0xb86:  mov    %eax,(%esp)
085a6f7d +0xb89:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a6f82 +0xb8e:  mov    %eax,%ebx
085a6f84 +0xb90:  movl   $0x5,0xc(%esp)
085a6f8c +0xb98:  movl   $0x1af9,0x8(%esp)
085a6f94 +0xba0:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a6f9c +0xba8:  lea    -0x48(%ebp),%eax
085a6f9f +0xbab:  mov    %eax,(%esp)
085a6fa2 +0xbae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a6fa7 +0xbb3:  mov    0x1c(%ebp),%eax
085a6faa +0xbb6:  mov    %eax,0xc(%esp)
085a6fae +0xbba:  mov    %ebx,0x8(%esp)
085a6fb2 +0xbbe:  movl   $"CParty::drop_item , delete_item failed 4, User ch =%d , %d",0x4(%esp)
085a6fba +0xbc6:  lea    -0x48(%ebp),%eax
085a6fbd +0xbc9:  mov    %eax,(%esp)
085a6fc0 +0xbcc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a6fc5 +0xbd1:  mov    $0x11,%ebx
085a6fca +0xbd6:  jmp    085a7398 <+0xfa4>
085a6fcf +0xbdb:  mov    -0x8c(%ebp),%eax
085a6fd5 +0xbe1:  mov    %eax,%ebx
085a6fd7 +0xbe3:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085a6fdc +0xbe8:  mov    %ebx,0xc(%esp)
085a6fe0 +0xbec:  mov    0xc(%ebp),%edx
085a6fe3 +0xbef:  mov    %edx,0x8(%esp)
085a6fe7 +0xbf3:  movl   $0x16,0x4(%esp)
085a6fef +0xbfb:  mov    %eax,(%esp)
085a6ff2 +0xbfe:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085a6ff7 +0xc03:  lea    -0xd5(%ebp),%eax
085a6ffd +0xc09:  mov    %eax,(%esp)
085a7000 +0xc0c:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085a7005 +0xc11:  xor    $0x1,%eax
085a7008 +0xc14:  test   %al,%al
085a700a +0xc16:  je     085a7094 <+0xca0>
085a7010 +0xc1c:  mov    -0x11a(%ebp),%eax
085a7016 +0xc22:  test   %eax,%eax
085a7018 +0xc24:  je     085a7039 <+0xc45>
085a701a +0xc26:  lea    -0x12c(%ebp),%eax
085a7020 +0xc2c:  add    $0x10,%eax
085a7023 +0xc2f:  mov    %eax,(%esp)
085a7026 +0xc32:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a702b +0xc37:  cmp    $0x7d0,%eax
085a7030 +0xc3c:  jle    085a7039 <+0xc45>
085a7032 +0xc3e:  mov    $0x1,%eax
085a7037 +0xc43:  jmp    085a703e <+0xc4a>
085a7039 +0xc45:  mov    $0x0,%eax
085a703e +0xc4a:  test   %al,%al
085a7040 +0xc4c:  je     085a7094 <+0xca0>
085a7042 +0xc4e:  mov    -0x115(%ebp),%esi
085a7048 +0xc54:  mov    -0x11a(%ebp),%ebx
085a704e +0xc5a:  movl   $0x4,0xc(%esp)
085a7056 +0xc62:  movl   $0x1b0c,0x8(%esp)
085a705e +0xc6a:  movl   $&_ZZN6CParty9drop_itemEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
085a7066 +0xc72:  lea    -0x38(%ebp),%eax
085a7069 +0xc75:  mov    %eax,(%esp)
085a706c +0xc78:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a7071 +0xc7d:  mov    %esi,0x10(%esp)
085a7075 +0xc81:  movl   $0x7d0,0xc(%esp)
085a707d +0xc89:  mov    %ebx,0x8(%esp)
085a7081 +0xc8d:  movl   $"drop item(%d) stack size over %d add_info(%d)",0x4(%esp)
085a7089 +0xc95:  lea    -0x38(%ebp),%eax
085a708c +0xc98:  mov    %eax,(%esp)
085a708f +0xc9b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a7094 +0xca0:  mov    0x8(%ebp),%eax
085a7097 +0xca3:  add    $0xb24,%eax
085a709c +0xca8:  mov    %eax,-0x18c(%ebp)
085a70a2 +0xcae:  lea    0x4(%esp),%edx
085a70a6 +0xcb2:  lea    -0x12c(%ebp),%ebx
085a70ac +0xcb8:  mov    $0x15,%eax
085a70b1 +0xcbd:  mov    %edx,%edi
085a70b3 +0xcbf:  mov    %ebx,%esi
085a70b5 +0xcc1:  mov    %eax,%ecx
085a70b7 +0xcc3:  rep movsl %ds:(%esi),%es:(%edi)
085a70b9 +0xcc5:  mov    -0x18c(%ebp),%eax
085a70bf +0xccb:  mov    %eax,(%esp)
085a70c2 +0xcce:  call   0830db84 <_ZN13CBattle_Field9drop_itemE8map_item>  ; CBattle_Field::drop_item(map_item)
085a70c7 +0xcd3:  mov    %eax,-0x28(%ebp)
085a70ca +0xcd6:  cmpl   $0xffffffff,-0x28(%ebp)
085a70ce +0xcda:  jne    085a70da <+0xce6>
085a70d0 +0xcdc:  mov    $0x16,%ebx
085a70d5 +0xce1:  jmp    085a7398 <+0xfa4>
085a70da +0xce6:  lea    -0x98(%ebp),%eax
085a70e0 +0xcec:  mov    %eax,(%esp)
085a70e3 +0xcef:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a70e8 +0xcf4:  movl   $0x28,0x8(%esp)
085a70f0 +0xcfc:  movl   $0x0,0x4(%esp)
085a70f8 +0xd04:  lea    -0x98(%ebp),%eax
085a70fe +0xd0a:  mov    %eax,(%esp)
085a7101 +0xd0d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a7106 +0xd12:  mov    0xc(%ebp),%eax
085a7109 +0xd15:  mov    %eax,(%esp)
085a710c +0xd18:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a7111 +0xd1d:  movzwl %ax,%eax
085a7114 +0xd20:  mov    %eax,0x4(%esp)
085a7118 +0xd24:  lea    -0x98(%ebp),%eax
085a711e +0xd2a:  mov    %eax,(%esp)
085a7121 +0xd2d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7126 +0xd32:  mov    0x10(%ebp),%eax
085a7129 +0xd35:  mov    %eax,0x4(%esp)
085a712d +0xd39:  lea    -0x98(%ebp),%eax
085a7133 +0xd3f:  mov    %eax,(%esp)
085a7136 +0xd42:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a713b +0xd47:  mov    0x14(%ebp),%eax
085a713e +0xd4a:  mov    %eax,0x4(%esp)
085a7142 +0xd4e:  lea    -0x98(%ebp),%eax
085a7148 +0xd54:  mov    %eax,(%esp)
085a714b +0xd57:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7150 +0xd5c:  mov    -0x28(%ebp),%eax
085a7153 +0xd5f:  mov    %eax,0x4(%esp)
085a7157 +0xd63:  lea    -0x98(%ebp),%eax
085a715d +0xd69:  mov    %eax,(%esp)
085a7160 +0xd6c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7165 +0xd71:  mov    -0x11a(%ebp),%eax
085a716b +0xd77:  mov    %eax,0x4(%esp)
085a716f +0xd7b:  lea    -0x98(%ebp),%eax
085a7175 +0xd81:  mov    %eax,(%esp)
085a7178 +0xd84:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a717d +0xd89:  lea    -0x12c(%ebp),%eax
085a7183 +0xd8f:  add    $0x10,%eax
085a7186 +0xd92:  mov    %eax,(%esp)
085a7189 +0xd95:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085a718e +0xd9a:  movzbl %al,%eax
085a7191 +0xd9d:  mov    %eax,0x4(%esp)
085a7195 +0xda1:  lea    -0x98(%ebp),%eax
085a719b +0xda7:  mov    %eax,(%esp)
085a719e +0xdaa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a71a3 +0xdaf:  lea    -0x12c(%ebp),%eax
085a71a9 +0xdb5:  add    $0x10,%eax
085a71ac +0xdb8:  mov    %eax,(%esp)
085a71af +0xdbb:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a71b4 +0xdc0:  mov    %eax,0x4(%esp)
085a71b8 +0xdc4:  lea    -0x98(%ebp),%eax
085a71be +0xdca:  mov    %eax,(%esp)
085a71c1 +0xdcd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a71c6 +0xdd2:  movzwl -0x111(%ebp),%eax
085a71cd +0xdd9:  movzwl %ax,%eax
085a71d0 +0xddc:  mov    %eax,0x4(%esp)
085a71d4 +0xde0:  lea    -0x98(%ebp),%eax
085a71da +0xde6:  mov    %eax,(%esp)
085a71dd +0xde9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a71e2 +0xdee:  mov    -0x10f(%ebp),%eax
085a71e8 +0xdf4:  mov    %eax,0x4(%esp)
085a71ec +0xdf8:  lea    -0x98(%ebp),%eax
085a71f2 +0xdfe:  mov    %eax,(%esp)
085a71f5 +0xe01:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a71fa +0xe06:  lea    -0x12c(%ebp),%eax
085a7200 +0xe0c:  add    $0x21,%eax
085a7203 +0xe0f:  mov    %eax,(%esp)
085a7206 +0xe12:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085a720b +0xe17:  movzbl %al,%eax
085a720e +0xe1a:  mov    %eax,0x4(%esp)
085a7212 +0xe1e:  lea    -0x98(%ebp),%eax
085a7218 +0xe24:  mov    %eax,(%esp)
085a721b +0xe27:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7220 +0xe2c:  lea    -0x12c(%ebp),%eax
085a7226 +0xe32:  add    $0x21,%eax
085a7229 +0xe35:  mov    %eax,(%esp)
085a722c +0xe38:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085a7231 +0xe3d:  movzwl %ax,%eax
085a7234 +0xe40:  mov    %eax,0x4(%esp)
085a7238 +0xe44:  lea    -0x98(%ebp),%eax
085a723e +0xe4a:  mov    %eax,(%esp)
085a7241 +0xe4d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7246 +0xe52:  lea    -0x12c(%ebp),%eax
085a724c +0xe58:  add    $0x10,%eax
085a724f +0xe5b:  mov    %eax,0x4(%esp)
085a7253 +0xe5f:  lea    -0x98(%ebp),%eax
085a7259 +0xe65:  mov    %eax,(%esp)
085a725c +0xe68:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085a7261 +0xe6d:  movzbl -0x12c(%ebp),%eax
085a7268 +0xe74:  test   %al,%al
085a726a +0xe76:  je     085a7273 <+0xe7f>
085a726c +0xe78:  mov    $0x0,%eax
085a7271 +0xe7d:  jmp    085a7278 <+0xe84>
085a7273 +0xe7f:  mov    $0x1,%eax
085a7278 +0xe84:  mov    %eax,0x4(%esp)
085a727c +0xe88:  lea    -0x98(%ebp),%eax
085a7282 +0xe8e:  mov    %eax,(%esp)
085a7285 +0xe91:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a728a +0xe96:  movl   $0x1,0x4(%esp)
085a7292 +0xe9e:  lea    -0x98(%ebp),%eax
085a7298 +0xea4:  mov    %eax,(%esp)
085a729b +0xea7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a72a0 +0xeac:  lea    -0x98(%ebp),%eax
085a72a6 +0xeb2:  mov    %eax,0x4(%esp)
085a72aa +0xeb6:  mov    0x8(%ebp),%eax
085a72ad +0xeb9:  mov    %eax,(%esp)
085a72b0 +0xebc:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a72b5 +0xec1:  lea    -0x98(%ebp),%eax
085a72bb +0xec7:  mov    %eax,(%esp)
085a72be +0xeca:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085a72c3 +0xecf:  movl   $0x32,0x8(%esp)
085a72cb +0xed7:  movl   $0x1,0x4(%esp)
085a72d3 +0xedf:  lea    -0x98(%ebp),%eax
085a72d9 +0xee5:  mov    %eax,(%esp)
085a72dc +0xee8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a72e1 +0xeed:  movl   $0x1,0x4(%esp)
085a72e9 +0xef5:  lea    -0x98(%ebp),%eax
085a72ef +0xefb:  mov    %eax,(%esp)
085a72f2 +0xefe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a72f7 +0xf03:  movsbl -0x13c(%ebp),%eax
085a72fe +0xf0a:  mov    %eax,0x4(%esp)
085a7302 +0xf0e:  lea    -0x98(%ebp),%eax
085a7308 +0xf14:  mov    %eax,(%esp)
085a730b +0xf17:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7310 +0xf1c:  mov    0x1c(%ebp),%eax
085a7313 +0xf1f:  mov    %eax,0x4(%esp)
085a7317 +0xf23:  lea    -0x98(%ebp),%eax
085a731d +0xf29:  mov    %eax,(%esp)
085a7320 +0xf2c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a7325 +0xf31:  mov    0x20(%ebp),%eax
085a7328 +0xf34:  mov    %eax,0x4(%esp)
085a732c +0xf38:  lea    -0x98(%ebp),%eax
085a7332 +0xf3e:  mov    %eax,(%esp)
085a7335 +0xf41:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a733a +0xf46:  movl   $0x1,0x4(%esp)
085a7342 +0xf4e:  lea    -0x98(%ebp),%eax
085a7348 +0xf54:  mov    %eax,(%esp)
085a734b +0xf57:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a7350 +0xf5c:  lea    -0x98(%ebp),%eax
085a7356 +0xf62:  mov    %eax,0x4(%esp)
085a735a +0xf66:  mov    0xc(%ebp),%eax
085a735d +0xf69:  mov    %eax,(%esp)
085a7360 +0xf6c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a7365 +0xf71:  mov    $0x0,%ebx
085a736a +0xf76:  lea    -0x98(%ebp),%eax
085a7370 +0xf7c:  mov    %eax,(%esp)
085a7373 +0xf7f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a7378 +0xf84:  jmp    085a7398 <+0xfa4>
085a737a +0xf86:  mov    %edx,%ebx
085a737c +0xf88:  mov    %eax,%esi
085a737e +0xf8a:  lea    -0x98(%ebp),%eax
085a7384 +0xf90:  mov    %eax,(%esp)
085a7387 +0xf93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a738c +0xf98:  mov    %esi,%eax
085a738e +0xf9a:  mov    %ebx,%edx
085a7390 +0xf9c:  mov    %eax,(%esp)
085a7393 +0xf9f:  call   08ae3750 <_Unwind_Resume>
085a7398 +0xfa4:  mov    %ebx,%eax
085a739a +0xfa6:  lea    -0xc(%ebp),%esp
085a739d +0xfa9:  add    $0x0,%esp
085a73a0 +0xfac:  pop    %ebx
085a73a1 +0xfad:  pop    %esi
085a73a2 +0xfae:  pop    %edi
085a73a3 +0xfaf:  pop    %ebp
085a73a4 +0xfb0:  ret
085a73a5 +0xfb1:  nop
```

## 反编译 C

```c
// CParty::drop_item @ 0x85a63f4

/* CParty::drop_item(CUser*, int, int, char, int, int) */

undefined4 __thiscall
CParty::drop_item(CParty *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  CDataManager *this_00;
  int iVar5;
  Store *this_01;
  ServiceRestrictManager *pSVar6;
  CInventory *pCVar7;
  CValueStatistic *pCVar8;
  CCargo *pCVar9;
  undefined4 uVar10;
  map_item *pmVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined1 local_18c [12];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  char local_140;
  map_item local_130 [16];
  Inven_Item local_120;
  char local_11f;
  int local_11e;
  ushort local_115;
  int local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined2 local_103;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined2 local_ef;
  UpgradeSeparateInfo aUStack_ed [20];
  Inven_Item local_d9;
  char cStack_d8;
  undefined2 uStack_d7;
  undefined2 uStack_d5;
  undefined1 uStack_d3;
  int iStack_d2;
  undefined1 local_ce;
  undefined4 uStack_cd;
  undefined4 uStack_c9;
  undefined4 uStack_c5;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  undefined2 local_bc;
  undefined1 uStack_ba;
  undefined4 local_b9;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  undefined2 local_a8;
  UpgradeSeparateInfo UStack_a6;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined1 local_9d;
  PacketGuard local_9c [12];
  int local_90;
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  CItem *local_28;
  undefined4 local_24;
  CItem *local_20;
  
  bVar13 = 0;
  local_140 = param_4;
  if (param_6 < 0) {
    CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar4 = CUser::get_acc_id(param_1);
    NumberToString(uVar4,0);
    LogManager::logFormat
              (1,"party.cpp","int CParty::drop_item(CUser*, int, int, char, int, int)",0x1a0c,
               "user - accid[%s] %s : count<0");
    uVar10 = 0x11;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      map_item::map_item(local_130);
      Inven_Item::Inven_Item(&local_d9);
      if (local_140 == '\x02') {
        CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
        CCargo::get_cargo_slot((int)local_18c);
        local_d9 = SUB41(local_18c._0_4_,0);
        cStack_d8 = SUB41(local_18c._0_4_,1);
        uStack_d7 = SUB42(local_18c._0_4_,2);
        uStack_d5 = (undefined2)local_18c._4_4_;
        uStack_d3 = SUB41(local_18c._4_4_,2);
        iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
        iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
        local_ce = SUB41(local_18c._8_4_,3);
        uStack_cd = local_180;
        uStack_c9 = local_17c;
        uStack_c5 = local_178;
        uStack_c1 = local_174;
        uStack_bd = (undefined1)local_170;
        local_bc = (undefined2)((uint)local_170 >> 8);
        uStack_ba = (undefined1)((uint)local_170 >> 0x18);
        local_b9 = local_16c;
        uStack_b5 = local_168;
        uStack_b1 = local_164;
        uStack_ad = local_160;
        uStack_a9 = (undefined1)local_15c;
        local_a8 = (undefined2)((uint)local_15c >> 8);
        UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
        local_a5 = local_158;
        local_a1 = local_154;
        local_9d = local_150;
      }
      else if (local_140 < '\x03') {
        if (local_140 == '\0') {
          if (param_5 == 0) {
            local_130[0] = (map_item)0x0;
            local_11f = '\x02';
            local_11e = 0;
            Inven_Item::set_add_info(&local_120,param_6);
            local_115 = 0;
            Inven_Item::ResetItemAttr(&local_120);
          }
          else {
            iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)local_18c,iVar5);
            local_d9 = SUB41(local_18c._0_4_,0);
            cStack_d8 = SUB41(local_18c._0_4_,1);
            uStack_d7 = SUB42(local_18c._0_4_,2);
            uStack_d5 = (undefined2)local_18c._4_4_;
            uStack_d3 = SUB41(local_18c._4_4_,2);
            iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
            iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
            local_ce = SUB41(local_18c._8_4_,3);
            uStack_cd = local_180;
            uStack_c9 = local_17c;
            uStack_c5 = local_178;
            uStack_c1 = local_174;
            uStack_bd = (undefined1)local_170;
            local_bc = (undefined2)((uint)local_170 >> 8);
            uStack_ba = (undefined1)((uint)local_170 >> 0x18);
            local_b9 = local_16c;
            uStack_b5 = local_168;
            uStack_b1 = local_164;
            uStack_ad = local_160;
            uStack_a9 = (undefined1)local_15c;
            local_a8 = (undefined2)((uint)local_15c >> 8);
            UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
            local_a5 = local_158;
            local_a1 = local_154;
            local_9d = local_150;
          }
        }
      }
      else if (local_140 == '\x03') {
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_18c,iVar5);
        local_d9 = SUB41(local_18c._0_4_,0);
        cStack_d8 = SUB41(local_18c._0_4_,1);
        uStack_d7 = SUB42(local_18c._0_4_,2);
        uStack_d5 = (undefined2)local_18c._4_4_;
        uStack_d3 = SUB41(local_18c._4_4_,2);
        iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
        iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
        local_ce = SUB41(local_18c._8_4_,3);
        uStack_cd = local_180;
        uStack_c9 = local_17c;
        uStack_c5 = local_178;
        uStack_c1 = local_174;
        uStack_bd = (undefined1)local_170;
        local_bc = (undefined2)((uint)local_170 >> 8);
        uStack_ba = (undefined1)((uint)local_170 >> 0x18);
        local_b9 = local_16c;
        uStack_b5 = local_168;
        uStack_b1 = local_164;
        uStack_ad = local_160;
        uStack_a9 = (undefined1)local_15c;
        local_a8 = (undefined2)((uint)local_15c >> 8);
        UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
        local_a5 = local_158;
        local_a1 = local_154;
        local_9d = local_150;
      }
      else if (local_140 == '\a') {
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_18c,iVar5);
        local_d9 = SUB41(local_18c._0_4_,0);
        cStack_d8 = SUB41(local_18c._0_4_,1);
        uStack_d7 = SUB42(local_18c._0_4_,2);
        uStack_d5 = (undefined2)local_18c._4_4_;
        uStack_d3 = SUB41(local_18c._4_4_,2);
        iStack_d2._1_3_ = (undefined3)local_18c._8_4_;
        iStack_d2 = CONCAT31(iStack_d2._1_3_,SUB41(local_18c._4_4_,3));
        local_ce = SUB41(local_18c._8_4_,3);
        uStack_cd = local_180;
        uStack_c9 = local_17c;
        uStack_c5 = local_178;
        uStack_c1 = local_174;
        uStack_bd = (undefined1)local_170;
        local_bc = (undefined2)((uint)local_170 >> 8);
        uStack_ba = (undefined1)((uint)local_170 >> 0x18);
        local_b9 = local_16c;
        uStack_b5 = local_168;
        uStack_b1 = local_164;
        uStack_ad = local_160;
        uStack_a9 = (undefined1)local_15c;
        local_a8 = (undefined2)((uint)local_15c >> 8);
        UStack_a6 = SUB41((uint)local_15c >> 0x18,0);
        local_a5 = local_158;
        local_a1 = local_154;
        local_9d = local_150;
        if (cStack_d8 == '\x05') {
          return 0x17;
        }
      }
      local_90 = 0;
      if (CONCAT22(uStack_d5,uStack_d7) != 0) {
        iVar5 = CONCAT22(uStack_d5,uStack_d7);
        this_00 = (CDataManager *)G_CDataManager();
        local_28 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_28 == (CItem *)0x0) {
          LogManager::logFormat
                    (1,"party.cpp","int CParty::drop_item(CUser*, int, int, char, int, int)",0x1a48,
                     "[CParty::drop_item] Null Item");
          return 0xffffffff;
        }
        local_24 = CItem::GetAttachType(local_28);
        switch(local_24) {
        case 1:
        case 2:
        case 5:
          return 0x17;
        case 3:
          if (local_d9 != (Inven_Item)0x1) {
            return 0x17;
          }
        }
        cVar2 = UpgradeSeparateInfo::IsTradeRestriction(&UStack_a6);
        if (cVar2 != '\0') {
          return 0x17;
        }
        iVar5 = CItem::get_rarity(local_28);
        if (2 < iVar5) {
          return 0xd;
        }
        cVar2 = Inven_Item::isEquipableItemType(&local_d9);
        if ((cVar2 != '\0') &&
           ((local_20 = local_28, *(int *)(local_28 + 0x234) == 0xb ||
            (*(int *)(local_28 + 0x234) < 10)))) {
          return 0x17;
        }
        local_130[0] = (map_item)0x0;
        local_11f = cStack_d8;
        local_11e = CONCAT22(uStack_d5,uStack_d7);
        cVar2 = Inven_Item::isEquipableItemType(&local_d9);
        if (cVar2 == '\x01') {
          Inven_Item::set_add_info(&local_120,iStack_d2);
        }
        else {
          Inven_Item::set_add_info(&local_120,param_6);
        }
        uVar3 = Inven_Item::GetItemAttr(&local_d9);
        Inven_Item::SetItemAttr(&local_120,uVar3);
        local_115 = CONCAT11((undefined1)uStack_cd,local_ce);
        local_120 = local_d9;
        local_113 = CONCAT13((undefined1)uStack_c9,uStack_cd._1_3_);
        local_10b = CONCAT13((undefined1)uStack_c1,uStack_c5._1_3_);
        local_107 = CONCAT13(uStack_bd,uStack_c1._1_3_);
        local_103 = local_bc;
        local_10f = CONCAT13((undefined1)uStack_c5,uStack_c9._1_3_);
        local_fb = CONCAT13((undefined1)uStack_b1,uStack_b5._1_3_);
        local_f7 = CONCAT13((undefined1)uStack_ad,uStack_b1._1_3_);
        local_f3 = CONCAT13(uStack_a9,uStack_ad._1_3_);
        local_ef = local_a8;
        uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&UStack_a6);
        UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_ed,uVar3);
        this_01 = (Store *)G_Store();
        Store::GetSellItemPrice(this_01,&local_d9,local_28,(short)param_6,false,&local_90);
      }
      if (local_140 == '\x02') {
        pCVar9 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
        cVar2 = CCargo::delete_item(pCVar9);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_6c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                             0x1ac6,5);
          cMyTrace::operator()
                    (local_6c,"CParty::drop_item , delete_item failed 2, User ch =%d , %d %d");
          return 0x11;
        }
        pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar8);
      }
      else if (local_140 < '\x03') {
        if (local_140 == '\0') {
          if (param_5 == 0) {
            pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
            cVar2 = ServiceRestrictManager::isRestricted(pSVar6);
            if (cVar2 != '\0') {
              return 0xd1;
            }
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::use_money(pCVar7);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_8c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                                 0x1aa6,5);
              cMyTrace::operator()
                        (local_8c,"CParty::drop_item , use_money failed, User ch =%d , %d %d");
              return 0x11;
            }
            pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar8);
          }
          else {
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar7);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_7c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                                 0x1ab5,5);
              cMyTrace::operator()
                        (local_7c,"CParty::drop_item , delete_item failed, User ch =%d , %d %d");
              return 0x11;
            }
            pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar8);
          }
        }
      }
      else if (local_140 == '\x03') {
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar7);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_5c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                             0x1ae8,5);
          cMyTrace::operator()
                    (local_5c,"CParty::drop_item , delete_item failed 3, User ch =%d , %d");
          return 0x11;
        }
        pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar8);
      }
      else if (local_140 == '\a') {
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar7);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_4c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                             0x1af9,5);
          cMyTrace::operator()
                    (local_4c,"CParty::drop_item , delete_item failed 4, User ch =%d , %d");
          return 0x11;
        }
        pCVar8 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar8);
      }
      cVar2 = Inven_Item::isEquipableItemType(&local_d9);
      if (cVar2 != '\x01') {
        if ((local_11e == 0) || (iVar5 = Inven_Item::get_add_info(&local_120), iVar5 < 0x7d1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          cMyTrace::cMyTrace(local_3c,"int CParty::drop_item(CUser*, int, int, char, int, int)",
                             0x1b0c,4);
          cMyTrace::operator()(local_3c,"drop item(%d) stack size over %d add_info(%d)");
        }
      }
      pmVar11 = local_130;
      puVar12 = (undefined4 *)&stack0xfffffe08;
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *(undefined4 *)pmVar11;
        pmVar11 = pmVar11 + ((uint)bVar13 * -2 + 1) * 4;
        puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
      }
      local_2c = CBattle_Field::drop_item(this + 0xb24);
      if (local_2c == -1) {
        uVar10 = 0x16;
      }
      else {
        PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 085a7101 to 085a7364 has its CatchHandler @ 085a737a */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,0,0x28);
        uVar4 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar4 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_11e);
        uVar4 = Inven_Item::GetItemAttr(&local_120);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar4 & 0xff);
        iVar5 = Inven_Item::get_add_info(&local_120);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,iVar5);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,(uint)local_115);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_113);
        uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar4 & 0xff);
        uVar4 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar4 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_9c,&local_120);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_9c,(uint)(local_130[0] == (map_item)0x0));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        send_to_party(this,local_9c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_9c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,(int)local_140);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_5);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        CUser::Send(param_1,local_9c);
        uVar10 = 0;
        PacketGuard::~PacketGuard(local_9c);
      }
    }
    else {
      uVar10 = 0x13;
    }
  }
  return uVar10;
}
```
