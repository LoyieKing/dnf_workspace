# Clear

`_GLOBAL__I__ZN20TournamentRewardType5ClearEv`

`global constructors keyed to TournamentRewardType::Clear()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TournamentRewardType` | `0x08285529` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285529  _GLOBAL__I__ZN20TournamentRewardType5ClearEv
#           global constructors keyed to TournamentRewardType::Clear()
# range [0x08285529, 0x08285a2f]
08285529 +0x000:  push   %ebp
0828552a +0x001:  mov    %esp,%ebp
0828552c +0x003:  sub    $0x18,%esp
0828552f +0x006:  movl   $0xffff,0x4(%esp)
08285537 +0x00e:  movl   $0x1,(%esp)
0828553e +0x015:  call   082854e9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08285543 +0x01a:  leave
08285544 +0x01b:  ret
08285545 +0x01c:  nop
08285546 +0x01d:  push   %ebp
08285547 +0x01e:  mov    %esp,%ebp
08285549 +0x020:  sub    $0x18,%esp
0828554c +0x023:  mov    0x8(%ebp),%eax
0828554f +0x026:  mov    %eax,(%esp)
08285552 +0x029:  call   08284750 <_ZN20TournamentRewardType5ClearEv>  ; TournamentRewardType::Clear()
08285557 +0x02e:  leave
08285558 +0x02f:  ret
08285559 +0x030:  nop
0828555a +0x031:  push   %ebp
0828555b +0x032:  mov    %esp,%ebp
0828555d +0x034:  push   %ebx
0828555e +0x035:  sub    $0x14,%esp
08285561 +0x038:  mov    0x8(%ebp),%ebx
08285564 +0x03b:  mov    0xc(%ebp),%eax
08285567 +0x03e:  mov    0x10(%ebp),%edx
0828556a +0x041:  mov    %edx,0x8(%esp)
0828556e +0x045:  mov    %eax,0x4(%esp)
08285572 +0x049:  mov    %ebx,(%esp)
08285575 +0x04c:  call   0828565e <+0x135>
0828557a +0x051:  sub    $0x4,%esp
0828557d +0x054:  mov    %ebx,%eax
0828557f +0x056:  mov    -0x4(%ebp),%ebx
08285582 +0x059:  leave
08285583 +0x05a:  ret    $0x4
08285586 +0x05d:  push   %ebp
08285587 +0x05e:  mov    %esp,%ebp
08285589 +0x060:  push   %ebx
0828558a +0x061:  sub    $0x14,%esp
0828558d +0x064:  mov    0x8(%ebp),%ebx
08285590 +0x067:  mov    0xc(%ebp),%eax
08285593 +0x06a:  mov    %eax,0x4(%esp)
08285597 +0x06e:  mov    %ebx,(%esp)
0828559a +0x071:  call   0828571c <+0x1f3>
0828559f +0x076:  sub    $0x4,%esp
082855a2 +0x079:  mov    %ebx,%eax
082855a4 +0x07b:  mov    -0x4(%ebp),%ebx
082855a7 +0x07e:  leave
082855a8 +0x07f:  ret    $0x4
082855ab +0x082:  nop
082855ac +0x083:  push   %ebp
082855ad +0x084:  mov    %esp,%ebp
082855af +0x086:  mov    0x8(%ebp),%eax
082855b2 +0x089:  mov    (%eax),%edx
082855b4 +0x08b:  mov    0xc(%ebp),%eax
082855b7 +0x08e:  mov    (%eax),%eax
082855b9 +0x090:  cmp    %eax,%edx
082855bb +0x092:  sete   %al
082855be +0x095:  pop    %ebp
082855bf +0x096:  ret
082855c0 +0x097:  push   %ebp
082855c1 +0x098:  mov    %esp,%ebp
082855c3 +0x09a:  mov    0x8(%ebp),%eax
082855c6 +0x09d:  mov    (%eax),%eax
082855c8 +0x09f:  add    $0x10,%eax
082855cb +0x0a2:  pop    %ebp
082855cc +0x0a3:  ret
082855cd +0x0a4:  nop
082855ce +0x0a5:  push   %ebp
082855cf +0x0a6:  mov    %esp,%ebp
082855d1 +0x0a8:  mov    0x8(%ebp),%eax
082855d4 +0x0ab:  mov    0x4(%eax),%eax
082855d7 +0x0ae:  mov    %eax,%edx
082855d9 +0x0b0:  mov    0x8(%ebp),%eax
082855dc +0x0b3:  mov    (%eax),%eax
082855de +0x0b5:  mov    %edx,%ecx
082855e0 +0x0b7:  sub    %eax,%ecx
082855e2 +0x0b9:  mov    %ecx,%eax
082855e4 +0x0bb:  sar    $0x2,%eax
082855e7 +0x0be:  imul   $0xaaaaaaab,%eax,%eax
082855ed +0x0c4:  pop    %ebp
082855ee +0x0c5:  ret
082855ef +0x0c6:  nop
082855f0 +0x0c7:  push   %ebp
082855f1 +0x0c8:  mov    %esp,%ebp
082855f3 +0x0ca:  mov    0x8(%ebp),%eax
082855f6 +0x0cd:  mov    (%eax),%ecx
082855f8 +0x0cf:  mov    0xc(%ebp),%edx
082855fb +0x0d2:  mov    %edx,%eax
082855fd +0x0d4:  add    %eax,%eax
082855ff +0x0d6:  add    %edx,%eax
08285601 +0x0d8:  shl    $0x2,%eax
08285604 +0x0db:  lea    (%ecx,%eax,1),%eax
08285607 +0x0de:  pop    %ebp
08285608 +0x0df:  ret
08285609 +0x0e0:  push   %ebp
0828560a +0x0e1:  mov    %esp,%ebp
0828560c +0x0e3:  push   %esi
0828560d +0x0e4:  push   %ebx
0828560e +0x0e5:  sub    $0x30,%esp
08285611 +0x0e8:  mov    0x8(%ebp),%ebx
08285614 +0x0eb:  lea    -0x9(%ebp),%eax
08285617 +0x0ee:  lea    0xc(%ebp),%edx
0828561a +0x0f1:  mov    %edx,0x4(%esp)
0828561e +0x0f5:  mov    %eax,(%esp)
08285621 +0x0f8:  call   082387a5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xde4f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xde4f
08285626 +0x0fd:  sub    $0x4,%esp
08285629 +0x100:  mov    %esi,%eax
0828562b +0x102:  mov    %al,0x10(%esp)
0828562f +0x106:  mov    0x14(%ebp),%eax
08285632 +0x109:  mov    %eax,0xc(%esp)
08285636 +0x10d:  mov    0x10(%ebp),%eax
08285639 +0x110:  mov    %eax,0x8(%esp)
0828563d +0x114:  mov    0xc(%ebp),%eax
08285640 +0x117:  mov    %eax,0x4(%esp)
08285644 +0x11b:  mov    %ebx,(%esp)
08285647 +0x11e:  call   08285742 <+0x219>
0828564c +0x123:  sub    $0x4,%esp
0828564f +0x126:  mov    %ebx,%eax
08285651 +0x128:  lea    -0x8(%ebp),%esp
08285654 +0x12b:  add    $0x0,%esp
08285657 +0x12e:  pop    %ebx
08285658 +0x12f:  pop    %esi
08285659 +0x130:  pop    %ebp
0828565a +0x131:  ret    $0x4
0828565d +0x134:  nop
0828565e +0x135:  push   %ebp
0828565f +0x136:  mov    %esp,%ebp
08285661 +0x138:  push   %esi
08285662 +0x139:  push   %ebx
08285663 +0x13a:  sub    $0x30,%esp
08285666 +0x13d:  mov    0x8(%ebp),%ebx
08285669 +0x140:  mov    0xc(%ebp),%eax
0828566c +0x143:  mov    %eax,(%esp)
0828566f +0x146:  call   08285920 <+0x3f7>
08285674 +0x14b:  mov    %eax,%esi
08285676 +0x14d:  mov    0xc(%ebp),%eax
08285679 +0x150:  mov    %eax,(%esp)
0828567c +0x153:  call   08285914 <+0x3eb>
08285681 +0x158:  lea    -0x10(%ebp),%edx
08285684 +0x15b:  mov    0x10(%ebp),%ecx
08285687 +0x15e:  mov    %ecx,0x10(%esp)
0828568b +0x162:  mov    %esi,0xc(%esp)
0828568f +0x166:  mov    %eax,0x8(%esp)
08285693 +0x16a:  mov    0xc(%ebp),%eax
08285696 +0x16d:  mov    %eax,0x4(%esp)
0828569a +0x171:  mov    %edx,(%esp)
0828569d +0x174:  call   0828592c <+0x403>
082856a2 +0x179:  sub    $0x4,%esp
082856a5 +0x17c:  lea    -0xc(%ebp),%eax
082856a8 +0x17f:  mov    0xc(%ebp),%edx
082856ab +0x182:  mov    %edx,0x4(%esp)
082856af +0x186:  mov    %eax,(%esp)
082856b2 +0x189:  call   0828571c <+0x1f3>
082856b7 +0x18e:  sub    $0x4,%esp
082856ba +0x191:  lea    -0xc(%ebp),%eax
082856bd +0x194:  mov    %eax,0x4(%esp)
082856c1 +0x198:  lea    -0x10(%ebp),%eax
082856c4 +0x19b:  mov    %eax,(%esp)
082856c7 +0x19e:  call   082855ac <+0x83>
082856cc +0x1a3:  test   %al,%al
082856ce +0x1a5:  jne    082856f5 <+0x1cc>
082856d0 +0x1a7:  mov    -0x10(%ebp),%eax
082856d3 +0x1aa:  mov    %eax,(%esp)
082856d6 +0x1ad:  call   082859a8 <+0x47f>
082856db +0x1b2:  mov    0xc(%ebp),%edx
082856de +0x1b5:  mov    %eax,0x8(%esp)
082856e2 +0x1b9:  mov    0x10(%ebp),%eax
082856e5 +0x1bc:  mov    %eax,0x4(%esp)
082856e9 +0x1c0:  mov    %edx,(%esp)
082856ec +0x1c3:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082856f1 +0x1c8:  test   %al,%al
082856f3 +0x1ca:  je     08285709 <+0x1e0>
082856f5 +0x1cc:  mov    0xc(%ebp),%eax
082856f8 +0x1cf:  mov    %eax,0x4(%esp)
082856fc +0x1d3:  mov    %ebx,(%esp)
082856ff +0x1d6:  call   0828571c <+0x1f3>
08285704 +0x1db:  sub    $0x4,%esp
08285707 +0x1de:  jmp    0828570e <+0x1e5>
08285709 +0x1e0:  mov    -0x10(%ebp),%eax
0828570c +0x1e3:  mov    %eax,(%ebx)
0828570e +0x1e5:  mov    %ebx,%eax
08285710 +0x1e7:  lea    -0x8(%ebp),%esp
08285713 +0x1ea:  add    $0x0,%esp
08285716 +0x1ed:  pop    %ebx
08285717 +0x1ee:  pop    %esi
08285718 +0x1ef:  pop    %ebp
08285719 +0x1f0:  ret    $0x4
0828571c +0x1f3:  push   %ebp
0828571d +0x1f4:  mov    %esp,%ebp
0828571f +0x1f6:  push   %ebx
08285720 +0x1f7:  sub    $0x14,%esp
08285723 +0x1fa:  mov    0x8(%ebp),%ebx
08285726 +0x1fd:  mov    0xc(%ebp),%eax
08285729 +0x200:  add    $0x4,%eax
0828572c +0x203:  mov    %eax,0x4(%esp)
08285730 +0x207:  mov    %ebx,(%esp)
08285733 +0x20a:  call   082859ca <+0x4a1>
08285738 +0x20f:  mov    %ebx,%eax
0828573a +0x211:  add    $0x14,%esp
0828573d +0x214:  pop    %ebx
0828573e +0x215:  pop    %ebp
0828573f +0x216:  ret    $0x4
08285742 +0x219:  push   %ebp
08285743 +0x21a:  mov    %esp,%ebp
08285745 +0x21c:  push   %ebx
08285746 +0x21d:  sub    $0x24,%esp
08285749 +0x220:  mov    0x8(%ebp),%ebx
0828574c +0x223:  lea    0xc(%ebp),%eax
0828574f +0x226:  mov    %eax,0x4(%esp)
08285753 +0x22a:  lea    0x10(%ebp),%eax
08285756 +0x22d:  mov    %eax,(%esp)
08285759 +0x230:  call   0823bcc3 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6e41>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6e41
0828575e +0x235:  sar    $0x2,%eax
08285761 +0x238:  mov    %eax,-0xc(%ebp)
08285764 +0x23b:  jmp    0828583d <+0x314>
08285769 +0x240:  lea    0xc(%ebp),%eax
0828576c +0x243:  mov    %eax,(%esp)
0828576f +0x246:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08285774 +0x24b:  mov    (%eax),%edx
08285776 +0x24d:  mov    0x14(%ebp),%eax
08285779 +0x250:  movzbl (%eax),%eax
0828577c +0x253:  movsbl %al,%eax
0828577f +0x256:  cmp    %eax,%edx
08285781 +0x258:  sete   %al
08285784 +0x25b:  test   %al,%al
08285786 +0x25d:  je     08285792 <+0x269>
08285788 +0x25f:  mov    0xc(%ebp),%eax
0828578b +0x262:  mov    %eax,(%ebx)
0828578d +0x264:  jmp    0828590a <+0x3e1>
08285792 +0x269:  lea    0xc(%ebp),%eax
08285795 +0x26c:  mov    %eax,(%esp)
08285798 +0x26f:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0828579d +0x274:  lea    0xc(%ebp),%eax
082857a0 +0x277:  mov    %eax,(%esp)
082857a3 +0x27a:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
082857a8 +0x27f:  mov    (%eax),%edx
082857aa +0x281:  mov    0x14(%ebp),%eax
082857ad +0x284:  movzbl (%eax),%eax
082857b0 +0x287:  movsbl %al,%eax
082857b3 +0x28a:  cmp    %eax,%edx
082857b5 +0x28c:  sete   %al
082857b8 +0x28f:  test   %al,%al
082857ba +0x291:  je     082857c6 <+0x29d>
082857bc +0x293:  mov    0xc(%ebp),%eax
082857bf +0x296:  mov    %eax,(%ebx)
082857c1 +0x298:  jmp    0828590a <+0x3e1>
082857c6 +0x29d:  lea    0xc(%ebp),%eax
082857c9 +0x2a0:  mov    %eax,(%esp)
082857cc +0x2a3:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
082857d1 +0x2a8:  lea    0xc(%ebp),%eax
082857d4 +0x2ab:  mov    %eax,(%esp)
082857d7 +0x2ae:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
082857dc +0x2b3:  mov    (%eax),%edx
082857de +0x2b5:  mov    0x14(%ebp),%eax
082857e1 +0x2b8:  movzbl (%eax),%eax
082857e4 +0x2bb:  movsbl %al,%eax
082857e7 +0x2be:  cmp    %eax,%edx
082857e9 +0x2c0:  sete   %al
082857ec +0x2c3:  test   %al,%al
082857ee +0x2c5:  je     082857fa <+0x2d1>
082857f0 +0x2c7:  mov    0xc(%ebp),%eax
082857f3 +0x2ca:  mov    %eax,(%ebx)
082857f5 +0x2cc:  jmp    0828590a <+0x3e1>
082857fa +0x2d1:  lea    0xc(%ebp),%eax
082857fd +0x2d4:  mov    %eax,(%esp)
08285800 +0x2d7:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08285805 +0x2dc:  lea    0xc(%ebp),%eax
08285808 +0x2df:  mov    %eax,(%esp)
0828580b +0x2e2:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08285810 +0x2e7:  mov    (%eax),%edx
08285812 +0x2e9:  mov    0x14(%ebp),%eax
08285815 +0x2ec:  movzbl (%eax),%eax
08285818 +0x2ef:  movsbl %al,%eax
0828581b +0x2f2:  cmp    %eax,%edx
0828581d +0x2f4:  sete   %al
08285820 +0x2f7:  test   %al,%al
08285822 +0x2f9:  je     0828582e <+0x305>
08285824 +0x2fb:  mov    0xc(%ebp),%eax
08285827 +0x2fe:  mov    %eax,(%ebx)
08285829 +0x300:  jmp    0828590a <+0x3e1>
0828582e +0x305:  lea    0xc(%ebp),%eax
08285831 +0x308:  mov    %eax,(%esp)
08285834 +0x30b:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08285839 +0x310:  subl   $0x1,-0xc(%ebp)
0828583d +0x314:  cmpl   $0x0,-0xc(%ebp)
08285841 +0x318:  setg   %al
08285844 +0x31b:  test   %al,%al
08285846 +0x31d:  jne    08285769 <+0x240>
0828584c +0x323:  lea    0xc(%ebp),%eax
0828584f +0x326:  mov    %eax,0x4(%esp)
08285853 +0x32a:  lea    0x10(%ebp),%eax
08285856 +0x32d:  mov    %eax,(%esp)
08285859 +0x330:  call   0823bcc3 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6e41>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6e41
0828585e +0x335:  cmp    $0x2,%eax
08285861 +0x338:  je     082858a3 <+0x37a>
08285863 +0x33a:  cmp    $0x3,%eax
08285866 +0x33d:  je     08285872 <+0x349>
08285868 +0x33f:  cmp    $0x1,%eax
0828586b +0x342:  je     082858d4 <+0x3ab>
0828586d +0x344:  jmp    08285905 <+0x3dc>
08285872 +0x349:  lea    0xc(%ebp),%eax
08285875 +0x34c:  mov    %eax,(%esp)
08285878 +0x34f:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0828587d +0x354:  mov    (%eax),%edx
0828587f +0x356:  mov    0x14(%ebp),%eax
08285882 +0x359:  movzbl (%eax),%eax
08285885 +0x35c:  movsbl %al,%eax
08285888 +0x35f:  cmp    %eax,%edx
0828588a +0x361:  sete   %al
0828588d +0x364:  test   %al,%al
0828588f +0x366:  je     08285898 <+0x36f>
08285891 +0x368:  mov    0xc(%ebp),%eax
08285894 +0x36b:  mov    %eax,(%ebx)
08285896 +0x36d:  jmp    0828590a <+0x3e1>
08285898 +0x36f:  lea    0xc(%ebp),%eax
0828589b +0x372:  mov    %eax,(%esp)
0828589e +0x375:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
082858a3 +0x37a:  lea    0xc(%ebp),%eax
082858a6 +0x37d:  mov    %eax,(%esp)
082858a9 +0x380:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
082858ae +0x385:  mov    (%eax),%edx
082858b0 +0x387:  mov    0x14(%ebp),%eax
082858b3 +0x38a:  movzbl (%eax),%eax
082858b6 +0x38d:  movsbl %al,%eax
082858b9 +0x390:  cmp    %eax,%edx
082858bb +0x392:  sete   %al
082858be +0x395:  test   %al,%al
082858c0 +0x397:  je     082858c9 <+0x3a0>
082858c2 +0x399:  mov    0xc(%ebp),%eax
082858c5 +0x39c:  mov    %eax,(%ebx)
082858c7 +0x39e:  jmp    0828590a <+0x3e1>
082858c9 +0x3a0:  lea    0xc(%ebp),%eax
082858cc +0x3a3:  mov    %eax,(%esp)
082858cf +0x3a6:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
082858d4 +0x3ab:  lea    0xc(%ebp),%eax
082858d7 +0x3ae:  mov    %eax,(%esp)
082858da +0x3b1:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
082858df +0x3b6:  mov    (%eax),%edx
082858e1 +0x3b8:  mov    0x14(%ebp),%eax
082858e4 +0x3bb:  movzbl (%eax),%eax
082858e7 +0x3be:  movsbl %al,%eax
082858ea +0x3c1:  cmp    %eax,%edx
082858ec +0x3c3:  sete   %al
082858ef +0x3c6:  test   %al,%al
082858f1 +0x3c8:  je     082858fa <+0x3d1>
082858f3 +0x3ca:  mov    0xc(%ebp),%eax
082858f6 +0x3cd:  mov    %eax,(%ebx)
082858f8 +0x3cf:  jmp    0828590a <+0x3e1>
082858fa +0x3d1:  lea    0xc(%ebp),%eax
082858fd +0x3d4:  mov    %eax,(%esp)
08285900 +0x3d7:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08285905 +0x3dc:  mov    0x10(%ebp),%eax
08285908 +0x3df:  mov    %eax,(%ebx)
0828590a +0x3e1:  mov    %ebx,%eax
0828590c +0x3e3:  add    $0x24,%esp
0828590f +0x3e6:  pop    %ebx
08285910 +0x3e7:  pop    %ebp
08285911 +0x3e8:  ret    $0x4
08285914 +0x3eb:  push   %ebp
08285915 +0x3ec:  mov    %esp,%ebp
08285917 +0x3ee:  mov    0x8(%ebp),%eax
0828591a +0x3f1:  mov    0x8(%eax),%eax
0828591d +0x3f4:  pop    %ebp
0828591e +0x3f5:  ret
0828591f +0x3f6:  nop
08285920 +0x3f7:  push   %ebp
08285921 +0x3f8:  mov    %esp,%ebp
08285923 +0x3fa:  mov    0x8(%ebp),%eax
08285926 +0x3fd:  add    $0x4,%eax
08285929 +0x400:  pop    %ebp
0828592a +0x401:  ret
0828592b +0x402:  nop
0828592c +0x403:  push   %ebp
0828592d +0x404:  mov    %esp,%ebp
0828592f +0x406:  push   %ebx
08285930 +0x407:  sub    $0x14,%esp
08285933 +0x40a:  mov    0x8(%ebp),%ebx
08285936 +0x40d:  jmp    08285984 <+0x45b>
08285938 +0x40f:  mov    0x10(%ebp),%eax
0828593b +0x412:  mov    %eax,(%esp)
0828593e +0x415:  call   082859d7 <+0x4ae>
08285943 +0x41a:  mov    0xc(%ebp),%edx
08285946 +0x41d:  mov    0x18(%ebp),%ecx
08285949 +0x420:  mov    %ecx,0x8(%esp)
0828594d +0x424:  mov    %eax,0x4(%esp)
08285951 +0x428:  mov    %edx,(%esp)
08285954 +0x42b:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08285959 +0x430:  xor    $0x1,%eax
0828595c +0x433:  test   %al,%al
0828595e +0x435:  je     08285976 <+0x44d>
08285960 +0x437:  mov    0x10(%ebp),%eax
08285963 +0x43a:  mov    %eax,0x14(%ebp)
08285966 +0x43d:  mov    0x10(%ebp),%eax
08285969 +0x440:  mov    %eax,(%esp)
0828596c +0x443:  call   082859f9 <+0x4d0>
08285971 +0x448:  mov    %eax,0x10(%ebp)
08285974 +0x44b:  jmp    08285984 <+0x45b>
08285976 +0x44d:  mov    0x10(%ebp),%eax
08285979 +0x450:  mov    %eax,(%esp)
0828597c +0x453:  call   08285a04 <+0x4db>
08285981 +0x458:  mov    %eax,0x10(%ebp)
08285984 +0x45b:  cmpl   $0x0,0x10(%ebp)
08285988 +0x45f:  setne  %al
0828598b +0x462:  test   %al,%al
0828598d +0x464:  jne    08285938 <+0x40f>
0828598f +0x466:  mov    0x14(%ebp),%eax
08285992 +0x469:  mov    %eax,0x4(%esp)
08285996 +0x46d:  mov    %ebx,(%esp)
08285999 +0x470:  call   082859ca <+0x4a1>
0828599e +0x475:  mov    %ebx,%eax
082859a0 +0x477:  add    $0x14,%esp
082859a3 +0x47a:  pop    %ebx
082859a4 +0x47b:  pop    %ebp
082859a5 +0x47c:  ret    $0x4
082859a8 +0x47f:  push   %ebp
082859a9 +0x480:  mov    %esp,%ebp
082859ab +0x482:  sub    $0x28,%esp
082859ae +0x485:  mov    0x8(%ebp),%eax
082859b1 +0x488:  mov    %eax,(%esp)
082859b4 +0x48b:  call   08285a0f <+0x4e6>
082859b9 +0x490:  mov    %eax,0x4(%esp)
082859bd +0x494:  lea    -0x9(%ebp),%eax
082859c0 +0x497:  mov    %eax,(%esp)
082859c3 +0x49a:  call   08285a1a <+0x4f1>
082859c8 +0x49f:  leave
082859c9 +0x4a0:  ret
082859ca +0x4a1:  push   %ebp
082859cb +0x4a2:  mov    %esp,%ebp
082859cd +0x4a4:  mov    0xc(%ebp),%edx
082859d0 +0x4a7:  mov    0x8(%ebp),%eax
082859d3 +0x4aa:  mov    %edx,(%eax)
082859d5 +0x4ac:  pop    %ebp
082859d6 +0x4ad:  ret
082859d7 +0x4ae:  push   %ebp
082859d8 +0x4af:  mov    %esp,%ebp
082859da +0x4b1:  sub    $0x28,%esp
082859dd +0x4b4:  mov    0x8(%ebp),%eax
082859e0 +0x4b7:  mov    %eax,(%esp)
082859e3 +0x4ba:  call   08285a22 <+0x4f9>
082859e8 +0x4bf:  mov    %eax,0x4(%esp)
082859ec +0x4c3:  lea    -0x9(%ebp),%eax
082859ef +0x4c6:  mov    %eax,(%esp)
082859f2 +0x4c9:  call   08285a1a <+0x4f1>
082859f7 +0x4ce:  leave
082859f8 +0x4cf:  ret
082859f9 +0x4d0:  push   %ebp
082859fa +0x4d1:  mov    %esp,%ebp
082859fc +0x4d3:  mov    0x8(%ebp),%eax
082859ff +0x4d6:  mov    0x8(%eax),%eax
08285a02 +0x4d9:  pop    %ebp
08285a03 +0x4da:  ret
08285a04 +0x4db:  push   %ebp
08285a05 +0x4dc:  mov    %esp,%ebp
08285a07 +0x4de:  mov    0x8(%ebp),%eax
08285a0a +0x4e1:  mov    0xc(%eax),%eax
08285a0d +0x4e4:  pop    %ebp
08285a0e +0x4e5:  ret
08285a0f +0x4e6:  push   %ebp
08285a10 +0x4e7:  mov    %esp,%ebp
08285a12 +0x4e9:  mov    0x8(%ebp),%eax
08285a15 +0x4ec:  add    $0x10,%eax
08285a18 +0x4ef:  pop    %ebp
08285a19 +0x4f0:  ret
08285a1a +0x4f1:  push   %ebp
08285a1b +0x4f2:  mov    %esp,%ebp
08285a1d +0x4f4:  mov    0xc(%ebp),%eax
08285a20 +0x4f7:  pop    %ebp
08285a21 +0x4f8:  ret
08285a22 +0x4f9:  push   %ebp
08285a23 +0x4fa:  mov    %esp,%ebp
08285a25 +0x4fc:  mov    0x8(%ebp),%eax
08285a28 +0x4ff:  add    $0x10,%eax
08285a2b +0x502:  pop    %ebp
08285a2c +0x503:  ret
08285a2d +0x504:  nop
08285a2e +0x505:  nop
08285a2f +0x506:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8285529

/* TournamentRewardType::Clear() */

void TournamentRewardType::_GLOBAL__I_Clear(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
