# dispatch_sig

`_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ReqPeer` | `0x081eed08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081eed08  _ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)
# range [0x081eed08, 0x081f0281]
081eed08 +0x0000:  push   %ebp
081eed09 +0x0001:  mov    %esp,%ebp
081eed0b +0x0003:  push   %esi
081eed0c +0x0004:  push   %ebx
081eed0d +0x0005:  add    $0xffffff80,%esp
081eed10 +0x0008:  mov    0xc(%ebp),%eax
081eed13 +0x000b:  mov    %eax,(%esp)
081eed16 +0x000e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eed1b +0x0013:  cmp    $0x3,%eax
081eed1e +0x0016:  je     081eed47 <+0x3f>
081eed20 +0x0018:  mov    0xc(%ebp),%eax
081eed23 +0x001b:  mov    %eax,(%esp)
081eed26 +0x001e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eed2b +0x0023:  cmp    $0x6,%eax
081eed2e +0x0026:  je     081eed47 <+0x3f>
081eed30 +0x0028:  mov    0xc(%ebp),%eax
081eed33 +0x002b:  mov    %eax,(%esp)
081eed36 +0x002e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eed3b +0x0033:  cmp    $0x8,%eax
081eed3e +0x0036:  je     081eed47 <+0x3f>
081eed40 +0x0038:  mov    $0x1,%eax
081eed45 +0x003d:  jmp    081eed4c <+0x44>
081eed47 +0x003f:  mov    $0x0,%eax
081eed4c +0x0044:  test   %al,%al
081eed4e +0x0046:  je     081eed5a <+0x52>
081eed50 +0x0048:  mov    $0x0,%ebx
081eed55 +0x004d:  jmp    081f0279 <+0x1571>
081eed5a +0x0052:  lea    -0x5c(%ebp),%eax
081eed5d +0x0055:  mov    %eax,(%esp)
081eed60 +0x0058:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081eed65 +0x005d:  lea    -0x50(%ebp),%eax
081eed68 +0x0060:  add    $0xd,%eax
081eed6b +0x0063:  mov    %eax,0x4(%esp)
081eed6f +0x0067:  mov    0x10(%ebp),%eax
081eed72 +0x006a:  mov    %eax,(%esp)
081eed75 +0x006d:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081eed7a +0x0072:  xor    $0x1,%eax
081eed7d +0x0075:  test   %al,%al
081eed7f +0x0077:  je     081eedac <+0xa4>
081eed81 +0x0079:  movl   $0x0,0xc(%esp)
081eed89 +0x0081:  movl   $0x0,0x8(%esp)
081eed91 +0x0089:  movl   $&_ZZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eed99 +0x0091:  movl   $0x725a,(%esp)
081eeda0 +0x0098:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eeda5 +0x009d:  mov    %eax,%ebx
081eeda7 +0x009f:  jmp    081f026e <+0x1566>
081eedac +0x00a4:  lea    -0x50(%ebp),%eax
081eedaf +0x00a7:  add    $0xf,%eax
081eedb2 +0x00aa:  mov    %eax,0x4(%esp)
081eedb6 +0x00ae:  mov    0x10(%ebp),%eax
081eedb9 +0x00b1:  mov    %eax,(%esp)
081eedbc +0x00b4:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081eedc1 +0x00b9:  xor    $0x1,%eax
081eedc4 +0x00bc:  test   %al,%al
081eedc6 +0x00be:  je     081eedf3 <+0xeb>
081eedc8 +0x00c0:  movl   $0x0,0xc(%esp)
081eedd0 +0x00c8:  movl   $0x0,0x8(%esp)
081eedd8 +0x00d0:  movl   $&_ZZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eede0 +0x00d8:  movl   $0x725b,(%esp)
081eede7 +0x00df:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eedec +0x00e4:  mov    %eax,%ebx
081eedee +0x00e6:  jmp    081f026e <+0x1566>
081eedf3 +0x00eb:  lea    -0x50(%ebp),%eax
081eedf6 +0x00ee:  add    $0x10,%eax
081eedf9 +0x00f1:  mov    %eax,0x4(%esp)
081eedfd +0x00f5:  mov    0x10(%ebp),%eax
081eee00 +0x00f8:  mov    %eax,(%esp)
081eee03 +0x00fb:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081eee08 +0x0100:  xor    $0x1,%eax
081eee0b +0x0103:  test   %al,%al
081eee0d +0x0105:  je     081eee3a <+0x132>
081eee0f +0x0107:  movl   $0x0,0xc(%esp)
081eee17 +0x010f:  movl   $0x0,0x8(%esp)
081eee1f +0x0117:  movl   $&_ZZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081eee27 +0x011f:  movl   $0x725c,(%esp)
081eee2e +0x0126:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081eee33 +0x012b:  mov    %eax,%ebx
081eee35 +0x012d:  jmp    081f026e <+0x1566>
081eee3a +0x0132:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081eee3f +0x0137:  mov    0xc(%ebp),%edx
081eee42 +0x013a:  mov    %edx,0x4(%esp)
081eee46 +0x013e:  mov    %eax,(%esp)
081eee49 +0x0141:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081eee4e +0x0146:  test   %al,%al
081eee50 +0x0148:  je     081eee82 <+0x17a>
081eee52 +0x014a:  movzbl -0x41(%ebp),%eax
081eee56 +0x014e:  movsbl %al,%eax
081eee59 +0x0151:  movl   $0x3c,0xc(%esp)
081eee61 +0x0159:  mov    %eax,0x8(%esp)
081eee65 +0x015d:  movl   $0xa,0x4(%esp)
081eee6d +0x0165:  mov    0xc(%ebp),%eax
081eee70 +0x0168:  mov    %eax,(%esp)
081eee73 +0x016b:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081eee78 +0x0170:  mov    $0x0,%ebx
081eee7d +0x0175:  jmp    081f026e <+0x1566>
081eee82 +0x017a:  mov    0xc(%ebp),%eax
081eee85 +0x017d:  mov    %eax,(%esp)
081eee88 +0x0180:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081eee8d +0x0185:  test   %al,%al
081eee8f +0x0187:  je     081eeec1 <+0x1b9>
081eee91 +0x0189:  movzbl -0x41(%ebp),%eax
081eee95 +0x018d:  movsbl %al,%eax
081eee98 +0x0190:  movl   $0xbf,0xc(%esp)
081eeea0 +0x0198:  mov    %eax,0x8(%esp)
081eeea4 +0x019c:  movl   $0xa,0x4(%esp)
081eeeac +0x01a4:  mov    0xc(%ebp),%eax
081eeeaf +0x01a7:  mov    %eax,(%esp)
081eeeb2 +0x01aa:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081eeeb7 +0x01af:  mov    $0x0,%ebx
081eeebc +0x01b4:  jmp    081f026e <+0x1566>
081eeec1 +0x01b9:  mov    0xc(%ebp),%eax
081eeec4 +0x01bc:  mov    %eax,(%esp)
081eeec7 +0x01bf:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081eeecc +0x01c4:  test   %al,%al
081eeece +0x01c6:  je     081eef00 <+0x1f8>
081eeed0 +0x01c8:  movzbl -0x41(%ebp),%eax
081eeed4 +0x01cc:  movsbl %al,%eax
081eeed7 +0x01cf:  movl   $0x13,0xc(%esp)
081eeedf +0x01d7:  mov    %eax,0x8(%esp)
081eeee3 +0x01db:  movl   $0xa,0x4(%esp)
081eeeeb +0x01e3:  mov    0xc(%ebp),%eax
081eeeee +0x01e6:  mov    %eax,(%esp)
081eeef1 +0x01e9:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081eeef6 +0x01ee:  mov    $0x0,%ebx
081eeefb +0x01f3:  jmp    081f026e <+0x1566>
081eef00 +0x01f8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081eef05 +0x01fd:  mov    %eax,(%esp)
081eef08 +0x0200:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081eef0d +0x0205:  test   %al,%al
081eef0f +0x0207:  je     081eef4e <+0x246>
081eef11 +0x0209:  movzbl -0x41(%ebp),%eax
081eef15 +0x020d:  movsbl %al,%eax
081eef18 +0x0210:  cmp    $0x2,%eax
081eef1b +0x0213:  je     081eef4d <+0x245>
081eef1d +0x0215:  movzbl -0x41(%ebp),%eax
081eef21 +0x0219:  movsbl %al,%eax
081eef24 +0x021c:  movl   $0x13,0xc(%esp)
081eef2c +0x0224:  mov    %eax,0x8(%esp)
081eef30 +0x0228:  movl   $0xa,0x4(%esp)
081eef38 +0x0230:  mov    0xc(%ebp),%eax
081eef3b +0x0233:  mov    %eax,(%esp)
081eef3e +0x0236:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081eef43 +0x023b:  mov    $0x0,%ebx
081eef48 +0x0240:  jmp    081f026e <+0x1566>
081eef4d +0x0245:  nop
081eef4e +0x0246:  movzwl -0x43(%ebp),%eax
081eef52 +0x024a:  movzwl %ax,%ebx
081eef55 +0x024d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081eef5a +0x0252:  mov    %ebx,0x4(%esp)
081eef5e +0x0256:  mov    %eax,(%esp)
081eef61 +0x0259:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081eef66 +0x025e:  mov    %eax,-0x3c(%ebp)
081eef69 +0x0261:  movl   $0x1,-0x38(%ebp)
081eef70 +0x0268:  cmpl   $0x0,-0x3c(%ebp)
081eef74 +0x026c:  jne    081eefa6 <+0x29e>
081eef76 +0x026e:  movzbl -0x41(%ebp),%eax
081eef7a +0x0272:  movsbl %al,%eax
081eef7d +0x0275:  movl   $0x3,0xc(%esp)
081eef85 +0x027d:  mov    %eax,0x8(%esp)
081eef89 +0x0281:  movl   $0xa,0x4(%esp)
081eef91 +0x0289:  mov    0xc(%ebp),%eax
081eef94 +0x028c:  mov    %eax,(%esp)
081eef97 +0x028f:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081eef9c +0x0294:  mov    $0x0,%ebx
081eefa1 +0x0299:  jmp    081f026e <+0x1566>
081eefa6 +0x029e:  lea    -0x50(%ebp),%eax
081eefa9 +0x02a1:  mov    %eax,0x4(%esp)
081eefad +0x02a5:  mov    -0x3c(%ebp),%eax
081eefb0 +0x02a8:  mov    %eax,(%esp)
081eefb3 +0x02ab:  call   0868dcbc <_ZN5CUser14alonePlay_ModeERK15MSG_REQ_TO_PEER>  ; CUser::alonePlay_Mode(MSG_REQ_TO_PEER const&)
081eefb8 +0x02b0:  test   %al,%al
081eefba +0x02b2:  je     081ef000 <+0x2f8>
081eefbc +0x02b4:  lea    -0x50(%ebp),%eax
081eefbf +0x02b7:  mov    %eax,0x4(%esp)
081eefc3 +0x02bb:  mov    -0x3c(%ebp),%eax
081eefc6 +0x02be:  mov    %eax,(%esp)
081eefc9 +0x02c1:  call   0868dd76 <_ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER>  ; CUser::get_SoloPlay_msgType(MSG_REQ_TO_PEER const&)
081eefce +0x02c6:  mov    %eax,%ebx
081eefd0 +0x02c8:  mov    -0x3c(%ebp),%eax
081eefd3 +0x02cb:  mov    %eax,(%esp)
081eefd6 +0x02ce:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081eefdb +0x02d3:  mov    %ebx,0xc(%esp)
081eefdf +0x02d7:  movl   $0x1,0x8(%esp)
081eefe7 +0x02df:  mov    %eax,0x4(%esp)
081eefeb +0x02e3:  mov    0xc(%ebp),%eax
081eefee +0x02e6:  mov    %eax,(%esp)
081eeff1 +0x02e9:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
081eeff6 +0x02ee:  mov    $0x0,%ebx
081eeffb +0x02f3:  jmp    081f026e <+0x1566>
081ef000 +0x02f8:  movl   $0x24,-0x34(%ebp)
081ef007 +0x02ff:  movzbl -0x41(%ebp),%eax
081ef00b +0x0303:  movsbl %al,%eax
081ef00e +0x0306:  cmp    $0x1,%eax
081ef011 +0x0309:  je     081ef033 <+0x32b>
081ef013 +0x030b:  cmp    $0x1,%eax
081ef016 +0x030e:  jg     081ef01e <+0x316>
081ef018 +0x0310:  test   %eax,%eax
081ef01a +0x0312:  je     081ef02a <+0x322>
081ef01c +0x0314:  jmp    081ef04c <+0x344>
081ef01e +0x0316:  cmp    $0x2,%eax
081ef021 +0x0319:  je     081ef03c <+0x334>
081ef023 +0x031b:  cmp    $0x3,%eax
081ef026 +0x031e:  je     081ef045 <+0x33d>
081ef028 +0x0320:  jmp    081ef04c <+0x344>
081ef02a +0x0322:  movl   $0x6,-0x34(%ebp)
081ef031 +0x0329:  jmp    081ef04c <+0x344>
081ef033 +0x032b:  movl   $0x1f,-0x34(%ebp)
081ef03a +0x0332:  jmp    081ef04c <+0x344>
081ef03c +0x0334:  movl   $0x7,-0x34(%ebp)
081ef043 +0x033b:  jmp    081ef04c <+0x344>
081ef045 +0x033d:  movl   $0x8,-0x34(%ebp)
081ef04c +0x0344:  cmpl   $0x24,-0x34(%ebp)
081ef050 +0x0348:  je     081ef078 <+0x370>
081ef052 +0x034a:  mov    -0x3c(%ebp),%eax
081ef055 +0x034d:  mov    %eax,(%esp)
081ef058 +0x0350:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
081ef05d +0x0355:  mov    -0x34(%ebp),%edx
081ef060 +0x0358:  mov    %edx,0x4(%esp)
081ef064 +0x035c:  mov    %eax,(%esp)
081ef067 +0x035f:  call   084b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>  ; CGameOption::get_etc_option(ENUM_OPTION_ETC)
081ef06c +0x0364:  test   %ax,%ax
081ef06f +0x0367:  je     081ef078 <+0x370>
081ef071 +0x0369:  mov    $0x1,%eax
081ef076 +0x036e:  jmp    081ef07d <+0x375>
081ef078 +0x0370:  mov    $0x0,%eax
081ef07d +0x0375:  test   %al,%al
081ef07f +0x0377:  je     081ef0c5 <+0x3bd>
081ef081 +0x0379:  lea    -0x50(%ebp),%eax
081ef084 +0x037c:  mov    %eax,0x4(%esp)
081ef088 +0x0380:  mov    -0x3c(%ebp),%eax
081ef08b +0x0383:  mov    %eax,(%esp)
081ef08e +0x0386:  call   0868dd76 <_ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER>  ; CUser::get_SoloPlay_msgType(MSG_REQ_TO_PEER const&)
081ef093 +0x038b:  mov    %eax,%ebx
081ef095 +0x038d:  mov    -0x3c(%ebp),%eax
081ef098 +0x0390:  mov    %eax,(%esp)
081ef09b +0x0393:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081ef0a0 +0x0398:  mov    %ebx,0xc(%esp)
081ef0a4 +0x039c:  movl   $0x0,0x8(%esp)
081ef0ac +0x03a4:  mov    %eax,0x4(%esp)
081ef0b0 +0x03a8:  mov    0xc(%ebp),%eax
081ef0b3 +0x03ab:  mov    %eax,(%esp)
081ef0b6 +0x03ae:  call   0868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>  ; CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
081ef0bb +0x03b3:  mov    $0x0,%ebx
081ef0c0 +0x03b8:  jmp    081f026e <+0x1566>
081ef0c5 +0x03bd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ef0ca +0x03c2:  mov    %eax,(%esp)
081ef0cd +0x03c5:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081ef0d2 +0x03ca:  test   %al,%al
081ef0d4 +0x03cc:  je     081ef136 <+0x42e>
081ef0d6 +0x03ce:  mov    -0x3c(%ebp),%eax
081ef0d9 +0x03d1:  mov    %eax,(%esp)
081ef0dc +0x03d4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ef0e1 +0x03d9:  cmp    $0x6,%eax
081ef0e4 +0x03dc:  je     081ef0f6 <+0x3ee>
081ef0e6 +0x03de:  mov    -0x3c(%ebp),%eax
081ef0e9 +0x03e1:  mov    %eax,(%esp)
081ef0ec +0x03e4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ef0f1 +0x03e9:  cmp    $0x7,%eax
081ef0f4 +0x03ec:  jne    081ef0fd <+0x3f5>
081ef0f6 +0x03ee:  mov    $0x1,%eax
081ef0fb +0x03f3:  jmp    081ef102 <+0x3fa>
081ef0fd +0x03f5:  mov    $0x0,%eax
081ef102 +0x03fa:  test   %al,%al
081ef104 +0x03fc:  je     081ef136 <+0x42e>
081ef106 +0x03fe:  movzbl -0x41(%ebp),%eax
081ef10a +0x0402:  movsbl %al,%eax
081ef10d +0x0405:  movl   $0x13,0xc(%esp)
081ef115 +0x040d:  mov    %eax,0x8(%esp)
081ef119 +0x0411:  movl   $0xa,0x4(%esp)
081ef121 +0x0419:  mov    0xc(%ebp),%eax
081ef124 +0x041c:  mov    %eax,(%esp)
081ef127 +0x041f:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef12c +0x0424:  mov    $0x0,%ebx
081ef131 +0x0429:  jmp    081f026e <+0x1566>
081ef136 +0x042e:  mov    -0x3c(%ebp),%eax
081ef139 +0x0431:  mov    %eax,(%esp)
081ef13c +0x0434:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081ef141 +0x0439:  test   %al,%al
081ef143 +0x043b:  je     081ef175 <+0x46d>
081ef145 +0x043d:  movzbl -0x41(%ebp),%eax
081ef149 +0x0441:  movsbl %al,%eax
081ef14c +0x0444:  movl   $0xc0,0xc(%esp)
081ef154 +0x044c:  mov    %eax,0x8(%esp)
081ef158 +0x0450:  movl   $0xa,0x4(%esp)
081ef160 +0x0458:  mov    0xc(%ebp),%eax
081ef163 +0x045b:  mov    %eax,(%esp)
081ef166 +0x045e:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef16b +0x0463:  mov    $0x0,%ebx
081ef170 +0x0468:  jmp    081f026e <+0x1566>
081ef175 +0x046d:  movzbl -0x41(%ebp),%eax
081ef179 +0x0471:  movsbl %al,%ebx
081ef17c +0x0474:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081ef181 +0x0479:  movl   $0x1,0x10(%esp)
081ef189 +0x0481:  mov    -0x3c(%ebp),%edx
081ef18c +0x0484:  mov    %edx,0xc(%esp)
081ef190 +0x0488:  mov    0xc(%ebp),%edx
081ef193 +0x048b:  mov    %edx,0x8(%esp)
081ef197 +0x048f:  mov    %ebx,0x4(%esp)
081ef19b +0x0493:  mov    %eax,(%esp)
081ef19e +0x0496:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081ef1a3 +0x049b:  mov    %eax,-0x38(%ebp)
081ef1a6 +0x049e:  cmpl   $0x0,-0x38(%ebp)
081ef1aa +0x04a2:  jle    081ef1b6 <+0x4ae>
081ef1ac +0x04a4:  mov    $0x0,%ebx
081ef1b1 +0x04a9:  jmp    081f026e <+0x1566>
081ef1b6 +0x04ae:  movzbl -0x41(%ebp),%eax
081ef1ba +0x04b2:  movsbl %al,%eax
081ef1bd +0x04b5:  cmp    $0x8,%eax
081ef1c0 +0x04b8:  ja     081f0236 <+0x152e>
081ef1c6 +0x04be:  mov    &data#9fba091d(.rodata)(,%eax,4),%eax
081ef1cd +0x04c5:  jmp    *%eax
081ef1cf +0x04c7:  mov    0xc(%ebp),%eax
081ef1d2 +0x04ca:  mov    %eax,(%esp)
081ef1d5 +0x04cd:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ef1da +0x04d2:  cmp    $0x5,%eax
081ef1dd +0x04d5:  je     081ef1f3 <+0x4eb>
081ef1df +0x04d7:  mov    0xc(%ebp),%eax
081ef1e2 +0x04da:  add    $0xe0,%eax
081ef1e7 +0x04df:  mov    %eax,(%esp)
081ef1ea +0x04e2:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
081ef1ef +0x04e7:  test   %al,%al
081ef1f1 +0x04e9:  jne    081ef1fa <+0x4f2>
081ef1f3 +0x04eb:  mov    $0x1,%eax
081ef1f8 +0x04f0:  jmp    081ef1ff <+0x4f7>
081ef1fa +0x04f2:  mov    $0x0,%eax
081ef1ff +0x04f7:  test   %al,%al
081ef201 +0x04f9:  je     081ef233 <+0x52b>
081ef203 +0x04fb:  movzbl -0x41(%ebp),%eax
081ef207 +0x04ff:  movsbl %al,%eax
081ef20a +0x0502:  movl   $0x13,0xc(%esp)
081ef212 +0x050a:  mov    %eax,0x8(%esp)
081ef216 +0x050e:  movl   $0xa,0x4(%esp)
081ef21e +0x0516:  mov    0xc(%ebp),%eax
081ef221 +0x0519:  mov    %eax,(%esp)
081ef224 +0x051c:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef229 +0x0521:  mov    $0x0,%ebx
081ef22e +0x0526:  jmp    081f026e <+0x1566>
081ef233 +0x052b:  movl   $0xffffffff,0x4(%esp)
081ef23b +0x0533:  mov    0xc(%ebp),%eax
081ef23e +0x0536:  mov    %eax,(%esp)
081ef241 +0x0539:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081ef246 +0x053e:  mov    %eax,0x4(%esp)
081ef24a +0x0542:  mov    -0x3c(%ebp),%eax
081ef24d +0x0545:  mov    %eax,(%esp)
081ef250 +0x0548:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
081ef255 +0x054d:  test   %al,%al
081ef257 +0x054f:  je     081ef289 <+0x581>
081ef259 +0x0551:  movzbl -0x41(%ebp),%eax
081ef25d +0x0555:  movsbl %al,%eax
081ef260 +0x0558:  movl   $0x4d,0xc(%esp)
081ef268 +0x0560:  mov    %eax,0x8(%esp)
081ef26c +0x0564:  movl   $0xa,0x4(%esp)
081ef274 +0x056c:  mov    0xc(%ebp),%eax
081ef277 +0x056f:  mov    %eax,(%esp)
081ef27a +0x0572:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef27f +0x0577:  mov    $0x0,%ebx
081ef284 +0x057c:  jmp    081f026e <+0x1566>
081ef289 +0x0581:  mov    0xc(%ebp),%eax
081ef28c +0x0584:  mov    %eax,(%esp)
081ef28f +0x0587:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081ef294 +0x058c:  test   %al,%al
081ef296 +0x058e:  je     081ef2c8 <+0x5c0>
081ef298 +0x0590:  movzbl -0x41(%ebp),%eax
081ef29c +0x0594:  movsbl %al,%eax
081ef29f +0x0597:  movl   $0xea,0xc(%esp)
081ef2a7 +0x059f:  mov    %eax,0x8(%esp)
081ef2ab +0x05a3:  movl   $0xa,0x4(%esp)
081ef2b3 +0x05ab:  mov    0xc(%ebp),%eax
081ef2b6 +0x05ae:  mov    %eax,(%esp)
081ef2b9 +0x05b1:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef2be +0x05b6:  mov    $0x0,%ebx
081ef2c3 +0x05bb:  jmp    081f026e <+0x1566>
081ef2c8 +0x05c0:  mov    -0x3c(%ebp),%eax
081ef2cb +0x05c3:  mov    %eax,(%esp)
081ef2ce +0x05c6:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081ef2d3 +0x05cb:  test   %al,%al
081ef2d5 +0x05cd:  je     081ef307 <+0x5ff>
081ef2d7 +0x05cf:  movzbl -0x41(%ebp),%eax
081ef2db +0x05d3:  movsbl %al,%eax
081ef2de +0x05d6:  movl   $0xbe,0xc(%esp)
081ef2e6 +0x05de:  mov    %eax,0x8(%esp)
081ef2ea +0x05e2:  movl   $0xa,0x4(%esp)
081ef2f2 +0x05ea:  mov    0xc(%ebp),%eax
081ef2f5 +0x05ed:  mov    %eax,(%esp)
081ef2f8 +0x05f0:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef2fd +0x05f5:  mov    $0x0,%ebx
081ef302 +0x05fa:  jmp    081f026e <+0x1566>
081ef307 +0x05ff:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081ef30c +0x0604:  mov    -0x3c(%ebp),%edx
081ef30f +0x0607:  mov    %edx,0x4(%esp)
081ef313 +0x060b:  mov    %eax,(%esp)
081ef316 +0x060e:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081ef31b +0x0613:  test   %al,%al
081ef31d +0x0615:  je     081ef34f <+0x647>
081ef31f +0x0617:  movzbl -0x41(%ebp),%eax
081ef323 +0x061b:  movsbl %al,%eax
081ef326 +0x061e:  movl   $0x3d,0xc(%esp)
081ef32e +0x0626:  mov    %eax,0x8(%esp)
081ef332 +0x062a:  movl   $0xa,0x4(%esp)
081ef33a +0x0632:  mov    0xc(%ebp),%eax
081ef33d +0x0635:  mov    %eax,(%esp)
081ef340 +0x0638:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef345 +0x063d:  mov    $0x0,%ebx
081ef34a +0x0642:  jmp    081f026e <+0x1566>
081ef34f +0x0647:  mov    -0x3c(%ebp),%eax
081ef352 +0x064a:  mov    %eax,(%esp)
081ef355 +0x064d:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081ef35a +0x0652:  test   %al,%al
081ef35c +0x0654:  je     081ef38e <+0x686>
081ef35e +0x0656:  movzbl -0x41(%ebp),%eax
081ef362 +0x065a:  movsbl %al,%eax
081ef365 +0x065d:  movl   $0x13,0xc(%esp)
081ef36d +0x0665:  mov    %eax,0x8(%esp)
081ef371 +0x0669:  movl   $0xa,0x4(%esp)
081ef379 +0x0671:  mov    0xc(%ebp),%eax
081ef37c +0x0674:  mov    %eax,(%esp)
081ef37f +0x0677:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef384 +0x067c:  mov    $0x0,%ebx
081ef389 +0x0681:  jmp    081f026e <+0x1566>
081ef38e +0x0686:  mov    -0x3c(%ebp),%eax
081ef391 +0x0689:  mov    %eax,(%esp)
081ef394 +0x068c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ef399 +0x0691:  cmp    $0x5,%eax
081ef39c +0x0694:  je     081ef3b2 <+0x6aa>
081ef39e +0x0696:  mov    -0x3c(%ebp),%eax
081ef3a1 +0x0699:  add    $0xe0,%eax
081ef3a6 +0x069e:  mov    %eax,(%esp)
081ef3a9 +0x06a1:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
081ef3ae +0x06a6:  test   %al,%al
081ef3b0 +0x06a8:  jne    081ef3b9 <+0x6b1>
081ef3b2 +0x06aa:  mov    $0x1,%eax
081ef3b7 +0x06af:  jmp    081ef3be <+0x6b6>
081ef3b9 +0x06b1:  mov    $0x0,%eax
081ef3be +0x06b6:  test   %al,%al
081ef3c0 +0x06b8:  je     081ef3f2 <+0x6ea>
081ef3c2 +0x06ba:  movzbl -0x41(%ebp),%eax
081ef3c6 +0x06be:  movsbl %al,%eax
081ef3c9 +0x06c1:  movl   $0x3,0xc(%esp)
081ef3d1 +0x06c9:  mov    %eax,0x8(%esp)
081ef3d5 +0x06cd:  movl   $0xa,0x4(%esp)
081ef3dd +0x06d5:  mov    0xc(%ebp),%eax
081ef3e0 +0x06d8:  mov    %eax,(%esp)
081ef3e3 +0x06db:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef3e8 +0x06e0:  mov    $0x0,%ebx
081ef3ed +0x06e5:  jmp    081f026e <+0x1566>
081ef3f2 +0x06ea:  mov    &_ZN10GlobalData15s_power_managerE,%eax
081ef3f7 +0x06ef:  mov    %eax,(%esp)
081ef3fa +0x06f2:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
081ef3ff +0x06f7:  test   %al,%al
081ef401 +0x06f9:  je     081ef506 <+0x7fe>
081ef407 +0x06ff:  mov    0xc(%ebp),%eax
081ef40a +0x0702:  mov    %eax,(%esp)
081ef40d +0x0705:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef412 +0x070a:  cmp    $0x7,%al
081ef414 +0x070c:  jne    081ef42c <+0x724>
081ef416 +0x070e:  mov    -0x3c(%ebp),%eax
081ef419 +0x0711:  mov    %eax,(%esp)
081ef41c +0x0714:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef421 +0x0719:  cmp    $0x7,%al
081ef423 +0x071b:  jne    081ef42c <+0x724>
081ef425 +0x071d:  mov    $0x1,%eax
081ef42a +0x0722:  jmp    081ef431 <+0x729>
081ef42c +0x0724:  mov    $0x0,%eax
081ef431 +0x0729:  test   %al,%al
081ef433 +0x072b:  je     081ef48a <+0x782>
081ef435 +0x072d:  mov    0xc(%ebp),%eax
081ef438 +0x0730:  mov    %eax,(%esp)
081ef43b +0x0733:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
081ef440 +0x0738:  mov    %eax,%ebx
081ef442 +0x073a:  mov    -0x3c(%ebp),%eax
081ef445 +0x073d:  mov    %eax,(%esp)
081ef448 +0x0740:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
081ef44d +0x0745:  cmp    %al,%bl
081ef44f +0x0747:  setne  %al
081ef452 +0x074a:  test   %al,%al
081ef454 +0x074c:  je     081ef506 <+0x7fe>
081ef45a +0x0752:  movzbl -0x41(%ebp),%eax
081ef45e +0x0756:  movsbl %al,%eax
081ef461 +0x0759:  movl   $0x13,0xc(%esp)
081ef469 +0x0761:  mov    %eax,0x8(%esp)
081ef46d +0x0765:  movl   $0xa,0x4(%esp)
081ef475 +0x076d:  mov    0xc(%ebp),%eax
081ef478 +0x0770:  mov    %eax,(%esp)
081ef47b +0x0773:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef480 +0x0778:  mov    $0x0,%ebx
081ef485 +0x077d:  jmp    081f026e <+0x1566>
081ef48a +0x0782:  mov    0xc(%ebp),%eax
081ef48d +0x0785:  mov    %eax,(%esp)
081ef490 +0x0788:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef495 +0x078d:  cmp    $0x7,%al
081ef497 +0x078f:  je     081ef4a8 <+0x7a0>
081ef499 +0x0791:  mov    -0x3c(%ebp),%eax
081ef49c +0x0794:  mov    %eax,(%esp)
081ef49f +0x0797:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef4a4 +0x079c:  cmp    $0x7,%al
081ef4a6 +0x079e:  je     081ef4c6 <+0x7be>
081ef4a8 +0x07a0:  mov    0xc(%ebp),%eax
081ef4ab +0x07a3:  mov    %eax,(%esp)
081ef4ae +0x07a6:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef4b3 +0x07ab:  cmp    $0x7,%al
081ef4b5 +0x07ad:  jne    081ef4cd <+0x7c5>
081ef4b7 +0x07af:  mov    -0x3c(%ebp),%eax
081ef4ba +0x07b2:  mov    %eax,(%esp)
081ef4bd +0x07b5:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
081ef4c2 +0x07ba:  cmp    $0x7,%al
081ef4c4 +0x07bc:  je     081ef4cd <+0x7c5>
081ef4c6 +0x07be:  mov    $0x1,%eax
081ef4cb +0x07c3:  jmp    081ef4d2 <+0x7ca>
081ef4cd +0x07c5:  mov    $0x0,%eax
081ef4d2 +0x07ca:  test   %al,%al
081ef4d4 +0x07cc:  je     081ef506 <+0x7fe>
081ef4d6 +0x07ce:  movzbl -0x41(%ebp),%eax
081ef4da +0x07d2:  movsbl %al,%eax
081ef4dd +0x07d5:  movl   $0x13,0xc(%esp)
081ef4e5 +0x07dd:  mov    %eax,0x8(%esp)
081ef4e9 +0x07e1:  movl   $0xa,0x4(%esp)
081ef4f1 +0x07e9:  mov    0xc(%ebp),%eax
081ef4f4 +0x07ec:  mov    %eax,(%esp)
081ef4f7 +0x07ef:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef4fc +0x07f4:  mov    $0x0,%ebx
081ef501 +0x07f9:  jmp    081f026e <+0x1566>
081ef506 +0x07fe:  mov    0xc(%ebp),%eax
081ef509 +0x0801:  mov    %eax,(%esp)
081ef50c +0x0804:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ef511 +0x0809:  mov    %eax,-0x30(%ebp)
081ef514 +0x080c:  cmpl   $0x0,-0x30(%ebp)
081ef518 +0x0810:  je     081ef5a5 <+0x89d>
081ef51e +0x0816:  mov    -0x30(%ebp),%eax
081ef521 +0x0819:  mov    %eax,(%esp)
081ef524 +0x081c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
081ef529 +0x0821:  cmp    $0x3,%eax
081ef52c +0x0824:  setg   %al
081ef52f +0x0827:  test   %al,%al
081ef531 +0x0829:  je     081ef563 <+0x85b>
081ef533 +0x082b:  movzbl -0x41(%ebp),%eax
081ef537 +0x082f:  movsbl %al,%eax
081ef53a +0x0832:  movl   $0x13,0xc(%esp)
081ef542 +0x083a:  mov    %eax,0x8(%esp)
081ef546 +0x083e:  movl   $0xa,0x4(%esp)
081ef54e +0x0846:  mov    0xc(%ebp),%eax
081ef551 +0x0849:  mov    %eax,(%esp)
081ef554 +0x084c:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef559 +0x0851:  mov    $0x0,%ebx
081ef55e +0x0856:  jmp    081f026e <+0x1566>
081ef563 +0x085b:  mov    -0x30(%ebp),%eax
081ef566 +0x085e:  mov    %eax,(%esp)
081ef569 +0x0861:  call   0859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>  ; CParty::CanDoPartyActionAssalutState()
081ef56e +0x0866:  xor    $0x1,%eax
081ef571 +0x0869:  test   %al,%al
081ef573 +0x086b:  je     081ef5a5 <+0x89d>
081ef575 +0x086d:  movzbl -0x41(%ebp),%eax
081ef579 +0x0871:  movsbl %al,%eax
081ef57c +0x0874:  movl   $0x13,0xc(%esp)
081ef584 +0x087c:  mov    %eax,0x8(%esp)
081ef588 +0x0880:  movl   $0xa,0x4(%esp)
081ef590 +0x0888:  mov    0xc(%ebp),%eax
081ef593 +0x088b:  mov    %eax,(%esp)
081ef596 +0x088e:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef59b +0x0893:  mov    $0x0,%ebx
081ef5a0 +0x0898:  jmp    081f026e <+0x1566>
081ef5a5 +0x089d:  mov    0xc(%ebp),%eax
081ef5a8 +0x08a0:  mov    %eax,(%esp)
081ef5ab +0x08a3:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081ef5b0 +0x08a8:  test   %al,%al
081ef5b2 +0x08aa:  je     081ef5ca <+0x8c2>
081ef5b4 +0x08ac:  mov    -0x3c(%ebp),%eax
081ef5b7 +0x08af:  mov    %eax,(%esp)
081ef5ba +0x08b2:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
081ef5bf +0x08b7:  test   %al,%al
081ef5c1 +0x08b9:  je     081ef5ca <+0x8c2>
081ef5c3 +0x08bb:  mov    $0x1,%eax
081ef5c8 +0x08c0:  jmp    081ef5cf <+0x8c7>
081ef5ca +0x08c2:  mov    $0x0,%eax
081ef5cf +0x08c7:  test   %al,%al
081ef5d1 +0x08c9:  je     081ef603 <+0x8fb>
081ef5d3 +0x08cb:  movzbl -0x41(%ebp),%eax
081ef5d7 +0x08cf:  movsbl %al,%eax
081ef5da +0x08d2:  movl   $0x12,0xc(%esp)
081ef5e2 +0x08da:  mov    %eax,0x8(%esp)
081ef5e6 +0x08de:  movl   $0xa,0x4(%esp)
081ef5ee +0x08e6:  mov    0xc(%ebp),%eax
081ef5f1 +0x08e9:  mov    %eax,(%esp)
081ef5f4 +0x08ec:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef5f9 +0x08f1:  mov    $0x0,%ebx
081ef5fe +0x08f6:  jmp    081f026e <+0x1566>
081ef603 +0x08fb:  mov    &_ZN10GlobalData15s_power_managerE,%eax
081ef608 +0x0900:  mov    %eax,(%esp)
081ef60b +0x0903:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
081ef610 +0x0908:  xor    $0x1,%eax
081ef613 +0x090b:  test   %al,%al
081ef615 +0x090d:  je     081ef7ca <+0xac2>
081ef61b +0x0913:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081ef622 +0x091a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081ef627 +0x091f:  mov    %eax,-0x2c(%ebp)
081ef62a +0x0922:  movl   $0x0,0x4(%esp)
081ef632 +0x092a:  mov    0xc(%ebp),%eax
081ef635 +0x092d:  mov    %eax,(%esp)
081ef638 +0x0930:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081ef63d +0x0935:  test   %al,%al
081ef63f +0x0937:  je     081ef6f2 <+0x9ea>
081ef645 +0x093d:  mov    -0x3c(%ebp),%eax
081ef648 +0x0940:  mov    %eax,(%esp)
081ef64b +0x0943:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ef650 +0x0948:  mov    %eax,-0x28(%ebp)
081ef653 +0x094b:  mov    -0x3c(%ebp),%eax
081ef656 +0x094e:  mov    %eax,(%esp)
081ef659 +0x0951:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
081ef65e +0x0956:  add    $0x258,%eax
081ef663 +0x095b:  cmp    -0x2c(%ebp),%eax
081ef666 +0x095e:  setg   %al
081ef669 +0x0961:  test   %al,%al
081ef66b +0x0963:  je     081ef69d <+0x995>
081ef66d +0x0965:  movzbl -0x41(%ebp),%eax
081ef671 +0x0969:  movsbl %al,%eax
081ef674 +0x096c:  movl   $0xfa,0xc(%esp)
081ef67c +0x0974:  mov    %eax,0x8(%esp)
081ef680 +0x0978:  movl   $0xa,0x4(%esp)
081ef688 +0x0980:  mov    0xc(%ebp),%eax
081ef68b +0x0983:  mov    %eax,(%esp)
081ef68e +0x0986:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef693 +0x098b:  mov    $0x0,%ebx
081ef698 +0x0990:  jmp    081f026e <+0x1566>
081ef69d +0x0995:  cmpl   $0x0,-0x28(%ebp)
081ef6a1 +0x0999:  je     081ef6b9 <+0x9b1>
081ef6a3 +0x099b:  mov    -0x28(%ebp),%eax
081ef6a6 +0x099e:  mov    %eax,(%esp)
081ef6a9 +0x09a1:  call   085bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>  ; CParty::CheckMemberLastTryAssaultTime()
081ef6ae +0x09a6:  test   %al,%al
081ef6b0 +0x09a8:  je     081ef6b9 <+0x9b1>
081ef6b2 +0x09aa:  mov    $0x1,%eax
081ef6b7 +0x09af:  jmp    081ef6be <+0x9b6>
081ef6b9 +0x09b1:  mov    $0x0,%eax
081ef6be +0x09b6:  test   %al,%al
081ef6c0 +0x09b8:  je     081ef6f2 <+0x9ea>
081ef6c2 +0x09ba:  movzbl -0x41(%ebp),%eax
081ef6c6 +0x09be:  movsbl %al,%eax
081ef6c9 +0x09c1:  movl   $0xfa,0xc(%esp)
081ef6d1 +0x09c9:  mov    %eax,0x8(%esp)
081ef6d5 +0x09cd:  movl   $0xa,0x4(%esp)
081ef6dd +0x09d5:  mov    0xc(%ebp),%eax
081ef6e0 +0x09d8:  mov    %eax,(%esp)
081ef6e3 +0x09db:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef6e8 +0x09e0:  mov    $0x0,%ebx
081ef6ed +0x09e5:  jmp    081f026e <+0x1566>
081ef6f2 +0x09ea:  mov    0xc(%ebp),%eax
081ef6f5 +0x09ed:  mov    %eax,(%esp)
081ef6f8 +0x09f0:  call   0822f7ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4e58>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4e58
081ef6fd +0x09f5:  add    $0x258,%eax
081ef702 +0x09fa:  cmp    -0x2c(%ebp),%eax
081ef705 +0x09fd:  jle    081ef725 <+0xa1d>
081ef707 +0x09ff:  movl   $0x0,0x4(%esp)
081ef70f +0x0a07:  mov    -0x3c(%ebp),%eax
081ef712 +0x0a0a:  mov    %eax,(%esp)
081ef715 +0x0a0d:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081ef71a +0x0a12:  test   %al,%al
081ef71c +0x0a14:  je     081ef725 <+0xa1d>
081ef71e +0x0a16:  mov    $0x1,%eax
081ef723 +0x0a1b:  jmp    081ef72a <+0xa22>
081ef725 +0x0a1d:  mov    $0x0,%eax
081ef72a +0x0a22:  test   %al,%al
081ef72c +0x0a24:  je     081ef75e <+0xa56>
081ef72e +0x0a26:  movzbl -0x41(%ebp),%eax
081ef732 +0x0a2a:  movsbl %al,%eax
081ef735 +0x0a2d:  movl   $0xfa,0xc(%esp)
081ef73d +0x0a35:  mov    %eax,0x8(%esp)
081ef741 +0x0a39:  movl   $0xa,0x4(%esp)
081ef749 +0x0a41:  mov    0xc(%ebp),%eax
081ef74c +0x0a44:  mov    %eax,(%esp)
081ef74f +0x0a47:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef754 +0x0a4c:  mov    $0x0,%ebx
081ef759 +0x0a51:  jmp    081f026e <+0x1566>
081ef75e +0x0a56:  cmpl   $0x0,-0x30(%ebp)
081ef762 +0x0a5a:  je     081ef791 <+0xa89>
081ef764 +0x0a5c:  mov    -0x30(%ebp),%eax
081ef767 +0x0a5f:  mov    %eax,(%esp)
081ef76a +0x0a62:  call   085bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>  ; CParty::CheckMemberLastTryAssaultTime()
081ef76f +0x0a67:  test   %al,%al
081ef771 +0x0a69:  je     081ef791 <+0xa89>
081ef773 +0x0a6b:  movl   $0x0,0x4(%esp)
081ef77b +0x0a73:  mov    -0x3c(%ebp),%eax
081ef77e +0x0a76:  mov    %eax,(%esp)
081ef781 +0x0a79:  call   085d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>  ; expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*)
081ef786 +0x0a7e:  test   %al,%al
081ef788 +0x0a80:  je     081ef791 <+0xa89>
081ef78a +0x0a82:  mov    $0x1,%eax
081ef78f +0x0a87:  jmp    081ef796 <+0xa8e>
081ef791 +0x0a89:  mov    $0x0,%eax
081ef796 +0x0a8e:  test   %al,%al
081ef798 +0x0a90:  je     081ef7ca <+0xac2>
081ef79a +0x0a92:  movzbl -0x41(%ebp),%eax
081ef79e +0x0a96:  movsbl %al,%eax
081ef7a1 +0x0a99:  movl   $0xfa,0xc(%esp)
081ef7a9 +0x0aa1:  mov    %eax,0x8(%esp)
081ef7ad +0x0aa5:  movl   $0xa,0x4(%esp)
081ef7b5 +0x0aad:  mov    0xc(%ebp),%eax
081ef7b8 +0x0ab0:  mov    %eax,(%esp)
081ef7bb +0x0ab3:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef7c0 +0x0ab8:  mov    $0x0,%ebx
081ef7c5 +0x0abd:  jmp    081f026e <+0x1566>
081ef7ca +0x0ac2:  movw   $0x0,-0x5e(%ebp)
081ef7d0 +0x0ac8:  lea    -0x5e(%ebp),%eax
081ef7d3 +0x0acb:  mov    %eax,0x4(%esp)
081ef7d7 +0x0acf:  mov    0x10(%ebp),%eax
081ef7da +0x0ad2:  mov    %eax,(%esp)
081ef7dd +0x0ad5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081ef7e2 +0x0ada:  lea    -0x5c(%ebp),%eax
081ef7e5 +0x0add:  mov    %eax,(%esp)
081ef7e8 +0x0ae0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081ef7ed +0x0ae5:  movl   $0x7,0x8(%esp)
081ef7f5 +0x0aed:  movl   $0x0,0x4(%esp)
081ef7fd +0x0af5:  lea    -0x5c(%ebp),%eax
081ef800 +0x0af8:  mov    %eax,(%esp)
081ef803 +0x0afb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ef808 +0x0b00:  mov    0xc(%ebp),%eax
081ef80b +0x0b03:  mov    %eax,(%esp)
081ef80e +0x0b06:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081ef813 +0x0b0b:  movzwl %ax,%eax
081ef816 +0x0b0e:  mov    %eax,0x4(%esp)
081ef81a +0x0b12:  lea    -0x5c(%ebp),%eax
081ef81d +0x0b15:  mov    %eax,(%esp)
081ef820 +0x0b18:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ef825 +0x0b1d:  movl   $0x0,0x4(%esp)
081ef82d +0x0b25:  lea    -0x5c(%ebp),%eax
081ef830 +0x0b28:  mov    %eax,(%esp)
081ef833 +0x0b2b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ef838 +0x0b30:  mov    -0x40(%ebp),%eax
081ef83b +0x0b33:  mov    %eax,0x4(%esp)
081ef83f +0x0b37:  lea    -0x5c(%ebp),%eax
081ef842 +0x0b3a:  mov    %eax,(%esp)
081ef845 +0x0b3d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ef84a +0x0b42:  mov    0xc(%ebp),%eax
081ef84d +0x0b45:  mov    %eax,(%esp)
081ef850 +0x0b48:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
081ef855 +0x0b4d:  movzwl %ax,%ebx
081ef858 +0x0b50:  mov    0xc(%ebp),%eax
081ef85b +0x0b53:  mov    %eax,(%esp)
081ef85e +0x0b56:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
081ef863 +0x0b5b:  movzwl %ax,%eax
081ef866 +0x0b5e:  mov    %ebx,%edx
081ef868 +0x0b60:  sub    %eax,%edx
081ef86a +0x0b62:  mov    %edx,%eax
081ef86c +0x0b64:  mov    %eax,0x4(%esp)
081ef870 +0x0b68:  lea    -0x5c(%ebp),%eax
081ef873 +0x0b6b:  mov    %eax,(%esp)
081ef876 +0x0b6e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ef87b +0x0b73:  mov    0xc(%ebp),%eax
081ef87e +0x0b76:  mov    %eax,(%esp)
081ef881 +0x0b79:  call   0822f390 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a3a
081ef886 +0x0b7e:  movzbl %al,%eax
081ef889 +0x0b81:  mov    %eax,0x4(%esp)
081ef88d +0x0b85:  lea    -0x5c(%ebp),%eax
081ef890 +0x0b88:  mov    %eax,(%esp)
081ef893 +0x0b8b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ef898 +0x0b90:  movzwl -0x5e(%ebp),%eax
081ef89c +0x0b94:  movzwl %ax,%eax
081ef89f +0x0b97:  mov    %eax,0x4(%esp)
081ef8a3 +0x0b9b:  lea    -0x5c(%ebp),%eax
081ef8a6 +0x0b9e:  mov    %eax,(%esp)
081ef8a9 +0x0ba1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081ef8ae +0x0ba6:  movl   $0x1,0x4(%esp)
081ef8b6 +0x0bae:  lea    -0x5c(%ebp),%eax
081ef8b9 +0x0bb1:  mov    %eax,(%esp)
081ef8bc +0x0bb4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ef8c1 +0x0bb9:  lea    -0x5c(%ebp),%eax
081ef8c4 +0x0bbc:  mov    %eax,0x4(%esp)
081ef8c8 +0x0bc0:  mov    -0x3c(%ebp),%eax
081ef8cb +0x0bc3:  mov    %eax,(%esp)
081ef8ce +0x0bc6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ef8d3 +0x0bcb:  jmp    081f0236 <+0x152e>
081ef8d8 +0x0bd0:  movl   $0x1,-0x24(%ebp)
081ef8df +0x0bd7:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081ef8e4 +0x0bdc:  movl   $0x6,0xc(%esp)
081ef8ec +0x0be4:  movl   $0x1,0x8(%esp)
081ef8f4 +0x0bec:  mov    0xc(%ebp),%edx
081ef8f7 +0x0bef:  mov    %edx,0x4(%esp)
081ef8fb +0x0bf3:  mov    %eax,(%esp)
081ef8fe +0x0bf6:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081ef903 +0x0bfb:  test   %al,%al
081ef905 +0x0bfd:  jne    081ef92f <+0xc27>
081ef907 +0x0bff:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081ef90c +0x0c04:  movl   $0x6,0xc(%esp)
081ef914 +0x0c0c:  movl   $0x1,0x8(%esp)
081ef91c +0x0c14:  mov    -0x3c(%ebp),%edx
081ef91f +0x0c17:  mov    %edx,0x4(%esp)
081ef923 +0x0c1b:  mov    %eax,(%esp)
081ef926 +0x0c1e:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081ef92b +0x0c23:  test   %al,%al
081ef92d +0x0c25:  je     081ef936 <+0xc2e>
081ef92f +0x0c27:  mov    $0x1,%eax
081ef934 +0x0c2c:  jmp    081ef93b <+0xc33>
081ef936 +0x0c2e:  mov    $0x0,%eax
081ef93b +0x0c33:  test   %al,%al
081ef93d +0x0c35:  je     081ef96f <+0xc67>
081ef93f +0x0c37:  movzbl -0x41(%ebp),%eax
081ef943 +0x0c3b:  movsbl %al,%eax
081ef946 +0x0c3e:  movl   $0xd1,0xc(%esp)
081ef94e +0x0c46:  mov    %eax,0x8(%esp)
081ef952 +0x0c4a:  movl   $0xa,0x4(%esp)
081ef95a +0x0c52:  mov    0xc(%ebp),%eax
081ef95d +0x0c55:  mov    %eax,(%esp)
081ef960 +0x0c58:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef965 +0x0c5d:  mov    $0x0,%ebx
081ef96a +0x0c62:  jmp    081f026e <+0x1566>
081ef96f +0x0c67:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081ef974 +0x0c6c:  mov    -0x3c(%ebp),%edx
081ef977 +0x0c6f:  mov    %edx,0xc(%esp)
081ef97b +0x0c73:  movl   $0x36,0x8(%esp)
081ef983 +0x0c7b:  mov    0xc(%ebp),%edx
081ef986 +0x0c7e:  mov    %edx,0x4(%esp)
081ef98a +0x0c82:  mov    %eax,(%esp)
081ef98d +0x0c85:  call   08288994 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_>  ; CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*)
081ef992 +0x0c8a:  mov    %eax,-0x20(%ebp)
081ef995 +0x0c8d:  cmpl   $0x0,-0x20(%ebp)
081ef999 +0x0c91:  je     081ef9cd <+0xcc5>
081ef99b +0x0c93:  mov    -0x20(%ebp),%eax
081ef99e +0x0c96:  movzbl %al,%edx
081ef9a1 +0x0c99:  movzbl -0x41(%ebp),%eax
081ef9a5 +0x0c9d:  movsbl %al,%eax
081ef9a8 +0x0ca0:  mov    %edx,0xc(%esp)
081ef9ac +0x0ca4:  mov    %eax,0x8(%esp)
081ef9b0 +0x0ca8:  movl   $0xa,0x4(%esp)
081ef9b8 +0x0cb0:  mov    0xc(%ebp),%eax
081ef9bb +0x0cb3:  mov    %eax,(%esp)
081ef9be +0x0cb6:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081ef9c3 +0x0cbb:  mov    $0x0,%ebx
081ef9c8 +0x0cc0:  jmp    081f026e <+0x1566>
081ef9cd +0x0cc5:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081ef9d2 +0x0cca:  mov    -0x3c(%ebp),%edx
081ef9d5 +0x0ccd:  mov    %edx,0x4(%esp)
081ef9d9 +0x0cd1:  mov    %eax,(%esp)
081ef9dc +0x0cd4:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081ef9e1 +0x0cd9:  test   %al,%al
081ef9e3 +0x0cdb:  je     081efa15 <+0xd0d>
081ef9e5 +0x0cdd:  movzbl -0x41(%ebp),%eax
081ef9e9 +0x0ce1:  movsbl %al,%eax
081ef9ec +0x0ce4:  movl   $0x3d,0xc(%esp)
081ef9f4 +0x0cec:  mov    %eax,0x8(%esp)
081ef9f8 +0x0cf0:  movl   $0xa,0x4(%esp)
081efa00 +0x0cf8:  mov    0xc(%ebp),%eax
081efa03 +0x0cfb:  mov    %eax,(%esp)
081efa06 +0x0cfe:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efa0b +0x0d03:  mov    $0x0,%ebx
081efa10 +0x0d08:  jmp    081f026e <+0x1566>
081efa15 +0x0d0d:  mov    -0x3c(%ebp),%eax
081efa18 +0x0d10:  mov    %eax,(%esp)
081efa1b +0x0d13:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081efa20 +0x0d18:  test   %al,%al
081efa22 +0x0d1a:  je     081efa54 <+0xd4c>
081efa24 +0x0d1c:  movzbl -0x41(%ebp),%eax
081efa28 +0x0d20:  movsbl %al,%eax
081efa2b +0x0d23:  movl   $0x13,0xc(%esp)
081efa33 +0x0d2b:  mov    %eax,0x8(%esp)
081efa37 +0x0d2f:  movl   $0xa,0x4(%esp)
081efa3f +0x0d37:  mov    0xc(%ebp),%eax
081efa42 +0x0d3a:  mov    %eax,(%esp)
081efa45 +0x0d3d:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efa4a +0x0d42:  mov    $0x0,%ebx
081efa4f +0x0d47:  jmp    081f026e <+0x1566>
081efa54 +0x0d4c:  movl   $0xffffffff,0x4(%esp)
081efa5c +0x0d54:  mov    0xc(%ebp),%eax
081efa5f +0x0d57:  mov    %eax,(%esp)
081efa62 +0x0d5a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081efa67 +0x0d5f:  mov    %eax,0x4(%esp)
081efa6b +0x0d63:  mov    -0x3c(%ebp),%eax
081efa6e +0x0d66:  mov    %eax,(%esp)
081efa71 +0x0d69:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
081efa76 +0x0d6e:  test   %al,%al
081efa78 +0x0d70:  je     081efaaa <+0xda2>
081efa7a +0x0d72:  movzbl -0x41(%ebp),%eax
081efa7e +0x0d76:  movsbl %al,%eax
081efa81 +0x0d79:  movl   $0x4d,0xc(%esp)
081efa89 +0x0d81:  mov    %eax,0x8(%esp)
081efa8d +0x0d85:  movl   $0xa,0x4(%esp)
081efa95 +0x0d8d:  mov    0xc(%ebp),%eax
081efa98 +0x0d90:  mov    %eax,(%esp)
081efa9b +0x0d93:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efaa0 +0x0d98:  mov    $0x0,%ebx
081efaa5 +0x0d9d:  jmp    081f026e <+0x1566>
081efaaa +0x0da2:  mov    -0x3c(%ebp),%eax
081efaad +0x0da5:  mov    %eax,(%esp)
081efab0 +0x0da8:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081efab5 +0x0dad:  xor    $0x1,%eax
081efab8 +0x0db0:  test   %al,%al
081efaba +0x0db2:  je     081efba8 <+0xea0>
081efac0 +0x0db8:  mov    0xc(%ebp),%eax
081efac3 +0x0dbb:  mov    %eax,(%esp)
081efac6 +0x0dbe:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081efacb +0x0dc3:  mov    %eax,%ebx
081efacd +0x0dc5:  mov    -0x3c(%ebp),%eax
081efad0 +0x0dc8:  mov    %eax,(%esp)
081efad3 +0x0dcb:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081efad8 +0x0dd0:  cmp    %eax,%ebx
081efada +0x0dd2:  sete   %al
081efadd +0x0dd5:  test   %al,%al
081efadf +0x0dd7:  je     081efba1 <+0xe99>
081efae5 +0x0ddd:  movl   $0x7,0x8(%esp)
081efaed +0x0de5:  movl   $0x0,0x4(%esp)
081efaf5 +0x0ded:  lea    -0x5c(%ebp),%eax
081efaf8 +0x0df0:  mov    %eax,(%esp)
081efafb +0x0df3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081efb00 +0x0df8:  mov    0xc(%ebp),%eax
081efb03 +0x0dfb:  mov    %eax,(%esp)
081efb06 +0x0dfe:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081efb0b +0x0e03:  movzwl %ax,%eax
081efb0e +0x0e06:  mov    %eax,0x4(%esp)
081efb12 +0x0e0a:  lea    -0x5c(%ebp),%eax
081efb15 +0x0e0d:  mov    %eax,(%esp)
081efb18 +0x0e10:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081efb1d +0x0e15:  movl   $0x1,0x4(%esp)
081efb25 +0x0e1d:  lea    -0x5c(%ebp),%eax
081efb28 +0x0e20:  mov    %eax,(%esp)
081efb2b +0x0e23:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081efb30 +0x0e28:  mov    -0x40(%ebp),%eax
081efb33 +0x0e2b:  mov    %eax,0x4(%esp)
081efb37 +0x0e2f:  lea    -0x5c(%ebp),%eax
081efb3a +0x0e32:  mov    %eax,(%esp)
081efb3d +0x0e35:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081efb42 +0x0e3a:  mov    0xc(%ebp),%eax
081efb45 +0x0e3d:  mov    %eax,(%esp)
081efb48 +0x0e40:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
081efb4d +0x0e45:  mov    %eax,0x4(%esp)
081efb51 +0x0e49:  lea    -0x5c(%ebp),%eax
081efb54 +0x0e4c:  mov    %eax,(%esp)
081efb57 +0x0e4f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081efb5c +0x0e54:  movl   $0x1,0x4(%esp)
081efb64 +0x0e5c:  lea    -0x5c(%ebp),%eax
081efb67 +0x0e5f:  mov    %eax,(%esp)
081efb6a +0x0e62:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081efb6f +0x0e67:  lea    -0x5c(%ebp),%eax
081efb72 +0x0e6a:  mov    %eax,0x4(%esp)
081efb76 +0x0e6e:  mov    -0x3c(%ebp),%eax
081efb79 +0x0e71:  mov    %eax,(%esp)
081efb7c +0x0e74:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081efb81 +0x0e79:  movzbl -0x41(%ebp),%eax
081efb85 +0x0e7d:  movsbl %al,%eax
081efb88 +0x0e80:  mov    %eax,0x4(%esp)
081efb8c +0x0e84:  mov    -0x3c(%ebp),%eax
081efb8f +0x0e87:  mov    %eax,(%esp)
081efb92 +0x0e8a:  call   082308cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f76
081efb97 +0x0e8f:  mov    $0x0,%ebx
081efb9c +0x0e94:  jmp    081f026e <+0x1566>
081efba1 +0x0e99:  movl   $0x13,-0x24(%ebp)
081efba8 +0x0ea0:  cmpl   $0x0,-0x3c(%ebp)
081efbac +0x0ea4:  jne    081efbb7 <+0xeaf>
081efbae +0x0ea6:  movl   $0x3,-0x24(%ebp)
081efbb5 +0x0ead:  jmp    081efbcd <+0xec5>
081efbb7 +0x0eaf:  mov    -0x3c(%ebp),%eax
081efbba +0x0eb2:  mov    %eax,(%esp)
081efbbd +0x0eb5:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081efbc2 +0x0eba:  test   %al,%al
081efbc4 +0x0ebc:  je     081efbcd <+0xec5>
081efbc6 +0x0ebe:  movl   $0x12,-0x24(%ebp)
081efbcd +0x0ec5:  mov    -0x24(%ebp),%eax
081efbd0 +0x0ec8:  movzbl %al,%edx
081efbd3 +0x0ecb:  movzbl -0x41(%ebp),%eax
081efbd7 +0x0ecf:  movsbl %al,%eax
081efbda +0x0ed2:  mov    %edx,0xc(%esp)
081efbde +0x0ed6:  mov    %eax,0x8(%esp)
081efbe2 +0x0eda:  movl   $0xa,0x4(%esp)
081efbea +0x0ee2:  mov    0xc(%ebp),%eax
081efbed +0x0ee5:  mov    %eax,(%esp)
081efbf0 +0x0ee8:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efbf5 +0x0eed:  jmp    081f0236 <+0x152e>
081efbfa +0x0ef2:  mov    0xc(%ebp),%eax
081efbfd +0x0ef5:  mov    %eax,(%esp)
081efc00 +0x0ef8:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081efc05 +0x0efd:  mov    %eax,-0x1c(%ebp)
081efc08 +0x0f00:  cmpl   $0x0,-0x1c(%ebp)
081efc0c +0x0f04:  jne    081efc39 <+0xf31>
081efc0e +0x0f06:  movl   $0x0,0xc(%esp)
081efc16 +0x0f0e:  movl   $0x0,0x8(%esp)
081efc1e +0x0f16:  movl   $&_ZZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081efc26 +0x0f1e:  movl   $0x7494,(%esp)
081efc2d +0x0f25:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081efc32 +0x0f2a:  mov    %eax,%ebx
081efc34 +0x0f2c:  jmp    081f026e <+0x1566>
081efc39 +0x0f31:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081efc3e +0x0f36:  mov    -0x3c(%ebp),%edx
081efc41 +0x0f39:  mov    %edx,0x4(%esp)
081efc45 +0x0f3d:  mov    %eax,(%esp)
081efc48 +0x0f40:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081efc4d +0x0f45:  test   %al,%al
081efc4f +0x0f47:  je     081efc81 <+0xf79>
081efc51 +0x0f49:  movzbl -0x41(%ebp),%eax
081efc55 +0x0f4d:  movsbl %al,%eax
081efc58 +0x0f50:  movl   $0x3d,0xc(%esp)
081efc60 +0x0f58:  mov    %eax,0x8(%esp)
081efc64 +0x0f5c:  movl   $0xa,0x4(%esp)
081efc6c +0x0f64:  mov    0xc(%ebp),%eax
081efc6f +0x0f67:  mov    %eax,(%esp)
081efc72 +0x0f6a:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efc77 +0x0f6f:  mov    $0x0,%ebx
081efc7c +0x0f74:  jmp    081f026e <+0x1566>
081efc81 +0x0f79:  mov    -0x3c(%ebp),%eax
081efc84 +0x0f7c:  mov    %eax,(%esp)
081efc87 +0x0f7f:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081efc8c +0x0f84:  test   %al,%al
081efc8e +0x0f86:  je     081efcc0 <+0xfb8>
081efc90 +0x0f88:  movzbl -0x41(%ebp),%eax
081efc94 +0x0f8c:  movsbl %al,%eax
081efc97 +0x0f8f:  movl   $0x13,0xc(%esp)
081efc9f +0x0f97:  mov    %eax,0x8(%esp)
081efca3 +0x0f9b:  movl   $0xa,0x4(%esp)
081efcab +0x0fa3:  mov    0xc(%ebp),%eax
081efcae +0x0fa6:  mov    %eax,(%esp)
081efcb1 +0x0fa9:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efcb6 +0x0fae:  mov    $0x0,%ebx
081efcbb +0x0fb3:  jmp    081f026e <+0x1566>
081efcc0 +0x0fb8:  mov    -0x3c(%ebp),%eax
081efcc3 +0x0fbb:  mov    %eax,(%esp)
081efcc6 +0x0fbe:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
081efccb +0x0fc3:  test   %al,%al
081efccd +0x0fc5:  je     081efcff <+0xff7>
081efccf +0x0fc7:  movzbl -0x41(%ebp),%eax
081efcd3 +0x0fcb:  movsbl %al,%eax
081efcd6 +0x0fce:  movl   $0xbe,0xc(%esp)
081efcde +0x0fd6:  mov    %eax,0x8(%esp)
081efce2 +0x0fda:  movl   $0xa,0x4(%esp)
081efcea +0x0fe2:  mov    0xc(%ebp),%eax
081efced +0x0fe5:  mov    %eax,(%esp)
081efcf0 +0x0fe8:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efcf5 +0x0fed:  mov    $0x0,%ebx
081efcfa +0x0ff2:  jmp    081f026e <+0x1566>
081efcff +0x0ff7:  mov    -0x3c(%ebp),%eax
081efd02 +0x0ffa:  mov    %eax,(%esp)
081efd05 +0x0ffd:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081efd0a +0x1002:  cmp    $0x4,%eax
081efd0d +0x1005:  setg   %al
081efd10 +0x1008:  test   %al,%al
081efd12 +0x100a:  je     081efd1e <+0x1016>
081efd14 +0x100c:  mov    $0x0,%ebx
081efd19 +0x1011:  jmp    081f026e <+0x1566>
081efd1e +0x1016:  movl   $0x7,0x8(%esp)
081efd26 +0x101e:  movl   $0x0,0x4(%esp)
081efd2e +0x1026:  lea    -0x5c(%ebp),%eax
081efd31 +0x1029:  mov    %eax,(%esp)
081efd34 +0x102c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081efd39 +0x1031:  mov    0xc(%ebp),%eax
081efd3c +0x1034:  mov    %eax,(%esp)
081efd3f +0x1037:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081efd44 +0x103c:  movzwl %ax,%eax
081efd47 +0x103f:  mov    %eax,0x4(%esp)
081efd4b +0x1043:  lea    -0x5c(%ebp),%eax
081efd4e +0x1046:  mov    %eax,(%esp)
081efd51 +0x1049:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081efd56 +0x104e:  movl   $0x2,0x4(%esp)
081efd5e +0x1056:  lea    -0x5c(%ebp),%eax
081efd61 +0x1059:  mov    %eax,(%esp)
081efd64 +0x105c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081efd69 +0x1061:  movzwl -0x43(%ebp),%eax
081efd6d +0x1065:  movzwl %ax,%eax
081efd70 +0x1068:  mov    %eax,0x4(%esp)
081efd74 +0x106c:  lea    -0x5c(%ebp),%eax
081efd77 +0x106f:  mov    %eax,(%esp)
081efd7a +0x1072:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081efd7f +0x1077:  movl   $0x1,0x4(%esp)
081efd87 +0x107f:  lea    -0x5c(%ebp),%eax
081efd8a +0x1082:  mov    %eax,(%esp)
081efd8d +0x1085:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081efd92 +0x108a:  lea    -0x5c(%ebp),%eax
081efd95 +0x108d:  mov    %eax,0x4(%esp)
081efd99 +0x1091:  mov    -0x3c(%ebp),%eax
081efd9c +0x1094:  mov    %eax,(%esp)
081efd9f +0x1097:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081efda4 +0x109c:  jmp    081f0236 <+0x152e>
081efda9 +0x10a1:  mov    0xc(%ebp),%eax
081efdac +0x10a4:  mov    %eax,(%esp)
081efdaf +0x10a7:  call   086551de <_ZN5CUser10GetWarRoomEv>  ; CUser::GetWarRoom()
081efdb4 +0x10ac:  mov    %eax,-0x18(%ebp)
081efdb7 +0x10af:  cmpl   $0x0,-0x18(%ebp)
081efdbb +0x10b3:  jne    081efde8 <+0x10e0>
081efdbd +0x10b5:  movl   $0x0,0xc(%esp)
081efdc5 +0x10bd:  movl   $0x0,0x8(%esp)
081efdcd +0x10c5:  movl   $&_ZZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081efdd5 +0x10cd:  movl   $0x74bf,(%esp)
081efddc +0x10d4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081efde1 +0x10d9:  mov    %eax,%ebx
081efde3 +0x10db:  jmp    081f026e <+0x1566>
081efde8 +0x10e0:  mov    -0x3c(%ebp),%eax
081efdeb +0x10e3:  mov    %eax,(%esp)
081efdee +0x10e6:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081efdf3 +0x10eb:  cmp    $0x4,%eax
081efdf6 +0x10ee:  setg   %al
081efdf9 +0x10f1:  test   %al,%al
081efdfb +0x10f3:  je     081efe07 <+0x10ff>
081efdfd +0x10f5:  mov    $0x0,%ebx
081efe02 +0x10fa:  jmp    081f026e <+0x1566>
081efe07 +0x10ff:  mov    -0x18(%ebp),%eax
081efe0a +0x1102:  mov    %eax,(%esp)
081efe0d +0x1105:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
081efe12 +0x110a:  cmp    $0x2,%eax
081efe15 +0x110d:  sete   %al
081efe18 +0x1110:  test   %al,%al
081efe1a +0x1112:  je     081efe26 <+0x111e>
081efe1c +0x1114:  mov    $0x0,%ebx
081efe21 +0x1119:  jmp    081f026e <+0x1566>
081efe26 +0x111e:  movl   $0x7,0x8(%esp)
081efe2e +0x1126:  movl   $0x0,0x4(%esp)
081efe36 +0x112e:  lea    -0x5c(%ebp),%eax
081efe39 +0x1131:  mov    %eax,(%esp)
081efe3c +0x1134:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081efe41 +0x1139:  mov    0xc(%ebp),%eax
081efe44 +0x113c:  mov    %eax,(%esp)
081efe47 +0x113f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081efe4c +0x1144:  movzwl %ax,%eax
081efe4f +0x1147:  mov    %eax,0x4(%esp)
081efe53 +0x114b:  lea    -0x5c(%ebp),%eax
081efe56 +0x114e:  mov    %eax,(%esp)
081efe59 +0x1151:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081efe5e +0x1156:  movl   $0x3,0x4(%esp)
081efe66 +0x115e:  lea    -0x5c(%ebp),%eax
081efe69 +0x1161:  mov    %eax,(%esp)
081efe6c +0x1164:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081efe71 +0x1169:  movzwl -0x43(%ebp),%eax
081efe75 +0x116d:  movzwl %ax,%eax
081efe78 +0x1170:  mov    %eax,0x4(%esp)
081efe7c +0x1174:  lea    -0x5c(%ebp),%eax
081efe7f +0x1177:  mov    %eax,(%esp)
081efe82 +0x117a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081efe87 +0x117f:  movl   $0x1,0x4(%esp)
081efe8f +0x1187:  lea    -0x5c(%ebp),%eax
081efe92 +0x118a:  mov    %eax,(%esp)
081efe95 +0x118d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081efe9a +0x1192:  lea    -0x5c(%ebp),%eax
081efe9d +0x1195:  mov    %eax,0x4(%esp)
081efea1 +0x1199:  mov    -0x3c(%ebp),%eax
081efea4 +0x119c:  mov    %eax,(%esp)
081efea7 +0x119f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081efeac +0x11a4:  jmp    081f0236 <+0x152e>
081efeb1 +0x11a9:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081efeb6 +0x11ae:  movl   $0x37,0x8(%esp)
081efebe +0x11b6:  mov    0xc(%ebp),%edx
081efec1 +0x11b9:  mov    %edx,0x4(%esp)
081efec5 +0x11bd:  mov    %eax,(%esp)
081efec8 +0x11c0:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081efecd +0x11c5:  mov    %eax,-0x14(%ebp)
081efed0 +0x11c8:  cmpl   $0x0,-0x14(%ebp)
081efed4 +0x11cc:  je     081eff08 <+0x1200>
081efed6 +0x11ce:  mov    -0x14(%ebp),%eax
081efed9 +0x11d1:  movzbl %al,%edx
081efedc +0x11d4:  movzbl -0x41(%ebp),%eax
081efee0 +0x11d8:  movsbl %al,%eax
081efee3 +0x11db:  mov    %edx,0xc(%esp)
081efee7 +0x11df:  mov    %eax,0x8(%esp)
081efeeb +0x11e3:  movl   $0xa,0x4(%esp)
081efef3 +0x11eb:  mov    0xc(%ebp),%eax
081efef6 +0x11ee:  mov    %eax,(%esp)
081efef9 +0x11f1:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
081efefe +0x11f6:  mov    $0x0,%ebx
081eff03 +0x11fb:  jmp    081f026e <+0x1566>
081eff08 +0x1200:  mov    -0x3c(%ebp),%eax
081eff0b +0x1203:  mov    %eax,(%esp)
081eff0e +0x1206:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eff13 +0x120b:  cmp    $0x4,%eax
081eff16 +0x120e:  setg   %al
081eff19 +0x1211:  test   %al,%al
081eff1b +0x1213:  je     081eff27 <+0x121f>
081eff1d +0x1215:  mov    $0x0,%ebx
081eff22 +0x121a:  jmp    081f026e <+0x1566>
081eff27 +0x121f:  mov    0xc(%ebp),%eax
081eff2a +0x1222:  mov    %eax,(%esp)
081eff2d +0x1225:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081eff32 +0x122a:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081eff38 +0x1230:  mov    %eax,0x4(%esp)
081eff3c +0x1234:  mov    %edx,(%esp)
081eff3f +0x1237:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081eff44 +0x123c:  xor    $0x1,%eax
081eff47 +0x123f:  test   %al,%al
081eff49 +0x1241:  je     081eff73 <+0x126b>
081eff4b +0x1243:  mov    -0x3c(%ebp),%eax
081eff4e +0x1246:  mov    %eax,(%esp)
081eff51 +0x1249:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081eff56 +0x124e:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081eff5c +0x1254:  mov    %eax,0x4(%esp)
081eff60 +0x1258:  mov    %edx,(%esp)
081eff63 +0x125b:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081eff68 +0x1260:  test   %al,%al
081eff6a +0x1262:  je     081eff73 <+0x126b>
081eff6c +0x1264:  mov    $0x1,%eax
081eff71 +0x1269:  jmp    081eff78 <+0x1270>
081eff73 +0x126b:  mov    $0x0,%eax
081eff78 +0x1270:  test   %al,%al
081eff7a +0x1272:  je     081eff86 <+0x127e>
081eff7c +0x1274:  mov    $0x0,%ebx
081eff81 +0x1279:  jmp    081f026e <+0x1566>
081eff86 +0x127e:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081eff8b +0x1283:  movl   $0x0,0xc(%esp)
081eff93 +0x128b:  mov    -0x3c(%ebp),%edx
081eff96 +0x128e:  mov    %edx,0x8(%esp)
081eff9a +0x1292:  mov    0xc(%ebp),%edx
081eff9d +0x1295:  mov    %edx,0x4(%esp)
081effa1 +0x1299:  mov    %eax,(%esp)
081effa4 +0x129c:  call   082edfba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi>  ; pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)
081effa9 +0x12a1:  xor    $0x1,%eax
081effac +0x12a4:  test   %al,%al
081effae +0x12a6:  je     081f0235 <+0x152d>
081effb4 +0x12ac:  mov    $0x7590,%ebx
081effb9 +0x12b1:  jmp    081f026e <+0x1566>
081effbe +0x12b6:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081effc3 +0x12bb:  movl   $0x8,0xc(%esp)
081effcb +0x12c3:  movl   $0x1,0x8(%esp)
081effd3 +0x12cb:  mov    0xc(%ebp),%edx
081effd6 +0x12ce:  mov    %edx,0x4(%esp)
081effda +0x12d2:  mov    %eax,(%esp)
081effdd +0x12d5:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081effe2 +0x12da:  test   %al,%al
081effe4 +0x12dc:  je     081f001d <+0x1315>
081effe6 +0x12de:  movzbl -0x41(%ebp),%eax
081effea +0x12e2:  movsbl %al,%eax
081effed +0x12e5:  lea    -0x5c(%ebp),%edx
081efff0 +0x12e8:  mov    %edx,0x10(%esp)
081efff4 +0x12ec:  movl   $0xd1,0xc(%esp)
081efffc +0x12f4:  mov    %eax,0x8(%esp)
081f0000 +0x12f8:  movl   $0xa,0x4(%esp)
081f0008 +0x1300:  mov    0xc(%ebp),%eax
081f000b +0x1303:  mov    %eax,(%esp)
081f000e +0x1306:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f0013 +0x130b:  mov    $0x0,%ebx
081f0018 +0x1310:  jmp    081f026e <+0x1566>
081f001d +0x1315:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f0022 +0x131a:  movl   $0x21,0x8(%esp)
081f002a +0x1322:  mov    0xc(%ebp),%edx
081f002d +0x1325:  mov    %edx,0x4(%esp)
081f0031 +0x1329:  mov    %eax,(%esp)
081f0034 +0x132c:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081f0039 +0x1331:  mov    %eax,-0x10(%ebp)
081f003c +0x1334:  cmpl   $0x0,-0x10(%ebp)
081f0040 +0x1338:  je     081f007b <+0x1373>
081f0042 +0x133a:  mov    -0x10(%ebp),%eax
081f0045 +0x133d:  movzbl %al,%edx
081f0048 +0x1340:  movzbl -0x41(%ebp),%eax
081f004c +0x1344:  movsbl %al,%eax
081f004f +0x1347:  lea    -0x5c(%ebp),%ecx
081f0052 +0x134a:  mov    %ecx,0x10(%esp)
081f0056 +0x134e:  mov    %edx,0xc(%esp)
081f005a +0x1352:  mov    %eax,0x8(%esp)
081f005e +0x1356:  movl   $0xa,0x4(%esp)
081f0066 +0x135e:  mov    0xc(%ebp),%eax
081f0069 +0x1361:  mov    %eax,(%esp)
081f006c +0x1364:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f0071 +0x1369:  mov    $0x0,%ebx
081f0076 +0x136e:  jmp    081f026e <+0x1566>
081f007b +0x1373:  mov    -0x3c(%ebp),%eax
081f007e +0x1376:  mov    %eax,(%esp)
081f0081 +0x1379:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081f0086 +0x137e:  cmp    $0x1,%eax
081f0089 +0x1381:  setne  %al
081f008c +0x1384:  test   %al,%al
081f008e +0x1386:  je     081f00c7 <+0x13bf>
081f0090 +0x1388:  movzbl -0x41(%ebp),%eax
081f0094 +0x138c:  movsbl %al,%eax
081f0097 +0x138f:  lea    -0x5c(%ebp),%edx
081f009a +0x1392:  mov    %edx,0x10(%esp)
081f009e +0x1396:  movl   $0x17,0xc(%esp)
081f00a6 +0x139e:  mov    %eax,0x8(%esp)
081f00aa +0x13a2:  movl   $0xa,0x4(%esp)
081f00b2 +0x13aa:  mov    0xc(%ebp),%eax
081f00b5 +0x13ad:  mov    %eax,(%esp)
081f00b8 +0x13b0:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f00bd +0x13b5:  mov    $0x0,%ebx
081f00c2 +0x13ba:  jmp    081f026e <+0x1566>
081f00c7 +0x13bf:  movzbl -0x41(%ebp),%eax
081f00cb +0x13c3:  movsbl %al,%edx
081f00ce +0x13c6:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081f00d3 +0x13cb:  lea    -0x5c(%ebp),%ecx
081f00d6 +0x13ce:  mov    %ecx,0x10(%esp)
081f00da +0x13d2:  mov    %edx,0xc(%esp)
081f00de +0x13d6:  mov    -0x3c(%ebp),%edx
081f00e1 +0x13d9:  mov    %edx,0x8(%esp)
081f00e5 +0x13dd:  mov    0xc(%ebp),%edx
081f00e8 +0x13e0:  mov    %edx,0x4(%esp)
081f00ec +0x13e4:  mov    %eax,(%esp)
081f00ef +0x13e7:  call   0849e256 <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
081f00f4 +0x13ec:  jmp    081f0236 <+0x152e>
081f00f9 +0x13f1:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081f00fe +0x13f6:  movl   $0x8,0xc(%esp)
081f0106 +0x13fe:  movl   $0x1,0x8(%esp)
081f010e +0x1406:  mov    0xc(%ebp),%edx
081f0111 +0x1409:  mov    %edx,0x4(%esp)
081f0115 +0x140d:  mov    %eax,(%esp)
081f0118 +0x1410:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081f011d +0x1415:  test   %al,%al
081f011f +0x1417:  je     081f0158 <+0x1450>
081f0121 +0x1419:  movzbl -0x41(%ebp),%eax
081f0125 +0x141d:  movsbl %al,%eax
081f0128 +0x1420:  lea    -0x5c(%ebp),%edx
081f012b +0x1423:  mov    %edx,0x10(%esp)
081f012f +0x1427:  movl   $0xd1,0xc(%esp)
081f0137 +0x142f:  mov    %eax,0x8(%esp)
081f013b +0x1433:  movl   $0xa,0x4(%esp)
081f0143 +0x143b:  mov    0xc(%ebp),%eax
081f0146 +0x143e:  mov    %eax,(%esp)
081f0149 +0x1441:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f014e +0x1446:  mov    $0x0,%ebx
081f0153 +0x144b:  jmp    081f026e <+0x1566>
081f0158 +0x1450:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081f015d +0x1455:  mov    -0x3c(%ebp),%edx
081f0160 +0x1458:  mov    %edx,0xc(%esp)
081f0164 +0x145c:  movl   $0x20,0x8(%esp)
081f016c +0x1464:  mov    0xc(%ebp),%edx
081f016f +0x1467:  mov    %edx,0x4(%esp)
081f0173 +0x146b:  mov    %eax,(%esp)
081f0176 +0x146e:  call   08288994 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_>  ; CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*)
081f017b +0x1473:  mov    %eax,-0xc(%ebp)
081f017e +0x1476:  cmpl   $0x0,-0xc(%ebp)
081f0182 +0x147a:  je     081f01bd <+0x14b5>
081f0184 +0x147c:  mov    -0xc(%ebp),%eax
081f0187 +0x147f:  movzbl %al,%edx
081f018a +0x1482:  movzbl -0x41(%ebp),%eax
081f018e +0x1486:  movsbl %al,%eax
081f0191 +0x1489:  lea    -0x5c(%ebp),%ecx
081f0194 +0x148c:  mov    %ecx,0x10(%esp)
081f0198 +0x1490:  mov    %edx,0xc(%esp)
081f019c +0x1494:  mov    %eax,0x8(%esp)
081f01a0 +0x1498:  movl   $0xa,0x4(%esp)
081f01a8 +0x14a0:  mov    0xc(%ebp),%eax
081f01ab +0x14a3:  mov    %eax,(%esp)
081f01ae +0x14a6:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f01b3 +0x14ab:  mov    $0x0,%ebx
081f01b8 +0x14b0:  jmp    081f026e <+0x1566>
081f01bd +0x14b5:  mov    0xc(%ebp),%eax
081f01c0 +0x14b8:  mov    %eax,(%esp)
081f01c3 +0x14bb:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081f01c8 +0x14c0:  cmp    $0x1,%eax
081f01cb +0x14c3:  setne  %al
081f01ce +0x14c6:  test   %al,%al
081f01d0 +0x14c8:  je     081f0206 <+0x14fe>
081f01d2 +0x14ca:  movzbl -0x41(%ebp),%eax
081f01d6 +0x14ce:  movsbl %al,%eax
081f01d9 +0x14d1:  lea    -0x5c(%ebp),%edx
081f01dc +0x14d4:  mov    %edx,0x10(%esp)
081f01e0 +0x14d8:  movl   $0x17,0xc(%esp)
081f01e8 +0x14e0:  mov    %eax,0x8(%esp)
081f01ec +0x14e4:  movl   $0xa,0x4(%esp)
081f01f4 +0x14ec:  mov    0xc(%ebp),%eax
081f01f7 +0x14ef:  mov    %eax,(%esp)
081f01fa +0x14f2:  call   0867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char, PacketGuard&)
081f01ff +0x14f7:  mov    $0x0,%ebx
081f0204 +0x14fc:  jmp    081f026e <+0x1566>
081f0206 +0x14fe:  movzbl -0x41(%ebp),%eax
081f020a +0x1502:  movsbl %al,%edx
081f020d +0x1505:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081f0212 +0x150a:  lea    -0x5c(%ebp),%ecx
081f0215 +0x150d:  mov    %ecx,0x10(%esp)
081f0219 +0x1511:  mov    %edx,0xc(%esp)
081f021d +0x1515:  mov    -0x3c(%ebp),%edx
081f0220 +0x1518:  mov    %edx,0x8(%esp)
081f0224 +0x151c:  mov    0xc(%ebp),%edx
081f0227 +0x151f:  mov    %edx,0x4(%esp)
081f022b +0x1523:  mov    %eax,(%esp)
081f022e +0x1526:  call   0849e256 <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>  ; expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
081f0233 +0x152b:  jmp    081f0236 <+0x152e>
081f0235 +0x152d:  nop
081f0236 +0x152e:  movzbl -0x41(%ebp),%eax
081f023a +0x1532:  movsbl %al,%eax
081f023d +0x1535:  mov    %eax,0x4(%esp)
081f0241 +0x1539:  mov    -0x3c(%ebp),%eax
081f0244 +0x153c:  mov    %eax,(%esp)
081f0247 +0x153f:  call   082308cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f76
081f024c +0x1544:  mov    $0x0,%ebx
081f0251 +0x1549:  jmp    081f026e <+0x1566>
081f0253 +0x154b:  mov    %edx,%ebx
081f0255 +0x154d:  mov    %eax,%esi
081f0257 +0x154f:  lea    -0x5c(%ebp),%eax
081f025a +0x1552:  mov    %eax,(%esp)
081f025d +0x1555:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f0262 +0x155a:  mov    %esi,%eax
081f0264 +0x155c:  mov    %ebx,%edx
081f0266 +0x155e:  mov    %eax,(%esp)
081f0269 +0x1561:  call   08ae3750 <_Unwind_Resume>
081f026e +0x1566:  lea    -0x5c(%ebp),%eax
081f0271 +0x1569:  mov    %eax,(%esp)
081f0274 +0x156c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f0279 +0x1571:  mov    %ebx,%eax
081f027b +0x1573:  sub    $0xffffff80,%esp
081f027e +0x1576:  pop    %ebx
081f027f +0x1577:  pop    %esi
081f0280 +0x1578:  pop    %ebp
081f0281 +0x1579:  ret
```

## 反编译 C

```c
// DisPatcher_ReqPeer::dispatch_sig @ 0x81eed08

/* DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ReqPeer::dispatch_sig(DisPatcher_ReqPeer *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  CPrivateStoreMgr *pCVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  CGameOption *pCVar11;
  CAssaultMgr *pCVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ServiceRestrictManager *pSVar16;
  ushort local_62;
  PacketGuard local_60 [12];
  MSG_REQ_TO_PEER local_54 [13];
  ushort local_47;
  char local_45;
  uint local_44;
  CUser *local_40;
  int local_3c;
  int local_38;
  CParty *local_34;
  int local_30;
  CParty *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  WarRoom *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar6 = CUser::get_state(param_1);
  if (((iVar6 == 3) || (iVar6 = CUser::get_state(param_1), iVar6 == 6)) ||
     (iVar6 = CUser::get_state(param_1), iVar6 == 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  PacketGuard::PacketGuard(local_60);
                    /* try { // try from 081eed75 to 081f0232 has its CatchHandler @ 081f0253 */
  cVar3 = PacketBuf::get_short(param_2,&local_47);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725a,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  cVar3 = PacketBuf::get_byte(param_2,&local_45);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725b,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_44);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725c,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3c);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbf);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
  uVar2 = local_47;
  if ((cVar3 != '\0') && (local_45 != '\x02')) {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  local_40 = (CUser *)GameWorld::find_from_world(pGVar9,uVar2);
  local_3c = 1;
  if (local_40 == (CUser *)0x0) {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,3);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUser::alonePlay_Mode(local_40,local_54);
  if (cVar3 != '\0') {
    uVar7 = CUser::get_SoloPlay_msgType(local_40,local_54);
    uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_40);
    CUser::Send_SoloPlay_Reject_NotiPack(param_1,uVar10,1,uVar7);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  local_38 = 0x24;
  if (local_45 == '\x01') {
    local_38 = 0x1f;
  }
  else if (local_45 < '\x02') {
    if (local_45 == '\0') {
      local_38 = 6;
    }
  }
  else if (local_45 == '\x02') {
    local_38 = 7;
  }
  else if (local_45 == '\x03') {
    local_38 = 8;
  }
  if (local_38 == 0x24) {
LAB_081ef078:
    bVar1 = false;
  }
  else {
    pCVar11 = (CGameOption *)CUser::GetGameOptionRef(local_40);
    sVar5 = CGameOption::get_etc_option(pCVar11,local_38);
    if (sVar5 == 0) goto LAB_081ef078;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = CUser::get_SoloPlay_msgType(local_40,local_54);
    uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_40);
    CUser::Send_SoloPlay_Reject_NotiPack(param_1,uVar10,0,uVar7);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
  if (cVar3 != '\0') {
    iVar6 = CUser::get_state(local_40);
    if ((iVar6 == 6) || (iVar6 = CUser::get_state(local_40), iVar6 == 7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
  }
  cVar4 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)local_40);
  cVar3 = local_45;
  if (cVar4 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xc0);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pCVar12 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  local_3c = pvp_assault::CAssaultMgr::check_party_teleport_user
                       (pCVar12,cVar3,param_1,local_40,true);
  if (0 < local_3c) {
    uVar7 = 0;
    goto LAB_081f026e;
  }
  switch(local_45) {
  case '\0':
    iVar6 = CUser::get_state(param_1);
    if ((iVar6 == 5) ||
       (cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0)),
       cVar3 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_charac_no(param_1,-1);
    cVar3 = CUser::isBlackUser(local_40,uVar15);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x4d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(param_1);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xea);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbe);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if ((iVar6 == 5) ||
       (cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_40 + 0xe0)),
       cVar3 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,3);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if (cVar3 != '\0') {
      cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      if ((cVar3 == '\a') &&
         (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40), cVar3 == '\a')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cVar3 = CUser::getPowerSide(param_1);
        cVar4 = CUser::getPowerSide(local_40);
        if (cVar3 != cVar4) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
      else {
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        if (((cVar3 == '\a') ||
            (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40), cVar3 != '\a'))
           && ((cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar3 != '\a'
               || (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40),
                  cVar3 == '\a')))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
    }
    local_34 = (CParty *)CUser::GetParty(param_1);
    if (local_34 != (CParty *)0x0) {
      iVar6 = CParty::get_member_count(local_34);
      if (3 < iVar6) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      cVar3 = CParty::CanDoPartyActionAssalutState(local_34);
      if (cVar3 != '\x01') {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
        uVar7 = 0;
        goto LAB_081f026e;
      }
    }
    cVar3 = CUser::CheckInParty(param_1);
    if ((cVar3 == '\0') || (cVar3 = CUser::CheckInParty(local_40), cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x12);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if (cVar3 != '\x01') {
      local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      cVar3 = expert_job::CAlchemist::GetAssaultPrevent(param_1,(bool *)0x0);
      if (cVar3 != '\0') {
        local_2c = (CParty *)CUser::GetParty(local_40);
        iVar6 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)local_40);
        if (local_30 < iVar6 + 600) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
          uVar7 = 0;
          goto LAB_081f026e;
        }
        if ((local_2c == (CParty *)0x0) ||
           (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_2c), cVar3 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
      iVar6 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
      if ((local_30 < iVar6 + 600) &&
         (cVar3 = expert_job::CAlchemist::GetAssaultPrevent(local_40,(bool *)0x0), cVar3 != '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      if (((local_34 == (CParty *)0x0) ||
          (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_34), cVar3 == '\0')) ||
         (cVar3 = expert_job::CAlchemist::GetAssaultPrevent(local_40,(bool *)0x0), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
        uVar7 = 0;
        goto LAB_081f026e;
      }
    }
    local_62 = 0;
    PacketBuf::get_short(param_2,&local_62);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_44);
    uVar15 = CUser::getCurCharacTotalMaxFatigue(param_1);
    uVar13 = CUser::getCurCharacTotalFatigue(param_1);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_60,(uVar15 & 0xffff) - (uVar13 & 0xffff));
    uVar15 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,(uint)local_62);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x01':
    local_28 = 1;
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,6);
    if (cVar3 == '\0') {
      pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar3 = ServiceRestrictManager::isRestricted(pSVar16,local_40,1,6);
      if (cVar3 != '\0') goto LAB_081ef92f;
      bVar1 = false;
    }
    else {
LAB_081ef92f:
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_24 = CSecu_ProtectionField::CheckOpposite
                         (GlobalData::s_pSecuProtectionField,param_1,0x36,local_40);
    if (local_24 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_24 & 0xff);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_charac_no(param_1,-1);
    cVar3 = CUser::isBlackUser(local_40,uVar15);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x4d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::CheckInTrade(local_40);
    if (cVar3 != '\x01') {
      iVar6 = CUser::get_state(param_1);
      iVar14 = CUser::get_state(local_40);
      if (iVar6 == iVar14) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
        uVar15 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_44);
        iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,iVar6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
        CUser::Send(local_40,local_60);
        CUser::SetReceivedRequestType(local_40,local_45);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      local_28 = 0x13;
    }
    if (local_40 == (CUser *)0x0) {
      local_28 = 3;
    }
    else {
      cVar3 = CUser::CheckInTrade(local_40);
      if (cVar3 != '\0') {
        local_28 = 0x12;
      }
    }
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_28 & 0xff);
    break;
  case '\x02':
    local_20 = CUser::GetPVPRoom(param_1);
    if (local_20 == 0) {
      uVar7 = LineFunc(0x7494,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbe);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,(uint)local_47);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x03':
    local_1c = (WarRoom *)CUser::GetWarRoom(param_1);
    if (local_1c == (WarRoom *)0x0) {
      uVar7 = LineFunc(0x74bf,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = WarRoom::GetState(local_1c);
    if (iVar6 == 2) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,(uint)local_47);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x04':
    local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x37);
    if (local_18 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_18 & 0xff);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_acc_id(param_1);
    cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar15);
    if (cVar3 == '\x01') {
LAB_081eff73:
      bVar1 = false;
    }
    else {
      uVar15 = CUser::get_acc_id(local_40);
      cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar15);
      if (cVar3 == '\0') goto LAB_081eff73;
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar12 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    cVar3 = pvp_assault::CAssaultMgr::OnRequestAssault(pCVar12,param_1,local_40,(int *)0x0);
    if (cVar3 != '\x01') {
      uVar7 = 0x7590;
      goto LAB_081f026e;
    }
    break;
  case '\x05':
  case '\a':
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,8);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x21);
    if (local_14 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_14 & 0xff,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)local_40);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x17,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    expert_job::CExpertJobMgr::OnRequestPeer
              (GlobalData::s_ExpertJobMgr,param_1,local_40,(int)local_45,local_60);
    break;
  case '\x06':
  case '\b':
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,8);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_10 = CSecu_ProtectionField::CheckOpposite
                         (GlobalData::s_pSecuProtectionField,param_1,0x20,local_40);
    if (local_10 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_10 & 0xff,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x17,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    expert_job::CExpertJobMgr::OnRequestPeer
              (GlobalData::s_ExpertJobMgr,param_1,local_40,(int)local_45,local_60);
  }
  CUser::SetReceivedRequestType(local_40,local_45);
  uVar7 = 0;
LAB_081f026e:
  PacketGuard::~PacketGuard(local_60);
  return uVar7;
}
```
