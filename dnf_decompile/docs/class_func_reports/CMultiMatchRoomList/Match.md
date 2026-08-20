# Match

`_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_`

`CMultiMatchRoomList::Match(IMatch*, IMatch**)`

| 类 | 地址 |
|---|---|
| `CMultiMatchRoomList` | `0x085675d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085675d0  _ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_
#           CMultiMatchRoomList::Match(IMatch*, IMatch**)
# range [0x085675d0, 0x08567953]
085675d0 +0x000:  push   %ebp
085675d1 +0x001:  mov    %esp,%ebp
085675d3 +0x003:  push   %esi
085675d4 +0x004:  push   %ebx
085675d5 +0x005:  sub    $0x50,%esp
085675d8 +0x008:  mov    0x8(%ebp),%eax
085675db +0x00b:  add    $0x4,%eax
085675de +0x00e:  mov    %eax,(%esp)
085675e1 +0x011:  call   08569a8c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1456>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1456
085675e6 +0x016:  test   %al,%al
085675e8 +0x018:  je     085675f4 <+0x24>
085675ea +0x01a:  mov    $0x0,%ebx
085675ef +0x01f:  jmp    08567948 <+0x378>
085675f4 +0x024:  lea    -0x38(%ebp),%eax
085675f7 +0x027:  mov    %eax,(%esp)
085675fa +0x02a:  call   08569768 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1132>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1132
085675ff +0x02f:  mov    0xc(%ebp),%eax
08567602 +0x032:  mov    (%eax),%eax
08567604 +0x034:  add    $0x84,%eax
08567609 +0x039:  mov    (%eax),%edx
0856760b +0x03b:  mov    0xc(%ebp),%eax
0856760e +0x03e:  mov    %eax,(%esp)
08567611 +0x041:  call   *%edx
08567613 +0x043:  mov    %eax,%ebx
08567615 +0x045:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
0856761a +0x04a:  movzbl %al,%eax
0856761d +0x04d:  cmp    %eax,%ebx
0856761f +0x04f:  setl   %al
08567622 +0x052:  test   %al,%al
08567624 +0x054:  je     085676e8 <+0x118>
0856762a +0x05a:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
0856762f +0x05f:  movzbl %al,%ebx
08567632 +0x062:  mov    0xc(%ebp),%eax
08567635 +0x065:  mov    (%eax),%eax
08567637 +0x067:  add    $0x84,%eax
0856763c +0x06c:  mov    (%eax),%edx
0856763e +0x06e:  mov    0xc(%ebp),%eax
08567641 +0x071:  mov    %eax,(%esp)
08567644 +0x074:  call   *%edx
08567646 +0x076:  mov    %ebx,%edx
08567648 +0x078:  sub    %eax,%edx
0856764a +0x07a:  lea    -0x38(%ebp),%eax
0856764d +0x07d:  mov    %eax,0xc(%esp)
08567651 +0x081:  mov    %edx,0x8(%esp)
08567655 +0x085:  mov    0xc(%ebp),%eax
08567658 +0x088:  mov    %eax,0x4(%esp)
0856765c +0x08c:  mov    0x8(%ebp),%eax
0856765f +0x08f:  mov    %eax,(%esp)
08567662 +0x092:  call   0856703c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE>  ; CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*, std::allocator<IMatch*> >&)
08567667 +0x097:  xor    $0x1,%eax
0856766a +0x09a:  test   %al,%al
0856766c +0x09c:  je     08567678 <+0xa8>
0856766e +0x09e:  mov    $0x0,%ebx
08567673 +0x0a3:  jmp    0856793d <+0x36d>
08567678 +0x0a8:  lea    -0x3c(%ebp),%eax
0856767b +0x0ab:  lea    -0x38(%ebp),%edx
0856767e +0x0ae:  mov    %edx,0x4(%esp)
08567682 +0x0b2:  mov    %eax,(%esp)
08567685 +0x0b5:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
0856768a +0x0ba:  sub    $0x4,%esp
0856768d +0x0bd:  jmp    085676bd <+0xed>
0856768f +0x0bf:  mov    0x8(%ebp),%eax
08567692 +0x0c2:  mov    (%eax),%eax
08567694 +0x0c4:  add    $0x4,%eax
08567697 +0x0c7:  mov    (%eax),%ebx
08567699 +0x0c9:  lea    -0x3c(%ebp),%eax
0856769c +0x0cc:  mov    %eax,(%esp)
0856769f +0x0cf:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
085676a4 +0x0d4:  mov    (%eax),%eax
085676a6 +0x0d6:  mov    %eax,0x4(%esp)
085676aa +0x0da:  mov    0x8(%ebp),%eax
085676ad +0x0dd:  mov    %eax,(%esp)
085676b0 +0x0e0:  call   *%ebx
085676b2 +0x0e2:  lea    -0x3c(%ebp),%eax
085676b5 +0x0e5:  mov    %eax,(%esp)
085676b8 +0x0e8:  call   08569acc <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1496>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1496
085676bd +0x0ed:  lea    -0x2c(%ebp),%eax
085676c0 +0x0f0:  lea    -0x38(%ebp),%edx
085676c3 +0x0f3:  mov    %edx,0x4(%esp)
085676c7 +0x0f7:  mov    %eax,(%esp)
085676ca +0x0fa:  call   08569a16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13e0
085676cf +0x0ff:  sub    $0x4,%esp
085676d2 +0x102:  lea    -0x2c(%ebp),%eax
085676d5 +0x105:  mov    %eax,0x4(%esp)
085676d9 +0x109:  lea    -0x3c(%ebp),%eax
085676dc +0x10c:  mov    %eax,(%esp)
085676df +0x10f:  call   08569a9f <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1469>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1469
085676e4 +0x114:  test   %al,%al
085676e6 +0x116:  jne    0856768f <+0xbf>
085676e8 +0x118:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
085676ed +0x11d:  movzbl %al,%eax
085676f0 +0x120:  lea    -0x38(%ebp),%edx
085676f3 +0x123:  mov    %edx,0xc(%esp)
085676f7 +0x127:  mov    %eax,0x8(%esp)
085676fb +0x12b:  mov    0xc(%ebp),%eax
085676fe +0x12e:  mov    %eax,0x4(%esp)
08567702 +0x132:  mov    0x8(%ebp),%eax
08567705 +0x135:  mov    %eax,(%esp)
08567708 +0x138:  call   0856703c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE>  ; CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*, std::allocator<IMatch*> >&)
0856770d +0x13d:  xor    $0x1,%eax
08567710 +0x140:  test   %al,%al
08567712 +0x142:  je     0856778b <+0x1bb>
08567714 +0x144:  lea    -0x40(%ebp),%eax
08567717 +0x147:  lea    -0x38(%ebp),%edx
0856771a +0x14a:  mov    %edx,0x4(%esp)
0856771e +0x14e:  mov    %eax,(%esp)
08567721 +0x151:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
08567726 +0x156:  sub    $0x4,%esp
08567729 +0x159:  jmp    08567756 <+0x186>
0856772b +0x15b:  mov    0x8(%ebp),%eax
0856772e +0x15e:  mov    (%eax),%eax
08567730 +0x160:  mov    (%eax),%ebx
08567732 +0x162:  lea    -0x40(%ebp),%eax
08567735 +0x165:  mov    %eax,(%esp)
08567738 +0x168:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
0856773d +0x16d:  mov    (%eax),%eax
0856773f +0x16f:  mov    %eax,0x4(%esp)
08567743 +0x173:  mov    0x8(%ebp),%eax
08567746 +0x176:  mov    %eax,(%esp)
08567749 +0x179:  call   *%ebx
0856774b +0x17b:  lea    -0x40(%ebp),%eax
0856774e +0x17e:  mov    %eax,(%esp)
08567751 +0x181:  call   08569acc <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1496>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1496
08567756 +0x186:  lea    -0x28(%ebp),%eax
08567759 +0x189:  lea    -0x38(%ebp),%edx
0856775c +0x18c:  mov    %edx,0x4(%esp)
08567760 +0x190:  mov    %eax,(%esp)
08567763 +0x193:  call   08569a16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13e0
08567768 +0x198:  sub    $0x4,%esp
0856776b +0x19b:  lea    -0x28(%ebp),%eax
0856776e +0x19e:  mov    %eax,0x4(%esp)
08567772 +0x1a2:  lea    -0x40(%ebp),%eax
08567775 +0x1a5:  mov    %eax,(%esp)
08567778 +0x1a8:  call   08569a9f <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1469>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1469
0856777d +0x1ad:  test   %al,%al
0856777f +0x1af:  jne    0856772b <+0x15b>
08567781 +0x1b1:  mov    $0x0,%ebx
08567786 +0x1b6:  jmp    0856793d <+0x36d>
0856778b +0x1bb:  lea    -0x38(%ebp),%eax
0856778e +0x1be:  mov    %eax,(%esp)
08567791 +0x1c1:  call   085699b6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1380>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1380
08567796 +0x1c6:  test   %al,%al
08567798 +0x1c8:  je     085677a4 <+0x1d4>
0856779a +0x1ca:  mov    $0x0,%ebx
0856779f +0x1cf:  jmp    0856793d <+0x36d>
085677a4 +0x1d4:  lea    -0x38(%ebp),%eax
085677a7 +0x1d7:  mov    %eax,(%esp)
085677aa +0x1da:  call   08569aec <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14b6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14b6
085677af +0x1df:  cmp    $0x1,%eax
085677b2 +0x1e2:  sete   %al
085677b5 +0x1e5:  test   %al,%al
085677b7 +0x1e7:  je     08567822 <+0x252>
085677b9 +0x1e9:  mov    0x8(%ebp),%eax
085677bc +0x1ec:  mov    (%eax),%eax
085677be +0x1ee:  add    $0x4,%eax
085677c1 +0x1f1:  mov    (%eax),%ebx
085677c3 +0x1f3:  lea    -0x24(%ebp),%eax
085677c6 +0x1f6:  lea    -0x38(%ebp),%edx
085677c9 +0x1f9:  mov    %edx,0x4(%esp)
085677cd +0x1fd:  mov    %eax,(%esp)
085677d0 +0x200:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
085677d5 +0x205:  sub    $0x4,%esp
085677d8 +0x208:  lea    -0x24(%ebp),%eax
085677db +0x20b:  mov    %eax,(%esp)
085677de +0x20e:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
085677e3 +0x213:  mov    (%eax),%eax
085677e5 +0x215:  mov    %eax,0x4(%esp)
085677e9 +0x219:  mov    0x8(%ebp),%eax
085677ec +0x21c:  mov    %eax,(%esp)
085677ef +0x21f:  call   *%ebx
085677f1 +0x221:  lea    -0x20(%ebp),%eax
085677f4 +0x224:  lea    -0x38(%ebp),%edx
085677f7 +0x227:  mov    %edx,0x4(%esp)
085677fb +0x22b:  mov    %eax,(%esp)
085677fe +0x22e:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
08567803 +0x233:  sub    $0x4,%esp
08567806 +0x236:  lea    -0x20(%ebp),%eax
08567809 +0x239:  mov    %eax,(%esp)
0856780c +0x23c:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
08567811 +0x241:  mov    (%eax),%edx
08567813 +0x243:  mov    0x10(%ebp),%eax
08567816 +0x246:  mov    %edx,(%eax)
08567818 +0x248:  mov    $0x1,%ebx
0856781d +0x24d:  jmp    0856793d <+0x36d>
08567822 +0x252:  lea    -0x1c(%ebp),%eax
08567825 +0x255:  lea    -0x38(%ebp),%edx
08567828 +0x258:  mov    %edx,0x4(%esp)
0856782c +0x25c:  mov    %eax,(%esp)
0856782f +0x25f:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
08567834 +0x264:  sub    $0x4,%esp
08567837 +0x267:  lea    -0x1c(%ebp),%eax
0856783a +0x26a:  mov    %eax,(%esp)
0856783d +0x26d:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
08567842 +0x272:  mov    (%eax),%eax
08567844 +0x274:  mov    %eax,-0xc(%ebp)
08567847 +0x277:  mov    0x10(%ebp),%eax
0856784a +0x27a:  mov    -0xc(%ebp),%edx
0856784d +0x27d:  mov    %edx,(%eax)
0856784f +0x27f:  movl   $0x1,-0x18(%ebp)
08567856 +0x286:  lea    -0x14(%ebp),%eax
08567859 +0x289:  lea    -0x38(%ebp),%edx
0856785c +0x28c:  mov    %edx,0x4(%esp)
08567860 +0x290:  mov    %eax,(%esp)
08567863 +0x293:  call   08569a3c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1406>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1406
08567868 +0x298:  sub    $0x4,%esp
0856786b +0x29b:  lea    -0x44(%ebp),%eax
0856786e +0x29e:  lea    -0x18(%ebp),%edx
08567871 +0x2a1:  mov    %edx,0x8(%esp)
08567875 +0x2a5:  lea    -0x14(%ebp),%edx
08567878 +0x2a8:  mov    %edx,0x4(%esp)
0856787c +0x2ac:  mov    %eax,(%esp)
0856787f +0x2af:  call   08569b08 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14d2>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14d2
08567884 +0x2b4:  sub    $0x4,%esp
08567887 +0x2b7:  jmp    085678ec <+0x31c>
08567889 +0x2b9:  mov    0x8(%ebp),%eax
0856788c +0x2bc:  mov    (%eax),%eax
0856788e +0x2be:  add    $0x4,%eax
08567891 +0x2c1:  mov    (%eax),%ebx
08567893 +0x2c3:  lea    -0x44(%ebp),%eax
08567896 +0x2c6:  mov    %eax,(%esp)
08567899 +0x2c9:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
0856789e +0x2ce:  mov    (%eax),%eax
085678a0 +0x2d0:  mov    %eax,0x4(%esp)
085678a4 +0x2d4:  mov    0x8(%ebp),%eax
085678a7 +0x2d7:  mov    %eax,(%esp)
085678aa +0x2da:  call   *%ebx
085678ac +0x2dc:  mov    -0xc(%ebp),%eax
085678af +0x2df:  mov    (%eax),%eax
085678b1 +0x2e1:  add    $0x8c,%eax
085678b6 +0x2e6:  mov    (%eax),%ebx
085678b8 +0x2e8:  lea    -0x44(%ebp),%eax
085678bb +0x2eb:  mov    %eax,(%esp)
085678be +0x2ee:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
085678c3 +0x2f3:  mov    (%eax),%eax
085678c5 +0x2f5:  mov    %eax,0x4(%esp)
085678c9 +0x2f9:  mov    -0xc(%ebp),%eax
085678cc +0x2fc:  mov    %eax,(%esp)
085678cf +0x2ff:  call   *%ebx
085678d1 +0x301:  lea    -0x44(%ebp),%eax
085678d4 +0x304:  mov    %eax,(%esp)
085678d7 +0x307:  call   08569ae2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x14ac>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x14ac
085678dc +0x30c:  mov    (%eax),%eax
085678de +0x30e:  mov    %eax,-0xc(%ebp)
085678e1 +0x311:  lea    -0x44(%ebp),%eax
085678e4 +0x314:  mov    %eax,(%esp)
085678e7 +0x317:  call   08569acc <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1496>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1496
085678ec +0x31c:  lea    -0x10(%ebp),%eax
085678ef +0x31f:  lea    -0x38(%ebp),%edx
085678f2 +0x322:  mov    %edx,0x4(%esp)
085678f6 +0x326:  mov    %eax,(%esp)
085678f9 +0x329:  call   08569a16 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x13e0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x13e0
085678fe +0x32e:  sub    $0x4,%esp
08567901 +0x331:  lea    -0x10(%ebp),%eax
08567904 +0x334:  mov    %eax,0x4(%esp)
08567908 +0x338:  lea    -0x44(%ebp),%eax
0856790b +0x33b:  mov    %eax,(%esp)
0856790e +0x33e:  call   08569a9f <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1469>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1469
08567913 +0x343:  test   %al,%al
08567915 +0x345:  jne    08567889 <+0x2b9>
0856791b +0x34b:  mov    $0x1,%ebx
08567920 +0x350:  jmp    0856793d <+0x36d>
08567922 +0x352:  mov    %edx,%ebx
08567924 +0x354:  mov    %eax,%esi
08567926 +0x356:  lea    -0x38(%ebp),%eax
08567929 +0x359:  mov    %eax,(%esp)
0856792c +0x35c:  call   0856977c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1146>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1146
08567931 +0x361:  mov    %esi,%eax
08567933 +0x363:  mov    %ebx,%edx
08567935 +0x365:  mov    %eax,(%esp)
08567938 +0x368:  call   08ae3750 <_Unwind_Resume>
0856793d +0x36d:  lea    -0x38(%ebp),%eax
08567940 +0x370:  mov    %eax,(%esp)
08567943 +0x373:  call   0856977c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1146>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1146
08567948 +0x378:  mov    %ebx,%eax
0856794a +0x37a:  lea    -0x8(%ebp),%esp
0856794d +0x37d:  add    $0x0,%esp
08567950 +0x380:  pop    %ebx
08567951 +0x381:  pop    %esi
08567952 +0x382:  pop    %ebp
08567953 +0x383:  ret
```

## 反编译 C

```c
// CMultiMatchRoomList::Match @ 0x85675d0

/* CMultiMatchRoomList::Match(IMatch*, IMatch**) */

undefined4 __thiscall
CMultiMatchRoomList::Match(CMultiMatchRoomList *this,IMatch *param_1,IMatch **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_48 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_44 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_40 [4];
  vector<IMatch*,std::allocator<IMatch*>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_28 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_24 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_20 [4];
  undefined4 local_1c;
  int local_18;
  __normal_iterator local_14 [4];
  IMatch *local_10;
  
  cVar2 = std::
          map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
          ::empty((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
                   *)(this + 4));
  if (cVar2 != '\0') {
    return 0;
  }
  std::vector<IMatch*,std::allocator<IMatch*>>::vector(local_3c);
                    /* try { // try from 08567611 to 08567912 has its CatchHandler @ 08567922 */
  iVar4 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
  uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
  if (iVar4 < (int)(uVar5 & 0xff)) {
    uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
    iVar4 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
    cVar2 = GetWaitingRoomCombination(this,param_1,(uVar5 & 0xff) - iVar4,(vector *)local_3c);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_0856793d;
    }
    std::vector<IMatch*,std::allocator<IMatch*>>::begin();
    while( true ) {
      std::vector<IMatch*,std::allocator<IMatch*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_40,local_30);
      if (!bVar3) break;
      pcVar1 = *(code **)(*(int *)this + 4);
      puVar6 = (undefined4 *)
               __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
               operator*(local_40);
      (*pcVar1)(this,*puVar6);
      __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
      operator++(local_40);
    }
  }
  uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
  cVar2 = GetWaitingRoomCombination(this,param_1,uVar5 & 0xff,(vector *)local_3c);
  if (cVar2 == '\x01') {
    cVar2 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
    if (cVar2 == '\0') {
      iVar4 = std::vector<IMatch*,std::allocator<IMatch*>>::size(local_3c);
      if (iVar4 == 1) {
        pcVar1 = *(code **)(*(int *)this + 4);
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_28);
        (*pcVar1)(this,*puVar6);
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_24);
        *param_2 = (IMatch *)*puVar6;
        uVar7 = 1;
      }
      else {
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_20);
        local_10 = (IMatch *)*puVar6;
        *param_2 = local_10;
        local_1c = 1;
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
        operator+(local_48,&local_18);
        while( true ) {
          std::vector<IMatch*,std::allocator<IMatch*>>::end();
          bVar3 = __gnu_cxx::operator!=(local_48,local_14);
          if (!bVar3) break;
          pcVar1 = *(code **)(*(int *)this + 4);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          (*pcVar1)(this,*puVar6);
          pcVar1 = *(code **)(*(int *)local_10 + 0x8c);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          (*pcVar1)(local_10,*puVar6);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          local_10 = (IMatch *)*puVar6;
          __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
          operator++(local_48);
        }
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    std::vector<IMatch*,std::allocator<IMatch*>>::begin();
    while( true ) {
      std::vector<IMatch*,std::allocator<IMatch*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_44,local_2c);
      if (!bVar3) break;
      pcVar1 = (code *)**(undefined4 **)this;
      puVar6 = (undefined4 *)
               __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
               operator*(local_44);
      (*pcVar1)(this,*puVar6);
      __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
      operator++(local_44);
    }
    uVar7 = 0;
  }
LAB_0856793d:
  std::vector<IMatch*,std::allocator<IMatch*>>::~vector(local_3c);
  return uVar7;
}
```
