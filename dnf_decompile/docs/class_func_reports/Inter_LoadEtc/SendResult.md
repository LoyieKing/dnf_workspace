# SendResult

`_ZN13Inter_LoadEtc10SendResultEP5CUser`

`Inter_LoadEtc::SendResult(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c2b82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c2b82  _ZN13Inter_LoadEtc10SendResultEP5CUser
#           Inter_LoadEtc::SendResult(CUser*)
# range [0x084c2b82, 0x084c3119]
084c2b82 +0x000:  push   %ebp
084c2b83 +0x001:  mov    %esp,%ebp
084c2b85 +0x003:  push   %esi
084c2b86 +0x004:  push   %ebx
084c2b87 +0x005:  add    $0xffffff80,%esp
084c2b8a +0x008:  lea    -0x44(%ebp),%eax
084c2b8d +0x00b:  mov    %eax,(%esp)
084c2b90 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c2b95 +0x013:  movl   $0x4,0x8(%esp)
084c2b9d +0x01b:  movl   $0x1,0x4(%esp)
084c2ba5 +0x023:  lea    -0x44(%ebp),%eax
084c2ba8 +0x026:  mov    %eax,(%esp)
084c2bab +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c2bb0 +0x02e:  movl   $0x1,0x4(%esp)
084c2bb8 +0x036:  lea    -0x44(%ebp),%eax
084c2bbb +0x039:  mov    %eax,(%esp)
084c2bbe +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2bc3 +0x041:  mov    0xc(%ebp),%eax
084c2bc6 +0x044:  mov    %eax,(%esp)
084c2bc9 +0x047:  call   0822fde6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5490>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5490
084c2bce +0x04c:  mov    %eax,0x4(%esp)
084c2bd2 +0x050:  lea    -0x44(%ebp),%eax
084c2bd5 +0x053:  mov    %eax,(%esp)
084c2bd8 +0x056:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2bdd +0x05b:  mov    0xc(%ebp),%eax
084c2be0 +0x05e:  mov    %eax,(%esp)
084c2be3 +0x061:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
084c2be8 +0x066:  mov    %eax,0x4(%esp)
084c2bec +0x06a:  lea    -0x44(%ebp),%eax
084c2bef +0x06d:  mov    %eax,(%esp)
084c2bf2 +0x070:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2bf7 +0x075:  mov    0xc(%ebp),%eax
084c2bfa +0x078:  mov    %eax,(%esp)
084c2bfd +0x07b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
084c2c02 +0x080:  movzwl %ax,%eax
084c2c05 +0x083:  mov    %eax,0x4(%esp)
084c2c09 +0x087:  lea    -0x44(%ebp),%eax
084c2c0c +0x08a:  mov    %eax,(%esp)
084c2c0f +0x08d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2c14 +0x092:  mov    0xc(%ebp),%eax
084c2c17 +0x095:  mov    %eax,(%esp)
084c2c1a +0x098:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
084c2c1f +0x09d:  movzwl %ax,%eax
084c2c22 +0x0a0:  mov    %eax,0x4(%esp)
084c2c26 +0x0a4:  lea    -0x44(%ebp),%eax
084c2c29 +0x0a7:  mov    %eax,(%esp)
084c2c2c +0x0aa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2c31 +0x0af:  mov    0xc(%ebp),%eax
084c2c34 +0x0b2:  mov    %eax,(%esp)
084c2c37 +0x0b5:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
084c2c3c +0x0ba:  movzwl %ax,%eax
084c2c3f +0x0bd:  mov    %eax,0x4(%esp)
084c2c43 +0x0c1:  lea    -0x44(%ebp),%eax
084c2c46 +0x0c4:  mov    %eax,(%esp)
084c2c49 +0x0c7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2c4e +0x0cc:  mov    0xc(%ebp),%eax
084c2c51 +0x0cf:  mov    %eax,(%esp)
084c2c54 +0x0d2:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
084c2c59 +0x0d7:  movzwl %ax,%eax
084c2c5c +0x0da:  mov    %eax,0x4(%esp)
084c2c60 +0x0de:  lea    -0x44(%ebp),%eax
084c2c63 +0x0e1:  mov    %eax,(%esp)
084c2c66 +0x0e4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2c6b +0x0e9:  mov    0xc(%ebp),%eax
084c2c6e +0x0ec:  mov    %eax,(%esp)
084c2c71 +0x0ef:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
084c2c76 +0x0f4:  mov    %eax,-0x28(%ebp)
084c2c79 +0x0f7:  lea    -0x50(%ebp),%eax
084c2c7c +0x0fa:  movl   $0x270f,0x8(%esp)
084c2c84 +0x102:  mov    -0x28(%ebp),%edx
084c2c87 +0x105:  mov    %edx,0x4(%esp)
084c2c8b +0x109:  mov    %eax,(%esp)
084c2c8e +0x10c:  call   086ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>  ; WongWork::CUserPremium::GetPremiumInfoList(int) const
084c2c93 +0x111:  sub    $0x4,%esp
084c2c96 +0x114:  lea    -0x44(%ebp),%eax
084c2c99 +0x117:  mov    %eax,(%esp)
084c2c9c +0x11a:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084c2ca1 +0x11f:  mov    %eax,-0x54(%ebp)
084c2ca4 +0x122:  movl   $0x0,-0x24(%ebp)
084c2cab +0x129:  movl   $0x0,0x4(%esp)
084c2cb3 +0x131:  lea    -0x44(%ebp),%eax
084c2cb6 +0x134:  mov    %eax,(%esp)
084c2cb9 +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2cbe +0x13c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c2cc5 +0x143:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c2cca +0x148:  mov    %eax,-0x20(%ebp)
084c2ccd +0x14b:  lea    -0x58(%ebp),%eax
084c2cd0 +0x14e:  lea    -0x50(%ebp),%edx
084c2cd3 +0x151:  mov    %edx,0x4(%esp)
084c2cd7 +0x155:  mov    %eax,(%esp)
084c2cda +0x158:  call   084f14ca <_GLOBAL__I__Z7getUserj+0x847c>  ; global constructors keyed to getUser(unsigned int)+0x847c
084c2cdf +0x15d:  sub    $0x4,%esp
084c2ce2 +0x160:  lea    -0x5c(%ebp),%eax
084c2ce5 +0x163:  lea    -0x50(%ebp),%edx
084c2ce8 +0x166:  mov    %edx,0x4(%esp)
084c2cec +0x16a:  mov    %eax,(%esp)
084c2cef +0x16d:  call   084f14f6 <_GLOBAL__I__Z7getUserj+0x84a8>  ; global constructors keyed to getUser(unsigned int)+0x84a8
084c2cf4 +0x172:  sub    $0x4,%esp
084c2cf7 +0x175:  jmp    084c2ddc <+0x25a>
084c2cfc +0x17a:  lea    -0x58(%ebp),%eax
084c2cff +0x17d:  mov    %eax,(%esp)
084c2d02 +0x180:  call   084f1564 <_GLOBAL__I__Z7getUserj+0x8516>  ; global constructors keyed to getUser(unsigned int)+0x8516
084c2d07 +0x185:  mov    (%eax),%edx
084c2d09 +0x187:  mov    %edx,-0x74(%ebp)
084c2d0c +0x18a:  mov    0x4(%eax),%edx
084c2d0f +0x18d:  mov    %edx,-0x70(%ebp)
084c2d12 +0x190:  mov    0x8(%eax),%edx
084c2d15 +0x193:  mov    %edx,-0x6c(%ebp)
084c2d18 +0x196:  mov    0xc(%eax),%edx
084c2d1b +0x199:  mov    %edx,-0x68(%ebp)
084c2d1e +0x19c:  mov    0x10(%eax),%eax
084c2d21 +0x19f:  mov    %eax,-0x64(%ebp)
084c2d24 +0x1a2:  lea    -0x58(%ebp),%eax
084c2d27 +0x1a5:  mov    %eax,(%esp)
084c2d2a +0x1a8:  call   084f156e <_GLOBAL__I__Z7getUserj+0x8520>  ; global constructors keyed to getUser(unsigned int)+0x8520
084c2d2f +0x1ad:  mov    0x10(%eax),%eax
084c2d32 +0x1b0:  cmp    $0x2,%eax
084c2d35 +0x1b3:  sete   %al
084c2d38 +0x1b6:  test   %al,%al
084c2d3a +0x1b8:  jne    084c2dcd <+0x24b>
084c2d40 +0x1be:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c2d45 +0x1c3:  mov    %eax,(%esp)
084c2d48 +0x1c6:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
084c2d4d +0x1cb:  test   %al,%al
084c2d4f +0x1cd:  je     084c2d68 <+0x1e6>
084c2d51 +0x1cf:  mov    0xc(%ebp),%eax
084c2d54 +0x1d2:  mov    %eax,(%esp)
084c2d57 +0x1d5:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
084c2d5c +0x1da:  cmp    $0x9,%eax
084c2d5f +0x1dd:  jg     084c2d68 <+0x1e6>
084c2d61 +0x1df:  mov    $0x1,%eax
084c2d66 +0x1e4:  jmp    084c2d6d <+0x1eb>
084c2d68 +0x1e6:  mov    $0x0,%eax
084c2d6d +0x1eb:  test   %al,%al
084c2d6f +0x1ed:  je     084c2d88 <+0x206>
084c2d71 +0x1ef:  lea    -0x58(%ebp),%eax
084c2d74 +0x1f2:  mov    %eax,(%esp)
084c2d77 +0x1f5:  call   084f156e <_GLOBAL__I__Z7getUserj+0x8520>  ; global constructors keyed to getUser(unsigned int)+0x8520
084c2d7c +0x1fa:  mov    (%eax),%eax
084c2d7e +0x1fc:  cmp    $0x21,%eax
084c2d81 +0x1ff:  sete   %al
084c2d84 +0x202:  test   %al,%al
084c2d86 +0x204:  jne    084c2dd0 <+0x24e>
084c2d88 +0x206:  lea    -0x58(%ebp),%eax
084c2d8b +0x209:  mov    %eax,(%esp)
084c2d8e +0x20c:  call   084f156e <_GLOBAL__I__Z7getUserj+0x8520>  ; global constructors keyed to getUser(unsigned int)+0x8520
084c2d93 +0x211:  mov    (%eax),%eax
084c2d95 +0x213:  movzbl %al,%eax
084c2d98 +0x216:  mov    %eax,0x4(%esp)
084c2d9c +0x21a:  lea    -0x44(%ebp),%eax
084c2d9f +0x21d:  mov    %eax,(%esp)
084c2da2 +0x220:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2da7 +0x225:  lea    -0x58(%ebp),%eax
084c2daa +0x228:  mov    %eax,(%esp)
084c2dad +0x22b:  call   084f156e <_GLOBAL__I__Z7getUserj+0x8520>  ; global constructors keyed to getUser(unsigned int)+0x8520
084c2db2 +0x230:  mov    0x8(%eax),%eax
084c2db5 +0x233:  sub    -0x20(%ebp),%eax
084c2db8 +0x236:  mov    %eax,0x4(%esp)
084c2dbc +0x23a:  lea    -0x44(%ebp),%eax
084c2dbf +0x23d:  mov    %eax,(%esp)
084c2dc2 +0x240:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2dc7 +0x245:  addl   $0x1,-0x24(%ebp)
084c2dcb +0x249:  jmp    084c2dd1 <+0x24f>
084c2dcd +0x24b:  nop
084c2dce +0x24c:  jmp    084c2dd1 <+0x24f>
084c2dd0 +0x24e:  nop
084c2dd1 +0x24f:  lea    -0x58(%ebp),%eax
084c2dd4 +0x252:  mov    %eax,(%esp)
084c2dd7 +0x255:  call   084f154e <_GLOBAL__I__Z7getUserj+0x8500>  ; global constructors keyed to getUser(unsigned int)+0x8500
084c2ddc +0x25a:  lea    -0x5c(%ebp),%eax
084c2ddf +0x25d:  mov    %eax,0x4(%esp)
084c2de3 +0x261:  lea    -0x58(%ebp),%eax
084c2de6 +0x264:  mov    %eax,(%esp)
084c2de9 +0x267:  call   084f1522 <_GLOBAL__I__Z7getUserj+0x84d4>  ; global constructors keyed to getUser(unsigned int)+0x84d4
084c2dee +0x26c:  test   %al,%al
084c2df0 +0x26e:  jne    084c2cfc <+0x17a>
084c2df6 +0x274:  mov    -0x24(%ebp),%eax
084c2df9 +0x277:  mov    %eax,0x8(%esp)
084c2dfd +0x27b:  lea    -0x54(%ebp),%eax
084c2e00 +0x27e:  mov    %eax,0x4(%esp)
084c2e04 +0x282:  lea    -0x44(%ebp),%eax
084c2e07 +0x285:  mov    %eax,(%esp)
084c2e0a +0x288:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084c2e0f +0x28d:  mov    0xc(%ebp),%eax
084c2e12 +0x290:  mov    %eax,(%esp)
084c2e15 +0x293:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
084c2e1a +0x298:  mov    %eax,0x4(%esp)
084c2e1e +0x29c:  lea    -0x44(%ebp),%eax
084c2e21 +0x29f:  mov    %eax,(%esp)
084c2e24 +0x2a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2e29 +0x2a7:  mov    0xc(%ebp),%eax
084c2e2c +0x2aa:  mov    %eax,(%esp)
084c2e2f +0x2ad:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c2e34 +0x2b2:  test   %eax,%eax
084c2e36 +0x2b4:  sete   %al
084c2e39 +0x2b7:  test   %al,%al
084c2e3b +0x2b9:  je     084c2e7d <+0x2fb>
084c2e3d +0x2bb:  movl   $0x5,0xc(%esp)
084c2e45 +0x2c3:  movl   $0x1323,0x8(%esp)
084c2e4d +0x2cb:  movl   $&_ZZN13Inter_LoadEtc10SendResultEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
084c2e55 +0x2d3:  lea    -0x38(%ebp),%eax
084c2e58 +0x2d6:  mov    %eax,(%esp)
084c2e5b +0x2d9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c2e60 +0x2de:  movl   $"bool Inter_LoadEtc::SendResult()",0x4(%esp)
084c2e68 +0x2e6:  lea    -0x38(%ebp),%eax
084c2e6b +0x2e9:  mov    %eax,(%esp)
084c2e6e +0x2ec:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c2e73 +0x2f1:  mov    $0x0,%ebx
084c2e78 +0x2f6:  jmp    084c30db <+0x559>
084c2e7d +0x2fb:  mov    0xc(%ebp),%eax
084c2e80 +0x2fe:  mov    %eax,(%esp)
084c2e83 +0x301:  call   0868d144 <_ZN5CUser16verifyDoingQuestEv>  ; CUser::verifyDoingQuest()
084c2e88 +0x306:  movl   $0x0,-0x14(%ebp)
084c2e8f +0x30d:  jmp    084c2f1c <+0x39a>
084c2e94 +0x312:  mov    0xc(%ebp),%eax
084c2e97 +0x315:  mov    %eax,(%esp)
084c2e9a +0x318:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c2e9f +0x31d:  mov    -0x14(%ebp),%edx
084c2ea2 +0x320:  add    $0x1d4c,%edx
084c2ea8 +0x326:  mov    0x8(%eax,%edx,4),%eax
084c2eac +0x32a:  test   %eax,%eax
084c2eae +0x32c:  sete   %al
084c2eb1 +0x32f:  test   %al,%al
084c2eb3 +0x331:  je     084c2eca <+0x348>
084c2eb5 +0x333:  movl   $0xffff,0x4(%esp)
084c2ebd +0x33b:  lea    -0x44(%ebp),%eax
084c2ec0 +0x33e:  mov    %eax,(%esp)
084c2ec3 +0x341:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2ec8 +0x346:  jmp    084c2ef1 <+0x36f>
084c2eca +0x348:  mov    0xc(%ebp),%eax
084c2ecd +0x34b:  mov    %eax,(%esp)
084c2ed0 +0x34e:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c2ed5 +0x353:  mov    -0x14(%ebp),%edx
084c2ed8 +0x356:  add    $0x1d4c,%edx
084c2ede +0x35c:  mov    0x8(%eax,%edx,4),%eax
084c2ee2 +0x360:  mov    %eax,0x4(%esp)
084c2ee6 +0x364:  lea    -0x44(%ebp),%eax
084c2ee9 +0x367:  mov    %eax,(%esp)
084c2eec +0x36a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2ef1 +0x36f:  mov    0xc(%ebp),%eax
084c2ef4 +0x372:  mov    %eax,(%esp)
084c2ef7 +0x375:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c2efc +0x37a:  mov    -0x14(%ebp),%edx
084c2eff +0x37d:  add    $0x1d60,%edx
084c2f05 +0x383:  mov    0x8(%eax,%edx,4),%eax
084c2f09 +0x387:  mov    %eax,0x4(%esp)
084c2f0d +0x38b:  lea    -0x44(%ebp),%eax
084c2f10 +0x38e:  mov    %eax,(%esp)
084c2f13 +0x391:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2f18 +0x396:  addl   $0x1,-0x14(%ebp)
084c2f1c +0x39a:  cmpl   $0x13,-0x14(%ebp)
084c2f20 +0x39e:  setle  %al
084c2f23 +0x3a1:  test   %al,%al
084c2f25 +0x3a3:  jne    084c2e94 <+0x312>
084c2f2b +0x3a9:  movl   $0x0,-0x10(%ebp)
084c2f32 +0x3b0:  jmp    084c2f5f <+0x3dd>
084c2f34 +0x3b2:  mov    0xc(%ebp),%eax
084c2f37 +0x3b5:  mov    %eax,(%esp)
084c2f3a +0x3b8:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
084c2f3f +0x3bd:  mov    -0x10(%ebp),%edx
084c2f42 +0x3c0:  add    $0x1d7c,%edx
084c2f48 +0x3c6:  mov    0x4(%eax,%edx,4),%eax
084c2f4c +0x3ca:  mov    %eax,0x4(%esp)
084c2f50 +0x3ce:  lea    -0x44(%ebp),%eax
084c2f53 +0x3d1:  mov    %eax,(%esp)
084c2f56 +0x3d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c2f5b +0x3d9:  addl   $0x1,-0x10(%ebp)
084c2f5f +0x3dd:  cmpl   $0x4,-0x10(%ebp)
084c2f63 +0x3e1:  setle  %al
084c2f66 +0x3e4:  test   %al,%al
084c2f68 +0x3e6:  jne    084c2f34 <+0x3b2>
084c2f6a +0x3e8:  mov    0xc(%ebp),%eax
084c2f6d +0x3eb:  mov    %eax,(%esp)
084c2f70 +0x3ee:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
084c2f75 +0x3f3:  movsbl %al,%eax
084c2f78 +0x3f6:  mov    %eax,0x4(%esp)
084c2f7c +0x3fa:  lea    -0x44(%ebp),%eax
084c2f7f +0x3fd:  mov    %eax,(%esp)
084c2f82 +0x400:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2f87 +0x405:  mov    0xc(%ebp),%eax
084c2f8a +0x408:  mov    %eax,(%esp)
084c2f8d +0x40b:  call   084ecad4 <_GLOBAL__I__Z7getUserj+0x3a86>  ; global constructors keyed to getUser(unsigned int)+0x3a86
084c2f92 +0x410:  movzbl %al,%eax
084c2f95 +0x413:  mov    %eax,0x4(%esp)
084c2f99 +0x417:  lea    -0x44(%ebp),%eax
084c2f9c +0x41a:  mov    %eax,(%esp)
084c2f9f +0x41d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2fa4 +0x422:  lea    -0x44(%ebp),%eax
084c2fa7 +0x425:  mov    %eax,(%esp)
084c2faa +0x428:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
084c2faf +0x42d:  mov    %eax,-0x60(%ebp)
084c2fb2 +0x430:  movl   $0x0,-0x1c(%ebp)
084c2fb9 +0x437:  mov    -0x1c(%ebp),%eax
084c2fbc +0x43a:  mov    %eax,0x4(%esp)
084c2fc0 +0x43e:  lea    -0x44(%ebp),%eax
084c2fc3 +0x441:  mov    %eax,(%esp)
084c2fc6 +0x444:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c2fcb +0x449:  movl   $0x0,-0xc(%ebp)
084c2fd2 +0x450:  jmp    084c3009 <+0x487>
084c2fd4 +0x452:  mov    -0xc(%ebp),%edx
084c2fd7 +0x455:  mov    0xc(%ebp),%eax
084c2fda +0x458:  mov    %edx,0x4(%esp)
084c2fde +0x45c:  mov    %eax,(%esp)
084c2fe1 +0x45f:  call   0864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>  ; CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int)
084c2fe6 +0x464:  test   %al,%al
084c2fe8 +0x466:  setne  %al
084c2feb +0x469:  test   %al,%al
084c2fed +0x46b:  je     084c3005 <+0x483>
084c2fef +0x46d:  mov    -0xc(%ebp),%eax
084c2ff2 +0x470:  mov    %eax,0x4(%esp)
084c2ff6 +0x474:  lea    -0x44(%ebp),%eax
084c2ff9 +0x477:  mov    %eax,(%esp)
084c2ffc +0x47a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c3001 +0x47f:  addl   $0x1,-0x1c(%ebp)
084c3005 +0x483:  addl   $0x1,-0xc(%ebp)
084c3009 +0x487:  cmpl   $0x7f,-0xc(%ebp)
084c300d +0x48b:  setle  %al
084c3010 +0x48e:  test   %al,%al
084c3012 +0x490:  jne    084c2fd4 <+0x452>
084c3014 +0x492:  mov    -0x1c(%ebp),%eax
084c3017 +0x495:  mov    %eax,0x8(%esp)
084c301b +0x499:  lea    -0x60(%ebp),%eax
084c301e +0x49c:  mov    %eax,0x4(%esp)
084c3022 +0x4a0:  lea    -0x44(%ebp),%eax
084c3025 +0x4a3:  mov    %eax,(%esp)
084c3028 +0x4a6:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
084c302d +0x4ab:  mov    0xc(%ebp),%eax
084c3030 +0x4ae:  mov    %eax,(%esp)
084c3033 +0x4b1:  call   084a857e <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0xe4>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0xe4
084c3038 +0x4b6:  cwtl
084c3039 +0x4b7:  mov    %eax,0x4(%esp)
084c303d +0x4bb:  lea    -0x44(%ebp),%eax
084c3040 +0x4be:  mov    %eax,(%esp)
084c3043 +0x4c1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c3048 +0x4c6:  mov    0xc(%ebp),%eax
084c304b +0x4c9:  mov    %eax,(%esp)
084c304e +0x4cc:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
084c3053 +0x4d1:  movzwl %ax,%eax
084c3056 +0x4d4:  mov    %eax,0x4(%esp)
084c305a +0x4d8:  lea    -0x44(%ebp),%eax
084c305d +0x4db:  mov    %eax,(%esp)
084c3060 +0x4de:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c3065 +0x4e3:  movb   $0x0,-0x15(%ebp)
084c3069 +0x4e7:  mov    0xc(%ebp),%eax
084c306c +0x4ea:  mov    %eax,(%esp)
084c306f +0x4ed:  call   08689880 <_ZN5CUser27isTradePunishOverThirtyDaysEv>  ; CUser::isTradePunishOverThirtyDays()
084c3074 +0x4f2:  test   %al,%al
084c3076 +0x4f4:  je     084c307c <+0x4fa>
084c3078 +0x4f6:  movb   $0x1,-0x15(%ebp)
084c307c +0x4fa:  movzbl -0x15(%ebp),%eax
084c3080 +0x4fe:  mov    %eax,0x4(%esp)
084c3084 +0x502:  lea    -0x44(%ebp),%eax
084c3087 +0x505:  mov    %eax,(%esp)
084c308a +0x508:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084c308f +0x50d:  movl   $0x1,0x4(%esp)
084c3097 +0x515:  lea    -0x44(%ebp),%eax
084c309a +0x518:  mov    %eax,(%esp)
084c309d +0x51b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c30a2 +0x520:  lea    -0x44(%ebp),%eax
084c30a5 +0x523:  mov    %eax,0x4(%esp)
084c30a9 +0x527:  mov    0xc(%ebp),%eax
084c30ac +0x52a:  mov    %eax,(%esp)
084c30af +0x52d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c30b4 +0x532:  mov    0xc(%ebp),%eax
084c30b7 +0x535:  mov    %eax,(%esp)
084c30ba +0x538:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
084c30bf +0x53d:  mov    $0x1,%ebx
084c30c4 +0x542:  jmp    084c30db <+0x559>
084c30c6 +0x544:  mov    %edx,%ebx
084c30c8 +0x546:  mov    %eax,%esi
084c30ca +0x548:  lea    -0x50(%ebp),%eax
084c30cd +0x54b:  mov    %eax,(%esp)
084c30d0 +0x54e:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
084c30d5 +0x553:  mov    %esi,%eax
084c30d7 +0x555:  mov    %ebx,%edx
084c30d9 +0x557:  jmp    084c30e8 <+0x566>
084c30db +0x559:  lea    -0x50(%ebp),%eax
084c30de +0x55c:  mov    %eax,(%esp)
084c30e1 +0x55f:  call   0832850a <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x463>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x463
084c30e6 +0x564:  jmp    084c3103 <+0x581>
084c30e8 +0x566:  mov    %edx,%ebx
084c30ea +0x568:  mov    %eax,%esi
084c30ec +0x56a:  lea    -0x44(%ebp),%eax
084c30ef +0x56d:  mov    %eax,(%esp)
084c30f2 +0x570:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c30f7 +0x575:  mov    %esi,%eax
084c30f9 +0x577:  mov    %ebx,%edx
084c30fb +0x579:  mov    %eax,(%esp)
084c30fe +0x57c:  call   08ae3750 <_Unwind_Resume>
084c3103 +0x581:  lea    -0x44(%ebp),%eax
084c3106 +0x584:  mov    %eax,(%esp)
084c3109 +0x587:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c310e +0x58c:  mov    %ebx,%eax
084c3110 +0x58e:  lea    -0x8(%ebp),%esp
084c3113 +0x591:  add    $0x0,%esp
084c3116 +0x594:  pop    %ebx
084c3117 +0x595:  pop    %esi
084c3118 +0x596:  pop    %ebp
084c3119 +0x597:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::SendResult @ 0x84c2b82

/* Inter_LoadEtc::SendResult(CUser*) */

undefined4 __thiscall Inter_LoadEtc::SendResult(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  GameWorld *this_00;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  int local_64;
  __normal_iterator local_60 [4];
  __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_5c [4];
  int local_58;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_54 [12];
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte local_19;
  int local_18;
  int local_14;
  uint local_10;
  
  PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084c2bab to 084c2c92 has its CatchHandler @ 084c30e8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
  iVar4 = CUser::getRegTime(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  uVar5 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUser::getCurCharacTotalFatigue(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUser::getCurCharacTotalMaxFatigue(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  local_2c = CUser::GetPremiumInfo(param_1);
  WongWork::CUserPremium::GetPremiumInfoList((int)local_54);
  local_58 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_48);
  local_28 = 0;
                    /* try { // try from 084c2cb9 to 084c30be has its CatchHandler @ 084c30c6 */
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
  while (bVar1 = __gnu_cxx::operator!=(local_5c,local_60), bVar1) {
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator*(local_5c);
    iVar4 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_5c);
    if (*(int *)(iVar4 + 0x10) != 2) {
      this_00 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
      if ((cVar2 == '\0') ||
         (iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), 9 < iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) ||
         (piVar6 = (int *)__gnu_cxx::
                          __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                          ::operator->(local_5c), *piVar6 != 0x21)) {
        puVar7 = (uint *)__gnu_cxx::
                         __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                         ::operator->(local_5c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*puVar7 & 0xff);
        iVar4 = __gnu_cxx::
                __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                ::operator->(local_5c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8) - local_24);
        local_28 = local_28 + 1;
      }
    }
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_5c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,&local_58,local_28);
  iVar4 = CUser::GetCera(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    cMyTrace::cMyTrace(local_3c,"bool Inter_LoadEtc::SendResult(CUser*)",0x1323,5);
    cMyTrace::operator()(local_3c,"bool Inter_LoadEtc::SendResult()");
    uVar8 = 0;
  }
  else {
    CUser::verifyDoingQuest(param_1);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar4 = CUser::getCurCharacQuestR(param_1);
      if (*(int *)(iVar4 + 8 + (local_18 + 0x1d4c) * 4) == 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,0xffff);
      }
      else {
        iVar4 = CUser::getCurCharacQuestR(param_1);
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8 + (local_18 + 0x1d4c) * 4));
      }
      iVar4 = CUser::getCurCharacQuestR(param_1);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8 + (local_18 + 0x1d60) * 4));
    }
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      iVar4 = CUser::getCurCharacQuestR(param_1);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 4 + (local_14 + 0x1d7c) * 4));
    }
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(int)cVar2);
    uVar5 = CUser::GetTutorialSkipable(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,uVar5 & 0xff);
    local_64 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_48);
    local_20 = 0;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    for (local_10 = 0; (int)local_10 < 0x80; local_10 = local_10 + 1) {
      cVar2 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag((CUserCharacInfo *)param_1,local_10)
      ;
      if (cVar2 != '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,local_10);
        local_20 = local_20 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,&local_64,local_20);
    sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(int)sVar3);
    uVar5 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
    local_19 = 0;
    cVar2 = CUser::isTradePunishOverThirtyDays(param_1);
    if (cVar2 != '\0') {
      local_19 = 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_19);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
    AvatarCoin::SendSyncPacket(param_1);
    uVar8 = 1;
  }
                    /* try { // try from 084c30e1 to 084c30e5 has its CatchHandler @ 084c30e8 */
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_54);
  PacketGuard::~PacketGuard(local_48);
  return uVar8;
}
```
