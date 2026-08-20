# GetRewardItem

`_ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs`

`CHARAC_LOAD_MERCENARY::GetRewardItem(CUser*, competition_reward_result&, Inven_Item&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b3276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b3276  _ZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSs
#           CHARAC_LOAD_MERCENARY::GetRewardItem(CUser*, competition_reward_result&, Inven_Item&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x081b3276, 0x081b3813]
081b3276 +0x000:  push   %ebp
081b3277 +0x001:  mov    %esp,%ebp
081b3279 +0x003:  push   %edi
081b327a +0x004:  push   %esi
081b327b +0x005:  push   %ebx
081b327c +0x006:  sub    $0x6c,%esp
081b327f +0x009:  cmpl   $0x0,0xc(%ebp)
081b3283 +0x00d:  jne    081b328f <+0x19>
081b3285 +0x00f:  mov    $0x0,%eax
081b328a +0x014:  jmp    081b3808 <+0x592>
081b328f +0x019:  mov    0x14(%ebp),%eax
081b3292 +0x01c:  mov    %eax,(%esp)
081b3295 +0x01f:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
081b329a +0x024:  movl   $&_ZN31MercenaryHardCodingSettingValueL29MERCENARY_BASE_POSTAL_MESSAGEE,0x4(%esp)
081b32a2 +0x02c:  mov    0x18(%ebp),%eax
081b32a5 +0x02f:  mov    %eax,(%esp)
081b32a8 +0x032:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081b32ad +0x037:  mov    0x8(%ebp),%eax
081b32b0 +0x03a:  movzwl 0x4(%eax),%eax
081b32b4 +0x03e:  movswl %ax,%edx
081b32b7 +0x041:  mov    0x8(%ebp),%eax
081b32ba +0x044:  movzbl 0x30(%eax),%eax
081b32be +0x048:  movsbl %al,%eax
081b32c1 +0x04b:  mov    %edx,0x8(%esp)
081b32c5 +0x04f:  mov    %eax,0x4(%esp)
081b32c9 +0x053:  mov    0x8(%ebp),%eax
081b32cc +0x056:  mov    %eax,(%esp)
081b32cf +0x059:  call   081b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const
081b32d4 +0x05e:  xor    $0x1,%eax
081b32d7 +0x061:  test   %al,%al
081b32d9 +0x063:  je     081b32e5 <+0x6f>
081b32db +0x065:  mov    $0x0,%eax
081b32e0 +0x06a:  jmp    081b3808 <+0x592>
081b32e5 +0x06f:  mov    0x8(%ebp),%eax
081b32e8 +0x072:  movzbl 0x30(%eax),%eax
081b32ec +0x076:  movsbl %al,%ebx
081b32ef +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b32f4 +0x07e:  add    $0xa91c,%eax
081b32f9 +0x083:  mov    %ebx,0x4(%esp)
081b32fd +0x087:  mov    %eax,(%esp)
081b3300 +0x08a:  call   081b484e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xc2>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xc2
081b3305 +0x08f:  movzwl 0x14(%eax),%eax
081b3309 +0x093:  test   %ax,%ax
081b330c +0x096:  sete   %al
081b330f +0x099:  test   %al,%al
081b3311 +0x09b:  je     081b331a <+0xa4>
081b3313 +0x09d:  mov    0x8(%ebp),%eax
081b3316 +0x0a0:  movb   $0x0,0x30(%eax)
081b331a +0x0a4:  mov    $&_ZGVZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,%eax
081b331f +0x0a9:  movzbl (%eax),%eax
081b3322 +0x0ac:  test   %al,%al
081b3324 +0x0ae:  jne    081b337a <+0x104>
081b3326 +0x0b0:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b332d +0x0b7:  call   08725330 <__cxa_guard_acquire>
081b3332 +0x0bc:  test   %eax,%eax
081b3334 +0x0be:  setne  %al
081b3337 +0x0c1:  test   %al,%al
081b3339 +0x0c3:  je     081b337a <+0x104>
081b333b +0x0c5:  mov    $0x0,%ebx
081b3340 +0x0ca:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3347 +0x0d1:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
081b334c +0x0d6:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3353 +0x0dd:  call   08725250 <__cxa_guard_release>
081b3358 +0x0e2:  jmp    081b337a <+0x104>
081b335a +0x0e4:  mov    %edx,%esi
081b335c +0x0e6:  mov    %eax,%edi
081b335e +0x0e8:  test   %bl,%bl
081b3360 +0x0ea:  jne    081b336e <+0xf8>
081b3362 +0x0ec:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3369 +0x0f3:  call   087252c0 <__cxa_guard_abort>
081b336e +0x0f8:  mov    %edi,%eax
081b3370 +0x0fa:  mov    %esi,%edx
081b3372 +0x0fc:  mov    %eax,(%esp)
081b3375 +0x0ff:  call   08ae3750 <_Unwind_Resume>
081b337a +0x104:  mov    0xc(%ebp),%eax
081b337d +0x107:  mov    %eax,0x4(%esp)
081b3381 +0x10b:  mov    0x8(%ebp),%eax
081b3384 +0x10e:  mov    %eax,(%esp)
081b3387 +0x111:  call   081b2d6a <_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser>  ; CHARAC_LOAD_MERCENARY::CalcItemDropRate(CUser*) const
081b338c +0x116:  mov    %eax,-0x48(%ebp)
081b338f +0x119:  movl   $0x2710,-0x60(%ebp)
081b3396 +0x120:  lea    -0x60(%ebp),%eax
081b3399 +0x123:  mov    %eax,0x4(%esp)
081b339d +0x127:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b33a4 +0x12e:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b33a9 +0x133:  mov    %eax,&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE12itemDropDice
081b33ae +0x138:  mov    0xc(%ebp),%eax
081b33b1 +0x13b:  movzbl 0x6ef68(%eax),%eax
081b33b8 +0x142:  test   %al,%al
081b33ba +0x144:  je     081b33c6 <+0x150>
081b33bc +0x146:  movl   $0x0,&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE12itemDropDice
081b33c6 +0x150:  mov    &_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE12itemDropDice,%eax
081b33cb +0x155:  cmp    -0x48(%ebp),%eax
081b33ce +0x158:  jl     081b33da <+0x164>
081b33d0 +0x15a:  mov    $0x0,%eax
081b33d5 +0x15f:  jmp    081b3808 <+0x592>
081b33da +0x164:  mov    0x8(%ebp),%eax
081b33dd +0x167:  movzbl 0x30(%eax),%eax
081b33e1 +0x16b:  movsbl %al,%ebx
081b33e4 +0x16e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b33e9 +0x173:  add    $0xa91c,%eax
081b33ee +0x178:  mov    %ebx,0x4(%esp)
081b33f2 +0x17c:  mov    %eax,(%esp)
081b33f5 +0x17f:  call   081b484e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xc2>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xc2
081b33fa +0x184:  mov    %eax,-0x44(%ebp)
081b33fd +0x187:  mov    -0x44(%ebp),%eax
081b3400 +0x18a:  mov    0x10(%eax),%eax
081b3403 +0x18d:  mov    %eax,-0x5c(%ebp)
081b3406 +0x190:  lea    -0x5c(%ebp),%eax
081b3409 +0x193:  mov    %eax,0x4(%esp)
081b340d +0x197:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3414 +0x19e:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b3419 +0x1a3:  mov    %eax,&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE9groupDice
081b341e +0x1a8:  mov    0xc(%ebp),%eax
081b3421 +0x1ab:  mov    %eax,(%esp)
081b3424 +0x1ae:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081b3429 +0x1b3:  test   %al,%al
081b342b +0x1b5:  je     081b346e <+0x1f8>
081b342d +0x1b7:  mov    -0x44(%ebp),%eax
081b3430 +0x1ba:  mov    0x10(%eax),%edx
081b3433 +0x1bd:  mov    &_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE9groupDice,%eax
081b3438 +0x1c2:  mov    %edx,0xc(%esp)
081b343c +0x1c6:  mov    %eax,0x8(%esp)
081b3440 +0x1ca:  movl   $"dice: %d/%d\n",0x4(%esp)
081b3448 +0x1d2:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE6buffer,(%esp)
081b344f +0x1d9:  call   0807e440 <_init+0xd38>
081b3454 +0x1de:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE6buffer,0x8(%esp)
081b345c +0x1e6:  mov    0xc(%ebp),%eax
081b345f +0x1e9:  mov    %eax,0x4(%esp)
081b3463 +0x1ed:  mov    0x8(%ebp),%eax
081b3466 +0x1f0:  mov    %eax,(%esp)
081b3469 +0x1f3:  call   081b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>  ; CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const
081b346e +0x1f8:  movl   $0x0,-0x40(%ebp)
081b3475 +0x1ff:  movl   $0x0,-0x3c(%ebp)
081b347c +0x206:  movl   $0x0,-0x3c(%ebp)
081b3483 +0x20d:  jmp    081b34ad <+0x237>
081b3485 +0x20f:  mov    -0x44(%ebp),%eax
081b3488 +0x212:  lea    0x4(%eax),%edx
081b348b +0x215:  mov    -0x3c(%ebp),%eax
081b348e +0x218:  mov    %eax,0x4(%esp)
081b3492 +0x21c:  mov    %edx,(%esp)
081b3495 +0x21f:  call   081b4a4c <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x2c0>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x2c0
081b349a +0x224:  mov    (%eax),%eax
081b349c +0x226:  add    %eax,-0x40(%ebp)
081b349f +0x229:  mov    &_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE9groupDice,%eax
081b34a4 +0x22e:  cmp    %eax,-0x40(%ebp)
081b34a7 +0x231:  jge    081b34c7 <+0x251>
081b34a9 +0x233:  addl   $0x1,-0x3c(%ebp)
081b34ad +0x237:  mov    -0x44(%ebp),%eax
081b34b0 +0x23a:  add    $0x4,%eax
081b34b3 +0x23d:  mov    %eax,(%esp)
081b34b6 +0x240:  call   081b4a2a <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x29e>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x29e
081b34bb +0x245:  cmp    -0x3c(%ebp),%eax
081b34be +0x248:  seta   %al
081b34c1 +0x24b:  test   %al,%al
081b34c3 +0x24d:  jne    081b3485 <+0x20f>
081b34c5 +0x24f:  jmp    081b34c8 <+0x252>
081b34c7 +0x251:  nop
081b34c8 +0x252:  mov    -0x44(%ebp),%eax
081b34cb +0x255:  add    $0x4,%eax
081b34ce +0x258:  mov    %eax,(%esp)
081b34d1 +0x25b:  call   081b4a2a <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x29e>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x29e
081b34d6 +0x260:  cmp    -0x3c(%ebp),%eax
081b34d9 +0x263:  setbe  %al
081b34dc +0x266:  test   %al,%al
081b34de +0x268:  je     081b34e7 <+0x271>
081b34e0 +0x26a:  movl   $0x0,-0x3c(%ebp)
081b34e7 +0x271:  mov    -0x44(%ebp),%eax
081b34ea +0x274:  lea    0x4(%eax),%edx
081b34ed +0x277:  mov    -0x3c(%ebp),%eax
081b34f0 +0x27a:  mov    %eax,0x4(%esp)
081b34f4 +0x27e:  mov    %edx,(%esp)
081b34f7 +0x281:  call   081b4a4c <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x2c0>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x2c0
081b34fc +0x286:  mov    %eax,-0x38(%ebp)
081b34ff +0x289:  mov    -0x38(%ebp),%eax
081b3502 +0x28c:  add    $0x4,%eax
081b3505 +0x28f:  mov    %eax,0x4(%esp)
081b3509 +0x293:  mov    0x18(%ebp),%eax
081b350c +0x296:  mov    %eax,(%esp)
081b350f +0x299:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
081b3514 +0x29e:  mov    -0x38(%ebp),%eax
081b3517 +0x2a1:  add    $0x8,%eax
081b351a +0x2a4:  mov    %eax,(%esp)
081b351d +0x2a7:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
081b3522 +0x2ac:  xor    $0x1,%eax
081b3525 +0x2af:  test   %al,%al
081b3527 +0x2b1:  je     081b370a <+0x494>
081b352d +0x2b7:  mov    -0x38(%ebp),%eax
081b3530 +0x2ba:  mov    0x20(%eax),%eax
081b3533 +0x2bd:  mov    %eax,-0x58(%ebp)
081b3536 +0x2c0:  lea    -0x58(%ebp),%eax
081b3539 +0x2c3:  mov    %eax,0x4(%esp)
081b353d +0x2c7:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3544 +0x2ce:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b3549 +0x2d3:  mov    %eax,&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE7mobDice
081b354e +0x2d8:  mov    &_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE7mobDice,%eax
081b3553 +0x2dd:  mov    -0x38(%ebp),%edx
081b3556 +0x2e0:  add    $0x8,%edx
081b3559 +0x2e3:  mov    %eax,0x4(%esp)
081b355d +0x2e7:  mov    %edx,(%esp)
081b3560 +0x2ea:  call   081b4a66 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x2da>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x2da
081b3565 +0x2ef:  mov    %eax,-0x64(%ebp)
081b3568 +0x2f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b356d +0x2f7:  lea    0xa8a8(%eax),%ecx
081b3573 +0x2fd:  lea    -0x68(%ebp),%eax
081b3576 +0x300:  lea    -0x64(%ebp),%edx
081b3579 +0x303:  mov    %edx,0x8(%esp)
081b357d +0x307:  mov    %ecx,0x4(%esp)
081b3581 +0x30b:  mov    %eax,(%esp)
081b3584 +0x30e:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
081b3589 +0x313:  sub    $0x4,%esp
081b358c +0x316:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b3591 +0x31b:  lea    0xa8a8(%eax),%edx
081b3597 +0x321:  lea    -0x54(%ebp),%eax
081b359a +0x324:  mov    %edx,0x4(%esp)
081b359e +0x328:  mov    %eax,(%esp)
081b35a1 +0x32b:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
081b35a6 +0x330:  sub    $0x4,%esp
081b35a9 +0x333:  lea    -0x54(%ebp),%eax
081b35ac +0x336:  mov    %eax,0x4(%esp)
081b35b0 +0x33a:  lea    -0x68(%ebp),%eax
081b35b3 +0x33d:  mov    %eax,(%esp)
081b35b6 +0x340:  call   081b47d4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x48>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x48
081b35bb +0x345:  test   %al,%al
081b35bd +0x347:  je     081b3700 <+0x48a>
081b35c3 +0x34d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b35c8 +0x352:  add    $0xa884,%eax
081b35cd +0x357:  mov    %eax,-0x34(%ebp)
081b35d0 +0x35a:  mov    -0x34(%ebp),%eax
081b35d3 +0x35d:  mov    %eax,(%esp)
081b35d6 +0x360:  call   081b4ae4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x358>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x358
081b35db +0x365:  mov    %eax,%ebx
081b35dd +0x367:  lea    -0x68(%ebp),%eax
081b35e0 +0x36a:  mov    %eax,(%esp)
081b35e3 +0x36d:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
081b35e8 +0x372:  mov    0x4(%eax),%eax
081b35eb +0x375:  cmp    %eax,%ebx
081b35ed +0x377:  setle  %al
081b35f0 +0x37a:  test   %al,%al
081b35f2 +0x37c:  je     081b35fe <+0x388>
081b35f4 +0x37e:  mov    $0x0,%eax
081b35f9 +0x383:  jmp    081b3808 <+0x592>
081b35fe +0x388:  lea    -0x68(%ebp),%eax
081b3601 +0x38b:  mov    %eax,(%esp)
081b3604 +0x38e:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
081b3609 +0x393:  mov    0x4(%eax),%eax
081b360c +0x396:  mov    %eax,0x4(%esp)
081b3610 +0x39a:  mov    -0x34(%ebp),%eax
081b3613 +0x39d:  mov    %eax,(%esp)
081b3616 +0x3a0:  call   081b4b00 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x374>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x374
081b361b +0x3a5:  add    $0x4,%eax
081b361e +0x3a8:  mov    %eax,-0x30(%ebp)
081b3621 +0x3ab:  lea    -0x68(%ebp),%eax
081b3624 +0x3ae:  mov    %eax,(%esp)
081b3627 +0x3b1:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
081b362c +0x3b6:  mov    0x8(%eax),%eax
081b362f +0x3b9:  mov    %eax,-0x50(%ebp)
081b3632 +0x3bc:  lea    -0x50(%ebp),%eax
081b3635 +0x3bf:  mov    %eax,0x4(%esp)
081b3639 +0x3c3:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b3640 +0x3ca:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b3645 +0x3cf:  mov    %eax,-0x2c(%ebp)
081b3648 +0x3d2:  movl   $0x0,-0x28(%ebp)
081b364f +0x3d9:  movl   $0x0,-0x24(%ebp)
081b3656 +0x3e0:  jmp    081b36dd <+0x467>
081b365b +0x3e5:  mov    -0x24(%ebp),%eax
081b365e +0x3e8:  mov    %eax,0x4(%esp)
081b3662 +0x3ec:  mov    -0x30(%ebp),%eax
081b3665 +0x3ef:  mov    %eax,(%esp)
081b3668 +0x3f2:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081b366d +0x3f7:  mov    0x4(%eax),%eax
081b3670 +0x3fa:  add    %eax,-0x28(%ebp)
081b3673 +0x3fd:  mov    -0x2c(%ebp),%eax
081b3676 +0x400:  cmp    -0x28(%ebp),%eax
081b3679 +0x403:  jg     081b36d9 <+0x463>
081b367b +0x405:  mov    -0x24(%ebp),%eax
081b367e +0x408:  mov    %eax,0x4(%esp)
081b3682 +0x40c:  mov    -0x30(%ebp),%eax
081b3685 +0x40f:  mov    %eax,(%esp)
081b3688 +0x412:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081b368d +0x417:  mov    (%eax),%eax
081b368f +0x419:  mov    %eax,%edx
081b3691 +0x41b:  mov    0x14(%ebp),%eax
081b3694 +0x41e:  mov    %edx,0x2(%eax)
081b3697 +0x421:  mov    0x14(%ebp),%eax
081b369a +0x424:  movl   $0x1,0x7(%eax)
081b36a1 +0x42b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b36a6 +0x430:  mov    0xc(%eax),%eax
081b36a9 +0x433:  movl   $0x1,0xc(%esp)
081b36b1 +0x43b:  mov    0x14(%ebp),%edx
081b36b4 +0x43e:  mov    %edx,0x8(%esp)
081b36b8 +0x442:  movl   $0x1,0x4(%esp)
081b36c0 +0x44a:  mov    %eax,(%esp)
081b36c3 +0x44d:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
081b36c8 +0x452:  mov    0x10(%ebp),%eax
081b36cb +0x455:  movb   $0x1,0x8(%eax)
081b36cf +0x459:  mov    $0x1,%eax
081b36d4 +0x45e:  jmp    081b3808 <+0x592>
081b36d9 +0x463:  addl   $0x1,-0x24(%ebp)
081b36dd +0x467:  mov    -0x30(%ebp),%eax
081b36e0 +0x46a:  mov    %eax,(%esp)
081b36e3 +0x46d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081b36e8 +0x472:  cmp    -0x24(%ebp),%eax
081b36eb +0x475:  seta   %al
081b36ee +0x478:  test   %al,%al
081b36f0 +0x47a:  jne    081b365b <+0x3e5>
081b36f6 +0x480:  mov    $0x0,%eax
081b36fb +0x485:  jmp    081b3808 <+0x592>
081b3700 +0x48a:  mov    $0x0,%eax
081b3705 +0x48f:  jmp    081b3808 <+0x592>
081b370a +0x494:  mov    -0x38(%ebp),%eax
081b370d +0x497:  add    $0x14,%eax
081b3710 +0x49a:  mov    %eax,(%esp)
081b3713 +0x49d:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
081b3718 +0x4a2:  xor    $0x1,%eax
081b371b +0x4a5:  test   %al,%al
081b371d +0x4a7:  je     081b37fc <+0x586>
081b3723 +0x4ad:  mov    -0x38(%ebp),%eax
081b3726 +0x4b0:  mov    0x24(%eax),%eax
081b3729 +0x4b3:  mov    %eax,-0x4c(%ebp)
081b372c +0x4b6:  lea    -0x4c(%ebp),%eax
081b372f +0x4b9:  mov    %eax,0x4(%esp)
081b3733 +0x4bd:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE21probabilityRewardItem,(%esp)
081b373a +0x4c4:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b373f +0x4c9:  mov    %eax,&_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE8itemDice
081b3744 +0x4ce:  movl   $0x0,-0x20(%ebp)
081b374b +0x4d5:  movl   $0x0,-0x1c(%ebp)
081b3752 +0x4dc:  jmp    081b37de <+0x568>
081b3757 +0x4e1:  mov    -0x38(%ebp),%eax
081b375a +0x4e4:  lea    0x14(%eax),%edx
081b375d +0x4e7:  mov    -0x1c(%ebp),%eax
081b3760 +0x4ea:  mov    %eax,0x4(%esp)
081b3764 +0x4ee:  mov    %edx,(%esp)
081b3767 +0x4f1:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081b376c +0x4f6:  mov    (%eax),%eax
081b376e +0x4f8:  add    %eax,-0x20(%ebp)
081b3771 +0x4fb:  mov    &_ZZN21CHARAC_LOAD_MERCENARY13GetRewardItemEP5CUserR25competition_reward_resultR10Inven_ItemRSsE8itemDice,%eax
081b3776 +0x500:  cmp    -0x20(%ebp),%eax
081b3779 +0x503:  jg     081b37da <+0x564>
081b377b +0x505:  mov    -0x38(%ebp),%eax
081b377e +0x508:  lea    0x14(%eax),%edx
081b3781 +0x50b:  mov    -0x1c(%ebp),%eax
081b3784 +0x50e:  mov    %eax,0x4(%esp)
081b3788 +0x512:  mov    %edx,(%esp)
081b378b +0x515:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
081b3790 +0x51a:  mov    0x4(%eax),%eax
081b3793 +0x51d:  mov    %eax,%edx
081b3795 +0x51f:  mov    0x14(%ebp),%eax
081b3798 +0x522:  mov    %edx,0x2(%eax)
081b379b +0x525:  mov    0x14(%ebp),%eax
081b379e +0x528:  movl   $0x1,0x7(%eax)
081b37a5 +0x52f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b37aa +0x534:  mov    0xc(%eax),%eax
081b37ad +0x537:  movl   $0x1,0xc(%esp)
081b37b5 +0x53f:  mov    0x14(%ebp),%edx
081b37b8 +0x542:  mov    %edx,0x8(%esp)
081b37bc +0x546:  movl   $0x1,0x4(%esp)
081b37c4 +0x54e:  mov    %eax,(%esp)
081b37c7 +0x551:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
081b37cc +0x556:  mov    0x10(%ebp),%eax
081b37cf +0x559:  movb   $0x1,0x8(%eax)
081b37d3 +0x55d:  mov    $0x1,%eax
081b37d8 +0x562:  jmp    081b3808 <+0x592>
081b37da +0x564:  addl   $0x1,-0x1c(%ebp)
081b37de +0x568:  mov    -0x38(%ebp),%eax
081b37e1 +0x56b:  add    $0x14,%eax
081b37e4 +0x56e:  mov    %eax,(%esp)
081b37e7 +0x571:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081b37ec +0x576:  cmp    -0x1c(%ebp),%eax
081b37ef +0x579:  seta   %al
081b37f2 +0x57c:  test   %al,%al
081b37f4 +0x57e:  jne    081b3757 <+0x4e1>
081b37fa +0x584:  jmp    081b3803 <+0x58d>
081b37fc +0x586:  mov    $0x0,%eax
081b3801 +0x58b:  jmp    081b3808 <+0x592>
081b3803 +0x58d:  mov    $0x0,%eax
081b3808 +0x592:  lea    -0xc(%ebp),%esp
081b380b +0x595:  add    $0x0,%esp
081b380e +0x598:  pop    %ebx
081b380f +0x599:  pop    %esi
081b3810 +0x59a:  pop    %edi
081b3811 +0x59b:  pop    %ebp
081b3812 +0x59c:  ret
081b3813 +0x59d:  nop
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetRewardItem @ 0x81b3276

/* CHARAC_LOAD_MERCENARY::GetRewardItem(CUser*, competition_reward_result&, Inven_Item&,
   std::string&) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::GetRewardItem
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2,
          Inven_Item *param_3,string *param_4)

{
  CHARAC_LOAD_MERCENARY CVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_6c [4];
  int local_68;
  ulong local_64;
  ulong local_60;
  ulong local_5c;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_58 [4];
  ulong local_54;
  ulong local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *local_38;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  
  if (param_1 != (CUser *)0x0) {
    Inven_Item::reset(param_3);
    std::string::operator=
              ((string *)param_4,
               (string *)&MercenaryHardCodingSettingValue::MERCENARY_BASE_POSTAL_MESSAGE);
    cVar2 = CheckCompetitionAreaIndex(this,(char)this[0x30],(int)*(short *)(this + 4));
    if (cVar2 == '\x01') {
      CVar1 = this[0x30];
      iVar3 = G_CDataManager();
      iVar3 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
              operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                          *)(iVar3 + 0xa91c),(int)(char)CVar1);
      if (*(short *)(iVar3 + 0x14) == 0) {
        this[0x30] = (CHARAC_LOAD_MERCENARY)0x0;
      }
      if ((GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
           probabilityRewardItem == '\0') &&
         (iVar3 = __cxa_guard_acquire(&GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                       ::probabilityRewardItem), iVar3 != 0)) {
                    /* try { // try from 081b3347 to 081b334b has its CatchHandler @ 081b335a */
        CMTRand::CMTRand((CMTRand *)
                         GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                         probabilityRewardItem);
        __cxa_guard_release(&GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                             ::probabilityRewardItem);
      }
      local_4c = CalcItemDropRate(this,param_1);
      local_64 = 10000;
      GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice =
           CMTRand::randInt((CMTRand *)
                            GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                            ::probabilityRewardItem,&local_64);
      if (param_1[0x6ef68] != (CUser)0x0) {
        GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice = 0;
      }
      if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDropDice <
          local_4c) {
        CVar1 = this[0x30];
        iVar3 = G_CDataManager();
        local_48 = std::
                   vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
                   operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                               *)(iVar3 + 0xa91c),(int)(char)CVar1);
        local_60 = *(ulong *)(local_48 + 0x10);
        GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::groupDice =
             CMTRand::randInt((CMTRand *)
                              GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                              ::probabilityRewardItem,&local_60);
        cVar2 = CUser::isGMUser(param_1);
        if (cVar2 != '\0') {
          sprintf(GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::buffer,
                  "dice: %d/%d\n",
                  GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                  groupDice,*(undefined4 *)(local_48 + 0x10));
          SendMessageToCUser((CUser *)this,(char *)param_1);
        }
        local_44 = 0;
        local_40 = 0;
        while (uVar4 = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::
                       size((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>> *
                            )(local_48 + 4)), local_40 < uVar4) {
          piVar7 = (int *)std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                          ::operator[]((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                                        *)(local_48 + 4),local_40);
          local_44 = local_44 + *piVar7;
          if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::groupDice
              <= local_44) break;
          local_40 = local_40 + 1;
        }
        uVar4 = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::size
                          ((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>> *)
                           (local_48 + 4));
        if (uVar4 <= local_40) {
          local_40 = 0;
        }
        local_3c = std::vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>::
                   operator[]((vector<stMercenaryRewardGroup,std::allocator<stMercenaryRewardGroup>>
                               *)(local_48 + 4),local_40);
        std::string::operator=((string *)param_4,(string *)(local_3c + 4));
        cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
        if (cVar2 == '\x01') {
          cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
          if (cVar2 != '\x01') {
            local_50 = *(ulong *)(local_3c + 0x24);
            GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::itemDice =
                 CMTRand::randInt((CMTRand *)
                                  GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                  ::probabilityRewardItem,&local_50);
            local_24 = 0;
            local_20 = 0;
            while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                     ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                       *)(local_3c + 0x14)), local_20 < uVar4) {
              piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                              operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(local_3c + 0x14),local_20);
              local_24 = local_24 + *piVar7;
              if (GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::
                  itemDice <= local_24) {
                iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                   (local_3c + 0x14),local_20);
                *(undefined4 *)(param_3 + 2) = *(undefined4 *)(iVar3 + 4);
                *(undefined4 *)(param_3 + 7) = 1;
                iVar3 = G_CDataManager();
                CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,param_3,1);
                param_2[8] = (competition_reward_result)0x1;
                return 1;
              }
              local_20 = local_20 + 1;
            }
          }
        }
        else {
          local_5c = *(ulong *)(local_3c + 0x20);
          GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)::mobDice =
               CMTRand::randInt((CMTRand *)
                                GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                ::probabilityRewardItem,&local_5c);
          local_68 = FindRelativeProb<int>
                               ((vector *)(local_3c + 8),
                                GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                ::mobDice);
          G_CDataManager();
          std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::find((int *)local_6c);
          G_CDataManager();
          std::
          map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          ::end(local_58);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                            (local_6c,(_Rb_tree_iterator *)local_58);
          if (cVar2 != '\0') {
            iVar3 = G_CDataManager();
            local_38 = (vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>> *)
                       (iVar3 + 0xa884);
            iVar3 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::
                    size(local_38);
            iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                              (local_6c);
            if (*(int *)(iVar5 + 4) < iVar3) {
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                                (local_6c);
              iVar3 = std::vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>::
                      operator[](local_38,*(uint *)(iVar3 + 4));
              local_34 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar3 + 4);
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                                (local_6c);
              local_54 = *(ulong *)(iVar3 + 8);
              local_30 = CMTRand::randInt((CMTRand *)
                                          GetRewardItem(CUser*,competition_reward_result&,Inven_Item&,std::string&)
                                          ::probabilityRewardItem,&local_54);
              local_2c = 0;
              local_28 = 0;
              while (uVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                             size(local_34), local_28 < uVar4) {
                iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                        operator[](local_34,local_28);
                local_2c = local_2c + *(int *)(iVar3 + 4);
                if (local_30 <= local_2c) {
                  puVar6 = (undefined4 *)
                           std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                           operator[](local_34,local_28);
                  *(undefined4 *)(param_3 + 2) = *puVar6;
                  *(undefined4 *)(param_3 + 7) = 1;
                  iVar3 = G_CDataManager();
                  CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,param_3,1);
                  param_2[8] = (competition_reward_result)0x1;
                  return 1;
                }
                local_28 = local_28 + 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
```
