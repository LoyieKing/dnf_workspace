# resetStar

`_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE`

`advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081333b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081333b2  _ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE
#           advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T)
# range [0x081333b2, 0x0813371f]
081333b2 +0x000:  push   %ebp
081333b3 +0x001:  mov    %esp,%ebp
081333b5 +0x003:  sub    $0x48,%esp
081333b8 +0x006:  cmpl   $0x0,0xc(%ebp)
081333bc +0x00a:  je     081333c7 <+0x15>
081333be +0x00c:  mov    0x8(%ebp),%eax
081333c1 +0x00f:  mov    (%eax),%eax
081333c3 +0x011:  test   %eax,%eax
081333c5 +0x013:  jne    081333d1 <+0x1f>
081333c7 +0x015:  mov    $0x2,%eax
081333cc +0x01a:  jmp    0813371d <+0x36b>
081333d1 +0x01f:  cmpl   $0x0,0x10(%ebp)
081333d5 +0x023:  jne    08133575 <+0x1c3>
081333db +0x029:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081333e0 +0x02e:  add    $0x6334,%eax
081333e5 +0x033:  mov    %eax,-0x10(%ebp)
081333e8 +0x036:  mov    0x8(%ebp),%eax
081333eb +0x039:  mov    (%eax),%eax
081333ed +0x03b:  movzwl 0x1a(%eax),%eax
081333f1 +0x03f:  cwtl
081333f2 +0x040:  mov    %eax,-0x30(%ebp)
081333f5 +0x043:  lea    -0x34(%ebp),%eax
081333f8 +0x046:  lea    -0x30(%ebp),%edx
081333fb +0x049:  mov    %edx,0x8(%esp)
081333ff +0x04d:  mov    -0x10(%ebp),%edx
08133402 +0x050:  mov    %edx,0x4(%esp)
08133406 +0x054:  mov    %eax,(%esp)
08133409 +0x057:  call   0813670c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2313>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2313
0813340e +0x05c:  sub    $0x4,%esp
08133411 +0x05f:  movl   $0x0,-0xc(%ebp)
08133418 +0x066:  lea    -0x2c(%ebp),%eax
0813341b +0x069:  mov    -0x10(%ebp),%edx
0813341e +0x06c:  mov    %edx,0x4(%esp)
08133422 +0x070:  mov    %eax,(%esp)
08133425 +0x073:  call   08136738 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x233f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x233f
0813342a +0x078:  sub    $0x4,%esp
0813342d +0x07b:  lea    -0x2c(%ebp),%eax
08133430 +0x07e:  mov    %eax,0x4(%esp)
08133434 +0x082:  lea    -0x34(%ebp),%eax
08133437 +0x085:  mov    %eax,(%esp)
0813343a +0x088:  call   0813675e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2365>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2365
0813343f +0x08d:  test   %al,%al
08133441 +0x08f:  je     0813345a <+0xa8>
08133443 +0x091:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08133448 +0x096:  add    $0x631c,%eax
0813344d +0x09b:  mov    %eax,(%esp)
08133450 +0x09e:  call   088a2bc0 <_ZN12advancealtar25AdvanceAltarShopParameter22getMaxStarResetGoldFeeEv>  ; advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee()
08133455 +0x0a3:  mov    %eax,-0xc(%ebp)
08133458 +0x0a6:  jmp    0813346b <+0xb9>
0813345a +0x0a8:  lea    -0x34(%ebp),%eax
0813345d +0x0ab:  mov    %eax,(%esp)
08133460 +0x0ae:  call   08136772 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2379>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2379
08133465 +0x0b3:  mov    0x4(%eax),%eax
08133468 +0x0b6:  mov    %eax,-0xc(%ebp)
0813346b +0x0b9:  mov    0xc(%ebp),%eax
0813346e +0x0bc:  mov    %eax,(%esp)
08133471 +0x0bf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08133476 +0x0c4:  mov    %eax,(%esp)
08133479 +0x0c7:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
0813347e +0x0cc:  cmp    -0xc(%ebp),%eax
08133481 +0x0cf:  setl   %al
08133484 +0x0d2:  test   %al,%al
08133486 +0x0d4:  je     08133492 <+0xe0>
08133488 +0x0d6:  mov    $0x3,%eax
0813348d +0x0db:  jmp    0813371d <+0x36b>
08133492 +0x0e0:  mov    0xc(%ebp),%eax
08133495 +0x0e3:  mov    %eax,(%esp)
08133498 +0x0e6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0813349d +0x0eb:  movl   $0x1,0xc(%esp)
081334a5 +0x0f3:  movl   $0x32,0x8(%esp)
081334ad +0x0fb:  mov    -0xc(%ebp),%edx
081334b0 +0x0fe:  mov    %edx,0x4(%esp)
081334b4 +0x102:  mov    %eax,(%esp)
081334b7 +0x105:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
081334bc +0x10a:  xor    $0x1,%eax
081334bf +0x10d:  test   %al,%al
081334c1 +0x10f:  je     081334cd <+0x11b>
081334c3 +0x111:  mov    $0x3,%eax
081334c8 +0x116:  jmp    0813371d <+0x36b>
081334cd +0x11b:  movl   $0x0,0xc(%esp)
081334d5 +0x123:  movl   $0x0,0x8(%esp)
081334dd +0x12b:  movl   $0x1,0x4(%esp)
081334e5 +0x133:  mov    0xc(%ebp),%eax
081334e8 +0x136:  mov    %eax,(%esp)
081334eb +0x139:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081334f0 +0x13e:  mov    0x8(%ebp),%eax
081334f3 +0x141:  mov    (%eax),%eax
081334f5 +0x143:  movzwl 0x1a(%eax),%edx
081334f9 +0x147:  add    $0x1,%edx
081334fc +0x14a:  mov    %dx,0x1a(%eax)
08133500 +0x14e:  mov    0x8(%ebp),%eax
08133503 +0x151:  mov    %eax,(%esp)
08133506 +0x154:  call   08132f8e <_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv>  ; advancealtar::CharacAdvanceAltarManager::setDefaultSlot()
0813350b +0x159:  movl   $0x0,0x4(%esp)
08133513 +0x161:  mov    0x8(%ebp),%eax
08133516 +0x164:  mov    %eax,(%esp)
08133519 +0x167:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
0813351e +0x16c:  movl   $0x1,0x4(%esp)
08133526 +0x174:  mov    0x8(%ebp),%eax
08133529 +0x177:  mov    %eax,(%esp)
0813352c +0x17a:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
08133531 +0x17f:  movl   $0x2,0x4(%esp)
08133539 +0x187:  mov    0x8(%ebp),%eax
0813353c +0x18a:  mov    %eax,(%esp)
0813353f +0x18d:  call   08132cb8 <_ZN12advancealtar25CharacAdvanceAltarManager17setDefaultBuyItemENS_20AdvanceAltarShopType1TE>  ; advancealtar::CharacAdvanceAltarManager::setDefaultBuyItem(advancealtar::AdvanceAltarShopType::T)
08133544 +0x192:  mov    0x8(%ebp),%eax
08133547 +0x195:  mov    (%eax),%eax
08133549 +0x197:  lea    0x24(%eax),%edx
0813354c +0x19a:  lea    -0x28(%ebp),%eax
0813354f +0x19d:  mov    %edx,0x4(%esp)
08133553 +0x1a1:  mov    %eax,(%esp)
08133556 +0x1a4:  call   08136780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2387
0813355b +0x1a9:  sub    $0x4,%esp
0813355e +0x1ac:  lea    -0x28(%ebp),%eax
08133561 +0x1af:  mov    %eax,0x4(%esp)
08133565 +0x1b3:  lea    -0x38(%ebp),%eax
08133568 +0x1b6:  mov    %eax,(%esp)
0813356b +0x1b9:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
08133570 +0x1be:  jmp    08133642 <+0x290>
08133575 +0x1c3:  mov    $0x2,%eax
0813357a +0x1c8:  jmp    0813371d <+0x36b>
0813357f +0x1cd:  lea    -0x38(%ebp),%eax
08133582 +0x1d0:  mov    %eax,(%esp)
08133585 +0x1d3:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
0813358a +0x1d8:  mov    0x8(%eax),%eax
0813358d +0x1db:  cmp    $0xffffffff,%eax
08133590 +0x1de:  sete   %al
08133593 +0x1e1:  test   %al,%al
08133595 +0x1e3:  jne    08133624 <+0x272>
0813359b +0x1e9:  lea    -0x38(%ebp),%eax
0813359e +0x1ec:  mov    %eax,(%esp)
081335a1 +0x1ef:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
081335a6 +0x1f4:  mov    0x4(%eax),%eax
081335a9 +0x1f7:  movl   $0x0,0xc(%esp)
081335b1 +0x1ff:  mov    %eax,0x8(%esp)
081335b5 +0x203:  movl   $0x0,0x4(%esp)
081335bd +0x20b:  mov    0x8(%ebp),%eax
081335c0 +0x20e:  mov    %eax,(%esp)
081335c3 +0x211:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
081335c8 +0x216:  lea    -0x38(%ebp),%eax
081335cb +0x219:  mov    %eax,(%esp)
081335ce +0x21c:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
081335d3 +0x221:  mov    0x4(%eax),%eax
081335d6 +0x224:  movl   $0x0,0xc(%esp)
081335de +0x22c:  mov    %eax,0x8(%esp)
081335e2 +0x230:  movl   $0x1,0x4(%esp)
081335ea +0x238:  mov    0x8(%ebp),%eax
081335ed +0x23b:  mov    %eax,(%esp)
081335f0 +0x23e:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
081335f5 +0x243:  lea    -0x38(%ebp),%eax
081335f8 +0x246:  mov    %eax,(%esp)
081335fb +0x249:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
08133600 +0x24e:  mov    0x4(%eax),%eax
08133603 +0x251:  movl   $0x0,0xc(%esp)
0813360b +0x259:  mov    %eax,0x8(%esp)
0813360f +0x25d:  movl   $0x2,0x4(%esp)
08133617 +0x265:  mov    0x8(%ebp),%eax
0813361a +0x268:  mov    %eax,(%esp)
0813361d +0x26b:  call   08132d20 <_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
08133622 +0x270:  jmp    08133625 <+0x273>
08133624 +0x272:  nop
08133625 +0x273:  lea    -0x1c(%ebp),%eax
08133628 +0x276:  movl   $0x0,0x8(%esp)
08133630 +0x27e:  lea    -0x38(%ebp),%edx
08133633 +0x281:  mov    %edx,0x4(%esp)
08133637 +0x285:  mov    %eax,(%esp)
0813363a +0x288:  call   08135f38 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b3f
0813363f +0x28d:  sub    $0x4,%esp
08133642 +0x290:  mov    0x8(%ebp),%eax
08133645 +0x293:  mov    (%eax),%eax
08133647 +0x295:  lea    0x24(%eax),%edx
0813364a +0x298:  lea    -0x20(%ebp),%eax
0813364d +0x29b:  mov    %edx,0x4(%esp)
08133651 +0x29f:  mov    %eax,(%esp)
08133654 +0x2a2:  call   08135e68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a6f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a6f
08133659 +0x2a7:  sub    $0x4,%esp
0813365c +0x2aa:  lea    -0x20(%ebp),%eax
0813365f +0x2ad:  mov    %eax,0x4(%esp)
08133663 +0x2b1:  lea    -0x24(%ebp),%eax
08133666 +0x2b4:  mov    %eax,(%esp)
08133669 +0x2b7:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
0813366e +0x2bc:  lea    -0x24(%ebp),%eax
08133671 +0x2bf:  mov    %eax,0x4(%esp)
08133675 +0x2c3:  lea    -0x38(%ebp),%eax
08133678 +0x2c6:  mov    %eax,(%esp)
0813367b +0x2c9:  call   08135f24 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b2b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b2b
08133680 +0x2ce:  test   %al,%al
08133682 +0x2d0:  jne    0813357f <+0x1cd>
08133688 +0x2d6:  mov    0x8(%ebp),%eax
0813368b +0x2d9:  mov    (%eax),%eax
0813368d +0x2db:  mov    0xc(%eax),%edx
08133690 +0x2de:  mov    0x8(%ebp),%eax
08133693 +0x2e1:  mov    (%eax),%eax
08133695 +0x2e3:  mov    0x10(%eax),%eax
08133698 +0x2e6:  add    %eax,%edx
0813369a +0x2e8:  mov    0x8(%ebp),%eax
0813369d +0x2eb:  mov    (%eax),%eax
0813369f +0x2ed:  mov    0x14(%eax),%eax
081336a2 +0x2f0:  mov    %edx,%ecx
081336a4 +0x2f2:  sub    %eax,%ecx
081336a6 +0x2f4:  mov    %ecx,%eax
081336a8 +0x2f6:  mov    %eax,-0x18(%ebp)
081336ab +0x2f9:  mov    0x8(%ebp),%eax
081336ae +0x2fc:  mov    (%eax),%eax
081336b0 +0x2fe:  mov    0x8(%ebp),%edx
081336b3 +0x301:  mov    (%edx),%edx
081336b5 +0x303:  mov    0xc(%edx),%ecx
081336b8 +0x306:  mov    0x8(%ebp),%edx
081336bb +0x309:  mov    (%edx),%edx
081336bd +0x30b:  mov    0x10(%edx),%edx
081336c0 +0x30e:  lea    (%ecx,%edx,1),%edx
081336c3 +0x311:  mov    %edx,0x14(%eax)
081336c6 +0x314:  mov    0x8(%ebp),%eax
081336c9 +0x317:  mov    (%eax),%eax
081336cb +0x319:  movb   $0x1,0xcc(%eax)
081336d2 +0x320:  movl   $0x2,-0x14(%ebp)
081336d9 +0x327:  mov    0x10(%ebp),%eax
081336dc +0x32a:  cmp    $0x1,%eax
081336df +0x32d:  je     081336ea <+0x338>
081336e1 +0x32f:  movl   $0x2,-0x14(%ebp)
081336e8 +0x336:  jmp    081336f1 <+0x33f>
081336ea +0x338:  movl   $0x3,-0x14(%ebp)
081336f1 +0x33f:  cmpl   $0x0,-0x18(%ebp)
081336f5 +0x343:  jle    08133718 <+0x366>
081336f7 +0x345:  mov    -0x18(%ebp),%eax
081336fa +0x348:  mov    %eax,0xc(%esp)
081336fe +0x34c:  movl   $0x0,0x8(%esp)
08133706 +0x354:  mov    -0x14(%ebp),%eax
08133709 +0x357:  mov    %eax,0x4(%esp)
0813370d +0x35b:  mov    0xc(%ebp),%eax
08133710 +0x35e:  mov    %eax,(%esp)
08133713 +0x361:  call   08133d56 <_ZN12advancealtar10HistoryLog7starAddER5CUserNS_11AddStarType1TEii>  ; advancealtar::HistoryLog::starAdd(CUser&, advancealtar::AddStarType::T, int, int)
08133718 +0x366:  mov    $0x0,%eax
0813371d +0x36b:  leave
0813371e +0x36c:  ret
0813371f +0x36d:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::resetStar @ 0x81333b2

/* WARNING: Removing unreachable block (ram,0x081336ea) */
/* advancealtar::CharacAdvanceAltarManager::resetStar(CUser*, CMDPacketStruct::ResetStarType::T) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::resetStar
          (CharacAdvanceAltarManager *this,CUser *param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *pCVar4;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>> local_38 [4];
  int local_34;
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  local_30 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_2c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_28 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)this == 0)) {
    uVar2 = 2;
  }
  else if (param_3 == 0) {
    local_14 = G_CDataManager();
    local_14 = local_14 + 0x6334;
    local_34 = (int)*(short *)(*(int *)this + 0x1a);
    std::
    map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
    ::find((int *)local_38);
    local_10 = 0;
    std::
    map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
            operator==(local_38,(_Rb_tree_const_iterator *)local_30);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
              operator->(local_38);
      local_10 = *(int *)(iVar3 + 4);
    }
    else {
      iVar3 = G_CDataManager();
      local_10 = AdvanceAltarShopParameter::getMaxStarResetGoldFee
                           ((AdvanceAltarShopParameter *)(iVar3 + 0x631c));
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar3 = CInventory::get_money(pCVar4);
    if (iVar3 < local_10) {
      uVar2 = 3;
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::use_money(pCVar4,local_10,0x32,1);
      if (cVar1 == '\x01') {
        CUser::SendUpdateItemList(param_1,1,0,0);
        *(short *)(*(int *)this + 0x1a) = *(short *)(*(int *)this + 0x1a) + 1;
        setDefaultSlot(this);
        setDefaultBuyItem(this,0);
        setDefaultBuyItem(this,1);
        setDefaultBuyItem(this,2);
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::begin(local_2c);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_3c,(_Rb_tree_iterator *)local_2c);
        while( true ) {
          std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::end(local_24);
          std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
          _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_24);
          cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                  operator!=(local_3c,(_Rb_tree_const_iterator *)local_28);
          if (cVar1 == '\0') break;
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                  operator->(local_3c);
          if (*(int *)(iVar3 + 8) != -1) {
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,0,*(undefined4 *)(iVar3 + 4),0);
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,1,*(undefined4 *)(iVar3 + 4),0);
            iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
                    operator->(local_3c);
            setUnlockBuyItem(this,2,*(undefined4 *)(iVar3 + 4),0);
          }
          std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                    (local_20,(int)local_3c);
        }
        local_1c = (*(int *)(*(int *)this + 0xc) + *(int *)(*(int *)this + 0x10)) -
                   *(int *)(*(int *)this + 0x14);
        *(int *)(*(int *)this + 0x14) = *(int *)(*(int *)this + 0xc) + *(int *)(*(int *)this + 0x10)
        ;
        *(undefined1 *)(*(int *)this + 0xcc) = 1;
        local_18 = 2;
        if (0 < local_1c) {
          HistoryLog::starAdd(param_1,2,0,local_1c);
        }
        uVar2 = 0;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
```
