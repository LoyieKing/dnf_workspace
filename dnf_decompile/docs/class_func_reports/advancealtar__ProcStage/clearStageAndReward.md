# clearStageAndReward

`_ZN12advancealtar9ProcStage19clearStageAndRewardEv`

`advancealtar::ProcStage::clearStageAndReward()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e3f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e3f6  _ZN12advancealtar9ProcStage19clearStageAndRewardEv
#           advancealtar::ProcStage::clearStageAndReward()
# range [0x0812e3f6, 0x0812e6dd]
0812e3f6 +0x000:  push   %ebp
0812e3f7 +0x001:  mov    %esp,%ebp
0812e3f9 +0x003:  push   %edi
0812e3fa +0x004:  push   %esi
0812e3fb +0x005:  push   %ebx
0812e3fc +0x006:  sub    $0x6c,%esp
0812e3ff +0x009:  mov    0x8(%ebp),%eax
0812e402 +0x00c:  mov    0x70(%eax),%eax
0812e405 +0x00f:  test   %eax,%eax
0812e407 +0x011:  je     0812e6d1 <+0x2db>
0812e40d +0x017:  mov    0x8(%ebp),%eax
0812e410 +0x01a:  mov    (%eax),%eax
0812e412 +0x01c:  mov    %eax,(%esp)
0812e415 +0x01f:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812e41a +0x024:  mov    %eax,-0x1c(%ebp)
0812e41d +0x027:  cmpl   $0x0,-0x1c(%ebp)
0812e421 +0x02b:  je     0812e6d4 <+0x2de>
0812e427 +0x031:  movl   $0x0,-0x20(%ebp)
0812e42e +0x038:  movb   $0x0,-0x21(%ebp)
0812e432 +0x03c:  movb   $0x0,-0x22(%ebp)
0812e436 +0x040:  mov    0x8(%ebp),%eax
0812e439 +0x043:  mov    %eax,(%esp)
0812e43c +0x046:  call   0812eb4e <_ZNK12advancealtar9ProcStage23getClearSurvivalRoundNoEv>  ; advancealtar::ProcStage::getClearSurvivalRoundNo() const
0812e441 +0x04b:  mov    %eax,%esi
0812e443 +0x04d:  mov    0x8(%ebp),%eax
0812e446 +0x050:  mov    %eax,(%esp)
0812e449 +0x053:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812e44e +0x058:  mov    %eax,%ebx
0812e450 +0x05a:  mov    0x8(%ebp),%eax
0812e453 +0x05d:  mov    0x68(%eax),%edi
0812e456 +0x060:  mov    0x8(%ebp),%eax
0812e459 +0x063:  mov    %eax,(%esp)
0812e45c +0x066:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e461 +0x06b:  mov    -0x1c(%ebp),%edx
0812e464 +0x06e:  lea    0x8df60(%edx),%ecx
0812e46a +0x074:  lea    -0x22(%ebp),%edx
0812e46d +0x077:  mov    %edx,0x1c(%esp)
0812e471 +0x07b:  lea    -0x21(%ebp),%edx
0812e474 +0x07e:  mov    %edx,0x18(%esp)
0812e478 +0x082:  lea    -0x20(%ebp),%edx
0812e47b +0x085:  mov    %edx,0x14(%esp)
0812e47f +0x089:  mov    %esi,0x10(%esp)
0812e483 +0x08d:  mov    %ebx,0xc(%esp)
0812e487 +0x091:  mov    %edi,0x8(%esp)
0812e48b +0x095:  mov    %eax,0x4(%esp)
0812e48f +0x099:  mov    %ecx,(%esp)
0812e492 +0x09c:  call   0813175a <_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_>  ; advancealtar::CharacAdvanceAltarManager::clearStage(int, advancealtar::StageDifficulty::T, advancealtar::StageType::T, int, int&, bool&, bool&)
0812e497 +0x0a1:  test   %al,%al
0812e499 +0x0a3:  je     0812e6d5 <+0x2df>
0812e49f +0x0a9:  lea    -0x3c(%ebp),%eax
0812e4a2 +0x0ac:  mov    %eax,(%esp)
0812e4a5 +0x0af:  call   081356ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12b3
0812e4aa +0x0b4:  lea    -0x3c(%ebp),%eax
0812e4ad +0x0b7:  mov    %eax,0x4(%esp)
0812e4b1 +0x0bb:  mov    0x8(%ebp),%eax
0812e4b4 +0x0be:  mov    %eax,(%esp)
0812e4b7 +0x0c1:  call   0812f3ae <_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE>  ; advancealtar::ProcStage::addAchievementReward(std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)
0812e4bc +0x0c6:  lea    -0x48(%ebp),%eax
0812e4bf +0x0c9:  mov    %eax,(%esp)
0812e4c2 +0x0cc:  call   08134be0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7e7
0812e4c7 +0x0d1:  lea    -0x48(%ebp),%eax
0812e4ca +0x0d4:  mov    %eax,0x4(%esp)
0812e4ce +0x0d8:  mov    0x8(%ebp),%eax
0812e4d1 +0x0db:  mov    %eax,(%esp)
0812e4d4 +0x0de:  call   0812f0fa <_ZN12advancealtar9ProcStage16rewardClearStageERSt6vectorINS_11_RewardItemESaIS2_EE>  ; advancealtar::ProcStage::rewardClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> >&)
0812e4d9 +0x0e3:  mov    0x8(%ebp),%eax
0812e4dc +0x0e6:  mov    %eax,(%esp)
0812e4df +0x0e9:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e4e4 +0x0ee:  mov    -0x1c(%ebp),%edx
0812e4e7 +0x0f1:  add    $0x8df60,%edx
0812e4ed +0x0f7:  mov    %eax,0x4(%esp)
0812e4f1 +0x0fb:  mov    %edx,(%esp)
0812e4f4 +0x0fe:  call   081331d4 <_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi>  ; advancealtar::CharacAdvanceAltarManager::setNextStage(int)
0812e4f9 +0x103:  mov    0x8(%ebp),%eax
0812e4fc +0x106:  mov    %eax,(%esp)
0812e4ff +0x109:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812e504 +0x10e:  test   %eax,%eax
0812e506 +0x110:  je     0812e527 <+0x131>
0812e508 +0x112:  mov    0x8(%ebp),%eax
0812e50b +0x115:  mov    %eax,(%esp)
0812e50e +0x118:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812e513 +0x11d:  cmp    $0x1,%eax
0812e516 +0x120:  jne    0812e52e <+0x138>
0812e518 +0x122:  lea    -0x48(%ebp),%eax
0812e51b +0x125:  mov    %eax,(%esp)
0812e51e +0x128:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
0812e523 +0x12d:  test   %eax,%eax
0812e525 +0x12f:  je     0812e52e <+0x138>
0812e527 +0x131:  mov    $0x1,%eax
0812e52c +0x136:  jmp    0812e533 <+0x13d>
0812e52e +0x138:  mov    $0x0,%eax
0812e533 +0x13d:  test   %al,%al
0812e535 +0x13f:  je     0812e558 <+0x162>
0812e537 +0x141:  mov    -0x1c(%ebp),%eax
0812e53a +0x144:  add    $0x8df60,%eax
0812e53f +0x149:  mov    %eax,(%esp)
0812e542 +0x14c:  call   081313b6 <_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv>  ; advancealtar::CharacAdvanceAltarManager::decTicket()
0812e547 +0x151:  xor    $0x1,%eax
0812e54a +0x154:  test   %al,%al
0812e54c +0x156:  je     0812e558 <+0x162>
0812e54e +0x158:  mov    $0x0,%ebx
0812e553 +0x15d:  jmp    0812e69c <+0x2a6>
0812e558 +0x162:  lea    -0x54(%ebp),%eax
0812e55b +0x165:  mov    %eax,(%esp)
0812e55e +0x168:  call   081356e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12e9
0812e563 +0x16d:  movzbl -0x21(%ebp),%eax
0812e567 +0x171:  test   %al,%al
0812e569 +0x173:  je     0812e5fc <+0x206>
0812e56f +0x179:  mov    0x8(%ebp),%eax
0812e572 +0x17c:  mov    %eax,(%esp)
0812e575 +0x17f:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e57a +0x184:  mov    -0x1c(%ebp),%edx
0812e57d +0x187:  lea    0x8df60(%edx),%ecx
0812e583 +0x18d:  lea    -0x54(%ebp),%edx
0812e586 +0x190:  mov    %edx,0xc(%esp)
0812e58a +0x194:  mov    %eax,0x8(%esp)
0812e58e +0x198:  movl   $0x0,0x4(%esp)
0812e596 +0x1a0:  mov    %ecx,(%esp)
0812e599 +0x1a3:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
0812e59e +0x1a8:  mov    0x8(%ebp),%eax
0812e5a1 +0x1ab:  mov    %eax,(%esp)
0812e5a4 +0x1ae:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e5a9 +0x1b3:  mov    -0x1c(%ebp),%edx
0812e5ac +0x1b6:  lea    0x8df60(%edx),%ecx
0812e5b2 +0x1bc:  lea    -0x54(%ebp),%edx
0812e5b5 +0x1bf:  mov    %edx,0xc(%esp)
0812e5b9 +0x1c3:  mov    %eax,0x8(%esp)
0812e5bd +0x1c7:  movl   $0x1,0x4(%esp)
0812e5c5 +0x1cf:  mov    %ecx,(%esp)
0812e5c8 +0x1d2:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
0812e5cd +0x1d7:  mov    0x8(%ebp),%eax
0812e5d0 +0x1da:  mov    %eax,(%esp)
0812e5d3 +0x1dd:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e5d8 +0x1e2:  mov    -0x1c(%ebp),%edx
0812e5db +0x1e5:  lea    0x8df60(%edx),%ecx
0812e5e1 +0x1eb:  lea    -0x54(%ebp),%edx
0812e5e4 +0x1ee:  mov    %edx,0xc(%esp)
0812e5e8 +0x1f2:  mov    %eax,0x8(%esp)
0812e5ec +0x1f6:  movl   $0x2,0x4(%esp)
0812e5f4 +0x1fe:  mov    %ecx,(%esp)
0812e5f7 +0x201:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
0812e5fc +0x206:  movzbl -0x22(%ebp),%eax
0812e600 +0x20a:  movzbl %al,%edx
0812e603 +0x20d:  mov    -0x20(%ebp),%eax
0812e606 +0x210:  mov    %edx,0x14(%esp)
0812e60a +0x214:  mov    %eax,0x10(%esp)
0812e60e +0x218:  lea    -0x3c(%ebp),%eax
0812e611 +0x21b:  mov    %eax,0xc(%esp)
0812e615 +0x21f:  lea    -0x54(%ebp),%eax
0812e618 +0x222:  mov    %eax,0x8(%esp)
0812e61c +0x226:  lea    -0x48(%ebp),%eax
0812e61f +0x229:  mov    %eax,0x4(%esp)
0812e623 +0x22d:  mov    0x8(%ebp),%eax
0812e626 +0x230:  mov    %eax,(%esp)
0812e629 +0x233:  call   0812e6de <_ZNK12advancealtar9ProcStage14sendClearStageERKSt6vectorINS_11_RewardItemESaIS2_EERKS1_INS_8_BuyItemESaIS7_EERKSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiSD_EEEib>  ; advancealtar::ProcStage::sendClearStage(std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const&, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> > const&, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > > const&, int, bool) const
0812e62e +0x238:  mov    -0x20(%ebp),%eax
0812e631 +0x23b:  test   %eax,%eax
0812e633 +0x23d:  jle    0812e675 <+0x27f>
0812e635 +0x23f:  mov    -0x20(%ebp),%ebx
0812e638 +0x242:  mov    0x8(%ebp),%eax
0812e63b +0x245:  mov    %eax,(%esp)
0812e63e +0x248:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812e643 +0x24d:  mov    %ebx,0xc(%esp)
0812e647 +0x251:  mov    %eax,0x8(%esp)
0812e64b +0x255:  movl   $0x0,0x4(%esp)
0812e653 +0x25d:  mov    -0x1c(%ebp),%eax
0812e656 +0x260:  mov    %eax,(%esp)
0812e659 +0x263:  call   08133d56 <_ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii>  ; advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int)
0812e65e +0x268:  jmp    0812e675 <+0x27f>
0812e660 +0x26a:  mov    %edx,%ebx
0812e662 +0x26c:  mov    %eax,%esi
0812e664 +0x26e:  lea    -0x54(%ebp),%eax
0812e667 +0x271:  mov    %eax,(%esp)
0812e66a +0x274:  call   081356f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12fd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12fd
0812e66f +0x279:  mov    %esi,%eax
0812e671 +0x27b:  mov    %ebx,%edx
0812e673 +0x27d:  jmp    0812e687 <+0x291>
0812e675 +0x27f:  lea    -0x54(%ebp),%eax
0812e678 +0x282:  mov    %eax,(%esp)
0812e67b +0x285:  call   081356f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12fd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12fd
0812e680 +0x28a:  mov    $0x1,%ebx
0812e685 +0x28f:  jmp    0812e69c <+0x2a6>
0812e687 +0x291:  mov    %edx,%ebx
0812e689 +0x293:  mov    %eax,%esi
0812e68b +0x295:  lea    -0x48(%ebp),%eax
0812e68e +0x298:  mov    %eax,(%esp)
0812e691 +0x29b:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812e696 +0x2a0:  mov    %esi,%eax
0812e698 +0x2a2:  mov    %ebx,%edx
0812e69a +0x2a4:  jmp    0812e6b6 <+0x2c0>
0812e69c +0x2a6:  lea    -0x48(%ebp),%eax
0812e69f +0x2a9:  mov    %eax,(%esp)
0812e6a2 +0x2ac:  call   08134bf4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7fb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7fb
0812e6a7 +0x2b1:  test   %ebx,%ebx
0812e6a9 +0x2b3:  lea    -0x3c(%ebp),%eax
0812e6ac +0x2b6:  mov    %eax,(%esp)
0812e6af +0x2b9:  call   0813451e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x125>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x125
0812e6b4 +0x2be:  jmp    0812e6d5 <+0x2df>
0812e6b6 +0x2c0:  mov    %edx,%ebx
0812e6b8 +0x2c2:  mov    %eax,%esi
0812e6ba +0x2c4:  lea    -0x3c(%ebp),%eax
0812e6bd +0x2c7:  mov    %eax,(%esp)
0812e6c0 +0x2ca:  call   0813451e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x125>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x125
0812e6c5 +0x2cf:  mov    %esi,%eax
0812e6c7 +0x2d1:  mov    %ebx,%edx
0812e6c9 +0x2d3:  mov    %eax,(%esp)
0812e6cc +0x2d6:  call   08ae3750 <_Unwind_Resume>
0812e6d1 +0x2db:  nop
0812e6d2 +0x2dc:  jmp    0812e6d5 <+0x2df>
0812e6d4 +0x2de:  nop
0812e6d5 +0x2df:  add    $0x6c,%esp
0812e6d8 +0x2e2:  pop    %ebx
0812e6d9 +0x2e3:  pop    %esi
0812e6da +0x2e4:  pop    %edi
0812e6db +0x2e5:  pop    %ebp
0812e6dc +0x2e6:  ret
0812e6dd +0x2e7:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::clearStageAndReward @ 0x812e3f6

/* advancealtar::ProcStage::clearStageAndReward() */

void __thiscall advancealtar::ProcStage::clearStageAndReward(ProcStage *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> local_58 [12];
  vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> local_4c [12];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_40 [26];
  bool local_26;
  char local_25;
  int local_24;
  int local_20;
  
  if ((*(int *)(this + 0x70) != 0) &&
     (local_20 = CharacData::getUser(*(CharacData **)this), local_20 != 0)) {
    local_24 = 0;
    local_25 = '\0';
    local_26 = false;
    uVar3 = getClearSurvivalRoundNo(this);
    uVar4 = getStageType(this);
    uVar7 = *(undefined4 *)(this + 0x68);
    uVar5 = getStageIndex(this);
    cVar2 = CharacAdvanceAltarManager::clearStage
                      ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),uVar5,uVar7,uVar4,uVar3,
                       &local_24,&local_25,&local_26);
    if (cVar2 != '\0') {
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::map(local_40);
                    /* try { // try from 0812e4b7 to 0812e4c6 has its CatchHandler @ 0812e6b6 */
      addAchievementReward(this,(map *)local_40);
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::vector
                (local_4c);
                    /* try { // try from 0812e4d4 to 0812e562 has its CatchHandler @ 0812e687 */
      rewardClearStage(this,(vector *)local_4c);
      iVar6 = getStageIndex(this);
      CharacAdvanceAltarManager::setNextStage
                ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),iVar6);
      iVar6 = getStageType(this);
      if ((iVar6 == 0) ||
         ((iVar6 = getStageType(this), iVar6 == 1 &&
          (iVar6 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>
                   ::size(local_4c), iVar6 != 0)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((!bVar1) ||
         (cVar2 = CharacAdvanceAltarManager::decTicket
                            ((CharacAdvanceAltarManager *)(local_20 + 0x8df60)), cVar2 == '\x01')) {
        std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::vector(local_58)
        ;
        if (local_25 != '\0') {
          uVar7 = getStageIndex(this);
                    /* try { // try from 0812e599 to 0812e65d has its CatchHandler @ 0812e660 */
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),0,uVar7,local_58);
          uVar7 = getStageIndex(this);
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),1,uVar7,local_58);
          uVar7 = getStageIndex(this);
          CharacAdvanceAltarManager::setUnlockBuyItem
                    ((CharacAdvanceAltarManager *)(local_20 + 0x8df60),2,uVar7,local_58);
        }
        sendClearStage(this,(vector *)local_4c,(vector *)local_58,(map *)local_40,local_24,local_26)
        ;
        iVar6 = local_24;
        if (0 < local_24) {
          uVar7 = getStageIndex(this);
          HistoryLog::starAdd(local_20,0,uVar7,iVar6);
        }
                    /* try { // try from 0812e67b to 0812e67f has its CatchHandler @ 0812e687 */
        std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::~vector
                  (local_58);
      }
                    /* try { // try from 0812e6a2 to 0812e6a6 has its CatchHandler @ 0812e6b6 */
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::~vector
                (local_4c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::~map(local_40);
    }
  }
  return;
}
```
