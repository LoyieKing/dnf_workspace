# init

`_GLOBAL__I__ZN8WongWork13CSecurityCard4initEv`

`global constructors keyed to WongWork::CSecurityCard::init()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CSecurityCard` | `0x085fe4d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe4d6  _GLOBAL__I__ZN8WongWork13CSecurityCard4initEv
#           global constructors keyed to WongWork::CSecurityCard::init()
# range [0x085fe4d6, 0x085fe72f]
085fe4d6 +0x000:  push   %ebp
085fe4d7 +0x001:  mov    %esp,%ebp
085fe4d9 +0x003:  sub    $0x18,%esp
085fe4dc +0x006:  movl   $0xffff,0x4(%esp)
085fe4e4 +0x00e:  movl   $0x1,(%esp)
085fe4eb +0x015:  call   085fe496 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085fe4f0 +0x01a:  leave
085fe4f1 +0x01b:  ret
085fe4f2 +0x01c:  push   %ebp
085fe4f3 +0x01d:  mov    %esp,%ebp
085fe4f5 +0x01f:  push   %esi
085fe4f6 +0x020:  push   %ebx
085fe4f7 +0x021:  sub    $0x20,%esp
085fe4fa +0x024:  mov    0xc(%ebp),%eax
085fe4fd +0x027:  mov    %eax,(%esp)
085fe500 +0x02a:  call   085fe62a <+0x154>
085fe505 +0x02f:  mov    %eax,0x4(%esp)
085fe509 +0x033:  lea    -0x11(%ebp),%eax
085fe50c +0x036:  mov    %eax,(%esp)
085fe50f +0x039:  call   085fe632 <+0x15c>
085fe514 +0x03e:  mov    0x8(%ebp),%eax
085fe517 +0x041:  lea    -0x11(%ebp),%edx
085fe51a +0x044:  mov    %edx,0x4(%esp)
085fe51e +0x048:  mov    %eax,(%esp)
085fe521 +0x04b:  call   085fe646 <+0x170>
085fe526 +0x050:  jmp    085fe543 <+0x6d>
085fe528 +0x052:  mov    %edx,%ebx
085fe52a +0x054:  mov    %eax,%esi
085fe52c +0x056:  lea    -0x11(%ebp),%eax
085fe52f +0x059:  mov    %eax,(%esp)
085fe532 +0x05c:  call   080e4fc6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x2ec>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x2ec
085fe537 +0x061:  mov    %esi,%eax
085fe539 +0x063:  mov    %ebx,%edx
085fe53b +0x065:  mov    %eax,(%esp)
085fe53e +0x068:  call   08ae3750 <_Unwind_Resume>
085fe543 +0x06d:  lea    -0x11(%ebp),%eax
085fe546 +0x070:  mov    %eax,(%esp)
085fe549 +0x073:  call   080e4fc6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x2ec>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x2ec
085fe54e +0x078:  lea    -0x10(%ebp),%eax
085fe551 +0x07b:  mov    0xc(%ebp),%edx
085fe554 +0x07e:  mov    %edx,0x4(%esp)
085fe558 +0x082:  mov    %eax,(%esp)
085fe55b +0x085:  call   084a6798 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x780>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x780
085fe560 +0x08a:  sub    $0x4,%esp
085fe563 +0x08d:  lea    -0xc(%ebp),%eax
085fe566 +0x090:  mov    0xc(%ebp),%edx
085fe569 +0x093:  mov    %edx,0x4(%esp)
085fe56d +0x097:  mov    %eax,(%esp)
085fe570 +0x09a:  call   084a6772 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x75a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x75a
085fe575 +0x09f:  sub    $0x4,%esp
085fe578 +0x0a2:  mov    %bl,0xc(%esp)
085fe57c +0x0a6:  mov    -0x10(%ebp),%eax
085fe57f +0x0a9:  mov    %eax,0x8(%esp)
085fe583 +0x0ad:  mov    -0xc(%ebp),%eax
085fe586 +0x0b0:  mov    %eax,0x4(%esp)
085fe58a +0x0b4:  mov    0x8(%ebp),%eax
085fe58d +0x0b7:  mov    %eax,(%esp)
085fe590 +0x0ba:  call   085fe688 <+0x1b2>
085fe595 +0x0bf:  jmp    085fe5b2 <+0xdc>
085fe597 +0x0c1:  mov    %edx,%ebx
085fe599 +0x0c3:  mov    %eax,%esi
085fe59b +0x0c5:  mov    0x8(%ebp),%eax
085fe59e +0x0c8:  mov    %eax,(%esp)
085fe5a1 +0x0cb:  call   084a6542 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x52a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x52a
085fe5a6 +0x0d0:  mov    %esi,%eax
085fe5a8 +0x0d2:  mov    %ebx,%edx
085fe5aa +0x0d4:  mov    %eax,(%esp)
085fe5ad +0x0d7:  call   08ae3750 <_Unwind_Resume>
085fe5b2 +0x0dc:  lea    -0x8(%ebp),%esp
085fe5b5 +0x0df:  add    $0x0,%esp
085fe5b8 +0x0e2:  pop    %ebx
085fe5b9 +0x0e3:  pop    %esi
085fe5ba +0x0e4:  pop    %ebp
085fe5bb +0x0e5:  ret
085fe5bc +0x0e6:  push   %ebp
085fe5bd +0x0e7:  mov    %esp,%ebp
085fe5bf +0x0e9:  mov    0x8(%ebp),%eax
085fe5c2 +0x0ec:  mov    (%eax),%edx
085fe5c4 +0x0ee:  mov    0xc(%ebp),%eax
085fe5c7 +0x0f1:  mov    (%eax),%eax
085fe5c9 +0x0f3:  cmp    %eax,%edx
085fe5cb +0x0f5:  setne  %al
085fe5ce +0x0f8:  pop    %ebp
085fe5cf +0x0f9:  ret
085fe5d0 +0x0fa:  push   %ebp
085fe5d1 +0x0fb:  mov    %esp,%ebp
085fe5d3 +0x0fd:  mov    0x8(%ebp),%eax
085fe5d6 +0x100:  mov    (%eax),%eax
085fe5d8 +0x102:  mov    (%eax),%edx
085fe5da +0x104:  mov    0x8(%ebp),%eax
085fe5dd +0x107:  mov    %edx,(%eax)
085fe5df +0x109:  mov    0x8(%ebp),%eax
085fe5e2 +0x10c:  pop    %ebp
085fe5e3 +0x10d:  ret
085fe5e4 +0x10e:  push   %ebp
085fe5e5 +0x10f:  mov    %esp,%ebp
085fe5e7 +0x111:  mov    0x8(%ebp),%eax
085fe5ea +0x114:  mov    (%eax),%eax
085fe5ec +0x116:  add    $0x8,%eax
085fe5ef +0x119:  pop    %ebp
085fe5f0 +0x11a:  ret
085fe5f1 +0x11b:  nop
085fe5f2 +0x11c:  push   %ebp
085fe5f3 +0x11d:  mov    %esp,%ebp
085fe5f5 +0x11f:  push   %ebx
085fe5f6 +0x120:  sub    $0x14,%esp
085fe5f9 +0x123:  mov    0x8(%ebp),%ebx
085fe5fc +0x126:  mov    0x10(%ebp),%eax
085fe5ff +0x129:  mov    (%eax),%eax
085fe601 +0x12b:  mov    %eax,0x4(%esp)
085fe605 +0x12f:  mov    %ebx,(%esp)
085fe608 +0x132:  call   084a7914 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x18fc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x18fc
085fe60d +0x137:  mov    0x10(%ebp),%eax
085fe610 +0x13a:  mov    %eax,0x4(%esp)
085fe614 +0x13e:  mov    0xc(%ebp),%eax
085fe617 +0x141:  mov    %eax,(%esp)
085fe61a +0x144:  call   084a7142 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x112a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x112a
085fe61f +0x149:  mov    %ebx,%eax
085fe621 +0x14b:  add    $0x14,%esp
085fe624 +0x14e:  pop    %ebx
085fe625 +0x14f:  pop    %ebp
085fe626 +0x150:  ret    $0x4
085fe629 +0x153:  nop
085fe62a +0x154:  push   %ebp
085fe62b +0x155:  mov    %esp,%ebp
085fe62d +0x157:  mov    0x8(%ebp),%eax
085fe630 +0x15a:  pop    %ebp
085fe631 +0x15b:  ret
085fe632 +0x15c:  push   %ebp
085fe633 +0x15d:  mov    %esp,%ebp
085fe635 +0x15f:  sub    $0x18,%esp
085fe638 +0x162:  mov    0x8(%ebp),%eax
085fe63b +0x165:  mov    %eax,(%esp)
085fe63e +0x168:  call   080e52ae <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x5d4>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x5d4
085fe643 +0x16d:  leave
085fe644 +0x16e:  ret
085fe645 +0x16f:  nop
085fe646 +0x170:  push   %ebp
085fe647 +0x171:  mov    %esp,%ebp
085fe649 +0x173:  sub    $0x28,%esp
085fe64c +0x176:  mov    0xc(%ebp),%eax
085fe64f +0x179:  mov    %eax,0x4(%esp)
085fe653 +0x17d:  lea    -0x9(%ebp),%eax
085fe656 +0x180:  mov    %eax,(%esp)
085fe659 +0x183:  call   085fe6ce <+0x1f8>
085fe65e +0x188:  mov    0x8(%ebp),%eax
085fe661 +0x18b:  lea    -0x9(%ebp),%edx
085fe664 +0x18e:  mov    %edx,0x4(%esp)
085fe668 +0x192:  mov    %eax,(%esp)
085fe66b +0x195:  call   085fe6e2 <+0x20c>
085fe670 +0x19a:  lea    -0x9(%ebp),%eax
085fe673 +0x19d:  mov    %eax,(%esp)
085fe676 +0x1a0:  call   082b615c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8057>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8057
085fe67b +0x1a5:  mov    0x8(%ebp),%eax
085fe67e +0x1a8:  mov    %eax,(%esp)
085fe681 +0x1ab:  call   082bf2bc <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x111b7>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x111b7
085fe686 +0x1b0:  leave
085fe687 +0x1b1:  ret
085fe688 +0x1b2:  push   %ebp
085fe689 +0x1b3:  mov    %esp,%ebp
085fe68b +0x1b5:  sub    $0x18,%esp
085fe68e +0x1b8:  jmp    085fe6b5 <+0x1df>
085fe690 +0x1ba:  lea    0xc(%ebp),%eax
085fe693 +0x1bd:  mov    %eax,(%esp)
085fe696 +0x1c0:  call   084a67e4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7cc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7cc
085fe69b +0x1c5:  mov    %eax,0x4(%esp)
085fe69f +0x1c9:  mov    0x8(%ebp),%eax
085fe6a2 +0x1cc:  mov    %eax,(%esp)
085fe6a5 +0x1cf:  call   084a66b0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x698>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x698
085fe6aa +0x1d4:  lea    0xc(%ebp),%eax
085fe6ad +0x1d7:  mov    %eax,(%esp)
085fe6b0 +0x1da:  call   084a67d0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7b8>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7b8
085fe6b5 +0x1df:  lea    0x10(%ebp),%eax
085fe6b8 +0x1e2:  mov    %eax,0x4(%esp)
085fe6bc +0x1e6:  lea    0xc(%ebp),%eax
085fe6bf +0x1e9:  mov    %eax,(%esp)
085fe6c2 +0x1ec:  call   084a67bc <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7a4>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7a4
085fe6c7 +0x1f1:  test   %al,%al
085fe6c9 +0x1f3:  jne    085fe690 <+0x1ba>
085fe6cb +0x1f5:  leave
085fe6cc +0x1f6:  ret
085fe6cd +0x1f7:  nop
085fe6ce +0x1f8:  push   %ebp
085fe6cf +0x1f9:  mov    %esp,%ebp
085fe6d1 +0x1fb:  sub    $0x18,%esp
085fe6d4 +0x1fe:  mov    0x8(%ebp),%eax
085fe6d7 +0x201:  mov    %eax,(%esp)
085fe6da +0x204:  call   082d2d5a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24c55>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24c55
085fe6df +0x209:  leave
085fe6e0 +0x20a:  ret
085fe6e1 +0x20b:  nop
085fe6e2 +0x20c:  push   %ebp
085fe6e3 +0x20d:  mov    %esp,%ebp
085fe6e5 +0x20f:  sub    $0x18,%esp
085fe6e8 +0x212:  mov    0x8(%ebp),%eax
085fe6eb +0x215:  mov    0xc(%ebp),%edx
085fe6ee +0x218:  mov    %edx,0x4(%esp)
085fe6f2 +0x21c:  mov    %eax,(%esp)
085fe6f5 +0x21f:  call   085fe710 <+0x23a>
085fe6fa +0x224:  mov    0x8(%ebp),%eax
085fe6fd +0x227:  movl   $0x0,(%eax)
085fe703 +0x22d:  mov    0x8(%ebp),%eax
085fe706 +0x230:  movl   $0x0,0x4(%eax)
085fe70d +0x237:  leave
085fe70e +0x238:  ret
085fe70f +0x239:  nop
085fe710 +0x23a:  push   %ebp
085fe711 +0x23b:  mov    %esp,%ebp
085fe713 +0x23d:  sub    $0x18,%esp
085fe716 +0x240:  mov    0xc(%ebp),%edx
085fe719 +0x243:  mov    0x8(%ebp),%eax
085fe71c +0x246:  mov    %edx,0x4(%esp)
085fe720 +0x24a:  mov    %eax,(%esp)
085fe723 +0x24d:  call   085fe72a <+0x254>
085fe728 +0x252:  leave
085fe729 +0x253:  ret
085fe72a +0x254:  push   %ebp
085fe72b +0x255:  mov    %esp,%ebp
085fe72d +0x257:  pop    %ebp
085fe72e +0x258:  ret
085fe72f +0x259:  nop
```

## 反编译 C

```c
// <global>::global @ 0x85fe4d6

/* WongWork::CSecurityCard::init() */

void WongWork::CSecurityCard::_GLOBAL__I_init(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
