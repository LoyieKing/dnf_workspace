# RandomPickupItem

`_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item`

`WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, map_item const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814e684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814e684  _ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item
#           WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, map_item const&)
# range [0x0814e684, 0x0814eceb]
0814e684 +0x000:  push   %ebp
0814e685 +0x001:  mov    %esp,%ebp
0814e687 +0x003:  push   %esi
0814e688 +0x004:  push   %ebx
0814e689 +0x005:  sub    $0xd0,%esp
0814e68f +0x00b:  movl   $0x0,-0x44(%ebp)
0814e696 +0x012:  movb   $0x0,-0x29(%ebp)
0814e69a +0x016:  movl   $0x0,-0x28(%ebp)
0814e6a1 +0x01d:  movl   $0x0,-0x24(%ebp)
0814e6a8 +0x024:  jmp    0814e7ff <+0x17b>
0814e6ad +0x029:  movl   $0x0,-0x20(%ebp)
0814e6b4 +0x030:  mov    0x8(%ebp),%eax
0814e6b7 +0x033:  mov    0x4(%eax),%eax
0814e6ba +0x036:  mov    -0x24(%ebp),%edx
0814e6bd +0x039:  mov    %edx,0x4(%esp)
0814e6c1 +0x03d:  mov    %eax,(%esp)
0814e6c4 +0x040:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0814e6c9 +0x045:  mov    %eax,-0x20(%ebp)
0814e6cc +0x048:  cmpl   $0x0,-0x20(%ebp)
0814e6d0 +0x04c:  je     0814e6ee <+0x6a>
0814e6d2 +0x04e:  mov    0x8(%ebp),%eax
0814e6d5 +0x051:  mov    0x4(%eax),%eax
0814e6d8 +0x054:  mov    -0x24(%ebp),%edx
0814e6db +0x057:  mov    %edx,0x4(%esp)
0814e6df +0x05b:  mov    %eax,(%esp)
0814e6e2 +0x05e:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0814e6e7 +0x063:  xor    $0x1,%eax
0814e6ea +0x066:  test   %al,%al
0814e6ec +0x068:  je     0814e6f5 <+0x71>
0814e6ee +0x06a:  mov    $0x1,%eax
0814e6f3 +0x06f:  jmp    0814e6fa <+0x76>
0814e6f5 +0x071:  mov    $0x0,%eax
0814e6fa +0x076:  test   %al,%al
0814e6fc +0x078:  jne    0814e7fa <+0x176>
0814e702 +0x07e:  mov    -0x20(%ebp),%eax
0814e705 +0x081:  mov    %eax,(%esp)
0814e708 +0x084:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0814e70d +0x089:  mov    %eax,%edx
0814e70f +0x08b:  mov    0x14(%ebp),%eax
0814e712 +0x08e:  mov    0x10(%eax),%ecx
0814e715 +0x091:  mov    %ecx,0x4(%esp)
0814e719 +0x095:  mov    0x14(%eax),%ecx
0814e71c +0x098:  mov    %ecx,0x8(%esp)
0814e720 +0x09c:  mov    0x18(%eax),%ecx
0814e723 +0x09f:  mov    %ecx,0xc(%esp)
0814e727 +0x0a3:  mov    0x1c(%eax),%ecx
0814e72a +0x0a6:  mov    %ecx,0x10(%esp)
0814e72e +0x0aa:  mov    0x20(%eax),%ecx
0814e731 +0x0ad:  mov    %ecx,0x14(%esp)
0814e735 +0x0b1:  mov    0x24(%eax),%ecx
0814e738 +0x0b4:  mov    %ecx,0x18(%esp)
0814e73c +0x0b8:  mov    0x28(%eax),%ecx
0814e73f +0x0bb:  mov    %ecx,0x1c(%esp)
0814e743 +0x0bf:  mov    0x2c(%eax),%ecx
0814e746 +0x0c2:  mov    %ecx,0x20(%esp)
0814e74a +0x0c6:  mov    0x30(%eax),%ecx
0814e74d +0x0c9:  mov    %ecx,0x24(%esp)
0814e751 +0x0cd:  mov    0x34(%eax),%ecx
0814e754 +0x0d0:  mov    %ecx,0x28(%esp)
0814e758 +0x0d4:  mov    0x38(%eax),%ecx
0814e75b +0x0d7:  mov    %ecx,0x2c(%esp)
0814e75f +0x0db:  mov    0x3c(%eax),%ecx
0814e762 +0x0de:  mov    %ecx,0x30(%esp)
0814e766 +0x0e2:  mov    0x40(%eax),%ecx
0814e769 +0x0e5:  mov    %ecx,0x34(%esp)
0814e76d +0x0e9:  mov    0x44(%eax),%ecx
0814e770 +0x0ec:  mov    %ecx,0x38(%esp)
0814e774 +0x0f0:  mov    0x48(%eax),%ecx
0814e777 +0x0f3:  mov    %ecx,0x3c(%esp)
0814e77b +0x0f7:  movzbl 0x4c(%eax),%eax
0814e77f +0x0fb:  mov    %al,0x40(%esp)
0814e783 +0x0ff:  mov    %edx,(%esp)
0814e786 +0x102:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
0814e78b +0x107:  mov    %eax,-0x1c(%ebp)
0814e78e +0x10a:  cmpl   $0xffffffff,-0x1c(%ebp)
0814e792 +0x10e:  je     0814e7b1 <+0x12d>
0814e794 +0x110:  mov    0x8(%ebp),%eax
0814e797 +0x113:  mov    -0x24(%ebp),%edx
0814e79a +0x116:  mov    %edx,0x4(%esp)
0814e79e +0x11a:  mov    %eax,(%esp)
0814e7a1 +0x11d:  call   08145682 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x105>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x105
0814e7a6 +0x122:  test   %al,%al
0814e7a8 +0x124:  je     0814e7b1 <+0x12d>
0814e7aa +0x126:  mov    $0x1,%eax
0814e7af +0x12b:  jmp    0814e7b6 <+0x132>
0814e7b1 +0x12d:  mov    $0x0,%eax
0814e7b6 +0x132:  test   %al,%al
0814e7b8 +0x134:  je     0814e7f0 <+0x16c>
0814e7ba +0x136:  mov    -0x24(%ebp),%ebx
0814e7bd +0x139:  movl   $0x64,(%esp)
0814e7c4 +0x140:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814e7c9 +0x145:  add    $0x1,%eax
0814e7cc +0x148:  mov    %al,-0x44(%ebp,%ebx,1)
0814e7d0 +0x14c:  mov    -0x24(%ebp),%eax
0814e7d3 +0x14f:  movzbl -0x44(%ebp,%eax,1),%eax
0814e7d8 +0x154:  cmp    -0x29(%ebp),%al
0814e7db +0x157:  jle    0814e7fb <+0x177>
0814e7dd +0x159:  mov    -0x24(%ebp),%eax
0814e7e0 +0x15c:  movzbl -0x44(%ebp,%eax,1),%eax
0814e7e5 +0x161:  mov    %al,-0x29(%ebp)
0814e7e8 +0x164:  mov    -0x20(%ebp),%eax
0814e7eb +0x167:  mov    %eax,-0x28(%ebp)
0814e7ee +0x16a:  jmp    0814e7fb <+0x177>
0814e7f0 +0x16c:  mov    -0x24(%ebp),%eax
0814e7f3 +0x16f:  movb   $0x0,-0x44(%ebp,%eax,1)
0814e7f8 +0x174:  jmp    0814e7fb <+0x177>
0814e7fa +0x176:  nop
0814e7fb +0x177:  addl   $0x1,-0x24(%ebp)
0814e7ff +0x17b:  cmpl   $0x3,-0x24(%ebp)
0814e803 +0x17f:  setle  %al
0814e806 +0x182:  test   %al,%al
0814e808 +0x184:  jne    0814e6ad <+0x29>
0814e80e +0x18a:  cmpl   $0x0,-0x28(%ebp)
0814e812 +0x18e:  je     0814ec36 <+0x5b2>
0814e818 +0x194:  mov    0x14(%ebp),%eax
0814e81b +0x197:  mov    0x12(%eax),%eax
0814e81e +0x19a:  mov    %eax,%ebx
0814e820 +0x19c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814e825 +0x1a1:  mov    %ebx,0x4(%esp)
0814e829 +0x1a5:  mov    %eax,(%esp)
0814e82c +0x1a8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814e831 +0x1ad:  mov    %eax,-0x18(%ebp)
0814e834 +0x1b0:  cmpl   $0x0,-0x18(%ebp)
0814e838 +0x1b4:  jne    0814e884 <+0x200>
0814e83a +0x1b6:  mov    0x14(%ebp),%eax
0814e83d +0x1b9:  mov    0x12(%eax),%ebx
0814e840 +0x1bc:  movl   $0x5,0xc(%esp)
0814e848 +0x1c4:  movl   $0x39c,0x8(%esp)
0814e850 +0x1cc:  movl   $&_ZZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_itemE19__PRETTY_FUNCTION__,0x4(%esp)
0814e858 +0x1d4:  lea    -0x40(%ebp),%eax
0814e85b +0x1d7:  mov    %eax,(%esp)
0814e85e +0x1da:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0814e863 +0x1df:  mov    %ebx,0x8(%esp)
0814e867 +0x1e3:  movl   $"item not find : %d",0x4(%esp)
0814e86f +0x1eb:  lea    -0x40(%ebp),%eax
0814e872 +0x1ee:  mov    %eax,(%esp)
0814e875 +0x1f1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814e87a +0x1f6:  mov    $0x0,%ebx
0814e87f +0x1fb:  jmp    0814ecdf <+0x65b>
0814e884 +0x200:  movl   $0x0,-0x14(%ebp)
0814e88b +0x207:  mov    -0x18(%ebp),%eax
0814e88e +0x20a:  mov    %eax,(%esp)
0814e891 +0x20d:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0814e896 +0x212:  test   %al,%al
0814e898 +0x214:  je     0814e8bf <+0x23b>
0814e89a +0x216:  mov    -0x18(%ebp),%eax
0814e89d +0x219:  mov    (%eax),%eax
0814e89f +0x21b:  add    $0xc,%eax
0814e8a2 +0x21e:  mov    (%eax),%edx
0814e8a4 +0x220:  mov    -0x18(%ebp),%eax
0814e8a7 +0x223:  mov    %eax,(%esp)
0814e8aa +0x226:  call   *%edx
0814e8ac +0x228:  cmp    $0x9,%eax
0814e8af +0x22b:  sete   %al
0814e8b2 +0x22e:  test   %al,%al
0814e8b4 +0x230:  je     0814e8fb <+0x277>
0814e8b6 +0x232:  movl   $0x7,-0x14(%ebp)
0814e8bd +0x239:  jmp    0814e8fb <+0x277>
0814e8bf +0x23b:  mov    -0x18(%ebp),%eax
0814e8c2 +0x23e:  mov    (%eax),%eax
0814e8c4 +0x240:  add    $0x14,%eax
0814e8c7 +0x243:  mov    (%eax),%edx
0814e8c9 +0x245:  mov    -0x18(%ebp),%eax
0814e8cc +0x248:  mov    %eax,(%esp)
0814e8cf +0x24b:  call   *%edx
0814e8d1 +0x24d:  test   %al,%al
0814e8d3 +0x24f:  je     0814e8de <+0x25a>
0814e8d5 +0x251:  movl   $0x7,-0x14(%ebp)
0814e8dc +0x258:  jmp    0814e8fb <+0x277>
0814e8de +0x25a:  mov    -0x18(%ebp),%eax
0814e8e1 +0x25d:  mov    (%eax),%eax
0814e8e3 +0x25f:  add    $0x10,%eax
0814e8e6 +0x262:  mov    (%eax),%edx
0814e8e8 +0x264:  mov    -0x18(%ebp),%eax
0814e8eb +0x267:  mov    %eax,(%esp)
0814e8ee +0x26a:  call   *%edx
0814e8f0 +0x26c:  test   %al,%al
0814e8f2 +0x26e:  je     0814e8fb <+0x277>
0814e8f4 +0x270:  movl   $0x1,-0x14(%ebp)
0814e8fb +0x277:  movl   $0xffffffff,-0x10(%ebp)
0814e902 +0x27e:  mov    0x14(%ebp),%eax
0814e905 +0x281:  add    $0x10,%eax
0814e908 +0x284:  mov    %eax,(%esp)
0814e90b +0x287:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0814e910 +0x28c:  test   %al,%al
0814e912 +0x28e:  je     0814e993 <+0x30f>
0814e914 +0x290:  movl   $0x18,0x8(%esp)
0814e91c +0x298:  movl   $0x0,0x4(%esp)
0814e924 +0x2a0:  lea    -0x5c(%ebp),%eax
0814e927 +0x2a3:  mov    %eax,(%esp)
0814e92a +0x2a6:  call   0807dcc0 <_init+0x5b8>
0814e92f +0x2ab:  mov    -0x28(%ebp),%eax
0814e932 +0x2ae:  mov    %eax,(%esp)
0814e935 +0x2b1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0814e93a +0x2b6:  lea    -0x5c(%ebp),%edx
0814e93d +0x2b9:  mov    %edx,0x8(%esp)
0814e941 +0x2bd:  mov    %eax,0x4(%esp)
0814e945 +0x2c1:  movl   $0x5,(%esp)
0814e94c +0x2c8:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0814e951 +0x2cd:  mov    0x14(%ebp),%eax
0814e954 +0x2d0:  movzwl 0x1b(%eax),%eax
0814e958 +0x2d4:  movsbl %al,%edx
0814e95b +0x2d7:  mov    0x14(%ebp),%eax
0814e95e +0x2da:  mov    0x12(%eax),%eax
0814e961 +0x2dd:  movl   $0x10,0x14(%esp)
0814e969 +0x2e5:  lea    -0x5c(%ebp),%ecx
0814e96c +0x2e8:  mov    %ecx,0x10(%esp)
0814e970 +0x2ec:  mov    %edx,0xc(%esp)
0814e974 +0x2f0:  movl   $0x0,0x8(%esp)
0814e97c +0x2f8:  mov    %eax,0x4(%esp)
0814e980 +0x2fc:  mov    -0x28(%ebp),%eax
0814e983 +0x2ff:  mov    %eax,(%esp)
0814e986 +0x302:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
0814e98b +0x307:  mov    %eax,-0x10(%ebp)
0814e98e +0x30a:  jmp    0814ea37 <+0x3b3>
0814e993 +0x30f:  mov    -0x28(%ebp),%eax
0814e996 +0x312:  mov    %eax,(%esp)
0814e999 +0x315:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814e99e +0x31a:  mov    %eax,%edx
0814e9a0 +0x31c:  movl   $0x1,0x4c(%esp)
0814e9a8 +0x324:  movl   $0x1,0x48(%esp)
0814e9b0 +0x32c:  movl   $0x4,0x44(%esp)
0814e9b8 +0x334:  mov    0x14(%ebp),%eax
0814e9bb +0x337:  mov    0x10(%eax),%ecx
0814e9be +0x33a:  mov    %ecx,0x4(%esp)
0814e9c2 +0x33e:  mov    0x14(%eax),%ecx
0814e9c5 +0x341:  mov    %ecx,0x8(%esp)
0814e9c9 +0x345:  mov    0x18(%eax),%ecx
0814e9cc +0x348:  mov    %ecx,0xc(%esp)
0814e9d0 +0x34c:  mov    0x1c(%eax),%ecx
0814e9d3 +0x34f:  mov    %ecx,0x10(%esp)
0814e9d7 +0x353:  mov    0x20(%eax),%ecx
0814e9da +0x356:  mov    %ecx,0x14(%esp)
0814e9de +0x35a:  mov    0x24(%eax),%ecx
0814e9e1 +0x35d:  mov    %ecx,0x18(%esp)
0814e9e5 +0x361:  mov    0x28(%eax),%ecx
0814e9e8 +0x364:  mov    %ecx,0x1c(%esp)
0814e9ec +0x368:  mov    0x2c(%eax),%ecx
0814e9ef +0x36b:  mov    %ecx,0x20(%esp)
0814e9f3 +0x36f:  mov    0x30(%eax),%ecx
0814e9f6 +0x372:  mov    %ecx,0x24(%esp)
0814e9fa +0x376:  mov    0x34(%eax),%ecx
0814e9fd +0x379:  mov    %ecx,0x28(%esp)
0814ea01 +0x37d:  mov    0x38(%eax),%ecx
0814ea04 +0x380:  mov    %ecx,0x2c(%esp)
0814ea08 +0x384:  mov    0x3c(%eax),%ecx
0814ea0b +0x387:  mov    %ecx,0x30(%esp)
0814ea0f +0x38b:  mov    0x40(%eax),%ecx
0814ea12 +0x38e:  mov    %ecx,0x34(%esp)
0814ea16 +0x392:  mov    0x44(%eax),%ecx
0814ea19 +0x395:  mov    %ecx,0x38(%esp)
0814ea1d +0x399:  mov    0x48(%eax),%ecx
0814ea20 +0x39c:  mov    %ecx,0x3c(%esp)
0814ea24 +0x3a0:  movzbl 0x4c(%eax),%eax
0814ea28 +0x3a4:  mov    %al,0x40(%esp)
0814ea2c +0x3a8:  mov    %edx,(%esp)
0814ea2f +0x3ab:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0814ea34 +0x3b0:  mov    %eax,-0x10(%ebp)
0814ea37 +0x3b3:  cmpl   $0xffffffff,-0x10(%ebp)
0814ea3b +0x3b7:  jne    0814eaed <+0x469>
0814ea41 +0x3bd:  lea    -0x68(%ebp),%eax
0814ea44 +0x3c0:  mov    %eax,(%esp)
0814ea47 +0x3c3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814ea4c +0x3c8:  lea    -0x68(%ebp),%eax
0814ea4f +0x3cb:  mov    %eax,(%esp)
0814ea52 +0x3ce:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814ea57 +0x3d3:  movl   $0x2e,0x8(%esp)
0814ea5f +0x3db:  movl   $0x1,0x4(%esp)
0814ea67 +0x3e3:  lea    -0x68(%ebp),%eax
0814ea6a +0x3e6:  mov    %eax,(%esp)
0814ea6d +0x3e9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814ea72 +0x3ee:  movl   $0x0,0x4(%esp)
0814ea7a +0x3f6:  lea    -0x68(%ebp),%eax
0814ea7d +0x3f9:  mov    %eax,(%esp)
0814ea80 +0x3fc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ea85 +0x401:  movl   $0x4,0x4(%esp)
0814ea8d +0x409:  lea    -0x68(%ebp),%eax
0814ea90 +0x40c:  mov    %eax,(%esp)
0814ea93 +0x40f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ea98 +0x414:  movl   $0x1,0x4(%esp)
0814eaa0 +0x41c:  lea    -0x68(%ebp),%eax
0814eaa3 +0x41f:  mov    %eax,(%esp)
0814eaa6 +0x422:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814eaab +0x427:  lea    -0x68(%ebp),%eax
0814eaae +0x42a:  mov    %eax,0x4(%esp)
0814eab2 +0x42e:  mov    -0x28(%ebp),%eax
0814eab5 +0x431:  mov    %eax,(%esp)
0814eab8 +0x434:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814eabd +0x439:  mov    $0x0,%ebx
0814eac2 +0x43e:  lea    -0x68(%ebp),%eax
0814eac5 +0x441:  mov    %eax,(%esp)
0814eac8 +0x444:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814eacd +0x449:  jmp    0814ecdf <+0x65b>
0814ead2 +0x44e:  mov    %edx,%ebx
0814ead4 +0x450:  mov    %eax,%esi
0814ead6 +0x452:  lea    -0x68(%ebp),%eax
0814ead9 +0x455:  mov    %eax,(%esp)
0814eadc +0x458:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814eae1 +0x45d:  mov    %esi,%eax
0814eae3 +0x45f:  mov    %ebx,%edx
0814eae5 +0x461:  mov    %eax,(%esp)
0814eae8 +0x464:  call   08ae3750 <_Unwind_Resume>
0814eaed +0x469:  mov    0x10(%ebp),%eax
0814eaf0 +0x46c:  mov    %eax,-0x30(%ebp)
0814eaf3 +0x46f:  mov    0x8(%ebp),%eax
0814eaf6 +0x472:  lea    0xa18(%eax),%edx
0814eafc +0x478:  lea    -0x30(%ebp),%eax
0814eaff +0x47b:  mov    %eax,0x4(%esp)
0814eb03 +0x47f:  mov    %edx,(%esp)
0814eb06 +0x482:  call   08152c18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x254d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x254d
0814eb0b +0x487:  lea    -0x74(%ebp),%eax
0814eb0e +0x48a:  mov    %eax,(%esp)
0814eb11 +0x48d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814eb16 +0x492:  lea    -0x74(%ebp),%eax
0814eb19 +0x495:  mov    %eax,(%esp)
0814eb1c +0x498:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814eb21 +0x49d:  movl   $0x27,0x8(%esp)
0814eb29 +0x4a5:  movl   $0x0,0x4(%esp)
0814eb31 +0x4ad:  lea    -0x74(%ebp),%eax
0814eb34 +0x4b0:  mov    %eax,(%esp)
0814eb37 +0x4b3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814eb3c +0x4b8:  mov    0x10(%ebp),%eax
0814eb3f +0x4bb:  mov    %eax,0x4(%esp)
0814eb43 +0x4bf:  lea    -0x74(%ebp),%eax
0814eb46 +0x4c2:  mov    %eax,(%esp)
0814eb49 +0x4c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814eb4e +0x4ca:  mov    0xc(%ebp),%eax
0814eb51 +0x4cd:  mov    %eax,(%esp)
0814eb54 +0x4d0:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814eb59 +0x4d5:  movzwl %ax,%eax
0814eb5c +0x4d8:  mov    %eax,0x4(%esp)
0814eb60 +0x4dc:  lea    -0x74(%ebp),%eax
0814eb63 +0x4df:  mov    %eax,(%esp)
0814eb66 +0x4e2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814eb6b +0x4e7:  movl   $0x0,-0xc(%ebp)
0814eb72 +0x4ee:  jmp    0814eb92 <+0x50e>
0814eb74 +0x4f0:  mov    -0xc(%ebp),%eax
0814eb77 +0x4f3:  movzbl -0x44(%ebp,%eax,1),%eax
0814eb7c +0x4f8:  movsbl %al,%eax
0814eb7f +0x4fb:  mov    %eax,0x4(%esp)
0814eb83 +0x4ff:  lea    -0x74(%ebp),%eax
0814eb86 +0x502:  mov    %eax,(%esp)
0814eb89 +0x505:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814eb8e +0x50a:  addl   $0x1,-0xc(%ebp)
0814eb92 +0x50e:  cmpl   $0x3,-0xc(%ebp)
0814eb96 +0x512:  setle  %al
0814eb99 +0x515:  test   %al,%al
0814eb9b +0x517:  jne    0814eb74 <+0x4f0>
0814eb9d +0x519:  mov    -0x28(%ebp),%eax
0814eba0 +0x51c:  mov    %eax,(%esp)
0814eba3 +0x51f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814eba8 +0x524:  movzwl %ax,%eax
0814ebab +0x527:  mov    %eax,0x4(%esp)
0814ebaf +0x52b:  lea    -0x74(%ebp),%eax
0814ebb2 +0x52e:  mov    %eax,(%esp)
0814ebb5 +0x531:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814ebba +0x536:  mov    -0x10(%ebp),%eax
0814ebbd +0x539:  mov    %eax,0x4(%esp)
0814ebc1 +0x53d:  lea    -0x74(%ebp),%eax
0814ebc4 +0x540:  mov    %eax,(%esp)
0814ebc7 +0x543:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814ebcc +0x548:  mov    -0x14(%ebp),%eax
0814ebcf +0x54b:  mov    %eax,0x4(%esp)
0814ebd3 +0x54f:  lea    -0x74(%ebp),%eax
0814ebd6 +0x552:  mov    %eax,(%esp)
0814ebd9 +0x555:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ebde +0x55a:  movl   $0x1,0x4(%esp)
0814ebe6 +0x562:  lea    -0x74(%ebp),%eax
0814ebe9 +0x565:  mov    %eax,(%esp)
0814ebec +0x568:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814ebf1 +0x56d:  mov    0x8(%ebp),%eax
0814ebf4 +0x570:  mov    0x4(%eax),%eax
0814ebf7 +0x573:  lea    -0x74(%ebp),%edx
0814ebfa +0x576:  mov    %edx,0x4(%esp)
0814ebfe +0x57a:  mov    %eax,(%esp)
0814ec01 +0x57d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814ec06 +0x582:  mov    $0x1,%ebx
0814ec0b +0x587:  lea    -0x74(%ebp),%eax
0814ec0e +0x58a:  mov    %eax,(%esp)
0814ec11 +0x58d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ec16 +0x592:  jmp    0814ecdf <+0x65b>
0814ec1b +0x597:  mov    %edx,%ebx
0814ec1d +0x599:  mov    %eax,%esi
0814ec1f +0x59b:  lea    -0x74(%ebp),%eax
0814ec22 +0x59e:  mov    %eax,(%esp)
0814ec25 +0x5a1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ec2a +0x5a6:  mov    %esi,%eax
0814ec2c +0x5a8:  mov    %ebx,%edx
0814ec2e +0x5aa:  mov    %eax,(%esp)
0814ec31 +0x5ad:  call   08ae3750 <_Unwind_Resume>
0814ec36 +0x5b2:  lea    -0x80(%ebp),%eax
0814ec39 +0x5b5:  mov    %eax,(%esp)
0814ec3c +0x5b8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814ec41 +0x5bd:  lea    -0x80(%ebp),%eax
0814ec44 +0x5c0:  mov    %eax,(%esp)
0814ec47 +0x5c3:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814ec4c +0x5c8:  movl   $0x2e,0x8(%esp)
0814ec54 +0x5d0:  movl   $0x1,0x4(%esp)
0814ec5c +0x5d8:  lea    -0x80(%ebp),%eax
0814ec5f +0x5db:  mov    %eax,(%esp)
0814ec62 +0x5de:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814ec67 +0x5e3:  movl   $0x0,0x4(%esp)
0814ec6f +0x5eb:  lea    -0x80(%ebp),%eax
0814ec72 +0x5ee:  mov    %eax,(%esp)
0814ec75 +0x5f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ec7a +0x5f6:  movl   $0x4,0x4(%esp)
0814ec82 +0x5fe:  lea    -0x80(%ebp),%eax
0814ec85 +0x601:  mov    %eax,(%esp)
0814ec88 +0x604:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ec8d +0x609:  movl   $0x1,0x4(%esp)
0814ec95 +0x611:  lea    -0x80(%ebp),%eax
0814ec98 +0x614:  mov    %eax,(%esp)
0814ec9b +0x617:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814eca0 +0x61c:  lea    -0x80(%ebp),%eax
0814eca3 +0x61f:  mov    %eax,0x4(%esp)
0814eca7 +0x623:  mov    0xc(%ebp),%eax
0814ecaa +0x626:  mov    %eax,(%esp)
0814ecad +0x629:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814ecb2 +0x62e:  mov    $0x0,%ebx
0814ecb7 +0x633:  lea    -0x80(%ebp),%eax
0814ecba +0x636:  mov    %eax,(%esp)
0814ecbd +0x639:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ecc2 +0x63e:  jmp    0814ecdf <+0x65b>
0814ecc4 +0x640:  mov    %edx,%ebx
0814ecc6 +0x642:  mov    %eax,%esi
0814ecc8 +0x644:  lea    -0x80(%ebp),%eax
0814eccb +0x647:  mov    %eax,(%esp)
0814ecce +0x64a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ecd3 +0x64f:  mov    %esi,%eax
0814ecd5 +0x651:  mov    %ebx,%edx
0814ecd7 +0x653:  mov    %eax,(%esp)
0814ecda +0x656:  call   08ae3750 <_Unwind_Resume>
0814ecdf +0x65b:  mov    %ebx,%eax
0814ece1 +0x65d:  add    $0xd0,%esp
0814ece7 +0x663:  pop    %ebx
0814ece8 +0x664:  pop    %esi
0814ece9 +0x665:  pop    %ebp
0814ecea +0x666:  ret
0814eceb +0x667:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::RandomPickupItem @ 0x814e684

/* WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::RandomPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  PacketGuard local_84 [12];
  PacketGuard local_78 [12];
  PacketGuard local_6c [12];
  undefined1 local_60 [24];
  undefined4 local_48;
  cMyTrace local_44 [16];
  uint local_34;
  cMyTrace local_2d;
  CUserCharacInfo *local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  int local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_48 = 0;
  local_2d = (cMyTrace)0x0;
  local_2c = (CUserCharacInfo *)0x0;
  local_28 = 0;
  do {
    if (3 < local_28) {
      if (local_2c == (CUserCharacInfo *)0x0) {
        PacketGuard::PacketGuard(local_84);
                    /* try { // try from 0814ec47 to 0814ecb1 has its CatchHandler @ 0814ecc4 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
        CUser::Send(param_1,local_84);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_84);
      }
      else {
        iVar3 = *(int *)(param_3 + 0x12);
        this_00 = (CDataManager *)G_CDataManager();
        local_1c = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_1c == (CItem *)0x0) {
          uVar5 = *(undefined4 *)(param_3 + 0x12);
          cMyTrace::cMyTrace(local_44,
                             "bool WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, const map_item&)"
                             ,0x39c,5);
          cMyTrace::operator()(local_44,"item not find : %d",uVar5);
          uVar5 = 0;
        }
        else {
          local_18 = 0;
          cVar2 = CItem::is_stackable(local_1c);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
              if (cVar2 != '\0') {
                local_18 = 1;
              }
            }
            else {
              local_18 = 7;
            }
          }
          else {
            iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
            if (iVar3 == 9) {
              local_18 = 7;
            }
          }
          local_14 = 0xffffffff;
          cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(param_3 + 0x10));
          if (cVar2 == '\0') {
            uVar5 = CUserCharacInfo::getCurCharacInvenW(local_2c);
            local_14 = CInventory::insertItemIntoInventory
                                 (uVar5,*(undefined4 *)(param_3 + 0x10),
                                  *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                                  *(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),
                                  *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
                                  *(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
                                  *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                                  *(undefined4 *)(param_3 + 0x3c),*(undefined4 *)(param_3 + 0x40),
                                  *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(param_3 + 0x48),
                                  param_3[0x4c],4,1,1);
          }
          else {
            memset(local_60,0,0x18);
            uVar5 = CUserCharacInfo::getCurCharacNo(local_2c);
            CGenUniqueNo::genIPGNo(5,uVar5,local_60);
            local_14 = CUser::addAvatarItem
                                 ((CUser *)local_2c,*(undefined4 *)(param_3 + 0x12),0,
                                  (int)(char)*(undefined2 *)(param_3 + 0x1b),local_60,0x10);
          }
          if (local_14 == -1) {
            PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0814ea52 to 0814eabc has its CatchHandler @ 0814ead2 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x2e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,4);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
            CUser::Send((CUser *)local_2c,local_6c);
            uVar5 = 0;
            PacketGuard::~PacketGuard(local_6c);
          }
          else {
            local_34 = param_2;
            std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::
            erase((int *)(this + 0xa18));
            PacketGuard::PacketGuard(local_78);
                    /* try { // try from 0814eb1c to 0814ec05 has its CatchHandler @ 0814ec1b */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0x27);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,param_2);
            uVar4 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,uVar4 & 0xffff);
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              InterfacePacketBuf::put_byte
                        ((InterfacePacketBuf *)local_78,(int)(char)local_44[local_10 + -4]);
            }
            uVar4 = CUser::get_unique_id((CUser *)local_2c);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,uVar4 & 0xffff);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,local_14);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_18);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
            CParty::send_to_party(*(CParty **)(this + 4),local_78);
            uVar5 = 1;
            PacketGuard::~PacketGuard(local_78);
          }
        }
      }
      return uVar5;
    }
    local_24 = (CUserCharacInfo *)0x0;
    local_24 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_28);
    if (local_24 == (CUserCharacInfo *)0x0) {
LAB_0814e6ee:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_28);
      if (cVar2 != '\x01') goto LAB_0814e6ee;
      bVar1 = false;
    }
    if (!bVar1) {
      uVar5 = CUserCharacInfo::getCurCharacInvenR(local_24);
      local_20 = CInventory::tryInsertItemIntoInventory
                           (uVar5,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                            *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                            *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                            *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                            *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                            *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                            *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                            *(undefined4 *)(param_3 + 0x48),param_3[0x4c]);
      if (local_20 == -1) {
LAB_0814e7b1:
        bVar1 = false;
      }
      else {
        cVar2 = CBossPlay::isMemberAlive((CBossPlay *)this,local_28);
        if (cVar2 == '\0') goto LAB_0814e7b1;
        bVar1 = true;
      }
      iVar3 = local_28;
      if (bVar1) {
        cVar2 = get_rand_int(100);
        local_44[iVar3 + -4] = (cMyTrace)(cVar2 + '\x01');
        if ((char)local_2d < (char)local_44[local_28 + -4]) {
          local_2d = local_44[local_28 + -4];
          local_2c = local_24;
        }
      }
      else {
        local_44[local_28 + -4] = (cMyTrace)0x0;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}
```
