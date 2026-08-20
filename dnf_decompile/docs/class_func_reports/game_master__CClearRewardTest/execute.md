# execute

`_ZN11game_master16CClearRewardTest7executeEv`

`game_master::CClearRewardTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CClearRewardTest` | `0x084b2a08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b2a08  _ZN11game_master16CClearRewardTest7executeEv
#           game_master::CClearRewardTest::execute()
# range [0x084b2a08, 0x084b3397]
084b2a08 +0x000:  push   %ebp
084b2a09 +0x001:  mov    %esp,%ebp
084b2a0b +0x003:  push   %edi
084b2a0c +0x004:  push   %esi
084b2a0d +0x005:  push   %ebx
084b2a0e +0x006:  sub    $0x57c,%esp
084b2a14 +0x00c:  mov    0x8(%ebp),%eax
084b2a17 +0x00f:  mov    %eax,(%esp)
084b2a1a +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b2a1f +0x017:  mov    %eax,-0x40(%ebp)
084b2a22 +0x01a:  cmpl   $0x0,-0x40(%ebp)
084b2a26 +0x01e:  je     084b337f <+0x977>
084b2a2c +0x024:  mov    -0x40(%ebp),%eax
084b2a2f +0x027:  mov    %eax,(%esp)
084b2a32 +0x02a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084b2a37 +0x02f:  test   %eax,%eax
084b2a39 +0x031:  sete   %al
084b2a3c +0x034:  test   %al,%al
084b2a3e +0x036:  jne    084b3382 <+0x97a>
084b2a44 +0x03c:  mov    -0x40(%ebp),%eax
084b2a47 +0x03f:  mov    %eax,(%esp)
084b2a4a +0x042:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084b2a4f +0x047:  cmp    $0x5,%eax
084b2a52 +0x04a:  setne  %al
084b2a55 +0x04d:  test   %al,%al
084b2a57 +0x04f:  jne    084b3385 <+0x97d>
084b2a5d +0x055:  mov    -0x40(%ebp),%eax
084b2a60 +0x058:  mov    %eax,(%esp)
084b2a63 +0x05b:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084b2a68 +0x060:  mov    %eax,-0x3c(%ebp)
084b2a6b +0x063:  cmpl   $0x0,-0x3c(%ebp)
084b2a6f +0x067:  je     084b3388 <+0x980>
084b2a75 +0x06d:  mov    -0x3c(%ebp),%eax
084b2a78 +0x070:  mov    0xcac(%eax),%eax
084b2a7e +0x076:  test   %eax,%eax
084b2a80 +0x078:  je     084b338b <+0x983>
084b2a86 +0x07e:  mov    -0x3c(%ebp),%eax
084b2a89 +0x081:  mov    0xcac(%eax),%eax
084b2a8f +0x087:  mov    %eax,-0x38(%ebp)
084b2a92 +0x08a:  mov    -0x3c(%ebp),%eax
084b2a95 +0x08d:  add    $0xb24,%eax
084b2a9a +0x092:  mov    %eax,(%esp)
084b2a9d +0x095:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
084b2aa2 +0x09a:  mov    %al,-0x31(%ebp)
084b2aa5 +0x09d:  movl   $0x0,-0x30(%ebp)
084b2aac +0x0a4:  mov    -0x38(%ebp),%eax
084b2aaf +0x0a7:  mov    %eax,(%esp)
084b2ab2 +0x0aa:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
084b2ab7 +0x0af:  test   %al,%al
084b2ab9 +0x0b1:  setg   %al
084b2abc +0x0b4:  test   %al,%al
084b2abe +0x0b6:  je     084b2ad0 <+0xc8>
084b2ac0 +0x0b8:  mov    -0x3c(%ebp),%eax
084b2ac3 +0x0bb:  mov    %eax,(%esp)
084b2ac6 +0x0be:  call   0859f6d4 <_ZN6CParty25getStandardDimensionLevelEv>  ; CParty::getStandardDimensionLevel()
084b2acb +0x0c3:  mov    %eax,-0x30(%ebp)
084b2ace +0x0c6:  jmp    084b2ade <+0xd6>
084b2ad0 +0x0c8:  mov    -0x38(%ebp),%eax
084b2ad3 +0x0cb:  mov    %eax,(%esp)
084b2ad6 +0x0ce:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
084b2adb +0x0d3:  mov    %eax,-0x30(%ebp)
084b2ade +0x0d6:  lea    -0x15c(%ebp),%eax
084b2ae4 +0x0dc:  mov    %eax,(%esp)
084b2ae7 +0x0df:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
084b2aec +0x0e4:  movzbl -0x31(%ebp),%eax
084b2af0 +0x0e8:  mov    %al,-0x127(%ebp)
084b2af6 +0x0ee:  mov    -0x30(%ebp),%eax
084b2af9 +0x0f1:  mov    %al,-0x128(%ebp)
084b2aff +0x0f7:  mov    -0x38(%ebp),%eax
084b2b02 +0x0fa:  mov    %eax,-0x11c(%ebp)
084b2b08 +0x100:  mov    $0x3f800000,%eax
084b2b0d +0x105:  mov    %eax,-0x124(%ebp)
084b2b13 +0x10b:  movl   $0x0,-0x120(%ebp)
084b2b1d +0x115:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b2b22 +0x11a:  mov    %eax,(%esp)
084b2b25 +0x11d:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
084b2b2a +0x122:  movl   $0x2,0x4(%esp)
084b2b32 +0x12a:  mov    %eax,(%esp)
084b2b35 +0x12d:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
084b2b3a +0x132:  mov    %eax,-0x2c(%ebp)
084b2b3d +0x135:  lea    -0x114(%ebp),%eax
084b2b43 +0x13b:  mov    %eax,(%esp)
084b2b46 +0x13e:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
084b2b4b +0x143:  movl   $0x0,-0x28(%ebp)
084b2b52 +0x14a:  jmp    084b2b7e <+0x176>
084b2b54 +0x14c:  mov    -0x2c(%ebp),%eax
084b2b57 +0x14f:  mov    (%eax),%eax
084b2b59 +0x151:  add    $0x8,%eax
084b2b5c +0x154:  mov    (%eax),%edx
084b2b5e +0x156:  lea    -0x114(%ebp),%eax
084b2b64 +0x15c:  mov    %eax,0x8(%esp)
084b2b68 +0x160:  lea    -0x15c(%ebp),%eax
084b2b6e +0x166:  mov    %eax,0x4(%esp)
084b2b72 +0x16a:  mov    -0x2c(%ebp),%eax
084b2b75 +0x16d:  mov    %eax,(%esp)
084b2b78 +0x170:  call   *%edx
084b2b7a +0x172:  addl   $0x1,-0x28(%ebp)
084b2b7e +0x176:  cmpl   $&_ZL14gUnicodeBuffer+0xe173,-0x28(%ebp)
084b2b85 +0x17d:  setle  %al
084b2b88 +0x180:  test   %al,%al
084b2b8a +0x182:  jne    084b2b54 <+0x14c>
084b2b8c +0x184:  lea    -0xc8(%ebp),%eax
084b2b92 +0x18a:  mov    %eax,(%esp)
084b2b95 +0x18d:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084b2b9a +0x192:  lea    -0xc8(%ebp),%eax
084b2ba0 +0x198:  mov    %eax,(%esp)
084b2ba3 +0x19b:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
084b2ba8 +0x1a0:  lea    -0xd0(%ebp),%eax
084b2bae +0x1a6:  lea    -0x114(%ebp),%edx
084b2bb4 +0x1ac:  mov    %edx,0x4(%esp)
084b2bb8 +0x1b0:  mov    %eax,(%esp)
084b2bbb +0x1b3:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084b2bc0 +0x1b8:  sub    $0x4,%esp
084b2bc3 +0x1bb:  jmp    084b2cee <+0x2e6>
084b2bc8 +0x1c0:  lea    -0xd0(%ebp),%eax
084b2bce +0x1c6:  mov    %eax,(%esp)
084b2bd1 +0x1c9:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
084b2bd6 +0x1ce:  mov    0x2(%eax),%eax
084b2bd9 +0x1d1:  mov    %eax,-0xac(%ebp)
084b2bdf +0x1d7:  lea    -0xd4(%ebp),%eax
084b2be5 +0x1dd:  lea    -0xac(%ebp),%edx
084b2beb +0x1e3:  mov    %edx,0x8(%esp)
084b2bef +0x1e7:  lea    -0xc8(%ebp),%edx
084b2bf5 +0x1ed:  mov    %edx,0x4(%esp)
084b2bf9 +0x1f1:  mov    %eax,(%esp)
084b2bfc +0x1f4:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084b2c01 +0x1f9:  sub    $0x4,%esp
084b2c04 +0x1fc:  lea    -0xa8(%ebp),%eax
084b2c0a +0x202:  lea    -0xc8(%ebp),%edx
084b2c10 +0x208:  mov    %edx,0x4(%esp)
084b2c14 +0x20c:  mov    %eax,(%esp)
084b2c17 +0x20f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084b2c1c +0x214:  sub    $0x4,%esp
084b2c1f +0x217:  lea    -0xa8(%ebp),%eax
084b2c25 +0x21d:  mov    %eax,0x4(%esp)
084b2c29 +0x221:  lea    -0xd4(%ebp),%eax
084b2c2f +0x227:  mov    %eax,(%esp)
084b2c32 +0x22a:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
084b2c37 +0x22f:  test   %al,%al
084b2c39 +0x231:  je     084b2cb4 <+0x2ac>
084b2c3b +0x233:  movl   $0x1,-0x8c(%ebp)
084b2c45 +0x23d:  lea    -0xd0(%ebp),%eax
084b2c4b +0x243:  mov    %eax,(%esp)
084b2c4e +0x246:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
084b2c53 +0x24b:  lea    0x2(%eax),%ecx
084b2c56 +0x24e:  lea    -0x94(%ebp),%eax
084b2c5c +0x254:  lea    -0x8c(%ebp),%edx
084b2c62 +0x25a:  mov    %edx,0x8(%esp)
084b2c66 +0x25e:  mov    %ecx,0x4(%esp)
084b2c6a +0x262:  mov    %eax,(%esp)
084b2c6d +0x265:  call   084b4c1d <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xcd0>  ; global constructors keyed to game_master::CMacro::Reset()+0xcd0
084b2c72 +0x26a:  sub    $0x4,%esp
084b2c75 +0x26d:  lea    -0x94(%ebp),%eax
084b2c7b +0x273:  mov    %eax,0x4(%esp)
084b2c7f +0x277:  lea    -0x9c(%ebp),%eax
084b2c85 +0x27d:  mov    %eax,(%esp)
084b2c88 +0x280:  call   084b4c60 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xd13>  ; global constructors keyed to game_master::CMacro::Reset()+0xd13
084b2c8d +0x285:  lea    -0xa4(%ebp),%eax
084b2c93 +0x28b:  lea    -0x9c(%ebp),%edx
084b2c99 +0x291:  mov    %edx,0x8(%esp)
084b2c9d +0x295:  lea    -0xc8(%ebp),%edx
084b2ca3 +0x29b:  mov    %edx,0x4(%esp)
084b2ca7 +0x29f:  mov    %eax,(%esp)
084b2caa +0x2a2:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084b2caf +0x2a7:  sub    $0x4,%esp
084b2cb2 +0x2aa:  jmp    084b2ccb <+0x2c3>
084b2cb4 +0x2ac:  lea    -0xd4(%ebp),%eax
084b2cba +0x2b2:  mov    %eax,(%esp)
084b2cbd +0x2b5:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b2cc2 +0x2ba:  mov    0x4(%eax),%edx
084b2cc5 +0x2bd:  add    $0x1,%edx
084b2cc8 +0x2c0:  mov    %edx,0x4(%eax)
084b2ccb +0x2c3:  lea    -0x88(%ebp),%eax
084b2cd1 +0x2c9:  movl   $0x0,0x8(%esp)
084b2cd9 +0x2d1:  lea    -0xd0(%ebp),%edx
084b2cdf +0x2d7:  mov    %edx,0x4(%esp)
084b2ce3 +0x2db:  mov    %eax,(%esp)
084b2ce6 +0x2de:  call   08450846 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x345c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x345c
084b2ceb +0x2e3:  sub    $0x4,%esp
084b2cee +0x2e6:  lea    -0xb0(%ebp),%eax
084b2cf4 +0x2ec:  lea    -0x114(%ebp),%edx
084b2cfa +0x2f2:  mov    %edx,0x4(%esp)
084b2cfe +0x2f6:  mov    %eax,(%esp)
084b2d01 +0x2f9:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
084b2d06 +0x2fe:  sub    $0x4,%esp
084b2d09 +0x301:  lea    -0xb0(%ebp),%eax
084b2d0f +0x307:  mov    %eax,0x4(%esp)
084b2d13 +0x30b:  lea    -0xd0(%ebp),%eax
084b2d19 +0x311:  mov    %eax,(%esp)
084b2d1c +0x314:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
084b2d21 +0x319:  test   %al,%al
084b2d23 +0x31b:  jne    084b2bc8 <+0x1c0>
084b2d29 +0x321:  lea    -0xcc(%ebp),%eax
084b2d2f +0x327:  mov    %eax,(%esp)
084b2d32 +0x32a:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084b2d37 +0x32f:  lea    -0xd8(%ebp),%eax
084b2d3d +0x335:  lea    -0xc8(%ebp),%edx
084b2d43 +0x33b:  mov    %edx,0x4(%esp)
084b2d47 +0x33f:  mov    %eax,(%esp)
084b2d4a +0x342:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084b2d4f +0x347:  sub    $0x4,%esp
084b2d52 +0x34a:  jmp    084b2eb3 <+0x4ab>
084b2d57 +0x34f:  lea    -0x55c(%ebp),%ebx
084b2d5d +0x355:  mov    $0x0,%eax
084b2d62 +0x35a:  mov    $0x100,%edx
084b2d67 +0x35f:  mov    %ebx,%edi
084b2d69 +0x361:  mov    %edx,%ecx
084b2d6b +0x363:  rep stos %eax,%es:(%edi)
084b2d6d +0x365:  lea    -0x80(%ebp),%eax
084b2d70 +0x368:  lea    -0xc8(%ebp),%edx
084b2d76 +0x36e:  mov    %edx,0x4(%esp)
084b2d7a +0x372:  mov    %eax,(%esp)
084b2d7d +0x375:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084b2d82 +0x37a:  sub    $0x4,%esp
084b2d85 +0x37d:  lea    -0x80(%ebp),%eax
084b2d88 +0x380:  mov    %eax,0x4(%esp)
084b2d8c +0x384:  lea    -0xd8(%ebp),%eax
084b2d92 +0x38a:  mov    %eax,(%esp)
084b2d95 +0x38d:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
084b2d9a +0x392:  test   %al,%al
084b2d9c +0x394:  je     084b2df2 <+0x3ea>
084b2d9e +0x396:  movl   $0x3f,0x8(%esp)
084b2da6 +0x39e:  movl   $"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",0x4(%esp)
084b2dae +0x3a6:  lea    -0x55c(%ebp),%eax
084b2db4 +0x3ac:  mov    %eax,(%esp)
084b2db7 +0x3af:  call   0807d8a0 <_init+0x198>
084b2dbc +0x3b4:  lea    -0x55c(%ebp),%eax
084b2dc2 +0x3ba:  mov    %eax,0x4(%esp)
084b2dc6 +0x3be:  lea    -0xcc(%ebp),%eax
084b2dcc +0x3c4:  mov    %eax,(%esp)
084b2dcf +0x3c7:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084b2dd4 +0x3cc:  movl   $0x400,0x8(%esp)
084b2ddc +0x3d4:  movl   $0x0,0x4(%esp)
084b2de4 +0x3dc:  lea    -0x55c(%ebp),%eax
084b2dea +0x3e2:  mov    %eax,(%esp)
084b2ded +0x3e5:  call   0807dcc0 <_init+0x5b8>
084b2df2 +0x3ea:  lea    -0xd8(%ebp),%eax
084b2df8 +0x3f0:  mov    %eax,(%esp)
084b2dfb +0x3f3:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b2e00 +0x3f8:  mov    (%eax),%ebx
084b2e02 +0x3fa:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b2e07 +0x3ff:  mov    %ebx,0x4(%esp)
084b2e0b +0x403:  mov    %eax,(%esp)
084b2e0e +0x406:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b2e13 +0x40b:  mov    %eax,-0x24(%ebp)
084b2e16 +0x40e:  cmpl   $0x0,-0x24(%ebp)
084b2e1a +0x412:  je     084b2e92 <+0x48a>
084b2e1c +0x414:  lea    -0xd8(%ebp),%eax
084b2e22 +0x41a:  mov    %eax,(%esp)
084b2e25 +0x41d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b2e2a +0x422:  mov    0x4(%eax),%edi
084b2e2d +0x425:  mov    -0x24(%ebp),%eax
084b2e30 +0x428:  mov    %eax,(%esp)
084b2e33 +0x42b:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084b2e38 +0x430:  mov    %eax,%esi
084b2e3a +0x432:  mov    -0x24(%ebp),%eax
084b2e3d +0x435:  mov    %eax,(%esp)
084b2e40 +0x438:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084b2e45 +0x43d:  mov    %eax,%ebx
084b2e47 +0x43f:  mov    -0x24(%ebp),%eax
084b2e4a +0x442:  mov    %eax,(%esp)
084b2e4d +0x445:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084b2e52 +0x44a:  mov    %edi,0x14(%esp)
084b2e56 +0x44e:  mov    %esi,0x10(%esp)
084b2e5a +0x452:  mov    %ebx,0xc(%esp)
084b2e5e +0x456:  mov    %eax,0x8(%esp)
084b2e62 +0x45a:  movl   $"%14d\t\t%30s\t\t%6d\t\t%5d\n",0x4(%esp)
084b2e6a +0x462:  lea    -0x55c(%ebp),%eax
084b2e70 +0x468:  mov    %eax,(%esp)
084b2e73 +0x46b:  call   0807e440 <_init+0xd38>
084b2e78 +0x470:  lea    -0x55c(%ebp),%eax
084b2e7e +0x476:  mov    %eax,0x4(%esp)
084b2e82 +0x47a:  lea    -0xcc(%ebp),%eax
084b2e88 +0x480:  mov    %eax,(%esp)
084b2e8b +0x483:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084b2e90 +0x488:  jmp    084b2e93 <+0x48b>
084b2e92 +0x48a:  nop
084b2e93 +0x48b:  lea    -0x7c(%ebp),%eax
084b2e96 +0x48e:  movl   $0x0,0x8(%esp)
084b2e9e +0x496:  lea    -0xd8(%ebp),%edx
084b2ea4 +0x49c:  mov    %edx,0x4(%esp)
084b2ea8 +0x4a0:  mov    %eax,(%esp)
084b2eab +0x4a3:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
084b2eb0 +0x4a8:  sub    $0x4,%esp
084b2eb3 +0x4ab:  lea    -0x84(%ebp),%eax
084b2eb9 +0x4b1:  lea    -0xc8(%ebp),%edx
084b2ebf +0x4b7:  mov    %edx,0x4(%esp)
084b2ec3 +0x4bb:  mov    %eax,(%esp)
084b2ec6 +0x4be:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084b2ecb +0x4c3:  sub    $0x4,%esp
084b2ece +0x4c6:  lea    -0x84(%ebp),%eax
084b2ed4 +0x4cc:  mov    %eax,0x4(%esp)
084b2ed8 +0x4d0:  lea    -0xd8(%ebp),%eax
084b2ede +0x4d6:  mov    %eax,(%esp)
084b2ee1 +0x4d9:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084b2ee6 +0x4de:  test   %al,%al
084b2ee8 +0x4e0:  jne    084b2d57 <+0x34f>
084b2eee +0x4e6:  lea    -0xcc(%ebp),%eax
084b2ef4 +0x4ec:  mov    %eax,(%esp)
084b2ef7 +0x4ef:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b2efc +0x4f4:  mov    %eax,%ebx
084b2efe +0x4f6:  mov    0x8(%ebp),%eax
084b2f01 +0x4f9:  mov    %eax,(%esp)
084b2f04 +0x4fc:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b2f09 +0x501:  mov    %ebx,0xc(%esp)
084b2f0d +0x505:  movl   $"cltr_normal.txt",0x8(%esp)
084b2f15 +0x50d:  mov    %eax,0x4(%esp)
084b2f19 +0x511:  mov    0x8(%ebp),%eax
084b2f1c +0x514:  mov    %eax,(%esp)
084b2f1f +0x517:  call   084b3398 <_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_>  ; game_master::CClearRewardTest::printClient(CUser*, char const*, char const*)
084b2f24 +0x51c:  movl   $0x1,-0x120(%ebp)
084b2f2e +0x526:  lea    -0x114(%ebp),%eax
084b2f34 +0x52c:  mov    %eax,(%esp)
084b2f37 +0x52f:  call   08152ad0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2405>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2405
084b2f3c +0x534:  lea    -0xcc(%ebp),%eax
084b2f42 +0x53a:  mov    %eax,(%esp)
084b2f45 +0x53d:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
084b2f4a +0x542:  lea    -0xc8(%ebp),%eax
084b2f50 +0x548:  mov    %eax,(%esp)
084b2f53 +0x54b:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
084b2f58 +0x550:  movl   $0x0,-0x20(%ebp)
084b2f5f +0x557:  jmp    084b2f8b <+0x583>
084b2f61 +0x559:  mov    -0x2c(%ebp),%eax
084b2f64 +0x55c:  mov    (%eax),%eax
084b2f66 +0x55e:  add    $0x8,%eax
084b2f69 +0x561:  mov    (%eax),%edx
084b2f6b +0x563:  lea    -0x114(%ebp),%eax
084b2f71 +0x569:  mov    %eax,0x8(%esp)
084b2f75 +0x56d:  lea    -0x15c(%ebp),%eax
084b2f7b +0x573:  mov    %eax,0x4(%esp)
084b2f7f +0x577:  mov    -0x2c(%ebp),%eax
084b2f82 +0x57a:  mov    %eax,(%esp)
084b2f85 +0x57d:  call   *%edx
084b2f87 +0x57f:  addl   $0x1,-0x20(%ebp)
084b2f8b +0x583:  cmpl   $&_ZL14gUnicodeBuffer+0xe173,-0x20(%ebp)
084b2f92 +0x58a:  setle  %al
084b2f95 +0x58d:  test   %al,%al
084b2f97 +0x58f:  jne    084b2f61 <+0x559>
084b2f99 +0x591:  lea    -0xdc(%ebp),%eax
084b2f9f +0x597:  lea    -0x114(%ebp),%edx
084b2fa5 +0x59d:  mov    %edx,0x4(%esp)
084b2fa9 +0x5a1:  mov    %eax,(%esp)
084b2fac +0x5a4:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
084b2fb1 +0x5a9:  sub    $0x4,%esp
084b2fb4 +0x5ac:  jmp    084b30bb <+0x6b3>
084b2fb9 +0x5b1:  lea    -0xdc(%ebp),%eax
084b2fbf +0x5b7:  mov    %eax,(%esp)
084b2fc2 +0x5ba:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
084b2fc7 +0x5bf:  mov    0x2(%eax),%eax
084b2fca +0x5c2:  mov    %eax,-0x74(%ebp)
084b2fcd +0x5c5:  lea    -0xe0(%ebp),%eax
084b2fd3 +0x5cb:  lea    -0x74(%ebp),%edx
084b2fd6 +0x5ce:  mov    %edx,0x8(%esp)
084b2fda +0x5d2:  lea    -0xc8(%ebp),%edx
084b2fe0 +0x5d8:  mov    %edx,0x4(%esp)
084b2fe4 +0x5dc:  mov    %eax,(%esp)
084b2fe7 +0x5df:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
084b2fec +0x5e4:  sub    $0x4,%esp
084b2fef +0x5e7:  lea    -0x70(%ebp),%eax
084b2ff2 +0x5ea:  lea    -0xc8(%ebp),%edx
084b2ff8 +0x5f0:  mov    %edx,0x4(%esp)
084b2ffc +0x5f4:  mov    %eax,(%esp)
084b2fff +0x5f7:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084b3004 +0x5fc:  sub    $0x4,%esp
084b3007 +0x5ff:  lea    -0x70(%ebp),%eax
084b300a +0x602:  mov    %eax,0x4(%esp)
084b300e +0x606:  lea    -0xe0(%ebp),%eax
084b3014 +0x60c:  mov    %eax,(%esp)
084b3017 +0x60f:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
084b301c +0x614:  test   %al,%al
084b301e +0x616:  je     084b3084 <+0x67c>
084b3020 +0x618:  movl   $0x1,-0x54(%ebp)
084b3027 +0x61f:  lea    -0xdc(%ebp),%eax
084b302d +0x625:  mov    %eax,(%esp)
084b3030 +0x628:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
084b3035 +0x62d:  lea    0x2(%eax),%ecx
084b3038 +0x630:  lea    -0x5c(%ebp),%eax
084b303b +0x633:  lea    -0x54(%ebp),%edx
084b303e +0x636:  mov    %edx,0x8(%esp)
084b3042 +0x63a:  mov    %ecx,0x4(%esp)
084b3046 +0x63e:  mov    %eax,(%esp)
084b3049 +0x641:  call   084b4c1d <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xcd0>  ; global constructors keyed to game_master::CMacro::Reset()+0xcd0
084b304e +0x646:  sub    $0x4,%esp
084b3051 +0x649:  lea    -0x5c(%ebp),%eax
084b3054 +0x64c:  mov    %eax,0x4(%esp)
084b3058 +0x650:  lea    -0x64(%ebp),%eax
084b305b +0x653:  mov    %eax,(%esp)
084b305e +0x656:  call   084b4c60 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xd13>  ; global constructors keyed to game_master::CMacro::Reset()+0xd13
084b3063 +0x65b:  lea    -0x6c(%ebp),%eax
084b3066 +0x65e:  lea    -0x64(%ebp),%edx
084b3069 +0x661:  mov    %edx,0x8(%esp)
084b306d +0x665:  lea    -0xc8(%ebp),%edx
084b3073 +0x66b:  mov    %edx,0x4(%esp)
084b3077 +0x66f:  mov    %eax,(%esp)
084b307a +0x672:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
084b307f +0x677:  sub    $0x4,%esp
084b3082 +0x67a:  jmp    084b309b <+0x693>
084b3084 +0x67c:  lea    -0xe0(%ebp),%eax
084b308a +0x682:  mov    %eax,(%esp)
084b308d +0x685:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b3092 +0x68a:  mov    0x4(%eax),%edx
084b3095 +0x68d:  add    $0x1,%edx
084b3098 +0x690:  mov    %edx,0x4(%eax)
084b309b +0x693:  lea    -0x50(%ebp),%eax
084b309e +0x696:  movl   $0x0,0x8(%esp)
084b30a6 +0x69e:  lea    -0xdc(%ebp),%edx
084b30ac +0x6a4:  mov    %edx,0x4(%esp)
084b30b0 +0x6a8:  mov    %eax,(%esp)
084b30b3 +0x6ab:  call   08450846 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x345c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x345c
084b30b8 +0x6b0:  sub    $0x4,%esp
084b30bb +0x6b3:  lea    -0x78(%ebp),%eax
084b30be +0x6b6:  lea    -0x114(%ebp),%edx
084b30c4 +0x6bc:  mov    %edx,0x4(%esp)
084b30c8 +0x6c0:  mov    %eax,(%esp)
084b30cb +0x6c3:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
084b30d0 +0x6c8:  sub    $0x4,%esp
084b30d3 +0x6cb:  lea    -0x78(%ebp),%eax
084b30d6 +0x6ce:  mov    %eax,0x4(%esp)
084b30da +0x6d2:  lea    -0xdc(%ebp),%eax
084b30e0 +0x6d8:  mov    %eax,(%esp)
084b30e3 +0x6db:  call   08152910 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2245>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2245
084b30e8 +0x6e0:  test   %al,%al
084b30ea +0x6e2:  jne    084b2fb9 <+0x5b1>
084b30f0 +0x6e8:  lea    -0xe4(%ebp),%eax
084b30f6 +0x6ee:  lea    -0xc8(%ebp),%edx
084b30fc +0x6f4:  mov    %edx,0x4(%esp)
084b3100 +0x6f8:  mov    %eax,(%esp)
084b3103 +0x6fb:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084b3108 +0x700:  sub    $0x4,%esp
084b310b +0x703:  jmp    084b326c <+0x864>
084b3110 +0x708:  lea    -0x55c(%ebp),%ebx
084b3116 +0x70e:  mov    $0x0,%eax
084b311b +0x713:  mov    $0x100,%edx
084b3120 +0x718:  mov    %ebx,%edi
084b3122 +0x71a:  mov    %edx,%ecx
084b3124 +0x71c:  rep stos %eax,%es:(%edi)
084b3126 +0x71e:  lea    -0x48(%ebp),%eax
084b3129 +0x721:  lea    -0xc8(%ebp),%edx
084b312f +0x727:  mov    %edx,0x4(%esp)
084b3133 +0x72b:  mov    %eax,(%esp)
084b3136 +0x72e:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
084b313b +0x733:  sub    $0x4,%esp
084b313e +0x736:  lea    -0x48(%ebp),%eax
084b3141 +0x739:  mov    %eax,0x4(%esp)
084b3145 +0x73d:  lea    -0xe4(%ebp),%eax
084b314b +0x743:  mov    %eax,(%esp)
084b314e +0x746:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
084b3153 +0x74b:  test   %al,%al
084b3155 +0x74d:  je     084b31ab <+0x7a3>
084b3157 +0x74f:  movl   $0x3f,0x8(%esp)
084b315f +0x757:  movl   $"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",0x4(%esp)
084b3167 +0x75f:  lea    -0x55c(%ebp),%eax
084b316d +0x765:  mov    %eax,(%esp)
084b3170 +0x768:  call   0807d8a0 <_init+0x198>
084b3175 +0x76d:  lea    -0x55c(%ebp),%eax
084b317b +0x773:  mov    %eax,0x4(%esp)
084b317f +0x777:  lea    -0xcc(%ebp),%eax
084b3185 +0x77d:  mov    %eax,(%esp)
084b3188 +0x780:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084b318d +0x785:  movl   $0x400,0x8(%esp)
084b3195 +0x78d:  movl   $0x0,0x4(%esp)
084b319d +0x795:  lea    -0x55c(%ebp),%eax
084b31a3 +0x79b:  mov    %eax,(%esp)
084b31a6 +0x79e:  call   0807dcc0 <_init+0x5b8>
084b31ab +0x7a3:  lea    -0xe4(%ebp),%eax
084b31b1 +0x7a9:  mov    %eax,(%esp)
084b31b4 +0x7ac:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b31b9 +0x7b1:  mov    (%eax),%ebx
084b31bb +0x7b3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b31c0 +0x7b8:  mov    %ebx,0x4(%esp)
084b31c4 +0x7bc:  mov    %eax,(%esp)
084b31c7 +0x7bf:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b31cc +0x7c4:  mov    %eax,-0x1c(%ebp)
084b31cf +0x7c7:  cmpl   $0x0,-0x1c(%ebp)
084b31d3 +0x7cb:  je     084b324b <+0x843>
084b31d5 +0x7cd:  lea    -0xe4(%ebp),%eax
084b31db +0x7d3:  mov    %eax,(%esp)
084b31de +0x7d6:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
084b31e3 +0x7db:  mov    0x4(%eax),%edi
084b31e6 +0x7de:  mov    -0x1c(%ebp),%eax
084b31e9 +0x7e1:  mov    %eax,(%esp)
084b31ec +0x7e4:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
084b31f1 +0x7e9:  mov    %eax,%esi
084b31f3 +0x7eb:  mov    -0x1c(%ebp),%eax
084b31f6 +0x7ee:  mov    %eax,(%esp)
084b31f9 +0x7f1:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084b31fe +0x7f6:  mov    %eax,%ebx
084b3200 +0x7f8:  mov    -0x1c(%ebp),%eax
084b3203 +0x7fb:  mov    %eax,(%esp)
084b3206 +0x7fe:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084b320b +0x803:  mov    %edi,0x14(%esp)
084b320f +0x807:  mov    %esi,0x10(%esp)
084b3213 +0x80b:  mov    %ebx,0xc(%esp)
084b3217 +0x80f:  mov    %eax,0x8(%esp)
084b321b +0x813:  movl   $"%14d\t\t%30s\t\t%6d\t\t%5d\n",0x4(%esp)
084b3223 +0x81b:  lea    -0x55c(%ebp),%eax
084b3229 +0x821:  mov    %eax,(%esp)
084b322c +0x824:  call   0807e440 <_init+0xd38>
084b3231 +0x829:  lea    -0x55c(%ebp),%eax
084b3237 +0x82f:  mov    %eax,0x4(%esp)
084b323b +0x833:  lea    -0xcc(%ebp),%eax
084b3241 +0x839:  mov    %eax,(%esp)
084b3244 +0x83c:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084b3249 +0x841:  jmp    084b324c <+0x844>
084b324b +0x843:  nop
084b324c +0x844:  lea    -0x44(%ebp),%eax
084b324f +0x847:  movl   $0x0,0x8(%esp)
084b3257 +0x84f:  lea    -0xe4(%ebp),%edx
084b325d +0x855:  mov    %edx,0x4(%esp)
084b3261 +0x859:  mov    %eax,(%esp)
084b3264 +0x85c:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
084b3269 +0x861:  sub    $0x4,%esp
084b326c +0x864:  lea    -0x4c(%ebp),%eax
084b326f +0x867:  lea    -0xc8(%ebp),%edx
084b3275 +0x86d:  mov    %edx,0x4(%esp)
084b3279 +0x871:  mov    %eax,(%esp)
084b327c +0x874:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
084b3281 +0x879:  sub    $0x4,%esp
084b3284 +0x87c:  lea    -0x4c(%ebp),%eax
084b3287 +0x87f:  mov    %eax,0x4(%esp)
084b328b +0x883:  lea    -0xe4(%ebp),%eax
084b3291 +0x889:  mov    %eax,(%esp)
084b3294 +0x88c:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
084b3299 +0x891:  test   %al,%al
084b329b +0x893:  jne    084b3110 <+0x708>
084b32a1 +0x899:  lea    -0xcc(%ebp),%eax
084b32a7 +0x89f:  mov    %eax,(%esp)
084b32aa +0x8a2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b32af +0x8a7:  mov    %eax,%ebx
084b32b1 +0x8a9:  mov    0x8(%ebp),%eax
084b32b4 +0x8ac:  mov    %eax,(%esp)
084b32b7 +0x8af:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b32bc +0x8b4:  mov    %ebx,0xc(%esp)
084b32c0 +0x8b8:  movl   $"cltr_gold.txt",0x8(%esp)
084b32c8 +0x8c0:  mov    %eax,0x4(%esp)
084b32cc +0x8c4:  mov    0x8(%ebp),%eax
084b32cf +0x8c7:  mov    %eax,(%esp)
084b32d2 +0x8ca:  call   084b3398 <_ZN11game_master16CClearRewardTest11printClientEP5CUserPKcS4_>  ; game_master::CClearRewardTest::printClient(CUser*, char const*, char const*)
084b32d7 +0x8cf:  jmp    084b32f1 <+0x8e9>
084b32d9 +0x8d1:  mov    %edx,%ebx
084b32db +0x8d3:  mov    %eax,%esi
084b32dd +0x8d5:  lea    -0xcc(%ebp),%eax
084b32e3 +0x8db:  mov    %eax,(%esp)
084b32e6 +0x8de:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b32eb +0x8e3:  mov    %esi,%eax
084b32ed +0x8e5:  mov    %ebx,%edx
084b32ef +0x8e7:  jmp    084b3301 <+0x8f9>
084b32f1 +0x8e9:  lea    -0xcc(%ebp),%eax
084b32f7 +0x8ef:  mov    %eax,(%esp)
084b32fa +0x8f2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b32ff +0x8f7:  jmp    084b3319 <+0x911>
084b3301 +0x8f9:  mov    %edx,%ebx
084b3303 +0x8fb:  mov    %eax,%esi
084b3305 +0x8fd:  lea    -0xc8(%ebp),%eax
084b330b +0x903:  mov    %eax,(%esp)
084b330e +0x906:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084b3313 +0x90b:  mov    %esi,%eax
084b3315 +0x90d:  mov    %ebx,%edx
084b3317 +0x90f:  jmp    084b3329 <+0x921>
084b3319 +0x911:  lea    -0xc8(%ebp),%eax
084b331f +0x917:  mov    %eax,(%esp)
084b3322 +0x91a:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084b3327 +0x91f:  jmp    084b3341 <+0x939>
084b3329 +0x921:  mov    %edx,%ebx
084b332b +0x923:  mov    %eax,%esi
084b332d +0x925:  lea    -0x114(%ebp),%eax
084b3333 +0x92b:  mov    %eax,(%esp)
084b3336 +0x92e:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084b333b +0x933:  mov    %esi,%eax
084b333d +0x935:  mov    %ebx,%edx
084b333f +0x937:  jmp    084b3351 <+0x949>
084b3341 +0x939:  lea    -0x114(%ebp),%eax
084b3347 +0x93f:  mov    %eax,(%esp)
084b334a +0x942:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
084b334f +0x947:  jmp    084b336f <+0x967>
084b3351 +0x949:  mov    %edx,%ebx
084b3353 +0x94b:  mov    %eax,%esi
084b3355 +0x94d:  lea    -0x15c(%ebp),%eax
084b335b +0x953:  mov    %eax,(%esp)
084b335e +0x956:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084b3363 +0x95b:  mov    %esi,%eax
084b3365 +0x95d:  mov    %ebx,%edx
084b3367 +0x95f:  mov    %eax,(%esp)
084b336a +0x962:  call   08ae3750 <_Unwind_Resume>
084b336f +0x967:  lea    -0x15c(%ebp),%eax
084b3375 +0x96d:  mov    %eax,(%esp)
084b3378 +0x970:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
084b337d +0x975:  jmp    084b338c <+0x984>
084b337f +0x977:  nop
084b3380 +0x978:  jmp    084b338c <+0x984>
084b3382 +0x97a:  nop
084b3383 +0x97b:  jmp    084b338c <+0x984>
084b3385 +0x97d:  nop
084b3386 +0x97e:  jmp    084b338c <+0x984>
084b3388 +0x980:  nop
084b3389 +0x981:  jmp    084b338c <+0x984>
084b338b +0x983:  nop
084b338c +0x984:  lea    -0xc(%ebp),%esp
084b338f +0x987:  add    $0x0,%esp
084b3392 +0x98a:  pop    %ebx
084b3393 +0x98b:  pop    %esi
084b3394 +0x98c:  pop    %edi
084b3395 +0x98d:  pop    %ebp
084b3396 +0x98e:  ret
084b3397 +0x98f:  nop
```

## 反编译 C

```c
// game_master::CClearRewardTest::execute @ 0x84b2a08

/* game_master::CClearRewardTest::execute() */

void __thiscall game_master::CClearRewardTest::execute(CClearRewardTest *this)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  CItemGeneratorMgr *pCVar6;
  char *pcVar7;
  CUser *pCVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char local_560 [1024];
  stGenerateRefData_t local_160 [52];
  undefined1 local_12c;
  undefined1 local_12b;
  undefined4 local_128;
  undefined4 local_124;
  CDungeon *local_120;
  stGenerateResult_t local_118 [48];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_e8 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_e4 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_e0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_dc [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_d8 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_d4 [4];
  string local_d0 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_cc [24];
  __normal_iterator local_b4 [4];
  undefined4 local_b0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_ac [4];
  pair local_a8 [8];
  pair<int_const,int> local_a0 [8];
  ulong local_98 [2];
  undefined4 local_90;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_8c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_88 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_84 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_80 [4];
  __normal_iterator local_7c [4];
  undefined4 local_78;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  pair local_70 [8];
  pair<int_const,int> local_68 [8];
  ulong local_60 [2];
  undefined4 local_58;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_54 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  CUser *local_44;
  CParty *local_40;
  CDungeon *local_3c;
  undefined1 local_35;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  CItem *local_20;
  
  bVar13 = 0;
  local_44 = (CUser *)CCommand::GetUser((CCommand *)this);
  if ((((local_44 != (CUser *)0x0) &&
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_44), iVar4 != 0)) &&
      (iVar4 = CUser::get_state(local_44), iVar4 == 5)) &&
     ((local_40 = (CParty *)CUser::GetParty(local_44), local_40 != (CParty *)0x0 &&
      (*(int *)(local_40 + 0xcac) != 0)))) {
    local_3c = *(CDungeon **)(local_40 + 0xcac);
    local_35 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(local_40 + 0xb24));
    local_34 = 0;
    cVar2 = CDungeon::get_dimension_possible(local_3c);
    if (cVar2 < '\x01') {
      local_34 = CDungeon::get_standard_level(local_3c);
    }
    else {
      local_34 = CParty::getStandardDimensionLevel(local_40);
    }
    WongWork::stGenerateRefData_t::stGenerateRefData_t(local_160);
    local_12b = local_35;
    local_12c = (undefined1)local_34;
    local_120 = local_3c;
    local_128 = 0x3f800000;
    local_124 = 0;
                    /* try { // try from 084b2b1d to 084b2b4a has its CatchHandler @ 084b3351 */
    pCVar5 = (CDataManager *)G_CDataManager();
    pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
    local_30 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar6,2);
    WongWork::stGenerateResult_t::stGenerateResult_t(local_118);
    for (local_2c = 0; local_2c < 100000; local_2c = local_2c + 1) {
                    /* try { // try from 084b2b78 to 084b2b99 has its CatchHandler @ 084b3329 */
      (**(code **)(*local_30 + 8))(local_30,local_160,local_118);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_cc);
                    /* try { // try from 084b2ba3 to 084b2d36 has its CatchHandler @ 084b3301 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_cc);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    while( true ) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      bVar3 = __gnu_cxx::operator!=(local_d4,local_b4);
      if (!bVar3) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator->(local_d4);
      local_b0 = *(undefined4 *)(iVar4 + 2);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_d8);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_ac);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_d8,(_Rb_tree_iterator *)local_ac);
      if (cVar2 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_d8);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      else {
        local_90 = 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_d4);
        std::make_pair<unsigned_long&,int>(local_98,(int *)(iVar4 + 2));
        std::pair<int_const,int>::pair<unsigned_long,int>(local_a0,(pair *)local_98);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_a8);
      }
      __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_8c,(int)local_d4);
    }
    std::string::string(local_d0);
                    /* try { // try from 084b2d4a to 084b32d6 has its CatchHandler @ 084b32d9 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_dc);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_88);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc,
                         (_Rb_tree_iterator *)local_88);
      if (cVar2 == '\0') break;
      pcVar7 = local_560;
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_84);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc,
                         (_Rb_tree_iterator *)local_84);
      if (cVar2 != '\0') {
        memcpy(local_560,"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",
               0x3f);
        std::string::operator+=(local_d0,local_560);
        memset(local_560,0,0x400);
      }
      piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
      iVar4 = *piVar9;
      pCVar5 = (CDataManager *)G_CDataManager();
      local_28 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
      if (local_28 != (CItem *)0x0) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_dc);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        uVar10 = CItem::get_rarity(local_28);
        uVar11 = CItem::GetItemName(local_28);
        uVar12 = CItem::get_index(local_28);
        sprintf(local_560,"%14d\t\t%30s\t\t%6d\t\t%5d\n",uVar12,uVar11,uVar10,uVar1);
        std::string::operator+=(local_d0,local_560);
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_80,(int)local_dc);
    }
    pcVar7 = (char *)std::string::c_str(local_d0);
    pCVar8 = (CUser *)CCommand::GetUser((CCommand *)this);
    printClient(this,pCVar8,"cltr_normal.txt",pcVar7);
    local_124 = 1;
    std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_118);
    std::string::clear(local_d0);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_cc);
    for (local_24 = 0; local_24 < 100000; local_24 = local_24 + 1) {
      (**(code **)(*local_30 + 8))(local_30,local_160,local_118);
    }
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    while( true ) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      bVar3 = __gnu_cxx::operator!=(local_e0,local_7c);
      if (!bVar3) break;
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
              operator->(local_e0);
      local_78 = *(undefined4 *)(iVar4 + 2);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_e4);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_74);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        (local_e4,(_Rb_tree_iterator *)local_74);
      if (cVar2 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_e4);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      else {
        local_58 = 1;
        iVar4 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_e0);
        std::make_pair<unsigned_long&,int>(local_60,(int *)(iVar4 + 2));
        std::pair<int_const,int>::pair<unsigned_long,int>(local_68,(pair *)local_60);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_70);
      }
      __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_54,(int)local_e0);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_e8);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_50);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8,
                         (_Rb_tree_iterator *)local_50);
      if (cVar2 == '\0') break;
      pcVar7 = local_560;
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar13 * -2 + 1) * 4;
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_4c);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8,
                         (_Rb_tree_iterator *)local_4c);
      if (cVar2 != '\0') {
        memcpy(local_560,"    Item Index\t\t                     Item Name\t\tRarity\t\tCount\n",
               0x3f);
        std::string::operator+=(local_d0,local_560);
        memset(local_560,0,0x400);
      }
      piVar9 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8);
      iVar4 = *piVar9;
      pCVar5 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
      if (local_20 != (CItem *)0x0) {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_e8);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        uVar10 = CItem::get_rarity(local_20);
        uVar11 = CItem::GetItemName(local_20);
        uVar12 = CItem::get_index(local_20);
        sprintf(local_560,"%14d\t\t%30s\t\t%6d\t\t%5d\n",uVar12,uVar11,uVar10,uVar1);
        std::string::operator+=(local_d0,local_560);
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_48,(int)local_e8);
    }
    pcVar7 = (char *)std::string::c_str(local_d0);
    pCVar8 = (CUser *)CCommand::GetUser((CCommand *)this);
    printClient(this,pCVar8,"cltr_gold.txt",pcVar7);
                    /* try { // try from 084b32fa to 084b32fe has its CatchHandler @ 084b3301 */
    std::string::~string(local_d0);
                    /* try { // try from 084b3322 to 084b3326 has its CatchHandler @ 084b3329 */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_cc);
                    /* try { // try from 084b334a to 084b334e has its CatchHandler @ 084b3351 */
    WongWork::stGenerateResult_t::~stGenerateResult_t(local_118);
    WongWork::stGenerateRefData_t::~stGenerateRefData_t(local_160);
  }
  return;
}
```
