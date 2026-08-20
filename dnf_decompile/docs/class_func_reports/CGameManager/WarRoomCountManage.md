# WarRoomCountManage

`_ZN12CGameManager18WarRoomCountManageEi`

`CGameManager::WarRoomCountManage(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a271a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a271a  _ZN12CGameManager18WarRoomCountManageEi
#           CGameManager::WarRoomCountManage(int)
# range [0x082a271a, 0x082a2c07]
082a271a +0x000:  push   %ebp
082a271b +0x001:  mov    %esp,%ebp
082a271d +0x003:  push   %edi
082a271e +0x004:  push   %esi
082a271f +0x005:  push   %ebx
082a2720 +0x006:  sub    $0xec,%esp
082a2726 +0x00c:  movl   $0x0,0xc(%esp)
082a272e +0x014:  movl   $0x306f,0x8(%esp)
082a2736 +0x01c:  movl   $&_ZZN12CGameManager18WarRoomCountManageEiE19__PRETTY_FUNCTION__,0x4(%esp)
082a273e +0x024:  lea    -0x94(%ebp),%eax
082a2744 +0x02a:  mov    %eax,(%esp)
082a2747 +0x02d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082a274c +0x032:  movl   $"WarRoomCountManage Start",0x4(%esp)
082a2754 +0x03a:  lea    -0x94(%ebp),%eax
082a275a +0x040:  mov    %eax,(%esp)
082a275d +0x043:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082a2762 +0x048:  lea    -0xcc(%ebp),%ebx
082a2768 +0x04e:  mov    $0x0,%eax
082a276d +0x053:  mov    $0xa,%edx
082a2772 +0x058:  mov    %ebx,%edi
082a2774 +0x05a:  mov    %edx,%ecx
082a2776 +0x05c:  rep stos %eax,%es:(%edi)
082a2778 +0x05e:  movl   $0x0,-0x54(%ebp)
082a277f +0x065:  movl   $0x0,-0x48(%ebp)
082a2786 +0x06c:  jmp    082a2844 <+0x12a>
082a278b +0x071:  movl   $0x0,-0x44(%ebp)
082a2792 +0x078:  jmp    082a2818 <+0xfe>
082a2797 +0x07d:  mov    -0x54(%ebp),%eax
082a279a +0x080:  addl   $0x1,-0x54(%ebp)
082a279e +0x084:  mov    %eax,0x4(%esp)
082a27a2 +0x088:  mov    0x8(%ebp),%eax
082a27a5 +0x08b:  mov    %eax,(%esp)
082a27a8 +0x08e:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a27ad +0x093:  mov    %eax,-0x40(%ebp)
082a27b0 +0x096:  cmpl   $0x0,-0x40(%ebp)
082a27b4 +0x09a:  jne    082a27eb <+0xd1>
082a27b6 +0x09c:  mov    -0x54(%ebp),%eax
082a27b9 +0x09f:  mov    %eax,0x14(%esp)
082a27bd +0x0a3:  movl   $"WarRoomCountManage Error : WarRoom does not exist %d",0x10(%esp)
082a27c5 +0x0ab:  movl   $0x307d,0xc(%esp)
082a27cd +0x0b3:  movl   $&_ZZN12CGameManager18WarRoomCountManageEiE19__PRETTY_FUNCTION__,0x8(%esp)
082a27d5 +0x0bb:  movl   $"App.cpp",0x4(%esp)
082a27dd +0x0c3:  movl   $0x1,(%esp)
082a27e4 +0x0ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082a27e9 +0x0cf:  jmp    082a2814 <+0xfa>
082a27eb +0x0d1:  mov    -0x40(%ebp),%eax
082a27ee +0x0d4:  mov    %eax,(%esp)
082a27f1 +0x0d7:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a27f6 +0x0dc:  cmp    $0xffffffff,%eax
082a27f9 +0x0df:  setne  %al
082a27fc +0x0e2:  test   %al,%al
082a27fe +0x0e4:  je     082a2814 <+0xfa>
082a2800 +0x0e6:  mov    -0x48(%ebp),%eax
082a2803 +0x0e9:  mov    -0xcc(%ebp,%eax,4),%edx
082a280a +0x0f0:  add    $0x1,%edx
082a280d +0x0f3:  mov    %edx,-0xcc(%ebp,%eax,4)
082a2814 +0x0fa:  addl   $0x1,-0x44(%ebp)
082a2818 +0x0fe:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a281d +0x103:  lea    0x87b4(%eax),%edx
082a2823 +0x109:  mov    -0x48(%ebp),%eax
082a2826 +0x10c:  mov    %eax,0x4(%esp)
082a282a +0x110:  mov    %edx,(%esp)
082a282d +0x113:  call   082a3d80 <_GLOBAL__I__ZN4CLog5this_E+0x1a7>  ; global constructors keyed to CLog::this_+0x1a7
082a2832 +0x118:  cmp    -0x44(%ebp),%eax
082a2835 +0x11b:  setg   %al
082a2838 +0x11e:  test   %al,%al
082a283a +0x120:  jne    082a2797 <+0x7d>
082a2840 +0x126:  addl   $0x1,-0x48(%ebp)
082a2844 +0x12a:  cmpl   $0x9,-0x48(%ebp)
082a2848 +0x12e:  setle  %al
082a284b +0x131:  test   %al,%al
082a284d +0x133:  jne    082a278b <+0x71>
082a2853 +0x139:  cmpl   $0xffffffff,0xc(%ebp)
082a2857 +0x13d:  jne    082a2870 <+0x156>
082a2859 +0x13f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a285e +0x144:  add    $0x87b4,%eax
082a2863 +0x149:  mov    %eax,(%esp)
082a2866 +0x14c:  call   089024c4 <_ZN14WarAreaCounter18GetCurrenTimeTableEv>  ; WarAreaCounter::GetCurrenTimeTable()
082a286b +0x151:  mov    %eax,-0x50(%ebp)
082a286e +0x154:  jmp    082a2876 <+0x15c>
082a2870 +0x156:  mov    0xc(%ebp),%eax
082a2873 +0x159:  mov    %eax,-0x50(%ebp)
082a2876 +0x15c:  movl   $0x0,0xc(%esp)
082a287e +0x164:  movl   $0x3088,0x8(%esp)
082a2886 +0x16c:  movl   $&_ZZN12CGameManager18WarRoomCountManageEiE19__PRETTY_FUNCTION__,0x4(%esp)
082a288e +0x174:  lea    -0x84(%ebp),%eax
082a2894 +0x17a:  mov    %eax,(%esp)
082a2897 +0x17d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082a289c +0x182:  mov    -0x50(%ebp),%eax
082a289f +0x185:  mov    %eax,0x8(%esp)
082a28a3 +0x189:  movl   $"WarRoomCountManage currentHourIndex %d",0x4(%esp)
082a28ab +0x191:  lea    -0x84(%ebp),%eax
082a28b1 +0x197:  mov    %eax,(%esp)
082a28b4 +0x19a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082a28b9 +0x19f:  lea    -0xa0(%ebp),%eax
082a28bf +0x1a5:  mov    %eax,(%esp)
082a28c2 +0x1a8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082a28c7 +0x1ad:  movl   $0x58,0x8(%esp)
082a28cf +0x1b5:  movl   $0x0,0x4(%esp)
082a28d7 +0x1bd:  lea    -0xa0(%ebp),%eax
082a28dd +0x1c3:  mov    %eax,(%esp)
082a28e0 +0x1c6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082a28e5 +0x1cb:  lea    -0xa0(%ebp),%eax
082a28eb +0x1d1:  mov    %eax,(%esp)
082a28ee +0x1d4:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082a28f3 +0x1d9:  mov    %eax,-0xa4(%ebp)
082a28f9 +0x1df:  movl   $0x0,0x4(%esp)
082a2901 +0x1e7:  lea    -0xa0(%ebp),%eax
082a2907 +0x1ed:  mov    %eax,(%esp)
082a290a +0x1f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082a290f +0x1f5:  movl   $0x0,-0x4c(%ebp)
082a2916 +0x1fc:  movl   $0x0,-0x3c(%ebp)
082a291d +0x203:  jmp    082a2b28 <+0x40e>
082a2922 +0x208:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2927 +0x20d:  mov    %eax,%ecx
082a2929 +0x20f:  mov    -0x50(%ebp),%edx
082a292c +0x212:  mov    -0x3c(%ebp),%ebx
082a292f +0x215:  mov    %edx,%eax
082a2931 +0x217:  shl    $0x2,%eax
082a2934 +0x21a:  add    %edx,%eax
082a2936 +0x21c:  add    %eax,%eax
082a2938 +0x21e:  add    %ebx,%eax
082a293a +0x220:  add    $0x223c,%eax
082a293f +0x225:  mov    0x8(%ecx,%eax,4),%edx
082a2943 +0x229:  mov    -0x3c(%ebp),%eax
082a2946 +0x22c:  mov    -0xcc(%ebp,%eax,4),%eax
082a294d +0x233:  mov    %edx,%ecx
082a294f +0x235:  sub    %eax,%ecx
082a2951 +0x237:  mov    %ecx,%eax
082a2953 +0x239:  mov    %eax,-0x38(%ebp)
082a2956 +0x23c:  mov    -0x3c(%ebp),%eax
082a2959 +0x23f:  mov    -0xcc(%ebp,%eax,4),%ebx
082a2960 +0x246:  movl   $0x0,0xc(%esp)
082a2968 +0x24e:  movl   $0x3097,0x8(%esp)
082a2970 +0x256:  movl   $&_ZZN12CGameManager18WarRoomCountManageEiE19__PRETTY_FUNCTION__,0x4(%esp)
082a2978 +0x25e:  lea    -0x74(%ebp),%eax
082a297b +0x261:  mov    %eax,(%esp)
082a297e +0x264:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082a2983 +0x269:  mov    %ebx,0xc(%esp)
082a2987 +0x26d:  mov    -0x38(%ebp),%eax
082a298a +0x270:  mov    %eax,0x8(%esp)
082a298e +0x274:  movl   $"WarRoomCountManage diff(%d) currentWarRoomCount(lev%d)",0x4(%esp)
082a2996 +0x27c:  lea    -0x74(%ebp),%eax
082a2999 +0x27f:  mov    %eax,(%esp)
082a299c +0x282:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082a29a1 +0x287:  cmpl   $0x0,-0x38(%ebp)
082a29a5 +0x28b:  jns    082a2a67 <+0x34d>
082a29ab +0x291:  mov    -0x38(%ebp),%eax
082a29ae +0x294:  sar    $0x1f,%eax
082a29b1 +0x297:  mov    %eax,%edx
082a29b3 +0x299:  xor    -0x38(%ebp),%edx
082a29b6 +0x29c:  mov    %edx,-0x34(%ebp)
082a29b9 +0x29f:  sub    %eax,-0x34(%ebp)
082a29bc +0x2a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a29c1 +0x2a7:  lea    0x87b4(%eax),%edx
082a29c7 +0x2ad:  mov    -0x3c(%ebp),%eax
082a29ca +0x2b0:  mov    %eax,0x4(%esp)
082a29ce +0x2b4:  mov    %edx,(%esp)
082a29d1 +0x2b7:  call   082a3e90 <_GLOBAL__I__ZN4CLog5this_E+0x2b7>  ; global constructors keyed to CLog::this_+0x2b7
082a29d6 +0x2bc:  mov    %eax,-0x30(%ebp)
082a29d9 +0x2bf:  jmp    082a2a53 <+0x339>
082a29db +0x2c1:  mov    -0x30(%ebp),%ebx
082a29de +0x2c4:  subl   $0x1,-0x30(%ebp)
082a29e2 +0x2c8:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082a29e7 +0x2cd:  mov    %ebx,0x4(%esp)
082a29eb +0x2d1:  mov    %eax,(%esp)
082a29ee +0x2d4:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a29f3 +0x2d9:  mov    %eax,-0x2c(%ebp)
082a29f6 +0x2dc:  cmpl   $0x0,-0x2c(%ebp)
082a29fa +0x2e0:  je     082a2b0e <+0x3f4>
082a2a00 +0x2e6:  cmpl   $0x0,-0x2c(%ebp)
082a2a04 +0x2ea:  je     082a2a1d <+0x303>
082a2a06 +0x2ec:  mov    -0x2c(%ebp),%eax
082a2a09 +0x2ef:  mov    %eax,(%esp)
082a2a0c +0x2f2:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a2a11 +0x2f7:  cmp    $0xffffffff,%eax
082a2a14 +0x2fa:  je     082a2a1d <+0x303>
082a2a16 +0x2fc:  mov    $0x1,%eax
082a2a1b +0x301:  jmp    082a2a22 <+0x308>
082a2a1d +0x303:  mov    $0x0,%eax
082a2a22 +0x308:  test   %al,%al
082a2a24 +0x30a:  je     082a2a53 <+0x339>
082a2a26 +0x30c:  mov    -0x2c(%ebp),%eax
082a2a29 +0x30f:  mov    %eax,(%esp)
082a2a2c +0x312:  call   086bd53c <_ZN7WarRoom8ShutDownEv>  ; WarRoom::ShutDown()
082a2a31 +0x317:  mov    %al,-0x25(%ebp)
082a2a34 +0x31a:  cmpb   $0x0,-0x25(%ebp)
082a2a38 +0x31e:  je     082a2a4f <+0x335>
082a2a3a +0x320:  lea    -0xa0(%ebp),%eax
082a2a40 +0x326:  mov    %eax,0x4(%esp)
082a2a44 +0x32a:  mov    -0x2c(%ebp),%eax
082a2a47 +0x32d:  mov    %eax,(%esp)
082a2a4a +0x330:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
082a2a4f +0x335:  subl   $0x1,-0x34(%ebp)
082a2a53 +0x339:  cmpl   $0x0,-0x34(%ebp)
082a2a57 +0x33d:  setne  %al
082a2a5a +0x340:  test   %al,%al
082a2a5c +0x342:  jne    082a29db <+0x2c1>
082a2a62 +0x348:  jmp    082a2b12 <+0x3f8>
082a2a67 +0x34d:  cmpl   $0x0,-0x38(%ebp)
082a2a6b +0x351:  jle    082a2b12 <+0x3f8>
082a2a71 +0x357:  mov    -0x38(%ebp),%eax
082a2a74 +0x35a:  mov    %eax,-0x24(%ebp)
082a2a77 +0x35d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2a7c +0x362:  lea    0x87b4(%eax),%edx
082a2a82 +0x368:  mov    -0x3c(%ebp),%eax
082a2a85 +0x36b:  mov    %eax,0x4(%esp)
082a2a89 +0x36f:  mov    %edx,(%esp)
082a2a8c +0x372:  call   082a3df4 <_GLOBAL__I__ZN4CLog5this_E+0x21b>  ; global constructors keyed to CLog::this_+0x21b
082a2a91 +0x377:  mov    %eax,-0x20(%ebp)
082a2a94 +0x37a:  jmp    082a2b01 <+0x3e7>
082a2a96 +0x37c:  mov    -0x20(%ebp),%ebx
082a2a99 +0x37f:  addl   $0x1,-0x20(%ebp)
082a2a9d +0x383:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082a2aa2 +0x388:  mov    %ebx,0x4(%esp)
082a2aa6 +0x38c:  mov    %eax,(%esp)
082a2aa9 +0x38f:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a2aae +0x394:  mov    %eax,-0x1c(%ebp)
082a2ab1 +0x397:  cmpl   $0x0,-0x1c(%ebp)
082a2ab5 +0x39b:  je     082a2b11 <+0x3f7>
082a2ab7 +0x39d:  cmpl   $0x0,-0x1c(%ebp)
082a2abb +0x3a1:  je     082a2ad4 <+0x3ba>
082a2abd +0x3a3:  mov    -0x1c(%ebp),%eax
082a2ac0 +0x3a6:  mov    %eax,(%esp)
082a2ac3 +0x3a9:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a2ac8 +0x3ae:  cmp    $0xffffffff,%eax
082a2acb +0x3b1:  jne    082a2ad4 <+0x3ba>
082a2acd +0x3b3:  mov    $0x1,%eax
082a2ad2 +0x3b8:  jmp    082a2ad9 <+0x3bf>
082a2ad4 +0x3ba:  mov    $0x0,%eax
082a2ad9 +0x3bf:  test   %al,%al
082a2adb +0x3c1:  je     082a2b01 <+0x3e7>
082a2add +0x3c3:  mov    -0x1c(%ebp),%eax
082a2ae0 +0x3c6:  mov    %eax,(%esp)
082a2ae3 +0x3c9:  call   086bd504 <_ZN7WarRoom4OpenEv>  ; WarRoom::Open()
082a2ae8 +0x3ce:  lea    -0xa0(%ebp),%eax
082a2aee +0x3d4:  mov    %eax,0x4(%esp)
082a2af2 +0x3d8:  mov    -0x1c(%ebp),%eax
082a2af5 +0x3db:  mov    %eax,(%esp)
082a2af8 +0x3de:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
082a2afd +0x3e3:  subl   $0x1,-0x24(%ebp)
082a2b01 +0x3e7:  cmpl   $0x0,-0x24(%ebp)
082a2b05 +0x3eb:  setne  %al
082a2b08 +0x3ee:  test   %al,%al
082a2b0a +0x3f0:  jne    082a2a96 <+0x37c>
082a2b0c +0x3f2:  jmp    082a2b12 <+0x3f8>
082a2b0e +0x3f4:  nop
082a2b0f +0x3f5:  jmp    082a2b12 <+0x3f8>
082a2b11 +0x3f7:  nop
082a2b12 +0x3f8:  mov    -0x38(%ebp),%eax
082a2b15 +0x3fb:  mov    %eax,%edx
082a2b17 +0x3fd:  sar    $0x1f,%edx
082a2b1a +0x400:  mov    %edx,%eax
082a2b1c +0x402:  xor    -0x38(%ebp),%eax
082a2b1f +0x405:  sub    %edx,%eax
082a2b21 +0x407:  add    %eax,-0x4c(%ebp)
082a2b24 +0x40a:  addl   $0x1,-0x3c(%ebp)
082a2b28 +0x40e:  cmpl   $0x9,-0x3c(%ebp)
082a2b2c +0x412:  setle  %al
082a2b2f +0x415:  test   %al,%al
082a2b31 +0x417:  jne    082a2922 <+0x208>
082a2b37 +0x41d:  cmpl   $0x0,-0x4c(%ebp)
082a2b3b +0x421:  je     082a2bee <+0x4d4>
082a2b41 +0x427:  mov    -0x4c(%ebp),%eax
082a2b44 +0x42a:  mov    %eax,0x8(%esp)
082a2b48 +0x42e:  lea    -0xa4(%ebp),%eax
082a2b4e +0x434:  mov    %eax,0x4(%esp)
082a2b52 +0x438:  lea    -0xa0(%ebp),%eax
082a2b58 +0x43e:  mov    %eax,(%esp)
082a2b5b +0x441:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082a2b60 +0x446:  movl   $0x1,0x4(%esp)
082a2b68 +0x44e:  lea    -0xa0(%ebp),%eax
082a2b6e +0x454:  mov    %eax,(%esp)
082a2b71 +0x457:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082a2b76 +0x45c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082a2b7b +0x461:  lea    -0xa0(%ebp),%edx
082a2b81 +0x467:  mov    %edx,0x4(%esp)
082a2b85 +0x46b:  mov    %eax,(%esp)
082a2b88 +0x46e:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082a2b8d +0x473:  mov    0x8(%ebp),%eax
082a2b90 +0x476:  mov    %eax,(%esp)
082a2b93 +0x479:  call   08298b40 <_ZN12CGameManager16PrintWarRoomListEv>  ; CGameManager::PrintWarRoomList()
082a2b98 +0x47e:  movl   $0x0,0xc(%esp)
082a2ba0 +0x486:  movl   $0x30cf,0x8(%esp)
082a2ba8 +0x48e:  movl   $&_ZZN12CGameManager18WarRoomCountManageEiE19__PRETTY_FUNCTION__,0x4(%esp)
082a2bb0 +0x496:  lea    -0x64(%ebp),%eax
082a2bb3 +0x499:  mov    %eax,(%esp)
082a2bb6 +0x49c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082a2bbb +0x4a1:  movl   $"WarRoomCountManage end",0x4(%esp)
082a2bc3 +0x4a9:  lea    -0x64(%ebp),%eax
082a2bc6 +0x4ac:  mov    %eax,(%esp)
082a2bc9 +0x4af:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082a2bce +0x4b4:  jmp    082a2bee <+0x4d4>
082a2bd0 +0x4b6:  mov    %edx,%ebx
082a2bd2 +0x4b8:  mov    %eax,%esi
082a2bd4 +0x4ba:  lea    -0xa0(%ebp),%eax
082a2bda +0x4c0:  mov    %eax,(%esp)
082a2bdd +0x4c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a2be2 +0x4c8:  mov    %esi,%eax
082a2be4 +0x4ca:  mov    %ebx,%edx
082a2be6 +0x4cc:  mov    %eax,(%esp)
082a2be9 +0x4cf:  call   08ae3750 <_Unwind_Resume>
082a2bee +0x4d4:  lea    -0xa0(%ebp),%eax
082a2bf4 +0x4da:  mov    %eax,(%esp)
082a2bf7 +0x4dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a2bfc +0x4e2:  add    $0xec,%esp
082a2c02 +0x4e8:  pop    %ebx
082a2c03 +0x4e9:  pop    %esi
082a2c04 +0x4ea:  pop    %edi
082a2c05 +0x4eb:  pop    %ebp
082a2c06 +0x4ec:  ret
082a2c07 +0x4ed:  nop
```

## 反编译 C

```c
// CGameManager::WarRoomCountManage @ 0x82a271a

/* CGameManager::WarRoomCountManage(int) */

void __thiscall CGameManager::WarRoomCountManage(CGameManager *this,int param_1)

{
  bool bVar1;
  GameWorld *this_00;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int local_d0 [10];
  int local_a8;
  PacketGuard local_a4 [12];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  WarRoom *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  WarRoom *local_30;
  char local_29;
  uint local_28;
  int local_24;
  WarRoom *local_20;
  
  bVar4 = 0;
  cMyTrace::cMyTrace(local_98,"void CGameManager::WarRoomCountManage(int)",0x306f,0);
  cMyTrace::operator()(local_98,"WarRoomCountManage Start");
  piVar3 = local_d0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  local_58 = 0;
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    local_48 = 0;
    while( true ) {
      iVar2 = G_CDataManager();
      iVar2 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar2 + 0x87b4),local_4c)
      ;
      if (iVar2 <= local_48) break;
      local_58 = local_58 + 1;
      local_44 = (WarRoom *)GetWarRoom((int)this);
      if (local_44 == (WarRoom *)0x0) {
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::WarRoomCountManage(int)",0x307d,
                   "WarRoomCountManage Error : WarRoom does not exist %d",local_58);
      }
      else {
        iVar2 = WarRoom::GetState(local_44);
        if (iVar2 != -1) {
          local_d0[local_4c] = local_d0[local_4c] + 1;
        }
      }
      local_48 = local_48 + 1;
    }
  }
  if (param_1 == -1) {
    iVar2 = G_CDataManager();
    local_54 = WarAreaCounter::GetCurrenTimeTable((WarAreaCounter *)(iVar2 + 0x87b4));
  }
  else {
    local_54 = param_1;
  }
  cMyTrace::cMyTrace(local_88,"void CGameManager::WarRoomCountManage(int)",0x3088,0);
  cMyTrace::operator()(local_88,"WarRoomCountManage currentHourIndex %d",local_54);
  PacketGuard::PacketGuard(local_a4);
                    /* try { // try from 082a28e0 to 082a2bcd has its CatchHandler @ 082a2bd0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a4,0,0x58);
  local_a8 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_a4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a4,0);
  local_50 = 0;
  local_40 = 0;
  do {
    if (9 < local_40) {
      if (local_50 != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a4,&local_a8,local_50);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a4,true);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_a4);
        PrintWarRoomList();
        cMyTrace::cMyTrace(local_68,"void CGameManager::WarRoomCountManage(int)",0x30cf,0);
        cMyTrace::operator()(local_68,"WarRoomCountManage end");
      }
      PacketGuard::~PacketGuard(local_a4);
      return;
    }
    iVar2 = G_CDataManager();
    local_3c = *(int *)(iVar2 + 8 + (local_54 * 10 + local_40 + 0x223c) * 4) - local_d0[local_40];
    iVar2 = local_d0[local_40];
    cMyTrace::cMyTrace(local_78,"void CGameManager::WarRoomCountManage(int)",0x3097,0);
    cMyTrace::operator()
              (local_78,"WarRoomCountManage diff(%d) currentWarRoomCount(lev%d)",local_3c,iVar2);
    if ((int)local_3c < 0) {
      local_38 = ((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f);
      iVar2 = G_CDataManager();
      local_34 = WarAreaCounter::GetWarRoomCountLastIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_38 != 0) {
        local_34 = local_34 + -1;
        iVar2 = G_CGameManager();
        local_30 = (WarRoom *)GetWarRoom(iVar2);
        if (local_30 == (WarRoom *)0x0) break;
        if ((local_30 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_30), iVar2 == -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = WarRoom::ShutDown(local_30);
          if (local_29 != '\0') {
            WarRoom::MakeStateInfo(local_30,(char *)local_a4);
          }
          local_38 = local_38 + -1;
        }
      }
    }
    else if (0 < (int)local_3c) {
      local_28 = local_3c;
      iVar2 = G_CDataManager();
      local_24 = WarAreaCounter::GetWarRoomCountFirstIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_28 != 0) {
        local_24 = local_24 + 1;
        iVar2 = G_CGameManager();
        local_20 = (WarRoom *)GetWarRoom(iVar2);
        if (local_20 == (WarRoom *)0x0) break;
        if ((local_20 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_20), iVar2 != -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          WarRoom::Open(local_20);
          WarRoom::MakeStateInfo(local_20,(char *)local_a4);
          local_28 = local_28 - 1;
        }
      }
    }
    local_50 = local_50 + (((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f));
    local_40 = local_40 + 1;
  } while( true );
}
```
