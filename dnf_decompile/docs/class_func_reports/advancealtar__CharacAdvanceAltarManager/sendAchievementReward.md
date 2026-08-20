# sendAchievementReward

`_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE`

`advancealtar::CharacAdvanceAltarManager::sendAchievementReward(CUser*, int, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const**)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813234e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813234e  _ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE
#           advancealtar::CharacAdvanceAltarManager::sendAchievementReward(CUser*, int, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const**)
# range [0x0813234e, 0x08132637]
0813234e +0x000:  push   %ebp
0813234f +0x001:  mov    %esp,%ebp
08132351 +0x003:  push   %esi
08132352 +0x004:  push   %ebx
08132353 +0x005:  sub    $0x50,%esp
08132356 +0x008:  cmpl   $0x0,0xc(%ebp)
0813235a +0x00c:  je     08132365 <+0x17>
0813235c +0x00e:  mov    0x8(%ebp),%eax
0813235f +0x011:  mov    (%eax),%eax
08132361 +0x013:  test   %eax,%eax
08132363 +0x015:  jne    0813236f <+0x21>
08132365 +0x017:  mov    $0x2,%ebx
0813236a +0x01c:  jmp    0813262b <+0x2dd>
0813236f +0x021:  mov    0x8(%ebp),%eax
08132372 +0x024:  mov    (%eax),%eax
08132374 +0x026:  lea    0xb4(%eax),%ecx
0813237a +0x02c:  lea    -0x24(%ebp),%eax
0813237d +0x02f:  lea    0x10(%ebp),%edx
08132380 +0x032:  mov    %edx,0x8(%esp)
08132384 +0x036:  mov    %ecx,0x4(%esp)
08132388 +0x03a:  mov    %eax,(%esp)
0813238b +0x03d:  call   08136282 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e89>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e89
08132390 +0x042:  sub    $0x4,%esp
08132393 +0x045:  mov    0x8(%ebp),%eax
08132396 +0x048:  mov    (%eax),%eax
08132398 +0x04a:  lea    0xb4(%eax),%edx
0813239e +0x050:  lea    -0x20(%ebp),%eax
081323a1 +0x053:  mov    %edx,0x4(%esp)
081323a5 +0x057:  mov    %eax,(%esp)
081323a8 +0x05a:  call   081362ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1eb5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1eb5
081323ad +0x05f:  sub    $0x4,%esp
081323b0 +0x062:  lea    -0x20(%ebp),%eax
081323b3 +0x065:  mov    %eax,0x4(%esp)
081323b7 +0x069:  lea    -0x24(%ebp),%eax
081323ba +0x06c:  mov    %eax,(%esp)
081323bd +0x06f:  call   081362d4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1edb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1edb
081323c2 +0x074:  test   %al,%al
081323c4 +0x076:  je     081323d0 <+0x82>
081323c6 +0x078:  mov    $0x2,%ebx
081323cb +0x07d:  jmp    0813262b <+0x2dd>
081323d0 +0x082:  lea    -0x24(%ebp),%eax
081323d3 +0x085:  mov    %eax,(%esp)
081323d6 +0x088:  call   081362e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1eef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1eef
081323db +0x08d:  movzbl 0x8(%eax),%eax
081323df +0x091:  test   %al,%al
081323e1 +0x093:  je     081323ed <+0x9f>
081323e3 +0x095:  mov    $0x3,%ebx
081323e8 +0x09a:  jmp    0813262b <+0x2dd>
081323ed +0x09f:  mov    0x10(%ebp),%ebx
081323f0 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081323f5 +0x0a7:  add    $0x634c,%eax
081323fa +0x0ac:  mov    %ebx,0x4(%esp)
081323fe +0x0b0:  mov    %eax,(%esp)
08132401 +0x0b3:  call   0889b544 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataEi>  ; advancealtar::RewardParameter::getAchievementRewardData(int) const
08132406 +0x0b8:  mov    %eax,-0x14(%ebp)
08132409 +0x0bb:  cmpl   $0x0,-0x14(%ebp)
0813240d +0x0bf:  jne    08132419 <+0xcb>
0813240f +0x0c1:  mov    $0x3,%ebx
08132414 +0x0c6:  jmp    0813262b <+0x2dd>
08132419 +0x0cb:  mov    -0x14(%ebp),%eax
0813241c +0x0ce:  add    $0x10,%eax
0813241f +0x0d1:  mov    %eax,-0x10(%ebp)
08132422 +0x0d4:  lea    -0x30(%ebp),%eax
08132425 +0x0d7:  mov    %eax,(%esp)
08132428 +0x0da:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
0813242d +0x0df:  lea    -0x3c(%ebp),%eax
08132430 +0x0e2:  mov    %eax,(%esp)
08132433 +0x0e5:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
08132438 +0x0ea:  movl   $0x0,-0xc(%ebp)
0813243f +0x0f1:  lea    -0x40(%ebp),%eax
08132442 +0x0f4:  mov    -0x10(%ebp),%edx
08132445 +0x0f7:  mov    %edx,0x4(%esp)
08132449 +0x0fb:  mov    %eax,(%esp)
0813244c +0x0fe:  call   08135754 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x135b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x135b
08132451 +0x103:  sub    $0x4,%esp
08132454 +0x106:  jmp    081324fd <+0x1af>
08132459 +0x10b:  call   0812cfa6 <_ZN12advancealtar9isOnEventEv>  ; advancealtar::isOnEvent()
0813245e +0x110:  test   %al,%al
08132460 +0x112:  je     081324b0 <+0x162>
08132462 +0x114:  lea    -0x40(%ebp),%eax
08132465 +0x117:  mov    %eax,(%esp)
08132468 +0x11a:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
0813246d +0x11f:  mov    (%eax),%eax
0813246f +0x121:  test   %eax,%eax
08132471 +0x123:  sete   %al
08132474 +0x126:  test   %al,%al
08132476 +0x128:  je     08132494 <+0x146>
08132478 +0x12a:  lea    -0x40(%ebp),%eax
0813247b +0x12d:  mov    %eax,(%esp)
0813247e +0x130:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
08132483 +0x135:  mov    %eax,0x4(%esp)
08132487 +0x139:  lea    -0x30(%ebp),%eax
0813248a +0x13c:  mov    %eax,(%esp)
0813248d +0x13f:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
08132492 +0x144:  jmp    081324e0 <+0x192>
08132494 +0x146:  lea    -0x40(%ebp),%eax
08132497 +0x149:  mov    %eax,(%esp)
0813249a +0x14c:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
0813249f +0x151:  mov    %eax,0x4(%esp)
081324a3 +0x155:  lea    -0x3c(%ebp),%eax
081324a6 +0x158:  mov    %eax,(%esp)
081324a9 +0x15b:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
081324ae +0x160:  jmp    081324e0 <+0x192>
081324b0 +0x162:  lea    -0x40(%ebp),%eax
081324b3 +0x165:  mov    %eax,(%esp)
081324b6 +0x168:  call   08135c5c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1863>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1863
081324bb +0x16d:  mov    (%eax),%eax
081324bd +0x16f:  test   %eax,%eax
081324bf +0x171:  sete   %al
081324c2 +0x174:  test   %al,%al
081324c4 +0x176:  je     081324e0 <+0x192>
081324c6 +0x178:  lea    -0x40(%ebp),%eax
081324c9 +0x17b:  mov    %eax,(%esp)
081324cc +0x17e:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
081324d1 +0x183:  mov    %eax,0x4(%esp)
081324d5 +0x187:  lea    -0x30(%ebp),%eax
081324d8 +0x18a:  mov    %eax,(%esp)
081324db +0x18d:  call   08135be8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ef
081324e0 +0x192:  lea    -0x18(%ebp),%eax
081324e3 +0x195:  movl   $0x0,0x8(%esp)
081324eb +0x19d:  lea    -0x40(%ebp),%edx
081324ee +0x1a0:  mov    %edx,0x4(%esp)
081324f2 +0x1a4:  mov    %eax,(%esp)
081324f5 +0x1a7:  call   081357d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13df
081324fa +0x1ac:  sub    $0x4,%esp
081324fd +0x1af:  lea    -0x1c(%ebp),%eax
08132500 +0x1b2:  mov    -0x10(%ebp),%edx
08132503 +0x1b5:  mov    %edx,0x4(%esp)
08132507 +0x1b9:  mov    %eax,(%esp)
0813250a +0x1bc:  call   08135780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1387
0813250f +0x1c1:  sub    $0x4,%esp
08132512 +0x1c4:  lea    -0x1c(%ebp),%eax
08132515 +0x1c7:  mov    %eax,0x4(%esp)
08132519 +0x1cb:  lea    -0x40(%ebp),%eax
0813251c +0x1ce:  mov    %eax,(%esp)
0813251f +0x1d1:  call   081357ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13b3
08132524 +0x1d6:  test   %al,%al
08132526 +0x1d8:  jne    08132459 <+0x10b>
0813252c +0x1de:  lea    -0x30(%ebp),%eax
0813252f +0x1e1:  mov    %eax,(%esp)
08132532 +0x1e4:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
08132537 +0x1e9:  test   %eax,%eax
08132539 +0x1eb:  setne  %al
0813253c +0x1ee:  test   %al,%al
0813253e +0x1f0:  je     08132578 <+0x22a>
08132540 +0x1f2:  mov    -0x14(%ebp),%eax
08132543 +0x1f5:  add    $0x24,%eax
08132546 +0x1f8:  mov    %eax,(%esp)
08132549 +0x1fb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813254e +0x200:  mov    %eax,%ebx
08132550 +0x202:  mov    -0x14(%ebp),%eax
08132553 +0x205:  add    $0x20,%eax
08132556 +0x208:  mov    %eax,(%esp)
08132559 +0x20b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813255e +0x210:  mov    %ebx,0xc(%esp)
08132562 +0x214:  mov    %eax,0x8(%esp)
08132566 +0x218:  lea    -0x30(%ebp),%eax
08132569 +0x21b:  mov    %eax,0x4(%esp)
0813256d +0x21f:  mov    0xc(%ebp),%eax
08132570 +0x222:  mov    %eax,(%esp)
08132573 +0x225:  call   0812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>  ; advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)
08132578 +0x22a:  lea    -0x3c(%ebp),%eax
0813257b +0x22d:  mov    %eax,(%esp)
0813257e +0x230:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
08132583 +0x235:  test   %eax,%eax
08132585 +0x237:  setne  %al
08132588 +0x23a:  test   %al,%al
0813258a +0x23c:  je     081325b8 <+0x26a>
0813258c +0x23e:  mov    -0x14(%ebp),%eax
0813258f +0x241:  add    $0x24,%eax
08132592 +0x244:  mov    %eax,(%esp)
08132595 +0x247:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813259a +0x24c:  mov    %eax,0xc(%esp)
0813259e +0x250:  movl   $"chn_game_server_msg_86",0x8(%esp)
081325a6 +0x258:  lea    -0x3c(%ebp),%eax
081325a9 +0x25b:  mov    %eax,0x4(%esp)
081325ad +0x25f:  mov    0xc(%ebp),%eax
081325b0 +0x262:  mov    %eax,(%esp)
081325b3 +0x265:  call   0812f47a <_ZN12advancealtar9ProcStage18sendMailRewardItemEP5CUserRKSt6vectorINS_11_RewardItemESaIS4_EEPKcSA_>  ; advancealtar::ProcStage::sendMailRewardItem(CUser*, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, char const*, char const*)
081325b8 +0x26a:  mov    -0x14(%ebp),%eax
081325bb +0x26d:  lea    0x10(%eax),%edx
081325be +0x270:  mov    0x14(%ebp),%eax
081325c1 +0x273:  mov    %edx,(%eax)
081325c3 +0x275:  lea    -0x24(%ebp),%eax
081325c6 +0x278:  mov    %eax,(%esp)
081325c9 +0x27b:  call   081362e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1eef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1eef
081325ce +0x280:  movb   $0x1,0x8(%eax)
081325d2 +0x284:  mov    0x8(%ebp),%eax
081325d5 +0x287:  mov    (%eax),%eax
081325d7 +0x289:  movb   $0x1,0xcc(%eax)
081325de +0x290:  mov    $0x0,%ebx
081325e3 +0x295:  lea    -0x3c(%ebp),%eax
081325e6 +0x298:  mov    %eax,(%esp)
081325e9 +0x29b:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
081325ee +0x2a0:  jmp    08132620 <+0x2d2>
081325f0 +0x2a2:  mov    %edx,%ebx
081325f2 +0x2a4:  mov    %eax,%esi
081325f4 +0x2a6:  lea    -0x3c(%ebp),%eax
081325f7 +0x2a9:  mov    %eax,(%esp)
081325fa +0x2ac:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
081325ff +0x2b1:  mov    %esi,%eax
08132601 +0x2b3:  mov    %ebx,%edx
08132603 +0x2b5:  jmp    08132605 <+0x2b7>
08132605 +0x2b7:  mov    %edx,%ebx
08132607 +0x2b9:  mov    %eax,%esi
08132609 +0x2bb:  lea    -0x30(%ebp),%eax
0813260c +0x2be:  mov    %eax,(%esp)
0813260f +0x2c1:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
08132614 +0x2c6:  mov    %esi,%eax
08132616 +0x2c8:  mov    %ebx,%edx
08132618 +0x2ca:  mov    %eax,(%esp)
0813261b +0x2cd:  call   08ae3750 <_Unwind_Resume>
08132620 +0x2d2:  lea    -0x30(%ebp),%eax
08132623 +0x2d5:  mov    %eax,(%esp)
08132626 +0x2d8:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0813262b +0x2dd:  mov    %ebx,%eax
0813262d +0x2df:  lea    -0x8(%ebp),%esp
08132630 +0x2e2:  add    $0x0,%esp
08132633 +0x2e5:  pop    %ebx
08132634 +0x2e6:  pop    %esi
08132635 +0x2e7:  pop    %ebp
08132636 +0x2e8:  ret
08132637 +0x2e9:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::sendAchievementReward @ 0x813234e

/* advancealtar::CharacAdvanceAltarManager::sendAchievementReward(CUser*, int,
   std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const**) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::sendAchievementReward
          (CharacAdvanceAltarManager *this,CUser *param_1,int param_2,vector **param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  _RewardItem *p_Var5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_44 [4];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_40 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_34 [12];
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>> local_28 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)this == 0)) {
    uVar8 = 2;
  }
  else {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::find((int *)local_28);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator==
                      (local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                        (local_28);
      if (*(char *)(iVar3 + 8) == '\0') {
        iVar3 = G_CDataManager();
        local_18 = RewardParameter::getAchievementRewardData(iVar3 + 0x634c);
        if (local_18 == 0) {
          uVar8 = 3;
        }
        else {
          local_14 = local_18 + 0x10;
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                    (local_34);
                    /* try { // try from 08132433 to 08132437 has its CatchHandler @ 08132605 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                    (local_40);
          local_10 = 0;
                    /* try { // try from 0813244c to 081325b7 has its CatchHandler @ 081325f0 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
          while( true ) {
            std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
            bVar2 = __gnu_cxx::operator!=(local_44,local_20);
            if (!bVar2) break;
            cVar1 = isOnEvent();
            if (cVar1 == '\0') {
              piVar4 = (int *)__gnu_cxx::
                              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                              ::operator->(local_44);
              if (*piVar4 == 0) {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_34,p_Var5);
              }
            }
            else {
              piVar4 = (int *)__gnu_cxx::
                              __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                              ::operator->(local_44);
              if (*piVar4 == 0) {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_34,p_Var5);
              }
              else {
                p_Var5 = (_RewardItem *)
                         __gnu_cxx::
                         __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                         ::operator*(local_44);
                std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                push_back(local_40,p_Var5);
              }
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
            ::operator++(local_1c,(int)local_44);
          }
          iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                  size(local_34);
          if (iVar3 != 0) {
            pcVar6 = (char *)std::string::c_str((string *)(local_18 + 0x24));
            pcVar7 = (char *)std::string::c_str((string *)(local_18 + 0x20));
            ProcStage::sendMailRewardItem(param_1,(vector *)local_34,pcVar7,pcVar6);
          }
          iVar3 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
                  size(local_40);
          if (iVar3 != 0) {
            pcVar6 = (char *)std::string::c_str((string *)(local_18 + 0x24));
            ProcStage::sendMailRewardItem
                      (param_1,(vector *)local_40,"chn_game_server_msg_86",pcVar6);
          }
          *param_3 = (vector *)(local_18 + 0x10);
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                            (local_28);
          *(undefined1 *)(iVar3 + 8) = 1;
          *(undefined1 *)(*(int *)this + 0xcc) = 1;
          uVar8 = 0;
                    /* try { // try from 081325e9 to 081325ed has its CatchHandler @ 08132605 */
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                    (local_40);
          std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                    (local_34);
        }
      }
      else {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = 2;
    }
  }
  return uVar8;
}
```
