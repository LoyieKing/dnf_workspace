# get_New_DailyMission

`_ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE`

`PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)`

| 类 | 地址 |
|---|---|
| `PvP_MissionSystem` | `0x085e26e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e26e0  _ZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE
#           PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)
# range [0x085e26e0, 0x085e2e73]
085e26e0 +0x000:  push   %ebp
085e26e1 +0x001:  mov    %esp,%ebp
085e26e3 +0x003:  push   %edi
085e26e4 +0x004:  push   %esi
085e26e5 +0x005:  push   %ebx
085e26e6 +0x006:  sub    $0x14c,%esp
085e26ec +0x00c:  lea    -0xd0(%ebp),%eax
085e26f2 +0x012:  mov    %eax,(%esp)
085e26f5 +0x015:  call   085e7ce6 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x146e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x146e
085e26fa +0x01a:  movl   $0x0,-0x3c(%ebp)
085e2701 +0x021:  jmp    085e281e <+0x13e>
085e2706 +0x026:  mov    0x8(%ebp),%eax
085e2709 +0x029:  lea    0x24(%eax),%edx
085e270c +0x02c:  mov    -0x3c(%ebp),%eax
085e270f +0x02f:  mov    %eax,0x4(%esp)
085e2713 +0x033:  mov    %edx,(%esp)
085e2716 +0x036:  call   080e2564 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x30a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x30a
085e271b +0x03b:  mov    (%eax),%eax
085e271d +0x03d:  mov    %eax,-0xcc(%ebp)
085e2723 +0x043:  mov    0x8(%ebp),%edx
085e2726 +0x046:  lea    -0x12c(%ebp),%eax
085e272c +0x04c:  lea    -0xcc(%ebp),%ecx
085e2732 +0x052:  mov    %ecx,0x8(%esp)
085e2736 +0x056:  mov    %edx,0x4(%esp)
085e273a +0x05a:  mov    %eax,(%esp)
085e273d +0x05d:  call   085e7cba <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1442>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1442
085e2742 +0x062:  sub    $0x4,%esp
085e2745 +0x065:  mov    -0x12c(%ebp),%eax
085e274b +0x06b:  mov    %eax,-0xd0(%ebp)
085e2751 +0x071:  mov    0x8(%ebp),%edx
085e2754 +0x074:  lea    -0xc8(%ebp),%eax
085e275a +0x07a:  mov    %edx,0x4(%esp)
085e275e +0x07e:  mov    %eax,(%esp)
085e2761 +0x081:  call   085e74ee <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc76>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc76
085e2766 +0x086:  sub    $0x4,%esp
085e2769 +0x089:  lea    -0xd0(%ebp),%eax
085e276f +0x08f:  mov    %eax,0x4(%esp)
085e2773 +0x093:  lea    -0xc8(%ebp),%eax
085e2779 +0x099:  mov    %eax,(%esp)
085e277c +0x09c:  call   085e7cf4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x147c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x147c
085e2781 +0x0a1:  test   %al,%al
085e2783 +0x0a3:  jne    085e2819 <+0x139>
085e2789 +0x0a9:  lea    -0xd0(%ebp),%eax
085e278f +0x0af:  mov    %eax,(%esp)
085e2792 +0x0b2:  call   085e7546 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcce>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcce
085e2797 +0x0b7:  mov    0x4(%eax),%eax
085e279a +0x0ba:  mov    %eax,-0x38(%ebp)
085e279d +0x0bd:  cmpl   $0x0,-0x38(%ebp)
085e27a1 +0x0c1:  je     085e281a <+0x13a>
085e27a3 +0x0c3:  mov    -0x38(%ebp),%eax
085e27a6 +0x0c6:  mov    %eax,(%esp)
085e27a9 +0x0c9:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e27ae +0x0ce:  mov    %eax,-0xb4(%ebp)
085e27b4 +0x0d4:  mov    -0x38(%ebp),%eax
085e27b7 +0x0d7:  mov    %eax,(%esp)
085e27ba +0x0da:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e27bf +0x0df:  mov    %eax,-0xb0(%ebp)
085e27c5 +0x0e5:  lea    -0xbc(%ebp),%eax
085e27cb +0x0eb:  lea    -0xb4(%ebp),%edx
085e27d1 +0x0f1:  mov    %edx,0x8(%esp)
085e27d5 +0x0f5:  lea    -0xb0(%ebp),%edx
085e27db +0x0fb:  mov    %edx,0x4(%esp)
085e27df +0x0ff:  mov    %eax,(%esp)
085e27e2 +0x102:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
085e27e7 +0x107:  sub    $0x4,%esp
085e27ea +0x10a:  lea    -0xbc(%ebp),%eax
085e27f0 +0x110:  mov    %eax,0x4(%esp)
085e27f4 +0x114:  lea    -0xc4(%ebp),%eax
085e27fa +0x11a:  mov    %eax,(%esp)
085e27fd +0x11d:  call   085e7d08 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1490>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1490
085e2802 +0x122:  lea    -0xc4(%ebp),%eax
085e2808 +0x128:  mov    %eax,0x4(%esp)
085e280c +0x12c:  mov    0xc(%ebp),%eax
085e280f +0x12f:  mov    %eax,(%esp)
085e2812 +0x132:  call   085e7d3c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x14c4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x14c4
085e2817 +0x137:  jmp    085e281a <+0x13a>
085e2819 +0x139:  nop
085e281a +0x13a:  addl   $0x1,-0x3c(%ebp)
085e281e +0x13e:  mov    0x8(%ebp),%eax
085e2821 +0x141:  add    $0x24,%eax
085e2824 +0x144:  mov    %eax,(%esp)
085e2827 +0x147:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
085e282c +0x14c:  cmp    -0x3c(%ebp),%eax
085e282f +0x14f:  seta   %al
085e2832 +0x152:  test   %al,%al
085e2834 +0x154:  jne    085e2706 <+0x26>
085e283a +0x15a:  mov    0x8(%ebp),%eax
085e283d +0x15d:  add    $0x34,%eax
085e2840 +0x160:  mov    %eax,0x4(%esp)
085e2844 +0x164:  lea    -0xd8(%ebp),%eax
085e284a +0x16a:  mov    %eax,(%esp)
085e284d +0x16d:  call   085e7d5e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x14e6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x14e6
085e2852 +0x172:  mov    0x8(%ebp),%eax
085e2855 +0x175:  mov    0x3c(%eax),%eax
085e2858 +0x178:  mov    %eax,-0x44(%ebp)
085e285b +0x17b:  movl   $0x0,-0x34(%ebp)
085e2862 +0x182:  jmp    085e2aba <+0x3da>
085e2867 +0x187:  mov    0x8(%ebp),%eax
085e286a +0x18a:  mov    0x44(%eax),%eax
085e286d +0x18d:  mov    %eax,(%esp)
085e2870 +0x190:  call   080cba46 <_GLOBAL__I__ZN10BingoEventC2Ev+0x893>  ; global constructors keyed to BingoEvent::BingoEvent()+0x893
085e2875 +0x195:  mov    -0x44(%ebp),%ecx
085e2878 +0x198:  mov    $0x0,%edx
085e287d +0x19d:  div    %ecx
085e287f +0x19f:  mov    %edx,%eax
085e2881 +0x1a1:  mov    %eax,-0x30(%ebp)
085e2884 +0x1a4:  movl   $0x0,-0x2c(%ebp)
085e288b +0x1ab:  lea    -0xe0(%ebp),%eax
085e2891 +0x1b1:  lea    -0xd8(%ebp),%edx
085e2897 +0x1b7:  mov    %edx,0x4(%esp)
085e289b +0x1bb:  mov    %eax,(%esp)
085e289e +0x1be:  call   085e7e28 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x15b0>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x15b0
085e28a3 +0x1c3:  sub    $0x4,%esp
085e28a6 +0x1c6:  jmp    085e2a2d <+0x34d>
085e28ab +0x1cb:  lea    -0xe0(%ebp),%eax
085e28b1 +0x1d1:  mov    %eax,(%esp)
085e28b4 +0x1d4:  call   085e7e9a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1622>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1622
085e28b9 +0x1d9:  mov    (%eax),%edx
085e28bb +0x1db:  mov    -0x2c(%ebp),%eax
085e28be +0x1de:  lea    (%edx,%eax,1),%eax
085e28c1 +0x1e1:  mov    %eax,-0x2c(%ebp)
085e28c4 +0x1e4:  mov    -0x30(%ebp),%eax
085e28c7 +0x1e7:  cmp    -0x2c(%ebp),%eax
085e28ca +0x1ea:  jge    085e2a1f <+0x33f>
085e28d0 +0x1f0:  lea    -0xe0(%ebp),%eax
085e28d6 +0x1f6:  mov    %eax,(%esp)
085e28d9 +0x1f9:  call   085e7e9a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1622>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1622
085e28de +0x1fe:  mov    0x4(%eax),%eax
085e28e1 +0x201:  mov    %eax,-0xa8(%ebp)
085e28e7 +0x207:  mov    0x8(%ebp),%edx
085e28ea +0x20a:  lea    -0x12c(%ebp),%eax
085e28f0 +0x210:  lea    -0xa8(%ebp),%ecx
085e28f6 +0x216:  mov    %ecx,0x8(%esp)
085e28fa +0x21a:  mov    %edx,0x4(%esp)
085e28fe +0x21e:  mov    %eax,(%esp)
085e2901 +0x221:  call   085e7cba <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1442>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1442
085e2906 +0x226:  sub    $0x4,%esp
085e2909 +0x229:  mov    -0x12c(%ebp),%eax
085e290f +0x22f:  mov    %eax,-0xd0(%ebp)
085e2915 +0x235:  mov    0x8(%ebp),%edx
085e2918 +0x238:  lea    -0xa4(%ebp),%eax
085e291e +0x23e:  mov    %edx,0x4(%esp)
085e2922 +0x242:  mov    %eax,(%esp)
085e2925 +0x245:  call   085e74ee <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xc76>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xc76
085e292a +0x24a:  sub    $0x4,%esp
085e292d +0x24d:  lea    -0xd0(%ebp),%eax
085e2933 +0x253:  mov    %eax,0x4(%esp)
085e2937 +0x257:  lea    -0xa4(%ebp),%eax
085e293d +0x25d:  mov    %eax,(%esp)
085e2940 +0x260:  call   085e7cf4 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x147c>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x147c
085e2945 +0x265:  test   %al,%al
085e2947 +0x267:  jne    085e2a1e <+0x33e>
085e294d +0x26d:  lea    -0xd0(%ebp),%eax
085e2953 +0x273:  mov    %eax,(%esp)
085e2956 +0x276:  call   085e7546 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xcce>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xcce
085e295b +0x27b:  mov    0x4(%eax),%eax
085e295e +0x27e:  mov    %eax,-0x28(%ebp)
085e2961 +0x281:  cmpl   $0x0,-0x28(%ebp)
085e2965 +0x285:  je     085e29db <+0x2fb>
085e2967 +0x287:  mov    -0x28(%ebp),%eax
085e296a +0x28a:  mov    %eax,(%esp)
085e296d +0x28d:  call   085e6906 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x8e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x8e
085e2972 +0x292:  mov    %eax,-0x90(%ebp)
085e2978 +0x298:  mov    -0x28(%ebp),%eax
085e297b +0x29b:  mov    %eax,(%esp)
085e297e +0x29e:  call   085e6912 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x9a>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x9a
085e2983 +0x2a3:  mov    %eax,-0x8c(%ebp)
085e2989 +0x2a9:  lea    -0x98(%ebp),%eax
085e298f +0x2af:  lea    -0x90(%ebp),%edx
085e2995 +0x2b5:  mov    %edx,0x8(%esp)
085e2999 +0x2b9:  lea    -0x8c(%ebp),%edx
085e299f +0x2bf:  mov    %edx,0x4(%esp)
085e29a3 +0x2c3:  mov    %eax,(%esp)
085e29a6 +0x2c6:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
085e29ab +0x2cb:  sub    $0x4,%esp
085e29ae +0x2ce:  lea    -0x98(%ebp),%eax
085e29b4 +0x2d4:  mov    %eax,0x4(%esp)
085e29b8 +0x2d8:  lea    -0xa0(%ebp),%eax
085e29be +0x2de:  mov    %eax,(%esp)
085e29c1 +0x2e1:  call   085e7d08 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1490>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1490
085e29c6 +0x2e6:  lea    -0xa0(%ebp),%eax
085e29cc +0x2ec:  mov    %eax,0x4(%esp)
085e29d0 +0x2f0:  mov    0xc(%ebp),%eax
085e29d3 +0x2f3:  mov    %eax,(%esp)
085e29d6 +0x2f6:  call   085e7d3c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x14c4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x14c4
085e29db +0x2fb:  mov    -0x44(%ebp),%ebx
085e29de +0x2fe:  lea    -0xe0(%ebp),%eax
085e29e4 +0x304:  mov    %eax,(%esp)
085e29e7 +0x307:  call   085e7e9a <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1622>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1622
085e29ec +0x30c:  mov    (%eax),%eax
085e29ee +0x30e:  mov    %ebx,%edx
085e29f0 +0x310:  sub    %eax,%edx
085e29f2 +0x312:  mov    %edx,%eax
085e29f4 +0x314:  mov    %eax,-0x44(%ebp)
085e29f7 +0x317:  lea    -0x88(%ebp),%eax
085e29fd +0x31d:  mov    -0xe0(%ebp),%edx
085e2a03 +0x323:  mov    %edx,0x8(%esp)
085e2a07 +0x327:  lea    -0xd8(%ebp),%edx
085e2a0d +0x32d:  mov    %edx,0x4(%esp)
085e2a11 +0x331:  mov    %eax,(%esp)
085e2a14 +0x334:  call   085e7ea8 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1630>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1630
085e2a19 +0x339:  sub    $0x4,%esp
085e2a1c +0x33c:  jmp    085e2a68 <+0x388>
085e2a1e +0x33e:  nop
085e2a1f +0x33f:  lea    -0xe0(%ebp),%eax
085e2a25 +0x345:  mov    %eax,(%esp)
085e2a28 +0x348:  call   085e7e86 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x160e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x160e
085e2a2d +0x34d:  lea    -0xac(%ebp),%eax
085e2a33 +0x353:  lea    -0xd8(%ebp),%edx
085e2a39 +0x359:  mov    %edx,0x4(%esp)
085e2a3d +0x35d:  mov    %eax,(%esp)
085e2a40 +0x360:  call   085e7e4e <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x15d6>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x15d6
085e2a45 +0x365:  sub    $0x4,%esp
085e2a48 +0x368:  lea    -0xac(%ebp),%eax
085e2a4e +0x36e:  mov    %eax,0x4(%esp)
085e2a52 +0x372:  lea    -0xe0(%ebp),%eax
085e2a58 +0x378:  mov    %eax,(%esp)
085e2a5b +0x37b:  call   085e7e72 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x15fa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x15fa
085e2a60 +0x380:  test   %al,%al
085e2a62 +0x382:  jne    085e28ab <+0x1cb>
085e2a68 +0x388:  cmpl   $0x0,-0x44(%ebp)
085e2a6c +0x38c:  jg     085e2ab6 <+0x3d6>
085e2a6e +0x38e:  movl   $0x5,0xc(%esp)
085e2a76 +0x396:  movl   $0x123,0x8(%esp)
085e2a7e +0x39e:  movl   $&_ZZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EEE19__PRETTY_FUNCTION__,0x4(%esp)
085e2a86 +0x3a6:  lea    -0x84(%ebp),%eax
085e2a8c +0x3ac:  mov    %eax,(%esp)
085e2a8f +0x3af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e2a94 +0x3b4:  mov    -0x44(%ebp),%eax
085e2a97 +0x3b7:  mov    %eax,0x8(%esp)
085e2a9b +0x3bb:  movl   $"[@missionSystem] InvalidMaxDice %d",0x4(%esp)
085e2aa3 +0x3c3:  lea    -0x84(%ebp),%eax
085e2aa9 +0x3c9:  mov    %eax,(%esp)
085e2aac +0x3cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e2ab1 +0x3d1:  jmp    085e2e5b <+0x77b>
085e2ab6 +0x3d6:  addl   $0x1,-0x34(%ebp)
085e2aba +0x3da:  mov    0x8(%ebp),%eax
085e2abd +0x3dd:  mov    0x30(%eax),%eax
085e2ac0 +0x3e0:  cmp    -0x34(%ebp),%eax
085e2ac3 +0x3e3:  seta   %al
085e2ac6 +0x3e6:  test   %al,%al
085e2ac8 +0x3e8:  jne    085e2867 <+0x187>
085e2ace +0x3ee:  movl   $0x0,-0x40(%ebp)
085e2ad5 +0x3f5:  movl   $0x0,0x4(%esp)
085e2add +0x3fd:  lea    -0xdc(%ebp),%eax
085e2ae3 +0x403:  mov    %eax,(%esp)
085e2ae6 +0x406:  call   085e7ee0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x1668>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x1668
085e2aeb +0x40b:  movl   $0x0,-0x24(%ebp)
085e2af2 +0x412:  jmp    085e2e22 <+0x742>
085e2af7 +0x417:  mov    -0x24(%ebp),%eax
085e2afa +0x41a:  mov    %eax,0x4(%esp)
085e2afe +0x41e:  mov    0xc(%ebp),%eax
085e2b01 +0x421:  mov    %eax,(%esp)
085e2b04 +0x424:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2b09 +0x429:  mov    (%eax),%eax
085e2b0b +0x42b:  mov    %eax,-0x40(%ebp)
085e2b0e +0x42e:  cmpl   $0x0,-0x40(%ebp)
085e2b12 +0x432:  je     085e2b1e <+0x43e>
085e2b14 +0x434:  cmpl   $0x20,-0x40(%ebp)
085e2b18 +0x438:  jbe    085e2c63 <+0x583>
085e2b1e +0x43e:  lea    -0xe4(%ebp),%eax
085e2b24 +0x444:  mov    %eax,(%esp)
085e2b27 +0x447:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085e2b2c +0x44c:  movl   $0x0,-0x20(%ebp)
085e2b33 +0x453:  jmp    085e2b98 <+0x4b8>
085e2b35 +0x455:  mov    -0x20(%ebp),%eax
085e2b38 +0x458:  mov    %eax,0x4(%esp)
085e2b3c +0x45c:  mov    0xc(%ebp),%eax
085e2b3f +0x45f:  mov    %eax,(%esp)
085e2b42 +0x462:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2b47 +0x467:  mov    0x4(%eax),%ebx
085e2b4a +0x46a:  mov    -0x20(%ebp),%eax
085e2b4d +0x46d:  mov    %eax,0x4(%esp)
085e2b51 +0x471:  mov    0xc(%ebp),%eax
085e2b54 +0x474:  mov    %eax,(%esp)
085e2b57 +0x477:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2b5c +0x47c:  mov    (%eax),%eax
085e2b5e +0x47e:  mov    %ebx,0xc(%esp)
085e2b62 +0x482:  mov    %eax,0x8(%esp)
085e2b66 +0x486:  movl   $"<K:%d, I:%d>",0x4(%esp)
085e2b6e +0x48e:  lea    -0x128(%ebp),%eax
085e2b74 +0x494:  mov    %eax,(%esp)
085e2b77 +0x497:  call   0807e440 <_init+0xd38>
085e2b7c +0x49c:  lea    -0x128(%ebp),%eax
085e2b82 +0x4a2:  mov    %eax,0x4(%esp)
085e2b86 +0x4a6:  lea    -0xe4(%ebp),%eax
085e2b8c +0x4ac:  mov    %eax,(%esp)
085e2b8f +0x4af:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
085e2b94 +0x4b4:  addl   $0x1,-0x20(%ebp)
085e2b98 +0x4b8:  mov    0xc(%ebp),%eax
085e2b9b +0x4bb:  mov    %eax,(%esp)
085e2b9e +0x4be:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e2ba3 +0x4c3:  cmp    -0x20(%ebp),%eax
085e2ba6 +0x4c6:  seta   %al
085e2ba9 +0x4c9:  test   %al,%al
085e2bab +0x4cb:  jne    085e2b35 <+0x455>
085e2bad +0x4cd:  lea    -0xe4(%ebp),%eax
085e2bb3 +0x4d3:  mov    %eax,(%esp)
085e2bb6 +0x4d6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085e2bbb +0x4db:  mov    %eax,%esi
085e2bbd +0x4dd:  mov    0xc(%ebp),%eax
085e2bc0 +0x4e0:  mov    %eax,(%esp)
085e2bc3 +0x4e3:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e2bc8 +0x4e8:  mov    %eax,%ebx
085e2bca +0x4ea:  mov    -0x24(%ebp),%eax
085e2bcd +0x4ed:  mov    %eax,0x4(%esp)
085e2bd1 +0x4f1:  mov    0xc(%ebp),%eax
085e2bd4 +0x4f4:  mov    %eax,(%esp)
085e2bd7 +0x4f7:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2bdc +0x4fc:  mov    0x4(%eax),%edi
085e2bdf +0x4ff:  movl   $0x5,0xc(%esp)
085e2be7 +0x507:  movl   $0x139,0x8(%esp)
085e2bef +0x50f:  movl   $&_ZZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EEE19__PRETTY_FUNCTION__,0x4(%esp)
085e2bf7 +0x517:  lea    -0x74(%ebp),%eax
085e2bfa +0x51a:  mov    %eax,(%esp)
085e2bfd +0x51d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e2c02 +0x522:  mov    %esi,0x14(%esp)
085e2c06 +0x526:  mov    %ebx,0x10(%esp)
085e2c0a +0x52a:  mov    %edi,0xc(%esp)
085e2c0e +0x52e:  mov    -0x40(%ebp),%eax
085e2c11 +0x531:  mov    %eax,0x8(%esp)
085e2c15 +0x535:  movl   $"[@missionSystem] OverKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >",0x4(%esp)
085e2c1d +0x53d:  lea    -0x74(%ebp),%eax
085e2c20 +0x540:  mov    %eax,(%esp)
085e2c23 +0x543:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e2c28 +0x548:  mov    0xc(%ebp),%eax
085e2c2b +0x54b:  mov    %eax,(%esp)
085e2c2e +0x54e:  call   085e7f34 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16bc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16bc
085e2c33 +0x553:  jmp    085e2c50 <+0x570>
085e2c35 +0x555:  mov    %edx,%ebx
085e2c37 +0x557:  mov    %eax,%esi
085e2c39 +0x559:  lea    -0xe4(%ebp),%eax
085e2c3f +0x55f:  mov    %eax,(%esp)
085e2c42 +0x562:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085e2c47 +0x567:  mov    %esi,%eax
085e2c49 +0x569:  mov    %ebx,%edx
085e2c4b +0x56b:  jmp    085e2e3d <+0x75d>
085e2c50 +0x570:  lea    -0xe4(%ebp),%eax
085e2c56 +0x576:  mov    %eax,(%esp)
085e2c59 +0x579:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085e2c5e +0x57e:  jmp    085e2e5b <+0x77b>
085e2c63 +0x583:  lea    -0x64(%ebp),%eax
085e2c66 +0x586:  mov    -0x40(%ebp),%edx
085e2c69 +0x589:  mov    %edx,0x8(%esp)
085e2c6d +0x58d:  lea    -0xdc(%ebp),%edx
085e2c73 +0x593:  mov    %edx,0x4(%esp)
085e2c77 +0x597:  mov    %eax,(%esp)
085e2c7a +0x59a:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
085e2c7f +0x59f:  sub    $0x4,%esp
085e2c82 +0x5a2:  lea    -0x64(%ebp),%eax
085e2c85 +0x5a5:  mov    %eax,(%esp)
085e2c88 +0x5a8:  call   0811187a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd8c
085e2c8d +0x5ad:  mov    %eax,%ebx
085e2c8f +0x5af:  lea    -0x64(%ebp),%eax
085e2c92 +0x5b2:  mov    %eax,(%esp)
085e2c95 +0x5b5:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
085e2c9a +0x5ba:  test   %bl,%bl
085e2c9c +0x5bc:  je     085e2de1 <+0x701>
085e2ca2 +0x5c2:  lea    -0xe8(%ebp),%eax
085e2ca8 +0x5c8:  mov    %eax,(%esp)
085e2cab +0x5cb:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085e2cb0 +0x5d0:  movl   $0x0,-0x1c(%ebp)
085e2cb7 +0x5d7:  jmp    085e2d1c <+0x63c>
085e2cb9 +0x5d9:  mov    -0x1c(%ebp),%eax
085e2cbc +0x5dc:  mov    %eax,0x4(%esp)
085e2cc0 +0x5e0:  mov    0xc(%ebp),%eax
085e2cc3 +0x5e3:  mov    %eax,(%esp)
085e2cc6 +0x5e6:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2ccb +0x5eb:  mov    0x4(%eax),%ebx
085e2cce +0x5ee:  mov    -0x1c(%ebp),%eax
085e2cd1 +0x5f1:  mov    %eax,0x4(%esp)
085e2cd5 +0x5f5:  mov    0xc(%ebp),%eax
085e2cd8 +0x5f8:  mov    %eax,(%esp)
085e2cdb +0x5fb:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2ce0 +0x600:  mov    (%eax),%eax
085e2ce2 +0x602:  mov    %ebx,0xc(%esp)
085e2ce6 +0x606:  mov    %eax,0x8(%esp)
085e2cea +0x60a:  movl   $"<K:%d, I:%d>",0x4(%esp)
085e2cf2 +0x612:  lea    -0x128(%ebp),%eax
085e2cf8 +0x618:  mov    %eax,(%esp)
085e2cfb +0x61b:  call   0807e440 <_init+0xd38>
085e2d00 +0x620:  lea    -0x128(%ebp),%eax
085e2d06 +0x626:  mov    %eax,0x4(%esp)
085e2d0a +0x62a:  lea    -0xe8(%ebp),%eax
085e2d10 +0x630:  mov    %eax,(%esp)
085e2d13 +0x633:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
085e2d18 +0x638:  addl   $0x1,-0x1c(%ebp)
085e2d1c +0x63c:  mov    0xc(%ebp),%eax
085e2d1f +0x63f:  mov    %eax,(%esp)
085e2d22 +0x642:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e2d27 +0x647:  cmp    -0x1c(%ebp),%eax
085e2d2a +0x64a:  seta   %al
085e2d2d +0x64d:  test   %al,%al
085e2d2f +0x64f:  jne    085e2cb9 <+0x5d9>
085e2d31 +0x651:  lea    -0xe8(%ebp),%eax
085e2d37 +0x657:  mov    %eax,(%esp)
085e2d3a +0x65a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085e2d3f +0x65f:  mov    %eax,%esi
085e2d41 +0x661:  mov    0xc(%ebp),%eax
085e2d44 +0x664:  mov    %eax,(%esp)
085e2d47 +0x667:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e2d4c +0x66c:  mov    %eax,%ebx
085e2d4e +0x66e:  mov    -0x24(%ebp),%eax
085e2d51 +0x671:  mov    %eax,0x4(%esp)
085e2d55 +0x675:  mov    0xc(%ebp),%eax
085e2d58 +0x678:  mov    %eax,(%esp)
085e2d5b +0x67b:  call   085e7f22 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16aa>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16aa
085e2d60 +0x680:  mov    0x4(%eax),%edi
085e2d63 +0x683:  movl   $0x5,0xc(%esp)
085e2d6b +0x68b:  movl   $0x14d,0x8(%esp)
085e2d73 +0x693:  movl   $&_ZZN17PvP_MissionSystem20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EEE19__PRETTY_FUNCTION__,0x4(%esp)
085e2d7b +0x69b:  lea    -0x5c(%ebp),%eax
085e2d7e +0x69e:  mov    %eax,(%esp)
085e2d81 +0x6a1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085e2d86 +0x6a6:  mov    %esi,0x14(%esp)
085e2d8a +0x6aa:  mov    %ebx,0x10(%esp)
085e2d8e +0x6ae:  mov    %edi,0xc(%esp)
085e2d92 +0x6b2:  mov    -0x40(%ebp),%eax
085e2d95 +0x6b5:  mov    %eax,0x8(%esp)
085e2d99 +0x6b9:  movl   $"[@missionSystem] OverlappedKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >",0x4(%esp)
085e2da1 +0x6c1:  lea    -0x5c(%ebp),%eax
085e2da4 +0x6c4:  mov    %eax,(%esp)
085e2da7 +0x6c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085e2dac +0x6cc:  mov    0xc(%ebp),%eax
085e2daf +0x6cf:  mov    %eax,(%esp)
085e2db2 +0x6d2:  call   085e7f34 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x16bc>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x16bc
085e2db7 +0x6d7:  jmp    085e2dd1 <+0x6f1>
085e2db9 +0x6d9:  mov    %edx,%ebx
085e2dbb +0x6db:  mov    %eax,%esi
085e2dbd +0x6dd:  lea    -0xe8(%ebp),%eax
085e2dc3 +0x6e3:  mov    %eax,(%esp)
085e2dc6 +0x6e6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085e2dcb +0x6eb:  mov    %esi,%eax
085e2dcd +0x6ed:  mov    %ebx,%edx
085e2dcf +0x6ef:  jmp    085e2e3d <+0x75d>
085e2dd1 +0x6f1:  lea    -0xe8(%ebp),%eax
085e2dd7 +0x6f7:  mov    %eax,(%esp)
085e2dda +0x6fa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085e2ddf +0x6ff:  jmp    085e2e5b <+0x77b>
085e2de1 +0x701:  lea    -0x4c(%ebp),%eax
085e2de4 +0x704:  mov    -0x40(%ebp),%edx
085e2de7 +0x707:  mov    %edx,0x8(%esp)
085e2deb +0x70b:  lea    -0xdc(%ebp),%edx
085e2df1 +0x711:  mov    %edx,0x4(%esp)
085e2df5 +0x715:  mov    %eax,(%esp)
085e2df8 +0x718:  call   08111846 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd58>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd58
085e2dfd +0x71d:  sub    $0x4,%esp
085e2e00 +0x720:  movl   $0x1,0x4(%esp)
085e2e08 +0x728:  lea    -0x4c(%ebp),%eax
085e2e0b +0x72b:  mov    %eax,(%esp)
085e2e0e +0x72e:  call   085e7652 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xdda>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xdda
085e2e13 +0x733:  lea    -0x4c(%ebp),%eax
085e2e16 +0x736:  mov    %eax,(%esp)
085e2e19 +0x739:  call   08111874 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd86>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd86
085e2e1e +0x73e:  addl   $0x1,-0x24(%ebp)
085e2e22 +0x742:  mov    0xc(%ebp),%eax
085e2e25 +0x745:  mov    %eax,(%esp)
085e2e28 +0x748:  call   085e7f06 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x168e>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x168e
085e2e2d +0x74d:  cmp    -0x24(%ebp),%eax
085e2e30 +0x750:  seta   %al
085e2e33 +0x753:  test   %al,%al
085e2e35 +0x755:  jne    085e2af7 <+0x417>
085e2e3b +0x75b:  jmp    085e2e5b <+0x77b>
085e2e3d +0x75d:  mov    %edx,%ebx
085e2e3f +0x75f:  mov    %eax,%esi
085e2e41 +0x761:  lea    -0xd8(%ebp),%eax
085e2e47 +0x767:  mov    %eax,(%esp)
085e2e4a +0x76a:  call   085e6eb0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x638>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x638
085e2e4f +0x76f:  mov    %esi,%eax
085e2e51 +0x771:  mov    %ebx,%edx
085e2e53 +0x773:  mov    %eax,(%esp)
085e2e56 +0x776:  call   08ae3750 <_Unwind_Resume>
085e2e5b +0x77b:  lea    -0xd8(%ebp),%eax
085e2e61 +0x781:  mov    %eax,(%esp)
085e2e64 +0x784:  call   085e6eb0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x638>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x638
085e2e69 +0x789:  lea    -0xc(%ebp),%esp
085e2e6c +0x78c:  add    $0x0,%esp
085e2e6f +0x78f:  pop    %ebx
085e2e70 +0x790:  pop    %esi
085e2e71 +0x791:  pop    %edi
085e2e72 +0x792:  pop    %ebp
085e2e73 +0x793:  ret
```

## 反编译 C

```c
// PvP_MissionSystem::get_New_DailyMission @ 0x85e26e0

/* PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>,
   std::allocator<std::pair<unsigned int, unsigned int> > >&) */

void __thiscall PvP_MissionSystem::get_New_DailyMission(PvP_MissionSystem *this,vector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int local_130;
  char local_12c [64];
  string local_ec [4];
  string local_e8 [4];
  undefined4 local_e4;
  bitset<32u> local_e0 [4];
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  local_dc [8];
  int local_d4;
  undefined4 local_d0;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_cc [4];
  pair<unsigned_int,unsigned_int> local_c8 [8];
  int local_c0 [2];
  undefined4 local_b8;
  int local_b4;
  _List_iterator local_b0 [4];
  undefined4 local_ac;
  map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>> local_a8 [4];
  pair<unsigned_int,unsigned_int> local_a4 [8];
  int local_9c [2];
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [4];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  reference local_68 [8];
  cMyTrace local_60 [16];
  reference local_50 [8];
  uint local_48;
  uint local_44;
  uint local_40;
  CMission *local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  CMission *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
  local_40 = 0;
  while (uVar4 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24)),
        local_40 < uVar4) {
    puVar7 = (undefined4 *)
             std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x24),local_40)
    ;
    local_d0 = *puVar7;
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
              (&local_130);
    local_d4 = local_130;
    std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
              (local_cc);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator==
                      ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_cc,
                       (_Rb_tree_iterator *)&local_d4);
    if (cVar2 == '\0') {
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
      local_3c = *(CMission **)(iVar10 + 4);
      if (local_3c != (CMission *)0x0) {
        local_b8 = CMission::GetMissionIndex(local_3c);
        local_b4 = CMission::GetMissionKind(local_3c);
        std::make_pair<int,int>(local_c0,&local_b4);
        std::pair<unsigned_int,unsigned_int>::pair<int,int>(local_c8,(pair *)local_c0);
        std::
        vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
        ::push_back((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     *)param_1,local_c8);
      }
    }
    local_40 = local_40 + 1;
  }
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  list(local_dc,(list *)(this + 0x34));
  local_48 = *(uint *)(this + 0x3c);
  for (local_38 = 0; local_38 < *(uint *)(this + 0x30); local_38 = local_38 + 1) {
    local_34 = CMTRand::randInt(*(CMTRand **)(this + 0x44));
    local_34 = local_34 % local_48;
    local_30 = 0;
                    /* try { // try from 085e289e to 085e2b2b has its CatchHandler @ 085e2e3d */
    std::
    list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
    ::begin();
    while( true ) {
      std::
      list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
      ::end();
      cVar2 = std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator!=
                        ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4,local_b0)
      ;
      if (cVar2 == '\0') break;
      piVar5 = (int *)std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                                ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
      local_30 = *piVar5 + local_30;
      if ((int)local_34 < local_30) {
        iVar10 = std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                           ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
        local_ac = *(undefined4 *)(iVar10 + 4);
        std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::find
                  (&local_130);
        local_d4 = local_130;
        std::map<int,CMission*,std::less<int>,std::allocator<std::pair<int_const,CMission*>>>::end
                  (local_a8);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)local_a8,
                           (_Rb_tree_iterator *)&local_d4);
        if (cVar2 == '\0') {
          iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CMission*>>::operator->
                             ((_Rb_tree_iterator<std::pair<int_const,CMission*>> *)&local_d4);
          local_2c = *(CMission **)(iVar10 + 4);
          if (local_2c != (CMission *)0x0) {
            local_94 = CMission::GetMissionIndex(local_2c);
            local_90 = CMission::GetMissionKind(local_2c);
            std::make_pair<int,int>(local_9c,&local_90);
            std::pair<unsigned_int,unsigned_int>::pair<int,int>(local_a4,(pair *)local_9c);
            std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::push_back((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1,local_a4);
          }
          uVar4 = local_48;
          piVar5 = (int *)std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator->
                                    ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)
                                     &local_e4);
          local_48 = uVar4 - *piVar5;
          std::
          list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::erase(local_8c,local_dc,local_e4);
          break;
        }
      }
      std::_List_iterator<std::pair<unsigned_int,unsigned_int>>::operator++
                ((_List_iterator<std::pair<unsigned_int,unsigned_int>> *)&local_e4);
    }
    if ((int)local_48 < 1) {
      cMyTrace::cMyTrace(local_88,
                         "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                         ,0x123,5);
      cMyTrace::operator()(local_88,"[@missionSystem] InvalidMaxDice %d",local_48);
      goto LAB_085e2e5b;
    }
  }
  local_44 = 0;
  std::bitset<32u>::bitset(local_e0,0);
  local_28 = 0;
  while( true ) {
    uVar4 = std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                    *)param_1);
    if (uVar4 <= local_28) goto LAB_085e2e5b;
    puVar6 = (uint *)std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                                   *)param_1,local_28);
    local_44 = *puVar6;
    if ((local_44 == 0) || (0x20 < local_44)) break;
    std::bitset<32u>::operator[]((uint)local_68);
    bVar3 = std::bitset::reference::operator_cast_to_bool(local_68);
    std::bitset<32u>::reference::~reference((reference *)local_68);
    if (bVar3) {
      std::string::string(local_ec);
      local_20 = 0;
      while (uVar4 = std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                             *)param_1), local_20 < uVar4) {
        iVar10 = std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                               *)param_1,local_20);
        uVar1 = *(undefined4 *)(iVar10 + 4);
        puVar7 = (undefined4 *)
                 std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                               *)param_1,local_20);
        sprintf(local_12c,"<K:%d, I:%d>",*puVar7,uVar1);
                    /* try { // try from 085e2d13 to 085e2db6 has its CatchHandler @ 085e2db9 */
        std::string::operator+=(local_ec,local_12c);
        local_20 = local_20 + 1;
      }
      uVar8 = std::string::c_str(local_ec);
      uVar9 = std::
              vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
              ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                      *)param_1);
      iVar10 = std::
               vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
               ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                             *)param_1,local_28);
      uVar1 = *(undefined4 *)(iVar10 + 4);
      cMyTrace::cMyTrace(local_60,
                         "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                         ,0x14d,5);
      cMyTrace::operator()
                (local_60,
                 "[@missionSystem] OverlappedKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >"
                 ,local_44,uVar1,uVar9,uVar8);
      std::
      vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
      ::clear((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
               *)param_1);
                    /* try { // try from 085e2dda to 085e2dfc has its CatchHandler @ 085e2e3d */
      std::string::~string(local_ec);
      goto LAB_085e2e5b;
    }
    std::bitset<32u>::operator[]((uint)local_50);
    std::bitset<32u>::reference::operator=(local_50,true);
    std::bitset<32u>::reference::~reference(local_50);
    local_28 = local_28 + 1;
  }
  std::string::string(local_e8);
  local_24 = 0;
  while (uVar4 = std::
                 vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                 ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1), local_24 < uVar4) {
    iVar10 = std::
             vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                           *)param_1,local_24);
    uVar1 = *(undefined4 *)(iVar10 + 4);
    puVar7 = (undefined4 *)
             std::
             vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
             ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                           *)param_1,local_24);
    sprintf(local_12c,"<K:%d, I:%d>",*puVar7,uVar1);
                    /* try { // try from 085e2b8f to 085e2c32 has its CatchHandler @ 085e2c35 */
    std::string::operator+=(local_e8,local_12c);
    local_24 = local_24 + 1;
  }
  uVar8 = std::string::c_str(local_e8);
  uVar9 = std::
          vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::size((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                  *)param_1);
  iVar10 = std::
           vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
           ::operator[]((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                         *)param_1,local_28);
  uVar1 = *(undefined4 *)(iVar10 + 4);
  cMyTrace::cMyTrace(local_78,
                     "void PvP_MissionSystem::get_New_DailyMission(std::vector<std::pair<unsigned int, unsigned int>, std::allocator<std::pair<unsigned int, unsigned int> > >&)"
                     ,0x139,5);
  cMyTrace::operator()
            (local_78,
             "[@missionSystem] OverKind: <Invalid mission kind : %d> <mission index : %d> <Created DailyMission Size : %d> <List : %s >"
             ,local_44,uVar1,uVar9,uVar8);
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::clear((vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
           *)param_1);
                    /* try { // try from 085e2c59 to 085e2caf has its CatchHandler @ 085e2e3d */
  std::string::~string(local_e8);
LAB_085e2e5b:
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  ~list(local_dc);
  return;
}
```
