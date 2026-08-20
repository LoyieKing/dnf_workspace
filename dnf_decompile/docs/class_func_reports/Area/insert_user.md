# insert_user

`_ZN4Area11insert_userEP5CUser`

`Area::insert_user(CUser*)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c25a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c25a6  _ZN4Area11insert_userEP5CUser
#           Area::insert_user(CUser*)
# range [0x086c25a6, 0x086c2a37]
086c25a6 +0x000:  push   %ebp
086c25a7 +0x001:  mov    %esp,%ebp
086c25a9 +0x003:  push   %esi
086c25aa +0x004:  push   %ebx
086c25ab +0x005:  sub    $0x60,%esp
086c25ae +0x008:  lea    -0x30(%ebp),%eax
086c25b1 +0x00b:  mov    %eax,(%esp)
086c25b4 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c25b9 +0x013:  mov    0x8(%ebp),%eax
086c25bc +0x016:  mov    0x68(%eax),%eax
086c25bf +0x019:  cmp    $0x1,%eax
086c25c2 +0x01c:  jne    086c26fb <+0x155>
086c25c8 +0x022:  mov    0xc(%ebp),%eax
086c25cb +0x025:  movl   $0x3,0x4(%esp)
086c25d3 +0x02d:  mov    %eax,(%esp)
086c25d6 +0x030:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c25db +0x035:  movl   $0x18,0x8(%esp)
086c25e3 +0x03d:  movl   $0x0,0x4(%esp)
086c25eb +0x045:  lea    -0x30(%ebp),%eax
086c25ee +0x048:  mov    %eax,(%esp)
086c25f1 +0x04b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c25f6 +0x050:  mov    0x8(%ebp),%eax
086c25f9 +0x053:  mov    0x4(%eax),%eax
086c25fc +0x056:  mov    %eax,0x4(%esp)
086c2600 +0x05a:  lea    -0x30(%ebp),%eax
086c2603 +0x05d:  mov    %eax,(%esp)
086c2606 +0x060:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c260b +0x065:  mov    0xc(%ebp),%eax
086c260e +0x068:  movl   $0x1,0x4(%esp)
086c2616 +0x070:  mov    %eax,(%esp)
086c2619 +0x073:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c261e +0x078:  mov    %eax,0x4(%esp)
086c2622 +0x07c:  lea    -0x30(%ebp),%eax
086c2625 +0x07f:  mov    %eax,(%esp)
086c2628 +0x082:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c262d +0x087:  movl   $0x1,0x4(%esp)
086c2635 +0x08f:  lea    -0x30(%ebp),%eax
086c2638 +0x092:  mov    %eax,(%esp)
086c263b +0x095:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2640 +0x09a:  mov    0xc(%ebp),%eax
086c2643 +0x09d:  mov    %eax,(%esp)
086c2646 +0x0a0:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c264b +0x0a5:  movzwl %ax,%eax
086c264e +0x0a8:  mov    %eax,0x4(%esp)
086c2652 +0x0ac:  lea    -0x30(%ebp),%eax
086c2655 +0x0af:  mov    %eax,(%esp)
086c2658 +0x0b2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c265d +0x0b7:  mov    0xc(%ebp),%eax
086c2660 +0x0ba:  mov    %eax,(%esp)
086c2663 +0x0bd:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c2668 +0x0c2:  movzwl %ax,%eax
086c266b +0x0c5:  mov    %eax,0x4(%esp)
086c266f +0x0c9:  lea    -0x30(%ebp),%eax
086c2672 +0x0cc:  mov    %eax,(%esp)
086c2675 +0x0cf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c267a +0x0d4:  mov    0xc(%ebp),%eax
086c267d +0x0d7:  mov    %eax,(%esp)
086c2680 +0x0da:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c2685 +0x0df:  movzwl %ax,%eax
086c2688 +0x0e2:  mov    %eax,0x4(%esp)
086c268c +0x0e6:  lea    -0x30(%ebp),%eax
086c268f +0x0e9:  mov    %eax,(%esp)
086c2692 +0x0ec:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2697 +0x0f1:  mov    0xc(%ebp),%eax
086c269a +0x0f4:  mov    %eax,(%esp)
086c269d +0x0f7:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c26a2 +0x0fc:  movsbl %al,%eax
086c26a5 +0x0ff:  mov    %eax,0x4(%esp)
086c26a9 +0x103:  lea    -0x30(%ebp),%eax
086c26ac +0x106:  mov    %eax,(%esp)
086c26af +0x109:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c26b4 +0x10e:  mov    0xc(%ebp),%eax
086c26b7 +0x111:  mov    %eax,(%esp)
086c26ba +0x114:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c26bf +0x119:  movsbl %al,%eax
086c26c2 +0x11c:  mov    %eax,0x4(%esp)
086c26c6 +0x120:  lea    -0x30(%ebp),%eax
086c26c9 +0x123:  mov    %eax,(%esp)
086c26cc +0x126:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c26d1 +0x12b:  movl   $0x1,0x4(%esp)
086c26d9 +0x133:  lea    -0x30(%ebp),%eax
086c26dc +0x136:  mov    %eax,(%esp)
086c26df +0x139:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c26e4 +0x13e:  mov    0xc(%ebp),%eax
086c26e7 +0x141:  lea    -0x30(%ebp),%edx
086c26ea +0x144:  mov    %edx,0x4(%esp)
086c26ee +0x148:  mov    %eax,(%esp)
086c26f1 +0x14b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c26f6 +0x150:  jmp    086c2a22 <+0x47c>
086c26fb +0x155:  mov    0x8(%ebp),%eax
086c26fe +0x158:  mov    0x68(%eax),%eax
086c2701 +0x15b:  cmp    $0x2,%eax
086c2704 +0x15e:  jne    086c271b <+0x175>
086c2706 +0x160:  mov    0xc(%ebp),%eax
086c2709 +0x163:  movl   $0x4,0x4(%esp)
086c2711 +0x16b:  mov    %eax,(%esp)
086c2714 +0x16e:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c2719 +0x173:  jmp    086c272e <+0x188>
086c271b +0x175:  mov    0xc(%ebp),%eax
086c271e +0x178:  movl   $0x3,0x4(%esp)
086c2726 +0x180:  mov    %eax,(%esp)
086c2729 +0x183:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
086c272e +0x188:  lea    -0x34(%ebp),%eax
086c2731 +0x18b:  mov    %eax,(%esp)
086c2734 +0x18e:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c2739 +0x193:  mov    0xc(%ebp),%eax
086c273c +0x196:  mov    %eax,(%esp)
086c273f +0x199:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c2744 +0x19e:  mov    %ax,-0x22(%ebp)
086c2748 +0x1a2:  mov    0x8(%ebp),%eax
086c274b +0x1a5:  lea    0x44(%eax),%ecx
086c274e +0x1a8:  lea    -0x3c(%ebp),%eax
086c2751 +0x1ab:  lea    -0x22(%ebp),%edx
086c2754 +0x1ae:  mov    %edx,0x8(%esp)
086c2758 +0x1b2:  mov    %ecx,0x4(%esp)
086c275c +0x1b6:  mov    %eax,(%esp)
086c275f +0x1b9:  call   086d3834 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2065>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2065
086c2764 +0x1be:  sub    $0x4,%esp
086c2767 +0x1c1:  mov    -0x3c(%ebp),%eax
086c276a +0x1c4:  mov    %eax,-0x34(%ebp)
086c276d +0x1c7:  mov    0x8(%ebp),%eax
086c2770 +0x1ca:  lea    0x44(%eax),%edx
086c2773 +0x1cd:  lea    -0x20(%ebp),%eax
086c2776 +0x1d0:  mov    %edx,0x4(%esp)
086c277a +0x1d4:  mov    %eax,(%esp)
086c277d +0x1d7:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c2782 +0x1dc:  sub    $0x4,%esp
086c2785 +0x1df:  lea    -0x20(%ebp),%eax
086c2788 +0x1e2:  mov    %eax,0x4(%esp)
086c278c +0x1e6:  lea    -0x34(%ebp),%eax
086c278f +0x1e9:  mov    %eax,(%esp)
086c2792 +0x1ec:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c2797 +0x1f1:  test   %al,%al
086c2799 +0x1f3:  je     086c27de <+0x238>
086c279b +0x1f5:  mov    0xc(%ebp),%eax
086c279e +0x1f8:  mov    %eax,(%esp)
086c27a1 +0x1fb:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c27a6 +0x200:  movzwl %ax,%eax
086c27a9 +0x203:  mov    %eax,0x14(%esp)
086c27ad +0x207:  movl   $"m_UsersInArea.find(%d)",0x10(%esp)
086c27b5 +0x20f:  movl   $0x1a7,0xc(%esp)
086c27bd +0x217:  movl   $&_ZZN4Area11insert_userEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c27c5 +0x21f:  movl   $"world.cpp",0x4(%esp)
086c27cd +0x227:  movl   $0x1,(%esp)
086c27d4 +0x22e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c27d9 +0x233:  jmp    086c2a22 <+0x47c>
086c27de +0x238:  mov    0xc(%ebp),%eax
086c27e1 +0x23b:  mov    %eax,(%esp)
086c27e4 +0x23e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c27e9 +0x243:  mov    %ax,-0xa(%ebp)
086c27ed +0x247:  lea    0xc(%ebp),%eax
086c27f0 +0x24a:  mov    %eax,0x8(%esp)
086c27f4 +0x24e:  lea    -0xa(%ebp),%eax
086c27f7 +0x251:  mov    %eax,0x4(%esp)
086c27fb +0x255:  lea    -0x14(%ebp),%eax
086c27fe +0x258:  mov    %eax,(%esp)
086c2801 +0x25b:  call   086d3860 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2091>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2091
086c2806 +0x260:  mov    0x8(%ebp),%eax
086c2809 +0x263:  lea    0x44(%eax),%ecx
086c280c +0x266:  lea    -0x1c(%ebp),%eax
086c280f +0x269:  lea    -0x14(%ebp),%edx
086c2812 +0x26c:  mov    %edx,0x8(%esp)
086c2816 +0x270:  mov    %ecx,0x4(%esp)
086c281a +0x274:  mov    %eax,(%esp)
086c281d +0x277:  call   086d3890 <_GLOBAL__I_MAX_VILLAGE_NUM+0x20c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x20c1
086c2822 +0x27c:  sub    $0x4,%esp
086c2825 +0x27f:  movl   $0x17,0x8(%esp)
086c282d +0x287:  movl   $0x0,0x4(%esp)
086c2835 +0x28f:  lea    -0x30(%ebp),%eax
086c2838 +0x292:  mov    %eax,(%esp)
086c283b +0x295:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c2840 +0x29a:  jmp    086c28a7 <+0x301>
086c2842 +0x29c:  mov    %eax,(%esp)
086c2845 +0x29f:  call   08725ce0 <__cxa_begin_catch>
086c284a +0x2a4:  call   0807dd70 <_init+0x668>
086c284f +0x2a9:  mov    (%eax),%eax
086c2851 +0x2ab:  mov    %eax,(%esp)
086c2854 +0x2ae:  call   0807d730 <_init+0x28>
086c2859 +0x2b3:  mov    %eax,0x14(%esp)
086c285d +0x2b7:  movl   $"[EXCEPTION insert_user In AREA] - code = %s",0x10(%esp)
086c2865 +0x2bf:  movl   $0x1af,0xc(%esp)
086c286d +0x2c7:  movl   $&_ZZN4Area11insert_userEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c2875 +0x2cf:  movl   $"world.cpp",0x4(%esp)
086c287d +0x2d7:  movl   $0x1,(%esp)
086c2884 +0x2de:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c2889 +0x2e3:  jmp    086c289d <+0x2f7>
086c288b +0x2e5:  mov    %edx,%ebx
086c288d +0x2e7:  mov    %eax,%esi
086c288f +0x2e9:  call   08725c30 <__cxa_end_catch>
086c2894 +0x2ee:  mov    %esi,%eax
086c2896 +0x2f0:  mov    %ebx,%edx
086c2898 +0x2f2:  jmp    086c2a07 <+0x461>
086c289d +0x2f7:  call   08725c30 <__cxa_end_catch>
086c28a2 +0x2fc:  jmp    086c2a22 <+0x47c>
086c28a7 +0x301:  mov    0xc(%ebp),%eax
086c28aa +0x304:  mov    %eax,(%esp)
086c28ad +0x307:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c28b2 +0x30c:  movzwl %ax,%eax
086c28b5 +0x30f:  mov    %eax,0x4(%esp)
086c28b9 +0x313:  lea    -0x30(%ebp),%eax
086c28bc +0x316:  mov    %eax,(%esp)
086c28bf +0x319:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c28c4 +0x31e:  mov    0x8(%ebp),%eax
086c28c7 +0x321:  mov    0x4(%eax),%eax
086c28ca +0x324:  mov    %eax,0x4(%esp)
086c28ce +0x328:  lea    -0x30(%ebp),%eax
086c28d1 +0x32b:  mov    %eax,(%esp)
086c28d4 +0x32e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c28d9 +0x333:  mov    0xc(%ebp),%eax
086c28dc +0x336:  movl   $0x1,0x4(%esp)
086c28e4 +0x33e:  mov    %eax,(%esp)
086c28e7 +0x341:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c28ec +0x346:  mov    %eax,0x4(%esp)
086c28f0 +0x34a:  lea    -0x30(%ebp),%eax
086c28f3 +0x34d:  mov    %eax,(%esp)
086c28f6 +0x350:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c28fb +0x355:  mov    0xc(%ebp),%eax
086c28fe +0x358:  mov    %eax,(%esp)
086c2901 +0x35b:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c2906 +0x360:  movzwl %ax,%eax
086c2909 +0x363:  mov    %eax,0x4(%esp)
086c290d +0x367:  lea    -0x30(%ebp),%eax
086c2910 +0x36a:  mov    %eax,(%esp)
086c2913 +0x36d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2918 +0x372:  mov    0xc(%ebp),%eax
086c291b +0x375:  mov    %eax,(%esp)
086c291e +0x378:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c2923 +0x37d:  movzwl %ax,%eax
086c2926 +0x380:  mov    %eax,0x4(%esp)
086c292a +0x384:  lea    -0x30(%ebp),%eax
086c292d +0x387:  mov    %eax,(%esp)
086c2930 +0x38a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2935 +0x38f:  mov    0xc(%ebp),%eax
086c2938 +0x392:  mov    %eax,(%esp)
086c293b +0x395:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c2940 +0x39a:  movsbl %al,%eax
086c2943 +0x39d:  mov    %eax,0x4(%esp)
086c2947 +0x3a1:  lea    -0x30(%ebp),%eax
086c294a +0x3a4:  mov    %eax,(%esp)
086c294d +0x3a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2952 +0x3ac:  mov    0xc(%ebp),%eax
086c2955 +0x3af:  mov    %eax,(%esp)
086c2958 +0x3b2:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c295d +0x3b7:  movsbl %al,%eax
086c2960 +0x3ba:  mov    %eax,0x4(%esp)
086c2964 +0x3be:  lea    -0x30(%ebp),%eax
086c2967 +0x3c1:  mov    %eax,(%esp)
086c296a +0x3c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c296f +0x3c9:  movl   $0x1,0x4(%esp)
086c2977 +0x3d1:  lea    -0x30(%ebp),%eax
086c297a +0x3d4:  mov    %eax,(%esp)
086c297d +0x3d7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c2982 +0x3dc:  mov    0xc(%ebp),%eax
086c2985 +0x3df:  mov    %eax,(%esp)
086c2988 +0x3e2:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c298d +0x3e7:  test   %al,%al
086c298f +0x3e9:  je     086c29a5 <+0x3ff>
086c2991 +0x3eb:  lea    -0x30(%ebp),%eax
086c2994 +0x3ee:  mov    %eax,0x4(%esp)
086c2998 +0x3f2:  mov    0x8(%ebp),%eax
086c299b +0x3f5:  mov    %eax,(%esp)
086c299e +0x3f8:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c29a3 +0x3fd:  jmp    086c29b7 <+0x411>
086c29a5 +0x3ff:  mov    0xc(%ebp),%eax
086c29a8 +0x402:  lea    -0x30(%ebp),%edx
086c29ab +0x405:  mov    %edx,0x4(%esp)
086c29af +0x409:  mov    %eax,(%esp)
086c29b2 +0x40c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c29b7 +0x411:  mov    0xc(%ebp),%eax
086c29ba +0x414:  mov    %eax,0x4(%esp)
086c29be +0x418:  mov    0x8(%ebp),%eax
086c29c1 +0x41b:  mov    %eax,(%esp)
086c29c4 +0x41e:  call   086c22f2 <_ZN4Area15send_area_usersEP5CUser>  ; Area::send_area_users(CUser*)
086c29c9 +0x423:  mov    0xc(%ebp),%ebx
086c29cc +0x426:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
086c29d1 +0x42b:  mov    %ebx,0x4(%esp)
086c29d5 +0x42f:  mov    %eax,(%esp)
086c29d8 +0x432:  call   082ef610 <_ZN11pvp_assault11CAssaultMgr10OnMoveAreaEP5CUser>  ; pvp_assault::CAssaultMgr::OnMoveArea(CUser*)
086c29dd +0x437:  mov    0xc(%ebp),%edx
086c29e0 +0x43a:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
086c29e5 +0x43f:  mov    %edx,0x4(%esp)
086c29e9 +0x443:  mov    %eax,(%esp)
086c29ec +0x446:  call   086b71da <_ZN14village_object17CVillageObjectMgr12on_move_areaEP5CUser>  ; village_object::CVillageObjectMgr::on_move_area(CUser*)
086c29f1 +0x44b:  mov    0xc(%ebp),%edx
086c29f4 +0x44e:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
086c29f9 +0x453:  mov    %edx,0x4(%esp)
086c29fd +0x457:  mov    %eax,(%esp)
086c2a00 +0x45a:  call   086b45bc <_ZN16village_attacked18CVillageMonsterMgr10OnMoveAreaEP5CUser>  ; village_attacked::CVillageMonsterMgr::OnMoveArea(CUser*)
086c2a05 +0x45f:  jmp    086c2a22 <+0x47c>
086c2a07 +0x461:  mov    %edx,%ebx
086c2a09 +0x463:  mov    %eax,%esi
086c2a0b +0x465:  lea    -0x30(%ebp),%eax
086c2a0e +0x468:  mov    %eax,(%esp)
086c2a11 +0x46b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2a16 +0x470:  mov    %esi,%eax
086c2a18 +0x472:  mov    %ebx,%edx
086c2a1a +0x474:  mov    %eax,(%esp)
086c2a1d +0x477:  call   08ae3750 <_Unwind_Resume>
086c2a22 +0x47c:  lea    -0x30(%ebp),%eax
086c2a25 +0x47f:  mov    %eax,(%esp)
086c2a28 +0x482:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2a2d +0x487:  lea    -0x8(%ebp),%esp
086c2a30 +0x48a:  add    $0x0,%esp
086c2a33 +0x48d:  pop    %ebx
086c2a34 +0x48e:  pop    %esi
086c2a35 +0x48f:  pop    %ebp
086c2a36 +0x490:  ret
086c2a37 +0x491:  nop
```

## 反编译 C

```c
// Area::insert_user @ 0x86c25a6

/* Area::insert_user(CUser*) */

void __thiscall Area::insert_user(Area *this,CUser *param_1)

{
  CUser *pCVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CAssaultMgr *this_00;
  undefined4 local_40 [2];
  undefined4 local_38;
  PacketGuard local_34 [14];
  undefined2 local_26;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_short_const,CUser*> local_18 [10];
  ushort local_e;
  
  PacketGuard::PacketGuard(local_34);
  if (*(int *)(this + 0x68) == 1) {
                    /* try { // try from 086c25d6 to 086c272d has its CatchHandler @ 086c2a07 */
    CUser::set_state(param_1,3);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(this + 4));
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
    uVar4 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    uVar4 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    uVar4 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
    cVar2 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
    cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
  }
  else {
    if (*(int *)(this + 0x68) == 2) {
      CUser::set_state(param_1,4);
    }
    else {
      CUser::set_state(param_1,3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_38);
    local_26 = CUser::get_unique_id(param_1);
                    /* try { // try from 086c275f to 086c2821 has its CatchHandler @ 086c2842 */
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::find((ushort *)local_40);
    local_38 = local_40[0];
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_24);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_38,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      local_e = CUser::get_unique_id(param_1);
      std::pair<unsigned_short_const,CUser*>::pair<unsigned_short,CUser*&>
                (local_18,&local_e,&param_1);
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::insert(local_20);
                    /* try { // try from 086c283b to 086c283f has its CatchHandler @ 086c2a07 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x17);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(this + 4));
      iVar3 = CUser::get_area(param_1,true);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar3);
      uVar4 = CUser::get_posX(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      uVar4 = CUser::get_posY(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,uVar4 & 0xffff);
      cVar2 = CUser::get_direction(param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)param_1);
      if (cVar2 == '\0') {
        CUser::Send(param_1,local_34);
      }
      else {
        send_to_all(this,local_34);
      }
      send_area_users(this,param_1);
      pCVar1 = param_1;
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::OnMoveArea(this_00,pCVar1);
      village_object::CVillageObjectMgr::on_move_area(GlobalData::s_villageObjectMgr,param_1);
      village_attacked::CVillageMonsterMgr::OnMoveArea(GlobalData::s_villageMonsterMgr,param_1);
    }
    else {
      uVar4 = CUser::get_unique_id(param_1);
      LogManager::logFormat
                (1,"world.cpp","void Area::insert_user(CUser*)",0x1a7,"m_UsersInArea.find(%d)",
                 uVar4 & 0xffff);
    }
  }
  PacketGuard::~PacketGuard(local_34);
  return;
}
```
