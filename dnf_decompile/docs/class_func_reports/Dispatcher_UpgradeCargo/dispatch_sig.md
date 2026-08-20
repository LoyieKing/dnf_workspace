# dispatch_sig

`_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeCargo` | `0x0822a0a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822a0a4  _ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822a0a4, 0x0822a4bb]
0822a0a4 +0x000:  push   %ebp
0822a0a5 +0x001:  mov    %esp,%ebp
0822a0a7 +0x003:  push   %esi
0822a0a8 +0x004:  push   %ebx
0822a0a9 +0x005:  add    $0xffffff80,%esp
0822a0ac +0x008:  mov    0xc(%ebp),%eax
0822a0af +0x00b:  mov    %eax,(%esp)
0822a0b2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822a0b7 +0x013:  cmp    $0x3,%eax
0822a0ba +0x016:  jne    0822a0cb <+0x27>
0822a0bc +0x018:  mov    0xc(%ebp),%eax
0822a0bf +0x01b:  mov    %eax,(%esp)
0822a0c2 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0822a0c7 +0x023:  test   %eax,%eax
0822a0c9 +0x025:  jne    0822a0d2 <+0x2e>
0822a0cb +0x027:  mov    $0x1,%eax
0822a0d0 +0x02c:  jmp    0822a0d7 <+0x33>
0822a0d2 +0x02e:  mov    $0x0,%eax
0822a0d7 +0x033:  test   %al,%al
0822a0d9 +0x035:  je     0822a106 <+0x62>
0822a0db +0x037:  movl   $0x0,0xc(%esp)
0822a0e3 +0x03f:  movl   $0x0,0x8(%esp)
0822a0eb +0x047:  movl   $&_ZZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822a0f3 +0x04f:  movl   $0xe7d8,(%esp)
0822a0fa +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822a0ff +0x05b:  mov    %eax,%ebx
0822a101 +0x05d:  jmp    0822a4b0 <+0x40c>
0822a106 +0x062:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0822a10b +0x067:  movl   $0x1d,0x8(%esp)
0822a113 +0x06f:  mov    0xc(%ebp),%edx
0822a116 +0x072:  mov    %edx,0x4(%esp)
0822a11a +0x076:  mov    %eax,(%esp)
0822a11d +0x079:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0822a122 +0x07e:  mov    %eax,-0x10(%ebp)
0822a125 +0x081:  cmpl   $0x0,-0x10(%ebp)
0822a129 +0x085:  je     0822a152 <+0xae>
0822a12b +0x087:  mov    -0x10(%ebp),%eax
0822a12e +0x08a:  movzbl %al,%eax
0822a131 +0x08d:  mov    %eax,0x8(%esp)
0822a135 +0x091:  movl   $0x198,0x4(%esp)
0822a13d +0x099:  mov    0xc(%ebp),%eax
0822a140 +0x09c:  mov    %eax,(%esp)
0822a143 +0x09f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a148 +0x0a4:  mov    $0x0,%ebx
0822a14d +0x0a9:  jmp    0822a4b0 <+0x40c>
0822a152 +0x0ae:  movw   $0x0,-0x12(%ebp)
0822a158 +0x0b4:  lea    -0x12(%ebp),%eax
0822a15b +0x0b7:  mov    %eax,0x4(%esp)
0822a15f +0x0bb:  mov    0x10(%ebp),%eax
0822a162 +0x0be:  mov    %eax,(%esp)
0822a165 +0x0c1:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0822a16a +0x0c6:  xor    $0x1,%eax
0822a16d +0x0c9:  test   %al,%al
0822a16f +0x0cb:  je     0822a19c <+0xf8>
0822a171 +0x0cd:  movl   $0x0,0xc(%esp)
0822a179 +0x0d5:  movl   $0x0,0x8(%esp)
0822a181 +0x0dd:  movl   $&_ZZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822a189 +0x0e5:  movl   $0xe7e2,(%esp)
0822a190 +0x0ec:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822a195 +0x0f1:  mov    %eax,%ebx
0822a197 +0x0f3:  jmp    0822a4b0 <+0x40c>
0822a19c +0x0f8:  movzwl -0x12(%ebp),%eax
0822a1a0 +0x0fc:  movswl %ax,%ebx
0822a1a3 +0x0ff:  mov    0xc(%ebp),%eax
0822a1a6 +0x102:  mov    %eax,(%esp)
0822a1a9 +0x105:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a1ae +0x10a:  lea    -0x5d(%ebp),%edx
0822a1b1 +0x10d:  mov    %ebx,0xc(%esp)
0822a1b5 +0x111:  movl   $0x1,0x8(%esp)
0822a1bd +0x119:  mov    %eax,0x4(%esp)
0822a1c1 +0x11d:  mov    %edx,(%esp)
0822a1c4 +0x120:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0822a1c9 +0x125:  sub    $0x4,%esp
0822a1cc +0x128:  mov    -0x56(%ebp),%eax
0822a1cf +0x12b:  test   %eax,%eax
0822a1d1 +0x12d:  jg     0822a1f8 <+0x154>
0822a1d3 +0x12f:  movl   $0x11,0x8(%esp)
0822a1db +0x137:  movl   $0x198,0x4(%esp)
0822a1e3 +0x13f:  mov    0xc(%ebp),%eax
0822a1e6 +0x142:  mov    %eax,(%esp)
0822a1e9 +0x145:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a1ee +0x14a:  mov    $0x0,%ebx
0822a1f3 +0x14f:  jmp    0822a4b0 <+0x40c>
0822a1f8 +0x154:  mov    -0x5b(%ebp),%eax
0822a1fb +0x157:  mov    %eax,0x8(%esp)
0822a1ff +0x15b:  movl   $0x2b,0x4(%esp)
0822a207 +0x163:  mov    0xc(%ebp),%eax
0822a20a +0x166:  mov    %eax,(%esp)
0822a20d +0x169:  call   0868f6bc <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj>  ; CUser::verifyStackableItemActionPlace(StackableAction::Type, unsigned int)
0822a212 +0x16e:  xor    $0x1,%eax
0822a215 +0x171:  test   %al,%al
0822a217 +0x173:  je     0822a23e <+0x19a>
0822a219 +0x175:  movl   $0x11,0x8(%esp)
0822a221 +0x17d:  movl   $0x198,0x4(%esp)
0822a229 +0x185:  mov    0xc(%ebp),%eax
0822a22c +0x188:  mov    %eax,(%esp)
0822a22f +0x18b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a234 +0x190:  mov    $0x0,%ebx
0822a239 +0x195:  jmp    0822a4b0 <+0x40c>
0822a23e +0x19a:  movl   $0x10,-0xc(%ebp)
0822a245 +0x1a1:  mov    0xc(%ebp),%eax
0822a248 +0x1a4:  mov    %eax,(%esp)
0822a24b +0x1a7:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0822a250 +0x1ac:  mov    %eax,(%esp)
0822a253 +0x1af:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0822a258 +0x1b4:  mov    %eax,%ebx
0822a25a +0x1b6:  add    -0xc(%ebp),%ebx
0822a25d +0x1b9:  mov    0xc(%ebp),%eax
0822a260 +0x1bc:  mov    %eax,(%esp)
0822a263 +0x1bf:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0822a268 +0x1c4:  mov    %ebx,0x4(%esp)
0822a26c +0x1c8:  mov    %eax,(%esp)
0822a26f +0x1cb:  call   0850c698 <_ZNK6CCargo12isUpgradableEi>  ; CCargo::isUpgradable(int) const
0822a274 +0x1d0:  xor    $0x1,%eax
0822a277 +0x1d3:  test   %al,%al
0822a279 +0x1d5:  je     0822a2a0 <+0x1fc>
0822a27b +0x1d7:  movl   $0x13,0x8(%esp)
0822a283 +0x1df:  movl   $0x198,0x4(%esp)
0822a28b +0x1e7:  mov    0xc(%ebp),%eax
0822a28e +0x1ea:  mov    %eax,(%esp)
0822a291 +0x1ed:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a296 +0x1f2:  mov    $0x0,%ebx
0822a29b +0x1f7:  jmp    0822a4b0 <+0x40c>
0822a2a0 +0x1fc:  movzwl -0x12(%ebp),%eax
0822a2a4 +0x200:  movswl %ax,%ebx
0822a2a7 +0x203:  mov    0xc(%ebp),%eax
0822a2aa +0x206:  mov    %eax,(%esp)
0822a2ad +0x209:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822a2b2 +0x20e:  movl   $0x1,0x14(%esp)
0822a2ba +0x216:  movl   $0x3,0x10(%esp)
0822a2c2 +0x21e:  movl   $0x1,0xc(%esp)
0822a2ca +0x226:  mov    %ebx,0x8(%esp)
0822a2ce +0x22a:  movl   $0x1,0x4(%esp)
0822a2d6 +0x232:  mov    %eax,(%esp)
0822a2d9 +0x235:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0822a2de +0x23a:  xor    $0x1,%eax
0822a2e1 +0x23d:  test   %al,%al
0822a2e3 +0x23f:  je     0822a30a <+0x266>
0822a2e5 +0x241:  movl   $0x11,0x8(%esp)
0822a2ed +0x249:  movl   $0x198,0x4(%esp)
0822a2f5 +0x251:  mov    0xc(%ebp),%eax
0822a2f8 +0x254:  mov    %eax,(%esp)
0822a2fb +0x257:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a300 +0x25c:  mov    $0x0,%ebx
0822a305 +0x261:  jmp    0822a4b0 <+0x40c>
0822a30a +0x266:  lea    -0x20(%ebp),%eax
0822a30d +0x269:  mov    %eax,(%esp)
0822a310 +0x26c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0822a315 +0x271:  movl   $0xe,0x8(%esp)
0822a31d +0x279:  movl   $0x0,0x4(%esp)
0822a325 +0x281:  lea    -0x20(%ebp),%eax
0822a328 +0x284:  mov    %eax,(%esp)
0822a32b +0x287:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822a330 +0x28c:  movl   $0x0,0x4(%esp)
0822a338 +0x294:  lea    -0x20(%ebp),%eax
0822a33b +0x297:  mov    %eax,(%esp)
0822a33e +0x29a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822a343 +0x29f:  movl   $0x1,0x4(%esp)
0822a34b +0x2a7:  lea    -0x20(%ebp),%eax
0822a34e +0x2aa:  mov    %eax,(%esp)
0822a351 +0x2ad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a356 +0x2b2:  movzwl -0x12(%ebp),%eax
0822a35a +0x2b6:  movswl %ax,%ebx
0822a35d +0x2b9:  mov    0xc(%ebp),%eax
0822a360 +0x2bc:  mov    %eax,(%esp)
0822a363 +0x2bf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0822a368 +0x2c4:  lea    -0x20(%ebp),%edx
0822a36b +0x2c7:  mov    %edx,0xc(%esp)
0822a36f +0x2cb:  mov    %ebx,0x8(%esp)
0822a373 +0x2cf:  movl   $0x1,0x4(%esp)
0822a37b +0x2d7:  mov    %eax,(%esp)
0822a37e +0x2da:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0822a383 +0x2df:  movl   $0x1,0x4(%esp)
0822a38b +0x2e7:  lea    -0x20(%ebp),%eax
0822a38e +0x2ea:  mov    %eax,(%esp)
0822a391 +0x2ed:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822a396 +0x2f2:  lea    -0x20(%ebp),%eax
0822a399 +0x2f5:  mov    %eax,0x4(%esp)
0822a39d +0x2f9:  mov    0xc(%ebp),%eax
0822a3a0 +0x2fc:  mov    %eax,(%esp)
0822a3a3 +0x2ff:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822a3a8 +0x304:  mov    0xc(%ebp),%eax
0822a3ab +0x307:  mov    %eax,(%esp)
0822a3ae +0x30a:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0822a3b3 +0x30f:  mov    %eax,(%esp)
0822a3b6 +0x312:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0822a3bb +0x317:  mov    %eax,%ebx
0822a3bd +0x319:  add    -0xc(%ebp),%ebx
0822a3c0 +0x31c:  mov    0xc(%ebp),%eax
0822a3c3 +0x31f:  mov    %eax,(%esp)
0822a3c6 +0x322:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0822a3cb +0x327:  mov    %ebx,0x4(%esp)
0822a3cf +0x32b:  mov    %eax,(%esp)
0822a3d2 +0x32e:  call   0850c656 <_ZN6CCargo12UpgradeCargoEi>  ; CCargo::UpgradeCargo(int)
0822a3d7 +0x333:  xor    $0x1,%eax
0822a3da +0x336:  test   %al,%al
0822a3dc +0x338:  je     0822a403 <+0x35f>
0822a3de +0x33a:  movl   $0x13,0x8(%esp)
0822a3e6 +0x342:  movl   $0x198,0x4(%esp)
0822a3ee +0x34a:  mov    0xc(%ebp),%eax
0822a3f1 +0x34d:  mov    %eax,(%esp)
0822a3f4 +0x350:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822a3f9 +0x355:  mov    $0x0,%ebx
0822a3fe +0x35a:  jmp    0822a4a5 <+0x401>
0822a403 +0x35f:  lea    -0x20(%ebp),%eax
0822a406 +0x362:  mov    %eax,(%esp)
0822a409 +0x365:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0822a40e +0x36a:  movl   $0x42,0x8(%esp)
0822a416 +0x372:  movl   $0x0,0x4(%esp)
0822a41e +0x37a:  lea    -0x20(%ebp),%eax
0822a421 +0x37d:  mov    %eax,(%esp)
0822a424 +0x380:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822a429 +0x385:  movl   $0x1,0x4(%esp)
0822a431 +0x38d:  lea    -0x20(%ebp),%eax
0822a434 +0x390:  mov    %eax,(%esp)
0822a437 +0x393:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a43c +0x398:  mov    0xc(%ebp),%eax
0822a43f +0x39b:  mov    %eax,(%esp)
0822a442 +0x39e:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0822a447 +0x3a3:  mov    %eax,(%esp)
0822a44a +0x3a6:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0822a44f +0x3ab:  mov    %eax,0x4(%esp)
0822a453 +0x3af:  lea    -0x20(%ebp),%eax
0822a456 +0x3b2:  mov    %eax,(%esp)
0822a459 +0x3b5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0822a45e +0x3ba:  movl   $0x1,0x4(%esp)
0822a466 +0x3c2:  lea    -0x20(%ebp),%eax
0822a469 +0x3c5:  mov    %eax,(%esp)
0822a46c +0x3c8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822a471 +0x3cd:  lea    -0x20(%ebp),%eax
0822a474 +0x3d0:  mov    %eax,0x4(%esp)
0822a478 +0x3d4:  mov    0xc(%ebp),%eax
0822a47b +0x3d7:  mov    %eax,(%esp)
0822a47e +0x3da:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822a483 +0x3df:  mov    $0x0,%ebx
0822a488 +0x3e4:  jmp    0822a4a5 <+0x401>
0822a48a +0x3e6:  mov    %edx,%ebx
0822a48c +0x3e8:  mov    %eax,%esi
0822a48e +0x3ea:  lea    -0x20(%ebp),%eax
0822a491 +0x3ed:  mov    %eax,(%esp)
0822a494 +0x3f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822a499 +0x3f5:  mov    %esi,%eax
0822a49b +0x3f7:  mov    %ebx,%edx
0822a49d +0x3f9:  mov    %eax,(%esp)
0822a4a0 +0x3fc:  call   08ae3750 <_Unwind_Resume>
0822a4a5 +0x401:  lea    -0x20(%ebp),%eax
0822a4a8 +0x404:  mov    %eax,(%esp)
0822a4ab +0x407:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0822a4b0 +0x40c:  mov    %ebx,%eax
0822a4b2 +0x40e:  lea    -0x8(%ebp),%esp
0822a4b5 +0x411:  add    $0x0,%esp
0822a4b8 +0x414:  pop    %ebx
0822a4b9 +0x415:  pop    %esi
0822a4ba +0x416:  pop    %ebp
0822a4bb +0x417:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeCargo::dispatch_sig @ 0x822a0a4

/* Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeCargo::dispatch_sig
          (Dispatcher_UpgradeCargo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CCargo *pCVar5;
  CInventory *pCVar6;
  int iVar7;
  undefined1 local_61 [2];
  undefined4 local_5f;
  int local_5a;
  PacketGuard local_24 [14];
  short local_16;
  uint local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0822a0d7;
    }
  }
  bVar1 = true;
LAB_0822a0d7:
  if (bVar1) {
    uVar4 = LineFunc(0xe7d8,"virtual int Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1d);
    if (local_14 == 0) {
      local_16 = 0;
      cVar2 = PacketBuf::get_short(param_2,&local_16);
      if (cVar2 == '\x01') {
        iVar7 = (int)local_16;
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_61,iVar3);
        if (local_5a < 1) {
          CUser::SendCmdErrorPacket(param_1,0x198,0x11);
          uVar4 = 0;
        }
        else {
          cVar2 = CUser::verifyStackableItemActionPlace(param_1,0x2b,local_5f,iVar7);
          if (cVar2 == '\x01') {
            local_10 = 0x10;
            pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
            iVar3 = CCargo::GetCapacity(pCVar5);
            iVar3 = iVar3 + local_10;
            pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
            cVar2 = CCargo::isUpgradable(pCVar5,iVar3);
            if (cVar2 == '\x01') {
              iVar3 = (int)local_16;
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::delete_item(pCVar6,1,iVar3,1,3,1);
              if (cVar2 == '\x01') {
                PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0822a32b to 0822a482 has its CatchHandler @ 0822a48a */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xe);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
                iVar3 = (int)local_16;
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::MakeItemPacket(pCVar6,1,iVar3,local_24);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
                CUser::Send(param_1,local_24);
                pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
                iVar3 = CCargo::GetCapacity(pCVar5);
                iVar3 = iVar3 + local_10;
                pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
                cVar2 = CCargo::UpgradeCargo(pCVar5,iVar3);
                if (cVar2 == '\x01') {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x42);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
                  pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1)
                  ;
                  iVar3 = CCargo::GetCapacity(pCVar5);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar3);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
                  CUser::Send(param_1,local_24);
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0x198,0x13);
                }
                uVar4 = 0;
                PacketGuard::~PacketGuard(local_24);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x198,0x11);
                uVar4 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x198,0x13);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x198,0x11);
            uVar4 = 0;
          }
        }
      }
      else {
        uVar4 = LineFunc(0xe7e2,
                         "virtual int Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x198,local_14 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
