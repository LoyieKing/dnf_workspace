# set_village

`_ZN7Village11set_villageER10TownScript`

`Village::set_village(TownScript&)`

| 类 | 地址 |
|---|---|
| `Village` | `0x086c33b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c33b8  _ZN7Village11set_villageER10TownScript
#           Village::set_village(TownScript&)
# range [0x086c33b8, 0x086c3b57]
086c33b8 +0x000:  push   %ebp
086c33b9 +0x001:  mov    %esp,%ebp
086c33bb +0x003:  push   %edi
086c33bc +0x004:  push   %esi
086c33bd +0x005:  push   %ebx
086c33be +0x006:  sub    $0x46c,%esp
086c33c4 +0x00c:  mov    0xc(%ebp),%eax
086c33c7 +0x00f:  mov    (%eax),%edx
086c33c9 +0x011:  mov    0x8(%ebp),%eax
086c33cc +0x014:  mov    %edx,(%eax)
086c33ce +0x016:  mov    0xc(%ebp),%eax
086c33d1 +0x019:  mov    0x18(%eax),%eax
086c33d4 +0x01c:  cmp    $0xffffffff,%eax
086c33d7 +0x01f:  jne    086c33e2 <+0x2a>
086c33d9 +0x021:  mov    0x8(%ebp),%eax
086c33dc +0x024:  movb   $0x0,0x20(%eax)
086c33e0 +0x028:  jmp    086c3414 <+0x5c>
086c33e2 +0x02a:  mov    0x8(%ebp),%eax
086c33e5 +0x02d:  movb   $0x1,0x20(%eax)
086c33e9 +0x031:  mov    0x8(%ebp),%ebx
086c33ec +0x034:  mov    0xc(%ebp),%eax
086c33ef +0x037:  mov    0x18(%eax),%esi
086c33f2 +0x03a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c33f7 +0x03f:  mov    %esi,0x4(%esp)
086c33fb +0x043:  mov    %eax,(%esp)
086c33fe +0x046:  call   086d18c8 <_GLOBAL__I_MAX_VILLAGE_NUM+0xf9>  ; global constructors keyed to MAX_VILLAGE_NUM+0xf9
086c3403 +0x04b:  add    $0x6d4,%eax
086c3408 +0x050:  mov    %ebx,0x4(%esp)
086c340c +0x054:  mov    %eax,(%esp)
086c340f +0x057:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
086c3414 +0x05c:  mov    0xc(%ebp),%eax
086c3417 +0x05f:  add    $0x20,%eax
086c341a +0x062:  mov    %eax,(%esp)
086c341d +0x065:  call   086d3990 <_GLOBAL__I_MAX_VILLAGE_NUM+0x21c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x21c1
086c3422 +0x06a:  mov    %eax,%edx
086c3424 +0x06c:  mov    0x8(%ebp),%eax
086c3427 +0x06f:  mov    %edx,0x24(%eax)
086c342a +0x072:  mov    0x8(%ebp),%eax
086c342d +0x075:  mov    0x24(%eax),%eax
086c3430 +0x078:  test   %eax,%eax
086c3432 +0x07a:  jne    086c346c <+0xb4>
086c3434 +0x07c:  movl   $"town.townAreaScripts_.size() == 0",0x10(%esp)
086c343c +0x084:  movl   $0x2d0,0xc(%esp)
086c3444 +0x08c:  movl   $&_ZZN7Village11set_villageER10TownScriptE19__PRETTY_FUNCTION__,0x8(%esp)
086c344c +0x094:  movl   $"world.cpp",0x4(%esp)
086c3454 +0x09c:  movl   $0x1,(%esp)
086c345b +0x0a3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c3460 +0x0a8:  movb   $0x0,-0x449(%ebp)
086c3467 +0x0af:  jmp    086c3b46 <+0x78e>
086c346c +0x0b4:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c3471 +0x0b9:  mov    %eax,(%esp)
086c3474 +0x0bc:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
086c3479 +0x0c1:  test   %al,%al
086c347b +0x0c3:  je     086c348e <+0xd6>
086c347d +0x0c5:  mov    0xc(%ebp),%eax
086c3480 +0x0c8:  mov    (%eax),%eax
086c3482 +0x0ca:  cmp    $0x2,%eax
086c3485 +0x0cd:  jne    086c348e <+0xd6>
086c3487 +0x0cf:  mov    $0x1,%eax
086c348c +0x0d4:  jmp    086c3493 <+0xdb>
086c348e +0x0d6:  mov    $0x0,%eax
086c3493 +0x0db:  test   %al,%al
086c3495 +0x0dd:  je     086c3594 <+0x1dc>
086c349b +0x0e3:  mov    0x8(%ebp),%eax
086c349e +0x0e6:  mov    0x24(%eax),%eax
086c34a1 +0x0e9:  add    $0x258,%eax
086c34a6 +0x0ee:  mov    %eax,%ebx
086c34a8 +0x0f0:  imul   $0x26,%ebx,%eax
086c34ab +0x0f3:  add    $0x1,%eax
086c34ae +0x0f6:  shl    $0x2,%eax
086c34b1 +0x0f9:  mov    %eax,(%esp)
086c34b4 +0x0fc:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086c34b9 +0x101:  mov    %eax,%esi
086c34bb +0x103:  mov    %esi,%eax
086c34bd +0x105:  mov    %ebx,(%eax)
086c34bf +0x107:  mov    %esi,%eax
086c34c1 +0x109:  lea    0x4(%eax),%edi
086c34c4 +0x10c:  mov    %edi,-0x448(%ebp)
086c34ca +0x112:  lea    -0x1(%ebx),%eax
086c34cd +0x115:  mov    %eax,-0x444(%ebp)
086c34d3 +0x11b:  jmp    086c34f4 <+0x13c>
086c34d5 +0x11d:  mov    -0x448(%ebp),%eax
086c34db +0x123:  mov    %eax,(%esp)
086c34de +0x126:  call   086d214c <_GLOBAL__I_MAX_VILLAGE_NUM+0x97d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x97d
086c34e3 +0x12b:  addl   $0x98,-0x448(%ebp)
086c34ed +0x135:  subl   $0x1,-0x444(%ebp)
086c34f4 +0x13c:  cmpl   $0xffffffff,-0x444(%ebp)
086c34fb +0x143:  setne  %al
086c34fe +0x146:  test   %al,%al
086c3500 +0x148:  jne    086c34d5 <+0x11d>
086c3502 +0x14a:  jmp    086c355e <+0x1a6>
086c3504 +0x14c:  mov    %edx,-0x42c(%ebp)
086c350a +0x152:  mov    %eax,-0x430(%ebp)
086c3510 +0x158:  test   %edi,%edi
086c3512 +0x15a:  je     086c353a <+0x182>
086c3514 +0x15c:  lea    -0x1(%ebx),%eax
086c3517 +0x15f:  sub    -0x444(%ebp),%eax
086c351d +0x165:  imul   $0x98,%eax,%eax
086c3523 +0x16b:  lea    (%edi,%eax,1),%ebx
086c3526 +0x16e:  cmp    %edi,%ebx
086c3528 +0x170:  je     086c353a <+0x182>
086c352a +0x172:  sub    $0x98,%ebx
086c3530 +0x178:  mov    %ebx,(%esp)
086c3533 +0x17b:  call   086d2270 <_GLOBAL__I_MAX_VILLAGE_NUM+0xaa1>  ; global constructors keyed to MAX_VILLAGE_NUM+0xaa1
086c3538 +0x180:  jmp    086c3526 <+0x16e>
086c353a +0x182:  mov    -0x430(%ebp),%eax
086c3540 +0x188:  mov    -0x42c(%ebp),%edx
086c3546 +0x18e:  mov    %edx,%ebx
086c3548 +0x190:  mov    %eax,%edi
086c354a +0x192:  mov    %esi,(%esp)
086c354d +0x195:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c3552 +0x19a:  mov    %edi,%eax
086c3554 +0x19c:  mov    %ebx,%edx
086c3556 +0x19e:  mov    %eax,(%esp)
086c3559 +0x1a1:  call   08ae3750 <_Unwind_Resume>
086c355e +0x1a6:  mov    %esi,%eax
086c3560 +0x1a8:  lea    0x4(%eax),%edx
086c3563 +0x1ab:  mov    0x8(%ebp),%eax
086c3566 +0x1ae:  mov    %edx,0x28(%eax)
086c3569 +0x1b1:  mov    0x8(%ebp),%eax
086c356c +0x1b4:  mov    0x24(%eax),%eax
086c356f +0x1b7:  lea    0x258(%eax),%edx
086c3575 +0x1bd:  mov    0x8(%ebp),%eax
086c3578 +0x1c0:  mov    0x24(%eax),%eax
086c357b +0x1c3:  mov    %edx,0x8(%esp)
086c357f +0x1c7:  mov    %eax,0x4(%esp)
086c3583 +0x1cb:  movl   $&g_schoolMgr,(%esp)
086c358a +0x1d2:  call   086d245c <_GLOBAL__I_MAX_VILLAGE_NUM+0xc8d>  ; global constructors keyed to MAX_VILLAGE_NUM+0xc8d
086c358f +0x1d7:  jmp    086c375f <+0x3a7>
086c3594 +0x1dc:  mov    0xc(%ebp),%eax
086c3597 +0x1df:  mov    (%eax),%eax
086c3599 +0x1e1:  cmp    $0x8,%eax
086c359c +0x1e4:  jne    086c3696 <+0x2de>
086c35a2 +0x1ea:  mov    0x8(%ebp),%eax
086c35a5 +0x1ed:  mov    0x24(%eax),%eax
086c35a8 +0x1f0:  add    $0x960,%eax
086c35ad +0x1f5:  mov    %eax,-0x2c(%ebp)
086c35b0 +0x1f8:  mov    -0x2c(%ebp),%ebx
086c35b3 +0x1fb:  imul   $0x26,%ebx,%eax
086c35b6 +0x1fe:  add    $0x1,%eax
086c35b9 +0x201:  shl    $0x2,%eax
086c35bc +0x204:  mov    %eax,(%esp)
086c35bf +0x207:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086c35c4 +0x20c:  mov    %eax,%esi
086c35c6 +0x20e:  mov    %esi,%eax
086c35c8 +0x210:  mov    %ebx,(%eax)
086c35ca +0x212:  mov    %esi,%eax
086c35cc +0x214:  lea    0x4(%eax),%edi
086c35cf +0x217:  mov    %edi,-0x440(%ebp)
086c35d5 +0x21d:  lea    -0x1(%ebx),%eax
086c35d8 +0x220:  mov    %eax,-0x43c(%ebp)
086c35de +0x226:  jmp    086c35ff <+0x247>
086c35e0 +0x228:  mov    -0x440(%ebp),%eax
086c35e6 +0x22e:  mov    %eax,(%esp)
086c35e9 +0x231:  call   086d214c <_GLOBAL__I_MAX_VILLAGE_NUM+0x97d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x97d
086c35ee +0x236:  addl   $0x98,-0x440(%ebp)
086c35f8 +0x240:  subl   $0x1,-0x43c(%ebp)
086c35ff +0x247:  cmpl   $0xffffffff,-0x43c(%ebp)
086c3606 +0x24e:  setne  %al
086c3609 +0x251:  test   %al,%al
086c360b +0x253:  jne    086c35e0 <+0x228>
086c360d +0x255:  jmp    086c3669 <+0x2b1>
086c360f +0x257:  mov    %edx,-0x424(%ebp)
086c3615 +0x25d:  mov    %eax,-0x428(%ebp)
086c361b +0x263:  test   %edi,%edi
086c361d +0x265:  je     086c3645 <+0x28d>
086c361f +0x267:  lea    -0x1(%ebx),%eax
086c3622 +0x26a:  sub    -0x43c(%ebp),%eax
086c3628 +0x270:  imul   $0x98,%eax,%eax
086c362e +0x276:  lea    (%edi,%eax,1),%ebx
086c3631 +0x279:  cmp    %edi,%ebx
086c3633 +0x27b:  je     086c3645 <+0x28d>
086c3635 +0x27d:  sub    $0x98,%ebx
086c363b +0x283:  mov    %ebx,(%esp)
086c363e +0x286:  call   086d2270 <_GLOBAL__I_MAX_VILLAGE_NUM+0xaa1>  ; global constructors keyed to MAX_VILLAGE_NUM+0xaa1
086c3643 +0x28b:  jmp    086c3631 <+0x279>
086c3645 +0x28d:  mov    -0x428(%ebp),%eax
086c364b +0x293:  mov    -0x424(%ebp),%edx
086c3651 +0x299:  mov    %edx,%ebx
086c3653 +0x29b:  mov    %eax,%edi
086c3655 +0x29d:  mov    %esi,(%esp)
086c3658 +0x2a0:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c365d +0x2a5:  mov    %edi,%eax
086c365f +0x2a7:  mov    %ebx,%edx
086c3661 +0x2a9:  mov    %eax,(%esp)
086c3664 +0x2ac:  call   08ae3750 <_Unwind_Resume>
086c3669 +0x2b1:  mov    %esi,%eax
086c366b +0x2b3:  lea    0x4(%eax),%edx
086c366e +0x2b6:  mov    0x8(%ebp),%eax
086c3671 +0x2b9:  mov    %edx,0x28(%eax)
086c3674 +0x2bc:  mov    0x8(%ebp),%eax
086c3677 +0x2bf:  mov    0x24(%eax),%eax
086c367a +0x2c2:  mov    -0x2c(%ebp),%edx
086c367d +0x2c5:  mov    %edx,0x8(%esp)
086c3681 +0x2c9:  mov    %eax,0x4(%esp)
086c3685 +0x2cd:  movl   $&g_guildAgitMgr,(%esp)
086c368c +0x2d4:  call   086d2642 <_GLOBAL__I_MAX_VILLAGE_NUM+0xe73>  ; global constructors keyed to MAX_VILLAGE_NUM+0xe73
086c3691 +0x2d9:  jmp    086c375f <+0x3a7>
086c3696 +0x2de:  mov    0x8(%ebp),%eax
086c3699 +0x2e1:  mov    0x24(%eax),%eax
086c369c +0x2e4:  mov    %eax,%ebx
086c369e +0x2e6:  imul   $0x26,%ebx,%eax
086c36a1 +0x2e9:  add    $0x1,%eax
086c36a4 +0x2ec:  shl    $0x2,%eax
086c36a7 +0x2ef:  mov    %eax,(%esp)
086c36aa +0x2f2:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086c36af +0x2f7:  mov    %eax,%esi
086c36b1 +0x2f9:  mov    %esi,%eax
086c36b3 +0x2fb:  mov    %ebx,(%eax)
086c36b5 +0x2fd:  mov    %esi,%eax
086c36b7 +0x2ff:  lea    0x4(%eax),%edi
086c36ba +0x302:  mov    %edi,-0x438(%ebp)
086c36c0 +0x308:  lea    -0x1(%ebx),%eax
086c36c3 +0x30b:  mov    %eax,-0x434(%ebp)
086c36c9 +0x311:  jmp    086c36ea <+0x332>
086c36cb +0x313:  mov    -0x438(%ebp),%eax
086c36d1 +0x319:  mov    %eax,(%esp)
086c36d4 +0x31c:  call   086d214c <_GLOBAL__I_MAX_VILLAGE_NUM+0x97d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x97d
086c36d9 +0x321:  addl   $0x98,-0x438(%ebp)
086c36e3 +0x32b:  subl   $0x1,-0x434(%ebp)
086c36ea +0x332:  cmpl   $0xffffffff,-0x434(%ebp)
086c36f1 +0x339:  setne  %al
086c36f4 +0x33c:  test   %al,%al
086c36f6 +0x33e:  jne    086c36cb <+0x313>
086c36f8 +0x340:  jmp    086c3754 <+0x39c>
086c36fa +0x342:  mov    %edx,-0x41c(%ebp)
086c3700 +0x348:  mov    %eax,-0x420(%ebp)
086c3706 +0x34e:  test   %edi,%edi
086c3708 +0x350:  je     086c3730 <+0x378>
086c370a +0x352:  lea    -0x1(%ebx),%eax
086c370d +0x355:  sub    -0x434(%ebp),%eax
086c3713 +0x35b:  imul   $0x98,%eax,%eax
086c3719 +0x361:  lea    (%edi,%eax,1),%ebx
086c371c +0x364:  cmp    %edi,%ebx
086c371e +0x366:  je     086c3730 <+0x378>
086c3720 +0x368:  sub    $0x98,%ebx
086c3726 +0x36e:  mov    %ebx,(%esp)
086c3729 +0x371:  call   086d2270 <_GLOBAL__I_MAX_VILLAGE_NUM+0xaa1>  ; global constructors keyed to MAX_VILLAGE_NUM+0xaa1
086c372e +0x376:  jmp    086c371c <+0x364>
086c3730 +0x378:  mov    -0x420(%ebp),%eax
086c3736 +0x37e:  mov    -0x41c(%ebp),%edx
086c373c +0x384:  mov    %edx,%ebx
086c373e +0x386:  mov    %eax,%edi
086c3740 +0x388:  mov    %esi,(%esp)
086c3743 +0x38b:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086c3748 +0x390:  mov    %edi,%eax
086c374a +0x392:  mov    %ebx,%edx
086c374c +0x394:  mov    %eax,(%esp)
086c374f +0x397:  call   08ae3750 <_Unwind_Resume>
086c3754 +0x39c:  mov    %esi,%eax
086c3756 +0x39e:  lea    0x4(%eax),%edx
086c3759 +0x3a1:  mov    0x8(%ebp),%eax
086c375c +0x3a4:  mov    %edx,0x28(%eax)
086c375f +0x3a7:  mov    0xc(%ebp),%eax
086c3762 +0x3aa:  mov    0x3c(%eax),%edx
086c3765 +0x3ad:  mov    0x8(%ebp),%eax
086c3768 +0x3b0:  mov    %edx,0x2c(%eax)
086c376b +0x3b3:  mov    0xc(%ebp),%eax
086c376e +0x3b6:  mov    0x40(%eax),%edx
086c3771 +0x3b9:  mov    0x8(%ebp),%eax
086c3774 +0x3bc:  mov    %edx,0x30(%eax)
086c3777 +0x3bf:  lea    -0x98(%ebp),%eax
086c377d +0x3c5:  mov    %eax,(%esp)
086c3780 +0x3c8:  call   086d1d9a <_GLOBAL__I_MAX_VILLAGE_NUM+0x5cb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x5cb
086c3785 +0x3cd:  mov    0xc(%ebp),%eax
086c3788 +0x3d0:  lea    0x20(%eax),%edx
086c378b +0x3d3:  lea    -0x70(%ebp),%eax
086c378e +0x3d6:  mov    %edx,0x4(%esp)
086c3792 +0x3da:  mov    %eax,(%esp)
086c3795 +0x3dd:  call   086d39a4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x21d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x21d5
086c379a +0x3e2:  sub    $0x4,%esp
086c379d +0x3e5:  jmp    086c3adf <+0x727>
086c37a2 +0x3ea:  lea    -0x70(%ebp),%eax
086c37a5 +0x3ed:  mov    %eax,(%esp)
086c37a8 +0x3f0:  call   086d3a04 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2235>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2235
086c37ad +0x3f5:  add    $0x4,%eax
086c37b0 +0x3f8:  mov    %eax,0x4(%esp)
086c37b4 +0x3fc:  lea    -0x68(%ebp),%eax
086c37b7 +0x3ff:  mov    %eax,(%esp)
086c37ba +0x402:  call   086d296a <_GLOBAL__I_MAX_VILLAGE_NUM+0x119b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x119b
086c37bf +0x407:  lea    -0x68(%ebp),%eax
086c37c2 +0x40a:  mov    %eax,0x4(%esp)
086c37c6 +0x40e:  lea    -0x98(%ebp),%eax
086c37cc +0x414:  mov    %eax,(%esp)
086c37cf +0x417:  call   086d2a1a <_GLOBAL__I_MAX_VILLAGE_NUM+0x124b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x124b
086c37d4 +0x41c:  jmp    086c37ee <+0x436>
086c37d6 +0x41e:  mov    %edx,%ebx
086c37d8 +0x420:  mov    %eax,%esi
086c37da +0x422:  lea    -0x68(%ebp),%eax
086c37dd +0x425:  mov    %eax,(%esp)
086c37e0 +0x428:  call   086d28f6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1127>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1127
086c37e5 +0x42d:  mov    %esi,%eax
086c37e7 +0x42f:  mov    %ebx,%edx
086c37e9 +0x431:  jmp    086c3b1a <+0x762>
086c37ee +0x436:  lea    -0x68(%ebp),%eax
086c37f1 +0x439:  mov    %eax,(%esp)
086c37f4 +0x43c:  call   086d28f6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1127>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1127
086c37f9 +0x441:  mov    -0x98(%ebp),%eax
086c37ff +0x447:  test   %eax,%eax
086c3801 +0x449:  js     086c3a82 <+0x6ca>
086c3807 +0x44f:  mov    -0x98(%ebp),%edx
086c380d +0x455:  mov    0x8(%ebp),%eax
086c3810 +0x458:  mov    0x24(%eax),%eax
086c3813 +0x45b:  cmp    %eax,%edx
086c3815 +0x45d:  jge    086c3a82 <+0x6ca>
086c381b +0x463:  lea    -0x414(%ebp),%eax
086c3821 +0x469:  mov    %eax,(%esp)
086c3824 +0x46c:  call   0836cc94 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6c60>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6c60
086c3829 +0x471:  lea    -0x98(%ebp),%eax
086c382f +0x477:  add    $0x4,%eax
086c3832 +0x47a:  mov    %eax,(%esp)
086c3835 +0x47d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086c383a +0x482:  mov    %eax,0x4(%esp)
086c383e +0x486:  lea    -0x414(%ebp),%eax
086c3844 +0x48c:  mov    %eax,(%esp)
086c3847 +0x48f:  call   089dcf54 <_Z15ImportMapScriptP11STMapScriptPKc>  ; ImportMapScript(STMapScript*, char const*)
086c384c +0x494:  xor    $0x1,%eax
086c384f +0x497:  test   %al,%al
086c3851 +0x499:  je     086c3864 <+0x4ac>
086c3853 +0x49b:  movb   $0x0,-0x449(%ebp)
086c385a +0x4a2:  mov    $0x0,%ebx
086c385f +0x4a7:  jmp    086c3a6a <+0x6b2>
086c3864 +0x4ac:  mov    0x8(%ebp),%eax
086c3867 +0x4af:  mov    (%eax),%eax
086c3869 +0x4b1:  mov    0x8(%ebp),%edx
086c386c +0x4b4:  mov    0x28(%edx),%ecx
086c386f +0x4b7:  mov    -0x98(%ebp),%edx
086c3875 +0x4bd:  imul   $0x98,%edx,%edx
086c387b +0x4c3:  add    %edx,%ecx
086c387d +0x4c5:  lea    -0x414(%ebp),%edx
086c3883 +0x4cb:  mov    %edx,0xc(%esp)
086c3887 +0x4cf:  lea    -0x98(%ebp),%edx
086c388d +0x4d5:  mov    %edx,0x8(%esp)
086c3891 +0x4d9:  mov    %eax,0x4(%esp)
086c3895 +0x4dd:  mov    %ecx,(%esp)
086c3898 +0x4e0:  call   086c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>  ; Area::set_area(int, TownAreaScript&, STMapScript&)
086c389d +0x4e5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c38a2 +0x4ea:  mov    %eax,(%esp)
086c38a5 +0x4ed:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
086c38aa +0x4f2:  test   %al,%al
086c38ac +0x4f4:  je     086c38ca <+0x512>
086c38ae +0x4f6:  mov    0xc(%ebp),%eax
086c38b1 +0x4f9:  mov    (%eax),%eax
086c38b3 +0x4fb:  cmp    $0x2,%eax
086c38b6 +0x4fe:  jne    086c38ca <+0x512>
086c38b8 +0x500:  mov    -0x98(%ebp),%eax
086c38be +0x506:  cmp    $0x4,%eax
086c38c1 +0x509:  jne    086c38ca <+0x512>
086c38c3 +0x50b:  mov    $0x1,%eax
086c38c8 +0x510:  jmp    086c38cf <+0x517>
086c38ca +0x512:  mov    $0x0,%eax
086c38cf +0x517:  test   %al,%al
086c38d1 +0x519:  je     086c394b <+0x593>
086c38d3 +0x51b:  mov    0x8(%ebp),%eax
086c38d6 +0x51e:  mov    0x24(%eax),%eax
086c38d9 +0x521:  mov    %eax,-0x28(%ebp)
086c38dc +0x524:  jmp    086c3924 <+0x56c>
086c38de +0x526:  mov    -0x28(%ebp),%eax
086c38e1 +0x529:  mov    %eax,-0x98(%ebp)
086c38e7 +0x52f:  mov    0x8(%ebp),%eax
086c38ea +0x532:  mov    (%eax),%eax
086c38ec +0x534:  mov    0x8(%ebp),%edx
086c38ef +0x537:  mov    0x28(%edx),%ecx
086c38f2 +0x53a:  mov    -0x98(%ebp),%edx
086c38f8 +0x540:  imul   $0x98,%edx,%edx
086c38fe +0x546:  add    %edx,%ecx
086c3900 +0x548:  lea    -0x414(%ebp),%edx
086c3906 +0x54e:  mov    %edx,0xc(%esp)
086c390a +0x552:  lea    -0x98(%ebp),%edx
086c3910 +0x558:  mov    %edx,0x8(%esp)
086c3914 +0x55c:  mov    %eax,0x4(%esp)
086c3918 +0x560:  mov    %ecx,(%esp)
086c391b +0x563:  call   086c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>  ; Area::set_area(int, TownAreaScript&, STMapScript&)
086c3920 +0x568:  addl   $0x1,-0x28(%ebp)
086c3924 +0x56c:  mov    0x8(%ebp),%eax
086c3927 +0x56f:  mov    0x24(%eax),%eax
086c392a +0x572:  add    $0x258,%eax
086c392f +0x577:  cmp    -0x28(%ebp),%eax
086c3932 +0x57a:  setg   %al
086c3935 +0x57d:  test   %al,%al
086c3937 +0x57f:  jne    086c38de <+0x526>
086c3939 +0x581:  mov    0x8(%ebp),%eax
086c393c +0x584:  mov    0x24(%eax),%eax
086c393f +0x587:  lea    0x258(%eax),%edx
086c3945 +0x58d:  mov    0x8(%ebp),%eax
086c3948 +0x590:  mov    %edx,0x24(%eax)
086c394b +0x593:  mov    0xc(%ebp),%eax
086c394e +0x596:  mov    (%eax),%eax
086c3950 +0x598:  cmp    $0x8,%eax
086c3953 +0x59b:  jne    086c3a48 <+0x690>
086c3959 +0x5a1:  mov    -0x98(%ebp),%eax
086c395f +0x5a7:  cmp    $0x3,%eax
086c3962 +0x5aa:  jg     086c3a48 <+0x690>
086c3968 +0x5b0:  mov    0x8(%ebp),%eax
086c396b +0x5b3:  mov    0x24(%eax),%eax
086c396e +0x5b6:  add    $0x960,%eax
086c3973 +0x5bb:  mov    %eax,-0x24(%ebp)
086c3976 +0x5be:  movl   $0x0,-0x20(%ebp)
086c397d +0x5c5:  mov    -0x98(%ebp),%eax
086c3983 +0x5cb:  test   %eax,%eax
086c3985 +0x5cd:  jne    086c3992 <+0x5da>
086c3987 +0x5cf:  mov    0x8(%ebp),%eax
086c398a +0x5d2:  mov    0x24(%eax),%eax
086c398d +0x5d5:  mov    %eax,-0x20(%ebp)
086c3990 +0x5d8:  jmp    086c39ed <+0x635>
086c3992 +0x5da:  mov    -0x98(%ebp),%eax
086c3998 +0x5e0:  cmp    $0x1,%eax
086c399b +0x5e3:  jne    086c39ab <+0x5f3>
086c399d +0x5e5:  mov    0x8(%ebp),%eax
086c39a0 +0x5e8:  mov    0x24(%eax),%eax
086c39a3 +0x5eb:  add    $0x1,%eax
086c39a6 +0x5ee:  mov    %eax,-0x20(%ebp)
086c39a9 +0x5f1:  jmp    086c39ed <+0x635>
086c39ab +0x5f3:  mov    -0x98(%ebp),%eax
086c39b1 +0x5f9:  cmp    $0x2,%eax
086c39b4 +0x5fc:  jne    086c39c4 <+0x60c>
086c39b6 +0x5fe:  mov    0x8(%ebp),%eax
086c39b9 +0x601:  mov    0x24(%eax),%eax
086c39bc +0x604:  add    $0x2,%eax
086c39bf +0x607:  mov    %eax,-0x20(%ebp)
086c39c2 +0x60a:  jmp    086c39ed <+0x635>
086c39c4 +0x60c:  mov    -0x98(%ebp),%eax
086c39ca +0x612:  cmp    $0x3,%eax
086c39cd +0x615:  jne    086c39ed <+0x635>
086c39cf +0x617:  mov    0x8(%ebp),%eax
086c39d2 +0x61a:  mov    0x24(%eax),%eax
086c39d5 +0x61d:  add    $0x3,%eax
086c39d8 +0x620:  mov    %eax,-0x20(%ebp)
086c39db +0x623:  mov    0x8(%ebp),%eax
086c39de +0x626:  mov    0x24(%eax),%eax
086c39e1 +0x629:  lea    0x960(%eax),%edx
086c39e7 +0x62f:  mov    0x8(%ebp),%eax
086c39ea +0x632:  mov    %edx,0x24(%eax)
086c39ed +0x635:  mov    -0x20(%ebp),%eax
086c39f0 +0x638:  mov    %eax,-0x1c(%ebp)
086c39f3 +0x63b:  jmp    086c3a3b <+0x683>
086c39f5 +0x63d:  mov    -0x1c(%ebp),%eax
086c39f8 +0x640:  mov    %eax,-0x98(%ebp)
086c39fe +0x646:  mov    0x8(%ebp),%eax
086c3a01 +0x649:  mov    (%eax),%eax
086c3a03 +0x64b:  mov    0x8(%ebp),%edx
086c3a06 +0x64e:  mov    0x28(%edx),%ecx
086c3a09 +0x651:  mov    -0x98(%ebp),%edx
086c3a0f +0x657:  imul   $0x98,%edx,%edx
086c3a15 +0x65d:  add    %edx,%ecx
086c3a17 +0x65f:  lea    -0x414(%ebp),%edx
086c3a1d +0x665:  mov    %edx,0xc(%esp)
086c3a21 +0x669:  lea    -0x98(%ebp),%edx
086c3a27 +0x66f:  mov    %edx,0x8(%esp)
086c3a2b +0x673:  mov    %eax,0x4(%esp)
086c3a2f +0x677:  mov    %ecx,(%esp)
086c3a32 +0x67a:  call   086c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>  ; Area::set_area(int, TownAreaScript&, STMapScript&)
086c3a37 +0x67f:  addl   $0x4,-0x1c(%ebp)
086c3a3b +0x683:  mov    -0x1c(%ebp),%eax
086c3a3e +0x686:  cmp    -0x24(%ebp),%eax
086c3a41 +0x689:  setl   %al
086c3a44 +0x68c:  test   %al,%al
086c3a46 +0x68e:  jne    086c39f5 <+0x63d>
086c3a48 +0x690:  mov    $0x1,%ebx
086c3a4d +0x695:  jmp    086c3a6a <+0x6b2>
086c3a4f +0x697:  mov    %edx,%ebx
086c3a51 +0x699:  mov    %eax,%esi
086c3a53 +0x69b:  lea    -0x414(%ebp),%eax
086c3a59 +0x6a1:  mov    %eax,(%esp)
086c3a5c +0x6a4:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
086c3a61 +0x6a9:  mov    %esi,%eax
086c3a63 +0x6ab:  mov    %ebx,%edx
086c3a65 +0x6ad:  jmp    086c3b1a <+0x762>
086c3a6a +0x6b2:  lea    -0x414(%ebp),%eax
086c3a70 +0x6b8:  mov    %eax,(%esp)
086c3a73 +0x6bb:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
086c3a78 +0x6c0:  test   %ebx,%ebx
086c3a7a +0x6c2:  je     086c3b38 <+0x780>
086c3a80 +0x6c8:  jmp    086c3ac2 <+0x70a>
086c3a82 +0x6ca:  mov    -0x98(%ebp),%ebx
086c3a88 +0x6d0:  movl   $0x5,0xc(%esp)
086c3a90 +0x6d8:  movl   $0x32e,0x8(%esp)
086c3a98 +0x6e0:  movl   $&_ZZN7Village11set_villageER10TownScriptE19__PRETTY_FUNCTION__,0x4(%esp)
086c3aa0 +0x6e8:  lea    -0x40(%ebp),%eax
086c3aa3 +0x6eb:  mov    %eax,(%esp)
086c3aa6 +0x6ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c3aab +0x6f3:  mov    %ebx,0x8(%esp)
086c3aaf +0x6f7:  movl   $"temp_area.areaIndex_ %d",0x4(%esp)
086c3ab7 +0x6ff:  lea    -0x40(%ebp),%eax
086c3aba +0x702:  mov    %eax,(%esp)
086c3abd +0x705:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c3ac2 +0x70a:  lea    -0x30(%ebp),%eax
086c3ac5 +0x70d:  movl   $0x0,0x8(%esp)
086c3acd +0x715:  lea    -0x70(%ebp),%edx
086c3ad0 +0x718:  mov    %edx,0x4(%esp)
086c3ad4 +0x71c:  mov    %eax,(%esp)
086c3ad7 +0x71f:  call   086d3d14 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2545>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2545
086c3adc +0x724:  sub    $0x4,%esp
086c3adf +0x727:  mov    0xc(%ebp),%eax
086c3ae2 +0x72a:  lea    0x20(%eax),%edx
086c3ae5 +0x72d:  lea    -0x6c(%ebp),%eax
086c3ae8 +0x730:  mov    %edx,0x4(%esp)
086c3aec +0x734:  mov    %eax,(%esp)
086c3aef +0x737:  call   086d39ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x21fb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x21fb
086c3af4 +0x73c:  sub    $0x4,%esp
086c3af7 +0x73f:  lea    -0x6c(%ebp),%eax
086c3afa +0x742:  mov    %eax,0x4(%esp)
086c3afe +0x746:  lea    -0x70(%ebp),%eax
086c3b01 +0x749:  mov    %eax,(%esp)
086c3b04 +0x74c:  call   086d39f0 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2221>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2221
086c3b09 +0x751:  test   %al,%al
086c3b0b +0x753:  jne    086c37a2 <+0x3ea>
086c3b11 +0x759:  movb   $0x1,-0x449(%ebp)
086c3b18 +0x760:  jmp    086c3b38 <+0x780>
086c3b1a +0x762:  mov    %edx,%ebx
086c3b1c +0x764:  mov    %eax,%esi
086c3b1e +0x766:  lea    -0x98(%ebp),%eax
086c3b24 +0x76c:  mov    %eax,(%esp)
086c3b27 +0x76f:  call   086d28f6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1127>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1127
086c3b2c +0x774:  mov    %esi,%eax
086c3b2e +0x776:  mov    %ebx,%edx
086c3b30 +0x778:  mov    %eax,(%esp)
086c3b33 +0x77b:  call   08ae3750 <_Unwind_Resume>
086c3b38 +0x780:  lea    -0x98(%ebp),%eax
086c3b3e +0x786:  mov    %eax,(%esp)
086c3b41 +0x789:  call   086d28f6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1127>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1127
086c3b46 +0x78e:  movzbl -0x449(%ebp),%eax
086c3b4d +0x795:  lea    -0xc(%ebp),%esp
086c3b50 +0x798:  add    $0x0,%esp
086c3b53 +0x79b:  pop    %ebx
086c3b54 +0x79c:  pop    %esi
086c3b55 +0x79d:  pop    %edi
086c3b56 +0x79e:  pop    %ebp
086c3b57 +0x79f:  ret
```

## 反编译 C

```c
// Village::set_village @ 0x86c33b8

/* Village::set_village(TownScript&) */

undefined1 __thiscall Village::set_village(Village *this,TownScript *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GameWorld *pGVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 local_44d;
  Area *local_44c;
  int local_448;
  Area *local_444;
  int local_440;
  Area *local_43c;
  int local_438;
  STMapScript local_418 [892];
  int local_9c;
  string asStack_98 [36];
  map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
  local_74 [4];
  map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
  local_70 [4];
  TownAreaScript local_6c [40];
  cMyTrace local_44 [16];
  _Rb_tree_iterator<std::pair<int_const,TownAreaScript>> local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (*(int *)(param_1 + 0x18) == -1) {
    this[0x20] = (Village)0x0;
  }
  else {
    this[0x20] = (Village)0x1;
    iVar5 = G_CDataManager();
    iVar5 = CDataManager::get_dungeon(iVar5);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(iVar5 + 0x6d4),(int *)this);
  }
  uVar3 = std::
          map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
          ::size((map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
                  *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x24) = uVar3;
  if (*(int *)(this + 0x24) == 0) {
    LogManager::logFormat
              (1,"world.cpp","bool Village::set_village(TownScript&)",0x2d0,
               "town.townAreaScripts_.size() == 0");
    local_44d = 0;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(pGVar4);
    if ((cVar2 == '\0') || (*(int *)param_1 != 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_448 = *(int *)(this + 0x24);
      iVar5 = local_448 + 600;
      piVar6 = operator_new__((iVar5 * 0x26 + 1) * 4);
      *piVar6 = iVar5;
      local_44c = (Area *)(piVar6 + 1);
      for (local_448 = local_448 + 599; local_448 != -1; local_448 = local_448 + -1) {
                    /* try { // try from 086c34de to 086c34e2 has its CatchHandler @ 086c3504 */
        Area::Area(local_44c);
        local_44c = local_44c + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
      CSchoolMgr::SetSchoolArea
                ((CSchoolMgr *)g_schoolMgr,*(int *)(this + 0x24),*(int *)(this + 0x24) + 600);
    }
    else if (*(int *)param_1 == 8) {
      local_440 = *(int *)(this + 0x24);
      iVar5 = local_440 + 0x960;
      local_30 = iVar5;
      piVar6 = operator_new__((iVar5 * 0x26 + 1) * 4);
      *piVar6 = iVar5;
      local_444 = (Area *)(piVar6 + 1);
      for (local_440 = local_440 + 0x95f; local_440 != -1; local_440 = local_440 + -1) {
                    /* try { // try from 086c35e9 to 086c35ed has its CatchHandler @ 086c360f */
        Area::Area(local_444);
        local_444 = local_444 + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
      CGuildAgitManager::SetGuildAgitAreaDomain
                ((CGuildAgitManager *)g_guildAgitMgr,*(int *)(this + 0x24),local_30);
    }
    else {
      local_438 = *(int *)(this + 0x24);
      piVar6 = operator_new__((local_438 * 0x26 + 1) * 4);
      *piVar6 = local_438;
      local_43c = (Area *)(piVar6 + 1);
      while (local_438 = local_438 + -1, local_438 != -1) {
                    /* try { // try from 086c36d4 to 086c36d8 has its CatchHandler @ 086c36fa */
        Area::Area(local_43c);
        local_43c = local_43c + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
    }
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x40);
    TownAreaScript::TownAreaScript((TownAreaScript *)&local_9c);
                    /* try { // try from 086c3795 to 086c37be has its CatchHandler @ 086c3b1a */
    std::map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
    ::begin(local_74);
    while( true ) {
      std::
      map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>::
      end(local_70);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,TownAreaScript>> *)local_74,
                         (_Rb_tree_iterator *)local_70);
      if (cVar2 == '\0') break;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,TownAreaScript>> *)local_74);
      TownAreaScript::TownAreaScript(local_6c,(TownAreaScript *)(iVar5 + 4));
                    /* try { // try from 086c37cf to 086c37d3 has its CatchHandler @ 086c37d6 */
      TownAreaScript::operator=((TownAreaScript *)&local_9c,local_6c);
                    /* try { // try from 086c37f4 to 086c3828 has its CatchHandler @ 086c3b1a */
      TownAreaScript::~TownAreaScript(local_6c);
      iVar5 = local_9c;
      if ((local_9c < 0) || (*(int *)(this + 0x24) <= local_9c)) {
        cMyTrace::cMyTrace(local_44,"bool Village::set_village(TownScript&)",0x32e,5);
        cMyTrace::operator()(local_44,"temp_area.areaIndex_ %d",iVar5);
      }
      else {
        STMapScript::STMapScript(local_418);
                    /* try { // try from 086c3835 to 086c3a36 has its CatchHandler @ 086c3a4f */
        pcVar7 = (char *)std::string::c_str(asStack_98);
        cVar2 = ImportMapScript(local_418,pcVar7);
        if (cVar2 == '\x01') {
          Area::set_area((Area *)(*(int *)(this + 0x28) + local_9c * 0x98),*(int *)this,
                         (TownAreaScript *)&local_9c,local_418);
          pGVar4 = (GameWorld *)G_GameWorld();
          cVar2 = GameWorld::IsSchoolPvPChannel(pGVar4);
          if (((cVar2 == '\0') || (*(int *)param_1 != 2)) || (local_9c != 4)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            for (local_2c = *(int *)(this + 0x24); local_2c < *(int *)(this + 0x24) + 600;
                local_2c = local_2c + 1) {
              local_9c = local_2c;
              Area::set_area((Area *)(*(int *)(this + 0x28) + local_2c * 0x98),*(int *)this,
                             (TownAreaScript *)&local_9c,local_418);
            }
            *(int *)(this + 0x24) = *(int *)(this + 0x24) + 600;
          }
          if ((*(int *)param_1 == 8) && (local_9c < 4)) {
            local_28 = *(int *)(this + 0x24) + 0x960;
            local_24 = 0;
            if (local_9c == 0) {
              local_24 = *(int *)(this + 0x24);
            }
            else if (local_9c == 1) {
              local_24 = *(int *)(this + 0x24) + 1;
            }
            else if (local_9c == 2) {
              local_24 = *(int *)(this + 0x24) + 2;
            }
            else if (local_9c == 3) {
              local_24 = *(int *)(this + 0x24) + 3;
              *(int *)(this + 0x24) = *(int *)(this + 0x24) + 0x960;
            }
            for (local_20 = local_24; local_20 < local_28; local_20 = local_20 + 4) {
              local_9c = local_20;
              Area::set_area((Area *)(*(int *)(this + 0x28) + local_20 * 0x98),*(int *)this,
                             (TownAreaScript *)&local_9c,local_418);
            }
          }
          bVar1 = true;
        }
        else {
          local_44d = 0;
          bVar1 = false;
        }
                    /* try { // try from 086c3a73 to 086c3af3 has its CatchHandler @ 086c3b1a */
        STMapScript::~STMapScript(local_418);
        if (!bVar1) goto LAB_086c3b38;
      }
      std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator++
                (local_34,(int)local_74);
    }
    local_44d = 1;
LAB_086c3b38:
    TownAreaScript::~TownAreaScript((TownAreaScript *)&local_9c);
  }
  return local_44d;
}
```
