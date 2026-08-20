# HandleItemDrop

`_ZN7WarRoom14HandleItemDropEP5CUseriicii`

`WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bf5fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bf5fc  _ZN7WarRoom14HandleItemDropEP5CUseriicii
#           WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)
# range [0x086bf5fc, 0x086c0403]
086bf5fc +0x000:  push   %ebp
086bf5fd +0x001:  mov    %esp,%ebp
086bf5ff +0x003:  push   %edi
086bf600 +0x004:  push   %esi
086bf601 +0x005:  push   %ebx
086bf602 +0x006:  sub    $0x1ec,%esp
086bf608 +0x00c:  mov    0x18(%ebp),%eax
086bf60b +0x00f:  mov    %al,-0x13c(%ebp)
086bf611 +0x015:  mov    0x8(%ebp),%eax
086bf614 +0x018:  mov    %eax,(%esp)
086bf617 +0x01b:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bf61c +0x020:  cmp    $0x3,%eax
086bf61f +0x023:  je     086bf638 <+0x3c>
086bf621 +0x025:  mov    0x8(%ebp),%eax
086bf624 +0x028:  mov    %eax,(%esp)
086bf627 +0x02b:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bf62c +0x030:  cmp    $0x4,%eax
086bf62f +0x033:  je     086bf638 <+0x3c>
086bf631 +0x035:  mov    $0x1,%eax
086bf636 +0x03a:  jmp    086bf63d <+0x41>
086bf638 +0x03c:  mov    $0x0,%eax
086bf63d +0x041:  test   %al,%al
086bf63f +0x043:  je     086bf64b <+0x4f>
086bf641 +0x045:  mov    $0x13,%ebx
086bf646 +0x04a:  jmp    086c03f6 <+0xdfa>
086bf64b +0x04f:  cmpl   $0x0,0x20(%ebp)
086bf64f +0x053:  jns    086bf6b7 <+0xbb>
086bf651 +0x055:  mov    0xc(%ebp),%eax
086bf654 +0x058:  mov    %eax,(%esp)
086bf657 +0x05b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086bf65c +0x060:  mov    %eax,%ebx
086bf65e +0x062:  mov    0xc(%ebp),%eax
086bf661 +0x065:  mov    %eax,(%esp)
086bf664 +0x068:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086bf669 +0x06d:  movl   $0x0,0x4(%esp)
086bf671 +0x075:  mov    %eax,(%esp)
086bf674 +0x078:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086bf679 +0x07d:  mov    %ebx,0x18(%esp)
086bf67d +0x081:  mov    %eax,0x14(%esp)
086bf681 +0x085:  movl   $"user - accid[%s] %s : count<0",0x10(%esp)
086bf689 +0x08d:  movl   $0xa1a,0xc(%esp)
086bf691 +0x095:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x8(%esp)
086bf699 +0x09d:  movl   $"WarRoom.cpp",0x4(%esp)
086bf6a1 +0x0a5:  movl   $0x1,(%esp)
086bf6a8 +0x0ac:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bf6ad +0x0b1:  mov    $0x11,%ebx
086bf6b2 +0x0b6:  jmp    086c03f6 <+0xdfa>
086bf6b7 +0x0bb:  mov    0xc(%ebp),%eax
086bf6ba +0x0be:  mov    %eax,(%esp)
086bf6bd +0x0c1:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
086bf6c2 +0x0c6:  test   %al,%al
086bf6c4 +0x0c8:  je     086bf6d0 <+0xd4>
086bf6c6 +0x0ca:  mov    $0x13,%ebx
086bf6cb +0x0cf:  jmp    086c03f6 <+0xdfa>
086bf6d0 +0x0d4:  lea    -0x12c(%ebp),%eax
086bf6d6 +0x0da:  mov    %eax,(%esp)
086bf6d9 +0x0dd:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
086bf6de +0x0e2:  lea    -0xd5(%ebp),%eax
086bf6e4 +0x0e8:  mov    %eax,(%esp)
086bf6e7 +0x0eb:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086bf6ec +0x0f0:  movsbl -0x13c(%ebp),%eax
086bf6f3 +0x0f7:  cmp    $0x2,%eax
086bf6f6 +0x0fa:  je     086bf857 <+0x25b>
086bf6fc +0x100:  cmp    $0x3,%eax
086bf6ff +0x103:  je     086bf944 <+0x348>
086bf705 +0x109:  test   %eax,%eax
086bf707 +0x10b:  jne    086bfa34 <+0x438>
086bf70d +0x111:  cmpl   $0x0,0x1c(%ebp)
086bf711 +0x115:  jne    086bf762 <+0x166>
086bf713 +0x117:  movb   $0x0,-0x12c(%ebp)
086bf71a +0x11e:  movb   $0x2,-0x11b(%ebp)
086bf721 +0x125:  movl   $0x0,-0x11a(%ebp)
086bf72b +0x12f:  mov    0x20(%ebp),%eax
086bf72e +0x132:  mov    %eax,0x4(%esp)
086bf732 +0x136:  lea    -0x12c(%ebp),%eax
086bf738 +0x13c:  add    $0x10,%eax
086bf73b +0x13f:  mov    %eax,(%esp)
086bf73e +0x142:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
086bf743 +0x147:  movw   $0x0,-0x111(%ebp)
086bf74c +0x150:  lea    -0x12c(%ebp),%eax
086bf752 +0x156:  add    $0x10,%eax
086bf755 +0x159:  mov    %eax,(%esp)
086bf758 +0x15c:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
086bf75d +0x161:  jmp    086bfa34 <+0x438>
086bf762 +0x166:  mov    0xc(%ebp),%eax
086bf765 +0x169:  mov    %eax,(%esp)
086bf768 +0x16c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086bf76d +0x171:  lea    -0x188(%ebp),%edx
086bf773 +0x177:  mov    0x1c(%ebp),%ecx
086bf776 +0x17a:  mov    %ecx,0xc(%esp)
086bf77a +0x17e:  movl   $0x1,0x8(%esp)
086bf782 +0x186:  mov    %eax,0x4(%esp)
086bf786 +0x18a:  mov    %edx,(%esp)
086bf789 +0x18d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086bf78e +0x192:  sub    $0x4,%esp
086bf791 +0x195:  mov    -0x188(%ebp),%eax
086bf797 +0x19b:  mov    %eax,-0xd5(%ebp)
086bf79d +0x1a1:  mov    -0x184(%ebp),%eax
086bf7a3 +0x1a7:  mov    %eax,-0xd1(%ebp)
086bf7a9 +0x1ad:  mov    -0x180(%ebp),%eax
086bf7af +0x1b3:  mov    %eax,-0xcd(%ebp)
086bf7b5 +0x1b9:  mov    -0x17c(%ebp),%eax
086bf7bb +0x1bf:  mov    %eax,-0xc9(%ebp)
086bf7c1 +0x1c5:  mov    -0x178(%ebp),%eax
086bf7c7 +0x1cb:  mov    %eax,-0xc5(%ebp)
086bf7cd +0x1d1:  mov    -0x174(%ebp),%eax
086bf7d3 +0x1d7:  mov    %eax,-0xc1(%ebp)
086bf7d9 +0x1dd:  mov    -0x170(%ebp),%eax
086bf7df +0x1e3:  mov    %eax,-0xbd(%ebp)
086bf7e5 +0x1e9:  mov    -0x16c(%ebp),%eax
086bf7eb +0x1ef:  mov    %eax,-0xb9(%ebp)
086bf7f1 +0x1f5:  mov    -0x168(%ebp),%eax
086bf7f7 +0x1fb:  mov    %eax,-0xb5(%ebp)
086bf7fd +0x201:  mov    -0x164(%ebp),%eax
086bf803 +0x207:  mov    %eax,-0xb1(%ebp)
086bf809 +0x20d:  mov    -0x160(%ebp),%eax
086bf80f +0x213:  mov    %eax,-0xad(%ebp)
086bf815 +0x219:  mov    -0x15c(%ebp),%eax
086bf81b +0x21f:  mov    %eax,-0xa9(%ebp)
086bf821 +0x225:  mov    -0x158(%ebp),%eax
086bf827 +0x22b:  mov    %eax,-0xa5(%ebp)
086bf82d +0x231:  mov    -0x154(%ebp),%eax
086bf833 +0x237:  mov    %eax,-0xa1(%ebp)
086bf839 +0x23d:  mov    -0x150(%ebp),%eax
086bf83f +0x243:  mov    %eax,-0x9d(%ebp)
086bf845 +0x249:  movzbl -0x14c(%ebp),%eax
086bf84c +0x250:  mov    %al,-0x99(%ebp)
086bf852 +0x256:  jmp    086bfa34 <+0x438>
086bf857 +0x25b:  mov    0xc(%ebp),%eax
086bf85a +0x25e:  mov    %eax,(%esp)
086bf85d +0x261:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
086bf862 +0x266:  lea    -0x188(%ebp),%edx
086bf868 +0x26c:  mov    0x1c(%ebp),%ecx
086bf86b +0x26f:  mov    %ecx,0x8(%esp)
086bf86f +0x273:  mov    %eax,0x4(%esp)
086bf873 +0x277:  mov    %edx,(%esp)
086bf876 +0x27a:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
086bf87b +0x27f:  sub    $0x4,%esp
086bf87e +0x282:  mov    -0x188(%ebp),%eax
086bf884 +0x288:  mov    %eax,-0xd5(%ebp)
086bf88a +0x28e:  mov    -0x184(%ebp),%eax
086bf890 +0x294:  mov    %eax,-0xd1(%ebp)
086bf896 +0x29a:  mov    -0x180(%ebp),%eax
086bf89c +0x2a0:  mov    %eax,-0xcd(%ebp)
086bf8a2 +0x2a6:  mov    -0x17c(%ebp),%eax
086bf8a8 +0x2ac:  mov    %eax,-0xc9(%ebp)
086bf8ae +0x2b2:  mov    -0x178(%ebp),%eax
086bf8b4 +0x2b8:  mov    %eax,-0xc5(%ebp)
086bf8ba +0x2be:  mov    -0x174(%ebp),%eax
086bf8c0 +0x2c4:  mov    %eax,-0xc1(%ebp)
086bf8c6 +0x2ca:  mov    -0x170(%ebp),%eax
086bf8cc +0x2d0:  mov    %eax,-0xbd(%ebp)
086bf8d2 +0x2d6:  mov    -0x16c(%ebp),%eax
086bf8d8 +0x2dc:  mov    %eax,-0xb9(%ebp)
086bf8de +0x2e2:  mov    -0x168(%ebp),%eax
086bf8e4 +0x2e8:  mov    %eax,-0xb5(%ebp)
086bf8ea +0x2ee:  mov    -0x164(%ebp),%eax
086bf8f0 +0x2f4:  mov    %eax,-0xb1(%ebp)
086bf8f6 +0x2fa:  mov    -0x160(%ebp),%eax
086bf8fc +0x300:  mov    %eax,-0xad(%ebp)
086bf902 +0x306:  mov    -0x15c(%ebp),%eax
086bf908 +0x30c:  mov    %eax,-0xa9(%ebp)
086bf90e +0x312:  mov    -0x158(%ebp),%eax
086bf914 +0x318:  mov    %eax,-0xa5(%ebp)
086bf91a +0x31e:  mov    -0x154(%ebp),%eax
086bf920 +0x324:  mov    %eax,-0xa1(%ebp)
086bf926 +0x32a:  mov    -0x150(%ebp),%eax
086bf92c +0x330:  mov    %eax,-0x9d(%ebp)
086bf932 +0x336:  movzbl -0x14c(%ebp),%eax
086bf939 +0x33d:  mov    %al,-0x99(%ebp)
086bf93f +0x343:  jmp    086bfa34 <+0x438>
086bf944 +0x348:  mov    0xc(%ebp),%eax
086bf947 +0x34b:  mov    %eax,(%esp)
086bf94a +0x34e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086bf94f +0x353:  lea    -0x188(%ebp),%edx
086bf955 +0x359:  mov    0x1c(%ebp),%ecx
086bf958 +0x35c:  mov    %ecx,0xc(%esp)
086bf95c +0x360:  movl   $0x0,0x8(%esp)
086bf964 +0x368:  mov    %eax,0x4(%esp)
086bf968 +0x36c:  mov    %edx,(%esp)
086bf96b +0x36f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086bf970 +0x374:  sub    $0x4,%esp
086bf973 +0x377:  mov    -0x188(%ebp),%eax
086bf979 +0x37d:  mov    %eax,-0xd5(%ebp)
086bf97f +0x383:  mov    -0x184(%ebp),%eax
086bf985 +0x389:  mov    %eax,-0xd1(%ebp)
086bf98b +0x38f:  mov    -0x180(%ebp),%eax
086bf991 +0x395:  mov    %eax,-0xcd(%ebp)
086bf997 +0x39b:  mov    -0x17c(%ebp),%eax
086bf99d +0x3a1:  mov    %eax,-0xc9(%ebp)
086bf9a3 +0x3a7:  mov    -0x178(%ebp),%eax
086bf9a9 +0x3ad:  mov    %eax,-0xc5(%ebp)
086bf9af +0x3b3:  mov    -0x174(%ebp),%eax
086bf9b5 +0x3b9:  mov    %eax,-0xc1(%ebp)
086bf9bb +0x3bf:  mov    -0x170(%ebp),%eax
086bf9c1 +0x3c5:  mov    %eax,-0xbd(%ebp)
086bf9c7 +0x3cb:  mov    -0x16c(%ebp),%eax
086bf9cd +0x3d1:  mov    %eax,-0xb9(%ebp)
086bf9d3 +0x3d7:  mov    -0x168(%ebp),%eax
086bf9d9 +0x3dd:  mov    %eax,-0xb5(%ebp)
086bf9df +0x3e3:  mov    -0x164(%ebp),%eax
086bf9e5 +0x3e9:  mov    %eax,-0xb1(%ebp)
086bf9eb +0x3ef:  mov    -0x160(%ebp),%eax
086bf9f1 +0x3f5:  mov    %eax,-0xad(%ebp)
086bf9f7 +0x3fb:  mov    -0x15c(%ebp),%eax
086bf9fd +0x401:  mov    %eax,-0xa9(%ebp)
086bfa03 +0x407:  mov    -0x158(%ebp),%eax
086bfa09 +0x40d:  mov    %eax,-0xa5(%ebp)
086bfa0f +0x413:  mov    -0x154(%ebp),%eax
086bfa15 +0x419:  mov    %eax,-0xa1(%ebp)
086bfa1b +0x41f:  mov    -0x150(%ebp),%eax
086bfa21 +0x425:  mov    %eax,-0x9d(%ebp)
086bfa27 +0x42b:  movzbl -0x14c(%ebp),%eax
086bfa2e +0x432:  mov    %al,-0x99(%ebp)
086bfa34 +0x438:  movl   $0x0,-0x8c(%ebp)
086bfa3e +0x442:  mov    -0xd3(%ebp),%eax
086bfa44 +0x448:  test   %eax,%eax
086bfa46 +0x44a:  je     086bfcab <+0x6af>
086bfa4c +0x450:  mov    -0xd3(%ebp),%eax
086bfa52 +0x456:  mov    %eax,%ebx
086bfa54 +0x458:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bfa59 +0x45d:  mov    %ebx,0x4(%esp)
086bfa5d +0x461:  mov    %eax,(%esp)
086bfa60 +0x464:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086bfa65 +0x469:  mov    %eax,-0x24(%ebp)
086bfa68 +0x46c:  cmpl   $0x0,-0x24(%ebp)
086bfa6c +0x470:  jne    086bfaae <+0x4b2>
086bfa6e +0x472:  mov    -0xd3(%ebp),%eax
086bfa74 +0x478:  mov    %eax,0x14(%esp)
086bfa78 +0x47c:  movl   $"[WarRoom::HandleDropItem] Null Item %d",0x10(%esp)
086bfa80 +0x484:  movl   $0xa4c,0xc(%esp)
086bfa88 +0x48c:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x8(%esp)
086bfa90 +0x494:  movl   $"WarRoom.cpp",0x4(%esp)
086bfa98 +0x49c:  movl   $0x1,(%esp)
086bfa9f +0x4a3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bfaa4 +0x4a8:  mov    $0xffffffff,%ebx
086bfaa9 +0x4ad:  jmp    086c03f6 <+0xdfa>
086bfaae +0x4b2:  mov    -0x24(%ebp),%eax
086bfab1 +0x4b5:  mov    %eax,(%esp)
086bfab4 +0x4b8:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
086bfab9 +0x4bd:  mov    %eax,-0x20(%ebp)
086bfabc +0x4c0:  mov    -0x20(%ebp),%eax
086bfabf +0x4c3:  cmp    $0x5,%eax
086bfac2 +0x4c6:  ja     086bfaef <+0x4f3>
086bfac4 +0x4c8:  mov    &data#f49038a2(.rodata)(,%eax,4),%eax
086bfacb +0x4cf:  jmp    *%eax
086bfacd +0x4d1:  mov    $0x17,%ebx
086bfad2 +0x4d6:  jmp    086c03f6 <+0xdfa>
086bfad7 +0x4db:  movzbl -0xd5(%ebp),%eax
086bfade +0x4e2:  xor    $0x1,%eax
086bfae1 +0x4e5:  test   %al,%al
086bfae3 +0x4e7:  je     086bfaef <+0x4f3>
086bfae5 +0x4e9:  mov    $0x17,%ebx
086bfaea +0x4ee:  jmp    086c03f6 <+0xdfa>
086bfaef +0x4f3:  lea    -0xd5(%ebp),%eax
086bfaf5 +0x4f9:  mov    %eax,(%esp)
086bfaf8 +0x4fc:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
086bfafd +0x501:  test   %al,%al
086bfaff +0x503:  je     086bfb2d <+0x531>
086bfb01 +0x505:  mov    -0x24(%ebp),%eax
086bfb04 +0x508:  mov    %eax,-0x1c(%ebp)
086bfb07 +0x50b:  mov    -0x1c(%ebp),%eax
086bfb0a +0x50e:  mov    0x234(%eax),%eax
086bfb10 +0x514:  cmp    $0xb,%eax
086bfb13 +0x517:  je     086bfb23 <+0x527>
086bfb15 +0x519:  mov    -0x1c(%ebp),%eax
086bfb18 +0x51c:  mov    0x234(%eax),%eax
086bfb1e +0x522:  cmp    $0x9,%eax
086bfb21 +0x525:  jg     086bfb2d <+0x531>
086bfb23 +0x527:  mov    $0x17,%ebx
086bfb28 +0x52c:  jmp    086c03f6 <+0xdfa>
086bfb2d +0x531:  movb   $0x0,-0x12c(%ebp)
086bfb34 +0x538:  movzbl -0xd4(%ebp),%eax
086bfb3b +0x53f:  mov    %al,-0x11b(%ebp)
086bfb41 +0x545:  mov    -0xd3(%ebp),%eax
086bfb47 +0x54b:  mov    %eax,-0x11a(%ebp)
086bfb4d +0x551:  lea    -0xd5(%ebp),%eax
086bfb53 +0x557:  mov    %eax,(%esp)
086bfb56 +0x55a:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
086bfb5b +0x55f:  xor    $0x1,%eax
086bfb5e +0x562:  test   %al,%al
086bfb60 +0x564:  je     086bfb7c <+0x580>
086bfb62 +0x566:  mov    0x20(%ebp),%eax
086bfb65 +0x569:  mov    %eax,0x4(%esp)
086bfb69 +0x56d:  lea    -0x12c(%ebp),%eax
086bfb6f +0x573:  add    $0x10,%eax
086bfb72 +0x576:  mov    %eax,(%esp)
086bfb75 +0x579:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
086bfb7a +0x57e:  jmp    086bfb97 <+0x59b>
086bfb7c +0x580:  mov    -0xce(%ebp),%eax
086bfb82 +0x586:  mov    %eax,0x4(%esp)
086bfb86 +0x58a:  lea    -0x12c(%ebp),%eax
086bfb8c +0x590:  add    $0x10,%eax
086bfb8f +0x593:  mov    %eax,(%esp)
086bfb92 +0x596:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
086bfb97 +0x59b:  lea    -0xd5(%ebp),%eax
086bfb9d +0x5a1:  mov    %eax,(%esp)
086bfba0 +0x5a4:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
086bfba5 +0x5a9:  movzbl %al,%eax
086bfba8 +0x5ac:  mov    %eax,0x4(%esp)
086bfbac +0x5b0:  lea    -0x12c(%ebp),%eax
086bfbb2 +0x5b6:  add    $0x10,%eax
086bfbb5 +0x5b9:  mov    %eax,(%esp)
086bfbb8 +0x5bc:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
086bfbbd +0x5c1:  movzwl -0xca(%ebp),%eax
086bfbc4 +0x5c8:  mov    %ax,-0x111(%ebp)
086bfbcb +0x5cf:  movzbl -0xd5(%ebp),%eax
086bfbd2 +0x5d6:  mov    %al,-0x11c(%ebp)
086bfbd8 +0x5dc:  mov    -0xc8(%ebp),%eax
086bfbde +0x5e2:  mov    %eax,-0x10f(%ebp)
086bfbe4 +0x5e8:  mov    -0xc0(%ebp),%eax
086bfbea +0x5ee:  mov    %eax,-0x107(%ebp)
086bfbf0 +0x5f4:  mov    -0xbc(%ebp),%eax
086bfbf6 +0x5fa:  mov    %eax,-0x103(%ebp)
086bfbfc +0x600:  movzwl -0xb8(%ebp),%eax
086bfc03 +0x607:  mov    %ax,-0xff(%ebp)
086bfc0a +0x60e:  mov    -0xc4(%ebp),%eax
086bfc10 +0x614:  mov    %eax,-0x10b(%ebp)
086bfc16 +0x61a:  mov    -0xb0(%ebp),%eax
086bfc1c +0x620:  mov    %eax,-0xf7(%ebp)
086bfc22 +0x626:  mov    -0xac(%ebp),%eax
086bfc28 +0x62c:  mov    %eax,-0xf3(%ebp)
086bfc2e +0x632:  mov    -0xa8(%ebp),%eax
086bfc34 +0x638:  mov    %eax,-0xef(%ebp)
086bfc3a +0x63e:  movzwl -0xa4(%ebp),%eax
086bfc41 +0x645:  mov    %ax,-0xeb(%ebp)
086bfc48 +0x64c:  lea    -0xd5(%ebp),%eax
086bfc4e +0x652:  add    $0x33,%eax
086bfc51 +0x655:  mov    %eax,(%esp)
086bfc54 +0x658:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
086bfc59 +0x65d:  movzbl %al,%eax
086bfc5c +0x660:  mov    %eax,0x4(%esp)
086bfc60 +0x664:  lea    -0x12c(%ebp),%eax
086bfc66 +0x66a:  add    $0x43,%eax
086bfc69 +0x66d:  mov    %eax,(%esp)
086bfc6c +0x670:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
086bfc71 +0x675:  mov    0x20(%ebp),%eax
086bfc74 +0x678:  movswl %ax,%ebx
086bfc77 +0x67b:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
086bfc7c +0x680:  lea    -0x8c(%ebp),%edx
086bfc82 +0x686:  mov    %edx,0x14(%esp)
086bfc86 +0x68a:  movl   $0x0,0x10(%esp)
086bfc8e +0x692:  mov    %ebx,0xc(%esp)
086bfc92 +0x696:  mov    -0x24(%ebp),%edx
086bfc95 +0x699:  mov    %edx,0x8(%esp)
086bfc99 +0x69d:  lea    -0xd5(%ebp),%edx
086bfc9f +0x6a3:  mov    %edx,0x4(%esp)
086bfca3 +0x6a7:  mov    %eax,(%esp)
086bfca6 +0x6aa:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
086bfcab +0x6af:  movsbl -0x13c(%ebp),%eax
086bfcb2 +0x6b6:  cmp    $0x2,%eax
086bfcb5 +0x6b9:  je     086bfe6d <+0x871>
086bfcbb +0x6bf:  cmp    $0x2,%eax
086bfcbe +0x6c2:  jg     086bfcc9 <+0x6cd>
086bfcc0 +0x6c4:  test   %eax,%eax
086bfcc2 +0x6c6:  je     086bfce0 <+0x6e4>
086bfcc4 +0x6c8:  jmp    086c008a <+0xa8e>
086bfcc9 +0x6cd:  cmp    $0x3,%eax
086bfccc +0x6d0:  je     086bff00 <+0x904>
086bfcd2 +0x6d6:  cmp    $0x7,%eax
086bfcd5 +0x6d9:  je     086bffc6 <+0x9ca>
086bfcdb +0x6df:  jmp    086c008a <+0xa8e>
086bfce0 +0x6e4:  cmpl   $0x0,0x1c(%ebp)
086bfce4 +0x6e8:  jne    086bfda1 <+0x7a5>
086bfcea +0x6ee:  mov    0xc(%ebp),%eax
086bfced +0x6f1:  mov    %eax,(%esp)
086bfcf0 +0x6f4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bfcf5 +0x6f9:  movl   $0x1,0xc(%esp)
086bfcfd +0x701:  movl   $0x6,0x8(%esp)
086bfd05 +0x709:  mov    0x20(%ebp),%edx
086bfd08 +0x70c:  mov    %edx,0x4(%esp)
086bfd0c +0x710:  mov    %eax,(%esp)
086bfd0f +0x713:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
086bfd14 +0x718:  xor    $0x1,%eax
086bfd17 +0x71b:  test   %al,%al
086bfd19 +0x71d:  je     086bfd79 <+0x77d>
086bfd1b +0x71f:  mov    0xc(%ebp),%eax
086bfd1e +0x722:  mov    %eax,(%esp)
086bfd21 +0x725:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086bfd26 +0x72a:  mov    %eax,%ebx
086bfd28 +0x72c:  movl   $0x5,0xc(%esp)
086bfd30 +0x734:  movl   $0xa9f,0x8(%esp)
086bfd38 +0x73c:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086bfd40 +0x744:  lea    -0x88(%ebp),%eax
086bfd46 +0x74a:  mov    %eax,(%esp)
086bfd49 +0x74d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bfd4e +0x752:  mov    0x20(%ebp),%eax
086bfd51 +0x755:  mov    %eax,0xc(%esp)
086bfd55 +0x759:  mov    %ebx,0x8(%esp)
086bfd59 +0x75d:  movl   $"CParty::drop_item , use_money failed, User ch=%d , %d %d",0x4(%esp)
086bfd61 +0x765:  lea    -0x88(%ebp),%eax
086bfd67 +0x76b:  mov    %eax,(%esp)
086bfd6a +0x76e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bfd6f +0x773:  mov    $0x11,%ebx
086bfd74 +0x778:  jmp    086c03f6 <+0xdfa>
086bfd79 +0x77d:  mov    0x20(%ebp),%ebx
086bfd7c +0x780:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086bfd81 +0x785:  mov    %ebx,0xc(%esp)
086bfd85 +0x789:  mov    0xc(%ebp),%edx
086bfd88 +0x78c:  mov    %edx,0x8(%esp)
086bfd8c +0x790:  movl   $0x17,0x4(%esp)
086bfd94 +0x798:  mov    %eax,(%esp)
086bfd97 +0x79b:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086bfd9c +0x7a0:  jmp    086c008a <+0xa8e>
086bfda1 +0x7a5:  mov    0xc(%ebp),%eax
086bfda4 +0x7a8:  mov    %eax,(%esp)
086bfda7 +0x7ab:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bfdac +0x7b0:  movl   $0x1,0x14(%esp)
086bfdb4 +0x7b8:  movl   $0x6,0x10(%esp)
086bfdbc +0x7c0:  mov    0x20(%ebp),%edx
086bfdbf +0x7c3:  mov    %edx,0xc(%esp)
086bfdc3 +0x7c7:  mov    0x1c(%ebp),%edx
086bfdc6 +0x7ca:  mov    %edx,0x8(%esp)
086bfdca +0x7ce:  movl   $0x1,0x4(%esp)
086bfdd2 +0x7d6:  mov    %eax,(%esp)
086bfdd5 +0x7d9:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086bfdda +0x7de:  xor    $0x1,%eax
086bfddd +0x7e1:  test   %al,%al
086bfddf +0x7e3:  je     086bfe40 <+0x844>
086bfde1 +0x7e5:  mov    0xc(%ebp),%eax
086bfde4 +0x7e8:  mov    %eax,(%esp)
086bfde7 +0x7eb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086bfdec +0x7f0:  mov    %eax,%ebx
086bfdee +0x7f2:  movl   $0x5,0xc(%esp)
086bfdf6 +0x7fa:  movl   $0xaae,0x8(%esp)
086bfdfe +0x802:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086bfe06 +0x80a:  lea    -0x78(%ebp),%eax
086bfe09 +0x80d:  mov    %eax,(%esp)
086bfe0c +0x810:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bfe11 +0x815:  mov    0x20(%ebp),%eax
086bfe14 +0x818:  mov    %eax,0x10(%esp)
086bfe18 +0x81c:  mov    0x1c(%ebp),%eax
086bfe1b +0x81f:  mov    %eax,0xc(%esp)
086bfe1f +0x823:  mov    %ebx,0x8(%esp)
086bfe23 +0x827:  movl   $"CParty::drop_item , delete_item failed, User ch=%d , %d %d",0x4(%esp)
086bfe2b +0x82f:  lea    -0x78(%ebp),%eax
086bfe2e +0x832:  mov    %eax,(%esp)
086bfe31 +0x835:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bfe36 +0x83a:  mov    $0x11,%ebx
086bfe3b +0x83f:  jmp    086c03f6 <+0xdfa>
086bfe40 +0x844:  mov    -0x8c(%ebp),%eax
086bfe46 +0x84a:  mov    %eax,%ebx
086bfe48 +0x84c:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086bfe4d +0x851:  mov    %ebx,0xc(%esp)
086bfe51 +0x855:  mov    0xc(%ebp),%edx
086bfe54 +0x858:  mov    %edx,0x8(%esp)
086bfe58 +0x85c:  movl   $0x16,0x4(%esp)
086bfe60 +0x864:  mov    %eax,(%esp)
086bfe63 +0x867:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086bfe68 +0x86c:  jmp    086c008a <+0xa8e>
086bfe6d +0x871:  mov    0xc(%ebp),%eax
086bfe70 +0x874:  mov    %eax,(%esp)
086bfe73 +0x877:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
086bfe78 +0x87c:  movl   $0x10,0xc(%esp)
086bfe80 +0x884:  mov    0x20(%ebp),%edx
086bfe83 +0x887:  mov    %edx,0x8(%esp)
086bfe87 +0x88b:  mov    0x1c(%ebp),%edx
086bfe8a +0x88e:  mov    %edx,0x4(%esp)
086bfe8e +0x892:  mov    %eax,(%esp)
086bfe91 +0x895:  call   0850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>  ; CCargo::delete_item(int, int, eItemDelReason)
086bfe96 +0x89a:  xor    $0x1,%eax
086bfe99 +0x89d:  test   %al,%al
086bfe9b +0x89f:  je     086c0089 <+0xa8d>
086bfea1 +0x8a5:  mov    0xc(%ebp),%eax
086bfea4 +0x8a8:  mov    %eax,(%esp)
086bfea7 +0x8ab:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086bfeac +0x8b0:  mov    %eax,%ebx
086bfeae +0x8b2:  movl   $0x5,0xc(%esp)
086bfeb6 +0x8ba:  movl   $0xabf,0x8(%esp)
086bfebe +0x8c2:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086bfec6 +0x8ca:  lea    -0x68(%ebp),%eax
086bfec9 +0x8cd:  mov    %eax,(%esp)
086bfecc +0x8d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bfed1 +0x8d5:  mov    0x20(%ebp),%eax
086bfed4 +0x8d8:  mov    %eax,0x10(%esp)
086bfed8 +0x8dc:  mov    0x1c(%ebp),%eax
086bfedb +0x8df:  mov    %eax,0xc(%esp)
086bfedf +0x8e3:  mov    %ebx,0x8(%esp)
086bfee3 +0x8e7:  movl   $"CParty::drop_item , delete_item failed 2, User ch=%d , %d %d",0x4(%esp)
086bfeeb +0x8ef:  lea    -0x68(%ebp),%eax
086bfeee +0x8f2:  mov    %eax,(%esp)
086bfef1 +0x8f5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bfef6 +0x8fa:  mov    $0x11,%ebx
086bfefb +0x8ff:  jmp    086c03f6 <+0xdfa>
086bff00 +0x904:  mov    0xc(%ebp),%eax
086bff03 +0x907:  mov    %eax,(%esp)
086bff06 +0x90a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bff0b +0x90f:  movl   $0x1,0x14(%esp)
086bff13 +0x917:  movl   $0x6,0x10(%esp)
086bff1b +0x91f:  movl   $0x1,0xc(%esp)
086bff23 +0x927:  mov    0x1c(%ebp),%edx
086bff26 +0x92a:  mov    %edx,0x8(%esp)
086bff2a +0x92e:  movl   $0x0,0x4(%esp)
086bff32 +0x936:  mov    %eax,(%esp)
086bff35 +0x939:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086bff3a +0x93e:  xor    $0x1,%eax
086bff3d +0x941:  test   %al,%al
086bff3f +0x943:  je     086bff99 <+0x99d>
086bff41 +0x945:  mov    0xc(%ebp),%eax
086bff44 +0x948:  mov    %eax,(%esp)
086bff47 +0x94b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086bff4c +0x950:  mov    %eax,%ebx
086bff4e +0x952:  movl   $0x5,0xc(%esp)
086bff56 +0x95a:  movl   $0xaca,0x8(%esp)
086bff5e +0x962:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086bff66 +0x96a:  lea    -0x58(%ebp),%eax
086bff69 +0x96d:  mov    %eax,(%esp)
086bff6c +0x970:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bff71 +0x975:  mov    0x1c(%ebp),%eax
086bff74 +0x978:  mov    %eax,0xc(%esp)
086bff78 +0x97c:  mov    %ebx,0x8(%esp)
086bff7c +0x980:  movl   $"CParty::drop_item , delete_item failed 3, User ch=%d , %d",0x4(%esp)
086bff84 +0x988:  lea    -0x58(%ebp),%eax
086bff87 +0x98b:  mov    %eax,(%esp)
086bff8a +0x98e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bff8f +0x993:  mov    $0x11,%ebx
086bff94 +0x998:  jmp    086c03f6 <+0xdfa>
086bff99 +0x99d:  mov    -0x8c(%ebp),%eax
086bff9f +0x9a3:  mov    %eax,%ebx
086bffa1 +0x9a5:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086bffa6 +0x9aa:  mov    %ebx,0xc(%esp)
086bffaa +0x9ae:  mov    0xc(%ebp),%edx
086bffad +0x9b1:  mov    %edx,0x8(%esp)
086bffb1 +0x9b5:  movl   $0x16,0x4(%esp)
086bffb9 +0x9bd:  mov    %eax,(%esp)
086bffbc +0x9c0:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086bffc1 +0x9c5:  jmp    086c008a <+0xa8e>
086bffc6 +0x9ca:  mov    0xc(%ebp),%eax
086bffc9 +0x9cd:  mov    %eax,(%esp)
086bffcc +0x9d0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086bffd1 +0x9d5:  movl   $0x1,0x14(%esp)
086bffd9 +0x9dd:  movl   $0x6,0x10(%esp)
086bffe1 +0x9e5:  movl   $0x1,0xc(%esp)
086bffe9 +0x9ed:  mov    0x1c(%ebp),%edx
086bffec +0x9f0:  mov    %edx,0x8(%esp)
086bfff0 +0x9f4:  movl   $0x3,0x4(%esp)
086bfff8 +0x9fc:  mov    %eax,(%esp)
086bfffb +0x9ff:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
086c0000 +0xa04:  xor    $0x1,%eax
086c0003 +0xa07:  test   %al,%al
086c0005 +0xa09:  je     086c005f <+0xa63>
086c0007 +0xa0b:  mov    0xc(%ebp),%eax
086c000a +0xa0e:  mov    %eax,(%esp)
086c000d +0xa11:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086c0012 +0xa16:  mov    %eax,%ebx
086c0014 +0xa18:  movl   $0x5,0xc(%esp)
086c001c +0xa20:  movl   $0xaed,0x8(%esp)
086c0024 +0xa28:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086c002c +0xa30:  lea    -0x48(%ebp),%eax
086c002f +0xa33:  mov    %eax,(%esp)
086c0032 +0xa36:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c0037 +0xa3b:  mov    0x1c(%ebp),%eax
086c003a +0xa3e:  mov    %eax,0xc(%esp)
086c003e +0xa42:  mov    %ebx,0x8(%esp)
086c0042 +0xa46:  movl   $"CParty::drop_item , delete_item failed 4, User ch=%d , %d",0x4(%esp)
086c004a +0xa4e:  lea    -0x48(%ebp),%eax
086c004d +0xa51:  mov    %eax,(%esp)
086c0050 +0xa54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c0055 +0xa59:  mov    $0x11,%ebx
086c005a +0xa5e:  jmp    086c03f6 <+0xdfa>
086c005f +0xa63:  mov    -0x8c(%ebp),%eax
086c0065 +0xa69:  mov    %eax,%ebx
086c0067 +0xa6b:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086c006c +0xa70:  mov    %ebx,0xc(%esp)
086c0070 +0xa74:  mov    0xc(%ebp),%edx
086c0073 +0xa77:  mov    %edx,0x8(%esp)
086c0077 +0xa7b:  movl   $0x16,0x4(%esp)
086c007f +0xa83:  mov    %eax,(%esp)
086c0082 +0xa86:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086c0087 +0xa8b:  jmp    086c008a <+0xa8e>
086c0089 +0xa8d:  nop
086c008a +0xa8e:  movzbl -0xd4(%ebp),%eax
086c0091 +0xa95:  cmp    $0x1,%al
086c0093 +0xa97:  je     086c011d <+0xb21>
086c0099 +0xa9d:  mov    -0x11a(%ebp),%eax
086c009f +0xaa3:  test   %eax,%eax
086c00a1 +0xaa5:  je     086c00c2 <+0xac6>
086c00a3 +0xaa7:  lea    -0x12c(%ebp),%eax
086c00a9 +0xaad:  add    $0x10,%eax
086c00ac +0xab0:  mov    %eax,(%esp)
086c00af +0xab3:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086c00b4 +0xab8:  cmp    $0x7d0,%eax
086c00b9 +0xabd:  jle    086c00c2 <+0xac6>
086c00bb +0xabf:  mov    $0x1,%eax
086c00c0 +0xac4:  jmp    086c00c7 <+0xacb>
086c00c2 +0xac6:  mov    $0x0,%eax
086c00c7 +0xacb:  test   %al,%al
086c00c9 +0xacd:  je     086c011d <+0xb21>
086c00cb +0xacf:  mov    -0x115(%ebp),%esi
086c00d1 +0xad5:  mov    -0x11a(%ebp),%ebx
086c00d7 +0xadb:  movl   $0x4,0xc(%esp)
086c00df +0xae3:  movl   $0xb00,0x8(%esp)
086c00e7 +0xaeb:  movl   $&_ZZN7WarRoom14HandleItemDropEP5CUseriiciiE19__PRETTY_FUNCTION__,0x4(%esp)
086c00ef +0xaf3:  lea    -0x38(%ebp),%eax
086c00f2 +0xaf6:  mov    %eax,(%esp)
086c00f5 +0xaf9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c00fa +0xafe:  mov    %esi,0x10(%esp)
086c00fe +0xb02:  movl   $0x7d0,0xc(%esp)
086c0106 +0xb0a:  mov    %ebx,0x8(%esp)
086c010a +0xb0e:  movl   $"war room drop item(%d) stack size over %d add_info(%d)",0x4(%esp)
086c0112 +0xb16:  lea    -0x38(%ebp),%eax
086c0115 +0xb19:  mov    %eax,(%esp)
086c0118 +0xb1c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c011d +0xb21:  mov    0x8(%ebp),%eax
086c0120 +0xb24:  add    $0x34,%eax
086c0123 +0xb27:  mov    %eax,-0x18c(%ebp)
086c0129 +0xb2d:  lea    0x4(%esp),%edx
086c012d +0xb31:  lea    -0x12c(%ebp),%ebx
086c0133 +0xb37:  mov    $0x15,%eax
086c0138 +0xb3c:  mov    %edx,%edi
086c013a +0xb3e:  mov    %ebx,%esi
086c013c +0xb40:  mov    %eax,%ecx
086c013e +0xb42:  rep movsl %ds:(%esi),%es:(%edi)
086c0140 +0xb44:  mov    -0x18c(%ebp),%eax
086c0146 +0xb4a:  mov    %eax,(%esp)
086c0149 +0xb4d:  call   086ba190 <_ZN8WarField8DropItemE8map_item>  ; WarField::DropItem(map_item)
086c014e +0xb52:  mov    %eax,-0x28(%ebp)
086c0151 +0xb55:  cmpl   $0xffffffff,-0x28(%ebp)
086c0155 +0xb59:  jne    086c0161 <+0xb65>
086c0157 +0xb5b:  mov    $0x16,%ebx
086c015c +0xb60:  jmp    086c03f6 <+0xdfa>
086c0161 +0xb65:  lea    -0x98(%ebp),%eax
086c0167 +0xb6b:  mov    %eax,(%esp)
086c016a +0xb6e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c016f +0xb73:  movl   $0x28,0x8(%esp)
086c0177 +0xb7b:  movl   $0x0,0x4(%esp)
086c017f +0xb83:  lea    -0x98(%ebp),%eax
086c0185 +0xb89:  mov    %eax,(%esp)
086c0188 +0xb8c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c018d +0xb91:  mov    0xc(%ebp),%eax
086c0190 +0xb94:  mov    %eax,(%esp)
086c0193 +0xb97:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c0198 +0xb9c:  movzwl %ax,%eax
086c019b +0xb9f:  mov    %eax,0x4(%esp)
086c019f +0xba3:  lea    -0x98(%ebp),%eax
086c01a5 +0xba9:  mov    %eax,(%esp)
086c01a8 +0xbac:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c01ad +0xbb1:  mov    0x10(%ebp),%eax
086c01b0 +0xbb4:  mov    %eax,0x4(%esp)
086c01b4 +0xbb8:  lea    -0x98(%ebp),%eax
086c01ba +0xbbe:  mov    %eax,(%esp)
086c01bd +0xbc1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c01c2 +0xbc6:  mov    0x14(%ebp),%eax
086c01c5 +0xbc9:  mov    %eax,0x4(%esp)
086c01c9 +0xbcd:  lea    -0x98(%ebp),%eax
086c01cf +0xbd3:  mov    %eax,(%esp)
086c01d2 +0xbd6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c01d7 +0xbdb:  mov    -0x28(%ebp),%eax
086c01da +0xbde:  mov    %eax,0x4(%esp)
086c01de +0xbe2:  lea    -0x98(%ebp),%eax
086c01e4 +0xbe8:  mov    %eax,(%esp)
086c01e7 +0xbeb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c01ec +0xbf0:  mov    -0x11a(%ebp),%eax
086c01f2 +0xbf6:  mov    %eax,0x4(%esp)
086c01f6 +0xbfa:  lea    -0x98(%ebp),%eax
086c01fc +0xc00:  mov    %eax,(%esp)
086c01ff +0xc03:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c0204 +0xc08:  lea    -0x12c(%ebp),%eax
086c020a +0xc0e:  add    $0x10,%eax
086c020d +0xc11:  mov    %eax,(%esp)
086c0210 +0xc14:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
086c0215 +0xc19:  movzbl %al,%eax
086c0218 +0xc1c:  mov    %eax,0x4(%esp)
086c021c +0xc20:  lea    -0x98(%ebp),%eax
086c0222 +0xc26:  mov    %eax,(%esp)
086c0225 +0xc29:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c022a +0xc2e:  lea    -0x12c(%ebp),%eax
086c0230 +0xc34:  add    $0x10,%eax
086c0233 +0xc37:  mov    %eax,(%esp)
086c0236 +0xc3a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086c023b +0xc3f:  mov    %eax,0x4(%esp)
086c023f +0xc43:  lea    -0x98(%ebp),%eax
086c0245 +0xc49:  mov    %eax,(%esp)
086c0248 +0xc4c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c024d +0xc51:  movzwl -0x111(%ebp),%eax
086c0254 +0xc58:  movzwl %ax,%eax
086c0257 +0xc5b:  mov    %eax,0x4(%esp)
086c025b +0xc5f:  lea    -0x98(%ebp),%eax
086c0261 +0xc65:  mov    %eax,(%esp)
086c0264 +0xc68:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c0269 +0xc6d:  mov    -0x10f(%ebp),%eax
086c026f +0xc73:  mov    %eax,0x4(%esp)
086c0273 +0xc77:  lea    -0x98(%ebp),%eax
086c0279 +0xc7d:  mov    %eax,(%esp)
086c027c +0xc80:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c0281 +0xc85:  lea    -0x12c(%ebp),%eax
086c0287 +0xc8b:  add    $0x21,%eax
086c028a +0xc8e:  mov    %eax,(%esp)
086c028d +0xc91:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
086c0292 +0xc96:  movzbl %al,%eax
086c0295 +0xc99:  mov    %eax,0x4(%esp)
086c0299 +0xc9d:  lea    -0x98(%ebp),%eax
086c029f +0xca3:  mov    %eax,(%esp)
086c02a2 +0xca6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c02a7 +0xcab:  lea    -0x12c(%ebp),%eax
086c02ad +0xcb1:  add    $0x21,%eax
086c02b0 +0xcb4:  mov    %eax,(%esp)
086c02b3 +0xcb7:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
086c02b8 +0xcbc:  movzwl %ax,%eax
086c02bb +0xcbf:  mov    %eax,0x4(%esp)
086c02bf +0xcc3:  lea    -0x98(%ebp),%eax
086c02c5 +0xcc9:  mov    %eax,(%esp)
086c02c8 +0xccc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c02cd +0xcd1:  lea    -0x12c(%ebp),%eax
086c02d3 +0xcd7:  add    $0x10,%eax
086c02d6 +0xcda:  mov    %eax,0x4(%esp)
086c02da +0xcde:  lea    -0x98(%ebp),%eax
086c02e0 +0xce4:  mov    %eax,(%esp)
086c02e3 +0xce7:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
086c02e8 +0xcec:  movl   $0x1,0x4(%esp)
086c02f0 +0xcf4:  lea    -0x98(%ebp),%eax
086c02f6 +0xcfa:  mov    %eax,(%esp)
086c02f9 +0xcfd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c02fe +0xd02:  lea    -0x98(%ebp),%eax
086c0304 +0xd08:  mov    %eax,0x4(%esp)
086c0308 +0xd0c:  mov    0x8(%ebp),%eax
086c030b +0xd0f:  mov    %eax,(%esp)
086c030e +0xd12:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086c0313 +0xd17:  lea    -0x98(%ebp),%eax
086c0319 +0xd1d:  mov    %eax,(%esp)
086c031c +0xd20:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c0321 +0xd25:  movl   $0x32,0x8(%esp)
086c0329 +0xd2d:  movl   $0x1,0x4(%esp)
086c0331 +0xd35:  lea    -0x98(%ebp),%eax
086c0337 +0xd3b:  mov    %eax,(%esp)
086c033a +0xd3e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c033f +0xd43:  movl   $0x1,0x4(%esp)
086c0347 +0xd4b:  lea    -0x98(%ebp),%eax
086c034d +0xd51:  mov    %eax,(%esp)
086c0350 +0xd54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c0355 +0xd59:  movsbl -0x13c(%ebp),%eax
086c035c +0xd60:  mov    %eax,0x4(%esp)
086c0360 +0xd64:  lea    -0x98(%ebp),%eax
086c0366 +0xd6a:  mov    %eax,(%esp)
086c0369 +0xd6d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c036e +0xd72:  mov    0x1c(%ebp),%eax
086c0371 +0xd75:  mov    %eax,0x4(%esp)
086c0375 +0xd79:  lea    -0x98(%ebp),%eax
086c037b +0xd7f:  mov    %eax,(%esp)
086c037e +0xd82:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c0383 +0xd87:  mov    0x20(%ebp),%eax
086c0386 +0xd8a:  mov    %eax,0x4(%esp)
086c038a +0xd8e:  lea    -0x98(%ebp),%eax
086c0390 +0xd94:  mov    %eax,(%esp)
086c0393 +0xd97:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c0398 +0xd9c:  movl   $0x1,0x4(%esp)
086c03a0 +0xda4:  lea    -0x98(%ebp),%eax
086c03a6 +0xdaa:  mov    %eax,(%esp)
086c03a9 +0xdad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c03ae +0xdb2:  lea    -0x98(%ebp),%eax
086c03b4 +0xdb8:  mov    %eax,0x4(%esp)
086c03b8 +0xdbc:  mov    0xc(%ebp),%eax
086c03bb +0xdbf:  mov    %eax,(%esp)
086c03be +0xdc2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c03c3 +0xdc7:  mov    $0x0,%ebx
086c03c8 +0xdcc:  lea    -0x98(%ebp),%eax
086c03ce +0xdd2:  mov    %eax,(%esp)
086c03d1 +0xdd5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c03d6 +0xdda:  jmp    086c03f6 <+0xdfa>
086c03d8 +0xddc:  mov    %edx,%ebx
086c03da +0xdde:  mov    %eax,%esi
086c03dc +0xde0:  lea    -0x98(%ebp),%eax
086c03e2 +0xde6:  mov    %eax,(%esp)
086c03e5 +0xde9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c03ea +0xdee:  mov    %esi,%eax
086c03ec +0xdf0:  mov    %ebx,%edx
086c03ee +0xdf2:  mov    %eax,(%esp)
086c03f1 +0xdf5:  call   08ae3750 <_Unwind_Resume>
086c03f6 +0xdfa:  mov    %ebx,%eax
086c03f8 +0xdfc:  lea    -0xc(%ebp),%esp
086c03fb +0xdff:  add    $0x0,%esp
086c03fe +0xe02:  pop    %ebx
086c03ff +0xe03:  pop    %esi
086c0400 +0xe04:  pop    %edi
086c0401 +0xe05:  pop    %ebp
086c0402 +0xe06:  ret
086c0403 +0xe07:  nop
```

## 反编译 C

```c
// WarRoom::HandleItemDrop @ 0x86bf5fc

/* WarRoom::HandleItemDrop(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WarRoom::HandleItemDrop
          (WarRoom *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,int param_6
          )

{
  bool bVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar6;
  CValueStatistic *pCVar7;
  CCargo *pCVar8;
  undefined4 uVar9;
  map_item *pmVar10;
  undefined4 *puVar11;
  byte bVar12;
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
  
  bVar12 = 0;
  local_140 = param_4;
  iVar4 = GetState(this);
  if ((iVar4 == 3) || (iVar4 = GetState(this), iVar4 == 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar9 = 0x13;
  }
  else if (param_6 < 0) {
    CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar5 = CUser::get_acc_id(param_1);
    NumberToString(uVar5,0);
    LogManager::logFormat
              (1,"WarRoom.cpp","int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xa1a
               ,"user - accid[%s] %s : count<0");
    uVar9 = 0x11;
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
      else if (local_140 == '\x03') {
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_18c,iVar4);
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
      else if (local_140 == '\0') {
        if (param_5 == 0) {
          local_130[0] = (map_item)0x0;
          local_11f = '\x02';
          local_11e = 0;
          Inven_Item::set_add_info(&local_120,param_6);
          local_115 = 0;
          Inven_Item::ResetItemAttr(&local_120);
        }
        else {
          iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_18c,iVar4);
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
      local_90 = 0;
      if (CONCAT22(uStack_d5,uStack_d7) != 0) {
        iVar4 = CONCAT22(uStack_d5,uStack_d7);
        this_00 = (CDataManager *)G_CDataManager();
        local_28 = (CItem *)CDataManager::find_item(this_00,iVar4);
        if (local_28 == (CItem *)0x0) {
          LogManager::logFormat
                    (1,"WarRoom.cpp","int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)"
                     ,0xa4c,"[WarRoom::HandleDropItem] Null Item %d");
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
        pCVar8 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
        cVar2 = CCargo::delete_item(pCVar8);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_6c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xabf,5
                            );
          cMyTrace::operator()
                    (local_6c,"CParty::drop_item , delete_item failed 2, User ch=%d , %d %d");
          return 0x11;
        }
      }
      else if (local_140 < '\x03') {
        if (local_140 == '\0') {
          if (param_5 == 0) {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::use_money(pCVar6);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_8c,
                                 "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",
                                 0xa9f,5);
              cMyTrace::operator()
                        (local_8c,"CParty::drop_item , use_money failed, User ch=%d , %d %d");
              return 0x11;
            }
            pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar7);
          }
          else {
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar6);
            if (cVar2 != '\x01') {
              CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_7c,
                                 "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",
                                 0xaae,5);
              cMyTrace::operator()
                        (local_7c,"CParty::drop_item , delete_item failed, User ch=%d , %d %d");
              return 0x11;
            }
            pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar7);
          }
        }
      }
      else if (local_140 == '\x03') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_5c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xaca,5
                            );
          cMyTrace::operator()(local_5c,"CParty::drop_item , delete_item failed 3, User ch=%d , %d")
          ;
          return 0x11;
        }
        pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar7);
      }
      else if (local_140 == '\a') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6);
        if (cVar2 != '\x01') {
          CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_4c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xaed,5
                            );
          cMyTrace::operator()(local_4c,"CParty::drop_item , delete_item failed 4, User ch=%d , %d")
          ;
          return 0x11;
        }
        pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar7);
      }
      if (cStack_d8 != '\x01') {
        if ((local_11e == 0) || (iVar4 = Inven_Item::get_add_info(&local_120), iVar4 < 0x7d1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          cMyTrace::cMyTrace(local_3c,
                             "int WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)",0xb00,4
                            );
          cMyTrace::operator()(local_3c,"war room drop item(%d) stack size over %d add_info(%d)");
        }
      }
      pmVar10 = local_130;
      puVar11 = (undefined4 *)&stack0xfffffe08;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *(undefined4 *)pmVar10;
        pmVar10 = pmVar10 + ((uint)bVar12 * -2 + 1) * 4;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      local_2c = WarField::DropItem(this + 0x34);
      if (local_2c == -1) {
        uVar9 = 0x16;
      }
      else {
        PacketGuard::PacketGuard(local_9c);
                    /* try { // try from 086c0188 to 086c03c2 has its CatchHandler @ 086c03d8 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,0,0x28);
        uVar5 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar5 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_11e);
        uVar5 = Inven_Item::GetItemAttr(&local_120);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar5 & 0xff);
        iVar4 = Inven_Item::get_add_info(&local_120);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,iVar4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,(uint)local_115);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,local_113);
        uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,uVar5 & 0xff);
        uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)&local_10f);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,uVar5 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_9c,&local_120);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        SendToRoom(this,local_9c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_9c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_9c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_9c,(int)local_140);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_9c,param_5);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_9c,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_9c,true);
        CUser::Send(param_1,local_9c);
        uVar9 = 0;
        PacketGuard::~PacketGuard(local_9c);
      }
    }
    else {
      uVar9 = 0x13;
    }
  }
  return uVar9;
}
```
