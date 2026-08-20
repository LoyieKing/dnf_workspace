# setKillMonsterInfo

`_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster`

`Secu_DungeonAverageCheck::setKillMonsterInfo(MSG_MONSTER_DIE const*, map_monster*)`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x082794d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082794d6  _ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster
#           Secu_DungeonAverageCheck::setKillMonsterInfo(MSG_MONSTER_DIE const*, map_monster*)
# range [0x082794d6, 0x0827993b]
082794d6 +0x000:  push   %ebp
082794d7 +0x001:  mov    %esp,%ebp
082794d9 +0x003:  push   %ebx
082794da +0x004:  sub    $0x94,%esp
082794e0 +0x00a:  mov    0x8(%ebp),%eax
082794e3 +0x00d:  mov    (%eax),%eax
082794e5 +0x00f:  test   %eax,%eax
082794e7 +0x011:  je     08279936 <+0x460>
082794ed +0x017:  mov    0x10(%ebp),%eax
082794f0 +0x01a:  mov    %eax,(%esp)
082794f3 +0x01d:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
082794f8 +0x022:  xor    $0x1,%eax
082794fb +0x025:  test   %al,%al
082794fd +0x027:  je     08279511 <+0x3b>
082794ff +0x029:  mov    0x10(%ebp),%eax
08279502 +0x02c:  movzbl 0x8(%eax),%eax
08279506 +0x030:  test   %al,%al
08279508 +0x032:  jne    08279511 <+0x3b>
0827950a +0x034:  mov    $0x1,%eax
0827950f +0x039:  jmp    08279516 <+0x40>
08279511 +0x03b:  mov    $0x0,%eax
08279516 +0x040:  test   %al,%al
08279518 +0x042:  je     08279937 <+0x461>
0827951e +0x048:  mov    0x10(%ebp),%eax
08279521 +0x04b:  mov    0xc(%eax),%eax
08279524 +0x04e:  mov    %eax,%edx
08279526 +0x050:  lea    -0x4c(%ebp),%eax
08279529 +0x053:  mov    %edx,0x8(%esp)
0827952d +0x057:  mov    0x8(%ebp),%edx
08279530 +0x05a:  mov    %edx,0x4(%esp)
08279534 +0x05e:  mov    %eax,(%esp)
08279537 +0x061:  call   0827993c <_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj>  ; Secu_DungeonAverageCheck::findKillMonsterInfo(unsigned int)
0827953c +0x066:  sub    $0x4,%esp
0827953f +0x069:  mov    0x8(%ebp),%eax
08279542 +0x06c:  lea    0x4(%eax),%edx
08279545 +0x06f:  lea    -0x48(%ebp),%eax
08279548 +0x072:  mov    %edx,0x4(%esp)
0827954c +0x076:  mov    %eax,(%esp)
0827954f +0x079:  call   08279d88 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x75>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x75
08279554 +0x07e:  sub    $0x4,%esp
08279557 +0x081:  lea    -0x48(%ebp),%eax
0827955a +0x084:  mov    %eax,0x4(%esp)
0827955e +0x088:  lea    -0x4c(%ebp),%eax
08279561 +0x08b:  mov    %eax,(%esp)
08279564 +0x08e:  call   08279dae <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x9b>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x9b
08279569 +0x093:  test   %al,%al
0827956b +0x095:  je     082798e8 <+0x412>
08279571 +0x09b:  lea    -0x4c(%ebp),%eax
08279574 +0x09e:  mov    %eax,(%esp)
08279577 +0x0a1:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
0827957c +0x0a6:  mov    0x4(%eax),%eax
0827957f +0x0a9:  cmp    $0x4,%eax
08279582 +0x0ac:  seta   %al
08279585 +0x0af:  test   %al,%al
08279587 +0x0b1:  je     08279898 <+0x3c2>
0827958d +0x0b7:  mov    $0x0,%eax
08279592 +0x0bc:  mov    %eax,-0x2c(%ebp)
08279595 +0x0bf:  mov    $0x0,%eax
0827959a +0x0c4:  mov    %eax,-0x28(%ebp)
0827959d +0x0c7:  lea    -0x4c(%ebp),%eax
082795a0 +0x0ca:  mov    %eax,(%esp)
082795a3 +0x0cd:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082795a8 +0x0d2:  mov    0x8(%eax),%eax
082795ab +0x0d5:  mov    $0x0,%edx
082795b0 +0x0da:  mov    %eax,-0x68(%ebp)
082795b3 +0x0dd:  mov    %edx,-0x64(%ebp)
082795b6 +0x0e0:  fildll -0x68(%ebp)
082795b9 +0x0e3:  fstps  -0x74(%ebp)
082795bc +0x0e6:  lea    -0x4c(%ebp),%eax
082795bf +0x0e9:  mov    %eax,(%esp)
082795c2 +0x0ec:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082795c7 +0x0f1:  mov    0x4(%eax),%eax
082795ca +0x0f4:  mov    $0x0,%edx
082795cf +0x0f9:  mov    %eax,-0x68(%ebp)
082795d2 +0x0fc:  mov    %edx,-0x64(%ebp)
082795d5 +0x0ff:  fildll -0x68(%ebp)
082795d8 +0x102:  fdivrs -0x74(%ebp)
082795db +0x105:  fstps  -0x2c(%ebp)
082795de +0x108:  lea    -0x4c(%ebp),%eax
082795e1 +0x10b:  mov    %eax,(%esp)
082795e4 +0x10e:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082795e9 +0x113:  mov    0xc(%eax),%eax
082795ec +0x116:  mov    $0x0,%edx
082795f1 +0x11b:  mov    %eax,-0x68(%ebp)
082795f4 +0x11e:  mov    %edx,-0x64(%ebp)
082795f7 +0x121:  fildll -0x68(%ebp)
082795fa +0x124:  fstps  -0x70(%ebp)
082795fd +0x127:  lea    -0x4c(%ebp),%eax
08279600 +0x12a:  mov    %eax,(%esp)
08279603 +0x12d:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279608 +0x132:  mov    0x4(%eax),%eax
0827960b +0x135:  mov    $0x0,%edx
08279610 +0x13a:  mov    %eax,-0x68(%ebp)
08279613 +0x13d:  mov    %edx,-0x64(%ebp)
08279616 +0x140:  fildll -0x68(%ebp)
08279619 +0x143:  fdivrs -0x70(%ebp)
0827961c +0x146:  fstps  -0x28(%ebp)
0827961f +0x149:  mov    $0x0,%eax
08279624 +0x14e:  mov    %eax,-0x24(%ebp)
08279627 +0x151:  flds   -0x2c(%ebp)
0827962a +0x154:  fnstcw -0x5a(%ebp)
0827962d +0x157:  movzwl -0x5a(%ebp),%eax
08279631 +0x15b:  mov    $0xc,%ah
08279633 +0x15d:  mov    %ax,-0x5c(%ebp)
08279637 +0x161:  fldcw  -0x5c(%ebp)
0827963a +0x164:  fistpl -0x6c(%ebp)
0827963d +0x167:  fldcw  -0x5a(%ebp)
08279640 +0x16a:  mov    -0x6c(%ebp),%eax
08279643 +0x16d:  cmp    $0x9,%eax
08279646 +0x170:  jg     08279652 <+0x17c>
08279648 +0x172:  mov    $0x3f800000,%eax
0827964d +0x177:  mov    %eax,-0x24(%ebp)
08279650 +0x17a:  jmp    08279660 <+0x18a>
08279652 +0x17c:  flds   -0x2c(%ebp)
08279655 +0x17f:  flds   &data#b9f220f6(.rodata)
0827965b +0x185:  fmulp  %st,%st(1)
0827965d +0x187:  fstps  -0x24(%ebp)
08279660 +0x18a:  flds   -0x2c(%ebp)
08279663 +0x18d:  fadds  -0x24(%ebp)
08279666 +0x190:  flds   &data#90909a58(.rodata)
0827966c +0x196:  faddp  %st,%st(1)
0827966e +0x198:  fldcw  -0x5c(%ebp)
08279671 +0x19b:  fistpll -0x68(%ebp)
08279674 +0x19e:  fldcw  -0x5a(%ebp)
08279677 +0x1a1:  mov    -0x68(%ebp),%eax
0827967a +0x1a4:  mov    -0x64(%ebp),%edx
0827967d +0x1a7:  mov    %eax,-0x20(%ebp)
08279680 +0x1aa:  flds   -0x2c(%ebp)
08279683 +0x1ad:  fsubs  -0x24(%ebp)
08279686 +0x1b0:  fldcw  -0x5c(%ebp)
08279689 +0x1b3:  fistpll -0x68(%ebp)
0827968c +0x1b6:  fldcw  -0x5a(%ebp)
0827968f +0x1b9:  mov    -0x68(%ebp),%eax
08279692 +0x1bc:  mov    -0x64(%ebp),%edx
08279695 +0x1bf:  mov    %eax,-0x1c(%ebp)
08279698 +0x1c2:  flds   -0x28(%ebp)
0827969b +0x1c5:  flds   "蠱L="
082796a1 +0x1cb:  fmulp  %st,%st(1)
082796a3 +0x1cd:  fstps  -0x24(%ebp)
082796a6 +0x1d0:  flds   -0x28(%ebp)
082796a9 +0x1d3:  fadds  -0x24(%ebp)
082796ac +0x1d6:  flds   &data#90909a58(.rodata)
082796b2 +0x1dc:  faddp  %st,%st(1)
082796b4 +0x1de:  fldcw  -0x5c(%ebp)
082796b7 +0x1e1:  fistpll -0x68(%ebp)
082796ba +0x1e4:  fldcw  -0x5a(%ebp)
082796bd +0x1e7:  mov    -0x68(%ebp),%eax
082796c0 +0x1ea:  mov    -0x64(%ebp),%edx
082796c3 +0x1ed:  mov    %eax,-0x18(%ebp)
082796c6 +0x1f0:  flds   -0x28(%ebp)
082796c9 +0x1f3:  fsubs  -0x24(%ebp)
082796cc +0x1f6:  fldcw  -0x5c(%ebp)
082796cf +0x1f9:  fistpll -0x68(%ebp)
082796d2 +0x1fc:  fldcw  -0x5a(%ebp)
082796d5 +0x1ff:  mov    -0x68(%ebp),%eax
082796d8 +0x202:  mov    -0x64(%ebp),%edx
082796db +0x205:  mov    %eax,-0x14(%ebp)
082796de +0x208:  mov    0x8(%ebp),%eax
082796e1 +0x20b:  mov    (%eax),%eax
082796e3 +0x20d:  mov    0x1874(%eax),%eax
082796e9 +0x213:  test   %eax,%eax
082796eb +0x215:  jle    082797bb <+0x2e5>
082796f1 +0x21b:  mov    0xc(%ebp),%eax
082796f4 +0x21e:  mov    0xa1e(%eax),%eax
082796fa +0x224:  cmp    -0x1c(%ebp),%eax
082796fd +0x227:  jb     082797bb <+0x2e5>
08279703 +0x22d:  mov    0xc(%ebp),%eax
08279706 +0x230:  mov    0xa1e(%eax),%eax
0827970c +0x236:  cmp    -0x20(%ebp),%eax
0827970f +0x239:  ja     082797bb <+0x2e5>
08279715 +0x23f:  lea    -0x4c(%ebp),%eax
08279718 +0x242:  mov    %eax,(%esp)
0827971b +0x245:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
08279720 +0x24a:  mov    0x10(%eax),%edx
08279723 +0x24d:  add    $0x1,%edx
08279726 +0x250:  mov    %edx,0x10(%eax)
08279729 +0x253:  movl   $0x0,-0x10(%ebp)
08279730 +0x25a:  jmp    082797ac <+0x2d6>
08279732 +0x25c:  mov    0x8(%ebp),%eax
08279735 +0x25f:  mov    (%eax),%eax
08279737 +0x261:  mov    -0x10(%ebp),%edx
0827973a +0x264:  mov    %edx,0x4(%esp)
0827973e +0x268:  mov    %eax,(%esp)
08279741 +0x26b:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08279746 +0x270:  test   %al,%al
08279748 +0x272:  je     082797a8 <+0x2d2>
0827974a +0x274:  mov    0x8(%ebp),%eax
0827974d +0x277:  mov    (%eax),%eax
0827974f +0x279:  mov    -0x10(%ebp),%edx
08279752 +0x27c:  mov    %edx,0x4(%esp)
08279756 +0x280:  mov    %eax,(%esp)
08279759 +0x283:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0827975e +0x288:  mov    %eax,%ebx
08279760 +0x28a:  mov    0x8(%ebp),%eax
08279763 +0x28d:  mov    (%eax),%eax
08279765 +0x28f:  mov    -0x10(%ebp),%edx
08279768 +0x292:  mov    %edx,0x4(%esp)
0827976c +0x296:  mov    %eax,(%esp)
0827976f +0x299:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08279774 +0x29e:  mov    %eax,(%esp)
08279777 +0x2a1:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827977c +0x2a6:  movl   $0x0,0x14(%esp)
08279784 +0x2ae:  movl   $0x0,0x10(%esp)
0827978c +0x2b6:  movl   $0x1,0xc(%esp)
08279794 +0x2be:  movl   $0xe6,0x8(%esp)
0827979c +0x2c6:  mov    %ebx,0x4(%esp)
082797a0 +0x2ca:  mov    %eax,(%esp)
082797a3 +0x2cd:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082797a8 +0x2d2:  addl   $0x1,-0x10(%ebp)
082797ac +0x2d6:  cmpl   $0x3,-0x10(%ebp)
082797b0 +0x2da:  setle  %al
082797b3 +0x2dd:  test   %al,%al
082797b5 +0x2df:  jne    08279732 <+0x25c>
082797bb +0x2e5:  mov    0x8(%ebp),%eax
082797be +0x2e8:  mov    (%eax),%eax
082797c0 +0x2ea:  mov    0x1874(%eax),%eax
082797c6 +0x2f0:  test   %eax,%eax
082797c8 +0x2f2:  jle    08279898 <+0x3c2>
082797ce +0x2f8:  mov    0xc(%ebp),%eax
082797d1 +0x2fb:  mov    0xa1a(%eax),%eax
082797d7 +0x301:  cmp    -0x14(%ebp),%eax
082797da +0x304:  jb     08279898 <+0x3c2>
082797e0 +0x30a:  mov    0xc(%ebp),%eax
082797e3 +0x30d:  mov    0xa1a(%eax),%eax
082797e9 +0x313:  cmp    -0x18(%ebp),%eax
082797ec +0x316:  ja     08279898 <+0x3c2>
082797f2 +0x31c:  lea    -0x4c(%ebp),%eax
082797f5 +0x31f:  mov    %eax,(%esp)
082797f8 +0x322:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082797fd +0x327:  mov    0x14(%eax),%edx
08279800 +0x32a:  add    $0x1,%edx
08279803 +0x32d:  mov    %edx,0x14(%eax)
08279806 +0x330:  movl   $0x0,-0xc(%ebp)
0827980d +0x337:  jmp    08279889 <+0x3b3>
0827980f +0x339:  mov    0x8(%ebp),%eax
08279812 +0x33c:  mov    (%eax),%eax
08279814 +0x33e:  mov    -0xc(%ebp),%edx
08279817 +0x341:  mov    %edx,0x4(%esp)
0827981b +0x345:  mov    %eax,(%esp)
0827981e +0x348:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08279823 +0x34d:  test   %al,%al
08279825 +0x34f:  je     08279885 <+0x3af>
08279827 +0x351:  mov    0x8(%ebp),%eax
0827982a +0x354:  mov    (%eax),%eax
0827982c +0x356:  mov    -0xc(%ebp),%edx
0827982f +0x359:  mov    %edx,0x4(%esp)
08279833 +0x35d:  mov    %eax,(%esp)
08279836 +0x360:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0827983b +0x365:  mov    %eax,%ebx
0827983d +0x367:  mov    0x8(%ebp),%eax
08279840 +0x36a:  mov    (%eax),%eax
08279842 +0x36c:  mov    -0xc(%ebp),%edx
08279845 +0x36f:  mov    %edx,0x4(%esp)
08279849 +0x373:  mov    %eax,(%esp)
0827984c +0x376:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08279851 +0x37b:  mov    %eax,(%esp)
08279854 +0x37e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08279859 +0x383:  movl   $0x0,0x14(%esp)
08279861 +0x38b:  movl   $0x0,0x10(%esp)
08279869 +0x393:  movl   $0x1,0xc(%esp)
08279871 +0x39b:  movl   $0xe7,0x8(%esp)
08279879 +0x3a3:  mov    %ebx,0x4(%esp)
0827987d +0x3a7:  mov    %eax,(%esp)
08279880 +0x3aa:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08279885 +0x3af:  addl   $0x1,-0xc(%ebp)
08279889 +0x3b3:  cmpl   $0x3,-0xc(%ebp)
0827988d +0x3b7:  setle  %al
08279890 +0x3ba:  test   %al,%al
08279892 +0x3bc:  jne    0827980f <+0x339>
08279898 +0x3c2:  lea    -0x4c(%ebp),%eax
0827989b +0x3c5:  mov    %eax,(%esp)
0827989e +0x3c8:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082798a3 +0x3cd:  mov    0x4(%eax),%edx
082798a6 +0x3d0:  add    $0x1,%edx
082798a9 +0x3d3:  mov    %edx,0x4(%eax)
082798ac +0x3d6:  lea    -0x4c(%ebp),%eax
082798af +0x3d9:  mov    %eax,(%esp)
082798b2 +0x3dc:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082798b7 +0x3e1:  mov    0x8(%eax),%ecx
082798ba +0x3e4:  mov    0xc(%ebp),%edx
082798bd +0x3e7:  mov    0xa1e(%edx),%edx
082798c3 +0x3ed:  lea    (%ecx,%edx,1),%edx
082798c6 +0x3f0:  mov    %edx,0x8(%eax)
082798c9 +0x3f3:  lea    -0x4c(%ebp),%eax
082798cc +0x3f6:  mov    %eax,(%esp)
082798cf +0x3f9:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
082798d4 +0x3fe:  mov    0xc(%eax),%ecx
082798d7 +0x401:  mov    0xc(%ebp),%edx
082798da +0x404:  mov    0xa1a(%edx),%edx
082798e0 +0x40a:  lea    (%ecx,%edx,1),%edx
082798e3 +0x40d:  mov    %edx,0xc(%eax)
082798e6 +0x410:  jmp    08279937 <+0x461>
082798e8 +0x412:  mov    0xc(%ebp),%eax
082798eb +0x415:  mov    0xa1a(%eax),%ecx
082798f1 +0x41b:  mov    0xc(%ebp),%eax
082798f4 +0x41e:  mov    0xa1e(%eax),%edx
082798fa +0x424:  mov    0x10(%ebp),%eax
082798fd +0x427:  mov    0xc(%eax),%eax
08279900 +0x42a:  mov    %ecx,0x10(%esp)
08279904 +0x42e:  mov    %edx,0xc(%esp)
08279908 +0x432:  movl   $0x1,0x8(%esp)
08279910 +0x43a:  mov    %eax,0x4(%esp)
08279914 +0x43e:  lea    -0x44(%ebp),%eax
08279917 +0x441:  mov    %eax,(%esp)
0827991a +0x444:  call   08279d30 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x1d>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x1d
0827991f +0x449:  mov    0x8(%ebp),%eax
08279922 +0x44c:  lea    0x4(%eax),%edx
08279925 +0x44f:  lea    -0x44(%ebp),%eax
08279928 +0x452:  mov    %eax,0x4(%esp)
0827992c +0x456:  mov    %edx,(%esp)
0827992f +0x459:  call   08279de4 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xd1>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xd1
08279934 +0x45e:  jmp    08279937 <+0x461>
08279936 +0x460:  nop
08279937 +0x461:  mov    -0x4(%ebp),%ebx
0827993a +0x464:  leave
0827993b +0x465:  ret
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::setKillMonsterInfo @ 0x82794d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Secu_DungeonAverageCheck::setKillMonsterInfo(MSG_MONSTER_DIE const*, map_monster*) */

void __thiscall
Secu_DungeonAverageCheck::setKillMonsterInfo
          (Secu_DungeonAverageCheck *this,MSG_MONSTER_DIE *param_1,map_monster *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  CUser *pCVar8;
  CHackAnalyzer *pCVar9;
  ulonglong local_6c;
  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
  local_50 [4];
  __normal_iterator local_4c [4];
  SecKillMonsterInfo local_48 [24];
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    cVar4 = map_monster::isNamedMonster(param_2);
    if ((cVar4 == '\x01') || (param_2[8] != (map_monster)0x0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      findKillMonsterInfo((uint)local_50);
      std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
      bVar5 = __gnu_cxx::operator!=(local_50,local_4c);
      if (bVar5) {
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        if (4 < *(uint *)(iVar6 + 4)) {
          local_30 = 0.0;
          local_2c = 0.0;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 8);
          fVar1 = (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 4);
          local_30 = fVar1 / (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 0xc);
          fVar1 = (float)local_6c;
          iVar6 = __gnu_cxx::
                  __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  ::operator->(local_50);
          local_6c = (ulonglong)*(uint *)(iVar6 + 4);
          local_2c = fVar1 / (float)local_6c;
          if ((int)ROUND(local_30) < 10) {
            local_28 = 1.0;
          }
          else {
            local_28 = _DAT_08c02770 * local_30;
          }
          local_6c._0_4_ = (uint)(longlong)ROUND(_DAT_08c02774 + local_30 + local_28);
          uVar2 = (uint)local_6c;
          local_24 = (uint)local_6c;
          local_6c._0_4_ = (uint)(longlong)ROUND(local_30 - local_28);
          uVar3 = (uint)local_6c;
          local_20 = (uint)local_6c;
          local_28 = _DAT_08c02778 * local_2c;
          local_6c._0_4_ = (uint)(longlong)ROUND(_DAT_08c02774 + local_2c + local_28);
          local_1c = (uint)local_6c;
          local_6c._0_4_ = (uint)(longlong)ROUND(local_2c - local_28);
          local_18 = (uint)local_6c;
          if (((0 < *(int *)(*(int *)this + 0x1874)) && (uVar3 <= *(uint *)(param_1 + 0xa1e))) &&
             (*(uint *)(param_1 + 0xa1e) <= uVar2)) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->(local_50);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
              cVar4 = CParty::checkValidUser(*(CParty **)this,local_14);
              if (cVar4 != '\0') {
                uVar7 = CParty::get_user(*(CParty **)this,local_14);
                pCVar8 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar8);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,uVar7,0xe6,1,0,0);
              }
            }
          }
          if (((0 < *(int *)(*(int *)this + 0x1874)) && (local_18 <= *(uint *)(param_1 + 0xa1a))) &&
             (*(uint *)(param_1 + 0xa1a) <= local_1c)) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->(local_50);
            *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              cVar4 = CParty::checkValidUser(*(CParty **)this,local_10);
              if (cVar4 != '\0') {
                uVar7 = CParty::get_user(*(CParty **)this,local_10);
                pCVar8 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar8);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,uVar7,0xe7,1,0,0);
              }
            }
          }
        }
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + *(int *)(param_1 + 0xa1e);
        iVar6 = __gnu_cxx::
                __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                ::operator->(local_50);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(param_1 + 0xa1a);
      }
      else {
        SecKillMonsterInfo::SecKillMonsterInfo
                  (local_48,*(uint *)(param_2 + 0xc),1,*(uint *)(param_1 + 0xa1e),
                   *(uint *)(param_1 + 0xa1a));
        std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::push_back
                  ((vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>> *)(this + 4),
                   local_48);
      }
    }
  }
  return;
}
```
