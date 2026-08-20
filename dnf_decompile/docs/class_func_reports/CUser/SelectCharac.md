# SelectCharac

`_ZN5CUser12SelectCharacEii`

`CUser::SelectCharac(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864cd92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864cd92  _ZN5CUser12SelectCharacEii
#           CUser::SelectCharac(int, int)
# range [0x0864cd92, 0x0864d15f]
0864cd92 +0x000:  push   %ebp
0864cd93 +0x001:  mov    %esp,%ebp
0864cd95 +0x003:  push   %edi
0864cd96 +0x004:  push   %esi
0864cd97 +0x005:  push   %ebx
0864cd98 +0x006:  sub    $0x9c,%esp
0864cd9e +0x00c:  mov    0x8(%ebp),%eax
0864cda1 +0x00f:  mov    %eax,(%esp)
0864cda4 +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864cda9 +0x017:  test   %eax,%eax
0864cdab +0x019:  setne  %al
0864cdae +0x01c:  test   %al,%al
0864cdb0 +0x01e:  je     0864cdf2 <+0x60>
0864cdb2 +0x020:  movl   $0x5,0xc(%esp)
0864cdba +0x028:  movl   $0x11fb,0x8(%esp)
0864cdc2 +0x030:  movl   $&_ZZN5CUser12SelectCharacEiiE19__PRETTY_FUNCTION__,0x4(%esp)
0864cdca +0x038:  lea    -0x64(%ebp),%eax
0864cdcd +0x03b:  mov    %eax,(%esp)
0864cdd0 +0x03e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864cdd5 +0x043:  movl   $"CUser::SelectCharac m_selected is not null",0x4(%esp)
0864cddd +0x04b:  lea    -0x64(%ebp),%eax
0864cde0 +0x04e:  mov    %eax,(%esp)
0864cde3 +0x051:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864cde8 +0x056:  mov    $0x0,%eax
0864cded +0x05b:  jmp    0864d154 <+0x3c2>
0864cdf2 +0x060:  cmpl   $0x0,0xc(%ebp)
0864cdf6 +0x064:  js     0864ce14 <+0x82>
0864cdf8 +0x066:  mov    0x8(%ebp),%eax
0864cdfb +0x069:  add    $0x796e8,%eax
0864ce00 +0x06e:  mov    %eax,(%esp)
0864ce03 +0x071:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864ce08 +0x076:  cmp    0xc(%ebp),%eax
0864ce0b +0x079:  jle    0864ce14 <+0x82>
0864ce0d +0x07b:  mov    $0x1,%eax
0864ce12 +0x080:  jmp    0864ce19 <+0x87>
0864ce14 +0x082:  mov    $0x0,%eax
0864ce19 +0x087:  test   %al,%al
0864ce1b +0x089:  je     0864d112 <+0x380>
0864ce21 +0x08f:  mov    0xc(%ebp),%eax
0864ce24 +0x092:  mov    0x8(%ebp),%edx
0864ce27 +0x095:  add    $0x796e8,%edx
0864ce2d +0x09b:  mov    %eax,0x4(%esp)
0864ce31 +0x09f:  mov    %edx,(%esp)
0864ce34 +0x0a2:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ce39 +0x0a7:  mov    0x8(%ebp),%edx
0864ce3c +0x0aa:  mov    %eax,0x4(%esp)
0864ce40 +0x0ae:  mov    %edx,(%esp)
0864ce43 +0x0b1:  call   0864e25c <_ZN15CUserCharacInfo12setCurCharacEP12_Charac_info>  ; CUserCharacInfo::setCurCharac(_Charac_info*)
0864ce48 +0x0b6:  cmpl   $0x0,0x10(%ebp)
0864ce4c +0x0ba:  js     0864ce6a <+0xd8>
0864ce4e +0x0bc:  mov    0x8(%ebp),%eax
0864ce51 +0x0bf:  add    $0x796e8,%eax
0864ce56 +0x0c4:  mov    %eax,(%esp)
0864ce59 +0x0c7:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864ce5e +0x0cc:  cmp    0x10(%ebp),%eax
0864ce61 +0x0cf:  jle    0864ce6a <+0xd8>
0864ce63 +0x0d1:  mov    $0x1,%eax
0864ce68 +0x0d6:  jmp    0864ce6f <+0xdd>
0864ce6a +0x0d8:  mov    $0x0,%eax
0864ce6f +0x0dd:  test   %al,%al
0864ce71 +0x0df:  je     0864cece <+0x13c>
0864ce73 +0x0e1:  mov    0x10(%ebp),%eax
0864ce76 +0x0e4:  mov    0x8(%ebp),%edx
0864ce79 +0x0e7:  add    $0x796e8,%edx
0864ce7f +0x0ed:  mov    %eax,0x4(%esp)
0864ce83 +0x0f1:  mov    %edx,(%esp)
0864ce86 +0x0f4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ce8b +0x0f9:  mov    0x8(%ebp),%edx
0864ce8e +0x0fc:  mov    %eax,0x4(%esp)
0864ce92 +0x100:  mov    %edx,(%esp)
0864ce95 +0x103:  call   0864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>  ; CUserCharacInfo::setTagCharac(_Charac_info*)
0864ce9a +0x108:  mov    0x8(%ebp),%eax
0864ce9d +0x10b:  mov    %eax,(%esp)
0864cea0 +0x10e:  call   0822f110 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ba
0864cea5 +0x113:  mov    0x8(%ebp),%edx
0864cea8 +0x116:  mov    %edx,0x4(%esp)
0864ceac +0x11a:  mov    %eax,(%esp)
0864ceaf +0x11d:  call   0822d6c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d70>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d70
0864ceb4 +0x122:  mov    0x8(%ebp),%eax
0864ceb7 +0x125:  mov    %eax,(%esp)
0864ceba +0x128:  call   0822f120 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ca
0864cebf +0x12d:  mov    0x8(%ebp),%edx
0864cec2 +0x130:  mov    %edx,0x4(%esp)
0864cec6 +0x134:  mov    %eax,(%esp)
0864cec9 +0x137:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0864cece +0x13c:  mov    0x8(%ebp),%eax
0864ced1 +0x13f:  mov    %eax,(%esp)
0864ced4 +0x142:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864ced9 +0x147:  test   %eax,%eax
0864cedb +0x149:  sete   %al
0864cede +0x14c:  test   %al,%al
0864cee0 +0x14e:  je     0864cf29 <+0x197>
0864cee2 +0x150:  movl   $0x5,0xc(%esp)
0864ceea +0x158:  movl   $0x120c,0x8(%esp)
0864cef2 +0x160:  movl   $&_ZZN5CUser12SelectCharacEiiE19__PRETTY_FUNCTION__,0x4(%esp)
0864cefa +0x168:  lea    -0x54(%ebp),%eax
0864cefd +0x16b:  mov    %eax,(%esp)
0864cf00 +0x16e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864cf05 +0x173:  mov    0xc(%ebp),%eax
0864cf08 +0x176:  mov    %eax,0x8(%esp)
0864cf0c +0x17a:  movl   $"CUser::SelectCharac m_selected is null at %d",0x4(%esp)
0864cf14 +0x182:  lea    -0x54(%ebp),%eax
0864cf17 +0x185:  mov    %eax,(%esp)
0864cf1a +0x188:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864cf1f +0x18d:  mov    $0x0,%eax
0864cf24 +0x192:  jmp    0864d154 <+0x3c2>
0864cf29 +0x197:  mov    0x8(%ebp),%eax
0864cf2c +0x19a:  mov    %eax,(%esp)
0864cf2f +0x19d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864cf34 +0x1a2:  movzbl 0x75(%eax),%eax
0864cf38 +0x1a6:  cmp    $0x63,%al
0864cf3a +0x1a8:  setbe  %al
0864cf3d +0x1ab:  test   %al,%al
0864cf3f +0x1ad:  je     0864d02c <+0x29a>
0864cf45 +0x1b3:  movl   $0x258,-0x68(%ebp)
0864cf4c +0x1ba:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0864cf53 +0x1c1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864cf58 +0x1c6:  mov    %eax,-0x28(%ebp)
0864cf5b +0x1c9:  mov    0x8(%ebp),%eax
0864cf5e +0x1cc:  mov    %eax,(%esp)
0864cf61 +0x1cf:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
0864cf66 +0x1d4:  mov    %eax,-0x24(%ebp)
0864cf69 +0x1d7:  mov    -0x24(%ebp),%eax
0864cf6c +0x1da:  mov    %eax,0x4(%esp)
0864cf70 +0x1de:  mov    -0x28(%ebp),%eax
0864cf73 +0x1e1:  mov    %eax,(%esp)
0864cf76 +0x1e4:  call   0807e5b0 <_init+0xea8>
0864cf7b +0x1e9:  fstpl  -0x20(%ebp)
0864cf7e +0x1ec:  fldl   -0x20(%ebp)
0864cf81 +0x1ef:  fnstcw -0x7a(%ebp)
0864cf84 +0x1f2:  movzwl -0x7a(%ebp),%eax
0864cf88 +0x1f6:  mov    $0xc,%ah
0864cf8a +0x1f8:  mov    %ax,-0x7c(%ebp)
0864cf8e +0x1fc:  fldcw  -0x7c(%ebp)
0864cf91 +0x1ff:  fistpl -0x80(%ebp)
0864cf94 +0x202:  fldcw  -0x7a(%ebp)
0864cf97 +0x205:  mov    -0x80(%ebp),%eax
0864cf9a +0x208:  mov    %eax,-0x6c(%ebp)
0864cf9d +0x20b:  lea    -0x6c(%ebp),%eax
0864cfa0 +0x20e:  mov    %eax,0x4(%esp)
0864cfa4 +0x212:  lea    -0x68(%ebp),%eax
0864cfa7 +0x215:  mov    %eax,(%esp)
0864cfaa +0x218:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0864cfaf +0x21d:  movl   $0x0,-0x44(%ebp)
0864cfb6 +0x224:  mov    %eax,0x4(%esp)
0864cfba +0x228:  lea    -0x44(%ebp),%eax
0864cfbd +0x22b:  mov    %eax,(%esp)
0864cfc0 +0x22e:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0864cfc5 +0x233:  mov    (%eax),%eax
0864cfc7 +0x235:  mov    %eax,-0x6c(%ebp)
0864cfca +0x238:  mov    0x8(%ebp),%eax
0864cfcd +0x23b:  mov    %eax,(%esp)
0864cfd0 +0x23e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864cfd5 +0x243:  movzbl 0x75(%eax),%eax
0864cfd9 +0x247:  movzbl %al,%ebx
0864cfdc +0x24a:  mov    -0x6c(%ebp),%eax
0864cfdf +0x24d:  imul   $0x64,%eax,%ecx
0864cfe2 +0x250:  mov    $0x1b4e81b5,%edx
0864cfe7 +0x255:  mov    %ecx,%eax
0864cfe9 +0x257:  imul   %edx
0864cfeb +0x259:  sar    $0x6,%edx
0864cfee +0x25c:  mov    %ecx,%eax
0864cff0 +0x25e:  sar    $0x1f,%eax
0864cff3 +0x261:  mov    %edx,%ecx
0864cff5 +0x263:  sub    %eax,%ecx
0864cff7 +0x265:  mov    %ecx,%eax
0864cff9 +0x267:  lea    (%ebx,%eax,1),%eax
0864cffc +0x26a:  mov    %eax,-0x40(%ebp)
0864cfff +0x26d:  movl   $0x64,-0x3c(%ebp)
0864d006 +0x274:  lea    -0x40(%ebp),%eax
0864d009 +0x277:  mov    %eax,0x4(%esp)
0864d00d +0x27b:  lea    -0x3c(%ebp),%eax
0864d010 +0x27e:  mov    %eax,(%esp)
0864d013 +0x281:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0864d018 +0x286:  mov    (%eax),%eax
0864d01a +0x288:  movzbl %al,%edx
0864d01d +0x28b:  mov    0x8(%ebp),%eax
0864d020 +0x28e:  mov    %edx,0x4(%esp)
0864d024 +0x292:  mov    %eax,(%esp)
0864d027 +0x295:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
0864d02c +0x29a:  mov    0x8(%ebp),%eax
0864d02f +0x29d:  mov    %eax,(%esp)
0864d032 +0x2a0:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0864d037 +0x2a5:  movsbl %al,%edi
0864d03a +0x2a8:  mov    0x8(%ebp),%eax
0864d03d +0x2ab:  mov    %eax,(%esp)
0864d040 +0x2ae:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0864d045 +0x2b3:  mov    %eax,%esi
0864d047 +0x2b5:  mov    0x8(%ebp),%eax
0864d04a +0x2b8:  mov    %eax,(%esp)
0864d04d +0x2bb:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0864d052 +0x2c0:  mov    %eax,%ebx
0864d054 +0x2c2:  mov    0x8(%ebp),%eax
0864d057 +0x2c5:  mov    %eax,(%esp)
0864d05a +0x2c8:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0864d05f +0x2cd:  mov    0x8(%ebp),%edx
0864d062 +0x2d0:  mov    0x796f8(%edx),%edx
0864d068 +0x2d6:  mov    %edi,0x10(%esp)
0864d06c +0x2da:  mov    %esi,0xc(%esp)
0864d070 +0x2de:  mov    %ebx,0x8(%esp)
0864d074 +0x2e2:  mov    %eax,0x4(%esp)
0864d078 +0x2e6:  mov    %edx,(%esp)
0864d07b +0x2e9:  call   084b9db6 <_ZN10HistoryLog13WriteSelectChEP8_IO_FILEPKciii>  ; HistoryLog::WriteSelectCh(_IO_FILE*, char const*, int, int, int)
0864d080 +0x2ee:  mov    0x8(%ebp),%eax
0864d083 +0x2f1:  mov    %eax,(%esp)
0864d086 +0x2f4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d08b +0x2f9:  mov    0x8(%ebp),%edx
0864d08e +0x2fc:  mov    %edx,0x4(%esp)
0864d092 +0x300:  mov    %eax,(%esp)
0864d095 +0x303:  call   0822d6c6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d70>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d70
0864d09a +0x308:  mov    0x8(%ebp),%eax
0864d09d +0x30b:  mov    %eax,(%esp)
0864d0a0 +0x30e:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0864d0a5 +0x313:  mov    0x8(%ebp),%edx
0864d0a8 +0x316:  mov    %edx,0x4(%esp)
0864d0ac +0x31a:  mov    %eax,(%esp)
0864d0af +0x31d:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0864d0b4 +0x322:  mov    0x8(%ebp),%eax
0864d0b7 +0x325:  mov    %eax,(%esp)
0864d0ba +0x328:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0864d0bf +0x32d:  mov    0x8(%ebp),%edx
0864d0c2 +0x330:  mov    %edx,0x4(%esp)
0864d0c6 +0x334:  mov    %eax,(%esp)
0864d0c9 +0x337:  call   08694f06 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x175b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x175b
0864d0ce +0x33c:  mov    0x8(%ebp),%eax
0864d0d1 +0x33f:  mov    %eax,(%esp)
0864d0d4 +0x342:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0864d0d9 +0x347:  mov    0x8(%ebp),%edx
0864d0dc +0x34a:  mov    %edx,0x4(%esp)
0864d0e0 +0x34e:  mov    %eax,(%esp)
0864d0e3 +0x351:  call   086949fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1253>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1253
0864d0e8 +0x356:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0864d0ed +0x35b:  mov    %eax,%ebx
0864d0ef +0x35d:  mov    0x8(%ebp),%eax
0864d0f2 +0x360:  mov    %eax,(%esp)
0864d0f5 +0x363:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0864d0fa +0x368:  lea    0x58(%eax),%edx
0864d0fd +0x36b:  mov    0x4(%ebx,%edx,4),%edx
0864d101 +0x36f:  add    $0x1,%edx
0864d104 +0x372:  add    $0x58,%eax
0864d107 +0x375:  mov    %edx,0x4(%ebx,%eax,4)
0864d10b +0x379:  mov    $0x1,%eax
0864d110 +0x37e:  jmp    0864d154 <+0x3c2>
0864d112 +0x380:  movl   $0x5,0xc(%esp)
0864d11a +0x388:  movl   $0x1246,0x8(%esp)
0864d122 +0x390:  movl   $&_ZZN5CUser12SelectCharacEiiE19__PRETTY_FUNCTION__,0x4(%esp)
0864d12a +0x398:  lea    -0x38(%ebp),%eax
0864d12d +0x39b:  mov    %eax,(%esp)
0864d130 +0x39e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864d135 +0x3a3:  mov    0xc(%ebp),%eax
0864d138 +0x3a6:  mov    %eax,0x8(%esp)
0864d13c +0x3aa:  movl   $"CUser::SelectCharac :charac_index : %d",0x4(%esp)
0864d144 +0x3b2:  lea    -0x38(%ebp),%eax
0864d147 +0x3b5:  mov    %eax,(%esp)
0864d14a +0x3b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864d14f +0x3bd:  mov    $0x0,%eax
0864d154 +0x3c2:  add    $0x9c,%esp
0864d15a +0x3c8:  pop    %ebx
0864d15b +0x3c9:  pop    %esi
0864d15c +0x3ca:  pop    %edi
0864d15d +0x3cb:  pop    %ebp
0864d15e +0x3cc:  ret
0864d15f +0x3cd:  nop
```

## 反编译 C

```c
// CUser::SelectCharac @ 0x864cd92

/* CUser::SelectCharac(int, int) */

undefined4 __thiscall CUser::SelectCharac(CUser *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Charac_info *p_Var4;
  CInventory *pCVar5;
  SkillSlot *pSVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  UserQuest *this_00;
  CCargo *this_01;
  int local_70 [2];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  int local_44 [2];
  cMyTrace local_3c [16];
  time_t local_2c;
  time_t local_28;
  double local_24;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 != 0) {
    cMyTrace::cMyTrace(local_68,"bool CUser::SelectCharac(int, int)",0x11fb,5);
    cMyTrace::operator()(local_68,"CUser::SelectCharac m_selected is not null");
    return 0;
  }
  if ((param_1 < 0) ||
     (iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
     iVar3 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    p_Var4 = (_Charac_info *)
             std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                       ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                        param_1);
    CUserCharacInfo::setCurCharac((CUserCharacInfo *)this,p_Var4);
    if ((param_2 < 0) ||
       (iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
       iVar3 <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      p_Var4 = (_Charac_info *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_2);
      CUserCharacInfo::setTagCharac((CUserCharacInfo *)this,p_Var4);
      pCVar5 = (CInventory *)CUserCharacInfo::getTagCharacInvenR((CUserCharacInfo *)this);
      CInventory::set_parent(pCVar5,this);
      pSVar6 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillR((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar6,this);
    }
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_58,"bool CUser::SelectCharac(int, int)",0x120c,5);
      cMyTrace::operator()(local_58,"CUser::SelectCharac m_selected is null at %d",param_1);
      uVar7 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (*(byte *)(iVar3 + 0x75) < 100) {
        local_70[1] = 600;
        local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_28 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)this);
        local_24 = difftime(local_2c,local_28);
        local_70[0] = (int)ROUND(local_24);
        piVar8 = std::min<int>(local_70 + 1,local_70);
        local_48 = 0;
        piVar8 = std::max<int>(&local_48,piVar8);
        local_70[0] = *piVar8;
        iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
        local_44[0] = (uint)*(byte *)(iVar3 + 0x75) + (local_70[0] * 100) / 600;
        local_44[1] = 100;
        piVar8 = std::min<int>(local_44 + 1,local_44);
        CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,(uchar)*piVar8);
      }
      cVar2 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      pcVar10 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
      HistoryLog::WriteSelectCh(*(_IO_FILE **)(this + 0x796f8),pcVar10,iVar9,iVar3,(int)cVar2);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      CInventory::set_parent(pCVar5,this);
      pSVar6 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar6,this);
      this_00 = (UserQuest *)getCurCharacQuestR(this);
      UserQuest::set_parent(this_00,this);
      this_01 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      CCargo::set_parent(this_01,this);
      iVar3 = G_GameWorld();
      iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      *(int *)(iVar3 + 4 + (iVar9 + 0x58) * 4) = *(int *)(iVar3 + 4 + (iVar9 + 0x58) * 4) + 1;
      uVar7 = 1;
    }
    return uVar7;
  }
  cMyTrace::cMyTrace(local_3c,"bool CUser::SelectCharac(int, int)",0x1246,5);
  cMyTrace::operator()(local_3c,"CUser::SelectCharac :charac_index : %d",param_1);
  return 0;
}
```
