# dispatch_sig

`_ZN20TimerGeneratePowerUp12dispatch_sigEiij`

`TimerGeneratePowerUp::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUp` | `0x08638560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638560  _ZN20TimerGeneratePowerUp12dispatch_sigEiij
#           TimerGeneratePowerUp::dispatch_sig(int, int, unsigned int)
# range [0x08638560, 0x0863895f]
08638560 +0x000:  push   %ebp
08638561 +0x001:  mov    %esp,%ebp
08638563 +0x003:  push   %esi
08638564 +0x004:  push   %ebx
08638565 +0x005:  add    $0xffffff80,%esp
08638568 +0x008:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863856d +0x00d:  mov    %eax,(%esp)
08638570 +0x010:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
08638575 +0x015:  test   %al,%al
08638577 +0x017:  je     08638954 <+0x3f4>
0863857d +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08638582 +0x022:  mov    0xa670(%eax),%eax
08638588 +0x028:  shl    $0x2,%eax
0863858b +0x02b:  mov    %eax,%edx
0863858d +0x02d:  shl    $0x4,%edx
08638590 +0x030:  sub    %eax,%edx
08638592 +0x032:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638597 +0x037:  mov    %edx,0x4(%esp)
0863859b +0x03b:  mov    %eax,(%esp)
0863859e +0x03e:  call   082688be <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x24f>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x24f
086385a3 +0x043:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086385a8 +0x048:  movl   $0x0,0x4(%esp)
086385b0 +0x050:  mov    %eax,(%esp)
086385b3 +0x053:  call   082688cc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x25d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x25d
086385b8 +0x058:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086385bd +0x05d:  movl   $0x0,0x18(%esp)
086385c5 +0x065:  movl   $0x0,0x14(%esp)
086385cd +0x06d:  movl   $0x5,0x10(%esp)
086385d5 +0x075:  movl   $0x7d,0xc(%esp)
086385dd +0x07d:  movl   $0x0,0x8(%esp)
086385e5 +0x085:  movl   $0x2,0x4(%esp)
086385ed +0x08d:  mov    %eax,(%esp)
086385f0 +0x090:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086385f5 +0x095:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086385fa +0x09a:  mov    0xa670(%eax),%eax
08638600 +0x0a0:  shl    $0x2,%eax
08638603 +0x0a3:  mov    %eax,%edx
08638605 +0x0a5:  shl    $0x4,%edx
08638608 +0x0a8:  mov    %edx,%ecx
0863860a +0x0aa:  sub    %eax,%ecx
0863860c +0x0ac:  mov    %ecx,%eax
0863860e +0x0ae:  mov    %eax,(%esp)
08638611 +0x0b1:  call   08638b5c <_ZN20TimerGeneratePowerUp15registNextTimerEl>  ; TimerGeneratePowerUp::registNextTimer(long)
08638616 +0x0b6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863861b +0x0bb:  mov    %eax,(%esp)
0863861e +0x0be:  call   086cf356 <_ZN9GameWorld13CancelPowerUpEv>  ; GameWorld::CancelPowerUp()
08638623 +0x0c3:  mov    0x8(%ebp),%eax
08638626 +0x0c6:  add    $0x4,%eax
08638629 +0x0c9:  mov    %eax,(%esp)
0863862c +0x0cc:  call   0855106c <_GLOBAL__I__ZN10CLuckPointC2Ev+0xbf>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xbf
08638631 +0x0d1:  mov    0x8(%ebp),%eax
08638634 +0x0d4:  add    $0x10,%eax
08638637 +0x0d7:  mov    %eax,(%esp)
0863863a +0x0da:  call   0855106c <_GLOBAL__I__ZN10CLuckPointC2Ev+0xbf>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xbf
0863863f +0x0df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08638644 +0x0e4:  mov    0xa644(%eax),%eax
0863864a +0x0ea:  mov    %eax,-0x60(%ebp)
0863864d +0x0ed:  fildl  -0x60(%ebp)
08638650 +0x0f0:  fldl   &data#69d7849f(.rodata)
08638656 +0x0f6:  fdivrp %st,%st(1)
08638658 +0x0f8:  fstpl  -0x48(%ebp)
0863865b +0x0fb:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638660 +0x100:  movl   $0x1,0x4(%esp)
08638668 +0x108:  mov    %eax,(%esp)
0863866b +0x10b:  call   084801da <_ZN13CPowerManager17GetPowerUserCountEc>  ; CPowerManager::GetPowerUserCount(char)
08638670 +0x110:  mov    %eax,-0x3c(%ebp)
08638673 +0x113:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638678 +0x118:  movl   $0x2,0x4(%esp)
08638680 +0x120:  mov    %eax,(%esp)
08638683 +0x123:  call   084801da <_ZN13CPowerManager17GetPowerUserCountEc>  ; CPowerManager::GetPowerUserCount(char)
08638688 +0x128:  mov    %eax,-0x38(%ebp)
0863868b +0x12b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638690 +0x130:  movl   $0x1,0x4(%esp)
08638698 +0x138:  mov    %eax,(%esp)
0863869b +0x13b:  call   084801fc <_ZN13CPowerManager25GetPowerWarPointInChannelEc>  ; CPowerManager::GetPowerWarPointInChannel(char)
086386a0 +0x140:  mov    %eax,-0x34(%ebp)
086386a3 +0x143:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086386a8 +0x148:  movl   $0x2,0x4(%esp)
086386b0 +0x150:  mov    %eax,(%esp)
086386b3 +0x153:  call   084801fc <_ZN13CPowerManager25GetPowerWarPointInChannelEc>  ; CPowerManager::GetPowerWarPointInChannel(char)
086386b8 +0x158:  mov    %eax,-0x30(%ebp)
086386bb +0x15b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086386c0 +0x160:  movl   $0x1,0x4(%esp)
086386c8 +0x168:  mov    %eax,(%esp)
086386cb +0x16b:  call   08480e78 <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE>  ; CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE)
086386d0 +0x170:  mov    %eax,-0x2c(%ebp)
086386d3 +0x173:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086386d8 +0x178:  movl   $0x2,0x4(%esp)
086386e0 +0x180:  mov    %eax,(%esp)
086386e3 +0x183:  call   08480e78 <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE>  ; CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE)
086386e8 +0x188:  mov    %eax,-0x28(%ebp)
086386eb +0x18b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086386f0 +0x190:  mov    0xa6d0(%eax),%eax
086386f6 +0x196:  mov    %eax,-0x24(%ebp)
086386f9 +0x199:  cmpl   $0x0,-0x24(%ebp)
086386fd +0x19d:  jne    0863875a <+0x1fa>
086386ff +0x19f:  movl   $0x0,0xc(%esp)
08638707 +0x1a7:  movl   $0xff4,0x8(%esp)
0863870f +0x1af:  movl   $&_ZZN20TimerGeneratePowerUp12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08638717 +0x1b7:  lea    -0x58(%ebp),%eax
0863871a +0x1ba:  mov    %eax,(%esp)
0863871d +0x1bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08638722 +0x1c2:  movl   $"[PowerWar] PowerUpMod is 0",0x4(%esp)
0863872a +0x1ca:  lea    -0x58(%ebp),%eax
0863872d +0x1cd:  mov    %eax,(%esp)
08638730 +0x1d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08638735 +0x1d5:  movl   $0x0,0x8(%esp)
0863873d +0x1dd:  movl   $0x0,0x4(%esp)
08638745 +0x1e5:  mov    0x8(%ebp),%eax
08638748 +0x1e8:  mov    %eax,(%esp)
0863874b +0x1eb:  call   08638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>  ; TimerGeneratePowerUp::sendPowerUpInfo(int, int)
08638750 +0x1f0:  mov    $0x1,%eax
08638755 +0x1f5:  jmp    08638959 <+0x3f9>
0863875a +0x1fa:  mov    -0x2c(%ebp),%eax
0863875d +0x1fd:  mov    -0x28(%ebp),%edx
08638760 +0x200:  mov    %edx,%ecx
08638762 +0x202:  sub    %eax,%ecx
08638764 +0x204:  mov    %ecx,%eax
08638766 +0x206:  mov    %eax,-0x60(%ebp)
08638769 +0x209:  fildl  -0x60(%ebp)
0863876c +0x20c:  fildl  -0x24(%ebp)
0863876f +0x20f:  fdivrp %st,%st(1)
08638771 +0x211:  fstpl  -0x20(%ebp)
08638774 +0x214:  mov    -0x28(%ebp),%eax
08638777 +0x217:  mov    -0x2c(%ebp),%edx
0863877a +0x21a:  mov    %edx,%ecx
0863877c +0x21c:  sub    %eax,%ecx
0863877e +0x21e:  mov    %ecx,%eax
08638780 +0x220:  mov    %eax,-0x60(%ebp)
08638783 +0x223:  fildl  -0x60(%ebp)
08638786 +0x226:  fildl  -0x24(%ebp)
08638789 +0x229:  fdivrp %st,%st(1)
0863878b +0x22b:  fstpl  -0x18(%ebp)
0863878e +0x22e:  fldl   -0x20(%ebp)
08638791 +0x231:  fldl   &data#f9feb249(.rodata)
08638797 +0x237:  fxch   %st(1)
08638799 +0x239:  fucompp
0863879b +0x23b:  fnstsw %ax
0863879d +0x23d:  sahf
0863879e +0x23e:  seta   %al
086387a1 +0x241:  test   %al,%al
086387a3 +0x243:  je     086387ae <+0x24e>
086387a5 +0x245:  fldl   &data#f9feb249(.rodata)
086387ab +0x24b:  fstpl  -0x20(%ebp)
086387ae +0x24e:  fldl   -0x20(%ebp)
086387b1 +0x251:  fldl   &data#dc5e0735(.rodata)
086387b7 +0x257:  fucompp
086387b9 +0x259:  fnstsw %ax
086387bb +0x25b:  test   $0x45,%ah
086387be +0x25e:  sete   %al
086387c1 +0x261:  test   %al,%al
086387c3 +0x263:  je     086387ce <+0x26e>
086387c5 +0x265:  fldl   &data#dc5e0735(.rodata)
086387cb +0x26b:  fstpl  -0x20(%ebp)
086387ce +0x26e:  fldl   -0x18(%ebp)
086387d1 +0x271:  fldl   &data#f9feb249(.rodata)
086387d7 +0x277:  fxch   %st(1)
086387d9 +0x279:  fucompp
086387db +0x27b:  fnstsw %ax
086387dd +0x27d:  sahf
086387de +0x27e:  seta   %al
086387e1 +0x281:  test   %al,%al
086387e3 +0x283:  je     086387ee <+0x28e>
086387e5 +0x285:  fldl   &data#f9feb249(.rodata)
086387eb +0x28b:  fstpl  -0x18(%ebp)
086387ee +0x28e:  fldl   -0x18(%ebp)
086387f1 +0x291:  fldl   &data#dc5e0735(.rodata)
086387f7 +0x297:  fucompp
086387f9 +0x299:  fnstsw %ax
086387fb +0x29b:  test   $0x45,%ah
086387fe +0x29e:  sete   %al
08638801 +0x2a1:  test   %al,%al
08638803 +0x2a3:  je     0863880e <+0x2ae>
08638805 +0x2a5:  fldl   &data#dc5e0735(.rodata)
0863880b +0x2ab:  fstpl  -0x18(%ebp)
0863880e +0x2ae:  cmpl   $0x0,-0x34(%ebp)
08638812 +0x2b2:  je     0863881a <+0x2ba>
08638814 +0x2b4:  cmpl   $0x0,-0x30(%ebp)
08638818 +0x2b8:  jne    0863883f <+0x2df>
0863881a +0x2ba:  movl   $0x0,0x8(%esp)
08638822 +0x2c2:  movl   $0x0,0x4(%esp)
0863882a +0x2ca:  mov    0x8(%ebp),%eax
0863882d +0x2cd:  mov    %eax,(%esp)
08638830 +0x2d0:  call   08638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>  ; TimerGeneratePowerUp::sendPowerUpInfo(int, int)
08638835 +0x2d5:  mov    $0x1,%eax
0863883a +0x2da:  jmp    08638959 <+0x3f9>
0863883f +0x2df:  fildl  -0x38(%ebp)
08638842 +0x2e2:  fmull  -0x48(%ebp)
08638845 +0x2e5:  fildl  -0x30(%ebp)
08638848 +0x2e8:  fildl  -0x34(%ebp)
0863884b +0x2eb:  fdivrp %st,%st(1)
0863884d +0x2ed:  fmulp  %st,%st(1)
0863884f +0x2ef:  fldl   -0x20(%ebp)
08638852 +0x2f2:  fld1
08638854 +0x2f4:  faddp  %st,%st(1)
08638856 +0x2f6:  fmulp  %st,%st(1)
08638858 +0x2f8:  fnstcw -0x5a(%ebp)
0863885b +0x2fb:  movzwl -0x5a(%ebp),%eax
0863885f +0x2ff:  mov    $0xc,%ah
08638861 +0x301:  mov    %ax,-0x5c(%ebp)
08638865 +0x305:  fldcw  -0x5c(%ebp)
08638868 +0x308:  fistpl -0x10(%ebp)
0863886b +0x30b:  fldcw  -0x5a(%ebp)
0863886e +0x30e:  fildl  -0x3c(%ebp)
08638871 +0x311:  fmull  -0x48(%ebp)
08638874 +0x314:  fildl  -0x34(%ebp)
08638877 +0x317:  fildl  -0x30(%ebp)
0863887a +0x31a:  fdivrp %st,%st(1)
0863887c +0x31c:  fmulp  %st,%st(1)
0863887e +0x31e:  fldl   -0x18(%ebp)
08638881 +0x321:  fld1
08638883 +0x323:  faddp  %st,%st(1)
08638885 +0x325:  fmulp  %st,%st(1)
08638887 +0x327:  fldcw  -0x5c(%ebp)
0863888a +0x32a:  fistpl -0xc(%ebp)
0863888d +0x32d:  fldcw  -0x5a(%ebp)
08638890 +0x330:  mov    0x8(%ebp),%eax
08638893 +0x333:  lea    0x10(%eax),%esi
08638896 +0x336:  mov    0x8(%ebp),%eax
08638899 +0x339:  lea    0x4(%eax),%ebx
0863889c +0x33c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086388a1 +0x341:  mov    %esi,0x8(%esp)
086388a5 +0x345:  mov    %ebx,0x4(%esp)
086388a9 +0x349:  mov    %eax,(%esp)
086388ac +0x34c:  call   086cf1fe <_ZN9GameWorld16GetPowerUpDomainERSt6vectorIP5CUserSaIS2_EES5_>  ; GameWorld::GetPowerUpDomain(std::vector<CUser*, std::allocator<CUser*> >&, std::vector<CUser*, std::allocator<CUser*> >&)
086388b1 +0x351:  mov    0x8(%ebp),%eax
086388b4 +0x354:  add    $0x4,%eax
086388b7 +0x357:  mov    %eax,(%esp)
086388ba +0x35a:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086388bf +0x35f:  cmp    -0x10(%ebp),%eax
086388c2 +0x362:  jg     086388d4 <+0x374>
086388c4 +0x364:  mov    0x8(%ebp),%eax
086388c7 +0x367:  add    $0x4,%eax
086388ca +0x36a:  mov    %eax,(%esp)
086388cd +0x36d:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086388d2 +0x372:  jmp    086388d7 <+0x377>
086388d4 +0x374:  mov    -0x10(%ebp),%eax
086388d7 +0x377:  mov    %eax,-0x10(%ebp)
086388da +0x37a:  mov    0x8(%ebp),%eax
086388dd +0x37d:  add    $0x10,%eax
086388e0 +0x380:  mov    %eax,(%esp)
086388e3 +0x383:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086388e8 +0x388:  cmp    -0xc(%ebp),%eax
086388eb +0x38b:  jg     086388fd <+0x39d>
086388ed +0x38d:  mov    0x8(%ebp),%eax
086388f0 +0x390:  add    $0x10,%eax
086388f3 +0x393:  mov    %eax,(%esp)
086388f6 +0x396:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086388fb +0x39b:  jmp    08638900 <+0x3a0>
086388fd +0x39d:  mov    -0xc(%ebp),%eax
08638900 +0x3a0:  mov    %eax,-0xc(%ebp)
08638903 +0x3a3:  mov    0x8(%ebp),%eax
08638906 +0x3a6:  lea    0x4(%eax),%edx
08638909 +0x3a9:  mov    -0x10(%ebp),%eax
0863890c +0x3ac:  mov    %eax,0x8(%esp)
08638910 +0x3b0:  mov    %edx,0x4(%esp)
08638914 +0x3b4:  mov    0x8(%ebp),%eax
08638917 +0x3b7:  mov    %eax,(%esp)
0863891a +0x3ba:  call   08638960 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi>  ; TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)
0863891f +0x3bf:  mov    0x8(%ebp),%eax
08638922 +0x3c2:  lea    0x10(%eax),%edx
08638925 +0x3c5:  mov    -0xc(%ebp),%eax
08638928 +0x3c8:  mov    %eax,0x8(%esp)
0863892c +0x3cc:  mov    %edx,0x4(%esp)
08638930 +0x3d0:  mov    0x8(%ebp),%eax
08638933 +0x3d3:  mov    %eax,(%esp)
08638936 +0x3d6:  call   08638960 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi>  ; TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)
0863893b +0x3db:  mov    -0xc(%ebp),%eax
0863893e +0x3de:  mov    %eax,0x8(%esp)
08638942 +0x3e2:  mov    -0x10(%ebp),%eax
08638945 +0x3e5:  mov    %eax,0x4(%esp)
08638949 +0x3e9:  mov    0x8(%ebp),%eax
0863894c +0x3ec:  mov    %eax,(%esp)
0863894f +0x3ef:  call   08638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>  ; TimerGeneratePowerUp::sendPowerUpInfo(int, int)
08638954 +0x3f4:  mov    $0x1,%eax
08638959 +0x3f9:  sub    $0xffffff80,%esp
0863895c +0x3fc:  pop    %ebx
0863895d +0x3fd:  pop    %esi
0863895e +0x3fe:  pop    %ebp
0863895f +0x3ff:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUp::dispatch_sig @ 0x8638560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimerGeneratePowerUp::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGeneratePowerUp::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  GameWorld *pGVar4;
  cMyTrace local_5c [16];
  double local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  double local_24;
  double local_1c;
  int local_14;
  int local_10;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    iVar2 = G_CDataManager();
    CPowerManager::SetPowerUpRemainTime(GlobalData::s_power_manager,*(int *)(iVar2 + 0xa670) * 0x3c)
    ;
    CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0x7d,5,0,0);
    iVar2 = G_CDataManager();
    registNextTimer(*(int *)(iVar2 + 0xa670) * 0x3c);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::CancelPowerUp(pGVar4);
    std::vector<CUser*,std::allocator<CUser*>>::clear
              ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
    std::vector<CUser*,std::allocator<CUser*>>::clear
              ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
    iVar2 = G_CDataManager();
    local_4c = (double)*(int *)(iVar2 + 0xa644) / _DAT_08ce8590;
    local_40 = CPowerManager::GetPowerUserCount(GlobalData::s_power_manager,'\x01');
    local_3c = CPowerManager::GetPowerUserCount(GlobalData::s_power_manager,'\x02');
    local_38 = CPowerManager::GetPowerWarPointInChannel(GlobalData::s_power_manager,'\x01');
    local_34 = CPowerManager::GetPowerWarPointInChannel(GlobalData::s_power_manager,'\x02');
    local_30 = CPowerManager::GetPowerWarPoint(GlobalData::s_power_manager,1);
    local_2c = CPowerManager::GetPowerWarPoint(GlobalData::s_power_manager,2);
    iVar2 = G_CDataManager();
    local_28 = *(int *)(iVar2 + 0xa6d0);
    if (local_28 == 0) {
      cMyTrace::cMyTrace(local_5c,
                         "virtual bool TimerGeneratePowerUp::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xff4,0);
      cMyTrace::operator()(local_5c,"[PowerWar] PowerUpMod is 0");
      sendPowerUpInfo((TimerGeneratePowerUp *)param_1,0,0);
    }
    else {
      local_24 = (double)(local_2c - local_30) / (double)local_28;
      local_1c = (double)(local_30 - local_2c) / (double)local_28;
      if (_DAT_08ce8598 < local_24) {
        local_24 = _DAT_08ce8598;
      }
      if (local_24 < _DAT_08ce85a0) {
        local_24 = _DAT_08ce85a0;
      }
      if (_DAT_08ce8598 < local_1c) {
        local_1c = _DAT_08ce8598;
      }
      if (local_1c < _DAT_08ce85a0) {
        local_1c = _DAT_08ce85a0;
      }
      if ((local_38 == 0) || (local_34 == 0)) {
        sendPowerUpInfo((TimerGeneratePowerUp *)param_1,0,0);
      }
      else {
        local_14 = (int)ROUND((local_24 + 1.0) *
                              ((double)local_34 / (double)local_38) * (double)local_3c * local_4c);
        local_10 = (int)ROUND((local_1c + 1.0) *
                              ((double)local_38 / (double)local_34) * (double)local_40 * local_4c);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::GetPowerUpDomain(pGVar4,(vector *)(param_1 + 4),(vector *)(param_1 + 0x10));
        iVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
        if (iVar2 <= local_14) {
          local_14 = std::vector<CUser*,std::allocator<CUser*>>::size
                               ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
        }
        iVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
        if (iVar2 <= local_10) {
          local_10 = std::vector<CUser*,std::allocator<CUser*>>::size
                               ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
        }
        generatePowerUp((TimerGeneratePowerUp *)param_1,(vector *)(param_1 + 4),local_14);
        generatePowerUp((TimerGeneratePowerUp *)param_1,(vector *)(param_1 + 0x10),local_10);
        sendPowerUpInfo((TimerGeneratePowerUp *)param_1,local_14,local_10);
      }
    }
  }
  return 1;
}
```
