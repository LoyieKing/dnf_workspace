# process

`_ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CreateCharac` | `0x081c041e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c041e  _ZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c041e, 0x081c07e7]
081c041e +0x000:  push   %ebp
081c041f +0x001:  mov    %esp,%ebp
081c0421 +0x003:  push   %edi
081c0422 +0x004:  push   %esi
081c0423 +0x005:  push   %ebx
081c0424 +0x006:  sub    $0x3c,%esp
081c0427 +0x009:  mov    0x14(%ebp),%eax
081c042a +0x00c:  mov    %eax,-0x28(%ebp)
081c042d +0x00f:  mov    0x10(%ebp),%eax
081c0430 +0x012:  mov    %eax,0x8(%esp)
081c0434 +0x016:  mov    0xc(%ebp),%eax
081c0437 +0x019:  mov    %eax,0x4(%esp)
081c043b +0x01d:  mov    0x8(%ebp),%eax
081c043e +0x020:  mov    %eax,(%esp)
081c0441 +0x023:  call   081c0830 <_ZN23DisPatcher_CreateCharac11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_CreateCharac::check_error(CUser*, MSG_BASE&)
081c0446 +0x028:  mov    %eax,%edx
081c0448 +0x02a:  mov    -0x28(%ebp),%eax
081c044b +0x02d:  mov    %edx,0x4(%eax)
081c044e +0x030:  mov    -0x28(%ebp),%eax
081c0451 +0x033:  mov    0x4(%eax),%eax
081c0454 +0x036:  test   %eax,%eax
081c0456 +0x038:  jle    081c0462 <+0x44>
081c0458 +0x03a:  mov    $0x0,%ebx
081c045d +0x03f:  jmp    081c07de <+0x3c0>
081c0462 +0x044:  mov    -0x28(%ebp),%eax
081c0465 +0x047:  mov    0x4(%eax),%eax
081c0468 +0x04a:  test   %eax,%eax
081c046a +0x04c:  jns    081c04a0 <+0x82>
081c046c +0x04e:  mov    0xc(%ebp),%eax
081c046f +0x051:  mov    %eax,(%esp)
081c0472 +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c0477 +0x059:  mov    -0x28(%ebp),%edx
081c047a +0x05c:  mov    0x4(%edx),%edx
081c047d +0x05f:  mov    %eax,0xc(%esp)
081c0481 +0x063:  mov    %edx,0x8(%esp)
081c0485 +0x067:  movl   $&_ZZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c048d +0x06f:  movl   $0x79c,(%esp)
081c0494 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0499 +0x07b:  mov    %eax,%ebx
081c049b +0x07d:  jmp    081c07de <+0x3c0>
081c04a0 +0x082:  mov    0xc(%ebp),%eax
081c04a3 +0x085:  mov    %eax,(%esp)
081c04a6 +0x088:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c04ab +0x08d:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081c04b1 +0x093:  mov    %eax,0x4(%esp)
081c04b5 +0x097:  mov    %edx,(%esp)
081c04b8 +0x09a:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081c04bd +0x09f:  movzbl %al,%ebx
081c04c0 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c04c5 +0x0a7:  mov    %ebx,0x4(%esp)
081c04c9 +0x0ab:  mov    %eax,(%esp)
081c04cc +0x0ae:  call   0822b668 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd12>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd12
081c04d1 +0x0b3:  mov    0x10(%ebp),%eax
081c04d4 +0x0b6:  mov    %eax,-0x24(%ebp)
081c04d7 +0x0b9:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081c04dc +0x0be:  movl   $0x7ab,0x8(%esp)
081c04e4 +0x0c6:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c04ec +0x0ce:  mov    %eax,(%esp)
081c04ef +0x0d1:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081c04f4 +0x0d6:  movl   $0x1,0x8(%esp)
081c04fc +0x0de:  mov    %eax,0x4(%esp)
081c0500 +0x0e2:  lea    -0x30(%ebp),%eax
081c0503 +0x0e5:  mov    %eax,(%esp)
081c0506 +0x0e8:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c050b +0x0ed:  lea    -0x30(%ebp),%eax
081c050e +0x0f0:  mov    %eax,(%esp)
081c0511 +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c0516 +0x0f8:  movl   $0x4,0x4(%esp)
081c051e +0x100:  mov    %eax,(%esp)
081c0521 +0x103:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c0526 +0x108:  mov    0xc(%ebp),%eax
081c0529 +0x10b:  mov    %eax,(%esp)
081c052c +0x10e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c0531 +0x113:  mov    %eax,%ebx
081c0533 +0x115:  lea    -0x30(%ebp),%eax
081c0536 +0x118:  mov    %eax,(%esp)
081c0539 +0x11b:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c053e +0x120:  mov    %ebx,0x4(%esp)
081c0542 +0x124:  mov    %eax,(%esp)
081c0545 +0x127:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c054a +0x12c:  lea    -0x30(%ebp),%eax
081c054d +0x12f:  mov    %eax,(%esp)
081c0550 +0x132:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c0555 +0x137:  mov    %eax,(%esp)
081c0558 +0x13a:  call   08236ccc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc376>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc376
081c055d +0x13f:  mov    %eax,-0x20(%ebp)
081c0560 +0x142:  movl   $0x5354,0x8(%esp)
081c0568 +0x14a:  movl   $0x0,0x4(%esp)
081c0570 +0x152:  mov    -0x20(%ebp),%eax
081c0573 +0x155:  mov    %eax,(%esp)
081c0576 +0x158:  call   0807dcc0 <_init+0x5b8>
081c057b +0x15d:  mov    0xc(%ebp),%eax
081c057e +0x160:  mov    %eax,(%esp)
081c0581 +0x163:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c0586 +0x168:  mov    -0x20(%ebp),%edx
081c0589 +0x16b:  mov    %eax,(%edx)
081c058b +0x16d:  mov    -0x24(%ebp),%eax
081c058e +0x170:  movzbl 0xd(%eax),%edx
081c0592 +0x174:  mov    -0x20(%ebp),%eax
081c0595 +0x177:  mov    %dl,0x22(%eax)
081c0598 +0x17a:  mov    -0x24(%ebp),%eax
081c059b +0x17d:  lea    0x12(%eax),%edx
081c059e +0x180:  mov    -0x20(%ebp),%eax
081c05a1 +0x183:  add    $0x4,%eax
081c05a4 +0x186:  movl   $0x1e,0x8(%esp)
081c05ac +0x18e:  mov    %edx,0x4(%esp)
081c05b0 +0x192:  mov    %eax,(%esp)
081c05b3 +0x195:  call   0807d8d0 <_init+0x1c8>
081c05b8 +0x19a:  mov    -0x24(%ebp),%eax
081c05bb +0x19d:  movzbl 0x2f(%eax),%edx
081c05bf +0x1a1:  mov    -0x20(%ebp),%eax
081c05c2 +0x1a4:  mov    %dl,0x23(%eax)
081c05c5 +0x1a7:  mov    -0x20(%ebp),%eax
081c05c8 +0x1aa:  movzbl 0x23(%eax),%eax
081c05cc +0x1ae:  test   %al,%al
081c05ce +0x1b0:  je     081c05e6 <+0x1c8>
081c05d0 +0x1b2:  mov    0xc(%ebp),%eax
081c05d3 +0x1b5:  mov    %eax,(%esp)
081c05d6 +0x1b8:  call   0822f2f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49a2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49a2
081c05db +0x1bd:  test   %al,%al
081c05dd +0x1bf:  je     081c05e6 <+0x1c8>
081c05df +0x1c1:  mov    $0x1,%eax
081c05e4 +0x1c6:  jmp    081c05eb <+0x1cd>
081c05e6 +0x1c8:  mov    $0x0,%eax
081c05eb +0x1cd:  test   %al,%al
081c05ed +0x1cf:  je     081c0603 <+0x1e5>
081c05ef +0x1d1:  mov    -0x28(%ebp),%eax
081c05f2 +0x1d4:  movl   $0x14,0x4(%eax)
081c05f9 +0x1db:  mov    $0x0,%ebx
081c05fe +0x1e0:  jmp    081c07d3 <+0x3b5>
081c0603 +0x1e5:  mov    0xc(%ebp),%eax
081c0606 +0x1e8:  mov    %eax,(%esp)
081c0609 +0x1eb:  call   0822f2f8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49a2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49a2
081c060e +0x1f0:  mov    -0x20(%ebp),%edx
081c0611 +0x1f3:  mov    %al,0x24(%edx)
081c0614 +0x1f6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c0619 +0x1fb:  mov    0x14(%eax),%ecx
081c061c +0x1fe:  mov    -0x24(%ebp),%eax
081c061f +0x201:  movzbl 0xd(%eax),%eax
081c0623 +0x205:  movsbl %al,%edx
081c0626 +0x208:  mov    -0x20(%ebp),%eax
081c0629 +0x20b:  imul   $0x7dc,%edx,%edx
081c062f +0x211:  add    $0x26,%eax
081c0632 +0x214:  lea    (%ecx,%edx,1),%edx
081c0635 +0x217:  movzwl (%edx),%ecx
081c0638 +0x21a:  mov    %cx,(%eax)
081c063b +0x21d:  add    $0x2,%eax
081c063e +0x220:  add    $0x2,%edx
081c0641 +0x223:  mov    $0x14,%ecx
081c0646 +0x228:  mov    %eax,%edi
081c0648 +0x22a:  mov    %edx,%esi
081c064a +0x22c:  rep movsl %ds:(%esi),%es:(%edi)
081c064c +0x22e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c0651 +0x233:  mov    0x14(%eax),%edx
081c0654 +0x236:  mov    -0x24(%ebp),%eax
081c0657 +0x239:  movzbl 0xd(%eax),%eax
081c065b +0x23d:  movsbl %al,%eax
081c065e +0x240:  imul   $0x7dc,%eax,%eax
081c0664 +0x246:  lea    (%edx,%eax,1),%eax
081c0667 +0x249:  add    $0x7d0,%eax
081c066c +0x24e:  movzbl 0x4(%eax),%edx
081c0670 +0x252:  mov    -0x20(%ebp),%eax
081c0673 +0x255:  mov    %dl,0x78(%eax)
081c0676 +0x258:  mov    -0x20(%ebp),%eax
081c0679 +0x25b:  movzbl 0x22(%eax),%eax
081c067d +0x25f:  movsbl %al,%eax
081c0680 +0x262:  mov    -0x20(%ebp),%edx
081c0683 +0x265:  add    $0x79,%edx
081c0686 +0x268:  mov    %eax,0x4(%esp)
081c068a +0x26c:  mov    %edx,(%esp)
081c068d +0x26f:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
081c0692 +0x274:  mov    -0x20(%ebp),%eax
081c0695 +0x277:  movzbl 0x22(%eax),%eax
081c0699 +0x27b:  movsbl %al,%eax
081c069c +0x27e:  mov    -0x20(%ebp),%edx
081c069f +0x281:  add    $0x211,%edx
081c06a5 +0x287:  mov    %eax,0x4(%esp)
081c06a9 +0x28b:  mov    %edx,(%esp)
081c06ac +0x28e:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
081c06b1 +0x293:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c06b6 +0x298:  movl   $0x1,0x4(%esp)
081c06be +0x2a0:  mov    %eax,(%esp)
081c06c1 +0x2a3:  call   08360cb8 <_ZNK12CDataManager14GetSpAtLevelUpEi>  ; CDataManager::GetSpAtLevelUp(int) const
081c06c6 +0x2a8:  mov    -0x20(%ebp),%edx
081c06c9 +0x2ab:  mov    %eax,0x5350(%edx)
081c06cf +0x2b1:  mov    -0x20(%ebp),%eax
081c06d2 +0x2b4:  mov    %eax,0x8(%esp)
081c06d6 +0x2b8:  mov    0xc(%ebp),%eax
081c06d9 +0x2bb:  mov    %eax,0x4(%esp)
081c06dd +0x2bf:  mov    0x8(%ebp),%eax
081c06e0 +0x2c2:  mov    %eax,(%esp)
081c06e3 +0x2c5:  call   081c0a1a <_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC>  ; DisPatcher_CreateCharac::makeGift(CUser*, SIG_CREATE_CHARAC*)
081c06e8 +0x2ca:  mov    0xc(%ebp),%eax
081c06eb +0x2cd:  mov    %eax,(%esp)
081c06ee +0x2d0:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
081c06f3 +0x2d5:  mov    %eax,-0x1c(%ebp)
081c06f6 +0x2d8:  mov    -0x1c(%ebp),%eax
081c06f9 +0x2db:  mov    %eax,(%esp)
081c06fc +0x2de:  call   0807e3b0 <_init+0xca8>
081c0701 +0x2e3:  cmp    $0xc,%eax
081c0704 +0x2e6:  jbe    081c072c <+0x30e>
081c0706 +0x2e8:  mov    -0x1c(%ebp),%eax
081c0709 +0x2eb:  add    $0x6,%eax
081c070c +0x2ee:  movzbl (%eax),%eax
081c070f +0x2f1:  cmp    $0x32,%al
081c0711 +0x2f3:  je     081c0720 <+0x302>
081c0713 +0x2f5:  mov    -0x1c(%ebp),%eax
081c0716 +0x2f8:  add    $0x6,%eax
081c0719 +0x2fb:  movzbl (%eax),%eax
081c071c +0x2fe:  cmp    $0x34,%al
081c071e +0x300:  jne    081c072c <+0x30e>
081c0720 +0x302:  mov    -0x20(%ebp),%eax
081c0723 +0x305:  movb   $0x0,0x534c(%eax)
081c072a +0x30c:  jmp    081c0736 <+0x318>
081c072c +0x30e:  mov    -0x20(%ebp),%eax
081c072f +0x311:  movb   $0x1,0x534c(%eax)
081c0736 +0x318:  mov    -0x20(%ebp),%eax
081c0739 +0x31b:  movzbl 0x22(%eax),%eax
081c073d +0x31f:  cmp    $0x9,%al
081c073f +0x321:  jne    081c0754 <+0x336>
081c0741 +0x323:  movl   $0x1,0x4(%esp)
081c0749 +0x32b:  mov    0xc(%ebp),%eax
081c074c +0x32e:  mov    %eax,(%esp)
081c074f +0x331:  call   08692f0a <_ZN5CUser16setComboSkillSetEb>  ; CUser::setComboSkillSet(bool)
081c0754 +0x336:  mov    0xc(%ebp),%eax
081c0757 +0x339:  mov    %eax,(%esp)
081c075a +0x33c:  call   0864aa88 <_ZN5CUser16lockCreateCharacEv>  ; CUser::lockCreateCharac()
081c075f +0x341:  xor    $0x1,%eax
081c0762 +0x344:  test   %al,%al
081c0764 +0x346:  je     081c0795 <+0x377>
081c0766 +0x348:  mov    0xc(%ebp),%eax
081c0769 +0x34b:  mov    %eax,(%esp)
081c076c +0x34e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c0771 +0x353:  mov    %eax,0xc(%esp)
081c0775 +0x357:  movl   $0x0,0x8(%esp)
081c077d +0x35f:  movl   $&_ZZN23DisPatcher_CreateCharac7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c0785 +0x367:  movl   $0x81f,(%esp)
081c078c +0x36e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0791 +0x373:  mov    %eax,%ebx
081c0793 +0x375:  jmp    081c07d3 <+0x3b5>
081c0795 +0x377:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c079a +0x37c:  lea    -0x30(%ebp),%edx
081c079d +0x37f:  mov    %edx,0x8(%esp)
081c07a1 +0x383:  movl   $0x2,0x4(%esp)
081c07a9 +0x38b:  mov    %eax,(%esp)
081c07ac +0x38e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c07b1 +0x393:  mov    $0x0,%ebx
081c07b6 +0x398:  jmp    081c07d3 <+0x3b5>
081c07b8 +0x39a:  mov    %edx,%ebx
081c07ba +0x39c:  mov    %eax,%esi
081c07bc +0x39e:  lea    -0x30(%ebp),%eax
081c07bf +0x3a1:  mov    %eax,(%esp)
081c07c2 +0x3a4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c07c7 +0x3a9:  mov    %esi,%eax
081c07c9 +0x3ab:  mov    %ebx,%edx
081c07cb +0x3ad:  mov    %eax,(%esp)
081c07ce +0x3b0:  call   08ae3750 <_Unwind_Resume>
081c07d3 +0x3b5:  lea    -0x30(%ebp),%eax
081c07d6 +0x3b8:  mov    %eax,(%esp)
081c07d9 +0x3bb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c07de +0x3c0:  mov    %ebx,%eax
081c07e0 +0x3c2:  add    $0x3c,%esp
081c07e3 +0x3c5:  pop    %ebx
081c07e4 +0x3c6:  pop    %esi
081c07e5 +0x3c7:  pop    %edi
081c07e6 +0x3c8:  pop    %ebp
081c07e7 +0x3c9:  ret
```

## 反编译 C

```c
// DisPatcher_CreateCharac::process @ 0x81c041e

/* DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_CreateCharac::process
          (DisPatcher_CreateCharac *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  char cVar3;
  SIG_CREATE_CHARAC SVar4;
  undefined4 uVar5;
  uint uVar6;
  CDataManager *pCVar7;
  Stream *pSVar8;
  CStreamGuard *pCVar9;
  int iVar10;
  size_t sVar11;
  undefined4 *puVar12;
  SIG_CREATE_CHARAC *pSVar13;
  byte bVar14;
  CStreamGuard local_34 [8];
  ParamBase *local_2c;
  MSG_BASE *local_28;
  SIG_CREATE_CHARAC *local_24;
  char *local_20;
  
  bVar14 = 0;
  local_2c = param_3;
  uVar5 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_2c + 4) = uVar5;
  if (0 < *(int *)(local_2c + 4)) {
    return 0;
  }
  if (-1 < *(int *)(local_2c + 4)) {
    uVar6 = CUser::get_acc_id(param_1);
    bVar2 = (bool)WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
    pCVar7 = (CDataManager *)G_CDataManager();
    CDataManager::setCharacNameFilterPass(pCVar7,bVar2);
    local_28 = param_2;
    pSVar8 = (Stream *)
             BigStreamPool::Acquire
                       (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x7ab);
    CStreamGuard::CStreamGuard(local_34,pSVar8,true);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 081c0521 to 081c07b0 has its CatchHandler @ 081c07b8 */
    CStreamGuard::operator<<(pCVar9,4);
    iVar10 = CUser::GetUID(param_1);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar9,iVar10);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_24 = CStreamGuard::GetInBuffer<SIG_CREATE_CHARAC>(pCVar9);
    memset(local_24,0,0x5354);
    uVar5 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_24 = uVar5;
    local_24[0x22] = *(SIG_CREATE_CHARAC *)(local_28 + 0xd);
    strncpy((char *)(local_24 + 4),(char *)(local_28 + 0x12),0x1e);
    local_24[0x23] = *(SIG_CREATE_CHARAC *)(local_28 + 0x2f);
    if ((local_24[0x23] == (SIG_CREATE_CHARAC)0x0) ||
       (cVar3 = CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_1),
       cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)(local_2c + 4) = 0x14;
      uVar5 = 0;
    }
    else {
      SVar4 = (SIG_CREATE_CHARAC)
              CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_1);
      local_24[0x24] = SVar4;
      iVar10 = G_CDataManager();
      puVar1 = (undefined2 *)(*(int *)(iVar10 + 0x14) + (char)local_28[0xd] * 0x7dc);
      *(undefined2 *)(local_24 + 0x26) = *puVar1;
      puVar12 = (undefined4 *)(puVar1 + 1);
      pSVar13 = local_24 + 0x28;
      for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined4 *)pSVar13 = *puVar12;
        puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        pSVar13 = pSVar13 + (uint)bVar14 * -8 + 4;
      }
      iVar10 = G_CDataManager();
      local_24[0x78] =
           *(SIG_CREATE_CHARAC *)(*(int *)(iVar10 + 0x14) + (char)local_28[0xd] * 0x7dc + 0x7d4);
      addSkillOnCreateCharacter((_Mastered_skill *)(local_24 + 0x79),(int)(char)local_24[0x22]);
      addSkillOnCreateCharacter((_Mastered_skill *)(local_24 + 0x211),(int)(char)local_24[0x22]);
      pCVar7 = (CDataManager *)G_CDataManager();
      uVar5 = CDataManager::GetSpAtLevelUp(pCVar7,1);
      *(undefined4 *)(local_24 + 0x5350) = uVar5;
      makeGift(this,param_1,local_24);
      local_20 = (char *)CUser::GetSsnString(param_1);
      sVar11 = strlen(local_20);
      if ((sVar11 < 0xd) || ((local_20[6] != '2' && (local_20[6] != '4')))) {
        local_24[0x534c] = (SIG_CREATE_CHARAC)0x1;
      }
      else {
        local_24[0x534c] = (SIG_CREATE_CHARAC)0x0;
      }
      if (local_24[0x22] == (SIG_CREATE_CHARAC)0x9) {
        CUser::setComboSkillSet(param_1,true);
      }
      cVar3 = CUser::lockCreateCharac(param_1);
      if (cVar3 == '\x01') {
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_34);
        uVar5 = 0;
      }
      else {
        uVar6 = CUser::get_acc_id(param_1);
        uVar5 = LineFunc(0x81f,
                         "virtual int DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar6);
      }
    }
    CStreamGuard::~CStreamGuard(local_34);
    return uVar5;
  }
  uVar6 = CUser::get_acc_id(param_1);
  uVar5 = LineFunc(0x79c,
                   "virtual int DisPatcher_CreateCharac::process(CUser*, MSG_BASE&, ParamBase&)",
                   *(int *)(local_2c + 4),uVar6);
  return uVar5;
}
```
