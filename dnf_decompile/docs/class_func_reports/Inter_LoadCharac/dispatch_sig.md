# dispatch_sig

`_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci`

`Inter_LoadCharac::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCharac` | `0x084c3398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c3398  _ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci
#           Inter_LoadCharac::dispatch_sig(CUser*, char*, int)
# range [0x084c3398, 0x084c3da4]
084c3398 +0x000:  push   %ebp
084c3399 +0x001:  mov    %esp,%ebp
084c339b +0x003:  push   %edi
084c339c +0x004:  push   %esi
084c339d +0x005:  push   %ebx
084c339e +0x006:  sub    $0x17c,%esp
084c33a4 +0x00c:  mov    0xc(%ebp),%eax
084c33a7 +0x00f:  mov    %eax,(%esp)
084c33aa +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c33af +0x017:  test   %eax,%eax
084c33b1 +0x019:  sete   %al
084c33b4 +0x01c:  test   %al,%al
084c33b6 +0x01e:  je     084c33c2 <+0x2a>
084c33b8 +0x020:  mov    $0x13dd,%ebx
084c33bd +0x025:  jmp    084c3d98 <+0xa00>
084c33c2 +0x02a:  mov    0x10(%ebp),%eax
084c33c5 +0x02d:  mov    %eax,-0x50(%ebp)
084c33c8 +0x030:  mov    -0x50(%ebp),%eax
084c33cb +0x033:  mov    0x8(%eax),%eax
084c33ce +0x036:  test   %eax,%eax
084c33d0 +0x038:  je     084c33dc <+0x44>
084c33d2 +0x03a:  mov    $0x13e3,%ebx
084c33d7 +0x03f:  jmp    084c3d98 <+0xa00>
084c33dc +0x044:  mov    0xc(%ebp),%eax
084c33df +0x047:  mov    %eax,(%esp)
084c33e2 +0x04a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c33e7 +0x04f:  mov    -0x50(%ebp),%edx
084c33ea +0x052:  mov    0x140(%edx),%edx
084c33f0 +0x058:  cmp    %edx,%eax
084c33f2 +0x05a:  setne  %al
084c33f5 +0x05d:  test   %al,%al
084c33f7 +0x05f:  je     084c352d <+0x195>
084c33fd +0x065:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084c3402 +0x06a:  movl   $0x13f9,0x8(%esp)
084c340a +0x072:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c3412 +0x07a:  mov    %eax,(%esp)
084c3415 +0x07d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084c341a +0x082:  movl   $0x1,0x8(%esp)
084c3422 +0x08a:  mov    %eax,0x4(%esp)
084c3426 +0x08e:  lea    -0x90(%ebp),%eax
084c342c +0x094:  mov    %eax,(%esp)
084c342f +0x097:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084c3434 +0x09c:  lea    -0x90(%ebp),%eax
084c343a +0x0a2:  mov    %eax,(%esp)
084c343d +0x0a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c3442 +0x0aa:  movl   $0x9d,0x4(%esp)
084c344a +0x0b2:  mov    %eax,(%esp)
084c344d +0x0b5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c3452 +0x0ba:  lea    -0x90(%ebp),%eax
084c3458 +0x0c0:  mov    %eax,(%esp)
084c345b +0x0c3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084c3460 +0x0c8:  movl   $0xffffffff,0x4(%esp)
084c3468 +0x0d0:  mov    %eax,(%esp)
084c346b +0x0d3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084c3470 +0x0d8:  lea    -0x90(%ebp),%eax
084c3476 +0x0de:  mov    %eax,(%esp)
084c3479 +0x0e1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084c347e +0x0e6:  mov    %eax,(%esp)
084c3481 +0x0e9:  call   084f1578 <_GLOBAL__I__Z7getUserj+0x852a>  ; global constructors keyed to getUser(unsigned int)+0x852a
084c3486 +0x0ee:  mov    %eax,-0x2c(%ebp)
084c3489 +0x0f1:  mov    0xc(%ebp),%eax
084c348c +0x0f4:  mov    %eax,(%esp)
084c348f +0x0f7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c3494 +0x0fc:  mov    -0x2c(%ebp),%edx
084c3497 +0x0ff:  mov    %eax,(%edx)
084c3499 +0x101:  mov    -0x50(%ebp),%eax
084c349c +0x104:  mov    0x140(%eax),%edx
084c34a2 +0x10a:  mov    -0x2c(%ebp),%eax
084c34a5 +0x10d:  mov    %edx,0x4(%eax)
084c34a8 +0x110:  mov    -0x50(%ebp),%eax
084c34ab +0x113:  mov    0xc(%eax),%eax
084c34ae +0x116:  mov    %eax,%edx
084c34b0 +0x118:  mov    -0x2c(%ebp),%eax
084c34b3 +0x11b:  mov    %edx,0x8(%eax)
084c34b6 +0x11e:  mov    -0x2c(%ebp),%eax
084c34b9 +0x121:  lea    0xc(%eax),%edx
084c34bc +0x124:  mov    0xc(%ebp),%eax
084c34bf +0x127:  add    $0xe0,%eax
084c34c4 +0x12c:  movl   $0x14,0x8(%esp)
084c34cc +0x134:  mov    %edx,0x4(%esp)
084c34d0 +0x138:  mov    %eax,(%esp)
084c34d3 +0x13b:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
084c34d8 +0x140:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084c34dd +0x145:  lea    -0x90(%ebp),%edx
084c34e3 +0x14b:  mov    %edx,0x8(%esp)
084c34e7 +0x14f:  movl   $0x4,0x4(%esp)
084c34ef +0x157:  mov    %eax,(%esp)
084c34f2 +0x15a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084c34f7 +0x15f:  mov    $0x1405,%ebx
084c34fc +0x164:  lea    -0x90(%ebp),%eax
084c3502 +0x16a:  mov    %eax,(%esp)
084c3505 +0x16d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c350a +0x172:  jmp    084c3d98 <+0xa00>
084c350f +0x177:  mov    %edx,%ebx
084c3511 +0x179:  mov    %eax,%esi
084c3513 +0x17b:  lea    -0x90(%ebp),%eax
084c3519 +0x181:  mov    %eax,(%esp)
084c351c +0x184:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084c3521 +0x189:  mov    %esi,%eax
084c3523 +0x18b:  mov    %ebx,%edx
084c3525 +0x18d:  mov    %eax,(%esp)
084c3528 +0x190:  call   08ae3750 <_Unwind_Resume>
084c352d +0x195:  mov    -0x50(%ebp),%eax
084c3530 +0x198:  movzbl 0x2e(%eax),%eax
084c3534 +0x19c:  test   %al,%al
084c3536 +0x19e:  jne    084c3542 <+0x1aa>
084c3538 +0x1a0:  mov    $0x140b,%ebx
084c353d +0x1a5:  jmp    084c3d98 <+0xa00>
084c3542 +0x1aa:  mov    -0x50(%ebp),%eax
084c3545 +0x1ad:  mov    0x4(%eax),%eax
084c3548 +0x1b0:  mov    %eax,0x4(%esp)
084c354c +0x1b4:  mov    0xc(%ebp),%eax
084c354f +0x1b7:  mov    %eax,(%esp)
084c3552 +0x1ba:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084c3557 +0x1bf:  mov    %eax,-0x4c(%ebp)
084c355a +0x1c2:  cmpl   $0x0,-0x4c(%ebp)
084c355e +0x1c6:  js     084c358d <+0x1f5>
084c3560 +0x1c8:  mov    -0x50(%ebp),%eax
084c3563 +0x1cb:  lea    0xc(%eax),%edx
084c3566 +0x1ce:  mov    -0x50(%ebp),%eax
084c3569 +0x1d1:  mov    0x4(%eax),%eax
084c356c +0x1d4:  mov    %edx,0xc(%esp)
084c3570 +0x1d8:  mov    %eax,0x8(%esp)
084c3574 +0x1dc:  mov    -0x4c(%ebp),%eax
084c3577 +0x1df:  mov    %eax,0x4(%esp)
084c357b +0x1e3:  mov    0xc(%ebp),%eax
084c357e +0x1e6:  mov    %eax,(%esp)
084c3581 +0x1e9:  call   0864ac1a <_ZN5CUser19setCharacInfoDetailEijP11CHARAC_DATA>  ; CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)
084c3586 +0x1ee:  xor    $0x1,%eax
084c3589 +0x1f1:  test   %al,%al
084c358b +0x1f3:  je     084c3594 <+0x1fc>
084c358d +0x1f5:  mov    $0x1,%eax
084c3592 +0x1fa:  jmp    084c3599 <+0x201>
084c3594 +0x1fc:  mov    $0x0,%eax
084c3599 +0x201:  test   %al,%al
084c359b +0x203:  je     084c35a7 <+0x20f>
084c359d +0x205:  mov    $0x1415,%ebx
084c35a2 +0x20a:  jmp    084c3d98 <+0xa00>
084c35a7 +0x20f:  mov    -0x50(%ebp),%eax
084c35aa +0x212:  mov    0x686(%eax),%eax
084c35b0 +0x218:  mov    %eax,0x4(%esp)
084c35b4 +0x21c:  mov    0xc(%ebp),%eax
084c35b7 +0x21f:  mov    %eax,(%esp)
084c35ba +0x222:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084c35bf +0x227:  mov    %eax,-0x48(%ebp)
084c35c2 +0x22a:  mov    -0x50(%ebp),%eax
084c35c5 +0x22d:  mov    0x686(%eax),%eax
084c35cb +0x233:  test   %eax,%eax
084c35cd +0x235:  je     084c3654 <+0x2bc>
084c35d3 +0x23b:  cmpl   $0xffffffff,-0x48(%ebp)
084c35d7 +0x23f:  je     084c3654 <+0x2bc>
084c35d9 +0x241:  cmpl   $0x0,-0x48(%ebp)
084c35dd +0x245:  js     084c3612 <+0x27a>
084c35df +0x247:  mov    -0x50(%ebp),%eax
084c35e2 +0x24a:  lea    0x68b(%eax),%edx
084c35e8 +0x250:  mov    -0x50(%ebp),%eax
084c35eb +0x253:  mov    0x686(%eax),%eax
084c35f1 +0x259:  mov    %edx,0xc(%esp)
084c35f5 +0x25d:  mov    %eax,0x8(%esp)
084c35f9 +0x261:  mov    -0x48(%ebp),%eax
084c35fc +0x264:  mov    %eax,0x4(%esp)
084c3600 +0x268:  mov    0xc(%ebp),%eax
084c3603 +0x26b:  mov    %eax,(%esp)
084c3606 +0x26e:  call   08690098 <_ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA>  ; CUser::setTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*)
084c360b +0x273:  xor    $0x1,%eax
084c360e +0x276:  test   %al,%al
084c3610 +0x278:  je     084c3619 <+0x281>
084c3612 +0x27a:  mov    $0x1,%eax
084c3617 +0x27f:  jmp    084c361e <+0x286>
084c3619 +0x281:  mov    $0x0,%eax
084c361e +0x286:  test   %al,%al
084c3620 +0x288:  je     084c362c <+0x294>
084c3622 +0x28a:  mov    $0x141f,%ebx
084c3627 +0x28f:  jmp    084c3d98 <+0xa00>
084c362c +0x294:  mov    -0x4c(%ebp),%eax
084c362f +0x297:  mov    0xc(%ebp),%edx
084c3632 +0x29a:  add    $0x796e8,%edx
084c3638 +0x2a0:  mov    %eax,0x4(%esp)
084c363c +0x2a4:  mov    %edx,(%esp)
084c363f +0x2a7:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084c3644 +0x2ac:  mov    -0x50(%ebp),%edx
084c3647 +0x2af:  movzbl 0x68a(%edx),%edx
084c364e +0x2b6:  mov    %dl,0x14b7(%eax)
084c3654 +0x2bc:  mov    -0x48(%ebp),%eax
084c3657 +0x2bf:  mov    %eax,0x8(%esp)
084c365b +0x2c3:  mov    -0x4c(%ebp),%eax
084c365e +0x2c6:  mov    %eax,0x4(%esp)
084c3662 +0x2ca:  mov    0xc(%ebp),%eax
084c3665 +0x2cd:  mov    %eax,(%esp)
084c3668 +0x2d0:  call   0864cd92 <_ZN5CUser12SelectCharacEii>  ; CUser::SelectCharac(int, int)
084c366d +0x2d5:  mov    0xc(%ebp),%eax
084c3670 +0x2d8:  mov    %eax,(%esp)
084c3673 +0x2db:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
084c3678 +0x2e0:  mov    -0x4c(%ebp),%edx
084c367b +0x2e3:  movsbl %dl,%edx
084c367e +0x2e6:  mov    %eax,0x8(%esp)
084c3682 +0x2ea:  mov    %edx,0x4(%esp)
084c3686 +0x2ee:  mov    0xc(%ebp),%eax
084c3689 +0x2f1:  mov    %eax,(%esp)
084c368c +0x2f4:  call   08652b06 <_ZN5CUser27decideLinkCharacSlotIndexesEci>  ; CUser::decideLinkCharacSlotIndexes(char, int)
084c3691 +0x2f9:  mov    0xc(%ebp),%eax
084c3694 +0x2fc:  mov    %eax,(%esp)
084c3697 +0x2ff:  call   082300e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5792>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5792
084c369c +0x304:  mov    -0x4c(%ebp),%edx
084c369f +0x307:  movsbl %dl,%edx
084c36a2 +0x30a:  mov    %eax,0x8(%esp)
084c36a6 +0x30e:  mov    %edx,0x4(%esp)
084c36aa +0x312:  mov    0xc(%ebp),%eax
084c36ad +0x315:  mov    %eax,(%esp)
084c36b0 +0x318:  call   08652b90 <_ZN5CUser19checkCharacLinkTypeEci>  ; CUser::checkCharacLinkType(char, int)
084c36b5 +0x31d:  xor    $0x1,%eax
084c36b8 +0x320:  test   %al,%al
084c36ba +0x322:  je     084c3724 <+0x38c>
084c36bc +0x324:  mov    0xc(%ebp),%eax
084c36bf +0x327:  mov    %eax,(%esp)
084c36c2 +0x32a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c36c7 +0x32f:  movl   $0x0,0x4(%esp)
084c36cf +0x337:  mov    %eax,(%esp)
084c36d2 +0x33a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c36d7 +0x33f:  mov    %eax,%ebx
084c36d9 +0x341:  movl   $0x5,0xc(%esp)
084c36e1 +0x349:  movl   $0x1430,0x8(%esp)
084c36e9 +0x351:  movl   $&_ZZN16Inter_LoadCharac12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c36f1 +0x359:  lea    -0x80(%ebp),%eax
084c36f4 +0x35c:  mov    %eax,(%esp)
084c36f7 +0x35f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c36fc +0x364:  mov    -0x4c(%ebp),%eax
084c36ff +0x367:  mov    %eax,0xc(%esp)
084c3703 +0x36b:  mov    %ebx,0x8(%esp)
084c3707 +0x36f:  movl   $"LINK_LOG : ABNOMAL LINK CHARAC!! m_id (%s), slot_index(%d)",0x4(%esp)
084c370f +0x377:  lea    -0x80(%ebp),%eax
084c3712 +0x37a:  mov    %eax,(%esp)
084c3715 +0x37d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c371a +0x382:  mov    $0x1431,%ebx
084c371f +0x387:  jmp    084c3d98 <+0xa00>
084c3724 +0x38c:  mov    -0x4c(%ebp),%eax
084c3727 +0x38f:  movsbl %al,%eax
084c372a +0x392:  mov    %eax,0x4(%esp)
084c372e +0x396:  mov    0xc(%ebp),%eax
084c3731 +0x399:  mov    %eax,(%esp)
084c3734 +0x39c:  call   084ecd52 <_GLOBAL__I__Z7getUserj+0x3d04>  ; global constructors keyed to getUser(unsigned int)+0x3d04
084c3739 +0x3a1:  test   %al,%al
084c373b +0x3a3:  je     084c3757 <+0x3bf>
084c373d +0x3a5:  movl   $0x0,0x8(%esp)
084c3745 +0x3ad:  mov    -0x4c(%ebp),%eax
084c3748 +0x3b0:  mov    %eax,0x4(%esp)
084c374c +0x3b4:  mov    0xc(%ebp),%eax
084c374f +0x3b7:  mov    %eax,(%esp)
084c3752 +0x3ba:  call   084ecdb6 <_GLOBAL__I__Z7getUserj+0x3d68>  ; global constructors keyed to getUser(unsigned int)+0x3d68
084c3757 +0x3bf:  mov    -0x50(%ebp),%eax
084c375a +0x3c2:  movzwl 0x128(%eax),%eax
084c3761 +0x3c9:  movswl %ax,%edx
084c3764 +0x3cc:  mov    0xc(%ebp),%eax
084c3767 +0x3cf:  mov    %edx,0x4(%esp)
084c376b +0x3d3:  mov    %eax,(%esp)
084c376e +0x3d6:  call   0822f736 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4de0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4de0
084c3773 +0x3db:  mov    -0x50(%ebp),%eax
084c3776 +0x3de:  movzbl 0x12b(%eax),%eax
084c377d +0x3e5:  test   %al,%al
084c377f +0x3e7:  js     084c378f <+0x3f7>
084c3781 +0x3e9:  mov    -0x50(%ebp),%eax
084c3784 +0x3ec:  movzbl 0x12b(%eax),%eax
084c378b +0x3f3:  cmp    $0x3,%al
084c378d +0x3f5:  jle    084c37a4 <+0x40c>
084c378f +0x3f7:  mov    0xc(%ebp),%eax
084c3792 +0x3fa:  movl   $0x0,0x4(%esp)
084c379a +0x402:  mov    %eax,(%esp)
084c379d +0x405:  call   084ec44c <_GLOBAL__I__Z7getUserj+0x33fe>  ; global constructors keyed to getUser(unsigned int)+0x33fe
084c37a2 +0x40a:  jmp    084c37c0 <+0x428>
084c37a4 +0x40c:  mov    -0x50(%ebp),%eax
084c37a7 +0x40f:  movzbl 0x12b(%eax),%eax
084c37ae +0x416:  movsbl %al,%edx
084c37b1 +0x419:  mov    0xc(%ebp),%eax
084c37b4 +0x41c:  mov    %edx,0x4(%esp)
084c37b8 +0x420:  mov    %eax,(%esp)
084c37bb +0x423:  call   084ec44c <_GLOBAL__I__Z7getUserj+0x33fe>  ; global constructors keyed to getUser(unsigned int)+0x33fe
084c37c0 +0x428:  mov    0xc(%ebp),%eax
084c37c3 +0x42b:  mov    %eax,(%esp)
084c37c6 +0x42e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084c37cb +0x433:  test   %eax,%eax
084c37cd +0x435:  setne  %al
084c37d0 +0x438:  test   %al,%al
084c37d2 +0x43a:  je     084c383b <+0x4a3>
084c37d4 +0x43c:  lea    -0xaa(%ebp),%eax
084c37da +0x442:  mov    %eax,(%esp)
084c37dd +0x445:  call   082344de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b88
084c37e2 +0x44a:  mov    0xc(%ebp),%eax
084c37e5 +0x44d:  mov    %eax,(%esp)
084c37e8 +0x450:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084c37ed +0x455:  mov    %eax,%ebx
084c37ef +0x457:  mov    0xc(%ebp),%eax
084c37f2 +0x45a:  mov    %eax,(%esp)
084c37f5 +0x45d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084c37fa +0x462:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084c3800 +0x468:  mov    %eax,0x4(%esp)
084c3804 +0x46c:  mov    %edx,(%esp)
084c3807 +0x46f:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084c380c +0x474:  lea    -0xaa(%ebp),%edx
084c3812 +0x47a:  mov    %edx,0x8(%esp)
084c3816 +0x47e:  mov    %ebx,0x4(%esp)
084c381a +0x482:  mov    %eax,(%esp)
084c381d +0x485:  call   0846ebba <_ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::GetGuildInfoProxy(unsigned int, STGuildProxy&)
084c3822 +0x48a:  test   %al,%al
084c3824 +0x48c:  je     084c383b <+0x4a3>
084c3826 +0x48e:  lea    -0xaa(%ebp),%eax
084c382c +0x494:  mov    %eax,0x4(%esp)
084c3830 +0x498:  mov    0xc(%ebp),%eax
084c3833 +0x49b:  mov    %eax,(%esp)
084c3836 +0x49e:  call   0865cd0a <_ZN5CUser17SetGuildInfoProxyER12STGuildProxy>  ; CUser::SetGuildInfoProxy(STGuildProxy&)
084c383b +0x4a3:  mov    0xc(%ebp),%eax
084c383e +0x4a6:  movl   $0x0,0x4(%esp)
084c3846 +0x4ae:  mov    %eax,(%esp)
084c3849 +0x4b1:  call   08658a4e <_ZN15CUserCharacInfo26calc_disp_help_abuse_ratioEi>  ; CUserCharacInfo::calc_disp_help_abuse_ratio(int)
084c384e +0x4b6:  mov    0xc(%ebp),%edx
084c3851 +0x4b9:  mov    %eax,0x4(%esp)
084c3855 +0x4bd:  mov    %edx,(%esp)
084c3858 +0x4c0:  call   0822f362 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a0c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a0c
084c385d +0x4c5:  movl   $0x0,0x4(%esp)
084c3865 +0x4cd:  mov    0xc(%ebp),%eax
084c3868 +0x4d0:  mov    %eax,(%esp)
084c386b +0x4d3:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c3870 +0x4d8:  mov    -0x50(%ebp),%eax
084c3873 +0x4db:  mov    0x4(%eax),%eax
084c3876 +0x4de:  mov    %eax,0x4(%esp)
084c387a +0x4e2:  mov    0xc(%ebp),%eax
084c387d +0x4e5:  mov    %eax,(%esp)
084c3880 +0x4e8:  call   085552ac <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj>  ; WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int)
084c3885 +0x4ed:  mov    0xc(%ebp),%eax
084c3888 +0x4f0:  mov    %eax,(%esp)
084c388b +0x4f3:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c3890 +0x4f8:  mov    %eax,%ebx
084c3892 +0x4fa:  mov    -0x50(%ebp),%eax
084c3895 +0x4fd:  lea    0x10(%eax),%esi
084c3898 +0x500:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c389d +0x505:  mov    %ebx,0x8(%esp)
084c38a1 +0x509:  mov    %esi,0x4(%esp)
084c38a5 +0x50d:  mov    %eax,(%esp)
084c38a8 +0x510:  call   086cd568 <_ZN9GameWorld17InsertUserToIDMapEPKcj>  ; GameWorld::InsertUserToIDMap(char const*, unsigned int)
084c38ad +0x515:  xor    $0x1,%eax
084c38b0 +0x518:  test   %al,%al
084c38b2 +0x51a:  je     084c3915 <+0x57d>
084c38b4 +0x51c:  mov    0xc(%ebp),%eax
084c38b7 +0x51f:  mov    %eax,(%esp)
084c38ba +0x522:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084c38bf +0x527:  movl   $0x0,0x4(%esp)
084c38c7 +0x52f:  mov    %eax,(%esp)
084c38ca +0x532:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084c38cf +0x537:  mov    %eax,%ebx
084c38d1 +0x539:  mov    -0x50(%ebp),%eax
084c38d4 +0x53c:  lea    0x10(%eax),%esi
084c38d7 +0x53f:  movl   $0x5,0xc(%esp)
084c38df +0x547:  movl   $0x1464,0x8(%esp)
084c38e7 +0x54f:  movl   $&_ZZN16Inter_LoadCharac12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c38ef +0x557:  lea    -0x70(%ebp),%eax
084c38f2 +0x55a:  mov    %eax,(%esp)
084c38f5 +0x55d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c38fa +0x562:  mov    %ebx,0xc(%esp)
084c38fe +0x566:  mov    %esi,0x8(%esp)
084c3902 +0x56a:  movl   $"Insert into IDMap Failed %s [%s]",0x4(%esp)
084c390a +0x572:  lea    -0x70(%ebp),%eax
084c390d +0x575:  mov    %eax,(%esp)
084c3910 +0x578:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c3915 +0x57d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c391c +0x584:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c3921 +0x589:  mov    %eax,-0x84(%ebp)
084c3927 +0x58f:  lea    -0xd8(%ebp),%eax
084c392d +0x595:  mov    %eax,0x4(%esp)
084c3931 +0x599:  lea    -0x84(%ebp),%eax
084c3937 +0x59f:  mov    %eax,(%esp)
084c393a +0x5a2:  call   0807e360 <_init+0xc58>
084c393f +0x5a7:  mov    %eax,-0x44(%ebp)
084c3942 +0x5aa:  mov    -0x44(%ebp),%eax
084c3945 +0x5ad:  mov    0x14(%eax),%eax
084c3948 +0x5b0:  mov    %eax,-0x40(%ebp)
084c394b +0x5b3:  mov    -0x44(%ebp),%eax
084c394e +0x5b6:  mov    0x10(%eax),%eax
084c3951 +0x5b9:  mov    %eax,-0x3c(%ebp)
084c3954 +0x5bc:  mov    -0x44(%ebp),%eax
084c3957 +0x5bf:  mov    0xc(%eax),%eax
084c395a +0x5c2:  mov    %eax,-0x38(%ebp)
084c395d +0x5c5:  mov    0xc(%ebp),%eax
084c3960 +0x5c8:  mov    %eax,(%esp)
084c3963 +0x5cb:  call   0868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>  ; CUserCharacInfo::GetCurCharacChaosResponTime()
084c3968 +0x5d0:  mov    -0x84(%ebp),%edx
084c396e +0x5d6:  cmp    %edx,%eax
084c3970 +0x5d8:  setle  %al
084c3973 +0x5db:  test   %al,%al
084c3975 +0x5dd:  je     084c39b2 <+0x61a>
084c3977 +0x5df:  mov    0xc(%ebp),%eax
084c397a +0x5e2:  movl   $0x0,0x4(%esp)
084c3982 +0x5ea:  mov    %eax,(%esp)
084c3985 +0x5ed:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
084c398a +0x5f2:  mov    0xc(%ebp),%eax
084c398d +0x5f5:  movl   $0x0,0x4(%esp)
084c3995 +0x5fd:  mov    %eax,(%esp)
084c3998 +0x600:  call   082f0c04 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x988>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x988
084c399d +0x605:  mov    0xc(%ebp),%eax
084c39a0 +0x608:  movl   $0x0,0x4(%esp)
084c39a8 +0x610:  mov    %eax,(%esp)
084c39ab +0x613:  call   0868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>  ; CUserCharacInfo::SetCurCharacChaosResponTime(int)
084c39b0 +0x618:  jmp    084c3a15 <+0x67d>
084c39b2 +0x61a:  mov    0xc(%ebp),%eax
084c39b5 +0x61d:  movl   $0x1,0x4(%esp)
084c39bd +0x625:  mov    %eax,(%esp)
084c39c0 +0x628:  call   082f0c30 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x9b4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x9b4
084c39c5 +0x62d:  mov    0xc(%ebp),%eax
084c39c8 +0x630:  mov    %eax,(%esp)
084c39cb +0x633:  call   0868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>  ; CUserCharacInfo::GetCurCharacChaosResponTime()
084c39d0 +0x638:  mov    -0x84(%ebp),%edx
084c39d6 +0x63e:  sub    %edx,%eax
084c39d8 +0x640:  mov    %eax,-0x28(%ebp)
084c39db +0x643:  mov    0xc(%ebp),%eax
084c39de +0x646:  mov    %eax,(%esp)
084c39e1 +0x649:  call   0868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>  ; CUserCharacInfo::GetCurCharacChaosResponTime()
084c39e6 +0x64e:  mov    %eax,%ebx
084c39e8 +0x650:  mov    0xc(%ebp),%eax
084c39eb +0x653:  mov    %eax,(%esp)
084c39ee +0x656:  call   082f0b88 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x90c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x90c
084c39f3 +0x65b:  mov    %ebx,%edx
084c39f5 +0x65d:  sub    %eax,%edx
084c39f7 +0x65f:  mov    %edx,%eax
084c39f9 +0x661:  mov    %eax,-0x24(%ebp)
084c39fc +0x664:  mov    -0x28(%ebp),%eax
084c39ff +0x667:  mov    %eax,0x8(%esp)
084c3a03 +0x66b:  mov    -0x24(%ebp),%eax
084c3a06 +0x66e:  mov    %eax,0x4(%esp)
084c3a0a +0x672:  mov    0xc(%ebp),%eax
084c3a0d +0x675:  mov    %eax,(%esp)
084c3a10 +0x678:  call   082eff42 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii>  ; pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int)
084c3a15 +0x67d:  mov    0xc(%ebp),%eax
084c3a18 +0x680:  movl   $0x0,0x4(%esp)
084c3a20 +0x688:  mov    %eax,(%esp)
084c3a23 +0x68b:  call   082f0d80 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xb04>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xb04
084c3a28 +0x690:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c3a2f +0x697:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c3a34 +0x69c:  mov    %eax,%esi
084c3a36 +0x69e:  mov    0xc(%ebp),%eax
084c3a39 +0x6a1:  mov    %eax,(%esp)
084c3a3c +0x6a4:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
084c3a41 +0x6a9:  mov    %eax,%ebx
084c3a43 +0x6ab:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c3a48 +0x6b0:  mov    0x37c(%eax),%eax
084c3a4e +0x6b6:  mov    %esi,0x8(%esp)
084c3a52 +0x6ba:  mov    %ebx,0x4(%esp)
084c3a56 +0x6be:  mov    %eax,(%esp)
084c3a59 +0x6c1:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084c3a5e +0x6c6:  test   %al,%al
084c3a60 +0x6c8:  je     084c3a75 <+0x6dd>
084c3a62 +0x6ca:  mov    0xc(%ebp),%eax
084c3a65 +0x6cd:  movl   $0x0,0x4(%esp)
084c3a6d +0x6d5:  mov    %eax,(%esp)
084c3a70 +0x6d8:  call   084ec002 <_GLOBAL__I__Z7getUserj+0x2fb4>  ; global constructors keyed to getUser(unsigned int)+0x2fb4
084c3a75 +0x6dd:  mov    0xc(%ebp),%eax
084c3a78 +0x6e0:  movl   $0x0,0x4(%esp)
084c3a80 +0x6e8:  mov    %eax,(%esp)
084c3a83 +0x6eb:  call   084ec30c <_GLOBAL__I__Z7getUserj+0x32be>  ; global constructors keyed to getUser(unsigned int)+0x32be
084c3a88 +0x6f0:  mov    0xc(%ebp),%eax
084c3a8b +0x6f3:  mov    %eax,(%esp)
084c3a8e +0x6f6:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
084c3a93 +0x6fb:  mov    %eax,-0x88(%ebp)
084c3a99 +0x701:  lea    -0x104(%ebp),%eax
084c3a9f +0x707:  mov    %eax,0x4(%esp)
084c3aa3 +0x70b:  lea    -0x88(%ebp),%eax
084c3aa9 +0x711:  mov    %eax,(%esp)
084c3aac +0x714:  call   0807e360 <_init+0xc58>
084c3ab1 +0x719:  mov    %eax,-0x34(%ebp)
084c3ab4 +0x71c:  mov    -0x34(%ebp),%eax
084c3ab7 +0x71f:  mov    0x14(%eax),%eax
084c3aba +0x722:  cmp    -0x40(%ebp),%eax
084c3abd +0x725:  jne    084c3ad5 <+0x73d>
084c3abf +0x727:  mov    -0x34(%ebp),%eax
084c3ac2 +0x72a:  mov    0x10(%eax),%eax
084c3ac5 +0x72d:  cmp    -0x3c(%ebp),%eax
084c3ac8 +0x730:  jne    084c3ad5 <+0x73d>
084c3aca +0x732:  mov    -0x34(%ebp),%eax
084c3acd +0x735:  mov    0xc(%eax),%eax
084c3ad0 +0x738:  cmp    -0x38(%ebp),%eax
084c3ad3 +0x73b:  je     084c3af9 <+0x761>
084c3ad5 +0x73d:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
084c3ada +0x742:  movl   $0x1,0xc(%esp)
084c3ae2 +0x74a:  mov    0xc(%ebp),%edx
084c3ae5 +0x74d:  mov    %edx,0x8(%esp)
084c3ae9 +0x751:  movl   $0x0,0x4(%esp)
084c3af1 +0x759:  mov    %eax,(%esp)
084c3af4 +0x75c:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
084c3af9 +0x761:  mov    0xc(%ebp),%eax
084c3afc +0x764:  mov    %eax,(%esp)
084c3aff +0x767:  call   084ec8ac <_GLOBAL__I__Z7getUserj+0x385e>  ; global constructors keyed to getUser(unsigned int)+0x385e
084c3b04 +0x76c:  mov    0xc(%ebp),%eax
084c3b07 +0x76f:  mov    %eax,(%esp)
084c3b0a +0x772:  call   084ec8ea <_GLOBAL__I__Z7getUserj+0x389c>  ; global constructors keyed to getUser(unsigned int)+0x389c
084c3b0f +0x777:  mov    %eax,-0x30(%ebp)
084c3b12 +0x77a:  mov    0xc(%ebp),%eax
084c3b15 +0x77d:  mov    %eax,(%esp)
084c3b18 +0x780:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084c3b1d +0x785:  mov    %eax,(%esp)
084c3b20 +0x788:  call   081090fa <_Z14StringToNumberPKc>  ; StringToNumber(char const*)
084c3b25 +0x78d:  mov    %eax,-0x14c(%ebp)
084c3b2b +0x793:  movl   $0xffffffff,-0x148(%ebp)
084c3b35 +0x79d:  mov    -0x30(%ebp),%eax
084c3b38 +0x7a0:  movl   $0x40,0x8(%esp)
084c3b40 +0x7a8:  mov    %eax,0x4(%esp)
084c3b44 +0x7ac:  lea    -0x14c(%ebp),%eax
084c3b4a +0x7b2:  add    $0x8,%eax
084c3b4d +0x7b5:  mov    %eax,(%esp)
084c3b50 +0x7b8:  call   0807d8d0 <_init+0x1c8>
084c3b55 +0x7bd:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
084c3b5a +0x7c2:  mov    (%eax),%eax
084c3b5c +0x7c4:  add    $0x38,%eax
084c3b5f +0x7c7:  mov    (%eax),%esi
084c3b61 +0x7c9:  lea    -0x14c(%ebp),%ebx
084c3b67 +0x7cf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c3b6c +0x7d4:  mov    %eax,(%esp)
084c3b6f +0x7d7:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
084c3b74 +0x7dc:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
084c3b7a +0x7e2:  movl   $0x48,0x14(%esp)
084c3b82 +0x7ea:  mov    %ebx,0x10(%esp)
084c3b86 +0x7ee:  movl   $&_ZL14gUnicodeBuffer+0xe175,0xc(%esp)
084c3b8e +0x7f6:  movl   $0x0,0x8(%esp)
084c3b96 +0x7fe:  mov    %eax,0x4(%esp)
084c3b9a +0x802:  mov    %edx,(%esp)
084c3b9d +0x805:  call   *%esi
084c3b9f +0x807:  mov    0xc(%ebp),%eax
084c3ba2 +0x80a:  mov    %eax,(%esp)
084c3ba5 +0x80d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3baa +0x812:  mov    0x7b(%eax),%eax
084c3bad +0x815:  test   %eax,%eax
084c3baf +0x817:  setne  %al
084c3bb2 +0x81a:  test   %al,%al
084c3bb4 +0x81c:  je     084c3cbb <+0x923>
084c3bba +0x822:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c3bc1 +0x829:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c3bc6 +0x82e:  mov    %eax,%ebx
084c3bc8 +0x830:  mov    0xc(%ebp),%eax
084c3bcb +0x833:  mov    %eax,(%esp)
084c3bce +0x836:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3bd3 +0x83b:  mov    0x7b(%eax),%esi
084c3bd6 +0x83e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084c3bdb +0x843:  mov    0x37c(%eax),%eax
084c3be1 +0x849:  mov    %ebx,0x8(%esp)
084c3be5 +0x84d:  mov    %esi,0x4(%esp)
084c3be9 +0x851:  mov    %eax,(%esp)
084c3bec +0x854:  call   0846c144 <_Z23ComputeDaysScheduleTimeill>  ; ComputeDaysScheduleTime(int, long, long)
084c3bf1 +0x859:  mov    %eax,-0x20(%ebp)
084c3bf4 +0x85c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c3bf9 +0x861:  mov    0xa6b4(%eax),%eax
084c3bff +0x867:  mov    %eax,-0x1c(%ebp)
084c3c02 +0x86a:  cmpl   $0x0,-0x20(%ebp)
084c3c06 +0x86e:  jle    084c3cbb <+0x923>
084c3c0c +0x874:  mov    -0x20(%ebp),%eax
084c3c0f +0x877:  mov    %eax,%edx
084c3c11 +0x879:  mov    -0x1c(%ebp),%eax
084c3c14 +0x87c:  imul   %edx,%eax
084c3c17 +0x87f:  movswl %ax,%edx
084c3c1a +0x882:  mov    0xc(%ebp),%eax
084c3c1d +0x885:  mov    %edx,0x4(%esp)
084c3c21 +0x889:  mov    %eax,(%esp)
084c3c24 +0x88c:  call   08687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>  ; CUserCharacInfo::DecreasePowerWarPoint(short)
084c3c29 +0x891:  mov    -0x20(%ebp),%eax
084c3c2c +0x894:  mov    %eax,%edx
084c3c2e +0x896:  imul   -0x1c(%ebp),%edx
084c3c32 +0x89a:  mov    %edx,-0x15c(%ebp)
084c3c38 +0x8a0:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084c3c3f +0x8a7:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084c3c44 +0x8ac:  mov    %eax,%ebx
084c3c46 +0x8ae:  mov    0xc(%ebp),%eax
084c3c49 +0x8b1:  mov    %eax,(%esp)
084c3c4c +0x8b4:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3c51 +0x8b9:  mov    0x7b(%eax),%edi
084c3c54 +0x8bc:  mov    0xc(%ebp),%eax
084c3c57 +0x8bf:  mov    %eax,(%esp)
084c3c5a +0x8c2:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3c5f +0x8c7:  mov    (%eax),%esi
084c3c61 +0x8c9:  movl   $0x0,0xc(%esp)
084c3c69 +0x8d1:  movl   $0x14e4,0x8(%esp)
084c3c71 +0x8d9:  movl   $&_ZZN16Inter_LoadCharac12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c3c79 +0x8e1:  lea    -0x60(%ebp),%eax
084c3c7c +0x8e4:  mov    %eax,(%esp)
084c3c7f +0x8e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c3c84 +0x8ec:  mov    -0x15c(%ebp),%eax
084c3c8a +0x8f2:  mov    %eax,0x1c(%esp)
084c3c8e +0x8f6:  mov    -0x1c(%ebp),%eax
084c3c91 +0x8f9:  mov    %eax,0x18(%esp)
084c3c95 +0x8fd:  mov    -0x20(%ebp),%eax
084c3c98 +0x900:  mov    %eax,0x14(%esp)
084c3c9c +0x904:  mov    %ebx,0x10(%esp)
084c3ca0 +0x908:  mov    %edi,0xc(%esp)
084c3ca4 +0x90c:  mov    %esi,0x8(%esp)
084c3ca8 +0x910:  movl   $"POWERWAR POINT DECREASE : user:%d, last_play_tme:%d, current_time:%d, Unconnected Days:%d, Per Day Point : %d, Decrease powerwar point:%d",0x4(%esp)
084c3cb0 +0x918:  lea    -0x60(%ebp),%eax
084c3cb3 +0x91b:  mov    %eax,(%esp)
084c3cb6 +0x91e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c3cbb +0x923:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084c3cc0 +0x928:  mov    %eax,(%esp)
084c3cc3 +0x92b:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
084c3cc8 +0x930:  xor    $0x1,%eax
084c3ccb +0x933:  test   %al,%al
084c3ccd +0x935:  je     084c3d08 <+0x970>
084c3ccf +0x937:  mov    0xc(%ebp),%eax
084c3cd2 +0x93a:  mov    %eax,(%esp)
084c3cd5 +0x93d:  call   084ec408 <_GLOBAL__I__Z7getUserj+0x33ba>  ; global constructors keyed to getUser(unsigned int)+0x33ba
084c3cda +0x942:  test   %eax,%eax
084c3cdc +0x944:  jne    084c3ced <+0x955>
084c3cde +0x946:  mov    0xc(%ebp),%eax
084c3ce1 +0x949:  mov    %eax,(%esp)
084c3ce4 +0x94c:  call   084ec42a <_GLOBAL__I__Z7getUserj+0x33dc>  ; global constructors keyed to getUser(unsigned int)+0x33dc
084c3ce9 +0x951:  test   %eax,%eax
084c3ceb +0x953:  je     084c3cf4 <+0x95c>
084c3ced +0x955:  mov    $0x1,%eax
084c3cf2 +0x95a:  jmp    084c3cf9 <+0x961>
084c3cf4 +0x95c:  mov    $0x0,%eax
084c3cf9 +0x961:  test   %al,%al
084c3cfb +0x963:  je     084c3d08 <+0x970>
084c3cfd +0x965:  mov    0xc(%ebp),%eax
084c3d00 +0x968:  mov    %eax,(%esp)
084c3d03 +0x96b:  call   084ec3ca <_GLOBAL__I__Z7getUserj+0x337c>  ; global constructors keyed to getUser(unsigned int)+0x337c
084c3d08 +0x970:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c3d0d +0x975:  mov    %eax,(%esp)
084c3d10 +0x978:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084c3d15 +0x97d:  movl   $0x19b,0x4(%esp)
084c3d1d +0x985:  mov    %eax,(%esp)
084c3d20 +0x988:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
084c3d25 +0x98d:  test   %al,%al
084c3d27 +0x98f:  je     084c3d6c <+0x9d4>
084c3d29 +0x991:  mov    -0x50(%ebp),%eax
084c3d2c +0x994:  movzbl 0x139(%eax),%eax
084c3d33 +0x99b:  movzbl %al,%edx
084c3d36 +0x99e:  mov    0xc(%ebp),%eax
084c3d39 +0x9a1:  mov    %edx,0x4(%esp)
084c3d3d +0x9a5:  mov    %eax,(%esp)
084c3d40 +0x9a8:  call   084ec498 <_GLOBAL__I__Z7getUserj+0x344a>  ; global constructors keyed to getUser(unsigned int)+0x344a
084c3d45 +0x9ad:  mov    -0x50(%ebp),%eax
084c3d48 +0x9b0:  movzbl 0x138(%eax),%eax
084c3d4f +0x9b7:  movzbl %al,%edx
084c3d52 +0x9ba:  mov    0xc(%ebp),%eax
084c3d55 +0x9bd:  mov    %edx,0x4(%esp)
084c3d59 +0x9c1:  mov    %eax,(%esp)
084c3d5c +0x9c4:  call   08110d9a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2ac
084c3d61 +0x9c9:  mov    0xc(%ebp),%eax
084c3d64 +0x9cc:  mov    %eax,(%esp)
084c3d67 +0x9cf:  call   08689968 <_ZN5CUser20SendEventBringUpInfoEv>  ; CUser::SendEventBringUpInfo()
084c3d6c +0x9d4:  mov    -0x50(%ebp),%eax
084c3d6f +0x9d7:  movzbl 0x13a(%eax),%eax
084c3d76 +0x9de:  movsbl %al,%eax
084c3d79 +0x9e1:  mov    %eax,0x4(%esp)
084c3d7d +0x9e5:  mov    0xc(%ebp),%eax
084c3d80 +0x9e8:  mov    %eax,(%esp)
084c3d83 +0x9eb:  call   0868bf14 <_ZN5CUser32select_charac_set_visible_valuesEc>  ; CUser::select_charac_set_visible_values(char)
084c3d88 +0x9f0:  mov    0xc(%ebp),%eax
084c3d8b +0x9f3:  mov    %eax,(%esp)
084c3d8e +0x9f6:  call   0868d780 <_ZN5CUser33decide_growth_power_reward_systemEv>  ; CUser::decide_growth_power_reward_system()
084c3d93 +0x9fb:  mov    $0x0,%ebx
084c3d98 +0xa00:  mov    %ebx,%eax
084c3d9a +0xa02:  add    $0x17c,%esp
084c3da0 +0xa08:  pop    %ebx
084c3da1 +0xa09:  pop    %esi
084c3da2 +0xa0a:  pop    %edi
084c3da3 +0xa0b:  pop    %ebp
084c3da4 +0xa0c:  ret
```

## 反编译 C

```c
// Inter_LoadCharac::dispatch_sig @ 0x84c3398

/* Inter_LoadCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  CGuildServerProxy *this;
  GameWorld *this_00;
  long lVar10;
  long lVar11;
  CValueStatistic *pCVar12;
  char *pcVar13;
  CEnvironment *this_01;
  undefined4 uVar14;
  undefined4 *puVar15;
  CDataManager *this_02;
  CEventScriptMng *this_03;
  int iVar16;
  undefined4 local_150;
  undefined4 local_14c;
  char acStack_148 [64];
  tm local_108;
  tm local_dc;
  STGuildProxy local_ae [26];
  CStreamGuard local_94 [8];
  time_t local_8c;
  int local_88;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  int local_54;
  uint local_50;
  int local_4c;
  tm *local_48;
  int local_44;
  int local_40;
  int local_3c;
  tm *local_38;
  char *local_34;
  SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 == 0) {
    return 0x13dd;
  }
  local_54 = param_3;
  if (*(int *)(param_3 + 8) != 0) {
    return 0x13e3;
  }
  iVar5 = CUser::get_acc_id((CUser *)param_2);
  if (iVar5 != *(int *)(local_54 + 0x140)) {
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x13f9);
    CStreamGuard::CStreamGuard(local_94,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_94);
                    /* try { // try from 084c344d to 084c34f6 has its CatchHandler @ 084c350f */
    CStreamGuard::operator<<(pCVar7,0x9d);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_94);
    CStreamGuard::operator<<(pCVar7,-1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_94);
    local_30 = CStreamGuard::GetInBuffer<SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK>(pCVar7);
    uVar8 = CUser::get_acc_id((CUser *)param_2);
    *(undefined4 *)local_30 = uVar8;
    *(undefined4 *)(local_30 + 4) = *(undefined4 *)(local_54 + 0x140);
    *(undefined4 *)(local_30 + 8) = *(undefined4 *)(local_54 + 0xc);
    CNetwork<4096,450000>::GetPeerIP2
              ((CNetwork<4096,450000> *)(param_2 + 0xe0),(char *)(local_30 + 0xc),0x14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_94);
    CStreamGuard::~CStreamGuard(local_94);
    return 0x1405;
  }
  if (*(char *)(local_54 + 0x2e) != '\0') {
    local_50 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_54 + 4));
    if (((int)local_50 < 0) ||
       (cVar4 = CUser::setCharacInfoDetail
                          ((CUser *)param_2,local_50,*(uint *)(local_54 + 4),
                           (CHARAC_DATA *)(local_54 + 0xc)), cVar4 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      return 0x1415;
    }
    local_4c = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_54 + 0x686));
    if ((*(int *)(local_54 + 0x686) != 0) && (local_4c != -1)) {
      if ((local_4c < 0) ||
         (cVar4 = CUser::setTagCharacInfo
                            ((CUser *)param_2,local_4c,*(uint *)(local_54 + 0x686),
                             (TAG_CHARAC_DATA *)(local_54 + 0x68b)), cVar4 != '\x01')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        return 0x141f;
      }
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                         local_50);
      *(undefined1 *)(iVar5 + 0x14b7) = *(undefined1 *)(local_54 + 0x68a);
    }
    CUser::SelectCharac((CUser *)param_2,local_50,local_4c);
    iVar5 = CUser::get_charac_count((CUser *)param_2);
    CUser::decideLinkCharacSlotIndexes((CUser *)param_2,(char)local_50,iVar5);
    iVar5 = CUser::get_charac_count((CUser *)param_2);
    cVar4 = CUser::checkCharacLinkType((CUser *)param_2,(char)local_50,iVar5);
    if (cVar4 == '\x01') {
      cVar4 = CUser::isCharacLinkBonusSetting((CUser *)param_2,(char)local_50);
      if (cVar4 != '\0') {
        CUser::setCharacLinkBonusSetting((CUser *)param_2,local_50,false);
      }
      CUserCharacInfo::SetCurCharacEmotion((CUserCharacInfo *)param_2,*(short *)(local_54 + 0x128));
      if ((*(char *)(local_54 + 299) < '\0') || ('\x03' < *(char *)(local_54 + 299))) {
        CUserCharacInfo::SetCurExpEquipSlotStat((CUserCharacInfo *)param_2,'\0');
      }
      else {
        CUserCharacInfo::SetCurExpEquipSlotStat
                  ((CUserCharacInfo *)param_2,*(char *)(local_54 + 299));
      }
      iVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar5 != 0) {
        STGuildProxy::STGuildProxy(local_ae);
        uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        uVar8 = CUser::GetServerGroup((CUser *)param_2);
        this = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                         (GlobalData::s_guild_proxy_mgr,uVar8);
        cVar4 = CGuildServerProxy::GetGuildInfoProxy(this,uVar9,local_ae);
        if (cVar4 != '\0') {
          CUser::SetGuildInfoProxy((CUser *)param_2,local_ae);
        }
      }
      uVar9 = CUserCharacInfo::calc_disp_help_abuse_ratio((CUserCharacInfo *)param_2,0);
      CUserCharacInfo::setCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)param_2,uVar9);
      CUser::EnableCharacInfo((CUser *)param_2,0);
      WongWork::CMailBoxHelper::ReqDBLoadMail((CUser *)param_2,*(uint *)(local_54 + 4));
      uVar9 = CUser::get_acc_id((CUser *)param_2);
      pcVar13 = (char *)(local_54 + 0x10);
      this_00 = (GameWorld *)G_GameWorld();
      cVar4 = GameWorld::InsertUserToIDMap(this_00,pcVar13,uVar9);
      if (cVar4 != '\x01') {
        uVar9 = CUser::get_acc_id((CUser *)param_2);
        uVar8 = NumberToString(uVar9,0);
        iVar5 = local_54 + 0x10;
        cMyTrace::cMyTrace(local_74,"virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)"
                           ,0x1464,5);
        cMyTrace::operator()(local_74,"Insert into IDMap Failed %s [%s]",iVar5,uVar8);
      }
      local_88 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_48 = localtime_r(&local_88,&local_dc);
      local_44 = local_48->tm_year;
      local_40 = local_48->tm_mon;
      local_3c = local_48->tm_mday;
      iVar5 = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
      if (local_88 < iVar5) {
        CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_2,true);
        local_2c = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
        local_2c = local_2c - local_88;
        iVar5 = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
        local_28 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_2);
        local_28 = iVar5 - local_28;
        pvp_assault::CAssaultMgr::NotifyGhostTime((CUser *)param_2,local_28,local_2c);
      }
      else {
        CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_2,false);
        CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)param_2,0);
        CUserCharacInfo::SetCurCharacChaosResponTime((CUserCharacInfo *)param_2,0);
      }
      CUserCharacInfo::SetCurCharacLeaveTimeout((CUserCharacInfo *)param_2,false);
      lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar11 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_2);
      iVar5 = G_CEnvironment();
      cVar4 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar11,lVar10);
      if (cVar4 != '\0') {
        CUserCharacInfo::setCurCharacTradeGoldDaily((CUserCharacInfo *)param_2,0);
      }
      CUserCharacInfo::SetCurCharacLuckPointUpdateTimeCount((CUserCharacInfo *)param_2,0);
      local_8c = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_2);
      local_38 = localtime_r(&local_8c,&local_108);
      if (((local_38->tm_year != local_44) || (local_38->tm_mon != local_40)) ||
         (local_38->tm_mday != local_3c)) {
        pCVar12 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar12,0,param_2,1);
      }
      CUser::fillUserInfo4Antibot((CUser *)param_2);
      local_34 = (char *)CUser::getUserInfo4Antibot((CUser *)param_2);
      pcVar13 = (char *)CUser::get_acc_name((CUser *)param_2);
      local_150 = StringToNumber(pcVar13);
      local_14c = 0xffffffff;
      strncpy(acStack_148,local_34,0x40);
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x38);
      this_01 = (CEnvironment *)G_CEnvironment();
      uVar8 = CEnvironment::getProcessSequence(this_01);
      (*pcVar1)(GlobalData::s_antibotChecker_,uVar8,0,0x186a1,&local_150,0x48);
      iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (*(int *)(iVar5 + 0x7b) != 0) {
        lVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        lVar10 = *(long *)(iVar5 + 0x7b);
        iVar5 = G_CEnvironment();
        local_24 = ComputeDaysScheduleTime(*(int *)(iVar5 + 0x37c),lVar10,lVar11);
        iVar5 = G_CDataManager();
        local_20 = *(int *)(iVar5 + 0xa6b4);
        if (0 < local_24) {
          CUserCharacInfo::DecreasePowerWarPoint
                    ((CUserCharacInfo *)param_2,(short)local_20 * (short)local_24);
          iVar16 = local_24 * local_20;
          uVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          uVar8 = *(undefined4 *)(iVar5 + 0x7b);
          puVar15 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          uVar2 = *puVar15;
          cMyTrace::cMyTrace(local_64,
                             "virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)",0x14e4
                             ,0);
          cMyTrace::operator()
                    (local_64,
                     "POWERWAR POINT DECREASE : user:%d, last_play_tme:%d, current_time:%d, Unconnected Days:%d, Per Day Point : %d, Decrease powerwar point:%d"
                     ,uVar2,uVar8,uVar14,local_24,local_20,iVar16);
        }
      }
      cVar4 = CPowerManager::IsPowerWarEventOn();
      if (cVar4 != '\x01') {
        iVar5 = CUserCharacInfo::GetPowerWarAssaultCount((CUserCharacInfo *)param_2);
        if ((iVar5 == 0) &&
           (iVar5 = CUserCharacInfo::GetPowerWarAssaultVictoryCount((CUserCharacInfo *)param_2),
           iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          CUserCharacInfo::ResetPowerWarAssaultRecord((CUserCharacInfo *)param_2);
        }
      }
      this_02 = (CDataManager *)G_CDataManager();
      this_03 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_02);
      cVar4 = EventClassify::CEventScriptMng::is_eventing(this_03,0x19b);
      if (cVar4 != '\0') {
        CUserCharacInfo::setCurUseBringUpMaterialTotal
                  ((CUserCharacInfo *)param_2,*(uchar *)(local_54 + 0x139));
        CUserCharacInfo::setBringUpRewardFlag
                  ((CUserCharacInfo *)param_2,*(bool *)(local_54 + 0x138));
        CUser::SendEventBringUpInfo((CUser *)param_2);
      }
      CUser::select_charac_set_visible_values((CUser *)param_2,*(char *)(local_54 + 0x13a));
      CUser::decide_growth_power_reward_system((CUser *)param_2);
      return 0;
    }
    uVar9 = CUser::get_acc_id((CUser *)param_2);
    uVar8 = NumberToString(uVar9,0);
    cMyTrace::cMyTrace(local_84,"virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)",
                       0x1430,5);
    cMyTrace::operator()
              (local_84,"LINK_LOG : ABNOMAL LINK CHARAC!! m_id (%s), slot_index(%d)",uVar8,local_50)
    ;
    return 0x1431;
  }
  return 0x140b;
}
```
