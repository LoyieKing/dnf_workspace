# dispatch_sig

`_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette` | `0x08198a9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198a9a  _ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)
# range [0x08198a9a, 0x08198fcf]
08198a9a +0x000:  push   %ebp
08198a9b +0x001:  mov    %esp,%ebp
08198a9d +0x003:  push   %edi
08198a9e +0x004:  push   %esi
08198a9f +0x005:  push   %ebx
08198aa0 +0x006:  sub    $0x9c,%esp
08198aa6 +0x00c:  cmpl   $0x0,0xc(%ebp)
08198aaa +0x010:  jne    08198ab6 <+0x1c>
08198aac +0x012:  mov    $0x3c8,%ebx
08198ab1 +0x017:  jmp    08198fc2 <+0x528>
08198ab6 +0x01c:  mov    0x10(%ebp),%eax
08198ab9 +0x01f:  mov    %eax,-0x2c(%ebp)
08198abc +0x022:  cmpl   $0x0,-0x2c(%ebp)
08198ac0 +0x026:  jne    08198af8 <+0x5e>
08198ac2 +0x028:  movl   $"AVATAR ROULETTE INTER_DSP(SigAvatarRoulette) null.",0x10(%esp)
08198aca +0x030:  movl   $0x3cd,0xc(%esp)
08198ad2 +0x038:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08198ada +0x040:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08198ae2 +0x048:  movl   $0x1,(%esp)
08198ae9 +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08198aee +0x054:  mov    $0x3ce,%ebx
08198af3 +0x059:  jmp    08198fc2 <+0x528>
08198af8 +0x05e:  mov    0xc(%ebp),%eax
08198afb +0x061:  mov    %eax,(%esp)
08198afe +0x064:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08198b03 +0x069:  test   %eax,%eax
08198b05 +0x06b:  sete   %al
08198b08 +0x06e:  test   %al,%al
08198b0a +0x070:  je     08198b16 <+0x7c>
08198b0c +0x072:  mov    $0x3d4,%ebx
08198b11 +0x077:  jmp    08198fc2 <+0x528>
08198b16 +0x07c:  movl   $0x18,0x8(%esp)
08198b1e +0x084:  movl   $0x0,0x4(%esp)
08198b26 +0x08c:  lea    -0x44(%ebp),%eax
08198b29 +0x08f:  mov    %eax,(%esp)
08198b2c +0x092:  call   0807dcc0 <_init+0x5b8>
08198b31 +0x097:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08198b38 +0x09e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08198b3d +0x0a3:  mov    %eax,-0x48(%ebp)
08198b40 +0x0a6:  lea    -0x48(%ebp),%eax
08198b43 +0x0a9:  mov    %eax,(%esp)
08198b46 +0x0ac:  call   0807e330 <_init+0xc28>
08198b4b +0x0b1:  mov    %eax,-0x28(%ebp)
08198b4e +0x0b4:  mov    0xc(%ebp),%eax
08198b51 +0x0b7:  mov    %eax,(%esp)
08198b54 +0x0ba:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08198b59 +0x0bf:  mov    %eax,%esi
08198b5b +0x0c1:  mov    -0x28(%ebp),%eax
08198b5e +0x0c4:  mov    0xc(%eax),%edi
08198b61 +0x0c7:  mov    -0x28(%ebp),%eax
08198b64 +0x0ca:  mov    0x10(%eax),%eax
08198b67 +0x0cd:  add    $0x1,%eax
08198b6a +0x0d0:  mov    %eax,-0x70(%ebp)
08198b6d +0x0d3:  mov    -0x28(%ebp),%eax
08198b70 +0x0d6:  mov    0x14(%eax),%eax
08198b73 +0x0d9:  lea    0x76c(%eax),%ecx
08198b79 +0x0df:  mov    $0x10624dd3,%edx
08198b7e +0x0e4:  mov    %ecx,%eax
08198b80 +0x0e6:  imul   %edx
08198b82 +0x0e8:  sar    $0x7,%edx
08198b85 +0x0eb:  mov    %ecx,%eax
08198b87 +0x0ed:  sar    $0x1f,%eax
08198b8a +0x0f0:  mov    %edx,%ebx
08198b8c +0x0f2:  sub    %eax,%ebx
08198b8e +0x0f4:  imul   $0x7d0,%ebx,%eax
08198b94 +0x0fa:  mov    %ecx,%ebx
08198b96 +0x0fc:  sub    %eax,%ebx
08198b98 +0x0fe:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08198b9d +0x103:  mov    0x1b0(%eax),%eax
08198ba3 +0x109:  mov    %esi,0x1c(%esp)
08198ba7 +0x10d:  mov    %edi,0x18(%esp)
08198bab +0x111:  mov    -0x70(%ebp),%edx
08198bae +0x114:  mov    %edx,0x14(%esp)
08198bb2 +0x118:  mov    %ebx,0x10(%esp)
08198bb6 +0x11c:  mov    %eax,0xc(%esp)
08198bba +0x120:  movl   $"M%02d%02d%02d%02d%10d",0x8(%esp)
08198bc2 +0x128:  movl   $0x14,0x4(%esp)
08198bca +0x130:  lea    -0x44(%ebp),%eax
08198bcd +0x133:  mov    %eax,(%esp)
08198bd0 +0x136:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08198bd5 +0x13b:  lea    -0x54(%ebp),%eax
08198bd8 +0x13e:  mov    %eax,(%esp)
08198bdb +0x141:  call   0819a336 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x1c
08198be0 +0x146:  mov    -0x2c(%ebp),%eax
08198be3 +0x149:  movzbl 0x1(%eax),%eax
08198be7 +0x14d:  movzbl %al,%ecx
08198bea +0x150:  mov    -0x2c(%ebp),%eax
08198bed +0x153:  movzbl (%eax),%eax
08198bf0 +0x156:  movzbl %al,%edx
08198bf3 +0x159:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
08198bf8 +0x15e:  mov    %ecx,0xc(%esp)
08198bfc +0x162:  mov    %edx,0x8(%esp)
08198c00 +0x166:  lea    -0x54(%ebp),%edx
08198c03 +0x169:  mov    %edx,0x4(%esp)
08198c07 +0x16d:  mov    %eax,(%esp)
08198c0a +0x170:  call   0817fb28 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii>  ; AvatarRouletteServer::Pickup(AvatarRouletteServer::PickedAvatarInfo&, int, int)
08198c0f +0x175:  xor    $0x1,%eax
08198c12 +0x178:  test   %al,%al
08198c14 +0x17a:  je     08198c87 <+0x1ed>
08198c16 +0x17c:  mov    0xc(%ebp),%eax
08198c19 +0x17f:  mov    %eax,(%esp)
08198c1c +0x182:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08198c21 +0x187:  mov    %eax,%ebx
08198c23 +0x189:  mov    0xc(%ebp),%eax
08198c26 +0x18c:  mov    %eax,(%esp)
08198c29 +0x18f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08198c2e +0x194:  mov    %ebx,0x18(%esp)
08198c32 +0x198:  mov    %eax,0x14(%esp)
08198c36 +0x19c:  movl   $"[kAvatarRoulette] Avatar Roulette Pickup failed. (%u - %u)",0x10(%esp)
08198c3e +0x1a4:  movl   $0x3e7,0xc(%esp)
08198c46 +0x1ac:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08198c4e +0x1b4:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08198c56 +0x1bc:  movl   $0x1,(%esp)
08198c5d +0x1c3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08198c62 +0x1c8:  movl   $0x1,0x8(%esp)
08198c6a +0x1d0:  movl   $0x236,0x4(%esp)
08198c72 +0x1d8:  mov    0xc(%ebp),%eax
08198c75 +0x1db:  mov    %eax,(%esp)
08198c78 +0x1de:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08198c7d +0x1e3:  mov    $0x0,%ebx
08198c82 +0x1e8:  jmp    08198fc2 <+0x528>
08198c87 +0x1ed:  movb   $0xff,-0x21(%ebp)
08198c8b +0x1f1:  movzbl -0x49(%ebp),%eax
08198c8f +0x1f5:  cmp    $0x1,%al
08198c91 +0x1f7:  jle    08198c97 <+0x1fd>
08198c93 +0x1f9:  movb   $0x3,-0x21(%ebp)
08198c97 +0x1fd:  mov    0xc(%ebp),%eax
08198c9a +0x200:  mov    %eax,(%esp)
08198c9d +0x203:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
08198ca2 +0x208:  add    $0x658,%eax
08198ca7 +0x20d:  mov    %eax,(%esp)
08198caa +0x210:  call   0817ff44 <_ZNK10AvatarCoin8IsUsableEv>  ; AvatarCoin::IsUsable() const
08198caf +0x215:  xor    $0x1,%eax
08198cb2 +0x218:  test   %al,%al
08198cb4 +0x21a:  je     08198d27 <+0x28d>
08198cb6 +0x21c:  mov    0xc(%ebp),%eax
08198cb9 +0x21f:  mov    %eax,(%esp)
08198cbc +0x222:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08198cc1 +0x227:  mov    %eax,%ebx
08198cc3 +0x229:  mov    0xc(%ebp),%eax
08198cc6 +0x22c:  mov    %eax,(%esp)
08198cc9 +0x22f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08198cce +0x234:  mov    %ebx,0x18(%esp)
08198cd2 +0x238:  mov    %eax,0x14(%esp)
08198cd6 +0x23c:  movl   $"[kAvatarRoulette] need avatarCoin. (%u - %u)",0x10(%esp)
08198cde +0x244:  movl   $0x3f9,0xc(%esp)
08198ce6 +0x24c:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08198cee +0x254:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08198cf6 +0x25c:  movl   $0x1,(%esp)
08198cfd +0x263:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08198d02 +0x268:  movl   $0x16,0x8(%esp)
08198d0a +0x270:  movl   $0x24a,0x4(%esp)
08198d12 +0x278:  mov    0xc(%ebp),%eax
08198d15 +0x27b:  mov    %eax,(%esp)
08198d18 +0x27e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08198d1d +0x283:  mov    $0x0,%ebx
08198d22 +0x288:  jmp    08198fc2 <+0x528>
08198d27 +0x28d:  movl   $0x0,-0x20(%ebp)
08198d2e +0x294:  movzbl -0x4a(%ebp),%eax
08198d32 +0x298:  cmp    $0x3,%al
08198d34 +0x29a:  jne    08198d3d <+0x2a3>
08198d36 +0x29c:  movl   $0x0,-0x20(%ebp)
08198d3d +0x2a3:  movzbl -0x4b(%ebp),%eax
08198d41 +0x2a7:  cbtw
08198d43 +0x2a9:  movzwl %ax,%eax
08198d46 +0x2ac:  mov    %eax,-0x6c(%ebp)
08198d49 +0x2af:  movsbl -0x21(%ebp),%edi
08198d4d +0x2b3:  movzbl -0x4c(%ebp),%eax
08198d51 +0x2b7:  movsbl %al,%esi
08198d54 +0x2ba:  mov    -0x50(%ebp),%ebx
08198d57 +0x2bd:  mov    0xc(%ebp),%eax
08198d5a +0x2c0:  mov    %eax,(%esp)
08198d5d +0x2c3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08198d62 +0x2c8:  mov    -0x6c(%ebp),%edx
08198d65 +0x2cb:  mov    %edx,0x24(%esp)
08198d69 +0x2cf:  movl   $0x0,0x20(%esp)
08198d71 +0x2d7:  movl   $0x15,0x1c(%esp)
08198d79 +0x2df:  lea    -0x44(%ebp),%edx
08198d7c +0x2e2:  mov    %edx,0x18(%esp)
08198d80 +0x2e6:  mov    %edi,0x14(%esp)
08198d84 +0x2ea:  mov    %esi,0x10(%esp)
08198d88 +0x2ee:  movl   $0x0,0xc(%esp)
08198d90 +0x2f6:  mov    -0x20(%ebp),%edx
08198d93 +0x2f9:  mov    %edx,0x8(%esp)
08198d97 +0x2fd:  mov    %ebx,0x4(%esp)
08198d9b +0x301:  mov    %eax,(%esp)
08198d9e +0x304:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
08198da3 +0x309:  mov    %eax,-0x1c(%ebp)
08198da6 +0x30c:  cmpl   $0xffffffff,-0x1c(%ebp)
08198daa +0x310:  jne    08198e1d <+0x383>
08198dac +0x312:  mov    0xc(%ebp),%eax
08198daf +0x315:  mov    %eax,(%esp)
08198db2 +0x318:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08198db7 +0x31d:  mov    %eax,%ebx
08198db9 +0x31f:  mov    0xc(%ebp),%eax
08198dbc +0x322:  mov    %eax,(%esp)
08198dbf +0x325:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08198dc4 +0x32a:  mov    %ebx,0x18(%esp)
08198dc8 +0x32e:  mov    %eax,0x14(%esp)
08198dcc +0x332:  movl   $"[kAvatarRoulette] no space in inventory. (%u - %u)",0x10(%esp)
08198dd4 +0x33a:  movl   $0x407,0xc(%esp)
08198ddc +0x342:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08198de4 +0x34a:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08198dec +0x352:  movl   $0x1,(%esp)
08198df3 +0x359:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08198df8 +0x35e:  movl   $0x4,0x8(%esp)
08198e00 +0x366:  movl   $0x24a,0x4(%esp)
08198e08 +0x36e:  mov    0xc(%ebp),%eax
08198e0b +0x371:  mov    %eax,(%esp)
08198e0e +0x374:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08198e13 +0x379:  mov    $0x0,%ebx
08198e18 +0x37e:  jmp    08198fc2 <+0x528>
08198e1d +0x383:  mov    -0x1c(%ebp),%eax
08198e20 +0x386:  mov    %eax,0xc(%esp)
08198e24 +0x38a:  movl   $0x1,0x8(%esp)
08198e2c +0x392:  movl   $0x1,0x4(%esp)
08198e34 +0x39a:  mov    0xc(%ebp),%eax
08198e37 +0x39d:  mov    %eax,(%esp)
08198e3a +0x3a0:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08198e3f +0x3a5:  mov    0xc(%ebp),%eax
08198e42 +0x3a8:  mov    %eax,(%esp)
08198e45 +0x3ab:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
08198e4a +0x3b0:  add    $0x658,%eax
08198e4f +0x3b5:  mov    %eax,(%esp)
08198e52 +0x3b8:  call   0817ff14 <_ZN10AvatarCoin3UseEv>  ; AvatarCoin::Use()
08198e57 +0x3bd:  xor    $0x1,%eax
08198e5a +0x3c0:  test   %al,%al
08198e5c +0x3c2:  je     08198ecf <+0x435>
08198e5e +0x3c4:  mov    0xc(%ebp),%eax
08198e61 +0x3c7:  mov    %eax,(%esp)
08198e64 +0x3ca:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08198e69 +0x3cf:  mov    %eax,%ebx
08198e6b +0x3d1:  mov    0xc(%ebp),%eax
08198e6e +0x3d4:  mov    %eax,(%esp)
08198e71 +0x3d7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08198e76 +0x3dc:  mov    %ebx,0x18(%esp)
08198e7a +0x3e0:  mov    %eax,0x14(%esp)
08198e7e +0x3e4:  movl   $"[kAvatarRoulette] need avatarCoin. (%u - %u)",0x10(%esp)
08198e86 +0x3ec:  movl   $0x410,0xc(%esp)
08198e8e +0x3f4:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08198e96 +0x3fc:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
08198e9e +0x404:  movl   $0x1,(%esp)
08198ea5 +0x40b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08198eaa +0x410:  movl   $0x16,0x8(%esp)
08198eb2 +0x418:  movl   $0x24a,0x4(%esp)
08198eba +0x420:  mov    0xc(%ebp),%eax
08198ebd +0x423:  mov    %eax,(%esp)
08198ec0 +0x426:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08198ec5 +0x42b:  mov    $0x0,%ebx
08198eca +0x430:  jmp    08198fc2 <+0x528>
08198ecf +0x435:  movl   $0x1,0x4(%esp)
08198ed7 +0x43d:  mov    0xc(%ebp),%eax
08198eda +0x440:  mov    %eax,(%esp)
08198edd +0x443:  call   0817ff54 <_ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj>  ; AvatarCoin::HistoryLog::SubLog(CUser*, unsigned int)
08198ee2 +0x448:  mov    0xc(%ebp),%eax
08198ee5 +0x44b:  mov    %eax,(%esp)
08198ee8 +0x44e:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
08198eed +0x453:  lea    -0x60(%ebp),%eax
08198ef0 +0x456:  mov    %eax,(%esp)
08198ef3 +0x459:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08198ef8 +0x45e:  lea    -0x60(%ebp),%eax
08198efb +0x461:  mov    %eax,(%esp)
08198efe +0x464:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08198f03 +0x469:  movl   $0x24a,0x8(%esp)
08198f0b +0x471:  movl   $0x1,0x4(%esp)
08198f13 +0x479:  lea    -0x60(%ebp),%eax
08198f16 +0x47c:  mov    %eax,(%esp)
08198f19 +0x47f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08198f1e +0x484:  movl   $0x1,0x4(%esp)
08198f26 +0x48c:  lea    -0x60(%ebp),%eax
08198f29 +0x48f:  mov    %eax,(%esp)
08198f2c +0x492:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08198f31 +0x497:  mov    -0x1c(%ebp),%eax
08198f34 +0x49a:  cwtl
08198f35 +0x49b:  mov    %eax,0x4(%esp)
08198f39 +0x49f:  lea    -0x60(%ebp),%eax
08198f3c +0x4a2:  mov    %eax,(%esp)
08198f3f +0x4a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08198f44 +0x4aa:  movzbl -0x4c(%ebp),%eax
08198f48 +0x4ae:  movsbl %al,%eax
08198f4b +0x4b1:  mov    %eax,0x4(%esp)
08198f4f +0x4b5:  lea    -0x60(%ebp),%eax
08198f52 +0x4b8:  mov    %eax,(%esp)
08198f55 +0x4bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08198f5a +0x4c0:  movzbl -0x4b(%ebp),%eax
08198f5e +0x4c4:  movsbl %al,%eax
08198f61 +0x4c7:  mov    %eax,0x4(%esp)
08198f65 +0x4cb:  lea    -0x60(%ebp),%eax
08198f68 +0x4ce:  mov    %eax,(%esp)
08198f6b +0x4d1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08198f70 +0x4d6:  movl   $0x1,0x4(%esp)
08198f78 +0x4de:  lea    -0x60(%ebp),%eax
08198f7b +0x4e1:  mov    %eax,(%esp)
08198f7e +0x4e4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08198f83 +0x4e9:  lea    -0x60(%ebp),%eax
08198f86 +0x4ec:  mov    %eax,0x4(%esp)
08198f8a +0x4f0:  mov    0xc(%ebp),%eax
08198f8d +0x4f3:  mov    %eax,(%esp)
08198f90 +0x4f6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08198f95 +0x4fb:  mov    $0x0,%ebx
08198f9a +0x500:  lea    -0x60(%ebp),%eax
08198f9d +0x503:  mov    %eax,(%esp)
08198fa0 +0x506:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08198fa5 +0x50b:  jmp    08198fc2 <+0x528>
08198fa7 +0x50d:  mov    %edx,%ebx
08198fa9 +0x50f:  mov    %eax,%esi
08198fab +0x511:  lea    -0x60(%ebp),%eax
08198fae +0x514:  mov    %eax,(%esp)
08198fb1 +0x517:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08198fb6 +0x51c:  mov    %esi,%eax
08198fb8 +0x51e:  mov    %ebx,%edx
08198fba +0x520:  mov    %eax,(%esp)
08198fbd +0x523:  call   08ae3750 <_Unwind_Resume>
08198fc2 +0x528:  mov    %ebx,%eax
08198fc4 +0x52a:  add    $0x9c,%esp
08198fca +0x530:  pop    %ebx
08198fcb +0x531:  pop    %esi
08198fcc +0x532:  pop    %edi
08198fcd +0x533:  pop    %ebp
08198fce +0x534:  ret
08198fcf +0x535:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig @ 0x8198a9a

/* ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  int iVar9;
  PacketGuard local_64 [12];
  PickedAvatarInfo local_58 [4];
  undefined4 local_54;
  char local_50;
  char local_4f;
  char local_4d;
  time_t local_4c;
  char local_48 [24];
  byte *local_30;
  tm *local_2c;
  char local_25;
  undefined4 local_24;
  int local_20;
  
  if (param_2 == (char *)0x0) {
    uVar8 = 0x3c8;
  }
  else {
    local_30 = (byte *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                 ,0x3cd,"AVATAR ROULETTE INTER_DSP(SigAvatarRoulette) null.");
      uVar8 = 0x3ce;
    }
    else {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar4 == 0) {
        uVar8 = 0x3d4;
      }
      else {
        memset(local_48,0,0x18);
        local_4c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_2c = localtime(&local_4c);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        iVar4 = local_2c->tm_mday;
        iVar9 = local_2c->tm_mon;
        iVar1 = local_2c->tm_year;
        iVar5 = G_CEnvironment();
        OS_API::snprintf(local_48,0x14,"M%02d%02d%02d%02d%10d",*(undefined4 *)(iVar5 + 0x1b0),
                         (iVar1 + 0x76c) % 2000,iVar9 + 1,iVar4,uVar8);
        AvatarRouletteServer::PickedAvatarInfo::PickedAvatarInfo(local_58);
        cVar2 = AvatarRouletteServer::Pickup
                          (GlobalData::s_pAvatarRoulette,local_58,(uint)*local_30,(uint)local_30[1])
        ;
        if (cVar2 == '\x01') {
          local_25 = -1;
          if ('\x01' < local_4d) {
            local_25 = '\x03';
          }
          iVar4 = CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_2);
          cVar2 = AvatarCoin::IsUsable((AvatarCoin *)(iVar4 + 0x658));
          if (cVar2 == '\x01') {
            local_24 = 0;
            sVar3 = (short)local_4f;
            iVar9 = (int)local_25;
            iVar4 = (int)local_50;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            local_20 = CInventory::AddAvatarItem
                                 (pCVar7,local_54,local_24,0,iVar4,iVar9,local_48,0x15,0,sVar3);
            if (local_20 == -1) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
              uVar6 = CUser::get_acc_id((CUser *)param_2);
              LogManager::logFormat
                        (1,"localjapan/Arad_InterDispatcher.cpp",
                         "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                         ,0x407,"[kAvatarRoulette] no space in inventory. (%u - %u)",uVar6,uVar8);
              CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,4);
              uVar8 = 0;
            }
            else {
              CUser::SendUpdateItemList((CUser *)param_2,1,1,local_20);
              iVar4 = CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_2);
              cVar2 = AvatarCoin::Use((AvatarCoin *)(iVar4 + 0x658));
              if (cVar2 == '\x01') {
                AvatarCoin::HistoryLog::SubLog((CUser *)param_2,1);
                AvatarCoin::SendSyncPacket((CUser *)param_2);
                PacketGuard::PacketGuard(local_64);
                    /* try { // try from 08198efe to 08198f94 has its CatchHandler @ 08198fa7 */
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x24a);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(int)(short)local_20);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(int)local_50);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(int)local_4f);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                CUser::Send((CUser *)param_2,local_64);
                uVar8 = 0;
                PacketGuard::~PacketGuard(local_64);
              }
              else {
                uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                uVar6 = CUser::get_acc_id((CUser *)param_2);
                LogManager::logFormat
                          (1,"localjapan/Arad_InterDispatcher.cpp",
                           "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                           ,0x410,"[kAvatarRoulette] need avatarCoin. (%u - %u)",uVar6,uVar8);
                CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
                uVar8 = 0;
              }
            }
          }
          else {
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            LogManager::logFormat
                      (1,"localjapan/Arad_InterDispatcher.cpp",
                       "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                       ,0x3f9,"[kAvatarRoulette] need avatarCoin. (%u - %u)",uVar6,uVar8);
            CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
            uVar8 = 0;
          }
        }
        else {
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar6 = CUser::get_acc_id((CUser *)param_2);
          LogManager::logFormat
                    (1,"localjapan/Arad_InterDispatcher.cpp",
                     "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                     ,999,"[kAvatarRoulette] Avatar Roulette Pickup failed. (%u - %u)",uVar6,uVar8);
          CUser::SendCmdErrorPacket((CUser *)param_2,0x236,1);
          uVar8 = 0;
        }
      }
    }
  }
  return uVar8;
}
```
