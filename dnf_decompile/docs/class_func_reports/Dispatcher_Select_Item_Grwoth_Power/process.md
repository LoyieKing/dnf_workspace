# process

`_ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_Item_Grwoth_Power` | `0x081db60c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081db60c  _ZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081db60c, 0x081dbc65]
081db60c +0x000:  push   %ebp
081db60d +0x001:  mov    %esp,%ebp
081db60f +0x003:  push   %edi
081db610 +0x004:  push   %esi
081db611 +0x005:  push   %ebx
081db612 +0x006:  sub    $0x1ec,%esp
081db618 +0x00c:  mov    0x14(%ebp),%eax
081db61b +0x00f:  mov    %eax,0xc(%esp)
081db61f +0x013:  mov    0x10(%ebp),%eax
081db622 +0x016:  mov    %eax,0x8(%esp)
081db626 +0x01a:  mov    0xc(%ebp),%eax
081db629 +0x01d:  mov    %eax,0x4(%esp)
081db62d +0x021:  mov    0x8(%ebp),%eax
081db630 +0x024:  mov    %eax,(%esp)
081db633 +0x027:  call   081db580 <_ZN35Dispatcher_Select_Item_Grwoth_Power11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Select_Item_Grwoth_Power::check_error(CUser*, MSG_BASE&, ParamBase&)
081db638 +0x02c:  mov    %eax,-0x30(%ebp)
081db63b +0x02f:  cmpl   $0x0,-0x30(%ebp)
081db63f +0x033:  jle    081db649 <+0x3d>
081db641 +0x035:  mov    -0x30(%ebp),%ebx
081db644 +0x038:  jmp    081dbc59 <+0x64d>
081db649 +0x03d:  cmpl   $0x0,-0x30(%ebp)
081db64d +0x041:  jns    081db659 <+0x4d>
081db64f +0x043:  mov    $0xffffffff,%ebx
081db654 +0x048:  jmp    081dbc59 <+0x64d>
081db659 +0x04d:  mov    0x10(%ebp),%eax
081db65c +0x050:  mov    %eax,-0x2c(%ebp)
081db65f +0x053:  mov    0x14(%ebp),%eax
081db662 +0x056:  mov    %eax,-0x28(%ebp)
081db665 +0x059:  movl   $0x0,-0x60(%ebp)
081db66c +0x060:  lea    -0x64(%ebp),%eax
081db66f +0x063:  mov    %eax,(%esp)
081db672 +0x066:  call   082370e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc78e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc78e
081db677 +0x06b:  mov    0xc(%ebp),%eax
081db67a +0x06e:  mov    %eax,(%esp)
081db67d +0x071:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081db682 +0x076:  mov    %eax,%ebx
081db684 +0x078:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db689 +0x07d:  lea    0x8710(%eax),%edx
081db68f +0x083:  lea    -0x67(%ebp),%eax
081db692 +0x086:  mov    %ebx,0x8(%esp)
081db696 +0x08a:  mov    %edx,0x4(%esp)
081db69a +0x08e:  mov    %eax,(%esp)
081db69d +0x091:  call   0822b07e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x728>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x728
081db6a2 +0x096:  sub    $0x4,%esp
081db6a5 +0x099:  movzbl -0x67(%ebp),%eax
081db6a9 +0x09d:  movzbl %al,%ebx
081db6ac +0x0a0:  mov    0xc(%ebp),%eax
081db6af +0x0a3:  mov    %eax,(%esp)
081db6b2 +0x0a6:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081db6b7 +0x0ab:  mov    %ebx,0x4(%esp)
081db6bb +0x0af:  mov    %eax,(%esp)
081db6be +0x0b2:  call   088945ad <_Z30makeFairPVPEquipmentPackageKeyii>  ; makeFairPVPEquipmentPackageKey(int, int)
081db6c3 +0x0b7:  mov    %eax,-0x60(%ebp)
081db6c6 +0x0ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db6cb +0x0bf:  lea    0x8728(%eax),%ecx
081db6d1 +0x0c5:  lea    -0x58(%ebp),%eax
081db6d4 +0x0c8:  lea    -0x60(%ebp),%edx
081db6d7 +0x0cb:  mov    %edx,0x8(%esp)
081db6db +0x0cf:  mov    %ecx,0x4(%esp)
081db6df +0x0d3:  mov    %eax,(%esp)
081db6e2 +0x0d6:  call   082370f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc79c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc79c
081db6e7 +0x0db:  sub    $0x4,%esp
081db6ea +0x0de:  lea    -0x58(%ebp),%eax
081db6ed +0x0e1:  mov    %eax,0x4(%esp)
081db6f1 +0x0e5:  lea    -0x5c(%ebp),%eax
081db6f4 +0x0e8:  mov    %eax,(%esp)
081db6f7 +0x0eb:  call   0823711e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c8
081db6fc +0x0f0:  mov    -0x5c(%ebp),%eax
081db6ff +0x0f3:  mov    %eax,-0x64(%ebp)
081db702 +0x0f6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db707 +0x0fb:  lea    0x8728(%eax),%edx
081db70d +0x101:  lea    -0x50(%ebp),%eax
081db710 +0x104:  mov    %edx,0x4(%esp)
081db714 +0x108:  mov    %eax,(%esp)
081db717 +0x10b:  call   0823712e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7d8
081db71c +0x110:  sub    $0x4,%esp
081db71f +0x113:  lea    -0x50(%ebp),%eax
081db722 +0x116:  mov    %eax,0x4(%esp)
081db726 +0x11a:  lea    -0x54(%ebp),%eax
081db729 +0x11d:  mov    %eax,(%esp)
081db72c +0x120:  call   0823711e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c8
081db731 +0x125:  lea    -0x54(%ebp),%eax
081db734 +0x128:  mov    %eax,0x4(%esp)
081db738 +0x12c:  lea    -0x64(%ebp),%eax
081db73b +0x12f:  mov    %eax,(%esp)
081db73e +0x132:  call   08237154 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7fe
081db743 +0x137:  test   %al,%al
081db745 +0x139:  je     081db751 <+0x145>
081db747 +0x13b:  mov    $0x0,%ebx
081db74c +0x140:  jmp    081dbc59 <+0x64d>
081db751 +0x145:  movl   $0x0,-0x24(%ebp)
081db758 +0x14c:  lea    -0x74(%ebp),%eax
081db75b +0x14f:  mov    %eax,(%esp)
081db75e +0x152:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
081db763 +0x157:  lea    -0x64(%ebp),%eax
081db766 +0x15a:  mov    %eax,(%esp)
081db769 +0x15d:  call   08237168 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc812>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc812
081db76e +0x162:  lea    0x4(%eax),%edx
081db771 +0x165:  lea    -0x78(%ebp),%eax
081db774 +0x168:  mov    %edx,0x4(%esp)
081db778 +0x16c:  mov    %eax,(%esp)
081db77b +0x16f:  call   08237176 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc820>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc820
081db780 +0x174:  sub    $0x4,%esp
081db783 +0x177:  jmp    081db9b4 <+0x3a8>
081db788 +0x17c:  lea    -0x78(%ebp),%eax
081db78b +0x17f:  mov    %eax,(%esp)
081db78e +0x182:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
081db793 +0x187:  mov    %eax,(%esp)
081db796 +0x18a:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
081db79b +0x18f:  mov    -0x24(%ebp),%edx
081db79e +0x192:  mov    -0x2c(%ebp),%ecx
081db7a1 +0x195:  movzbl 0xe(%ecx,%edx,1),%edx
081db7a6 +0x19a:  movzbl %dl,%edx
081db7a9 +0x19d:  cmp    %edx,%eax
081db7ab +0x19f:  setbe  %al
081db7ae +0x1a2:  test   %al,%al
081db7b0 +0x1a4:  je     081db892 <+0x286>
081db7b6 +0x1aa:  mov    -0x24(%ebp),%eax
081db7b9 +0x1ad:  mov    -0x2c(%ebp),%edx
081db7bc +0x1b0:  movzbl 0xe(%edx,%eax,1),%eax
081db7c1 +0x1b5:  movzbl %al,%eax
081db7c4 +0x1b8:  mov    %eax,-0x1a0(%ebp)
081db7ca +0x1be:  lea    -0x78(%ebp),%eax
081db7cd +0x1c1:  mov    %eax,(%esp)
081db7d0 +0x1c4:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
081db7d5 +0x1c9:  mov    %eax,(%esp)
081db7d8 +0x1cc:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
081db7dd +0x1d1:  mov    %eax,-0x19c(%ebp)
081db7e3 +0x1d7:  mov    0xc(%ebp),%eax
081db7e6 +0x1da:  mov    %eax,(%esp)
081db7e9 +0x1dd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081db7ee +0x1e2:  mov    %eax,%edi
081db7f0 +0x1e4:  mov    0xc(%ebp),%eax
081db7f3 +0x1e7:  mov    %eax,(%esp)
081db7f6 +0x1ea:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081db7fb +0x1ef:  mov    %eax,%esi
081db7fd +0x1f1:  mov    0xc(%ebp),%eax
081db800 +0x1f4:  mov    %eax,(%esp)
081db803 +0x1f7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081db808 +0x1fc:  mov    %eax,%ebx
081db80a +0x1fe:  movl   $0x0,0xc(%esp)
081db812 +0x206:  movl   $0x4a8b,0x8(%esp)
081db81a +0x20e:  movl   $&_ZZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081db822 +0x216:  lea    -0x48(%ebp),%eax
081db825 +0x219:  mov    %eax,(%esp)
081db828 +0x21c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081db82d +0x221:  mov    -0x1a0(%ebp),%eax
081db833 +0x227:  mov    %eax,0x18(%esp)
081db837 +0x22b:  mov    -0x19c(%ebp),%eax
081db83d +0x231:  mov    %eax,0x14(%esp)
081db841 +0x235:  mov    %edi,0x10(%esp)
081db845 +0x239:  mov    %esi,0xc(%esp)
081db849 +0x23d:  mov    %ebx,0x8(%esp)
081db84d +0x241:  movl   $"[GrowthPower](%d)(j:%d)(l:%d)(s:%d)(p:%d)",0x4(%esp)
081db855 +0x249:  lea    -0x48(%ebp),%eax
081db858 +0x24c:  mov    %eax,(%esp)
081db85b +0x24f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081db860 +0x254:  mov    0xc(%ebp),%eax
081db863 +0x257:  mov    %eax,(%esp)
081db866 +0x25a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081db86b +0x25f:  mov    %eax,0xc(%esp)
081db86f +0x263:  movl   $0x0,0x8(%esp)
081db877 +0x26b:  movl   $&_ZZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081db87f +0x273:  movl   $0x4a8c,(%esp)
081db886 +0x27a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081db88b +0x27f:  mov    %eax,%ebx
081db88d +0x281:  jmp    081dbc4e <+0x642>
081db892 +0x286:  cmpl   $0x4,-0x24(%ebp)
081db896 +0x28a:  jle    081db8ca <+0x2be>
081db898 +0x28c:  mov    0xc(%ebp),%eax
081db89b +0x28f:  mov    %eax,(%esp)
081db89e +0x292:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081db8a3 +0x297:  mov    %eax,0xc(%esp)
081db8a7 +0x29b:  movl   $0x0,0x8(%esp)
081db8af +0x2a3:  movl   $&_ZZN35Dispatcher_Select_Item_Grwoth_Power7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081db8b7 +0x2ab:  movl   $0x4a8f,(%esp)
081db8be +0x2b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081db8c3 +0x2b7:  mov    %eax,%ebx
081db8c5 +0x2b9:  jmp    081dbc4e <+0x642>
081db8ca +0x2be:  lea    -0x191(%ebp),%eax
081db8d0 +0x2c4:  mov    %eax,(%esp)
081db8d3 +0x2c7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081db8d8 +0x2cc:  mov    -0x24(%ebp),%eax
081db8db +0x2cf:  mov    -0x2c(%ebp),%edx
081db8de +0x2d2:  movzbl 0xe(%edx,%eax,1),%eax
081db8e3 +0x2d7:  movzbl %al,%ebx
081db8e6 +0x2da:  lea    -0x78(%ebp),%eax
081db8e9 +0x2dd:  mov    %eax,(%esp)
081db8ec +0x2e0:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
081db8f1 +0x2e5:  mov    %ebx,0x4(%esp)
081db8f5 +0x2e9:  mov    %eax,(%esp)
081db8f8 +0x2ec:  call   08237236 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8e0
081db8fd +0x2f1:  mov    (%eax),%eax
081db8ff +0x2f3:  mov    %eax,-0x18f(%ebp)
081db905 +0x2f9:  mov    -0x18f(%ebp),%eax
081db90b +0x2ff:  mov    %eax,%ebx
081db90d +0x301:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db912 +0x306:  mov    %ebx,0x4(%esp)
081db916 +0x30a:  mov    %eax,(%esp)
081db919 +0x30d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081db91e +0x312:  mov    %eax,-0x1c(%ebp)
081db921 +0x315:  cmpl   $0x0,-0x1c(%ebp)
081db925 +0x319:  jne    081db93b <+0x32f>
081db927 +0x31b:  mov    -0x28(%ebp),%eax
081db92a +0x31e:  movl   $0x11,0x4(%eax)
081db931 +0x325:  mov    $0x0,%ebx
081db936 +0x32a:  jmp    081dbc4e <+0x642>
081db93b +0x32f:  mov    -0x1c(%ebp),%eax
081db93e +0x332:  mov    (%eax),%eax
081db940 +0x334:  add    $0x8,%eax
081db943 +0x337:  mov    (%eax),%edx
081db945 +0x339:  lea    -0x191(%ebp),%eax
081db94b +0x33f:  mov    %eax,0x4(%esp)
081db94f +0x343:  mov    -0x1c(%ebp),%eax
081db952 +0x346:  mov    %eax,(%esp)
081db955 +0x349:  call   *%edx
081db957 +0x34b:  movzbl -0x190(%ebp),%eax
081db95e +0x352:  cmp    $0x1,%al
081db960 +0x354:  je     081db990 <+0x384>
081db962 +0x356:  mov    -0x24(%ebp),%eax
081db965 +0x359:  mov    -0x2c(%ebp),%edx
081db968 +0x35c:  movzbl 0xe(%edx,%eax,1),%eax
081db96d +0x361:  movzbl %al,%ebx
081db970 +0x364:  lea    -0x78(%ebp),%eax
081db973 +0x367:  mov    %eax,(%esp)
081db976 +0x36a:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
081db97b +0x36f:  mov    %ebx,0x4(%esp)
081db97f +0x373:  mov    %eax,(%esp)
081db982 +0x376:  call   08237236 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8e0
081db987 +0x37b:  mov    0x4(%eax),%eax
081db98a +0x37e:  mov    %eax,-0x18a(%ebp)
081db990 +0x384:  lea    -0x191(%ebp),%eax
081db996 +0x38a:  mov    %eax,0x4(%esp)
081db99a +0x38e:  lea    -0x74(%ebp),%eax
081db99d +0x391:  mov    %eax,(%esp)
081db9a0 +0x394:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
081db9a5 +0x399:  addl   $0x1,-0x24(%ebp)
081db9a9 +0x39d:  lea    -0x78(%ebp),%eax
081db9ac +0x3a0:  mov    %eax,(%esp)
081db9af +0x3a3:  call   082371fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8a4
081db9b4 +0x3a8:  lea    -0x64(%ebp),%eax
081db9b7 +0x3ab:  mov    %eax,(%esp)
081db9ba +0x3ae:  call   08237168 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc812>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc812
081db9bf +0x3b3:  lea    0x4(%eax),%edx
081db9c2 +0x3b6:  lea    -0x4c(%ebp),%eax
081db9c5 +0x3b9:  mov    %edx,0x4(%esp)
081db9c9 +0x3bd:  mov    %eax,(%esp)
081db9cc +0x3c0:  call   082371a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc84c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc84c
081db9d1 +0x3c5:  sub    $0x4,%esp
081db9d4 +0x3c8:  lea    -0x4c(%ebp),%eax
081db9d7 +0x3cb:  mov    %eax,0x4(%esp)
081db9db +0x3cf:  lea    -0x78(%ebp),%eax
081db9de +0x3d2:  mov    %eax,(%esp)
081db9e1 +0x3d5:  call   082371ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc878>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc878
081db9e6 +0x3da:  test   %al,%al
081db9e8 +0x3dc:  jne    081db788 <+0x17c>
081db9ee +0x3e2:  movl   $0x0,-0x20(%ebp)
081db9f5 +0x3e9:  lea    -0x38(%ebp),%eax
081db9f8 +0x3ec:  lea    -0x74(%ebp),%edx
081db9fb +0x3ef:  mov    %edx,0x4(%esp)
081db9ff +0x3f3:  mov    %eax,(%esp)
081dba02 +0x3f6:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
081dba07 +0x3fb:  sub    $0x4,%esp
081dba0a +0x3fe:  lea    -0x38(%ebp),%eax
081dba0d +0x401:  mov    %eax,0x4(%esp)
081dba11 +0x405:  lea    -0x7c(%ebp),%eax
081dba14 +0x408:  mov    %eax,(%esp)
081dba17 +0x40b:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
081dba1c +0x410:  jmp    081dbbfd <+0x5f1>
081dba21 +0x415:  lea    -0x7c(%ebp),%eax
081dba24 +0x418:  mov    %eax,(%esp)
081dba27 +0x41b:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
081dba2c +0x420:  mov    %eax,%ebx
081dba2e +0x422:  mov    0xc(%ebp),%eax
081dba31 +0x425:  mov    %eax,(%esp)
081dba34 +0x428:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081dba39 +0x42d:  movl   $0x1,0x4c(%esp)
081dba41 +0x435:  movl   $0x1,0x48(%esp)
081dba49 +0x43d:  movl   $0x8,0x44(%esp)
081dba51 +0x445:  mov    (%ebx),%edx
081dba53 +0x447:  mov    %edx,0x4(%esp)
081dba57 +0x44b:  mov    0x4(%ebx),%edx
081dba5a +0x44e:  mov    %edx,0x8(%esp)
081dba5e +0x452:  mov    0x8(%ebx),%edx
081dba61 +0x455:  mov    %edx,0xc(%esp)
081dba65 +0x459:  mov    0xc(%ebx),%edx
081dba68 +0x45c:  mov    %edx,0x10(%esp)
081dba6c +0x460:  mov    0x10(%ebx),%edx
081dba6f +0x463:  mov    %edx,0x14(%esp)
081dba73 +0x467:  mov    0x14(%ebx),%edx
081dba76 +0x46a:  mov    %edx,0x18(%esp)
081dba7a +0x46e:  mov    0x18(%ebx),%edx
081dba7d +0x471:  mov    %edx,0x1c(%esp)
081dba81 +0x475:  mov    0x1c(%ebx),%edx
081dba84 +0x478:  mov    %edx,0x20(%esp)
081dba88 +0x47c:  mov    0x20(%ebx),%edx
081dba8b +0x47f:  mov    %edx,0x24(%esp)
081dba8f +0x483:  mov    0x24(%ebx),%edx
081dba92 +0x486:  mov    %edx,0x28(%esp)
081dba96 +0x48a:  mov    0x28(%ebx),%edx
081dba99 +0x48d:  mov    %edx,0x2c(%esp)
081dba9d +0x491:  mov    0x2c(%ebx),%edx
081dbaa0 +0x494:  mov    %edx,0x30(%esp)
081dbaa4 +0x498:  mov    0x30(%ebx),%edx
081dbaa7 +0x49b:  mov    %edx,0x34(%esp)
081dbaab +0x49f:  mov    0x34(%ebx),%edx
081dbaae +0x4a2:  mov    %edx,0x38(%esp)
081dbab2 +0x4a6:  mov    0x38(%ebx),%edx
081dbab5 +0x4a9:  mov    %edx,0x3c(%esp)
081dbab9 +0x4ad:  movzbl 0x3c(%ebx),%edx
081dbabd +0x4b1:  mov    %dl,0x40(%esp)
081dbac1 +0x4b5:  mov    %eax,(%esp)
081dbac4 +0x4b8:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081dbac9 +0x4bd:  mov    %eax,-0x20(%ebp)
081dbacc +0x4c0:  cmpl   $0x0,-0x20(%ebp)
081dbad0 +0x4c4:  js     081dbaf9 <+0x4ed>
081dbad2 +0x4c6:  mov    -0x20(%ebp),%eax
081dbad5 +0x4c9:  mov    %eax,0xc(%esp)
081dbad9 +0x4cd:  movl   $0x0,0x8(%esp)
081dbae1 +0x4d5:  movl   $0x1,0x4(%esp)
081dbae9 +0x4dd:  mov    0xc(%ebp),%eax
081dbaec +0x4e0:  mov    %eax,(%esp)
081dbaef +0x4e3:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081dbaf4 +0x4e8:  jmp    081dbbf2 <+0x5e6>
081dbaf9 +0x4ed:  movl   $0x0,0xc(%esp)
081dbb01 +0x4f5:  movl   $"game_server_msg_213",0x8(%esp)
081dbb09 +0x4fd:  movl   $0x4,0x4(%esp)
081dbb11 +0x505:  movl   $&g_scriptStringManager_,(%esp)
081dbb18 +0x50c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081dbb1d +0x511:  movl   $0x14,0x8(%esp)
081dbb25 +0x519:  mov    %eax,0x4(%esp)
081dbb29 +0x51d:  lea    -0x91(%ebp),%eax
081dbb2f +0x523:  mov    %eax,(%esp)
081dbb32 +0x526:  call   0807d8d0 <_init+0x1c8>
081dbb37 +0x52b:  movl   $0x0,0xc(%esp)
081dbb3f +0x533:  movl   $"game_server_msg_214",0x8(%esp)
081dbb47 +0x53b:  movl   $0x4,0x4(%esp)
081dbb4f +0x543:  movl   $&g_scriptStringManager_,(%esp)
081dbb56 +0x54a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081dbb5b +0x54f:  movl   $0xff,0x8(%esp)
081dbb63 +0x557:  mov    %eax,0x4(%esp)
081dbb67 +0x55b:  lea    -0x191(%ebp),%eax
081dbb6d +0x561:  mov    %eax,(%esp)
081dbb70 +0x564:  call   0807d8d0 <_init+0x1c8>
081dbb75 +0x569:  mov    0xc(%ebp),%eax
081dbb78 +0x56c:  mov    %eax,(%esp)
081dbb7b +0x56f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081dbb80 +0x574:  mov    %eax,%esi
081dbb82 +0x576:  lea    -0x191(%ebp),%eax
081dbb88 +0x57c:  mov    %eax,(%esp)
081dbb8b +0x57f:  call   0807e3b0 <_init+0xca8>
081dbb90 +0x584:  mov    %eax,%edi
081dbb92 +0x586:  mov    0xc(%ebp),%eax
081dbb95 +0x589:  mov    %eax,(%esp)
081dbb98 +0x58c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081dbb9d +0x591:  mov    %eax,%ebx
081dbb9f +0x593:  lea    -0x7c(%ebp),%eax
081dbba2 +0x596:  mov    %eax,(%esp)
081dbba5 +0x599:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
081dbbaa +0x59e:  movl   $0x0,0x24(%esp)
081dbbb2 +0x5a6:  movl   $0x0,0x20(%esp)
081dbbba +0x5ae:  mov    %esi,0x1c(%esp)
081dbbbe +0x5b2:  movl   $0x0,0x18(%esp)
081dbbc6 +0x5ba:  mov    %edi,0x14(%esp)
081dbbca +0x5be:  lea    -0x191(%ebp),%edx
081dbbd0 +0x5c4:  mov    %edx,0x10(%esp)
081dbbd4 +0x5c8:  mov    %ebx,0xc(%esp)
081dbbd8 +0x5cc:  movl   $0x0,0x8(%esp)
081dbbe0 +0x5d4:  mov    %eax,0x4(%esp)
081dbbe4 +0x5d8:  lea    -0x91(%ebp),%eax
081dbbea +0x5de:  mov    %eax,(%esp)
081dbbed +0x5e1:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
081dbbf2 +0x5e6:  lea    -0x7c(%ebp),%eax
081dbbf5 +0x5e9:  mov    %eax,(%esp)
081dbbf8 +0x5ec:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
081dbbfd +0x5f1:  lea    -0x34(%ebp),%eax
081dbc00 +0x5f4:  lea    -0x74(%ebp),%edx
081dbc03 +0x5f7:  mov    %edx,0x4(%esp)
081dbc07 +0x5fb:  mov    %eax,(%esp)
081dbc0a +0x5fe:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
081dbc0f +0x603:  sub    $0x4,%esp
081dbc12 +0x606:  lea    -0x34(%ebp),%eax
081dbc15 +0x609:  mov    %eax,0x4(%esp)
081dbc19 +0x60d:  lea    -0x7c(%ebp),%eax
081dbc1c +0x610:  mov    %eax,(%esp)
081dbc1f +0x613:  call   082372d5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc97f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc97f
081dbc24 +0x618:  test   %al,%al
081dbc26 +0x61a:  jne    081dba21 <+0x415>
081dbc2c +0x620:  mov    $0x0,%ebx
081dbc31 +0x625:  jmp    081dbc4e <+0x642>
081dbc33 +0x627:  mov    %edx,%ebx
081dbc35 +0x629:  mov    %eax,%esi
081dbc37 +0x62b:  lea    -0x74(%ebp),%eax
081dbc3a +0x62e:  mov    %eax,(%esp)
081dbc3d +0x631:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
081dbc42 +0x636:  mov    %esi,%eax
081dbc44 +0x638:  mov    %ebx,%edx
081dbc46 +0x63a:  mov    %eax,(%esp)
081dbc49 +0x63d:  call   08ae3750 <_Unwind_Resume>
081dbc4e +0x642:  lea    -0x74(%ebp),%eax
081dbc51 +0x645:  mov    %eax,(%esp)
081dbc54 +0x648:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
081dbc59 +0x64d:  mov    %ebx,%eax
081dbc5b +0x64f:  lea    -0xc(%ebp),%esp
081dbc5e +0x652:  add    $0x0,%esp
081dbc61 +0x655:  pop    %ebx
081dbc62 +0x656:  pop    %esi
081dbc63 +0x657:  pop    %edi
081dbc64 +0x658:  pop    %ebp
081dbc65 +0x659:  ret
```

## 反编译 C

```c
// Dispatcher_Select_Item_Grwoth_Power::process @ 0x81db60c

/* Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Select_Item_Grwoth_Power::process
          (Dispatcher_Select_Item_Grwoth_Power *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  CDataManager *this_00;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  size_t sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Inven_Item local_195;
  char local_194;
  int local_193;
  undefined4 local_18e;
  char local_95 [21];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_80 [4];
  __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
  local_7c [4];
  vector<Inven_Item,std::allocator<Inven_Item>> local_78 [13];
  byte local_6b [3];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  _Rb_tree_iterator local_5c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_58 [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_54 [4];
  __normal_iterator local_50 [4];
  cMyTrace local_4c [16];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  int local_34;
  MSG_BASE *local_30;
  ParamBase *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  iVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      iVar4 = -1;
    }
    else {
      local_30 = param_2;
      local_2c = param_3;
      local_64 = 0;
      local_34 = iVar4;
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  *)&local_68);
      CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      G_CDataManager();
      STGrowthPowerData::get_break_away_section_data((int)local_6b);
      iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      local_64 = makeFairPVPEquipmentPackageKey(iVar4,(uint)local_6b[0]);
      G_CDataManager();
      std::
      map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
      ::find((int *)local_5c);
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  *)&local_60,local_5c);
      local_68 = local_60;
      G_CDataManager();
      std::
      map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
      ::end(local_54);
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
      ::_Rb_tree_const_iterator(local_58,(_Rb_tree_iterator *)local_54);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
              ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                            *)&local_68,(_Rb_tree_const_iterator *)local_58);
      if (cVar2 == '\0') {
        local_28 = 0;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_78);
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                      *)&local_68);
                    /* try { // try from 081db77b to 081dbc23 has its CatchHandler @ 081dbc33 */
        std::
        vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
        ::begin();
        while( true ) {
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                        *)&local_68);
          std::
          vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
          ::end();
          bVar3 = __gnu_cxx::operator!=(local_7c,local_50);
          if (!bVar3) break;
          pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                   __gnu_cxx::
                   __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                   ::operator->(local_7c);
          uVar6 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::size
                            (pvVar5);
          if (uVar6 <= (byte)local_30[local_28 + 0xe]) {
            MVar1 = local_30[local_28 + 0xe];
            pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                     __gnu_cxx::
                     __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                     ::operator->(local_7c);
            uVar10 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                     size(pvVar5);
            uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            uVar14 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            uVar7 = CUser::get_acc_id(param_1);
            cMyTrace::cMyTrace(local_4c,
                               "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0x4a8b,0);
            cMyTrace::operator()
                      (local_4c,"[GrowthPower](%d)(j:%d)(l:%d)(s:%d)(p:%d)",uVar7,uVar14,uVar13,
                       uVar10,(uint)(byte)MVar1);
            uVar6 = CUser::get_acc_id(param_1);
            iVar4 = LineFunc(0x4a8c,
                             "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar6);
            goto LAB_081dbc4e;
          }
          if (4 < local_28) {
            uVar6 = CUser::get_acc_id(param_1);
            iVar4 = LineFunc(0x4a8f,
                             "virtual int Dispatcher_Select_Item_Grwoth_Power::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar6);
            goto LAB_081dbc4e;
          }
          Inven_Item::Inven_Item(&local_195);
          MVar1 = local_30[local_28 + 0xe];
          pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                   __gnu_cxx::
                   __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                   ::operator->(local_7c);
          piVar8 = (int *)std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>
                          ::at(pvVar5,(uint)(byte)MVar1);
          iVar4 = *piVar8;
          local_193 = iVar4;
          this_00 = (CDataManager *)G_CDataManager();
          local_20 = (int *)CDataManager::find_item(this_00,iVar4);
          if (local_20 == (int *)0x0) {
            *(undefined4 *)(local_2c + 4) = 0x11;
            iVar4 = 0;
            goto LAB_081dbc4e;
          }
          (**(code **)(*local_20 + 8))(local_20,&local_195);
          if (local_194 != '\x01') {
            MVar1 = local_30[local_28 + 0xe];
            pvVar5 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                     __gnu_cxx::
                     __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                     ::operator->(local_7c);
            iVar4 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::at
                              (pvVar5,(uint)(byte)MVar1);
            local_18e = *(undefined4 *)(iVar4 + 4);
          }
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_78,&local_195);
          local_28 = local_28 + 1;
          __gnu_cxx::
          __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
          ::operator++(local_7c);
        }
        local_24 = 0;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_80,local_3c);
        while( true ) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
          bVar3 = __gnu_cxx::operator!=(local_80,local_38);
          if (!bVar3) break;
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_80);
          uVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_24 = CInventory::insertItemIntoInventory
                               (uVar10,*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],puVar9[5],
                                puVar9[6],puVar9[7],puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],
                                puVar9[0xc],puVar9[0xd],puVar9[0xe],*(undefined1 *)(puVar9 + 0xf),8,
                                1,1);
          if (local_24 < 0) {
            pcVar11 = (char *)RDARScriptStringManager::findString
                                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                         "game_server_msg_213",(bool *)0x0);
            strncpy(local_95,pcVar11,0x14);
            pcVar11 = (char *)RDARScriptStringManager::findString
                                        ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                         "game_server_msg_214",(bool *)0x0);
            strncpy((char *)&local_195,pcVar11,0xff);
            uVar10 = CUser::GetServerGroup(param_1);
            sVar12 = strlen((char *)&local_195);
            uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar14 = __gnu_cxx::
                     __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                     ::operator*(local_80);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_95,uVar14,0,uVar13,&local_195,sVar12,0,uVar10,0,0);
          }
          else {
            CUser::SendUpdateItemList(param_1,1,0,local_24);
          }
          __gnu_cxx::
          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
          operator++(local_80);
        }
        iVar4 = 0;
LAB_081dbc4e:
        std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_78);
      }
      else {
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}
```
