# dispatch_sig

`_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x081fc4de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fc4de  _ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fc4de, 0x081fd0a7]
081fc4de +0x000:  push   %ebp
081fc4df +0x001:  mov    %esp,%ebp
081fc4e1 +0x003:  push   %edi
081fc4e2 +0x004:  push   %esi
081fc4e3 +0x005:  push   %ebx
081fc4e4 +0x006:  sub    $0x8c,%esp
081fc4ea +0x00c:  movl   $0x0,0x4(%esp)
081fc4f2 +0x014:  mov    0x10(%ebp),%eax
081fc4f5 +0x017:  mov    %eax,(%esp)
081fc4f8 +0x01a:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
081fc4fd +0x01f:  mov    %eax,-0x20(%ebp)
081fc500 +0x022:  mov    -0x20(%ebp),%eax
081fc503 +0x025:  movzbl 0xd(%eax),%eax
081fc507 +0x029:  test   %al,%al
081fc509 +0x02b:  je     081fc52c <+0x4e>
081fc50b +0x02d:  mov    0xc(%ebp),%eax
081fc50e +0x030:  mov    %eax,(%esp)
081fc511 +0x033:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc516 +0x038:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc51c +0x03e:  mov    %eax,0x4(%esp)
081fc520 +0x042:  mov    %edx,(%esp)
081fc523 +0x045:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fc528 +0x04a:  test   %al,%al
081fc52a +0x04c:  je     081fc533 <+0x55>
081fc52c +0x04e:  mov    $0x1,%eax
081fc531 +0x053:  jmp    081fc538 <+0x5a>
081fc533 +0x055:  mov    $0x0,%eax
081fc538 +0x05a:  test   %al,%al
081fc53a +0x05c:  je     081fc5aa <+0xcc>
081fc53c +0x05e:  mov    -0x20(%ebp),%eax
081fc53f +0x061:  movzbl 0xd(%eax),%eax
081fc543 +0x065:  movzbl %al,%esi
081fc546 +0x068:  mov    0xc(%ebp),%eax
081fc549 +0x06b:  mov    %eax,(%esp)
081fc54c +0x06e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc551 +0x073:  mov    %eax,%ebx
081fc553 +0x075:  movl   $0x0,0xc(%esp)
081fc55b +0x07d:  movl   $0x8b65,0x8(%esp)
081fc563 +0x085:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc56b +0x08d:  lea    -0x80(%ebp),%eax
081fc56e +0x090:  mov    %eax,(%esp)
081fc571 +0x093:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc576 +0x098:  mov    %esi,0xc(%esp)
081fc57a +0x09c:  mov    %ebx,0x8(%esp)
081fc57e +0x0a0:  movl   $"GM(%d) trying to command(%d)",0x4(%esp)
081fc586 +0x0a8:  lea    -0x80(%ebp),%eax
081fc589 +0x0ab:  mov    %eax,(%esp)
081fc58c +0x0ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc591 +0x0b3:  mov    0xc(%ebp),%eax
081fc594 +0x0b6:  mov    %eax,(%esp)
081fc597 +0x0b9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081fc59c +0x0be:  test   %eax,%eax
081fc59e +0x0c0:  sete   %al
081fc5a1 +0x0c3:  test   %al,%al
081fc5a3 +0x0c5:  jne    081fc61a <+0x13c>
081fc5a5 +0x0c7:  jmp    081fc643 <+0x165>
081fc5aa +0x0cc:  mov    0xc(%ebp),%eax
081fc5ad +0x0cf:  mov    %eax,(%esp)
081fc5b0 +0x0d2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc5b5 +0x0d7:  mov    %eax,%ebx
081fc5b7 +0x0d9:  movl   $0x5,0xc(%esp)
081fc5bf +0x0e1:  movl   $0x8b6a,0x8(%esp)
081fc5c7 +0x0e9:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc5cf +0x0f1:  lea    -0x70(%ebp),%eax
081fc5d2 +0x0f4:  mov    %eax,(%esp)
081fc5d5 +0x0f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc5da +0x0fc:  mov    %ebx,0x8(%esp)
081fc5de +0x100:  movl   $"Illegal GM Command : %d",0x4(%esp)
081fc5e6 +0x108:  lea    -0x70(%ebp),%eax
081fc5e9 +0x10b:  mov    %eax,(%esp)
081fc5ec +0x10e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc5f1 +0x113:  movl   $0x0,0xc(%esp)
081fc5f9 +0x11b:  movl   $0x0,0x8(%esp)
081fc601 +0x123:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc609 +0x12b:  movl   $0x8b6b,(%esp)
081fc610 +0x132:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fc615 +0x137:  jmp    081fd09c <+0xbbe>
081fc61a +0x13c:  movl   $0x0,0xc(%esp)
081fc622 +0x144:  movl   $0x0,0x8(%esp)
081fc62a +0x14c:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc632 +0x154:  movl   $0x8b70,(%esp)
081fc639 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fc63e +0x160:  jmp    081fd09c <+0xbbe>
081fc643 +0x165:  mov    0xc(%ebp),%eax
081fc646 +0x168:  mov    %eax,(%esp)
081fc649 +0x16b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc64e +0x170:  movl   $0x0,0x4(%esp)
081fc656 +0x178:  mov    %eax,(%esp)
081fc659 +0x17b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fc65e +0x180:  mov    %eax,%ebx
081fc660 +0x182:  movl   $0x0,0xc(%esp)
081fc668 +0x18a:  movl   $0x8b72,0x8(%esp)
081fc670 +0x192:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc678 +0x19a:  lea    -0x60(%ebp),%eax
081fc67b +0x19d:  mov    %eax,(%esp)
081fc67e +0x1a0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc683 +0x1a5:  mov    %ebx,0x8(%esp)
081fc687 +0x1a9:  movl   $"GM Command : %s",0x4(%esp)
081fc68f +0x1b1:  lea    -0x60(%ebp),%eax
081fc692 +0x1b4:  mov    %eax,(%esp)
081fc695 +0x1b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc69a +0x1bc:  movb   $0x1,-0x1a(%ebp)
081fc69e +0x1c0:  movb   $0x0,-0x19(%ebp)
081fc6a2 +0x1c4:  mov    0xc(%ebp),%eax
081fc6a5 +0x1c7:  mov    %eax,(%esp)
081fc6a8 +0x1ca:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc6ad +0x1cf:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc6b3 +0x1d5:  mov    %eax,0x4(%esp)
081fc6b7 +0x1d9:  mov    %edx,(%esp)
081fc6ba +0x1dc:  call   0829948c <_ZN11CGM_Manager4IsGmEj>  ; CGM_Manager::IsGm(unsigned int)
081fc6bf +0x1e1:  xor    $0x1,%eax
081fc6c2 +0x1e4:  test   %al,%al
081fc6c4 +0x1e6:  je     081fc736 <+0x258>
081fc6c6 +0x1e8:  mov    0xc(%ebp),%eax
081fc6c9 +0x1eb:  mov    %eax,(%esp)
081fc6cc +0x1ee:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc6d1 +0x1f3:  mov    %eax,%ebx
081fc6d3 +0x1f5:  movl   $0x5,0xc(%esp)
081fc6db +0x1fd:  movl   $0x8b90,0x8(%esp)
081fc6e3 +0x205:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc6eb +0x20d:  lea    -0x50(%ebp),%eax
081fc6ee +0x210:  mov    %eax,(%esp)
081fc6f1 +0x213:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc6f6 +0x218:  mov    %ebx,0x8(%esp)
081fc6fa +0x21c:  movl   $"Illegal GM Command : %d",0x4(%esp)
081fc702 +0x224:  lea    -0x50(%ebp),%eax
081fc705 +0x227:  mov    %eax,(%esp)
081fc708 +0x22a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc70d +0x22f:  movl   $0x0,0xc(%esp)
081fc715 +0x237:  movl   $0x0,0x8(%esp)
081fc71d +0x23f:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc725 +0x247:  movl   $0x8b91,(%esp)
081fc72c +0x24e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fc731 +0x253:  jmp    081fd09c <+0xbbe>
081fc736 +0x258:  movzbl -0x19(%ebp),%eax
081fc73a +0x25c:  xor    $0x1,%eax
081fc73d +0x25f:  test   %al,%al
081fc73f +0x261:  je     081fc74b <+0x26d>
081fc741 +0x263:  mov    $0x0,%eax
081fc746 +0x268:  jmp    081fd09c <+0xbbe>
081fc74b +0x26d:  mov    -0x20(%ebp),%eax
081fc74e +0x270:  movzbl 0xd(%eax),%eax
081fc752 +0x274:  movzbl %al,%ebx
081fc755 +0x277:  movl   $0x0,0xc(%esp)
081fc75d +0x27f:  movl   $0x8bb6,0x8(%esp)
081fc765 +0x287:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc76d +0x28f:  lea    -0x40(%ebp),%eax
081fc770 +0x292:  mov    %eax,(%esp)
081fc773 +0x295:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc778 +0x29a:  mov    %ebx,0x8(%esp)
081fc77c +0x29e:  movl   $"GM Pass Complete! Command(%d)",0x4(%esp)
081fc784 +0x2a6:  lea    -0x40(%ebp),%eax
081fc787 +0x2a9:  mov    %eax,(%esp)
081fc78a +0x2ac:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc78f +0x2b1:  mov    -0x20(%ebp),%eax
081fc792 +0x2b4:  movzbl 0xd(%eax),%eax
081fc796 +0x2b8:  movzbl %al,%eax
081fc799 +0x2bb:  cmp    $0x30,%eax
081fc79c +0x2be:  ja     081fd014 <+0xb36>
081fc7a2 +0x2c4:  mov    &data#3283c20c(.rodata)(,%eax,4),%eax
081fc7a9 +0x2cb:  jmp    *%eax
081fc7ab +0x2cd:  mov    0xc(%ebp),%eax
081fc7ae +0x2d0:  mov    %eax,(%esp)
081fc7b1 +0x2d3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc7b6 +0x2d8:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc7bc +0x2de:  mov    %eax,0x4(%esp)
081fc7c0 +0x2e2:  mov    %edx,(%esp)
081fc7c3 +0x2e5:  call   082993d8 <_ZN11CGM_Manager10GetGmLevelEj>  ; CGM_Manager::GetGmLevel(unsigned int)
081fc7c8 +0x2ea:  test   %eax,%eax
081fc7ca +0x2ec:  setle  %al
081fc7cd +0x2ef:  test   %al,%al
081fc7cf +0x2f1:  je     081fc7fa <+0x31c>
081fc7d1 +0x2f3:  movl   $0x0,0xc(%esp)
081fc7d9 +0x2fb:  movl   $0x0,0x8(%esp)
081fc7e1 +0x303:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc7e9 +0x30b:  movl   $0x8bcb,(%esp)
081fc7f0 +0x312:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fc7f5 +0x317:  jmp    081fd09c <+0xbbe>
081fc7fa +0x31c:  mov    0xc(%ebp),%eax
081fc7fd +0x31f:  mov    %eax,(%esp)
081fc800 +0x322:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc805 +0x327:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc80b +0x32d:  mov    %eax,0x4(%esp)
081fc80f +0x331:  mov    %edx,(%esp)
081fc812 +0x334:  call   0829917c <_ZN11CGM_Manager10TurnGmModeEj>  ; CGM_Manager::TurnGmMode(unsigned int)
081fc817 +0x339:  mov    0xc(%ebp),%eax
081fc81a +0x33c:  mov    %eax,(%esp)
081fc81d +0x33f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc822 +0x344:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
081fc828 +0x34a:  mov    %eax,0x4(%esp)
081fc82c +0x34e:  mov    %edx,(%esp)
081fc82f +0x351:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
081fc834 +0x356:  xor    $0x1,%eax
081fc837 +0x359:  test   %al,%al
081fc839 +0x35b:  je     081fc8c3 <+0x3e5>
081fc83f +0x361:  mov    0xc(%ebp),%eax
081fc842 +0x364:  mov    %eax,(%esp)
081fc845 +0x367:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fc84a +0x36c:  mov    %eax,%esi
081fc84c +0x36e:  mov    0xc(%ebp),%eax
081fc84f +0x371:  mov    %eax,(%esp)
081fc852 +0x374:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fc857 +0x379:  mov    %eax,%ebx
081fc859 +0x37b:  movl   $0x0,0xc(%esp)
081fc861 +0x383:  movl   $0x8bd0,0x8(%esp)
081fc869 +0x38b:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fc871 +0x393:  lea    -0x30(%ebp),%eax
081fc874 +0x396:  mov    %eax,(%esp)
081fc877 +0x399:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fc87c +0x39e:  mov    %esi,0xc(%esp)
081fc880 +0x3a2:  mov    %ebx,0x8(%esp)
081fc884 +0x3a6:  movl   $"%d:'%s' GM Mode OFF.",0x4(%esp)
081fc88c +0x3ae:  lea    -0x30(%ebp),%eax
081fc88f +0x3b1:  mov    %eax,(%esp)
081fc892 +0x3b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fc897 +0x3b9:  movb   $0x1,-0x1a(%ebp)
081fc89b +0x3bd:  mov    -0x20(%ebp),%eax
081fc89e +0x3c0:  movb   $0x2a,0xd(%eax)
081fc8a2 +0x3c4:  mov    -0x20(%ebp),%eax
081fc8a5 +0x3c7:  mov    %eax,0x8(%esp)
081fc8a9 +0x3cb:  mov    0xc(%ebp),%eax
081fc8ac +0x3ce:  mov    %eax,0x4(%esp)
081fc8b0 +0x3d2:  mov    0x8(%ebp),%eax
081fc8b3 +0x3d5:  mov    %eax,(%esp)
081fc8b6 +0x3d8:  call   0858e918 <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)
081fc8bb +0x3dd:  mov    %al,-0x1a(%ebp)
081fc8be +0x3e0:  jmp    081fd047 <+0xb69>
081fc8c3 +0x3e5:  movl   $0x1,0x4(%esp)
081fc8cb +0x3ed:  mov    0xc(%ebp),%eax
081fc8ce +0x3f0:  mov    %eax,(%esp)
081fc8d1 +0x3f3:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
081fc8d6 +0x3f8:  mov    -0x20(%ebp),%eax
081fc8d9 +0x3fb:  mov    %eax,0x8(%esp)
081fc8dd +0x3ff:  mov    0xc(%ebp),%eax
081fc8e0 +0x402:  mov    %eax,0x4(%esp)
081fc8e4 +0x406:  mov    0x8(%ebp),%eax
081fc8e7 +0x409:  mov    %eax,(%esp)
081fc8ea +0x40c:  call   0858e724 <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)
081fc8ef +0x411:  mov    %al,-0x1a(%ebp)
081fc8f2 +0x414:  jmp    081fd047 <+0xb69>
081fc8f7 +0x419:  mov    -0x20(%ebp),%eax
081fc8fa +0x41c:  mov    %eax,0x8(%esp)
081fc8fe +0x420:  mov    0xc(%ebp),%eax
081fc901 +0x423:  mov    %eax,0x4(%esp)
081fc905 +0x427:  mov    0x8(%ebp),%eax
081fc908 +0x42a:  mov    %eax,(%esp)
081fc90b +0x42d:  call   0858e918 <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)
081fc910 +0x432:  mov    %al,-0x1a(%ebp)
081fc913 +0x435:  jmp    081fd047 <+0xb69>
081fc918 +0x43a:  mov    -0x20(%ebp),%eax
081fc91b +0x43d:  mov    0xe(%eax),%ebx
081fc91e +0x440:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081fc923 +0x445:  mov    %ebx,0x4(%esp)
081fc927 +0x449:  mov    %eax,(%esp)
081fc92a +0x44c:  call   082a2c08 <_ZN12CGameManager22WarRoomCountManageTestEi>  ; CGameManager::WarRoomCountManageTest(int)
081fc92f +0x451:  jmp    081fd047 <+0xb69>
081fc934 +0x456:  mov    0xc(%ebp),%eax
081fc937 +0x459:  mov    %eax,0x4(%esp)
081fc93b +0x45d:  mov    0x8(%ebp),%eax
081fc93e +0x460:  mov    %eax,(%esp)
081fc941 +0x463:  call   0858f64c <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser>  ; DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*)
081fc946 +0x468:  mov    %al,-0x1a(%ebp)
081fc949 +0x46b:  jmp    081fd047 <+0xb69>
081fc94e +0x470:  movl   $0xffffffff,0x8(%esp)
081fc956 +0x478:  mov    0xc(%ebp),%eax
081fc959 +0x47b:  mov    %eax,0x4(%esp)
081fc95d +0x47f:  mov    0x8(%ebp),%eax
081fc960 +0x482:  mov    %eax,(%esp)
081fc963 +0x485:  call   0858f3ba <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri>  ; DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int)
081fc968 +0x48a:  mov    %al,-0x1a(%ebp)
081fc96b +0x48d:  jmp    081fd047 <+0xb69>
081fc970 +0x492:  mov    0xc(%ebp),%eax
081fc973 +0x495:  mov    %eax,(%esp)
081fc976 +0x498:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081fc97b +0x49d:  mov    %eax,(%esp)
081fc97e +0x4a0:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
081fc983 +0x4a5:  mov    %eax,(%esp)
081fc986 +0x4a8:  call   0833debc <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv>  ; user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const
081fc98b +0x4ad:  xor    $0x1,%eax
081fc98e +0x4b0:  test   %al,%al
081fc990 +0x4b2:  je     081fd03a <+0xb5c>
081fc996 +0x4b8:  mov    -0x20(%ebp),%eax
081fc999 +0x4bb:  mov    0xe(%eax),%ebx
081fc99c +0x4be:  mov    0xc(%ebp),%eax
081fc99f +0x4c1:  mov    %eax,(%esp)
081fc9a2 +0x4c4:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081fc9a7 +0x4c9:  mov    %eax,(%esp)
081fc9aa +0x4cc:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081fc9af +0x4d1:  mov    %ebx,0x4(%esp)
081fc9b3 +0x4d5:  mov    %eax,(%esp)
081fc9b6 +0x4d8:  call   08339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>  ; user_creature::CCreatureMgr::GainExp(int)
081fc9bb +0x4dd:  jmp    081fd047 <+0xb69>
081fc9c0 +0x4e2:  mov    -0x20(%ebp),%eax
081fc9c3 +0x4e5:  mov    0xe(%eax),%ebx
081fc9c6 +0x4e8:  mov    0xc(%ebp),%eax
081fc9c9 +0x4eb:  mov    %eax,(%esp)
081fc9cc +0x4ee:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081fc9d1 +0x4f3:  mov    %eax,(%esp)
081fc9d4 +0x4f6:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081fc9d9 +0x4fb:  mov    %ebx,0x4(%esp)
081fc9dd +0x4ff:  mov    %eax,(%esp)
081fc9e0 +0x502:  call   08339ee0 <_ZN13user_creature12CCreatureMgr10SetStomachEi>  ; user_creature::CCreatureMgr::SetStomach(int)
081fc9e5 +0x507:  jmp    081fd047 <+0xb69>
081fc9ea +0x50c:  mov    0xc(%ebp),%eax
081fc9ed +0x50f:  mov    %eax,(%esp)
081fc9f0 +0x512:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081fc9f5 +0x517:  mov    %eax,(%esp)
081fc9f8 +0x51a:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081fc9fd +0x51f:  movl   $0x1,0xc(%esp)
081fca05 +0x527:  movl   $0x0,0x8(%esp)
081fca0d +0x52f:  movl   $0x0,0x4(%esp)
081fca15 +0x537:  mov    %eax,(%esp)
081fca18 +0x53a:  call   0833beb4 <_ZN13user_creature12CCreatureMgr7EvoluteEiib>  ; user_creature::CCreatureMgr::Evolute(int, int, bool)
081fca1d +0x53f:  jmp    081fd047 <+0xb69>
081fca22 +0x544:  movl   $0x1,(%esp)
081fca29 +0x54b:  call   0822cf30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x25da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x25da
081fca2e +0x550:  jmp    081fd047 <+0xb69>
081fca33 +0x555:  mov    -0x20(%ebp),%eax
081fca36 +0x558:  movzbl 0xe(%eax),%eax
081fca3a +0x55c:  movzbl %al,%eax
081fca3d +0x55f:  mov    %eax,0x8(%esp)
081fca41 +0x563:  mov    0xc(%ebp),%eax
081fca44 +0x566:  mov    %eax,0x4(%esp)
081fca48 +0x56a:  mov    0x8(%ebp),%eax
081fca4b +0x56d:  mov    %eax,(%esp)
081fca4e +0x570:  call   0858efde <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri>  ; DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int)
081fca53 +0x575:  mov    %al,-0x1a(%ebp)
081fca56 +0x578:  jmp    081fd047 <+0xb69>
081fca5b +0x57d:  mov    -0x20(%ebp),%eax
081fca5e +0x580:  movzbl 0xf(%eax),%eax
081fca62 +0x584:  movzbl %al,%edx
081fca65 +0x587:  mov    -0x20(%ebp),%eax
081fca68 +0x58a:  movzbl 0xe(%eax),%eax
081fca6c +0x58e:  movzbl %al,%eax
081fca6f +0x591:  mov    %edx,0xc(%esp)
081fca73 +0x595:  mov    %eax,0x8(%esp)
081fca77 +0x599:  mov    0xc(%ebp),%eax
081fca7a +0x59c:  mov    %eax,0x4(%esp)
081fca7e +0x5a0:  mov    0x8(%ebp),%eax
081fca81 +0x5a3:  mov    %eax,(%esp)
081fca84 +0x5a6:  call   0858ee54 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii>  ; DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int)
081fca89 +0x5ab:  mov    %al,-0x1a(%ebp)
081fca8c +0x5ae:  jmp    081fd047 <+0xb69>
081fca91 +0x5b3:  mov    -0x20(%ebp),%eax
081fca94 +0x5b6:  mov    %eax,0x8(%esp)
081fca98 +0x5ba:  mov    0xc(%ebp),%eax
081fca9b +0x5bd:  mov    %eax,0x4(%esp)
081fca9f +0x5c1:  mov    0x8(%ebp),%eax
081fcaa2 +0x5c4:  mov    %eax,(%esp)
081fcaa5 +0x5c7:  call   0858e9c4 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&)
081fcaaa +0x5cc:  mov    %al,-0x1a(%ebp)
081fcaad +0x5cf:  jmp    081fd047 <+0xb69>
081fcab2 +0x5d4:  mov    -0x20(%ebp),%eax
081fcab5 +0x5d7:  movzbl 0xf(%eax),%eax
081fcab9 +0x5db:  movzbl %al,%edx
081fcabc +0x5de:  mov    -0x20(%ebp),%eax
081fcabf +0x5e1:  movzbl 0xe(%eax),%eax
081fcac3 +0x5e5:  movzbl %al,%eax
081fcac6 +0x5e8:  mov    %edx,0xc(%esp)
081fcaca +0x5ec:  mov    %eax,0x8(%esp)
081fcace +0x5f0:  mov    0xc(%ebp),%eax
081fcad1 +0x5f3:  mov    %eax,0x4(%esp)
081fcad5 +0x5f7:  mov    0x8(%ebp),%eax
081fcad8 +0x5fa:  mov    %eax,(%esp)
081fcadb +0x5fd:  call   0858eab8 <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii>  ; DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int)
081fcae0 +0x602:  mov    %al,-0x1a(%ebp)
081fcae3 +0x605:  jmp    081fd047 <+0xb69>
081fcae8 +0x60a:  mov    -0x20(%ebp),%eax
081fcaeb +0x60d:  mov    0xe(%eax),%eax
081fcaee +0x610:  test   %eax,%eax
081fcaf0 +0x612:  jle    081fcb17 <+0x639>
081fcaf2 +0x614:  mov    -0x20(%ebp),%eax
081fcaf5 +0x617:  mov    0xe(%eax),%eax
081fcaf8 +0x61a:  mov    %eax,0x4(%esp)
081fcafc +0x61e:  mov    0xc(%ebp),%eax
081fcaff +0x621:  mov    %eax,(%esp)
081fcb02 +0x624:  call   08655c60 <_ZN5CUser9FatigueUpEi>  ; CUser::FatigueUp(int)
081fcb07 +0x629:  mov    0xc(%ebp),%eax
081fcb0a +0x62c:  mov    %eax,(%esp)
081fcb0d +0x62f:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
081fcb12 +0x634:  jmp    081fd047 <+0xb69>
081fcb17 +0x639:  mov    -0x20(%ebp),%eax
081fcb1a +0x63c:  mov    0xe(%eax),%eax
081fcb1d +0x63f:  test   %eax,%eax
081fcb1f +0x641:  jne    081fd03d <+0xb5f>
081fcb25 +0x647:  movl   $0x0,0x4(%esp)
081fcb2d +0x64f:  mov    0xc(%ebp),%eax
081fcb30 +0x652:  mov    %eax,(%esp)
081fcb33 +0x655:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
081fcb38 +0x65a:  mov    0xc(%ebp),%eax
081fcb3b +0x65d:  mov    %eax,(%esp)
081fcb3e +0x660:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
081fcb43 +0x665:  jmp    081fd047 <+0xb69>
081fcb48 +0x66a:  mov    -0x20(%ebp),%eax
081fcb4b +0x66d:  mov    0xe(%eax),%eax
081fcb4e +0x670:  test   %eax,%eax
081fcb50 +0x672:  je     081fd040 <+0xb62>
081fcb56 +0x678:  mov    -0x20(%ebp),%eax
081fcb59 +0x67b:  mov    0xe(%eax),%ebx
081fcb5c +0x67e:  mov    0xc(%ebp),%eax
081fcb5f +0x681:  mov    %eax,(%esp)
081fcb62 +0x684:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081fcb67 +0x689:  mov    %ebx,0x4(%esp)
081fcb6b +0x68d:  mov    %eax,(%esp)
081fcb6e +0x690:  call   0822d652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2cfc
081fcb73 +0x695:  mov    -0x20(%ebp),%eax
081fcb76 +0x698:  mov    0xe(%eax),%eax
081fcb79 +0x69b:  mov    %eax,%ebx
081fcb7b +0x69d:  mov    0xc(%ebp),%eax
081fcb7e +0x6a0:  mov    %eax,(%esp)
081fcb81 +0x6a3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081fcb86 +0x6a8:  mov    %eax,(%esp)
081fcb89 +0x6ab:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081fcb8e +0x6b0:  mov    0xc(%ebp),%edx
081fcb91 +0x6b3:  add    $0x79700,%edx
081fcb97 +0x6b9:  movl   $0x6,0xc(%esp)
081fcb9f +0x6c1:  mov    %ebx,0x8(%esp)
081fcba3 +0x6c5:  mov    %eax,0x4(%esp)
081fcba7 +0x6c9:  mov    %edx,(%esp)
081fcbaa +0x6cc:  call   08683a20 <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason>  ; cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason)
081fcbaf +0x6d1:  movl   $0x0,0xc(%esp)
081fcbb7 +0x6d9:  movl   $0x0,0x8(%esp)
081fcbbf +0x6e1:  movl   $0x1,0x4(%esp)
081fcbc7 +0x6e9:  mov    0xc(%ebp),%eax
081fcbca +0x6ec:  mov    %eax,(%esp)
081fcbcd +0x6ef:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081fcbd2 +0x6f4:  movb   $0x1,-0x1a(%ebp)
081fcbd6 +0x6f8:  jmp    081fd047 <+0xb69>
081fcbdb +0x6fd:  mov    -0x20(%ebp),%eax
081fcbde +0x700:  mov    0xe(%eax),%eax
081fcbe1 +0x703:  test   %eax,%eax
081fcbe3 +0x705:  jle    081fd043 <+0xb65>
081fcbe9 +0x70b:  mov    -0x20(%ebp),%eax
081fcbec +0x70e:  mov    0xe(%eax),%eax
081fcbef +0x711:  mov    %eax,%ebx
081fcbf1 +0x713:  mov    0xc(%ebp),%eax
081fcbf4 +0x716:  mov    %eax,(%esp)
081fcbf7 +0x719:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081fcbfc +0x71e:  mov    %ebx,0x4(%esp)
081fcc00 +0x722:  mov    %eax,(%esp)
081fcc03 +0x725:  call   084fa9d4 <_ZN10CInventory9UseUpCoinEj>  ; CInventory::UseUpCoin(unsigned int)
081fcc08 +0x72a:  mov    0xc(%ebp),%eax
081fcc0b +0x72d:  mov    %eax,(%esp)
081fcc0e +0x730:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
081fcc13 +0x735:  jmp    081fd047 <+0xb69>
081fcc18 +0x73a:  mov    -0x20(%ebp),%eax
081fcc1b +0x73d:  mov    0x12(%eax),%edx
081fcc1e +0x740:  mov    -0x20(%ebp),%eax
081fcc21 +0x743:  mov    0xe(%eax),%eax
081fcc24 +0x746:  mov    %edx,0xc(%esp)
081fcc28 +0x74a:  mov    %eax,0x8(%esp)
081fcc2c +0x74e:  mov    0xc(%ebp),%eax
081fcc2f +0x751:  mov    %eax,0x4(%esp)
081fcc33 +0x755:  mov    0x8(%ebp),%eax
081fcc36 +0x758:  mov    %eax,(%esp)
081fcc39 +0x75b:  call   0858ec9c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi>  ; DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int)
081fcc3e +0x760:  mov    %al,-0x1a(%ebp)
081fcc41 +0x763:  jmp    081fd047 <+0xb69>
081fcc46 +0x768:  mov    -0x20(%ebp),%eax
081fcc49 +0x76b:  mov    %eax,0x8(%esp)
081fcc4d +0x76f:  mov    0xc(%ebp),%eax
081fcc50 +0x772:  mov    %eax,0x4(%esp)
081fcc54 +0x776:  mov    0x8(%ebp),%eax
081fcc57 +0x779:  mov    %eax,(%esp)
081fcc5a +0x77c:  call   0858f7b6 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)
081fcc5f +0x781:  mov    %al,-0x1a(%ebp)
081fcc62 +0x784:  jmp    081fd047 <+0xb69>
081fcc67 +0x789:  mov    -0x20(%ebp),%eax
081fcc6a +0x78c:  mov    %eax,0x8(%esp)
081fcc6e +0x790:  mov    0xc(%ebp),%eax
081fcc71 +0x793:  mov    %eax,0x4(%esp)
081fcc75 +0x797:  mov    0x8(%ebp),%eax
081fcc78 +0x79a:  mov    %eax,(%esp)
081fcc7b +0x79d:  call   0858faba <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandPVPRankSet(CUser*, MSG_DEBUG_COMMAND&)
081fcc80 +0x7a2:  mov    %al,-0x1a(%ebp)
081fcc83 +0x7a5:  jmp    081fd047 <+0xb69>
081fcc88 +0x7aa:  movl   $0x1,0x4(%esp)
081fcc90 +0x7b2:  mov    0xc(%ebp),%eax
081fcc93 +0x7b5:  mov    %eax,(%esp)
081fcc96 +0x7b8:  call   0822fea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x554e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x554e
081fcc9b +0x7bd:  jmp    081fd047 <+0xb69>
081fcca0 +0x7c2:  movl   $0x2,0x4(%esp)
081fcca8 +0x7ca:  mov    0xc(%ebp),%eax
081fccab +0x7cd:  mov    %eax,(%esp)
081fccae +0x7d0:  call   0822fea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x554e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x554e
081fccb3 +0x7d5:  jmp    081fd047 <+0xb69>
081fccb8 +0x7da:  movl   $0x0,0x4(%esp)
081fccc0 +0x7e2:  mov    0xc(%ebp),%eax
081fccc3 +0x7e5:  mov    %eax,(%esp)
081fccc6 +0x7e8:  call   0822fea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x554e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x554e
081fcccb +0x7ed:  jmp    081fd047 <+0xb69>
081fccd0 +0x7f2:  mov    -0x20(%ebp),%eax
081fccd3 +0x7f5:  mov    0xe(%eax),%ebx
081fccd6 +0x7f8:  mov    0xc(%ebp),%eax
081fccd9 +0x7fb:  mov    %eax,(%esp)
081fccdc +0x7fe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fcce1 +0x803:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081fcce7 +0x809:  mov    %ebx,0x8(%esp)
081fcceb +0x80d:  mov    %eax,0x4(%esp)
081fccef +0x811:  mov    %edx,(%esp)
081fccf2 +0x814:  call   081093ee <_ZN8WongWork11CGMAccounts8appendGMEjj>  ; WongWork::CGMAccounts::appendGM(unsigned int, unsigned int)
081fccf7 +0x819:  mov    %al,-0x1a(%ebp)
081fccfa +0x81c:  jmp    081fd047 <+0xb69>
081fccff +0x821:  mov    -0x20(%ebp),%eax
081fcd02 +0x824:  mov    0xe(%eax),%ebx
081fcd05 +0x827:  mov    0xc(%ebp),%eax
081fcd08 +0x82a:  mov    %eax,(%esp)
081fcd0b +0x82d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fcd10 +0x832:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081fcd16 +0x838:  mov    %ebx,0x8(%esp)
081fcd1a +0x83c:  mov    %eax,0x4(%esp)
081fcd1e +0x840:  mov    %edx,(%esp)
081fcd21 +0x843:  call   081093fc <_ZN8WongWork11CGMAccounts8removeGMEjj>  ; WongWork::CGMAccounts::removeGM(unsigned int, unsigned int)
081fcd26 +0x848:  mov    %al,-0x1a(%ebp)
081fcd29 +0x84b:  jmp    081fd047 <+0xb69>
081fcd2e +0x850:  mov    -0x20(%ebp),%eax
081fcd31 +0x853:  mov    0xe(%eax),%edx
081fcd34 +0x856:  mov    0xc(%ebp),%eax
081fcd37 +0x859:  mov    %edx,0x4(%esp)
081fcd3b +0x85d:  mov    %eax,(%esp)
081fcd3e +0x860:  call   0864670a <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi>  ; CUserCharacInfo::SetCurCharacLuckPoint(int)
081fcd43 +0x865:  mov    0xc(%ebp),%eax
081fcd46 +0x868:  mov    %eax,(%esp)
081fcd49 +0x86b:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
081fcd4e +0x870:  jmp    081fd047 <+0xb69>
081fcd53 +0x875:  mov    -0x20(%ebp),%eax
081fcd56 +0x878:  mov    0xe(%eax),%eax
081fcd59 +0x87b:  mov    %eax,0x4(%esp)
081fcd5d +0x87f:  mov    0xc(%ebp),%eax
081fcd60 +0x882:  mov    %eax,(%esp)
081fcd63 +0x885:  call   082300be <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5768>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5768
081fcd68 +0x88a:  jmp    081fd047 <+0xb69>
081fcd6d +0x88f:  mov    -0x20(%ebp),%eax
081fcd70 +0x892:  mov    %eax,0x8(%esp)
081fcd74 +0x896:  mov    0xc(%ebp),%eax
081fcd77 +0x899:  mov    %eax,0x4(%esp)
081fcd7b +0x89d:  mov    0x8(%ebp),%eax
081fcd7e +0x8a0:  mov    %eax,(%esp)
081fcd81 +0x8a3:  call   0858fb4e <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandSetEnchant(CUser*, MSG_DEBUG_COMMAND&)
081fcd86 +0x8a8:  mov    %al,-0x1a(%ebp)
081fcd89 +0x8ab:  jmp    081fd047 <+0xb69>
081fcd8e +0x8b0:  mov    0xc(%ebp),%eax
081fcd91 +0x8b3:  mov    %eax,(%esp)
081fcd94 +0x8b6:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081fcd99 +0x8bb:  test   %eax,%eax
081fcd9b +0x8bd:  setne  %al
081fcd9e +0x8c0:  test   %al,%al
081fcda0 +0x8c2:  je     081fd046 <+0xb68>
081fcda6 +0x8c8:  mov    -0x20(%ebp),%eax
081fcda9 +0x8cb:  mov    0xe(%eax),%eax
081fcdac +0x8ce:  mov    %eax,0x4(%esp)
081fcdb0 +0x8d2:  mov    0xc(%ebp),%eax
081fcdb3 +0x8d5:  mov    %eax,(%esp)
081fcdb6 +0x8d8:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
081fcdbb +0x8dd:  jmp    081fd047 <+0xb69>
081fcdc0 +0x8e2:  mov    -0x20(%ebp),%eax
081fcdc3 +0x8e5:  mov    %eax,0x8(%esp)
081fcdc7 +0x8e9:  mov    0xc(%ebp),%eax
081fcdca +0x8ec:  mov    %eax,0x4(%esp)
081fcdce +0x8f0:  mov    0x8(%ebp),%eax
081fcdd1 +0x8f3:  mov    %eax,(%esp)
081fcdd4 +0x8f6:  call   0858fcc4 <_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandSetBlackCount(CUser*, MSG_DEBUG_COMMAND&)
081fcdd9 +0x8fb:  mov    %al,-0x1a(%ebp)
081fcddc +0x8fe:  jmp    081fd047 <+0xb69>
081fcde1 +0x903:  mov    -0x20(%ebp),%eax
081fcde4 +0x906:  mov    %eax,0x8(%esp)
081fcde8 +0x90a:  mov    0xc(%ebp),%eax
081fcdeb +0x90d:  mov    %eax,0x4(%esp)
081fcdef +0x911:  mov    0x8(%ebp),%eax
081fcdf2 +0x914:  mov    %eax,(%esp)
081fcdf5 +0x917:  call   0858fdc8 <_ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandCargoCapacity(CUser*, MSG_DEBUG_COMMAND&)
081fcdfa +0x91c:  mov    %al,-0x1a(%ebp)
081fcdfd +0x91f:  jmp    081fd047 <+0xb69>
081fce02 +0x924:  mov    -0x20(%ebp),%eax
081fce05 +0x927:  mov    0xe(%eax),%eax
081fce08 +0x92a:  mov    %eax,%edi
081fce0a +0x92c:  mov    0xc(%ebp),%eax
081fce0d +0x92f:  mov    %eax,(%esp)
081fce10 +0x932:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fce15 +0x937:  mov    %eax,%esi
081fce17 +0x939:  mov    0xc(%ebp),%eax
081fce1a +0x93c:  mov    %eax,(%esp)
081fce1d +0x93f:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081fce22 +0x944:  mov    %eax,%ebx
081fce24 +0x946:  mov    0xc(%ebp),%eax
081fce27 +0x949:  mov    %eax,(%esp)
081fce2a +0x94c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081fce2f +0x951:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081fce35 +0x957:  mov    %eax,0x4(%esp)
081fce39 +0x95b:  mov    %edx,(%esp)
081fce3c +0x95e:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081fce41 +0x963:  mov    %edi,0xc(%esp)
081fce45 +0x967:  mov    %esi,0x8(%esp)
081fce49 +0x96b:  mov    %ebx,0x4(%esp)
081fce4d +0x96f:  mov    %eax,(%esp)
081fce50 +0x972:  call   0846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>  ; CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(unsigned int, unsigned int, int)
081fce55 +0x977:  jmp    081fd047 <+0xb69>
081fce5a +0x97c:  mov    -0x20(%ebp),%eax
081fce5d +0x97f:  mov    %eax,0x8(%esp)
081fce61 +0x983:  mov    0xc(%ebp),%eax
081fce64 +0x986:  mov    %eax,0x4(%esp)
081fce68 +0x98a:  mov    0x8(%ebp),%eax
081fce6b +0x98d:  mov    %eax,(%esp)
081fce6e +0x990:  call   0858fe62 <_ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)
081fce73 +0x995:  mov    %al,-0x1a(%ebp)
081fce76 +0x998:  jmp    081fd047 <+0xb69>
081fce7b +0x99d:  mov    -0x20(%ebp),%eax
081fce7e +0x9a0:  mov    %eax,0x8(%esp)
081fce82 +0x9a4:  mov    0xc(%ebp),%eax
081fce85 +0x9a7:  mov    %eax,0x4(%esp)
081fce89 +0x9ab:  mov    0x8(%ebp),%eax
081fce8c +0x9ae:  mov    %eax,(%esp)
081fce8f +0x9b1:  call   0858ffee <_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser*, MSG_DEBUG_COMMAND&)
081fce94 +0x9b6:  mov    %al,-0x1a(%ebp)
081fce97 +0x9b9:  jmp    081fd047 <+0xb69>
081fce9c +0x9be:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fcea1 +0x9c3:  mov    %eax,(%esp)
081fcea4 +0x9c6:  call   086cf356 <_ZN9GameWorld13CancelPowerUpEv>  ; GameWorld::CancelPowerUp()
081fcea9 +0x9cb:  jmp    081fd047 <+0xb69>
081fceae +0x9d0:  mov    -0x20(%ebp),%eax
081fceb1 +0x9d3:  mov    %eax,0x8(%esp)
081fceb5 +0x9d7:  mov    0xc(%ebp),%eax
081fceb8 +0x9da:  mov    %eax,0x4(%esp)
081fcebc +0x9de:  mov    0x8(%ebp),%eax
081fcebf +0x9e1:  mov    %eax,(%esp)
081fcec2 +0x9e4:  call   0858fee8 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)
081fcec7 +0x9e9:  mov    %al,-0x1a(%ebp)
081fceca +0x9ec:  jmp    081fd047 <+0xb69>
081fcecf +0x9f1:  mov    -0x20(%ebp),%eax
081fced2 +0x9f4:  mov    %eax,0x8(%esp)
081fced6 +0x9f8:  mov    0xc(%ebp),%eax
081fced9 +0x9fb:  mov    %eax,0x4(%esp)
081fcedd +0x9ff:  mov    0x8(%ebp),%eax
081fcee0 +0xa02:  mov    %eax,(%esp)
081fcee3 +0xa05:  call   08590092 <_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint(CUser*, MSG_DEBUG_COMMAND&)
081fcee8 +0xa0a:  mov    %al,-0x1a(%ebp)
081fceeb +0xa0d:  jmp    081fd047 <+0xb69>
081fcef0 +0xa12:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fcef5 +0xa17:  mov    %eax,(%esp)
081fcef8 +0xa1a:  call   086d1480 <_ZN9GameWorld19UpdateMiniCraneSeedEv>  ; GameWorld::UpdateMiniCraneSeed()
081fcefd +0xa1f:  jmp    081fd047 <+0xb69>
081fcf02 +0xa24:  mov    0xc(%ebp),%eax
081fcf05 +0xa27:  mov    %eax,0x4(%esp)
081fcf09 +0xa2b:  mov    0x8(%ebp),%eax
081fcf0c +0xa2e:  mov    %eax,(%esp)
081fcf0f +0xa31:  call   0859040e <_ZN23DisPatcher_DebugCommand26_debugCommandPowerWarStartEP5CUser>  ; DisPatcher_DebugCommand::_debugCommandPowerWarStart(CUser*)
081fcf14 +0xa36:  mov    %al,-0x1a(%ebp)
081fcf17 +0xa39:  jmp    081fd047 <+0xb69>
081fcf1c +0xa3e:  mov    0xc(%ebp),%eax
081fcf1f +0xa41:  mov    %eax,0x4(%esp)
081fcf23 +0xa45:  mov    0x8(%ebp),%eax
081fcf26 +0xa48:  mov    %eax,(%esp)
081fcf29 +0xa4b:  call   0859044e <_ZN23DisPatcher_DebugCommand24_debugCommandPowerWarEndEP5CUser>  ; DisPatcher_DebugCommand::_debugCommandPowerWarEnd(CUser*)
081fcf2e +0xa50:  mov    %al,-0x1a(%ebp)
081fcf31 +0xa53:  jmp    081fd047 <+0xb69>
081fcf36 +0xa58:  mov    -0x20(%ebp),%eax
081fcf39 +0xa5b:  mov    %eax,0x8(%esp)
081fcf3d +0xa5f:  mov    0xc(%ebp),%eax
081fcf40 +0xa62:  mov    %eax,0x4(%esp)
081fcf44 +0xa66:  mov    0x8(%ebp),%eax
081fcf47 +0xa69:  mov    %eax,(%esp)
081fcf4a +0xa6c:  call   0859048e <_ZN23DisPatcher_DebugCommand22_debugCommandUserRepelEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandUserRepel(CUser*, MSG_DEBUG_COMMAND&)
081fcf4f +0xa71:  mov    %al,-0x1a(%ebp)
081fcf52 +0xa74:  jmp    081fd047 <+0xb69>
081fcf57 +0xa79:  mov    -0x20(%ebp),%eax
081fcf5a +0xa7c:  mov    %eax,0x8(%esp)
081fcf5e +0xa80:  mov    0xc(%ebp),%eax
081fcf61 +0xa83:  mov    %eax,0x4(%esp)
081fcf65 +0xa87:  mov    0x8(%ebp),%eax
081fcf68 +0xa8a:  mov    %eax,(%esp)
081fcf6b +0xa8d:  call   08590506 <_ZN23DisPatcher_DebugCommand23_debugCommandRequestMidEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandRequestMid(CUser*, MSG_DEBUG_COMMAND&)
081fcf70 +0xa92:  mov    %al,-0x1a(%ebp)
081fcf73 +0xa95:  jmp    081fd047 <+0xb69>
081fcf78 +0xa9a:  mov    -0x20(%ebp),%eax
081fcf7b +0xa9d:  mov    %eax,0x8(%esp)
081fcf7f +0xaa1:  mov    0xc(%ebp),%eax
081fcf82 +0xaa4:  mov    %eax,0x4(%esp)
081fcf86 +0xaa8:  mov    0x8(%ebp),%eax
081fcf89 +0xaab:  mov    %eax,(%esp)
081fcf8c +0xaae:  call   0859058a <_ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)
081fcf91 +0xab3:  mov    %al,-0x1a(%ebp)
081fcf94 +0xab6:  jmp    081fd047 <+0xb69>
081fcf99 +0xabb:  mov    -0x20(%ebp),%eax
081fcf9c +0xabe:  mov    %eax,0x8(%esp)
081fcfa0 +0xac2:  mov    0xc(%ebp),%eax
081fcfa3 +0xac5:  mov    %eax,0x4(%esp)
081fcfa7 +0xac9:  mov    0x8(%ebp),%eax
081fcfaa +0xacc:  mov    %eax,(%esp)
081fcfad +0xacf:  call   085906ac <_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)
081fcfb2 +0xad4:  mov    %al,-0x1a(%ebp)
081fcfb5 +0xad7:  jmp    081fd047 <+0xb69>
081fcfba +0xadc:  mov    -0x20(%ebp),%eax
081fcfbd +0xadf:  mov    %eax,0x8(%esp)
081fcfc1 +0xae3:  mov    0xc(%ebp),%eax
081fcfc4 +0xae6:  mov    %eax,0x4(%esp)
081fcfc8 +0xaea:  mov    0x8(%ebp),%eax
081fcfcb +0xaed:  mov    %eax,(%esp)
081fcfce +0xaf0:  call   08590254 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)
081fcfd3 +0xaf5:  mov    %al,-0x1a(%ebp)
081fcfd6 +0xaf8:  jmp    081fd047 <+0xb69>
081fcfd8 +0xafa:  mov    -0x20(%ebp),%eax
081fcfdb +0xafd:  mov    %eax,0x8(%esp)
081fcfdf +0xb01:  mov    0xc(%ebp),%eax
081fcfe2 +0xb04:  mov    %eax,0x4(%esp)
081fcfe6 +0xb08:  mov    0x8(%ebp),%eax
081fcfe9 +0xb0b:  mov    %eax,(%esp)
081fcfec +0xb0e:  call   0859019e <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND>  ; DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&)
081fcff1 +0xb13:  mov    %al,-0x1a(%ebp)
081fcff4 +0xb16:  jmp    081fd047 <+0xb69>
081fcff6 +0xb18:  mov    0x10(%ebp),%eax
081fcff9 +0xb1b:  mov    %eax,0x8(%esp)
081fcffd +0xb1f:  mov    0xc(%ebp),%eax
081fd000 +0xb22:  mov    %eax,0x4(%esp)
081fd004 +0xb26:  mov    0x8(%ebp),%eax
081fd007 +0xb29:  mov    %eax,(%esp)
081fd00a +0xb2c:  call   085908ba <_ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf>  ; DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser*, PacketBuf&)
081fd00f +0xb31:  mov    %al,-0x1a(%ebp)
081fd012 +0xb34:  jmp    081fd047 <+0xb69>
081fd014 +0xb36:  movl   $0x0,0xc(%esp)
081fd01c +0xb3e:  movl   $0x0,0x8(%esp)
081fd024 +0xb46:  movl   $&_ZZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd02c +0xb4e:  movl   $0x8da2,(%esp)
081fd033 +0xb55:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd038 +0xb5a:  jmp    081fd09c <+0xbbe>
081fd03a +0xb5c:  nop
081fd03b +0xb5d:  jmp    081fd047 <+0xb69>
081fd03d +0xb5f:  nop
081fd03e +0xb60:  jmp    081fd047 <+0xb69>
081fd040 +0xb62:  nop
081fd041 +0xb63:  jmp    081fd047 <+0xb69>
081fd043 +0xb65:  nop
081fd044 +0xb66:  jmp    081fd047 <+0xb69>
081fd046 +0xb68:  nop
081fd047 +0xb69:  cmpb   $0x0,-0x1a(%ebp)
081fd04b +0xb6d:  je     081fd097 <+0xbb9>
081fd04d +0xb6f:  mov    -0x20(%ebp),%eax
081fd050 +0xb72:  movzbl 0xd(%eax),%eax
081fd054 +0xb76:  movzbl %al,%eax
081fd057 +0xb79:  mov    %eax,0xc(%esp)
081fd05b +0xb7d:  movl   $0x41,0x8(%esp)
081fd063 +0xb85:  movl   $0x1,0x4(%esp)
081fd06b +0xb8d:  mov    0xc(%ebp),%eax
081fd06e +0xb90:  mov    %eax,(%esp)
081fd071 +0xb93:  call   0867c1d4 <_ZN5CUser13SendCmdPacketENS_11eSendTargetE14ENUM_CMDPACKETi>  ; CUser::SendCmdPacket(CUser::eSendTarget, ENUM_CMDPACKET, int)
081fd076 +0xb98:  mov    -0x20(%ebp),%eax
081fd079 +0xb9b:  movzbl 0xd(%eax),%eax
081fd07d +0xb9f:  test   %al,%al
081fd07f +0xba1:  jne    081fd097 <+0xbb9>
081fd081 +0xba3:  mov    0xc(%ebp),%eax
081fd084 +0xba6:  mov    %eax,(%esp)
081fd087 +0xba9:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
081fd08c +0xbae:  mov    0xc(%ebp),%eax
081fd08f +0xbb1:  mov    %eax,(%esp)
081fd092 +0xbb4:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
081fd097 +0xbb9:  mov    $0x0,%eax
081fd09c +0xbbe:  add    $0x8c,%esp
081fd0a2 +0xbc4:  pop    %ebx
081fd0a3 +0xbc5:  pop    %esi
081fd0a4 +0xbc6:  pop    %edi
081fd0a5 +0xbc7:  pop    %ebp
081fd0a6 +0xbc8:  ret
081fd0a7 +0xbc9:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::dispatch_sig @ 0x81fc4de

/* DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DebugCommand::dispatch_sig
          (DisPatcher_DebugCommand *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_DEBUG_COMMAND MVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  CGameManager *this_00;
  CCreatureMgr *pCVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  uint uVar10;
  CGuildServerProxy *this_01;
  GameWorld *this_02;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MSG_DEBUG_COMMAND *local_24;
  char local_1e;
  char local_1d;
  
  local_24 = (MSG_DEBUG_COMMAND *)PacketBuf::get_packet(param_2,0);
  if (local_24[0xd] != (MSG_DEBUG_COMMAND)0x0) {
    CUser::get_acc_id(param_1);
    cVar3 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
    if (cVar3 == '\0') {
      bVar2 = false;
      goto LAB_081fc538;
    }
  }
  bVar2 = true;
LAB_081fc538:
  if (bVar2) {
    MVar1 = local_24[0xd];
    uVar4 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_84,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                       0x8b65,0);
    cMyTrace::operator()(local_84,"GM(%d) trying to command(%d)",uVar4,(uint)(byte)MVar1);
    iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar5 == 0) {
      uVar4 = LineFunc(0x8b70,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
    else {
      uVar6 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar6,0);
      cMyTrace::cMyTrace(local_64,
                         "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                         0x8b72,0);
      cMyTrace::operator()(local_64,"GM Command : %s",uVar4);
      local_1e = '\x01';
      local_1d = '\0';
      CUser::get_acc_id(param_1);
      cVar3 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
      if (cVar3 == '\x01') {
        if (local_1d == '\x01') {
          MVar1 = local_24[0xd];
          cMyTrace::cMyTrace(local_44,
                             "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x8bb6,0);
          cMyTrace::operator()(local_44,"GM Pass Complete! Command(%d)",(uint)(byte)MVar1);
          switch(local_24[0xd]) {
          case (MSG_DEBUG_COMMAND)0x0:
            CUser::get_acc_id(param_1);
            iVar5 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (iVar5 < 1) {
              uVar4 = LineFunc(0x8bcb,
                               "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar4;
            }
            CUser::get_acc_id(param_1);
            CGM_Manager::TurnGmMode(GlobalData::s_GM_Manager);
            CUser::get_acc_id(param_1);
            cVar3 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
            if (cVar3 == '\x01') {
              CUser::SetGameMasterMode(param_1,true);
              local_1e = _debugCommandOn((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            }
            else {
              uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              cMyTrace::cMyTrace(local_34,
                                 "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8bd0,0);
              cMyTrace::operator()(local_34,"%d:\'%s\' GM Mode OFF.",uVar9,uVar4);
              local_1e = 1;
              local_24[0xd] = (MSG_DEBUG_COMMAND)0x2a;
              local_1e = _debugCommandOff((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x1:
          case (MSG_DEBUG_COMMAND)0x2:
            local_1e = _debugCommandLevelUpDown(this,param_1,-1);
            break;
          case (MSG_DEBUG_COMMAND)0x3:
            local_1e = _debugCommandSetGrowType
                                 (this,param_1,(uint)(byte)local_24[0xe],(uint)(byte)local_24[0xf]);
            break;
          case (MSG_DEBUG_COMMAND)0x4:
            local_1e = _debugCommandClearSkill((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x5:
            local_1e = _debugCommandSetSkill
                                 (this,param_1,(uint)(byte)local_24[0xe],(uint)(byte)local_24[0xf]);
            break;
          case (MSG_DEBUG_COMMAND)0x6:
            local_1e = _debugCommandAddItem
                                 (this,param_1,*(ulong *)(local_24 + 0xe),*(int *)(local_24 + 0x12))
            ;
            break;
          case (MSG_DEBUG_COMMAND)0x7:
            local_1e = _debugCommandSetLevel(this,param_1,(uint)(byte)local_24[0xe]);
            break;
          case (MSG_DEBUG_COMMAND)0x8:
            local_1e = _debugCommandPVPRankSet(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x9:
            CUser::SetGMUpgradeMode(param_1,1);
            break;
          case (MSG_DEBUG_COMMAND)0xa:
            CUser::SetGMUpgradeMode(param_1,2);
            break;
          case (MSG_DEBUG_COMMAND)0xb:
            CUser::SetGMUpgradeMode(param_1,0);
            break;
          case (MSG_DEBUG_COMMAND)0xc:
            local_1e = _debugCommandUserRepel(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0xd:
            iVar5 = *(int *)(local_24 + 0xe);
            this_00 = (CGameManager *)G_CGameManager();
            CGameManager::WarRoomCountManageTest(this_00,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0xe:
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar8);
            cVar3 = user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(pCVar7);
            if (cVar3 != '\x01') {
              iVar5 = *(int *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
              user_creature::CCreatureMgr::GainExp(pCVar7,iVar5);
            }
            break;
          case (MSG_DEBUG_COMMAND)0xf:
            iVar5 = *(int *)(local_24 + 0xe);
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
            user_creature::CCreatureMgr::SetStomach(pCVar7,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0x10:
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
            user_creature::CCreatureMgr::Evolute(pCVar7,0,0,true);
            break;
          case (MSG_DEBUG_COMMAND)0x11:
            local_1e = _debugCommandAddAvatar(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x12:
            CBattle_Field::SetEnableHellDungeon(true);
            break;
          case (MSG_DEBUG_COMMAND)0x13:
            uVar6 = CUser::get_acc_id(param_1);
            local_1e = WongWork::CGMAccounts::appendGM(GlobalData::s_pGMAccounts_,uVar6);
            break;
          case (MSG_DEBUG_COMMAND)0x14:
            uVar6 = CUser::get_acc_id(param_1);
            local_1e = WongWork::CGMAccounts::removeGM(GlobalData::s_pGMAccounts_,uVar6);
            break;
          case (MSG_DEBUG_COMMAND)0x15:
            local_1e = _debugCommandInvisible((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x16:
            local_1e = _debugCommandVisible((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x17:
            local_1e = _debugCommandRequestMid(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x18:
            CUserCharacInfo::SetCurCharacLuckPoint
                      ((CUserCharacInfo *)param_1,*(int *)(local_24 + 0xe));
            CUserCharacInfo::enableSaveCharacStat((CUserCharacInfo *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x19:
            CUser::SetAge(param_1,*(uint *)(local_24 + 0xe));
            break;
          case (MSG_DEBUG_COMMAND)0x1a:
            local_1e = _debugCommandSetEnchant(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x1b:
            iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
            if (iVar5 != 0) {
              expert_job::CExpertJob::IncreaseExpertJobExp(param_1,*(int *)(local_24 + 0xe));
            }
            break;
          case (MSG_DEBUG_COMMAND)0x1c:
            local_1e = _debugCommandSetUserDefine((CUser *)this,(PacketBuf *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1d:
            local_1e = _debugCommandGuildLevelUp(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1e:
            local_1e = _debugCommandPowerWarStart(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1f:
            local_1e = _debugCommandPowerWarEnd(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x20:
            local_1e = _debugCommandPowerUpOn((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x21:
            this_02 = (GameWorld *)G_GameWorld();
            GameWorld::CancelPowerUp(this_02);
            break;
          case (MSG_DEBUG_COMMAND)0x22:
            local_1e = _debugCommandUserPowerwarPointUp(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x23:
            local_1e = _debugCommandInitUserPowerwarPoint
                                 ((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x24:
            local_1e = _debugCommandPowerwarPointUp(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x25:
            local_1e = _debugCommandSetBlackCount(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x26:
            local_1e = _debugCommandCargoCapacity(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x27:
            iVar5 = *(int *)(local_24 + 0xe);
            uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
            uVar4 = CUser::GetServerGroup(param_1);
            this_01 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(this_01,uVar10,uVar6,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0x28:
            if (*(int *)(local_24 + 0xe) < 1) {
              if (*(int *)(local_24 + 0xe) == 0) {
                CUser::RecoverFatigue(param_1,0);
                CUser::SendFatigue(param_1);
              }
            }
            else {
              CUser::FatigueUp(param_1,*(int *)(local_24 + 0xe));
              CUser::SendFatigue(param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x29:
            if (0 < *(int *)(local_24 + 0xe)) {
              uVar6 = *(uint *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::UseUpCoin(pCVar8,uVar6);
              CUser::SendCoin(param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x2a:
            local_1e = _debugCommandOff((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x2b:
            local_1e = _debugCommandClearAvtInven((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x2c:
            local_1e = _debugCommandClearInven((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          default:
            uVar4 = LineFunc(0x8da2,
                             "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          case (MSG_DEBUG_COMMAND)0x2f:
            if (*(int *)(local_24 + 0xe) != 0) {
              uVar6 = *(uint *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::set_money(pCVar8,uVar6);
              uVar4 = *(undefined4 *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar9 = CInventory::get_money(pCVar8);
              cUserHistoryLog::MoneyAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar9,uVar4,6);
              CUser::SendUpdateItemList(param_1,1,0,0);
              local_1e = '\x01';
            }
            break;
          case (MSG_DEBUG_COMMAND)0x30:
            G_GameWorld();
            GameWorld::UpdateMiniCraneSeed();
          }
          if ((local_1e != '\0') &&
             (CUser::SendCmdPacket(param_1,1,0x41,local_24[0xd]),
             local_24[0xd] == (MSG_DEBUG_COMMAND)0x0)) {
            CUser::ReCalcChattingEmoticon(param_1);
            CUser::SendChattingEmoticon(param_1);
          }
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = CUser::get_acc_id(param_1);
        cMyTrace::cMyTrace(local_54,
                           "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                           0x8b90,5);
        cMyTrace::operator()(local_54,"Illegal GM Command : %d",uVar4);
        uVar4 = LineFunc(0x8b91,
                         "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_74,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                       0x8b6a,5);
    cMyTrace::operator()(local_74,"Illegal GM Command : %d",uVar4);
    uVar4 = LineFunc(0x8b6b,"virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar4;
}
```
