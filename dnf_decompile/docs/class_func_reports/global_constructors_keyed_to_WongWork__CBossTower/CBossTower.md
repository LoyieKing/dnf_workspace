# CBossTower

`_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev`

`global constructors keyed to WongWork::CBossTower::CBossTower()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CBossTower` | `0x0814557d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814557d  _GLOBAL__I__ZN8WongWork10CBossTowerC2Ev
#           global constructors keyed to WongWork::CBossTower::CBossTower()
# range [0x0814557d, 0x08145e4f]
0814557d +0x000:  push   %ebp
0814557e +0x001:  mov    %esp,%ebp
08145580 +0x003:  sub    $0x18,%esp
08145583 +0x006:  movl   $0xffff,0x4(%esp)
0814558b +0x00e:  movl   $0x1,(%esp)
08145592 +0x015:  call   0814553d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08145597 +0x01a:  leave
08145598 +0x01b:  ret
08145599 +0x01c:  nop
0814559a +0x01d:  push   %ebp
0814559b +0x01e:  mov    %esp,%ebp
0814559d +0x020:  mov    0x8(%ebp),%eax
081455a0 +0x023:  mov    0xc(%eax),%eax
081455a3 +0x026:  pop    %ebp
081455a4 +0x027:  ret
081455a5 +0x028:  nop
081455a6 +0x029:  push   %ebp
081455a7 +0x02a:  mov    %esp,%ebp
081455a9 +0x02c:  sub    $0x18,%esp
081455ac +0x02f:  mov    0x8(%ebp),%eax
081455af +0x032:  add    $0x18,%eax
081455b2 +0x035:  mov    %eax,(%esp)
081455b5 +0x038:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081455ba +0x03d:  leave
081455bb +0x03e:  ret
081455bc +0x03f:  push   %ebp
081455bd +0x040:  mov    %esp,%ebp
081455bf +0x042:  mov    0x8(%ebp),%eax
081455c2 +0x045:  mov    0x654(%eax),%eax
081455c8 +0x04b:  pop    %ebp
081455c9 +0x04c:  ret
081455ca +0x04d:  push   %ebp
081455cb +0x04e:  mov    %esp,%ebp
081455cd +0x050:  mov    0x8(%ebp),%eax
081455d0 +0x053:  mov    0x6b8(%eax),%eax
081455d6 +0x059:  pop    %ebp
081455d7 +0x05a:  ret
081455d8 +0x05b:  push   %ebp
081455d9 +0x05c:  mov    %esp,%ebp
081455db +0x05e:  push   %ebx
081455dc +0x05f:  sub    $0x34,%esp
081455df +0x062:  mov    0x8(%ebp),%eax
081455e2 +0x065:  lea    0x5180(%eax),%ecx
081455e8 +0x06b:  lea    -0x20(%ebp),%eax
081455eb +0x06e:  lea    0xc(%ebp),%edx
081455ee +0x071:  mov    %edx,0x8(%esp)
081455f2 +0x075:  mov    %ecx,0x4(%esp)
081455f6 +0x079:  mov    %eax,(%esp)
081455f9 +0x07c:  call   081458b8 <+0x33b>
081455fe +0x081:  sub    $0x4,%esp
08145601 +0x084:  mov    0x8(%ebp),%eax
08145604 +0x087:  lea    0x5180(%eax),%edx
0814560a +0x08d:  lea    -0x1c(%ebp),%eax
0814560d +0x090:  mov    %edx,0x4(%esp)
08145611 +0x094:  mov    %eax,(%esp)
08145614 +0x097:  call   081458e4 <+0x367>
08145619 +0x09c:  sub    $0x4,%esp
0814561c +0x09f:  lea    -0x1c(%ebp),%eax
0814561f +0x0a2:  mov    %eax,0x4(%esp)
08145623 +0x0a6:  lea    -0x20(%ebp),%eax
08145626 +0x0a9:  mov    %eax,(%esp)
08145629 +0x0ac:  call   0814590a <+0x38d>
0814562e +0x0b1:  test   %al,%al
08145630 +0x0b3:  je     0814566f <+0xf2>
08145632 +0x0b5:  mov    0xc(%ebp),%ebx
08145635 +0x0b8:  movl   $0x5,0xc(%esp)
0814563d +0x0c0:  movl   $0xd44,0x8(%esp)
08145645 +0x0c8:  movl   $&_ZZN12CDataManager14GetTowerScriptEjE12__FUNCTION__,0x4(%esp)
0814564d +0x0d0:  lea    -0x18(%ebp),%eax
08145650 +0x0d3:  mov    %eax,(%esp)
08145653 +0x0d6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08145658 +0x0db:  mov    %ebx,0x8(%esp)
0814565c +0x0df:  movl   $"not finnd tower : %u",0x4(%esp)
08145664 +0x0e7:  lea    -0x18(%ebp),%eax
08145667 +0x0ea:  mov    %eax,(%esp)
0814566a +0x0ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814566f +0x0f2:  lea    -0x20(%ebp),%eax
08145672 +0x0f5:  mov    %eax,(%esp)
08145675 +0x0f8:  call   0814591e <+0x3a1>
0814567a +0x0fd:  add    $0x4,%eax
0814567d +0x100:  mov    -0x4(%ebp),%ebx
08145680 +0x103:  leave
08145681 +0x104:  ret
08145682 +0x105:  push   %ebp
08145683 +0x106:  mov    %esp,%ebp
08145685 +0x108:  mov    0xc(%ebp),%eax
08145688 +0x10b:  mov    0x8(%ebp),%edx
0814568b +0x10e:  movzbl 0xd(%edx,%eax,1),%eax
08145690 +0x113:  pop    %ebp
08145691 +0x114:  ret
08145692 +0x115:  push   %ebp
08145693 +0x116:  mov    %esp,%ebp
08145695 +0x118:  sub    $0x4,%esp
08145698 +0x11b:  mov    0x10(%ebp),%eax
0814569b +0x11e:  mov    %al,-0x4(%ebp)
0814569e +0x121:  mov    0xc(%ebp),%eax
081456a1 +0x124:  mov    0x8(%ebp),%edx
081456a4 +0x127:  movzbl -0x4(%ebp),%ecx
081456a8 +0x12b:  mov    %cl,0x11(%edx,%eax,1)
081456ac +0x12f:  leave
081456ad +0x130:  ret
081456ae +0x131:  push   %ebp
081456af +0x132:  mov    %esp,%ebp
081456b1 +0x134:  sub    $0x18,%esp
081456b4 +0x137:  mov    0x8(%ebp),%eax
081456b7 +0x13a:  mov    %eax,(%esp)
081456ba +0x13d:  call   08145954 <+0x3d7>
081456bf +0x142:  leave
081456c0 +0x143:  ret
081456c1 +0x144:  nop
081456c2 +0x145:  push   %ebp
081456c3 +0x146:  mov    %esp,%ebp
081456c5 +0x148:  push   %esi
081456c6 +0x149:  push   %ebx
081456c7 +0x14a:  sub    $0x10,%esp
081456ca +0x14d:  mov    0x8(%ebp),%eax
081456cd +0x150:  mov    %eax,(%esp)
081456d0 +0x153:  call   0814592c <+0x3af>
081456d5 +0x158:  mov    0x8(%ebp),%eax
081456d8 +0x15b:  mov    %eax,(%esp)
081456db +0x15e:  call   08145746 <+0x1c9>
081456e0 +0x163:  jmp    081456fd <+0x180>
081456e2 +0x165:  mov    %edx,%ebx
081456e4 +0x167:  mov    %eax,%esi
081456e6 +0x169:  mov    0x8(%ebp),%eax
081456e9 +0x16c:  mov    %eax,(%esp)
081456ec +0x16f:  call   081456ae <+0x131>
081456f1 +0x174:  mov    %esi,%eax
081456f3 +0x176:  mov    %ebx,%edx
081456f5 +0x178:  mov    %eax,(%esp)
081456f8 +0x17b:  call   08ae3750 <_Unwind_Resume>
081456fd +0x180:  add    $0x10,%esp
08145700 +0x183:  pop    %ebx
08145701 +0x184:  pop    %esi
08145702 +0x185:  pop    %ebp
08145703 +0x186:  ret
08145704 +0x187:  push   %ebp
08145705 +0x188:  mov    %esp,%ebp
08145707 +0x18a:  push   %esi
08145708 +0x18b:  push   %ebx
08145709 +0x18c:  sub    $0x10,%esp
0814570c +0x18f:  mov    0x8(%ebp),%eax
0814570f +0x192:  mov    %eax,(%esp)
08145712 +0x195:  call   08145746 <+0x1c9>
08145717 +0x19a:  jmp    08145734 <+0x1b7>
08145719 +0x19c:  mov    %edx,%ebx
0814571b +0x19e:  mov    %eax,%esi
0814571d +0x1a0:  mov    0x8(%ebp),%eax
08145720 +0x1a3:  mov    %eax,(%esp)
08145723 +0x1a6:  call   081456ae <+0x131>
08145728 +0x1ab:  mov    %esi,%eax
0814572a +0x1ad:  mov    %ebx,%edx
0814572c +0x1af:  mov    %eax,(%esp)
0814572f +0x1b2:  call   08ae3750 <_Unwind_Resume>
08145734 +0x1b7:  mov    0x8(%ebp),%eax
08145737 +0x1ba:  mov    %eax,(%esp)
0814573a +0x1bd:  call   081456ae <+0x131>
0814573f +0x1c2:  add    $0x10,%esp
08145742 +0x1c5:  pop    %ebx
08145743 +0x1c6:  pop    %esi
08145744 +0x1c7:  pop    %ebp
08145745 +0x1c8:  ret
08145746 +0x1c9:  push   %ebp
08145747 +0x1ca:  mov    %esp,%ebp
08145749 +0x1cc:  sub    $0x18,%esp
0814574c +0x1cf:  mov    0x8(%ebp),%eax
0814574f +0x1d2:  mov    %eax,(%esp)
08145752 +0x1d5:  call   081459a6 <+0x429>
08145757 +0x1da:  leave
08145758 +0x1db:  ret
08145759 +0x1dc:  nop
0814575a +0x1dd:  push   %ebp
0814575b +0x1de:  mov    %esp,%ebp
0814575d +0x1e0:  mov    0x8(%ebp),%eax
08145760 +0x1e3:  mov    (%eax),%eax
08145762 +0x1e5:  pop    %ebp
08145763 +0x1e6:  ret
08145764 +0x1e7:  push   %ebp
08145765 +0x1e8:  mov    %esp,%ebp
08145767 +0x1ea:  mov    0xc(%ebp),%edx
0814576a +0x1ed:  mov    0x8(%ebp),%ecx
0814576d +0x1f0:  mov    %edx,%eax
0814576f +0x1f2:  add    %eax,%eax
08145771 +0x1f4:  add    %edx,%eax
08145773 +0x1f6:  shl    $0x3,%eax
08145776 +0x1f9:  lea    (%ecx,%eax,1),%eax
08145779 +0x1fc:  add    $0x78,%eax
0814577c +0x1ff:  mov    (%eax),%eax
0814577e +0x201:  pop    %ebp
0814577f +0x202:  ret
08145780 +0x203:  push   %ebp
08145781 +0x204:  mov    %esp,%ebp
08145783 +0x206:  mov    0x8(%ebp),%eax
08145786 +0x209:  mov    0x74(%eax),%eax
08145789 +0x20c:  pop    %ebp
0814578a +0x20d:  ret
0814578b +0x20e:  nop
0814578c +0x20f:  push   %ebp
0814578d +0x210:  mov    %esp,%ebp
0814578f +0x212:  push   %ebx
08145790 +0x213:  sub    $0x34,%esp
08145793 +0x216:  mov    0xc(%ebp),%eax
08145796 +0x219:  mov    %al,-0x1c(%ebp)
08145799 +0x21c:  mov    0x8(%ebp),%eax
0814579c +0x21f:  movzbl -0x1c(%ebp),%edx
081457a0 +0x223:  mov    %dl,0x6b(%eax)
081457a3 +0x226:  cmpb   $0x2,-0x1c(%ebp)
081457a7 +0x22a:  jne    08145816 <+0x299>
081457a9 +0x22c:  mov    0x8(%ebp),%eax
081457ac +0x22f:  mov    0xcac(%eax),%eax
081457b2 +0x235:  test   %eax,%eax
081457b4 +0x237:  je     08145816 <+0x299>
081457b6 +0x239:  movl   $0x0,-0xc(%ebp)
081457bd +0x240:  jmp    0814580b <+0x28e>
081457bf +0x242:  mov    -0xc(%ebp),%eax
081457c2 +0x245:  mov    %eax,0x4(%esp)
081457c6 +0x249:  mov    0x8(%ebp),%eax
081457c9 +0x24c:  mov    %eax,(%esp)
081457cc +0x24f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
081457d1 +0x254:  xor    $0x1,%eax
081457d4 +0x257:  test   %al,%al
081457d6 +0x259:  jne    08145806 <+0x289>
081457d8 +0x25b:  mov    0x8(%ebp),%eax
081457db +0x25e:  mov    0xcac(%eax),%eax
081457e1 +0x264:  mov    %eax,(%esp)
081457e4 +0x267:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081457e9 +0x26c:  mov    %eax,%ebx
081457eb +0x26e:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
081457f0 +0x273:  movl   $0x0,0x8(%esp)
081457f8 +0x27b:  mov    %ebx,0x4(%esp)
081457fc +0x27f:  mov    %eax,(%esp)
081457ff +0x282:  call   0860e324 <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib>  ; CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)
08145804 +0x287:  jmp    08145807 <+0x28a>
08145806 +0x289:  nop
08145807 +0x28a:  addl   $0x1,-0xc(%ebp)
0814580b +0x28e:  cmpl   $0x3,-0xc(%ebp)
0814580f +0x292:  setle  %al
08145812 +0x295:  test   %al,%al
08145814 +0x297:  jne    081457bf <+0x242>
08145816 +0x299:  add    $0x34,%esp
08145819 +0x29c:  pop    %ebx
0814581a +0x29d:  pop    %ebp
0814581b +0x29e:  ret
0814581c +0x29f:  push   %ebp
0814581d +0x2a0:  mov    %esp,%ebp
0814581f +0x2a2:  mov    0x8(%ebp),%eax
08145822 +0x2a5:  movzbl 0x6b(%eax),%eax
08145826 +0x2a9:  pop    %ebp
08145827 +0x2aa:  ret
08145828 +0x2ab:  push   %ebp
08145829 +0x2ac:  mov    %esp,%ebp
0814582b +0x2ae:  sub    $0x4,%esp
0814582e +0x2b1:  mov    0xc(%ebp),%eax
08145831 +0x2b4:  mov    %al,-0x4(%ebp)
08145834 +0x2b7:  mov    0x8(%ebp),%eax
08145837 +0x2ba:  movzbl -0x4(%ebp),%edx
0814583b +0x2be:  mov    %dl,0x6c(%eax)
0814583e +0x2c1:  leave
0814583f +0x2c2:  ret
08145840 +0x2c3:  push   %ebp
08145841 +0x2c4:  mov    %esp,%ebp
08145843 +0x2c6:  sub    $0x18,%esp
08145846 +0x2c9:  mov    0x8(%ebp),%eax
08145849 +0x2cc:  mov    %eax,(%esp)
0814584c +0x2cf:  call   0814575a <+0x1dd>
08145851 +0x2d4:  test   %al,%al
08145853 +0x2d6:  setne  %al
08145856 +0x2d9:  test   %al,%al
08145858 +0x2db:  je     08145861 <+0x2e4>
0814585a +0x2dd:  mov    $0x1,%eax
0814585f +0x2e2:  jmp    08145866 <+0x2e9>
08145861 +0x2e4:  mov    $0x0,%eax
08145866 +0x2e9:  leave
08145867 +0x2ea:  ret
08145868 +0x2eb:  push   %ebp
08145869 +0x2ec:  mov    %esp,%ebp
0814586b +0x2ee:  sub    $0x18,%esp
0814586e +0x2f1:  mov    0xc(%ebp),%eax
08145871 +0x2f4:  mov    %eax,0x4(%esp)
08145875 +0x2f8:  mov    0x8(%ebp),%eax
08145878 +0x2fb:  mov    %eax,(%esp)
0814587b +0x2fe:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
08145880 +0x303:  leave
08145881 +0x304:  ret
08145882 +0x305:  push   %ebp
08145883 +0x306:  mov    %esp,%ebp
08145885 +0x308:  sub    $0x18,%esp
08145888 +0x30b:  mov    0xc(%ebp),%eax
0814588b +0x30e:  mov    %eax,0x4(%esp)
0814588f +0x312:  mov    0x8(%ebp),%eax
08145892 +0x315:  mov    %eax,(%esp)
08145895 +0x318:  call   085b4bde <_ZN6CParty15_getMemberNamesEPc>  ; CParty::_getMemberNames(char*)
0814589a +0x31d:  leave
0814589b +0x31e:  ret
0814589c +0x31f:  push   %ebp
0814589d +0x320:  mov    %esp,%ebp
0814589f +0x322:  mov    0x8(%ebp),%eax
081458a2 +0x325:  movzbl 0x711d8(%eax),%eax
081458a9 +0x32c:  pop    %ebp
081458aa +0x32d:  ret
081458ab +0x32e:  nop
081458ac +0x32f:  push   %ebp
081458ad +0x330:  mov    %esp,%ebp
081458af +0x332:  mov    0x8(%ebp),%eax
081458b2 +0x335:  mov    0x4(%eax),%eax
081458b5 +0x338:  pop    %ebp
081458b6 +0x339:  ret
081458b7 +0x33a:  nop
081458b8 +0x33b:  push   %ebp
081458b9 +0x33c:  mov    %esp,%ebp
081458bb +0x33e:  push   %ebx
081458bc +0x33f:  sub    $0x14,%esp
081458bf +0x342:  mov    0x8(%ebp),%ebx
081458c2 +0x345:  mov    0xc(%ebp),%eax
081458c5 +0x348:  mov    0x10(%ebp),%edx
081458c8 +0x34b:  mov    %edx,0x8(%esp)
081458cc +0x34f:  mov    %eax,0x4(%esp)
081458d0 +0x353:  mov    %ebx,(%esp)
081458d3 +0x356:  call   081459ce <+0x451>
081458d8 +0x35b:  sub    $0x4,%esp
081458db +0x35e:  mov    %ebx,%eax
081458dd +0x360:  mov    -0x4(%ebp),%ebx
081458e0 +0x363:  leave
081458e1 +0x364:  ret    $0x4
081458e4 +0x367:  push   %ebp
081458e5 +0x368:  mov    %esp,%ebp
081458e7 +0x36a:  push   %ebx
081458e8 +0x36b:  sub    $0x14,%esp
081458eb +0x36e:  mov    0x8(%ebp),%ebx
081458ee +0x371:  mov    0xc(%ebp),%eax
081458f1 +0x374:  mov    %eax,0x4(%esp)
081458f5 +0x378:  mov    %ebx,(%esp)
081458f8 +0x37b:  call   08145a8c <+0x50f>
081458fd +0x380:  sub    $0x4,%esp
08145900 +0x383:  mov    %ebx,%eax
08145902 +0x385:  mov    -0x4(%ebp),%ebx
08145905 +0x388:  leave
08145906 +0x389:  ret    $0x4
08145909 +0x38c:  nop
0814590a +0x38d:  push   %ebp
0814590b +0x38e:  mov    %esp,%ebp
0814590d +0x390:  mov    0x8(%ebp),%eax
08145910 +0x393:  mov    (%eax),%edx
08145912 +0x395:  mov    0xc(%ebp),%eax
08145915 +0x398:  mov    (%eax),%eax
08145917 +0x39a:  cmp    %eax,%edx
08145919 +0x39c:  sete   %al
0814591c +0x39f:  pop    %ebp
0814591d +0x3a0:  ret
0814591e +0x3a1:  push   %ebp
0814591f +0x3a2:  mov    %esp,%ebp
08145921 +0x3a4:  mov    0x8(%ebp),%eax
08145924 +0x3a7:  mov    (%eax),%eax
08145926 +0x3a9:  add    $0x10,%eax
08145929 +0x3ac:  pop    %ebp
0814592a +0x3ad:  ret
0814592b +0x3ae:  nop
0814592c +0x3af:  push   %ebp
0814592d +0x3b0:  mov    %esp,%ebp
0814592f +0x3b2:  sub    $0x18,%esp
08145932 +0x3b5:  mov    0x8(%ebp),%eax
08145935 +0x3b8:  mov    %eax,(%esp)
08145938 +0x3bb:  call   08145ab2 <+0x535>
0814593d +0x3c0:  leave
0814593e +0x3c1:  ret
0814593f +0x3c2:  nop
08145940 +0x3c3:  push   %ebp
08145941 +0x3c4:  mov    %esp,%ebp
08145943 +0x3c6:  sub    $0x18,%esp
08145946 +0x3c9:  mov    0x8(%ebp),%eax
08145949 +0x3cc:  mov    %eax,(%esp)
0814594c +0x3cf:  call   08145ac6 <+0x549>
08145951 +0x3d4:  leave
08145952 +0x3d5:  ret
08145953 +0x3d6:  nop
08145954 +0x3d7:  push   %ebp
08145955 +0x3d8:  mov    %esp,%ebp
08145957 +0x3da:  push   %esi
08145958 +0x3db:  push   %ebx
08145959 +0x3dc:  sub    $0x10,%esp
0814595c +0x3df:  mov    0x8(%ebp),%eax
0814595f +0x3e2:  mov    %eax,(%esp)
08145962 +0x3e5:  call   08145b30 <+0x5b3>
08145967 +0x3ea:  mov    %eax,0x4(%esp)
0814596b +0x3ee:  mov    0x8(%ebp),%eax
0814596e +0x3f1:  mov    %eax,(%esp)
08145971 +0x3f4:  call   08145ada <+0x55d>
08145976 +0x3f9:  jmp    08145993 <+0x416>
08145978 +0x3fb:  mov    %edx,%ebx
0814597a +0x3fd:  mov    %eax,%esi
0814597c +0x3ff:  mov    0x8(%ebp),%eax
0814597f +0x402:  mov    %eax,(%esp)
08145982 +0x405:  call   08145940 <+0x3c3>
08145987 +0x40a:  mov    %esi,%eax
08145989 +0x40c:  mov    %ebx,%edx
0814598b +0x40e:  mov    %eax,(%esp)
0814598e +0x411:  call   08ae3750 <_Unwind_Resume>
08145993 +0x416:  mov    0x8(%ebp),%eax
08145996 +0x419:  mov    %eax,(%esp)
08145999 +0x41c:  call   08145940 <+0x3c3>
0814599e +0x421:  add    $0x10,%esp
081459a1 +0x424:  pop    %ebx
081459a2 +0x425:  pop    %esi
081459a3 +0x426:  pop    %ebp
081459a4 +0x427:  ret
081459a5 +0x428:  nop
081459a6 +0x429:  push   %ebp
081459a7 +0x42a:  mov    %esp,%ebp
081459a9 +0x42c:  sub    $0x18,%esp
081459ac +0x42f:  mov    0x8(%ebp),%eax
081459af +0x432:  mov    %eax,(%esp)
081459b2 +0x435:  call   08145b3c <+0x5bf>
081459b7 +0x43a:  leave
081459b8 +0x43b:  ret
081459b9 +0x43c:  nop
081459ba +0x43d:  push   %ebp
081459bb +0x43e:  mov    %esp,%ebp
081459bd +0x440:  sub    $0x18,%esp
081459c0 +0x443:  mov    0x8(%ebp),%eax
081459c3 +0x446:  mov    %eax,(%esp)
081459c6 +0x449:  call   08145bb2 <+0x635>
081459cb +0x44e:  leave
081459cc +0x44f:  ret
081459cd +0x450:  nop
081459ce +0x451:  push   %ebp
081459cf +0x452:  mov    %esp,%ebp
081459d1 +0x454:  push   %esi
081459d2 +0x455:  push   %ebx
081459d3 +0x456:  sub    $0x30,%esp
081459d6 +0x459:  mov    0x8(%ebp),%ebx
081459d9 +0x45c:  mov    0xc(%ebp),%eax
081459dc +0x45f:  mov    %eax,(%esp)
081459df +0x462:  call   08145bce <+0x651>
081459e4 +0x467:  mov    %eax,%esi
081459e6 +0x469:  mov    0xc(%ebp),%eax
081459e9 +0x46c:  mov    %eax,(%esp)
081459ec +0x46f:  call   08145bc2 <+0x645>
081459f1 +0x474:  lea    -0x10(%ebp),%edx
081459f4 +0x477:  mov    0x10(%ebp),%ecx
081459f7 +0x47a:  mov    %ecx,0x10(%esp)
081459fb +0x47e:  mov    %esi,0xc(%esp)
081459ff +0x482:  mov    %eax,0x8(%esp)
08145a03 +0x486:  mov    0xc(%ebp),%eax
08145a06 +0x489:  mov    %eax,0x4(%esp)
08145a0a +0x48d:  mov    %edx,(%esp)
08145a0d +0x490:  call   08145bda <+0x65d>
08145a12 +0x495:  sub    $0x4,%esp
08145a15 +0x498:  lea    -0xc(%ebp),%eax
08145a18 +0x49b:  mov    0xc(%ebp),%edx
08145a1b +0x49e:  mov    %edx,0x4(%esp)
08145a1f +0x4a2:  mov    %eax,(%esp)
08145a22 +0x4a5:  call   08145a8c <+0x50f>
08145a27 +0x4aa:  sub    $0x4,%esp
08145a2a +0x4ad:  lea    -0xc(%ebp),%eax
08145a2d +0x4b0:  mov    %eax,0x4(%esp)
08145a31 +0x4b4:  lea    -0x10(%ebp),%eax
08145a34 +0x4b7:  mov    %eax,(%esp)
08145a37 +0x4ba:  call   0814590a <+0x38d>
08145a3c +0x4bf:  test   %al,%al
08145a3e +0x4c1:  jne    08145a65 <+0x4e8>
08145a40 +0x4c3:  mov    -0x10(%ebp),%eax
08145a43 +0x4c6:  mov    %eax,(%esp)
08145a46 +0x4c9:  call   08145c56 <+0x6d9>
08145a4b +0x4ce:  mov    0xc(%ebp),%edx
08145a4e +0x4d1:  mov    %eax,0x8(%esp)
08145a52 +0x4d5:  mov    0x10(%ebp),%eax
08145a55 +0x4d8:  mov    %eax,0x4(%esp)
08145a59 +0x4dc:  mov    %edx,(%esp)
08145a5c +0x4df:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08145a61 +0x4e4:  test   %al,%al
08145a63 +0x4e6:  je     08145a79 <+0x4fc>
08145a65 +0x4e8:  mov    0xc(%ebp),%eax
08145a68 +0x4eb:  mov    %eax,0x4(%esp)
08145a6c +0x4ef:  mov    %ebx,(%esp)
08145a6f +0x4f2:  call   08145a8c <+0x50f>
08145a74 +0x4f7:  sub    $0x4,%esp
08145a77 +0x4fa:  jmp    08145a7e <+0x501>
08145a79 +0x4fc:  mov    -0x10(%ebp),%eax
08145a7c +0x4ff:  mov    %eax,(%ebx)
08145a7e +0x501:  mov    %ebx,%eax
08145a80 +0x503:  lea    -0x8(%ebp),%esp
08145a83 +0x506:  add    $0x0,%esp
08145a86 +0x509:  pop    %ebx
08145a87 +0x50a:  pop    %esi
08145a88 +0x50b:  pop    %ebp
08145a89 +0x50c:  ret    $0x4
08145a8c +0x50f:  push   %ebp
08145a8d +0x510:  mov    %esp,%ebp
08145a8f +0x512:  push   %ebx
08145a90 +0x513:  sub    $0x14,%esp
08145a93 +0x516:  mov    0x8(%ebp),%ebx
08145a96 +0x519:  mov    0xc(%ebp),%eax
08145a99 +0x51c:  add    $0x4,%eax
08145a9c +0x51f:  mov    %eax,0x4(%esp)
08145aa0 +0x523:  mov    %ebx,(%esp)
08145aa3 +0x526:  call   08145c78 <+0x6fb>
08145aa8 +0x52b:  mov    %ebx,%eax
08145aaa +0x52d:  add    $0x14,%esp
08145aad +0x530:  pop    %ebx
08145aae +0x531:  pop    %ebp
08145aaf +0x532:  ret    $0x4
08145ab2 +0x535:  push   %ebp
08145ab3 +0x536:  mov    %esp,%ebp
08145ab5 +0x538:  sub    $0x18,%esp
08145ab8 +0x53b:  mov    0x8(%ebp),%eax
08145abb +0x53e:  mov    %eax,(%esp)
08145abe +0x541:  call   08145c86 <+0x709>
08145ac3 +0x546:  leave
08145ac4 +0x547:  ret
08145ac5 +0x548:  nop
08145ac6 +0x549:  push   %ebp
08145ac7 +0x54a:  mov    %esp,%ebp
08145ac9 +0x54c:  sub    $0x18,%esp
08145acc +0x54f:  mov    0x8(%ebp),%eax
08145acf +0x552:  mov    %eax,(%esp)
08145ad2 +0x555:  call   08145cd6 <+0x759>
08145ad7 +0x55a:  leave
08145ad8 +0x55b:  ret
08145ad9 +0x55c:  nop
08145ada +0x55d:  push   %ebp
08145adb +0x55e:  mov    %esp,%ebp
08145add +0x560:  sub    $0x28,%esp
08145ae0 +0x563:  jmp    08145b22 <+0x5a5>
08145ae2 +0x565:  mov    0xc(%ebp),%eax
08145ae5 +0x568:  mov    %eax,(%esp)
08145ae8 +0x56b:  call   08145cdb <+0x75e>
08145aed +0x570:  mov    %eax,0x4(%esp)
08145af1 +0x574:  mov    0x8(%ebp),%eax
08145af4 +0x577:  mov    %eax,(%esp)
08145af7 +0x57a:  call   08145ada <+0x55d>
08145afc +0x57f:  mov    0xc(%ebp),%eax
08145aff +0x582:  mov    %eax,(%esp)
08145b02 +0x585:  call   08145ce6 <+0x769>
08145b07 +0x58a:  mov    %eax,-0xc(%ebp)
08145b0a +0x58d:  mov    0xc(%ebp),%eax
08145b0d +0x590:  mov    %eax,0x4(%esp)
08145b11 +0x594:  mov    0x8(%ebp),%eax
08145b14 +0x597:  mov    %eax,(%esp)
08145b17 +0x59a:  call   08145cf2 <+0x775>
08145b1c +0x59f:  mov    -0xc(%ebp),%eax
08145b1f +0x5a2:  mov    %eax,0xc(%ebp)
08145b22 +0x5a5:  cmpl   $0x0,0xc(%ebp)
08145b26 +0x5a9:  setne  %al
08145b29 +0x5ac:  test   %al,%al
08145b2b +0x5ae:  jne    08145ae2 <+0x565>
08145b2d +0x5b0:  leave
08145b2e +0x5b1:  ret
08145b2f +0x5b2:  nop
08145b30 +0x5b3:  push   %ebp
08145b31 +0x5b4:  mov    %esp,%ebp
08145b33 +0x5b6:  mov    0x8(%ebp),%eax
08145b36 +0x5b9:  mov    0x8(%eax),%eax
08145b39 +0x5bc:  pop    %ebp
08145b3a +0x5bd:  ret
08145b3b +0x5be:  nop
08145b3c +0x5bf:  push   %ebp
08145b3d +0x5c0:  mov    %esp,%ebp
08145b3f +0x5c2:  push   %ebx
08145b40 +0x5c3:  sub    $0x14,%esp
08145b43 +0x5c6:  mov    0x8(%ebp),%eax
08145b46 +0x5c9:  mov    %eax,(%esp)
08145b49 +0x5cc:  call   08145b30 <+0x5b3>
08145b4e +0x5d1:  mov    %eax,0x4(%esp)
08145b52 +0x5d5:  mov    0x8(%ebp),%eax
08145b55 +0x5d8:  mov    %eax,(%esp)
08145b58 +0x5db:  call   08145ada <+0x55d>
08145b5d +0x5e0:  mov    0x8(%ebp),%eax
08145b60 +0x5e3:  mov    %eax,(%esp)
08145b63 +0x5e6:  call   08145d32 <+0x7b5>
08145b68 +0x5eb:  mov    %eax,%ebx
08145b6a +0x5ed:  mov    0x8(%ebp),%eax
08145b6d +0x5f0:  mov    %eax,(%esp)
08145b70 +0x5f3:  call   08145d26 <+0x7a9>
08145b75 +0x5f8:  mov    %eax,(%ebx)
08145b77 +0x5fa:  mov    0x8(%ebp),%eax
08145b7a +0x5fd:  mov    %eax,(%esp)
08145b7d +0x600:  call   08145d3e <+0x7c1>
08145b82 +0x605:  movl   $0x0,(%eax)
08145b88 +0x60b:  mov    0x8(%ebp),%eax
08145b8b +0x60e:  mov    %eax,(%esp)
08145b8e +0x611:  call   08145d4a <+0x7cd>
08145b93 +0x616:  mov    %eax,%ebx
08145b95 +0x618:  mov    0x8(%ebp),%eax
08145b98 +0x61b:  mov    %eax,(%esp)
08145b9b +0x61e:  call   08145d26 <+0x7a9>
08145ba0 +0x623:  mov    %eax,(%ebx)
08145ba2 +0x625:  mov    0x8(%ebp),%eax
08145ba5 +0x628:  movl   $0x0,0x14(%eax)
08145bac +0x62f:  add    $0x14,%esp
08145baf +0x632:  pop    %ebx
08145bb0 +0x633:  pop    %ebp
08145bb1 +0x634:  ret
08145bb2 +0x635:  push   %ebp
08145bb3 +0x636:  mov    %esp,%ebp
08145bb5 +0x638:  mov    0x8(%ebp),%eax
08145bb8 +0x63b:  mov    0x14(%eax),%eax
08145bbb +0x63e:  test   %eax,%eax
08145bbd +0x640:  sete   %al
08145bc0 +0x643:  pop    %ebp
08145bc1 +0x644:  ret
08145bc2 +0x645:  push   %ebp
08145bc3 +0x646:  mov    %esp,%ebp
08145bc5 +0x648:  mov    0x8(%ebp),%eax
08145bc8 +0x64b:  mov    0x8(%eax),%eax
08145bcb +0x64e:  pop    %ebp
08145bcc +0x64f:  ret
08145bcd +0x650:  nop
08145bce +0x651:  push   %ebp
08145bcf +0x652:  mov    %esp,%ebp
08145bd1 +0x654:  mov    0x8(%ebp),%eax
08145bd4 +0x657:  add    $0x4,%eax
08145bd7 +0x65a:  pop    %ebp
08145bd8 +0x65b:  ret
08145bd9 +0x65c:  nop
08145bda +0x65d:  push   %ebp
08145bdb +0x65e:  mov    %esp,%ebp
08145bdd +0x660:  push   %ebx
08145bde +0x661:  sub    $0x14,%esp
08145be1 +0x664:  mov    0x8(%ebp),%ebx
08145be4 +0x667:  jmp    08145c32 <+0x6b5>
08145be6 +0x669:  mov    0x10(%ebp),%eax
08145be9 +0x66c:  mov    %eax,(%esp)
08145bec +0x66f:  call   08145d55 <+0x7d8>
08145bf1 +0x674:  mov    0xc(%ebp),%edx
08145bf4 +0x677:  mov    0x18(%ebp),%ecx
08145bf7 +0x67a:  mov    %ecx,0x8(%esp)
08145bfb +0x67e:  mov    %eax,0x4(%esp)
08145bff +0x682:  mov    %edx,(%esp)
08145c02 +0x685:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08145c07 +0x68a:  xor    $0x1,%eax
08145c0a +0x68d:  test   %al,%al
08145c0c +0x68f:  je     08145c24 <+0x6a7>
08145c0e +0x691:  mov    0x10(%ebp),%eax
08145c11 +0x694:  mov    %eax,0x14(%ebp)
08145c14 +0x697:  mov    0x10(%ebp),%eax
08145c17 +0x69a:  mov    %eax,(%esp)
08145c1a +0x69d:  call   08145d77 <+0x7fa>
08145c1f +0x6a2:  mov    %eax,0x10(%ebp)
08145c22 +0x6a5:  jmp    08145c32 <+0x6b5>
08145c24 +0x6a7:  mov    0x10(%ebp),%eax
08145c27 +0x6aa:  mov    %eax,(%esp)
08145c2a +0x6ad:  call   08145d82 <+0x805>
08145c2f +0x6b2:  mov    %eax,0x10(%ebp)
08145c32 +0x6b5:  cmpl   $0x0,0x10(%ebp)
08145c36 +0x6b9:  setne  %al
08145c39 +0x6bc:  test   %al,%al
08145c3b +0x6be:  jne    08145be6 <+0x669>
08145c3d +0x6c0:  mov    0x14(%ebp),%eax
08145c40 +0x6c3:  mov    %eax,0x4(%esp)
08145c44 +0x6c7:  mov    %ebx,(%esp)
08145c47 +0x6ca:  call   08145c78 <+0x6fb>
08145c4c +0x6cf:  mov    %ebx,%eax
08145c4e +0x6d1:  add    $0x14,%esp
08145c51 +0x6d4:  pop    %ebx
08145c52 +0x6d5:  pop    %ebp
08145c53 +0x6d6:  ret    $0x4
08145c56 +0x6d9:  push   %ebp
08145c57 +0x6da:  mov    %esp,%ebp
08145c59 +0x6dc:  sub    $0x28,%esp
08145c5c +0x6df:  mov    0x8(%ebp),%eax
08145c5f +0x6e2:  mov    %eax,(%esp)
08145c62 +0x6e5:  call   08145d8d <+0x810>
08145c67 +0x6ea:  mov    %eax,0x4(%esp)
08145c6b +0x6ee:  lea    -0x9(%ebp),%eax
08145c6e +0x6f1:  mov    %eax,(%esp)
08145c71 +0x6f4:  call   08145d98 <+0x81b>
08145c76 +0x6f9:  leave
08145c77 +0x6fa:  ret
08145c78 +0x6fb:  push   %ebp
08145c79 +0x6fc:  mov    %esp,%ebp
08145c7b +0x6fe:  mov    0xc(%ebp),%edx
08145c7e +0x701:  mov    0x8(%ebp),%eax
08145c81 +0x704:  mov    %edx,(%eax)
08145c83 +0x706:  pop    %ebp
08145c84 +0x707:  ret
08145c85 +0x708:  nop
08145c86 +0x709:  push   %ebp
08145c87 +0x70a:  mov    %esp,%ebp
08145c89 +0x70c:  sub    $0x18,%esp
08145c8c +0x70f:  mov    0x8(%ebp),%eax
08145c8f +0x712:  mov    %eax,(%esp)
08145c92 +0x715:  call   08145da0 <+0x823>
08145c97 +0x71a:  mov    0x8(%ebp),%eax
08145c9a +0x71d:  movl   $0x0,0x4(%eax)
08145ca1 +0x724:  mov    0x8(%ebp),%eax
08145ca4 +0x727:  movl   $0x0,0x8(%eax)
08145cab +0x72e:  mov    0x8(%ebp),%eax
08145cae +0x731:  movl   $0x0,0xc(%eax)
08145cb5 +0x738:  mov    0x8(%ebp),%eax
08145cb8 +0x73b:  movl   $0x0,0x10(%eax)
08145cbf +0x742:  mov    0x8(%ebp),%eax
08145cc2 +0x745:  movl   $0x0,0x14(%eax)
08145cc9 +0x74c:  mov    0x8(%ebp),%eax
08145ccc +0x74f:  mov    %eax,(%esp)
08145ccf +0x752:  call   08145db4 <+0x837>
08145cd4 +0x757:  leave
08145cd5 +0x758:  ret
08145cd6 +0x759:  push   %ebp
08145cd7 +0x75a:  mov    %esp,%ebp
08145cd9 +0x75c:  pop    %ebp
08145cda +0x75d:  ret
08145cdb +0x75e:  push   %ebp
08145cdc +0x75f:  mov    %esp,%ebp
08145cde +0x761:  mov    0x8(%ebp),%eax
08145ce1 +0x764:  mov    0xc(%eax),%eax
08145ce4 +0x767:  pop    %ebp
08145ce5 +0x768:  ret
08145ce6 +0x769:  push   %ebp
08145ce7 +0x76a:  mov    %esp,%ebp
08145ce9 +0x76c:  mov    0x8(%ebp),%eax
08145cec +0x76f:  mov    0x8(%eax),%eax
08145cef +0x772:  pop    %ebp
08145cf0 +0x773:  ret
08145cf1 +0x774:  nop
08145cf2 +0x775:  push   %ebp
08145cf3 +0x776:  mov    %esp,%ebp
08145cf5 +0x778:  sub    $0x18,%esp
08145cf8 +0x77b:  mov    0x8(%ebp),%eax
08145cfb +0x77e:  mov    %eax,(%esp)
08145cfe +0x781:  call   08145de6 <+0x869>
08145d03 +0x786:  mov    0xc(%ebp),%edx
08145d06 +0x789:  mov    %edx,0x4(%esp)
08145d0a +0x78d:  mov    %eax,(%esp)
08145d0d +0x790:  call   08145df4 <+0x877>
08145d12 +0x795:  mov    0xc(%ebp),%eax
08145d15 +0x798:  mov    %eax,0x4(%esp)
08145d19 +0x79c:  mov    0x8(%ebp),%eax
08145d1c +0x79f:  mov    %eax,(%esp)
08145d1f +0x7a2:  call   08145e08 <+0x88b>
08145d24 +0x7a7:  leave
08145d25 +0x7a8:  ret
08145d26 +0x7a9:  push   %ebp
08145d27 +0x7aa:  mov    %esp,%ebp
08145d29 +0x7ac:  mov    0x8(%ebp),%eax
08145d2c +0x7af:  add    $0x4,%eax
08145d2f +0x7b2:  pop    %ebp
08145d30 +0x7b3:  ret
08145d31 +0x7b4:  nop
08145d32 +0x7b5:  push   %ebp
08145d33 +0x7b6:  mov    %esp,%ebp
08145d35 +0x7b8:  mov    0x8(%ebp),%eax
08145d38 +0x7bb:  add    $0xc,%eax
08145d3b +0x7be:  pop    %ebp
08145d3c +0x7bf:  ret
08145d3d +0x7c0:  nop
08145d3e +0x7c1:  push   %ebp
08145d3f +0x7c2:  mov    %esp,%ebp
08145d41 +0x7c4:  mov    0x8(%ebp),%eax
08145d44 +0x7c7:  add    $0x8,%eax
08145d47 +0x7ca:  pop    %ebp
08145d48 +0x7cb:  ret
08145d49 +0x7cc:  nop
08145d4a +0x7cd:  push   %ebp
08145d4b +0x7ce:  mov    %esp,%ebp
08145d4d +0x7d0:  mov    0x8(%ebp),%eax
08145d50 +0x7d3:  add    $0x10,%eax
08145d53 +0x7d6:  pop    %ebp
08145d54 +0x7d7:  ret
08145d55 +0x7d8:  push   %ebp
08145d56 +0x7d9:  mov    %esp,%ebp
08145d58 +0x7db:  sub    $0x28,%esp
08145d5b +0x7de:  mov    0x8(%ebp),%eax
08145d5e +0x7e1:  mov    %eax,(%esp)
08145d61 +0x7e4:  call   08145e2a <+0x8ad>
08145d66 +0x7e9:  mov    %eax,0x4(%esp)
08145d6a +0x7ed:  lea    -0x9(%ebp),%eax
08145d6d +0x7f0:  mov    %eax,(%esp)
08145d70 +0x7f3:  call   08145d98 <+0x81b>
08145d75 +0x7f8:  leave
08145d76 +0x7f9:  ret
08145d77 +0x7fa:  push   %ebp
08145d78 +0x7fb:  mov    %esp,%ebp
08145d7a +0x7fd:  mov    0x8(%ebp),%eax
08145d7d +0x800:  mov    0x8(%eax),%eax
08145d80 +0x803:  pop    %ebp
08145d81 +0x804:  ret
08145d82 +0x805:  push   %ebp
08145d83 +0x806:  mov    %esp,%ebp
08145d85 +0x808:  mov    0x8(%ebp),%eax
08145d88 +0x80b:  mov    0xc(%eax),%eax
08145d8b +0x80e:  pop    %ebp
08145d8c +0x80f:  ret
08145d8d +0x810:  push   %ebp
08145d8e +0x811:  mov    %esp,%ebp
08145d90 +0x813:  mov    0x8(%ebp),%eax
08145d93 +0x816:  add    $0x10,%eax
08145d96 +0x819:  pop    %ebp
08145d97 +0x81a:  ret
08145d98 +0x81b:  push   %ebp
08145d99 +0x81c:  mov    %esp,%ebp
08145d9b +0x81e:  mov    0xc(%ebp),%eax
08145d9e +0x821:  pop    %ebp
08145d9f +0x822:  ret
08145da0 +0x823:  push   %ebp
08145da1 +0x824:  mov    %esp,%ebp
08145da3 +0x826:  sub    $0x18,%esp
08145da6 +0x829:  mov    0x8(%ebp),%eax
08145da9 +0x82c:  mov    %eax,(%esp)
08145dac +0x82f:  call   08145e36 <+0x8b9>
08145db1 +0x834:  leave
08145db2 +0x835:  ret
08145db3 +0x836:  nop
08145db4 +0x837:  push   %ebp
08145db5 +0x838:  mov    %esp,%ebp
08145db7 +0x83a:  mov    0x8(%ebp),%eax
08145dba +0x83d:  movl   $0x0,0x4(%eax)
08145dc1 +0x844:  mov    0x8(%ebp),%eax
08145dc4 +0x847:  movl   $0x0,0x8(%eax)
08145dcb +0x84e:  mov    0x8(%ebp),%eax
08145dce +0x851:  lea    0x4(%eax),%edx
08145dd1 +0x854:  mov    0x8(%ebp),%eax
08145dd4 +0x857:  mov    %edx,0xc(%eax)
08145dd7 +0x85a:  mov    0x8(%ebp),%eax
08145dda +0x85d:  lea    0x4(%eax),%edx
08145ddd +0x860:  mov    0x8(%ebp),%eax
08145de0 +0x863:  mov    %edx,0x10(%eax)
08145de3 +0x866:  pop    %ebp
08145de4 +0x867:  ret
08145de5 +0x868:  nop
08145de6 +0x869:  push   %ebp
08145de7 +0x86a:  mov    %esp,%ebp
08145de9 +0x86c:  mov    0x8(%ebp),%eax
08145dec +0x86f:  pop    %ebp
08145ded +0x870:  ret
08145dee +0x871:  push   %ebp
08145def +0x872:  mov    %esp,%ebp
08145df1 +0x874:  pop    %ebp
08145df2 +0x875:  ret
08145df3 +0x876:  nop
08145df4 +0x877:  push   %ebp
08145df5 +0x878:  mov    %esp,%ebp
08145df7 +0x87a:  sub    $0x18,%esp
08145dfa +0x87d:  mov    0xc(%ebp),%eax
08145dfd +0x880:  mov    %eax,(%esp)
08145e00 +0x883:  call   08145dee <+0x871>
08145e05 +0x888:  leave
08145e06 +0x889:  ret
08145e07 +0x88a:  nop
08145e08 +0x88b:  push   %ebp
08145e09 +0x88c:  mov    %esp,%ebp
08145e0b +0x88e:  sub    $0x18,%esp
08145e0e +0x891:  mov    0x8(%ebp),%eax
08145e11 +0x894:  movl   $0x1,0x8(%esp)
08145e19 +0x89c:  mov    0xc(%ebp),%edx
08145e1c +0x89f:  mov    %edx,0x4(%esp)
08145e20 +0x8a3:  mov    %eax,(%esp)
08145e23 +0x8a6:  call   08145e3c <+0x8bf>
08145e28 +0x8ab:  leave
08145e29 +0x8ac:  ret
08145e2a +0x8ad:  push   %ebp
08145e2b +0x8ae:  mov    %esp,%ebp
08145e2d +0x8b0:  mov    0x8(%ebp),%eax
08145e30 +0x8b3:  add    $0x10,%eax
08145e33 +0x8b6:  pop    %ebp
08145e34 +0x8b7:  ret
08145e35 +0x8b8:  nop
08145e36 +0x8b9:  push   %ebp
08145e37 +0x8ba:  mov    %esp,%ebp
08145e39 +0x8bc:  pop    %ebp
08145e3a +0x8bd:  ret
08145e3b +0x8be:  nop
08145e3c +0x8bf:  push   %ebp
08145e3d +0x8c0:  mov    %esp,%ebp
08145e3f +0x8c2:  sub    $0x18,%esp
08145e42 +0x8c5:  mov    0xc(%ebp),%eax
08145e45 +0x8c8:  mov    %eax,(%esp)
08145e48 +0x8cb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08145e4d +0x8d0:  leave
08145e4e +0x8d1:  ret
08145e4f +0x8d2:  nop
```

## 反编译 C

```c
// <global>::global @ 0x814557d

/* WongWork::CBossTower::CBossTower() */

void WongWork::CBossTower::_GLOBAL__I_CBossTower(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
