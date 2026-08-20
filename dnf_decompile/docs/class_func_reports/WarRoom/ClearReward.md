# ClearReward

`_ZN7WarRoom11ClearRewardEv`

`WarRoom::ClearReward()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bc5fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bc5fe  _ZN7WarRoom11ClearRewardEv
#           WarRoom::ClearReward()
# range [0x086bc5fe, 0x086bcf13]
086bc5fe +0x000:  push   %ebp
086bc5ff +0x001:  mov    %esp,%ebp
086bc601 +0x003:  push   %esi
086bc602 +0x004:  push   %ebx
086bc603 +0x005:  sub    $0xe0,%esp
086bc609 +0x00b:  movl   $0x0,-0x60(%ebp)
086bc610 +0x012:  movl   $0x0,-0x5c(%ebp)
086bc617 +0x019:  jmp    086bc67f <+0x81>
086bc619 +0x01b:  mov    -0x5c(%ebp),%edx
086bc61c +0x01e:  mov    0x8(%ebp),%eax
086bc61f +0x021:  add    $0x6c,%edx
086bc622 +0x024:  flds   0xc(%eax,%edx,4)
086bc626 +0x028:  mov    0x8(%ebp),%eax
086bc629 +0x02b:  mov    0x1d0(%eax),%eax
086bc62f +0x031:  mov    -0x5c(%ebp),%edx
086bc632 +0x034:  add    $0x1e0,%edx
086bc638 +0x03a:  mov    0x10(%eax,%edx,4),%eax
086bc63c +0x03e:  mov    %eax,-0x9c(%ebp)
086bc642 +0x044:  fildl  -0x9c(%ebp)
086bc648 +0x04a:  fmulp  %st,%st(1)
086bc64a +0x04c:  fnstcw -0xaa(%ebp)
086bc650 +0x052:  movzwl -0xaa(%ebp),%eax
086bc657 +0x059:  mov    $0xc,%ah
086bc659 +0x05b:  mov    %ax,-0xac(%ebp)
086bc660 +0x062:  fldcw  -0xac(%ebp)
086bc666 +0x068:  fistpl -0x9c(%ebp)
086bc66c +0x06e:  fldcw  -0xaa(%ebp)
086bc672 +0x074:  mov    -0x9c(%ebp),%eax
086bc678 +0x07a:  add    %eax,-0x60(%ebp)
086bc67b +0x07d:  addl   $0x1,-0x5c(%ebp)
086bc67f +0x081:  cmpl   $0x3,-0x5c(%ebp)
086bc683 +0x085:  setle  %al
086bc686 +0x088:  test   %al,%al
086bc688 +0x08a:  jne    086bc619 <+0x1b>
086bc68a +0x08c:  movl   $0x0,-0x58(%ebp)
086bc691 +0x093:  jmp    086bcefa <+0x8fc>
086bc696 +0x098:  mov    -0x58(%ebp),%edx
086bc699 +0x09b:  mov    0x8(%ebp),%eax
086bc69c +0x09e:  add    $0x48,%edx
086bc69f +0x0a1:  mov    0xc(%eax,%edx,4),%eax
086bc6a3 +0x0a5:  test   %eax,%eax
086bc6a5 +0x0a7:  je     086bcef5 <+0x8f7>
086bc6ab +0x0ad:  lea    -0x74(%ebp),%eax
086bc6ae +0x0b0:  mov    %eax,(%esp)
086bc6b1 +0x0b3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bc6b6 +0x0b8:  lea    -0x80(%ebp),%eax
086bc6b9 +0x0bb:  mov    %eax,(%esp)
086bc6bc +0x0be:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bc6c1 +0x0c3:  movl   $0x0,-0x84(%ebp)
086bc6cb +0x0cd:  movl   $0x0,-0x88(%ebp)
086bc6d5 +0x0d7:  mov    0x8(%ebp),%eax
086bc6d8 +0x0da:  mov    0x1d0(%eax),%eax
086bc6de +0x0e0:  flds   0x7a0(%eax)
086bc6e4 +0x0e6:  fstps  -0xb0(%ebp)
086bc6ea +0x0ec:  mov    -0x58(%ebp),%edx
086bc6ed +0x0ef:  mov    0x8(%ebp),%eax
086bc6f0 +0x0f2:  add    $0x48,%edx
086bc6f3 +0x0f5:  mov    0xc(%eax,%edx,4),%eax
086bc6f7 +0x0f9:  mov    %eax,(%esp)
086bc6fa +0x0fc:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc6ff +0x101:  mov    %eax,-0x9c(%ebp)
086bc705 +0x107:  fildl  -0x9c(%ebp)
086bc70b +0x10d:  fmuls  -0xb0(%ebp)
086bc711 +0x113:  fstps  -0x54(%ebp)
086bc714 +0x116:  flds   -0x54(%ebp)
086bc717 +0x119:  fld1
086bc719 +0x11b:  faddp  %st,%st(1)
086bc71b +0x11d:  fildl  -0x60(%ebp)
086bc71e +0x120:  fmulp  %st,%st(1)
086bc720 +0x122:  fnstcw -0xaa(%ebp)
086bc726 +0x128:  movzwl -0xaa(%ebp),%eax
086bc72d +0x12f:  mov    $0xc,%ah
086bc72f +0x131:  mov    %ax,-0xac(%ebp)
086bc736 +0x138:  fldcw  -0xac(%ebp)
086bc73c +0x13e:  fistpll -0xa8(%ebp)
086bc742 +0x144:  fldcw  -0xaa(%ebp)
086bc748 +0x14a:  mov    -0xa8(%ebp),%eax
086bc74e +0x150:  mov    -0xa4(%ebp),%edx
086bc754 +0x156:  mov    %eax,-0x50(%ebp)
086bc757 +0x159:  mov    -0x58(%ebp),%edx
086bc75a +0x15c:  mov    0x8(%ebp),%eax
086bc75d +0x15f:  add    $0x48,%edx
086bc760 +0x162:  mov    0xc(%eax,%edx,4),%eax
086bc764 +0x166:  mov    %eax,(%esp)
086bc767 +0x169:  call   0867c80e <_ZN5CUser13IsEquipAvatarEv>  ; CUser::IsEquipAvatar()
086bc76c +0x16e:  test   %al,%al
086bc76e +0x170:  je     086bc777 <+0x179>
086bc770 +0x172:  mov    $0x3ca3d70a,%eax
086bc775 +0x177:  jmp    086bc77c <+0x17e>
086bc777 +0x179:  mov    $0x0,%eax
086bc77c +0x17e:  mov    %eax,-0x4c(%ebp)
086bc77f +0x181:  mov    -0x58(%ebp),%edx
086bc782 +0x184:  mov    0x8(%ebp),%eax
086bc785 +0x187:  add    $0x48,%edx
086bc788 +0x18a:  mov    0xc(%eax,%edx,4),%eax
086bc78c +0x18e:  mov    %eax,(%esp)
086bc78f +0x191:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086bc794 +0x196:  mov    %eax,(%esp)
086bc797 +0x199:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
086bc79c +0x19e:  mov    %eax,(%esp)
086bc79f +0x1a1:  call   0822d3a8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a52>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a52
086bc7a4 +0x1a6:  test   %al,%al
086bc7a6 +0x1a8:  je     086bc7af <+0x1b1>
086bc7a8 +0x1aa:  mov    $0x3d4ccccd,%eax
086bc7ad +0x1af:  jmp    086bc7b4 <+0x1b6>
086bc7af +0x1b1:  mov    $0x0,%eax
086bc7b4 +0x1b6:  mov    %eax,-0x48(%ebp)
086bc7b7 +0x1b9:  movl   $0x0,-0x8c(%ebp)
086bc7c1 +0x1c3:  movl   $0x0,-0x90(%ebp)
086bc7cb +0x1cd:  movl   $0x0,-0x44(%ebp)
086bc7d2 +0x1d4:  movl   $0x0,-0x40(%ebp)
086bc7d9 +0x1db:  movl   $0x0,-0x3c(%ebp)
086bc7e0 +0x1e2:  movl   $0x0,-0x38(%ebp)
086bc7e7 +0x1e9:  movl   $0x0,-0x34(%ebp)
086bc7ee +0x1f0:  mov    $0x0,%eax
086bc7f3 +0x1f5:  mov    %eax,-0x30(%ebp)
086bc7f6 +0x1f8:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086bc7fb +0x1fd:  movl   $0x3,0x4(%esp)
086bc803 +0x205:  mov    %eax,(%esp)
086bc806 +0x208:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086bc80b +0x20d:  mov    (%eax),%edx
086bc80d +0x20f:  add    $0x34,%edx
086bc810 +0x212:  mov    (%edx),%edx
086bc812 +0x214:  movl   $0x0,0x4(%esp)
086bc81a +0x21c:  mov    %eax,(%esp)
086bc81d +0x21f:  call   *%edx
086bc81f +0x221:  test   %al,%al
086bc821 +0x223:  je     086bc857 <+0x259>
086bc823 +0x225:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086bc828 +0x22a:  movl   $0x3,0x4(%esp)
086bc830 +0x232:  mov    %eax,(%esp)
086bc833 +0x235:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086bc838 +0x23a:  mov    %eax,(%esp)
086bc83b +0x23d:  call   0814aad8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x877>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x877
086bc840 +0x242:  mov    %eax,-0x9c(%ebp)
086bc846 +0x248:  fildl  -0x9c(%ebp)
086bc84c +0x24e:  flds   ""
086bc852 +0x254:  fdivrp %st,%st(1)
086bc854 +0x256:  fstps  -0x30(%ebp)
086bc857 +0x259:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bc85c +0x25e:  mov    %eax,(%esp)
086bc85f +0x261:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
086bc864 +0x266:  mov    %eax,-0x18(%ebp)
086bc867 +0x269:  mov    0x8(%ebp),%eax
086bc86a +0x26c:  mov    0x1d0(%eax),%eax
086bc870 +0x272:  mov    %eax,(%esp)
086bc873 +0x275:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
086bc878 +0x27a:  mov    %eax,%esi
086bc87a +0x27c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086bc87f +0x281:  mov    %eax,(%esp)
086bc882 +0x284:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086bc887 +0x289:  mov    %eax,%ebx
086bc889 +0x28b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086bc88e +0x290:  mov    0x378(%eax),%eax
086bc894 +0x296:  movzbl %al,%eax
086bc897 +0x299:  mov    %esi,0xc(%esp)
086bc89b +0x29d:  mov    %ebx,0x8(%esp)
086bc89f +0x2a1:  mov    %eax,0x4(%esp)
086bc8a3 +0x2a5:  mov    -0x18(%ebp),%eax
086bc8a6 +0x2a8:  mov    %eax,(%esp)
086bc8a9 +0x2ab:  call   088dce3c <_ZNK16channel_script_t12getBonusRateEhjj>  ; channel_script_t::getBonusRate(unsigned char, unsigned int, unsigned int) const
086bc8ae +0x2b0:  fstps  -0x14(%ebp)
086bc8b1 +0x2b3:  mov    -0x50(%ebp),%eax
086bc8b4 +0x2b6:  mov    $0x0,%edx
086bc8b9 +0x2bb:  mov    %eax,-0xa8(%ebp)
086bc8bf +0x2c1:  mov    %edx,-0xa4(%ebp)
086bc8c5 +0x2c7:  fildll -0xa8(%ebp)
086bc8cb +0x2cd:  fmuls  -0x14(%ebp)
086bc8ce +0x2d0:  fnstcw -0xaa(%ebp)
086bc8d4 +0x2d6:  movzwl -0xaa(%ebp),%eax
086bc8db +0x2dd:  mov    $0xc,%ah
086bc8dd +0x2df:  mov    %ax,-0xac(%ebp)
086bc8e4 +0x2e6:  fldcw  -0xac(%ebp)
086bc8ea +0x2ec:  fistpl -0x9c(%ebp)
086bc8f0 +0x2f2:  fldcw  -0xaa(%ebp)
086bc8f6 +0x2f8:  mov    -0x9c(%ebp),%eax
086bc8fc +0x2fe:  mov    %eax,-0x3c(%ebp)
086bc8ff +0x301:  mov    $0x0,%eax
086bc904 +0x306:  mov    %eax,-0x2c(%ebp)
086bc907 +0x309:  call   0814a6e0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x47f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x47f
086bc90c +0x30e:  mov    %eax,-0x9c(%ebp)
086bc912 +0x314:  fildl  -0x9c(%ebp)
086bc918 +0x31a:  flds   -0x2c(%ebp)
086bc91b +0x31d:  faddp  %st,%st(1)
086bc91d +0x31f:  fstps  -0x2c(%ebp)
086bc920 +0x322:  flds   -0x2c(%ebp)
086bc923 +0x325:  flds   ""
086bc929 +0x32b:  fdivrp %st,%st(1)
086bc92b +0x32d:  fstps  -0x2c(%ebp)
086bc92e +0x330:  mov    -0x50(%ebp),%eax
086bc931 +0x333:  mov    $0x0,%edx
086bc936 +0x338:  mov    %eax,-0xa8(%ebp)
086bc93c +0x33e:  mov    %edx,-0xa4(%ebp)
086bc942 +0x344:  fildll -0xa8(%ebp)
086bc948 +0x34a:  fmuls  -0x2c(%ebp)
086bc94b +0x34d:  fnstcw -0xaa(%ebp)
086bc951 +0x353:  movzwl -0xaa(%ebp),%eax
086bc958 +0x35a:  mov    $0xc,%ah
086bc95a +0x35c:  mov    %ax,-0xac(%ebp)
086bc961 +0x363:  fldcw  -0xac(%ebp)
086bc967 +0x369:  fistpll -0xa8(%ebp)
086bc96d +0x36f:  fldcw  -0xaa(%ebp)
086bc973 +0x375:  mov    -0xa8(%ebp),%eax
086bc979 +0x37b:  mov    -0xa4(%ebp),%edx
086bc97f +0x381:  mov    %eax,-0x40(%ebp)
086bc982 +0x384:  mov    -0x50(%ebp),%eax
086bc985 +0x387:  mov    $0x0,%edx
086bc98a +0x38c:  mov    %eax,-0xa8(%ebp)
086bc990 +0x392:  mov    %edx,-0xa4(%ebp)
086bc996 +0x398:  fildll -0xa8(%ebp)
086bc99c +0x39e:  fmuls  -0x4c(%ebp)
086bc99f +0x3a1:  fldcw  -0xac(%ebp)
086bc9a5 +0x3a7:  fistpll -0xa8(%ebp)
086bc9ab +0x3ad:  fldcw  -0xaa(%ebp)
086bc9b1 +0x3b3:  mov    -0xa8(%ebp),%eax
086bc9b7 +0x3b9:  mov    -0xa4(%ebp),%edx
086bc9bd +0x3bf:  mov    %eax,-0x90(%ebp)
086bc9c3 +0x3c5:  flds   -0x4c(%ebp)
086bc9c6 +0x3c8:  fldz
086bc9c8 +0x3ca:  fxch   %st(1)
086bc9ca +0x3cc:  fucompp
086bc9cc +0x3ce:  fnstsw %ax
086bc9ce +0x3d0:  sahf
086bc9cf +0x3d1:  jp     086bc9d3 <+0x3d5>
086bc9d1 +0x3d3:  je     086bca0d <+0x40f>
086bc9d3 +0x3d5:  movl   $0x1,-0x68(%ebp)
086bc9da +0x3dc:  lea    -0x68(%ebp),%eax
086bc9dd +0x3df:  mov    %eax,0x4(%esp)
086bc9e1 +0x3e3:  lea    -0x90(%ebp),%eax
086bc9e7 +0x3e9:  mov    %eax,(%esp)
086bc9ea +0x3ec:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
086bc9ef +0x3f1:  mov    (%eax),%eax
086bc9f1 +0x3f3:  mov    %eax,-0x90(%ebp)
086bc9f7 +0x3f9:  fnstcw -0xaa(%ebp)
086bc9fd +0x3ff:  movzwl -0xaa(%ebp),%eax
086bca04 +0x406:  mov    $0xc,%ah
086bca06 +0x408:  mov    %ax,-0xac(%ebp)
086bca0d +0x40f:  mov    -0x50(%ebp),%eax
086bca10 +0x412:  mov    $0x0,%edx
086bca15 +0x417:  mov    %eax,-0xa8(%ebp)
086bca1b +0x41d:  mov    %edx,-0xa4(%ebp)
086bca21 +0x423:  fildll -0xa8(%ebp)
086bca27 +0x429:  fmuls  -0x30(%ebp)
086bca2a +0x42c:  fldcw  -0xac(%ebp)
086bca30 +0x432:  fistpll -0xa8(%ebp)
086bca36 +0x438:  fldcw  -0xaa(%ebp)
086bca3c +0x43e:  mov    -0xa8(%ebp),%eax
086bca42 +0x444:  mov    -0xa4(%ebp),%edx
086bca48 +0x44a:  mov    %eax,-0x38(%ebp)
086bca4b +0x44d:  mov    -0x50(%ebp),%eax
086bca4e +0x450:  mov    $0x0,%edx
086bca53 +0x455:  mov    %eax,-0xa8(%ebp)
086bca59 +0x45b:  mov    %edx,-0xa4(%ebp)
086bca5f +0x461:  fildll -0xa8(%ebp)
086bca65 +0x467:  fmuls  -0x48(%ebp)
086bca68 +0x46a:  fldcw  -0xac(%ebp)
086bca6e +0x470:  fistpll -0xa8(%ebp)
086bca74 +0x476:  fldcw  -0xaa(%ebp)
086bca7a +0x47c:  mov    -0xa8(%ebp),%eax
086bca80 +0x482:  mov    -0xa4(%ebp),%edx
086bca86 +0x488:  mov    %eax,-0x8c(%ebp)
086bca8c +0x48e:  flds   -0x48(%ebp)
086bca8f +0x491:  fldz
086bca91 +0x493:  fxch   %st(1)
086bca93 +0x495:  fucompp
086bca95 +0x497:  fnstsw %ax
086bca97 +0x499:  sahf
086bca98 +0x49a:  jp     086bca9c <+0x49e>
086bca9a +0x49c:  je     086bcac0 <+0x4c2>
086bca9c +0x49e:  movl   $0x1,-0x64(%ebp)
086bcaa3 +0x4a5:  lea    -0x64(%ebp),%eax
086bcaa6 +0x4a8:  mov    %eax,0x4(%esp)
086bcaaa +0x4ac:  lea    -0x8c(%ebp),%eax
086bcab0 +0x4b2:  mov    %eax,(%esp)
086bcab3 +0x4b5:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
086bcab8 +0x4ba:  mov    (%eax),%eax
086bcaba +0x4bc:  mov    %eax,-0x8c(%ebp)
086bcac0 +0x4c2:  mov    -0x58(%ebp),%edx
086bcac3 +0x4c5:  mov    0x8(%ebp),%eax
086bcac6 +0x4c8:  add    $0x48,%edx
086bcac9 +0x4cb:  mov    0xc(%eax,%edx,4),%eax
086bcacd +0x4cf:  mov    %eax,(%esp)
086bcad0 +0x4d2:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
086bcad5 +0x4d7:  test   %al,%al
086bcad7 +0x4d9:  je     086bcb6d <+0x56f>
086bcadd +0x4df:  mov    $0x0,%eax
086bcae2 +0x4e4:  mov    %eax,-0x10(%ebp)
086bcae5 +0x4e7:  mov    -0x58(%ebp),%edx
086bcae8 +0x4ea:  mov    0x8(%ebp),%eax
086bcaeb +0x4ed:  add    $0x48,%edx
086bcaee +0x4f0:  mov    0xc(%eax,%edx,4),%eax
086bcaf2 +0x4f4:  mov    %eax,(%esp)
086bcaf5 +0x4f7:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
086bcafa +0x4fc:  mov    %eax,(%esp)
086bcafd +0x4ff:  call   0814aa08 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7a7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7a7
086bcb02 +0x504:  mov    %eax,-0x9c(%ebp)
086bcb08 +0x50a:  fildl  -0x9c(%ebp)
086bcb0e +0x510:  flds   ""
086bcb14 +0x516:  fdivrp %st,%st(1)
086bcb16 +0x518:  fstps  -0x10(%ebp)
086bcb19 +0x51b:  mov    -0x50(%ebp),%eax
086bcb1c +0x51e:  mov    $0x0,%edx
086bcb21 +0x523:  mov    %eax,-0xa8(%ebp)
086bcb27 +0x529:  mov    %edx,-0xa4(%ebp)
086bcb2d +0x52f:  fildll -0xa8(%ebp)
086bcb33 +0x535:  fmuls  -0x10(%ebp)
086bcb36 +0x538:  fnstcw -0xaa(%ebp)
086bcb3c +0x53e:  movzwl -0xaa(%ebp),%eax
086bcb43 +0x545:  mov    $0xc,%ah
086bcb45 +0x547:  mov    %ax,-0xac(%ebp)
086bcb4c +0x54e:  fldcw  -0xac(%ebp)
086bcb52 +0x554:  fistpll -0xa8(%ebp)
086bcb58 +0x55a:  fldcw  -0xaa(%ebp)
086bcb5e +0x560:  mov    -0xa8(%ebp),%eax
086bcb64 +0x566:  mov    -0xa4(%ebp),%edx
086bcb6a +0x56c:  mov    %eax,-0x44(%ebp)
086bcb6d +0x56f:  movl   $0x0,-0x28(%ebp)
086bcb74 +0x576:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086bcb79 +0x57b:  movl   $0xf,0x4(%esp)
086bcb81 +0x583:  mov    %eax,(%esp)
086bcb84 +0x586:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086bcb89 +0x58b:  mov    %eax,-0x24(%ebp)
086bcb8c +0x58e:  mov    -0x24(%ebp),%eax
086bcb8f +0x591:  mov    (%eax),%eax
086bcb91 +0x593:  add    $0x34,%eax
086bcb94 +0x596:  mov    (%eax),%edx
086bcb96 +0x598:  mov    -0x24(%ebp),%eax
086bcb99 +0x59b:  movl   $0x0,0x4(%esp)
086bcba1 +0x5a3:  mov    %eax,(%esp)
086bcba4 +0x5a6:  call   *%edx
086bcba6 +0x5a8:  test   %al,%al
086bcba8 +0x5aa:  je     086bcbfe <+0x600>
086bcbaa +0x5ac:  mov    -0x58(%ebp),%edx
086bcbad +0x5af:  mov    0x8(%ebp),%eax
086bcbb0 +0x5b2:  add    $0x48,%edx
086bcbb3 +0x5b5:  mov    0xc(%eax,%edx,4),%eax
086bcbb7 +0x5b9:  mov    %eax,(%esp)
086bcbba +0x5bc:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
086bcbbf +0x5c1:  movzwl %ax,%eax
086bcbc2 +0x5c4:  mov    %eax,0x4(%esp)
086bcbc6 +0x5c8:  mov    -0x24(%ebp),%eax
086bcbc9 +0x5cb:  mov    %eax,(%esp)
086bcbcc +0x5ce:  call   0810a0ec <_ZNK20CBurningFatigueEvent15getBonusExpRateEt>  ; CBurningFatigueEvent::getBonusExpRate(unsigned short) const
086bcbd1 +0x5d3:  mov    %eax,-0xc(%ebp)
086bcbd4 +0x5d6:  cmpl   $0x0,-0xc(%ebp)
086bcbd8 +0x5da:  je     086bcbfe <+0x600>
086bcbda +0x5dc:  mov    -0xc(%ebp),%eax
086bcbdd +0x5df:  mov    %eax,%edx
086bcbdf +0x5e1:  imul   -0x50(%ebp),%edx
086bcbe3 +0x5e5:  mov    %edx,-0xbc(%ebp)
086bcbe9 +0x5eb:  mov    $0x51eb851f,%edx
086bcbee +0x5f0:  mov    -0xbc(%ebp),%eax
086bcbf4 +0x5f6:  mul    %edx
086bcbf6 +0x5f8:  mov    %edx,%eax
086bcbf8 +0x5fa:  shr    $0x5,%eax
086bcbfb +0x5fd:  mov    %eax,-0x28(%ebp)
086bcbfe +0x600:  mov    -0x90(%ebp),%eax
086bcc04 +0x606:  add    -0x50(%ebp),%eax
086bcc07 +0x609:  add    -0x44(%ebp),%eax
086bcc0a +0x60c:  add    -0x40(%ebp),%eax
086bcc0d +0x60f:  mov    %eax,%edx
086bcc0f +0x611:  add    -0x3c(%ebp),%edx
086bcc12 +0x614:  mov    -0x28(%ebp),%eax
086bcc15 +0x617:  add    %eax,%edx
086bcc17 +0x619:  mov    -0x8c(%ebp),%eax
086bcc1d +0x61f:  lea    (%edx,%eax,1),%eax
086bcc20 +0x622:  mov    %eax,-0x20(%ebp)
086bcc23 +0x625:  mov    -0x50(%ebp),%edx
086bcc26 +0x628:  mov    -0x58(%ebp),%ecx
086bcc29 +0x62b:  mov    0x8(%ebp),%eax
086bcc2c +0x62e:  add    $0x48,%ecx
086bcc2f +0x631:  mov    0xc(%eax,%ecx,4),%eax
086bcc33 +0x635:  mov    %edx,0x4(%esp)
086bcc37 +0x639:  mov    %eax,(%esp)
086bcc3a +0x63c:  call   0864fa08 <_ZN5CUser20gainExpAsUpperMemberEi>  ; CUser::gainExpAsUpperMember(int)
086bcc3f +0x641:  mov    %eax,-0x34(%ebp)
086bcc42 +0x644:  mov    -0x34(%ebp),%eax
086bcc45 +0x647:  add    %eax,-0x20(%ebp)
086bcc48 +0x64a:  mov    -0x50(%ebp),%edx
086bcc4b +0x64d:  mov    -0x58(%ebp),%ecx
086bcc4e +0x650:  mov    0x8(%ebp),%eax
086bcc51 +0x653:  add    $0x48,%ecx
086bcc54 +0x656:  mov    0xc(%eax,%ecx,4),%eax
086bcc58 +0x65a:  mov    %edx,0x4(%esp)
086bcc5c +0x65e:  mov    %eax,(%esp)
086bcc5f +0x661:  call   0864fb3a <_ZN5CUser17gainGuildSkillExpEi>  ; CUser::gainGuildSkillExp(int)
086bcc64 +0x666:  mov    %eax,-0x1c(%ebp)
086bcc67 +0x669:  mov    -0x1c(%ebp),%eax
086bcc6a +0x66c:  add    %eax,-0x20(%ebp)
086bcc6d +0x66f:  mov    -0x58(%ebp),%edx
086bcc70 +0x672:  mov    0x8(%ebp),%eax
086bcc73 +0x675:  add    $0x48,%edx
086bcc76 +0x678:  mov    0xc(%eax,%edx,4),%eax
086bcc7a +0x67c:  movl   $0x0,0x18(%esp)
086bcc82 +0x684:  movl   $0x0,0x14(%esp)
086bcc8a +0x68c:  movl   $0x6,0x10(%esp)
086bcc92 +0x694:  lea    -0x88(%ebp),%edx
086bcc98 +0x69a:  mov    %edx,0xc(%esp)
086bcc9c +0x69e:  lea    -0x84(%ebp),%edx
086bcca2 +0x6a4:  mov    %edx,0x8(%esp)
086bcca6 +0x6a8:  mov    -0x20(%ebp),%edx
086bcca9 +0x6ab:  mov    %edx,0x4(%esp)
086bccad +0x6af:  mov    %eax,(%esp)
086bccb0 +0x6b2:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
086bccb5 +0x6b7:  test   %al,%al
086bccb7 +0x6b9:  je     086bcd5c <+0x75e>
086bccbd +0x6bf:  lea    -0x80(%ebp),%eax
086bccc0 +0x6c2:  mov    %eax,(%esp)
086bccc3 +0x6c5:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bccc8 +0x6ca:  movl   $0x2,0x8(%esp)
086bccd0 +0x6d2:  movl   $0x0,0x4(%esp)
086bccd8 +0x6da:  lea    -0x80(%ebp),%eax
086bccdb +0x6dd:  mov    %eax,(%esp)
086bccde +0x6e0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bcce3 +0x6e5:  movl   $0x1,0x4(%esp)
086bcceb +0x6ed:  lea    -0x80(%ebp),%eax
086bccee +0x6f0:  mov    %eax,(%esp)
086bccf1 +0x6f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bccf6 +0x6f8:  movl   $0x1,0x4(%esp)
086bccfe +0x700:  lea    -0x80(%ebp),%eax
086bcd01 +0x703:  mov    %eax,(%esp)
086bcd04 +0x706:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bcd09 +0x70b:  lea    -0x80(%ebp),%edx
086bcd0c +0x70e:  mov    -0x58(%ebp),%ecx
086bcd0f +0x711:  mov    0x8(%ebp),%eax
086bcd12 +0x714:  add    $0x48,%ecx
086bcd15 +0x717:  mov    0xc(%eax,%ecx,4),%eax
086bcd19 +0x71b:  movl   $0x1,0x8(%esp)
086bcd21 +0x723:  mov    %edx,0x4(%esp)
086bcd25 +0x727:  mov    %eax,(%esp)
086bcd28 +0x72a:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086bcd2d +0x72f:  movl   $0x1,0x4(%esp)
086bcd35 +0x737:  lea    -0x80(%ebp),%eax
086bcd38 +0x73a:  mov    %eax,(%esp)
086bcd3b +0x73d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bcd40 +0x742:  mov    -0x58(%ebp),%edx
086bcd43 +0x745:  mov    0x8(%ebp),%eax
086bcd46 +0x748:  add    $0x48,%edx
086bcd49 +0x74b:  mov    0xc(%eax,%edx,4),%eax
086bcd4d +0x74f:  lea    -0x80(%ebp),%edx
086bcd50 +0x752:  mov    %edx,0x4(%esp)
086bcd54 +0x756:  mov    %eax,(%esp)
086bcd57 +0x759:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bcd5c +0x75e:  lea    -0x74(%ebp),%eax
086bcd5f +0x761:  mov    %eax,(%esp)
086bcd62 +0x764:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bcd67 +0x769:  movl   $0x5c,0x8(%esp)
086bcd6f +0x771:  movl   $0x0,0x4(%esp)
086bcd77 +0x779:  lea    -0x74(%ebp),%eax
086bcd7a +0x77c:  mov    %eax,(%esp)
086bcd7d +0x77f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bcd82 +0x784:  mov    -0x84(%ebp),%eax
086bcd88 +0x78a:  mov    %eax,0x4(%esp)
086bcd8c +0x78e:  lea    -0x74(%ebp),%eax
086bcd8f +0x791:  mov    %eax,(%esp)
086bcd92 +0x794:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bcd97 +0x799:  mov    -0x88(%ebp),%eax
086bcd9d +0x79f:  mov    %eax,0x4(%esp)
086bcda1 +0x7a3:  lea    -0x74(%ebp),%eax
086bcda4 +0x7a6:  mov    %eax,(%esp)
086bcda7 +0x7a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bcdac +0x7ae:  mov    -0x58(%ebp),%edx
086bcdaf +0x7b1:  mov    0x8(%ebp),%eax
086bcdb2 +0x7b4:  add    $0x48,%edx
086bcdb5 +0x7b7:  mov    0xc(%eax,%edx,4),%eax
086bcdb9 +0x7bb:  mov    %eax,(%esp)
086bcdbc +0x7be:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bcdc1 +0x7c3:  mov    %eax,0x4(%esp)
086bcdc5 +0x7c7:  lea    -0x74(%ebp),%eax
086bcdc8 +0x7ca:  mov    %eax,(%esp)
086bcdcb +0x7cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bcdd0 +0x7d2:  mov    -0x40(%ebp),%eax
086bcdd3 +0x7d5:  mov    -0x50(%ebp),%edx
086bcdd6 +0x7d8:  add    %eax,%edx
086bcdd8 +0x7da:  mov    -0x28(%ebp),%eax
086bcddb +0x7dd:  lea    (%edx,%eax,1),%eax
086bcdde +0x7e0:  mov    %eax,0x4(%esp)
086bcde2 +0x7e4:  lea    -0x74(%ebp),%eax
086bcde5 +0x7e7:  mov    %eax,(%esp)
086bcde8 +0x7ea:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bcded +0x7ef:  mov    -0x90(%ebp),%eax
086bcdf3 +0x7f5:  mov    %eax,0x4(%esp)
086bcdf7 +0x7f9:  lea    -0x74(%ebp),%eax
086bcdfa +0x7fc:  mov    %eax,(%esp)
086bcdfd +0x7ff:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bce02 +0x804:  mov    -0x44(%ebp),%eax
086bce05 +0x807:  mov    %eax,0x4(%esp)
086bce09 +0x80b:  lea    -0x74(%ebp),%eax
086bce0c +0x80e:  mov    %eax,(%esp)
086bce0f +0x811:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bce14 +0x816:  mov    -0x3c(%ebp),%eax
086bce17 +0x819:  mov    %eax,0x4(%esp)
086bce1b +0x81d:  lea    -0x74(%ebp),%eax
086bce1e +0x820:  mov    %eax,(%esp)
086bce21 +0x823:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bce26 +0x828:  mov    -0x34(%ebp),%eax
086bce29 +0x82b:  mov    %eax,0x4(%esp)
086bce2d +0x82f:  lea    -0x74(%ebp),%eax
086bce30 +0x832:  mov    %eax,(%esp)
086bce33 +0x835:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bce38 +0x83a:  mov    -0x8c(%ebp),%eax
086bce3e +0x840:  mov    %eax,0x4(%esp)
086bce42 +0x844:  lea    -0x74(%ebp),%eax
086bce45 +0x847:  mov    %eax,(%esp)
086bce48 +0x84a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bce4d +0x84f:  movl   $0x1,0x4(%esp)
086bce55 +0x857:  lea    -0x74(%ebp),%eax
086bce58 +0x85a:  mov    %eax,(%esp)
086bce5b +0x85d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bce60 +0x862:  mov    -0x58(%ebp),%edx
086bce63 +0x865:  mov    0x8(%ebp),%eax
086bce66 +0x868:  add    $0x48,%edx
086bce69 +0x86b:  mov    0xc(%eax,%edx,4),%eax
086bce6d +0x86f:  lea    -0x74(%ebp),%edx
086bce70 +0x872:  mov    %edx,0x4(%esp)
086bce74 +0x876:  mov    %eax,(%esp)
086bce77 +0x879:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bce7c +0x87e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086bce83 +0x885:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086bce88 +0x88a:  mov    %eax,%ebx
086bce8a +0x88c:  mov    -0x58(%ebp),%edx
086bce8d +0x88f:  mov    0x8(%ebp),%eax
086bce90 +0x892:  add    $0x48,%edx
086bce93 +0x895:  mov    0xc(%eax,%edx,4),%eax
086bce97 +0x899:  mov    %eax,(%esp)
086bce9a +0x89c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bce9f +0x8a1:  mov    %ebx,0x4(%esp)
086bcea3 +0x8a5:  mov    %eax,(%esp)
086bcea6 +0x8a8:  call   085df98c <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x213>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x213
086bceab +0x8ad:  lea    -0x80(%ebp),%eax
086bceae +0x8b0:  mov    %eax,(%esp)
086bceb1 +0x8b3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bceb6 +0x8b8:  jmp    086bcee8 <+0x8ea>
086bceb8 +0x8ba:  mov    %edx,%ebx
086bceba +0x8bc:  mov    %eax,%esi
086bcebc +0x8be:  lea    -0x80(%ebp),%eax
086bcebf +0x8c1:  mov    %eax,(%esp)
086bcec2 +0x8c4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bcec7 +0x8c9:  mov    %esi,%eax
086bcec9 +0x8cb:  mov    %ebx,%edx
086bcecb +0x8cd:  jmp    086bcecd <+0x8cf>
086bcecd +0x8cf:  mov    %edx,%ebx
086bcecf +0x8d1:  mov    %eax,%esi
086bced1 +0x8d3:  lea    -0x74(%ebp),%eax
086bced4 +0x8d6:  mov    %eax,(%esp)
086bced7 +0x8d9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bcedc +0x8de:  mov    %esi,%eax
086bcede +0x8e0:  mov    %ebx,%edx
086bcee0 +0x8e2:  mov    %eax,(%esp)
086bcee3 +0x8e5:  call   08ae3750 <_Unwind_Resume>
086bcee8 +0x8ea:  lea    -0x74(%ebp),%eax
086bceeb +0x8ed:  mov    %eax,(%esp)
086bceee +0x8f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bcef3 +0x8f5:  jmp    086bcef6 <+0x8f8>
086bcef5 +0x8f7:  nop
086bcef6 +0x8f8:  addl   $0x1,-0x58(%ebp)
086bcefa +0x8fc:  cmpl   $0x5,-0x58(%ebp)
086bcefe +0x900:  setle  %al
086bcf01 +0x903:  test   %al,%al
086bcf03 +0x905:  jne    086bc696 <+0x98>
086bcf09 +0x90b:  add    $0xe0,%esp
086bcf0f +0x911:  pop    %ebx
086bcf10 +0x912:  pop    %esi
086bcf11 +0x913:  pop    %ebp
086bcf12 +0x914:  ret
086bcf13 +0x915:  nop
```

## 反编译 C

```c
// WarRoom::ClearReward @ 0x86bc5fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarRoom::ClearReward() */

void __thiscall WarRoom::ClearReward(WarRoom *this)

{
  float fVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  CInventory *this_00;
  CCreatureMgr *this_01;
  int *piVar5;
  CExpDoubleEvent *this_02;
  CDataManager *this_03;
  uint uVar6;
  CEnvironment *this_04;
  uint uVar7;
  size_t *psVar8;
  CUserPremium *this_05;
  long lVar9;
  CHackAnalyzer *this_06;
  longdouble lVar10;
  ulonglong local_ac;
  size_t local_94;
  size_t local_90;
  int local_8c;
  int local_88;
  PacketGuard local_84 [12];
  PacketGuard local_78 [12];
  size_t local_6c [5];
  float local_58;
  uint local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  float local_34;
  float local_30;
  uint local_2c;
  CBurningFatigueEvent *local_28;
  int local_24;
  int local_20;
  channel_script_t *local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_6c[2] = 0;
  for (local_6c[3] = 0; (int)local_6c[3] < 4; local_6c[3] = local_6c[3] + 1) {
    local_6c[2] = local_6c[2] +
                  (int)ROUND((float)*(int *)(*(int *)(this + 0x1d0) + 0x10 +
                                            (local_6c[3] + 0x1e0) * 4) *
                             *(float *)(this + (local_6c[3] + 0x6c) * 4 + 0xc));
  }
  for (local_6c[4] = 0; (int)local_6c[4] < 6; local_6c[4] = local_6c[4] + 1) {
    if (*(int *)(this + (local_6c[4] + 0x48) * 4 + 0xc) != 0) {
      PacketGuard::PacketGuard(local_78);
                    /* try { // try from 086bc6bc to 086bc6c0 has its CatchHandler @ 086bcecd */
      PacketGuard::PacketGuard(local_84);
      local_88 = 0;
      local_8c = 0;
      fVar1 = *(float *)(*(int *)(this + 0x1d0) + 0x7a0);
                    /* try { // try from 086bc6fa to 086bce7b has its CatchHandler @ 086bceb8 */
      iVar4 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      local_58 = (float)iVar4 * fVar1;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)(int)local_6c[2] * (local_58 + 1.0));
      local_54 = (uint)local_ac;
      cVar2 = CUser::IsEquipAvatar(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      if (cVar2 == '\0') {
        local_50 = 0.0;
      }
      else {
        local_50 = 0.02;
      }
      this_00 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenR
                          (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
      cVar2 = user_creature::CCreatureMgr::IsEquippedCreature(this_01);
      if (cVar2 == '\0') {
        local_4c = 0.0;
      }
      else {
        local_4c = 0.05;
      }
      local_90 = 0;
      local_94 = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0.0;
      piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
      cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
      if (cVar2 != '\0') {
        this_02 = (CExpDoubleEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,3);
        iVar4 = CExpDoubleEvent::GetExpFactor(this_02);
        local_34 = (float)iVar4 / _DAT_08cfa704;
      }
      this_03 = (CDataManager *)G_CDataManager();
      local_1c = (channel_script_t *)CDataManager::GetChannelScript(this_03);
      uVar6 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
      this_04 = (CEnvironment *)G_CEnvironment();
      uVar7 = CEnvironment::get_channel_no(this_04);
      iVar4 = G_CEnvironment();
      lVar10 = (longdouble)
               channel_script_t::getBonusRate
                         (local_1c,(uchar)*(undefined4 *)(iVar4 + 0x378),uVar7,uVar6);
      local_18 = (float)lVar10;
      local_ac = (ulonglong)local_54;
      local_40 = (int)ROUND((float)local_ac * local_18);
      local_30 = 0.0;
      iVar4 = CServerEvent::GetExpRate();
      local_30 = (local_30 + (float)iVar4) / _DAT_08cfa704;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_30);
      local_44 = (uint)local_ac;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_50);
      local_94 = (uint)local_ac;
      if (local_50 != 0.0) {
        local_6c[0] = 1;
        psVar8 = std::max<size_t>(&local_94,local_6c);
        local_94 = *psVar8;
      }
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_34);
      local_3c = (uint)local_ac;
      local_ac = (ulonglong)local_54;
      local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_4c);
      local_90 = (uint)local_ac;
      if (local_4c != 0.0) {
        local_6c[1] = 1;
        psVar8 = std::max<size_t>(&local_90,local_6c + 1);
        local_90 = *psVar8;
      }
      cVar2 = CUser::IsHavePremiumAdvantage(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      if (cVar2 != '\0') {
        local_14 = 0.0;
        this_05 = (CUserPremium *)
                  CUser::GetPremiumInfo(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
        iVar4 = WongWork::CUserPremium::GetAdvantageExpRate(this_05);
        local_14 = (float)iVar4 / _DAT_08cfa704;
        local_ac = (ulonglong)local_54;
        local_ac._0_4_ = (uint)(longlong)ROUND((float)local_ac * local_14);
        local_48 = (uint)local_ac;
      }
      local_2c = 0;
      local_28 = (CBurningFatigueEvent *)
                 CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
      cVar2 = (**(code **)(*(int *)local_28 + 0x34))(local_28,0);
      if (cVar2 != '\0') {
        uVar3 = CUserCharacInfo::getCurCharacUsedFatigue
                          (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
        local_10 = CBurningFatigueEvent::getBonusExpRate(local_28,uVar3);
        if (local_10 != 0) {
          local_2c = (local_10 * local_54) / 100;
        }
      }
      local_24 = local_94 + local_54 + local_48 + local_44 + local_40 + local_2c + local_90;
      local_38 = CUser::gainExpAsUpperMember
                           (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_54);
      local_24 = local_24 + local_38;
      local_20 = CUser::gainGuildSkillExp
                           (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_54);
      local_24 = local_24 + local_20;
      cVar2 = CUser::gain_exp_sp(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_24,
                                 &local_88,&local_8c,6,0,0);
      if (cVar2 != '\0') {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_84,1);
        CUser::make_basic_info
                  (*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),(char *)local_84,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
        CUser::Send(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_84);
      }
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0x5c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_88);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_8c);
      iVar4 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,iVar4);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_54 + local_44 + local_2c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_94);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_48);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_40);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_38);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_78,local_90);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
      CUser::Send(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc),local_78);
      lVar9 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_06 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_6c[4] + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::setLastMonsterDeadTime(this_06,lVar9);
                    /* try { // try from 086bceb1 to 086bceb5 has its CatchHandler @ 086bcecd */
      PacketGuard::~PacketGuard(local_84);
      PacketGuard::~PacketGuard(local_78);
    }
  }
  return;
}
```
