# add_blood_monster

`_ZN13CBattle_Field17add_blood_monsterER11map_monsterRiS2_St6vectorI19STAssignBloodSystemSaIS4_EES3_I22STAssignBloodPhaseTimeSaIS7_EE`

`CBattle_Field::add_blood_monster(map_monster&, int&, int&, std::vector<STAssignBloodSystem, std::allocator<STAssignBloodSystem> >, std::vector<STAssignBloodPhaseTime, std::allocator<STAssignBloodPhaseTime> >)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08304804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08304804  _ZN13CBattle_Field17add_blood_monsterER11map_monsterRiS2_St6vectorI19STAssignBloodSystemSaIS4_EES3_I22STAssignBloodPhaseTimeSaIS7_EE
#           CBattle_Field::add_blood_monster(map_monster&, int&, int&, std::vector<STAssignBloodSystem, std::allocator<STAssignBloodSystem> >, std::vector<STAssignBloodPhaseTime, std::allocator<STAssignBloodPhaseTime> >)
# range [0x08304804, 0x08304dd1]
08304804 +0x000:  push   %ebp
08304805 +0x001:  mov    %esp,%ebp
08304807 +0x003:  push   %esi
08304808 +0x004:  push   %ebx
08304809 +0x005:  sub    $0x3c0,%esp
0830480f +0x00b:  mov    0x1c(%ebp),%eax
08304812 +0x00e:  mov    %eax,(%esp)
08304815 +0x011:  call   0831179c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3381>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3381
0830481a +0x016:  test   %al,%al
0830481c +0x018:  jne    0830482d <+0x29>
0830481e +0x01a:  mov    0x18(%ebp),%eax
08304821 +0x01d:  mov    %eax,(%esp)
08304824 +0x020:  call   083117e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x33c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x33c5
08304829 +0x025:  test   %al,%al
0830482b +0x027:  je     08304834 <+0x30>
0830482d +0x029:  mov    $0x1,%eax
08304832 +0x02e:  jmp    08304839 <+0x35>
08304834 +0x030:  mov    $0x0,%eax
08304839 +0x035:  test   %al,%al
0830483b +0x037:  je     08304847 <+0x43>
0830483d +0x039:  mov    $0x0,%eax
08304842 +0x03e:  jmp    08304dc8 <+0x5c4>
08304847 +0x043:  movw   $0xffff,-0x44(%ebp)
0830484d +0x049:  movw   $0x0,-0x42(%ebp)
08304853 +0x04f:  movl   $0x0,-0x40(%ebp)
0830485a +0x056:  movw   $0x0,-0x3a(%ebp)
08304860 +0x05c:  movl   $0x0,-0x38(%ebp)
08304867 +0x063:  movl   $0x0,-0x34(%ebp)
0830486e +0x06a:  movl   $0x0,-0x30(%ebp)
08304875 +0x071:  movl   $0x0,-0x2c(%ebp)
0830487c +0x078:  mov    0x18(%ebp),%eax
0830487f +0x07b:  mov    %eax,(%esp)
08304882 +0x07e:  call   08311824 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3409>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3409
08304887 +0x083:  mov    %eax,-0x28(%ebp)
0830488a +0x086:  movw   $0x0,-0x24(%ebp)
08304890 +0x08c:  cmpl   $0x0,-0x28(%ebp)
08304894 +0x090:  jne    083048a0 <+0x9c>
08304896 +0x092:  mov    $0x0,%eax
0830489b +0x097:  jmp    08304dc8 <+0x5c4>
083048a0 +0x09c:  movb   $0x13,-0x21(%ebp)
083048a4 +0x0a0:  mov    0x8(%ebp),%eax
083048a7 +0x0a3:  mov    0x108(%eax),%eax
083048ad +0x0a9:  test   %eax,%eax
083048af +0x0ab:  je     083048ee <+0xea>
083048b1 +0x0ad:  mov    0x8(%ebp),%eax
083048b4 +0x0b0:  mov    0x108(%eax),%eax
083048ba +0x0b6:  mov    %eax,(%esp)
083048bd +0x0b9:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
083048c2 +0x0be:  cmp    $0x1,%eax
083048c5 +0x0c1:  sete   %al
083048c8 +0x0c4:  test   %al,%al
083048ca +0x0c6:  je     083048de <+0xda>
083048cc +0x0c8:  movl   $0x4,(%esp)
083048d3 +0x0cf:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083048d8 +0x0d4:  mov    %ax,-0x24(%ebp)
083048dc +0x0d8:  jmp    083048ee <+0xea>
083048de +0x0da:  movl   $0x5,(%esp)
083048e5 +0x0e1:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
083048ea +0x0e6:  mov    %ax,-0x24(%ebp)
083048ee +0x0ea:  mov    0x8(%ebp),%eax
083048f1 +0x0ed:  mov    0x188(%eax),%eax
083048f7 +0x0f3:  movzbl 0x89f(%eax),%eax
083048fe +0x0fa:  cmp    $0x2,%al
08304900 +0x0fc:  jne    08304908 <+0x104>
08304902 +0x0fe:  movw   $0xffff,-0x24(%ebp)
08304908 +0x104:  lea    -0x39c(%ebp),%eax
0830490e +0x10a:  mov    0x1c(%ebp),%edx
08304911 +0x10d:  mov    %edx,0x4(%esp)
08304915 +0x111:  mov    %eax,(%esp)
08304918 +0x114:  call   08311846 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x342b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x342b
0830491d +0x119:  sub    $0x4,%esp
08304920 +0x11c:  jmp    08304d70 <+0x56c>
08304925 +0x121:  lea    -0x39c(%ebp),%eax
0830492b +0x127:  mov    %eax,(%esp)
0830492e +0x12a:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
08304933 +0x12f:  mov    (%eax),%eax
08304935 +0x131:  mov    %eax,-0x38(%ebp)
08304938 +0x134:  lea    -0x39c(%ebp),%eax
0830493e +0x13a:  mov    %eax,(%esp)
08304941 +0x13d:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
08304946 +0x142:  mov    0x4(%eax),%eax
08304949 +0x145:  mov    %eax,-0x30(%ebp)
0830494c +0x148:  lea    -0x39c(%ebp),%eax
08304952 +0x14e:  mov    %eax,(%esp)
08304955 +0x151:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
0830495a +0x156:  mov    0x4(%eax),%eax
0830495d +0x159:  cmp    $0xffffffff,%eax
08304960 +0x15c:  sete   %al
08304963 +0x15f:  test   %al,%al
08304965 +0x161:  je     083049a3 <+0x19f>
08304967 +0x163:  mov    -0x28(%ebp),%eax
0830496a +0x166:  sub    $0x1,%eax
0830496d +0x169:  mov    %eax,(%esp)
08304970 +0x16c:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304975 +0x171:  mov    %eax,-0x30(%ebp)
08304978 +0x174:  mov    -0x30(%ebp),%eax
0830497b +0x177:  mov    %eax,-0x2c(%ebp)
0830497e +0x17a:  mov    -0x2c(%ebp),%eax
08304981 +0x17d:  mov    %ax,-0x392(%ebp)
08304988 +0x184:  mov    0x8(%ebp),%eax
0830498b +0x187:  lea    0x258(%eax),%edx
08304991 +0x18d:  lea    -0x392(%ebp),%eax
08304997 +0x193:  mov    %eax,0x4(%esp)
0830499b +0x197:  mov    %edx,(%esp)
0830499e +0x19a:  call   0816eefa <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1e8>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1e8
083049a3 +0x19f:  movl   $0x0,-0x20(%ebp)
083049aa +0x1a6:  movl   $0x0,-0x1c(%ebp)
083049b1 +0x1ad:  mov    -0x30(%ebp),%eax
083049b4 +0x1b0:  mov    %eax,0x4(%esp)
083049b8 +0x1b4:  mov    0x18(%ebp),%eax
083049bb +0x1b7:  mov    %eax,(%esp)
083049be +0x1ba:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
083049c3 +0x1bf:  mov    0x1c(%eax),%eax
083049c6 +0x1c2:  mov    %eax,-0x34(%ebp)
083049c9 +0x1c5:  movl   $0x0,-0x14(%ebp)
083049d0 +0x1cc:  jmp    083049fb <+0x1f7>
083049d2 +0x1ce:  mov    -0x30(%ebp),%eax
083049d5 +0x1d1:  mov    %eax,0x4(%esp)
083049d9 +0x1d5:  mov    0x18(%ebp),%eax
083049dc +0x1d8:  mov    %eax,(%esp)
083049df +0x1db:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
083049e4 +0x1e0:  mov    0x20(%eax),%eax
083049e7 +0x1e3:  imul   -0x14(%ebp),%eax
083049eb +0x1e7:  add    -0x34(%ebp),%eax
083049ee +0x1ea:  mov    %eax,-0x20(%ebp)
083049f1 +0x1ed:  mov    -0x20(%ebp),%eax
083049f4 +0x1f0:  add    %eax,-0x1c(%ebp)
083049f7 +0x1f3:  addl   $0x1,-0x14(%ebp)
083049fb +0x1f7:  mov    -0x30(%ebp),%eax
083049fe +0x1fa:  mov    %eax,0x4(%esp)
08304a02 +0x1fe:  mov    0x18(%ebp),%eax
08304a05 +0x201:  mov    %eax,(%esp)
08304a08 +0x204:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304a0d +0x209:  mov    0x24(%eax),%eax
08304a10 +0x20c:  cmp    -0x14(%ebp),%eax
08304a13 +0x20f:  setg   %al
08304a16 +0x212:  test   %al,%al
08304a18 +0x214:  jne    083049d2 <+0x1ce>
08304a1a +0x216:  mov    -0x1c(%ebp),%eax
08304a1d +0x219:  mov    %eax,-0x34(%ebp)
08304a20 +0x21c:  mov    0x8(%ebp),%eax
08304a23 +0x21f:  add    $0x264,%eax
08304a28 +0x224:  movl   $0x0,0x4(%esp)
08304a30 +0x22c:  mov    %eax,(%esp)
08304a33 +0x22f:  call   0814abf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x98f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x98f
08304a38 +0x234:  movswl -0x44(%ebp),%eax
08304a3c +0x238:  cmp    -0x38(%ebp),%eax
08304a3f +0x23b:  je     08304b09 <+0x305>
08304a45 +0x241:  movswl -0x24(%ebp),%eax
08304a49 +0x245:  cmp    -0x38(%ebp),%eax
08304a4c +0x248:  jne    08304b02 <+0x2fe>
08304a52 +0x24e:  movl   $0x64,(%esp)
08304a59 +0x255:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304a5e +0x25a:  mov    %eax,-0x10(%ebp)
08304a61 +0x25d:  cmpl   $0x27,-0x10(%ebp)
08304a65 +0x261:  jg     08304a78 <+0x274>
08304a67 +0x263:  movl   $0x5,(%esp)
08304a6e +0x26a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304a73 +0x26f:  mov    %al,-0x21(%ebp)
08304a76 +0x272:  jmp    08304aca <+0x2c6>
08304a78 +0x274:  cmpl   $0x45,-0x10(%ebp)
08304a7c +0x278:  jg     08304a92 <+0x28e>
08304a7e +0x27a:  movl   $0x6,(%esp)
08304a85 +0x281:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304a8a +0x286:  add    $0x5,%eax
08304a8d +0x289:  mov    %al,-0x21(%ebp)
08304a90 +0x28c:  jmp    08304aca <+0x2c6>
08304a92 +0x28e:  cmpl   $0x54,-0x10(%ebp)
08304a96 +0x292:  jg     08304aac <+0x2a8>
08304a98 +0x294:  movl   $0x4,(%esp)
08304a9f +0x29b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304aa4 +0x2a0:  add    $0xb,%eax
08304aa7 +0x2a3:  mov    %al,-0x21(%ebp)
08304aaa +0x2a6:  jmp    08304aca <+0x2c6>
08304aac +0x2a8:  cmpl   $0x5e,-0x10(%ebp)
08304ab0 +0x2ac:  jg     08304ac6 <+0x2c2>
08304ab2 +0x2ae:  movl   $0x3,(%esp)
08304ab9 +0x2b5:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08304abe +0x2ba:  add    $0xf,%eax
08304ac1 +0x2bd:  mov    %al,-0x21(%ebp)
08304ac4 +0x2c0:  jmp    08304aca <+0x2c6>
08304ac6 +0x2c2:  movb   $0x12,-0x21(%ebp)
08304aca +0x2c6:  mov    0x8(%ebp),%eax
08304acd +0x2c9:  movzwl -0x3a(%ebp),%edx
08304ad1 +0x2cd:  mov    %dx,0x2a8(%eax)
08304ad8 +0x2d4:  mov    -0x30(%ebp),%eax
08304adb +0x2d7:  mov    %eax,0x4(%esp)
08304adf +0x2db:  mov    0x18(%ebp),%eax
08304ae2 +0x2de:  mov    %eax,(%esp)
08304ae5 +0x2e1:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304aea +0x2e6:  mov    (%eax),%edx
08304aec +0x2e8:  mov    0x8(%ebp),%eax
08304aef +0x2eb:  mov    %edx,0x2a4(%eax)
08304af5 +0x2f1:  mov    0x8(%ebp),%eax
08304af8 +0x2f4:  movzbl -0x21(%ebp),%edx
08304afc +0x2f8:  mov    %dl,0x2aa(%eax)
08304b02 +0x2fe:  mov    -0x38(%ebp),%eax
08304b05 +0x301:  mov    %ax,-0x44(%ebp)
08304b09 +0x305:  movl   $0x0,-0xc(%ebp)
08304b10 +0x30c:  jmp    08304d25 <+0x521>
08304b15 +0x311:  mov    0x14(%ebp),%eax
08304b18 +0x314:  mov    (%eax),%eax
08304b1a +0x316:  mov    0xc(%ebp),%edx
08304b1d +0x319:  mov    %eax,(%edx)
08304b1f +0x31b:  lea    0x1(%eax),%edx
08304b22 +0x31e:  mov    0x14(%ebp),%eax
08304b25 +0x321:  mov    %edx,(%eax)
08304b27 +0x323:  mov    -0x30(%ebp),%eax
08304b2a +0x326:  mov    %eax,0x4(%esp)
08304b2e +0x32a:  mov    0x18(%ebp),%eax
08304b31 +0x32d:  mov    %eax,(%esp)
08304b34 +0x330:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304b39 +0x335:  mov    (%eax),%edx
08304b3b +0x337:  mov    0xc(%ebp),%eax
08304b3e +0x33a:  mov    %edx,0xc(%eax)
08304b41 +0x33d:  mov    0x8(%ebp),%eax
08304b44 +0x340:  mov    0x188(%eax),%eax
08304b4a +0x346:  movzbl 0x89f(%eax),%eax
08304b51 +0x34d:  cmp    $0x2,%al
08304b53 +0x34f:  jne    08304b5e <+0x35a>
08304b55 +0x351:  mov    0xc(%ebp),%eax
08304b58 +0x354:  movb   $0x46,0x10(%eax)
08304b5c +0x358:  jmp    08304b65 <+0x361>
08304b5e +0x35a:  mov    0xc(%ebp),%eax
08304b61 +0x35d:  movb   $0x3c,0x10(%eax)
08304b65 +0x361:  mov    0xc(%ebp),%eax
08304b68 +0x364:  movb   $0x0,0x8(%eax)
08304b6c +0x368:  mov    0xc(%ebp),%eax
08304b6f +0x36b:  movzbl -0x21(%ebp),%edx
08304b73 +0x36f:  mov    %dl,0x345(%eax)
08304b79 +0x375:  mov    0x10(%ebp),%eax
08304b7c +0x378:  mov    (%eax),%eax
08304b7e +0x37a:  mov    0xc(%ebp),%edx
08304b81 +0x37d:  mov    %eax,0x4(%edx)
08304b84 +0x380:  lea    0x1(%eax),%edx
08304b87 +0x383:  mov    0x10(%ebp),%eax
08304b8a +0x386:  mov    %edx,(%eax)
08304b8c +0x388:  mov    0xc(%ebp),%eax
08304b8f +0x38b:  movl   $0x64,0x2c(%eax)
08304b96 +0x392:  mov    0xc(%ebp),%eax
08304b99 +0x395:  movb   $0x0,0x11(%eax)
08304b9d +0x399:  mov    0xc(%ebp),%eax
08304ba0 +0x39c:  movb   $0x0,0x12(%eax)
08304ba4 +0x3a0:  mov    0xc(%ebp),%eax
08304ba7 +0x3a3:  movb   $0x0,0x13(%eax)
08304bab +0x3a7:  mov    0xc(%ebp),%eax
08304bae +0x3aa:  movb   $0x0,0x14(%eax)
08304bb2 +0x3ae:  mov    0xc(%ebp),%eax
08304bb5 +0x3b1:  movb   $0x0,0x34(%eax)
08304bb9 +0x3b5:  mov    0xc(%ebp),%eax
08304bbc +0x3b8:  movzwl -0x3a(%ebp),%edx
08304bc0 +0x3bc:  mov    %dx,0x33a(%eax)
08304bc7 +0x3c3:  lea    -0x39c(%ebp),%eax
08304bcd +0x3c9:  mov    %eax,(%esp)
08304bd0 +0x3cc:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
08304bd5 +0x3d1:  flds   0xc(%eax)
08304bd8 +0x3d4:  flds   &data#59dc03ba(.rodata)
08304bde +0x3da:  fmulp  %st,%st(1)
08304be0 +0x3dc:  fnstcw -0x3aa(%ebp)
08304be6 +0x3e2:  movzwl -0x3aa(%ebp),%eax
08304bed +0x3e9:  mov    $0xc,%ah
08304bef +0x3eb:  mov    %ax,-0x3ac(%ebp)
08304bf6 +0x3f2:  fldcw  -0x3ac(%ebp)
08304bfc +0x3f8:  fistps -0x3ae(%ebp)
08304c02 +0x3fe:  fldcw  -0x3aa(%ebp)
08304c08 +0x404:  movzwl -0x3ae(%ebp),%edx
08304c0f +0x40b:  mov    0xc(%ebp),%eax
08304c12 +0x40e:  mov    %dx,0x33c(%eax)
08304c19 +0x415:  mov    -0x30(%ebp),%eax
08304c1c +0x418:  mov    %eax,0x4(%esp)
08304c20 +0x41c:  mov    0x18(%ebp),%eax
08304c23 +0x41f:  mov    %eax,(%esp)
08304c26 +0x422:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304c2b +0x427:  mov    0x8(%eax),%eax
08304c2e +0x42a:  mov    %eax,%edx
08304c30 +0x42c:  mov    0xc(%ebp),%eax
08304c33 +0x42f:  mov    %dx,0x33e(%eax)
08304c3a +0x436:  mov    -0x30(%ebp),%eax
08304c3d +0x439:  mov    %eax,0x4(%esp)
08304c41 +0x43d:  mov    0x18(%ebp),%eax
08304c44 +0x440:  mov    %eax,(%esp)
08304c47 +0x443:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304c4c +0x448:  mov    0xc(%eax),%eax
08304c4f +0x44b:  mov    %eax,%edx
08304c51 +0x44d:  mov    0xc(%ebp),%eax
08304c54 +0x450:  mov    %dx,0x340(%eax)
08304c5b +0x457:  mov    -0x30(%ebp),%eax
08304c5e +0x45a:  mov    %eax,0x4(%esp)
08304c62 +0x45e:  mov    0x18(%ebp),%eax
08304c65 +0x461:  mov    %eax,(%esp)
08304c68 +0x464:  call   083118c6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34ab>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34ab
08304c6d +0x469:  mov    0x10(%eax),%eax
08304c70 +0x46c:  mov    %eax,%edx
08304c72 +0x46e:  mov    0xc(%ebp),%eax
08304c75 +0x471:  mov    %dx,0x342(%eax)
08304c7c +0x478:  mov    0xc(%ebp),%eax
08304c7f +0x47b:  movb   $0x0,0x344(%eax)
08304c86 +0x482:  lea    -0x39c(%ebp),%eax
08304c8c +0x488:  mov    %eax,(%esp)
08304c8f +0x48b:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
08304c94 +0x490:  mov    (%eax),%eax
08304c96 +0x492:  mov    %eax,%edx
08304c98 +0x494:  mov    0xc(%ebp),%eax
08304c9b +0x497:  mov    %dx,0x346(%eax)
08304ca2 +0x49e:  lea    -0x39c(%ebp),%eax
08304ca8 +0x4a4:  mov    %eax,(%esp)
08304cab +0x4a7:  call   083118bc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34a1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34a1
08304cb0 +0x4ac:  movzbl 0x18(%eax),%edx
08304cb4 +0x4b0:  mov    0xc(%ebp),%eax
08304cb7 +0x4b3:  mov    %dl,0x348(%eax)
08304cbd +0x4b9:  mov    0xc(%ebp),%eax
08304cc0 +0x4bc:  mov    %eax,0x4(%esp)
08304cc4 +0x4c0:  lea    -0x390(%ebp),%eax
08304cca +0x4c6:  mov    %eax,(%esp)
08304ccd +0x4c9:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
08304cd2 +0x4ce:  mov    0x8(%ebp),%eax
08304cd5 +0x4d1:  mov    %eax,(%esp)
08304cd8 +0x4d4:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08304cdd +0x4d9:  lea    -0x390(%ebp),%edx
08304ce3 +0x4df:  mov    %edx,0x4(%esp)
08304ce7 +0x4e3:  mov    %eax,(%esp)
08304cea +0x4e6:  call   08151612 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf47>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf47
08304cef +0x4eb:  jmp    08304d0f <+0x50b>
08304cf1 +0x4ed:  mov    %edx,%ebx
08304cf3 +0x4ef:  mov    %eax,%esi
08304cf5 +0x4f1:  lea    -0x390(%ebp),%eax
08304cfb +0x4f7:  mov    %eax,(%esp)
08304cfe +0x4fa:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08304d03 +0x4ff:  mov    %esi,%eax
08304d05 +0x501:  mov    %ebx,%edx
08304d07 +0x503:  mov    %eax,(%esp)
08304d0a +0x506:  call   08ae3750 <_Unwind_Resume>
08304d0f +0x50b:  lea    -0x390(%ebp),%eax
08304d15 +0x511:  mov    %eax,(%esp)
08304d18 +0x514:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08304d1d +0x519:  movb   $0x13,-0x21(%ebp)
08304d21 +0x51d:  addl   $0x1,-0xc(%ebp)
08304d25 +0x521:  mov    -0xc(%ebp),%eax
08304d28 +0x524:  cmp    -0x34(%ebp),%eax
08304d2b +0x527:  setl   %al
08304d2e +0x52a:  test   %al,%al
08304d30 +0x52c:  jne    08304b15 <+0x311>
08304d36 +0x532:  mov    0xc(%ebp),%eax
08304d39 +0x535:  mov    0xc(%eax),%ebx
08304d3c +0x538:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08304d41 +0x53d:  mov    %ebx,0x4(%esp)
08304d45 +0x541:  mov    %eax,(%esp)
08304d48 +0x544:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
08304d4d +0x549:  mov    %eax,-0x18(%ebp)
08304d50 +0x54c:  cmpl   $0x0,-0x18(%ebp)
08304d54 +0x550:  jne    08304d5d <+0x559>
08304d56 +0x552:  mov    $0x0,%eax
08304d5b +0x557:  jmp    08304dc8 <+0x5c4>
08304d5d +0x559:  lea    -0x39c(%ebp),%eax
08304d63 +0x55f:  mov    %eax,(%esp)
08304d66 +0x562:  call   083118e0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x34c5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x34c5
08304d6b +0x567:  addw   $0x1,-0x3a(%ebp)
08304d70 +0x56c:  lea    -0x398(%ebp),%eax
08304d76 +0x572:  mov    0x1c(%ebp),%edx
08304d79 +0x575:  mov    %edx,0x4(%esp)
08304d7d +0x579:  mov    %eax,(%esp)
08304d80 +0x57c:  call   0831186a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x344f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x344f
08304d85 +0x581:  sub    $0x4,%esp
08304d88 +0x584:  lea    -0x398(%ebp),%eax
08304d8e +0x58a:  mov    %eax,0x4(%esp)
08304d92 +0x58e:  lea    -0x39c(%ebp),%eax
08304d98 +0x594:  mov    %eax,(%esp)
08304d9b +0x597:  call   08311890 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3475>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3475
08304da0 +0x59c:  test   %al,%al
08304da2 +0x59e:  jne    08304925 <+0x121>
08304da8 +0x5a4:  movswl -0x3a(%ebp),%eax
08304dac +0x5a8:  lea    -0x1(%eax),%edx
08304daf +0x5ab:  mov    0x8(%ebp),%eax
08304db2 +0x5ae:  add    $0x2ac,%eax
08304db7 +0x5b3:  mov    %edx,0x4(%esp)
08304dbb +0x5b7:  mov    %eax,(%esp)
08304dbe +0x5ba:  call   0830eb96 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x77b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x77b
08304dc3 +0x5bf:  mov    $0x1,%eax
08304dc8 +0x5c4:  lea    -0x8(%ebp),%esp
08304dcb +0x5c7:  add    $0x0,%esp
08304dce +0x5ca:  pop    %ebx
08304dcf +0x5cb:  pop    %esi
08304dd0 +0x5cc:  pop    %ebp
08304dd1 +0x5cd:  ret
```

## 反编译 C

```c
// CBattle_Field::add_blood_monster @ 0x8304804

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBattle_Field::add_blood_monster(map_monster&, int&, int&, std::vector<STAssignBloodSystem,
   std::allocator<STAssignBloodSystem> >, std::vector<STAssignBloodPhaseTime,
   std::allocator<STAssignBloodPhaseTime> >) */

undefined4
CBattle_Field::add_blood_monster
          (CBattle_Field *param_1,map_monster *param_2,int *param_3,int *param_4,
          vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  MapInfo *pMVar7;
  __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
  local_3a0 [4];
  __normal_iterator local_39c [6];
  short local_396;
  map_monster local_394 [844];
  short local_48;
  undefined2 local_46;
  undefined4 local_44;
  short local_3e;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  short local_28;
  CBattle_Field local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::empty();
  if ((cVar1 == '\0') &&
     (cVar1 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::empty(),
     cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar3 = 0;
  }
  else {
    local_48 = -1;
    local_46 = 0;
    local_44 = 0;
    local_3e = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::size(param_5);
    local_28 = 0;
    if (local_2c == 0) {
      uVar3 = 0;
    }
    else {
      local_25 = (CBattle_Field)0x13;
      if (*(int *)(param_1 + 0x108) != 0) {
        iVar4 = CMap::get_map_type(*(CMap **)(param_1 + 0x108));
        if (iVar4 == 1) {
          local_28 = get_rand_int(4);
        }
        else {
          local_28 = get_rand_int(5);
        }
      }
      if (*(char *)(*(int *)(param_1 + 0x188) + 0x89f) == '\x02') {
        local_28 = -1;
      }
      std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::begin();
      while( true ) {
        std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::end();
        bVar2 = __gnu_cxx::operator!=(local_3a0,local_39c);
        if (!bVar2) break;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                        ::operator->(local_3a0);
        local_3c = *piVar5;
        iVar4 = __gnu_cxx::
                __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                ::operator->(local_3a0);
        local_34 = *(uint *)(iVar4 + 4);
        iVar4 = __gnu_cxx::
                __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                ::operator->(local_3a0);
        if (*(int *)(iVar4 + 4) == -1) {
          local_34 = get_rand_int(local_2c + -1);
          local_396 = (short)local_34;
          local_30 = local_34;
          std::vector<short,std::allocator<short>>::push_back
                    ((vector<short,std::allocator<short>> *)(param_1 + 600),&local_396);
        }
        local_24 = 0;
        local_20 = 0;
        iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                          (param_5,local_34);
        local_38 = *(int *)(iVar4 + 0x1c);
        local_18 = 0;
        while (iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::
                       operator[](param_5,local_34), local_18 < *(int *)(iVar4 + 0x24)) {
          iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                            (param_5,local_34);
          local_24 = *(int *)(iVar4 + 0x20) * local_18 + local_38;
          local_20 = local_20 + local_24;
          local_18 = local_18 + 1;
        }
        local_38 = local_20;
        std::vector<bool,std::allocator<bool>>::push_back
                  ((vector<bool,std::allocator<bool>> *)(param_1 + 0x264),false);
        if (local_48 != local_3c) {
          if (local_28 == local_3c) {
            local_14 = get_rand_int(100);
            if (local_14 < 0x28) {
              local_25 = (CBattle_Field)get_rand_int(5);
            }
            else if (local_14 < 0x46) {
              cVar1 = get_rand_int(6);
              local_25 = (CBattle_Field)(cVar1 + '\x05');
            }
            else if (local_14 < 0x55) {
              cVar1 = get_rand_int(4);
              local_25 = (CBattle_Field)(cVar1 + '\v');
            }
            else if (local_14 < 0x5f) {
              cVar1 = get_rand_int(3);
              local_25 = (CBattle_Field)(cVar1 + '\x0f');
            }
            else {
              local_25 = (CBattle_Field)0x12;
            }
            *(short *)(param_1 + 0x2a8) = local_3e;
            puVar6 = (undefined4 *)
                     std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::
                     operator[](param_5,local_34);
            *(undefined4 *)(param_1 + 0x2a4) = *puVar6;
            param_1[0x2aa] = local_25;
          }
          local_48 = (short)local_3c;
        }
        for (local_10 = 0; local_10 < local_38; local_10 = local_10 + 1) {
          iVar4 = *param_4;
          *(int *)param_2 = iVar4;
          *param_4 = iVar4 + 1;
          puVar6 = (undefined4 *)
                   std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                             (param_5,local_34);
          *(undefined4 *)(param_2 + 0xc) = *puVar6;
          if (*(char *)(*(int *)(param_1 + 0x188) + 0x89f) == '\x02') {
            param_2[0x10] = (map_monster)0x46;
          }
          else {
            param_2[0x10] = (map_monster)0x3c;
          }
          param_2[8] = (map_monster)0x0;
          *(CBattle_Field *)(param_2 + 0x345) = local_25;
          iVar4 = *param_3;
          *(int *)(param_2 + 4) = iVar4;
          *param_3 = iVar4 + 1;
          *(undefined4 *)(param_2 + 0x2c) = 100;
          param_2[0x11] = (map_monster)0x0;
          param_2[0x12] = (map_monster)0x0;
          param_2[0x13] = (map_monster)0x0;
          param_2[0x14] = (map_monster)0x0;
          param_2[0x34] = (map_monster)0x0;
          *(short *)(param_2 + 0x33a) = local_3e;
          iVar4 = __gnu_cxx::
                  __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                  ::operator->(local_3a0);
          *(short *)(param_2 + 0x33c) = (short)ROUND(_DAT_08c23d70 * *(float *)(iVar4 + 0xc));
          iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                            (param_5,local_34);
          *(short *)(param_2 + 0x33e) = (short)*(undefined4 *)(iVar4 + 8);
          iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                            (param_5,local_34);
          *(short *)(param_2 + 0x340) = (short)*(undefined4 *)(iVar4 + 0xc);
          iVar4 = std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator[]
                            (param_5,local_34);
          *(short *)(param_2 + 0x342) = (short)*(undefined4 *)(iVar4 + 0x10);
          param_2[0x344] = (map_monster)0x0;
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                   ::operator->(local_3a0);
          *(short *)(param_2 + 0x346) = (short)*puVar6;
          iVar4 = __gnu_cxx::
                  __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
                  ::operator->(local_3a0);
          param_2[0x348] = *(map_monster *)(iVar4 + 0x18);
          map_monster::map_monster(local_394,param_2);
                    /* try { // try from 08304cd8 to 08304cee has its CatchHandler @ 08304cf1 */
          pMVar7 = (MapInfo *)GetCurrentMapInfo(param_1);
          MapInfo::Add_Mob(pMVar7,local_394);
          map_monster::~map_monster(local_394);
          local_25 = (CBattle_Field)0x13;
        }
        iVar4 = G_CDataManager();
        local_1c = CDataManager::find_monster(iVar4);
        if (local_1c == 0) {
          return 0;
        }
        __gnu_cxx::
        __normal_iterator<STAssignBloodPhaseTime*,std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>>
        ::operator++(local_3a0);
        local_3e = local_3e + 1;
      }
      CBloodRound::setBloodLastSmallRoundOrder((CBloodRound *)(param_1 + 0x2ac),local_3e + -1);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
