# process

`_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Send` | `0x081cc958` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc958  _ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cc958, 0x081ccdb1]
081cc958 +0x000:  push   %ebp
081cc959 +0x001:  mov    %esp,%ebp
081cc95b +0x003:  push   %edi
081cc95c +0x004:  push   %esi
081cc95d +0x005:  push   %ebx
081cc95e +0x006:  sub    $0x400c,%esp
081cc964 +0x00c:  mov    0x14(%ebp),%eax
081cc967 +0x00f:  mov    %eax,-0x40(%ebp)
081cc96a +0x012:  mov    0x10(%ebp),%eax
081cc96d +0x015:  mov    %eax,0x8(%esp)
081cc971 +0x019:  mov    0xc(%ebp),%eax
081cc974 +0x01c:  mov    %eax,0x4(%esp)
081cc978 +0x020:  mov    0x8(%ebp),%eax
081cc97b +0x023:  mov    %eax,(%esp)
081cc97e +0x026:  call   081cc636 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MailBox_Send::check_error(CUser*, MSG_BASE&)
081cc983 +0x02b:  mov    %eax,%edx
081cc985 +0x02d:  mov    -0x40(%ebp),%eax
081cc988 +0x030:  mov    %edx,0x4(%eax)
081cc98b +0x033:  mov    -0x40(%ebp),%eax
081cc98e +0x036:  mov    0x4(%eax),%eax
081cc991 +0x039:  test   %eax,%eax
081cc993 +0x03b:  jle    081cc99f <+0x47>
081cc995 +0x03d:  mov    $0x0,%eax
081cc99a +0x042:  jmp    081ccda7 <+0x44f>
081cc99f +0x047:  mov    -0x40(%ebp),%eax
081cc9a2 +0x04a:  mov    0x4(%eax),%eax
081cc9a5 +0x04d:  test   %eax,%eax
081cc9a7 +0x04f:  jns    081cc9db <+0x83>
081cc9a9 +0x051:  mov    0xc(%ebp),%eax
081cc9ac +0x054:  mov    %eax,(%esp)
081cc9af +0x057:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cc9b4 +0x05c:  mov    -0x40(%ebp),%edx
081cc9b7 +0x05f:  mov    0x4(%edx),%edx
081cc9ba +0x062:  mov    %eax,0xc(%esp)
081cc9be +0x066:  mov    %edx,0x8(%esp)
081cc9c2 +0x06a:  movl   $&_ZZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cc9ca +0x072:  movl   $0x23ce,(%esp)
081cc9d1 +0x079:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc9d6 +0x07e:  jmp    081ccda7 <+0x44f>
081cc9db +0x083:  mov    0x10(%ebp),%eax
081cc9de +0x086:  mov    %eax,-0x3c(%ebp)
081cc9e1 +0x089:  mov    -0x3c(%ebp),%eax
081cc9e4 +0x08c:  mov    0x32(%eax),%eax
081cc9e7 +0x08f:  test   %eax,%eax
081cc9e9 +0x091:  je     081cca98 <+0x140>
081cc9ef +0x097:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081cc9f4 +0x09c:  mov    0xa624(%eax),%eax
081cc9fa +0x0a2:  mov    %eax,-0x2c(%ebp)
081cc9fd +0x0a5:  mov    0xc(%ebp),%eax
081cca00 +0x0a8:  mov    %eax,(%esp)
081cca03 +0x0ab:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081cca08 +0x0b0:  movl   $0x1,0xc(%esp)
081cca10 +0x0b8:  movl   $0x16,0x8(%esp)
081cca18 +0x0c0:  mov    -0x2c(%ebp),%edx
081cca1b +0x0c3:  mov    %edx,0x4(%esp)
081cca1f +0x0c7:  mov    %eax,(%esp)
081cca22 +0x0ca:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081cca27 +0x0cf:  mov    -0x3c(%ebp),%eax
081cca2a +0x0d2:  add    $0x45,%eax
081cca2d +0x0d5:  mov    %eax,-0x3ff4(%ebp)
081cca33 +0x0db:  mov    -0x3c(%ebp),%eax
081cca36 +0x0de:  mov    0x41(%eax),%edi
081cca39 +0x0e1:  mov    0xc(%ebp),%eax
081cca3c +0x0e4:  mov    %eax,(%esp)
081cca3f +0x0e7:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081cca44 +0x0ec:  mov    %eax,%esi
081cca46 +0x0ee:  mov    0xc(%ebp),%eax
081cca49 +0x0f1:  mov    %eax,(%esp)
081cca4c +0x0f4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cca51 +0x0f9:  mov    %eax,%ebx
081cca53 +0x0fb:  mov    0xc(%ebp),%eax
081cca56 +0x0fe:  mov    %eax,(%esp)
081cca59 +0x101:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cca5e +0x106:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081cca64 +0x10c:  mov    %eax,0x4(%esp)
081cca68 +0x110:  mov    %edx,(%esp)
081cca6b +0x113:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081cca70 +0x118:  mov    -0x3ff4(%ebp),%edx
081cca76 +0x11e:  mov    %edx,0x10(%esp)
081cca7a +0x122:  mov    %edi,0xc(%esp)
081cca7e +0x126:  mov    %esi,0x8(%esp)
081cca82 +0x12a:  mov    %ebx,0x4(%esp)
081cca86 +0x12e:  mov    %eax,(%esp)
081cca89 +0x131:  call   0846e084 <_ZN17CGuildServerProxy13SendGuildMailEjjiPc>  ; CGuildServerProxy::SendGuildMail(unsigned int, unsigned int, int, char*)
081cca8e +0x136:  mov    $0x0,%eax
081cca93 +0x13b:  jmp    081ccda7 <+0x44f>
081cca98 +0x140:  mov    -0x3c(%ebp),%eax
081cca9b +0x143:  mov    0x2e(%eax),%eax
081cca9e +0x146:  test   %eax,%eax
081ccaa0 +0x148:  je     081ccab8 <+0x160>
081ccaa2 +0x14a:  mov    0xc(%ebp),%eax
081ccaa5 +0x14d:  mov    %eax,(%esp)
081ccaa8 +0x150:  call   0868a51a <_ZN5CUser18reqSendMailCertifyEv>  ; CUser::reqSendMailCertify()
081ccaad +0x155:  test   %al,%al
081ccaaf +0x157:  je     081ccab8 <+0x160>
081ccab1 +0x159:  mov    $0x1,%eax
081ccab6 +0x15e:  jmp    081ccabd <+0x165>
081ccab8 +0x160:  mov    $0x0,%eax
081ccabd +0x165:  test   %al,%al
081ccabf +0x167:  je     081ccadd <+0x185>
081ccac1 +0x169:  mov    -0x3c(%ebp),%eax
081ccac4 +0x16c:  mov    %eax,0x4(%esp)
081ccac8 +0x170:  mov    0xc(%ebp),%eax
081ccacb +0x173:  mov    %eax,(%esp)
081ccace +0x176:  call   0868a4b6 <_ZN5CUser15set_MailMsgDataEP16MSG_MAILBOX_SEND>  ; CUser::set_MailMsgData(MSG_MAILBOX_SEND*)
081ccad3 +0x17b:  mov    $0x0,%eax
081ccad8 +0x180:  jmp    081ccda7 <+0x44f>
081ccadd +0x185:  mov    -0x3c(%ebp),%eax
081ccae0 +0x188:  mov    %eax,0x4(%esp)
081ccae4 +0x18c:  lea    -0x3fd0(%ebp),%eax
081ccaea +0x192:  mov    %eax,(%esp)
081ccaed +0x195:  call   08236e06 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc4b0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc4b0
081ccaf2 +0x19a:  mov    -0x3c(%ebp),%eax
081ccaf5 +0x19d:  lea    0x11(%eax),%edx
081ccaf8 +0x1a0:  lea    -0x3fd0(%ebp),%eax
081ccafe +0x1a6:  mov    %eax,0x8(%esp)
081ccb02 +0x1aa:  mov    %edx,0x4(%esp)
081ccb06 +0x1ae:  mov    0xc(%ebp),%eax
081ccb09 +0x1b1:  mov    %eax,(%esp)
081ccb0c +0x1b4:  call   08555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
081ccb11 +0x1b9:  mov    %eax,-0x38(%ebp)
081ccb14 +0x1bc:  cmpl   $0x0,-0x38(%ebp)
081ccb18 +0x1c0:  je     081ccb28 <+0x1d0>
081ccb1a +0x1c2:  mov    -0x40(%ebp),%eax
081ccb1d +0x1c5:  mov    -0x38(%ebp),%edx
081ccb20 +0x1c8:  mov    %edx,0x4(%eax)
081ccb23 +0x1cb:  jmp    081ccbb6 <+0x25e>
081ccb28 +0x1d0:  movb   $0x0,-0x25(%ebp)
081ccb2c +0x1d4:  mov    -0x3c(%ebp),%eax
081ccb2f +0x1d7:  mov    0x39(%eax),%eax
081ccb32 +0x1da:  mov    %eax,%ebx
081ccb34 +0x1dc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081ccb39 +0x1e1:  mov    %ebx,0x4(%esp)
081ccb3d +0x1e5:  mov    %eax,(%esp)
081ccb40 +0x1e8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081ccb45 +0x1ed:  mov    %eax,-0x24(%ebp)
081ccb48 +0x1f0:  cmpl   $0x0,-0x24(%ebp)
081ccb4c +0x1f4:  je     081ccb8b <+0x233>
081ccb4e +0x1f6:  mov    -0x24(%ebp),%eax
081ccb51 +0x1f9:  mov    (%eax),%eax
081ccb53 +0x1fb:  add    $0x10,%eax
081ccb56 +0x1fe:  mov    (%eax),%edx
081ccb58 +0x200:  mov    -0x24(%ebp),%eax
081ccb5b +0x203:  mov    %eax,(%esp)
081ccb5e +0x206:  call   *%edx
081ccb60 +0x208:  xor    $0x1,%eax
081ccb63 +0x20b:  test   %al,%al
081ccb65 +0x20d:  je     081ccb7e <+0x226>
081ccb67 +0x20f:  mov    -0x24(%ebp),%eax
081ccb6a +0x212:  mov    %eax,(%esp)
081ccb6d +0x215:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
081ccb72 +0x21a:  cmp    $0x1,%eax
081ccb75 +0x21d:  jg     081ccb7e <+0x226>
081ccb77 +0x21f:  mov    $0x1,%eax
081ccb7c +0x224:  jmp    081ccb83 <+0x22b>
081ccb7e +0x226:  mov    $0x0,%eax
081ccb83 +0x22b:  test   %al,%al
081ccb85 +0x22d:  je     081ccb8b <+0x233>
081ccb87 +0x22f:  movb   $0x1,-0x25(%ebp)
081ccb8b +0x233:  mov    -0x3c(%ebp),%eax
081ccb8e +0x236:  mov    0x39(%eax),%eax
081ccb91 +0x239:  test   %eax,%eax
081ccb93 +0x23b:  jne    081ccb99 <+0x241>
081ccb95 +0x23d:  movb   $0x1,-0x25(%ebp)
081ccb99 +0x241:  movzbl -0x25(%ebp),%edx
081ccb9d +0x245:  mov    -0x3c(%ebp),%eax
081ccba0 +0x248:  mov    0x2e(%eax),%eax
081ccba3 +0x24b:  mov    %edx,0x8(%esp)
081ccba7 +0x24f:  mov    %eax,0x4(%esp)
081ccbab +0x253:  mov    0xc(%ebp),%eax
081ccbae +0x256:  mov    %eax,(%esp)
081ccbb1 +0x259:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
081ccbb6 +0x25e:  mov    0xc(%ebp),%eax
081ccbb9 +0x261:  mov    %eax,(%esp)
081ccbbc +0x264:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
081ccbc1 +0x269:  mov    %ax,-0x32(%ebp)
081ccbc5 +0x26d:  movl   $0x19,(%esp)
081ccbcc +0x274:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081ccbd1 +0x279:  mov    %eax,-0x30(%ebp)
081ccbd4 +0x27c:  mov    0xc(%ebp),%eax
081ccbd7 +0x27f:  mov    %eax,(%esp)
081ccbda +0x282:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ccbdf +0x287:  mov    %eax,(%esp)
081ccbe2 +0x28a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081ccbe7 +0x28f:  mov    %eax,-0x3fe0(%ebp)
081ccbed +0x295:  fildl  -0x3fe0(%ebp)
081ccbf3 +0x29b:  fildl  -0x30(%ebp)
081ccbf6 +0x29e:  fldl   &data#f224355d(.rodata)
081ccbfc +0x2a4:  fmulp  %st,%st(1)
081ccbfe +0x2a6:  fstps  -0x3fdc(%ebp)
081ccc04 +0x2ac:  flds   -0x3fdc(%ebp)
081ccc0a +0x2b2:  fldl   &data#a3841abf(.rodata)
081ccc10 +0x2b8:  faddp  %st,%st(1)
081ccc12 +0x2ba:  fmulp  %st,%st(1)
081ccc14 +0x2bc:  fnstcw -0x3fe2(%ebp)
081ccc1a +0x2c2:  movzwl -0x3fe2(%ebp),%eax
081ccc21 +0x2c9:  mov    $0xc,%ah
081ccc23 +0x2cb:  mov    %ax,-0x3fe4(%ebp)
081ccc2a +0x2d2:  fldcw  -0x3fe4(%ebp)
081ccc30 +0x2d8:  fistpll -0x3ff0(%ebp)
081ccc36 +0x2de:  fldcw  -0x3fe2(%ebp)
081ccc3c +0x2e4:  mov    -0x3ff0(%ebp),%eax
081ccc42 +0x2ea:  mov    -0x3fec(%ebp),%edx
081ccc48 +0x2f0:  mov    %eax,%edx
081ccc4a +0x2f2:  mov    -0x3c(%ebp),%eax
081ccc4d +0x2f5:  mov    0x2e(%eax),%eax
081ccc50 +0x2f8:  cmp    %eax,%edx
081ccc52 +0x2fa:  setbe  %al
081ccc55 +0x2fd:  test   %al,%al
081ccc57 +0x2ff:  je     081ccda2 <+0x44a>
081ccc5d +0x305:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081ccc62 +0x30a:  movl   $0x241d,0x8(%esp)
081ccc6a +0x312:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081ccc72 +0x31a:  mov    %eax,(%esp)
081ccc75 +0x31d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081ccc7a +0x322:  movl   $0x1,0x8(%esp)
081ccc82 +0x32a:  mov    %eax,0x4(%esp)
081ccc86 +0x32e:  lea    -0x48(%ebp),%eax
081ccc89 +0x331:  mov    %eax,(%esp)
081ccc8c +0x334:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081ccc91 +0x339:  lea    -0x48(%ebp),%eax
081ccc94 +0x33c:  mov    %eax,(%esp)
081ccc97 +0x33f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081ccc9c +0x344:  movl   $0x18a,0x4(%esp)
081ccca4 +0x34c:  mov    %eax,(%esp)
081ccca7 +0x34f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cccac +0x354:  mov    0xc(%ebp),%eax
081cccaf +0x357:  mov    %eax,(%esp)
081cccb2 +0x35a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cccb7 +0x35f:  mov    %eax,%ebx
081cccb9 +0x361:  lea    -0x48(%ebp),%eax
081cccbc +0x364:  mov    %eax,(%esp)
081cccbf +0x367:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cccc4 +0x36c:  mov    %ebx,0x4(%esp)
081cccc8 +0x370:  mov    %eax,(%esp)
081ccccb +0x373:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cccd0 +0x378:  lea    -0x48(%ebp),%eax
081cccd3 +0x37b:  mov    %eax,(%esp)
081cccd6 +0x37e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cccdb +0x383:  mov    %eax,(%esp)
081cccde +0x386:  call   08236e34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc4de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc4de
081ccce3 +0x38b:  mov    %eax,-0x20(%ebp)
081ccce6 +0x38e:  movl   $0x24,0x8(%esp)
081cccee +0x396:  movl   $0x0,0x4(%esp)
081cccf6 +0x39e:  mov    -0x20(%ebp),%eax
081cccf9 +0x3a1:  mov    %eax,(%esp)
081cccfc +0x3a4:  call   0807dcc0 <_init+0x5b8>
081ccd01 +0x3a9:  mov    0xc(%ebp),%eax
081ccd04 +0x3ac:  mov    %eax,(%esp)
081ccd07 +0x3af:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ccd0c +0x3b4:  mov    -0x20(%ebp),%edx
081ccd0f +0x3b7:  mov    %eax,(%edx)
081ccd11 +0x3b9:  mov    -0x3c(%ebp),%eax
081ccd14 +0x3bc:  mov    0xd(%eax),%eax
081ccd17 +0x3bf:  mov    -0x3c(%ebp),%edx
081ccd1a +0x3c2:  lea    0x11(%edx),%ecx
081ccd1d +0x3c5:  mov    -0x20(%ebp),%edx
081ccd20 +0x3c8:  add    $0x4,%edx
081ccd23 +0x3cb:  mov    %eax,0x8(%esp)
081ccd27 +0x3cf:  mov    %ecx,0x4(%esp)
081ccd2b +0x3d3:  mov    %edx,(%esp)
081ccd2e +0x3d6:  call   0807d8d0 <_init+0x1c8>
081ccd33 +0x3db:  mov    -0x20(%ebp),%eax
081ccd36 +0x3de:  movb   $0x0,0x21(%eax)
081ccd3a +0x3e2:  movl   $0x14,(%esp)
081ccd41 +0x3e9:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081ccd46 +0x3ee:  mov    %eax,-0x1c(%ebp)
081ccd49 +0x3f1:  movzwl -0x32(%ebp),%eax
081ccd4d +0x3f5:  mov    -0x1c(%ebp),%edx
081ccd50 +0x3f8:  add    $0x78,%edx
081ccd53 +0x3fb:  cmp    %edx,%eax
081ccd55 +0x3fd:  jl     081ccd5e <+0x406>
081ccd57 +0x3ff:  mov    -0x20(%ebp),%eax
081ccd5a +0x402:  movb   $0x1,0x21(%eax)
081ccd5e +0x406:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081ccd63 +0x40b:  lea    -0x48(%ebp),%edx
081ccd66 +0x40e:  mov    %edx,0x8(%esp)
081ccd6a +0x412:  movl   $0x2,0x4(%esp)
081ccd72 +0x41a:  mov    %eax,(%esp)
081ccd75 +0x41d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081ccd7a +0x422:  jmp    081ccd97 <+0x43f>
081ccd7c +0x424:  mov    %edx,%ebx
081ccd7e +0x426:  mov    %eax,%esi
081ccd80 +0x428:  lea    -0x48(%ebp),%eax
081ccd83 +0x42b:  mov    %eax,(%esp)
081ccd86 +0x42e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081ccd8b +0x433:  mov    %esi,%eax
081ccd8d +0x435:  mov    %ebx,%edx
081ccd8f +0x437:  mov    %eax,(%esp)
081ccd92 +0x43a:  call   08ae3750 <_Unwind_Resume>
081ccd97 +0x43f:  lea    -0x48(%ebp),%eax
081ccd9a +0x442:  mov    %eax,(%esp)
081ccd9d +0x445:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081ccda2 +0x44a:  mov    $0x0,%eax
081ccda7 +0x44f:  add    $0x400c,%esp
081ccdad +0x455:  pop    %ebx
081ccdae +0x456:  pop    %esi
081ccdaf +0x457:  pop    %edi
081ccdb0 +0x458:  pop    %ebp
081ccdb1 +0x459:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Send::process @ 0x81cc958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Send::process
          (Dispatcher_MailBox_Send *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CInventory *pCVar6;
  MSG_BASE *pMVar7;
  uint uVar8;
  CGuildServerProxy *this_00;
  CDataManager *this_01;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  uint local_3ff4;
  MSG_CHECK_MAIL_RECEIVER local_3fd4 [16264];
  CStreamGuard local_4c [8];
  ParamBase *local_44;
  MSG_BASE *local_40;
  int local_3c;
  ushort local_36;
  int local_34;
  undefined4 local_30;
  byte local_29;
  CItem *local_28;
  SIG_FIND_FACTORY_HUB *local_24;
  int local_20;
  
  local_44 = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_44 + 4) = uVar3;
  if (0 < *(int *)(local_44 + 4)) {
    return 0;
  }
  if (*(int *)(local_44 + 4) < 0) {
    uVar4 = CUser::get_acc_id(param_1);
    uVar3 = LineFunc(0x23ce,
                     "virtual int Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_44 + 4),uVar4);
    return uVar3;
  }
  local_40 = param_2;
  if (*(int *)(param_2 + 0x32) != 0) {
    iVar5 = G_CDataManager();
    local_30 = *(undefined4 *)(iVar5 + 0xa624);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar6,local_30,0x16,1);
    pMVar7 = local_40 + 0x45;
    iVar5 = *(int *)(local_40 + 0x41);
    uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar3 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendGuildMail(this_00,uVar8,uVar4,iVar5,(char *)pMVar7);
    return 0;
  }
  if ((*(int *)(param_2 + 0x2e) == 0) || (cVar2 = CUser::reqSendMailCertify(param_1), cVar2 == '\0')
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    MSG_CHECK_MAIL_RECEIVER::
    set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)0,MSG_MAILBOX_SEND>
              (local_3fd4,(MSG_MAILBOX_SEND *)local_40);
    local_3c = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                         (param_1,(char *)(local_40 + 0x11),local_3fd4);
    if (local_3c == 0) {
      local_29 = 0;
      iVar5 = *(int *)(local_40 + 0x39);
      this_01 = (CDataManager *)G_CDataManager();
      local_28 = (CItem *)CDataManager::find_item(this_01,iVar5);
      if (local_28 != (CItem *)0x0) {
        cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
        if ((cVar2 == '\x01') || (iVar5 = CItem::get_rarity(local_28), 1 < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = 1;
        }
      }
      if (*(int *)(local_40 + 0x39) == 0) {
        local_29 = 1;
      }
      CUser::IncrementTradeGold(param_1,*(uint *)(local_40 + 0x2e),(uint)local_29);
    }
    else {
      *(int *)(local_44 + 4) = local_3c;
    }
    local_36 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_34 = get_rand_int(0x19);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::get_money(pCVar6);
    local_3ff4 = (uint)(longlong)
                       ROUND(((float)_DAT_08bd6340 + (float)_DAT_08bd6338 * (float)local_34) *
                             (float)iVar5);
    if (local_3ff4 <= *(uint *)(local_40 + 0x2e)) {
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x241d);
      CStreamGuard::CStreamGuard(local_4c,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 081ccca7 to 081ccd79 has its CatchHandler @ 081ccd7c */
      CStreamGuard::operator<<(pCVar10,0x18a);
      iVar5 = CUser::GetUID(param_1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
      CStreamGuard::operator<<(pCVar10,iVar5);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
      local_24 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB>(pCVar10);
      memset(local_24,0,0x24);
      uVar3 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_24 = uVar3;
      strncpy((char *)(local_24 + 4),(char *)(local_40 + 0x11),*(size_t *)(local_40 + 0xd));
      local_24[0x21] = (SIG_FIND_FACTORY_HUB)0x0;
      local_20 = get_rand_int(0x14);
      if (local_20 + 0x78 <= (int)(uint)local_36) {
        local_24[0x21] = (SIG_FIND_FACTORY_HUB)0x1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_4c);
      CStreamGuard::~CStreamGuard(local_4c);
    }
    return 0;
  }
  CUser::set_MailMsgData(param_1,(MSG_MAILBOX_SEND *)local_40);
  return 0;
}
```
