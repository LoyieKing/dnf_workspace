# NormalPickupItem

`_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item`

`WongWork::CBossStage::NormalPickupItem(CUser*, unsigned int, map_item const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814ecec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814ecec  _ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item
#           WongWork::CBossStage::NormalPickupItem(CUser*, unsigned int, map_item const&)
# range [0x0814ecec, 0x0814f0e5]
0814ecec +0x000:  push   %ebp
0814eced +0x001:  mov    %esp,%ebp
0814ecef +0x003:  push   %esi
0814ecf0 +0x004:  push   %ebx
0814ecf1 +0x005:  sub    $0xa0,%esp
0814ecf7 +0x00b:  cmpl   $0x0,0xc(%ebp)
0814ecfb +0x00f:  je     0814f0d5 <+0x3e9>
0814ed01 +0x015:  mov    0x14(%ebp),%eax
0814ed04 +0x018:  mov    0x12(%eax),%eax
0814ed07 +0x01b:  mov    %eax,%ebx
0814ed09 +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814ed0e +0x022:  mov    %ebx,0x4(%esp)
0814ed12 +0x026:  mov    %eax,(%esp)
0814ed15 +0x029:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814ed1a +0x02e:  mov    %eax,-0x18(%ebp)
0814ed1d +0x031:  cmpl   $0x0,-0x18(%ebp)
0814ed21 +0x035:  jne    0814ed2d <+0x41>
0814ed23 +0x037:  mov    $0x0,%ebx
0814ed28 +0x03c:  jmp    0814f0da <+0x3ee>
0814ed2d +0x041:  movl   $0x0,-0x14(%ebp)
0814ed34 +0x048:  mov    -0x18(%ebp),%eax
0814ed37 +0x04b:  mov    %eax,(%esp)
0814ed3a +0x04e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0814ed3f +0x053:  test   %al,%al
0814ed41 +0x055:  je     0814ed68 <+0x7c>
0814ed43 +0x057:  mov    -0x18(%ebp),%eax
0814ed46 +0x05a:  mov    (%eax),%eax
0814ed48 +0x05c:  add    $0xc,%eax
0814ed4b +0x05f:  mov    (%eax),%edx
0814ed4d +0x061:  mov    -0x18(%ebp),%eax
0814ed50 +0x064:  mov    %eax,(%esp)
0814ed53 +0x067:  call   *%edx
0814ed55 +0x069:  cmp    $0x9,%eax
0814ed58 +0x06c:  sete   %al
0814ed5b +0x06f:  test   %al,%al
0814ed5d +0x071:  je     0814eda4 <+0xb8>
0814ed5f +0x073:  movl   $0x7,-0x14(%ebp)
0814ed66 +0x07a:  jmp    0814eda4 <+0xb8>
0814ed68 +0x07c:  mov    -0x18(%ebp),%eax
0814ed6b +0x07f:  mov    (%eax),%eax
0814ed6d +0x081:  add    $0x14,%eax
0814ed70 +0x084:  mov    (%eax),%edx
0814ed72 +0x086:  mov    -0x18(%ebp),%eax
0814ed75 +0x089:  mov    %eax,(%esp)
0814ed78 +0x08c:  call   *%edx
0814ed7a +0x08e:  test   %al,%al
0814ed7c +0x090:  je     0814ed87 <+0x9b>
0814ed7e +0x092:  movl   $0x7,-0x14(%ebp)
0814ed85 +0x099:  jmp    0814eda4 <+0xb8>
0814ed87 +0x09b:  mov    -0x18(%ebp),%eax
0814ed8a +0x09e:  mov    (%eax),%eax
0814ed8c +0x0a0:  add    $0x10,%eax
0814ed8f +0x0a3:  mov    (%eax),%edx
0814ed91 +0x0a5:  mov    -0x18(%ebp),%eax
0814ed94 +0x0a8:  mov    %eax,(%esp)
0814ed97 +0x0ab:  call   *%edx
0814ed99 +0x0ad:  test   %al,%al
0814ed9b +0x0af:  je     0814eda4 <+0xb8>
0814ed9d +0x0b1:  movl   $0x1,-0x14(%ebp)
0814eda4 +0x0b8:  movl   $0xffffffff,-0x10(%ebp)
0814edab +0x0bf:  mov    0x14(%ebp),%eax
0814edae +0x0c2:  add    $0x10,%eax
0814edb1 +0x0c5:  mov    %eax,(%esp)
0814edb4 +0x0c8:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
0814edb9 +0x0cd:  test   %al,%al
0814edbb +0x0cf:  je     0814ee3c <+0x150>
0814edbd +0x0d1:  movl   $0x18,0x8(%esp)
0814edc5 +0x0d9:  movl   $0x0,0x4(%esp)
0814edcd +0x0e1:  lea    -0x34(%ebp),%eax
0814edd0 +0x0e4:  mov    %eax,(%esp)
0814edd3 +0x0e7:  call   0807dcc0 <_init+0x5b8>
0814edd8 +0x0ec:  mov    0xc(%ebp),%eax
0814eddb +0x0ef:  mov    %eax,(%esp)
0814edde +0x0f2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0814ede3 +0x0f7:  lea    -0x34(%ebp),%edx
0814ede6 +0x0fa:  mov    %edx,0x8(%esp)
0814edea +0x0fe:  mov    %eax,0x4(%esp)
0814edee +0x102:  movl   $0x5,(%esp)
0814edf5 +0x109:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0814edfa +0x10e:  mov    0x14(%ebp),%eax
0814edfd +0x111:  movzwl 0x1b(%eax),%eax
0814ee01 +0x115:  movsbl %al,%edx
0814ee04 +0x118:  mov    0x14(%ebp),%eax
0814ee07 +0x11b:  mov    0x12(%eax),%eax
0814ee0a +0x11e:  movl   $0x10,0x14(%esp)
0814ee12 +0x126:  lea    -0x34(%ebp),%ecx
0814ee15 +0x129:  mov    %ecx,0x10(%esp)
0814ee19 +0x12d:  mov    %edx,0xc(%esp)
0814ee1d +0x131:  movl   $0x0,0x8(%esp)
0814ee25 +0x139:  mov    %eax,0x4(%esp)
0814ee29 +0x13d:  mov    0xc(%ebp),%eax
0814ee2c +0x140:  mov    %eax,(%esp)
0814ee2f +0x143:  call   08681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>  ; CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
0814ee34 +0x148:  mov    %eax,-0x10(%ebp)
0814ee37 +0x14b:  jmp    0814eee0 <+0x1f4>
0814ee3c +0x150:  mov    0xc(%ebp),%eax
0814ee3f +0x153:  mov    %eax,(%esp)
0814ee42 +0x156:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814ee47 +0x15b:  mov    %eax,%edx
0814ee49 +0x15d:  movl   $0x1,0x4c(%esp)
0814ee51 +0x165:  movl   $0x1,0x48(%esp)
0814ee59 +0x16d:  movl   $0x4,0x44(%esp)
0814ee61 +0x175:  mov    0x14(%ebp),%eax
0814ee64 +0x178:  mov    0x10(%eax),%ecx
0814ee67 +0x17b:  mov    %ecx,0x4(%esp)
0814ee6b +0x17f:  mov    0x14(%eax),%ecx
0814ee6e +0x182:  mov    %ecx,0x8(%esp)
0814ee72 +0x186:  mov    0x18(%eax),%ecx
0814ee75 +0x189:  mov    %ecx,0xc(%esp)
0814ee79 +0x18d:  mov    0x1c(%eax),%ecx
0814ee7c +0x190:  mov    %ecx,0x10(%esp)
0814ee80 +0x194:  mov    0x20(%eax),%ecx
0814ee83 +0x197:  mov    %ecx,0x14(%esp)
0814ee87 +0x19b:  mov    0x24(%eax),%ecx
0814ee8a +0x19e:  mov    %ecx,0x18(%esp)
0814ee8e +0x1a2:  mov    0x28(%eax),%ecx
0814ee91 +0x1a5:  mov    %ecx,0x1c(%esp)
0814ee95 +0x1a9:  mov    0x2c(%eax),%ecx
0814ee98 +0x1ac:  mov    %ecx,0x20(%esp)
0814ee9c +0x1b0:  mov    0x30(%eax),%ecx
0814ee9f +0x1b3:  mov    %ecx,0x24(%esp)
0814eea3 +0x1b7:  mov    0x34(%eax),%ecx
0814eea6 +0x1ba:  mov    %ecx,0x28(%esp)
0814eeaa +0x1be:  mov    0x38(%eax),%ecx
0814eead +0x1c1:  mov    %ecx,0x2c(%esp)
0814eeb1 +0x1c5:  mov    0x3c(%eax),%ecx
0814eeb4 +0x1c8:  mov    %ecx,0x30(%esp)
0814eeb8 +0x1cc:  mov    0x40(%eax),%ecx
0814eebb +0x1cf:  mov    %ecx,0x34(%esp)
0814eebf +0x1d3:  mov    0x44(%eax),%ecx
0814eec2 +0x1d6:  mov    %ecx,0x38(%esp)
0814eec6 +0x1da:  mov    0x48(%eax),%ecx
0814eec9 +0x1dd:  mov    %ecx,0x3c(%esp)
0814eecd +0x1e1:  movzbl 0x4c(%eax),%eax
0814eed1 +0x1e5:  mov    %al,0x40(%esp)
0814eed5 +0x1e9:  mov    %edx,(%esp)
0814eed8 +0x1ec:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0814eedd +0x1f1:  mov    %eax,-0x10(%ebp)
0814eee0 +0x1f4:  cmpl   $0xffffffff,-0x10(%ebp)
0814eee4 +0x1f8:  jne    0814ef96 <+0x2aa>
0814eeea +0x1fe:  lea    -0x40(%ebp),%eax
0814eeed +0x201:  mov    %eax,(%esp)
0814eef0 +0x204:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814eef5 +0x209:  lea    -0x40(%ebp),%eax
0814eef8 +0x20c:  mov    %eax,(%esp)
0814eefb +0x20f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814ef00 +0x214:  movl   $0x2e,0x8(%esp)
0814ef08 +0x21c:  movl   $0x1,0x4(%esp)
0814ef10 +0x224:  lea    -0x40(%ebp),%eax
0814ef13 +0x227:  mov    %eax,(%esp)
0814ef16 +0x22a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814ef1b +0x22f:  movl   $0x0,0x4(%esp)
0814ef23 +0x237:  lea    -0x40(%ebp),%eax
0814ef26 +0x23a:  mov    %eax,(%esp)
0814ef29 +0x23d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ef2e +0x242:  movl   $0x4,0x4(%esp)
0814ef36 +0x24a:  lea    -0x40(%ebp),%eax
0814ef39 +0x24d:  mov    %eax,(%esp)
0814ef3c +0x250:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814ef41 +0x255:  movl   $0x1,0x4(%esp)
0814ef49 +0x25d:  lea    -0x40(%ebp),%eax
0814ef4c +0x260:  mov    %eax,(%esp)
0814ef4f +0x263:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814ef54 +0x268:  lea    -0x40(%ebp),%eax
0814ef57 +0x26b:  mov    %eax,0x4(%esp)
0814ef5b +0x26f:  mov    0xc(%ebp),%eax
0814ef5e +0x272:  mov    %eax,(%esp)
0814ef61 +0x275:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814ef66 +0x27a:  mov    $0x0,%ebx
0814ef6b +0x27f:  lea    -0x40(%ebp),%eax
0814ef6e +0x282:  mov    %eax,(%esp)
0814ef71 +0x285:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ef76 +0x28a:  jmp    0814f0da <+0x3ee>
0814ef7b +0x28f:  mov    %edx,%ebx
0814ef7d +0x291:  mov    %eax,%esi
0814ef7f +0x293:  lea    -0x40(%ebp),%eax
0814ef82 +0x296:  mov    %eax,(%esp)
0814ef85 +0x299:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814ef8a +0x29e:  mov    %esi,%eax
0814ef8c +0x2a0:  mov    %ebx,%edx
0814ef8e +0x2a2:  mov    %eax,(%esp)
0814ef91 +0x2a5:  call   08ae3750 <_Unwind_Resume>
0814ef96 +0x2aa:  mov    0x10(%ebp),%eax
0814ef99 +0x2ad:  mov    %eax,-0x1c(%ebp)
0814ef9c +0x2b0:  mov    0x8(%ebp),%eax
0814ef9f +0x2b3:  lea    0xa18(%eax),%edx
0814efa5 +0x2b9:  lea    -0x1c(%ebp),%eax
0814efa8 +0x2bc:  mov    %eax,0x4(%esp)
0814efac +0x2c0:  mov    %edx,(%esp)
0814efaf +0x2c3:  call   08152c18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x254d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x254d
0814efb4 +0x2c8:  lea    -0x4c(%ebp),%eax
0814efb7 +0x2cb:  mov    %eax,(%esp)
0814efba +0x2ce:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814efbf +0x2d3:  lea    -0x4c(%ebp),%eax
0814efc2 +0x2d6:  mov    %eax,(%esp)
0814efc5 +0x2d9:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814efca +0x2de:  movl   $0x27,0x8(%esp)
0814efd2 +0x2e6:  movl   $0x0,0x4(%esp)
0814efda +0x2ee:  lea    -0x4c(%ebp),%eax
0814efdd +0x2f1:  mov    %eax,(%esp)
0814efe0 +0x2f4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814efe5 +0x2f9:  mov    0x10(%ebp),%eax
0814efe8 +0x2fc:  mov    %eax,0x4(%esp)
0814efec +0x300:  lea    -0x4c(%ebp),%eax
0814efef +0x303:  mov    %eax,(%esp)
0814eff2 +0x306:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814eff7 +0x30b:  mov    0xc(%ebp),%eax
0814effa +0x30e:  mov    %eax,(%esp)
0814effd +0x311:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814f002 +0x316:  movzwl %ax,%eax
0814f005 +0x319:  mov    %eax,0x4(%esp)
0814f009 +0x31d:  lea    -0x4c(%ebp),%eax
0814f00c +0x320:  mov    %eax,(%esp)
0814f00f +0x323:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814f014 +0x328:  movl   $0x0,-0xc(%ebp)
0814f01b +0x32f:  jmp    0814f034 <+0x348>
0814f01d +0x331:  movl   $0x0,0x4(%esp)
0814f025 +0x339:  lea    -0x4c(%ebp),%eax
0814f028 +0x33c:  mov    %eax,(%esp)
0814f02b +0x33f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f030 +0x344:  addl   $0x1,-0xc(%ebp)
0814f034 +0x348:  cmpl   $0x3,-0xc(%ebp)
0814f038 +0x34c:  setle  %al
0814f03b +0x34f:  test   %al,%al
0814f03d +0x351:  jne    0814f01d <+0x331>
0814f03f +0x353:  mov    0xc(%ebp),%eax
0814f042 +0x356:  mov    %eax,(%esp)
0814f045 +0x359:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814f04a +0x35e:  movzwl %ax,%eax
0814f04d +0x361:  mov    %eax,0x4(%esp)
0814f051 +0x365:  lea    -0x4c(%ebp),%eax
0814f054 +0x368:  mov    %eax,(%esp)
0814f057 +0x36b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814f05c +0x370:  mov    -0x10(%ebp),%eax
0814f05f +0x373:  mov    %eax,0x4(%esp)
0814f063 +0x377:  lea    -0x4c(%ebp),%eax
0814f066 +0x37a:  mov    %eax,(%esp)
0814f069 +0x37d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814f06e +0x382:  mov    -0x14(%ebp),%eax
0814f071 +0x385:  mov    %eax,0x4(%esp)
0814f075 +0x389:  lea    -0x4c(%ebp),%eax
0814f078 +0x38c:  mov    %eax,(%esp)
0814f07b +0x38f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f080 +0x394:  movl   $0x1,0x4(%esp)
0814f088 +0x39c:  lea    -0x4c(%ebp),%eax
0814f08b +0x39f:  mov    %eax,(%esp)
0814f08e +0x3a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814f093 +0x3a7:  mov    0x8(%ebp),%eax
0814f096 +0x3aa:  mov    0x4(%eax),%eax
0814f099 +0x3ad:  lea    -0x4c(%ebp),%edx
0814f09c +0x3b0:  mov    %edx,0x4(%esp)
0814f0a0 +0x3b4:  mov    %eax,(%esp)
0814f0a3 +0x3b7:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814f0a8 +0x3bc:  mov    $0x1,%ebx
0814f0ad +0x3c1:  lea    -0x4c(%ebp),%eax
0814f0b0 +0x3c4:  mov    %eax,(%esp)
0814f0b3 +0x3c7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814f0b8 +0x3cc:  jmp    0814f0da <+0x3ee>
0814f0ba +0x3ce:  mov    %edx,%ebx
0814f0bc +0x3d0:  mov    %eax,%esi
0814f0be +0x3d2:  lea    -0x4c(%ebp),%eax
0814f0c1 +0x3d5:  mov    %eax,(%esp)
0814f0c4 +0x3d8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814f0c9 +0x3dd:  mov    %esi,%eax
0814f0cb +0x3df:  mov    %ebx,%edx
0814f0cd +0x3e1:  mov    %eax,(%esp)
0814f0d0 +0x3e4:  call   08ae3750 <_Unwind_Resume>
0814f0d5 +0x3e9:  mov    $0x0,%ebx
0814f0da +0x3ee:  mov    %ebx,%eax
0814f0dc +0x3f0:  add    $0xa0,%esp
0814f0e2 +0x3f6:  pop    %ebx
0814f0e3 +0x3f7:  pop    %esi
0814f0e4 +0x3f8:  pop    %ebp
0814f0e5 +0x3f9:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::NormalPickupItem @ 0x814ecec

/* WongWork::CBossStage::NormalPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::NormalPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  undefined1 local_38 [24];
  uint local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x12);
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CItem *)CDataManager::find_item(this_00,iVar2);
    if (local_1c == (CItem *)0x0) {
      uVar4 = 0;
    }
    else {
      local_18 = 0;
      cVar1 = CItem::is_stackable(local_1c);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
          if (cVar1 != '\0') {
            local_18 = 1;
          }
        }
        else {
          local_18 = 7;
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
        if (iVar2 == 9) {
          local_18 = 7;
        }
      }
      local_14 = 0xffffffff;
      cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(param_3 + 0x10));
      if (cVar1 == '\0') {
        uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_14 = CInventory::insertItemIntoInventory
                             (uVar4,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                              *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                              *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                              *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                              *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                              *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                              *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                              *(undefined4 *)(param_3 + 0x48),param_3[0x4c],4,1,1);
      }
      else {
        memset(local_38,0,0x18);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        CGenUniqueNo::genIPGNo(5,uVar4,local_38);
        local_14 = CUser::addAvatarItem
                             (param_1,*(undefined4 *)(param_3 + 0x12),0,
                              (int)(char)*(undefined2 *)(param_3 + 0x1b),local_38,0x10);
      }
      if (local_14 == -1) {
        PacketGuard::PacketGuard(local_44);
                    /* try { // try from 0814eefb to 0814ef65 has its CatchHandler @ 0814ef7b */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        CUser::Send(param_1,local_44);
        uVar4 = 0;
        PacketGuard::~PacketGuard(local_44);
      }
      else {
        local_20 = param_2;
        std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
                  ((int *)(this + 0xa18));
        PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0814efc5 to 0814f0a7 has its CatchHandler @ 0814f0ba */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x27);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
        uVar3 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        uVar3 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_14);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_50);
        uVar4 = 1;
        PacketGuard::~PacketGuard(local_50);
      }
    }
  }
  return uVar4;
}
```
