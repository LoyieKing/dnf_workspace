# clearEpicQuest

`_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser`

`ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest(CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter` | `0x081993c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081993c4  _ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser
#           ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest(CUser*)
# range [0x081993c4, 0x0819973d]
081993c4 +0x000:  push   %ebp
081993c5 +0x001:  mov    %esp,%ebp
081993c7 +0x003:  push   %ebx
081993c8 +0x004:  sub    $0x74,%esp
081993cb +0x007:  movb   $0x0,-0x29(%ebp)
081993cf +0x00b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081993d4 +0x010:  mov    0x18(%eax),%eax
081993d7 +0x013:  movl   $0x0,0x4(%esp)
081993df +0x01b:  mov    %eax,(%esp)
081993e2 +0x01e:  call   08355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>  ; QuestList::getQuestNPCList(ENUM_QUEST_GRADE)
081993e7 +0x023:  mov    %eax,-0x28(%ebp)
081993ea +0x026:  cmpl   $0x0,-0x28(%ebp)
081993ee +0x02a:  jne    081993f9 <+0x35>
081993f0 +0x02c:  movzbl -0x29(%ebp),%eax
081993f4 +0x030:  jmp    08199739 <+0x375>
081993f9 +0x035:  movl   $0x0,-0x24(%ebp)
08199400 +0x03c:  mov    0xc(%ebp),%eax
08199403 +0x03f:  mov    %eax,(%esp)
08199406 +0x042:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0819940b +0x047:  mov    %eax,-0x20(%ebp)
0819940e +0x04a:  movl   $0x0,-0x1c(%ebp)
08199415 +0x051:  jmp    08199564 <+0x1a0>
0819941a +0x056:  mov    0xc(%ebp),%eax
0819941d +0x059:  mov    %eax,(%esp)
08199420 +0x05c:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08199425 +0x061:  mov    -0x1c(%ebp),%edx
08199428 +0x064:  add    $0x1d4c,%edx
0819942e +0x06a:  mov    0x8(%eax,%edx,4),%eax
08199432 +0x06e:  test   %eax,%eax
08199434 +0x070:  sete   %al
08199437 +0x073:  test   %al,%al
08199439 +0x075:  jne    08199559 <+0x195>
0819943f +0x07b:  mov    0xc(%ebp),%eax
08199442 +0x07e:  mov    %eax,(%esp)
08199445 +0x081:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0819944a +0x086:  mov    -0x1c(%ebp),%edx
0819944d +0x089:  add    $0x1d4c,%edx
08199453 +0x08f:  mov    0x8(%eax,%edx,4),%ebx
08199457 +0x093:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819945c +0x098:  mov    %ebx,0x4(%esp)
08199460 +0x09c:  mov    %eax,(%esp)
08199463 +0x09f:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
08199468 +0x0a4:  mov    %eax,-0x18(%ebp)
0819946b +0x0a7:  cmpl   $0x0,-0x18(%ebp)
0819946f +0x0ab:  je     0819955c <+0x198>
08199475 +0x0b1:  mov    -0x18(%ebp),%eax
08199478 +0x0b4:  mov    0x8(%eax),%eax
0819947b +0x0b7:  test   %eax,%eax
0819947d +0x0b9:  jne    0819955f <+0x19b>
08199483 +0x0bf:  movl   $0x0,-0x34(%ebp)
0819948a +0x0c6:  movl   $0x0,-0x38(%ebp)
08199491 +0x0cd:  movl   $0x0,-0x3c(%ebp)
08199498 +0x0d4:  mov    -0x18(%ebp),%eax
0819949b +0x0d7:  mov    0x20(%eax),%eax
0819949e +0x0da:  mov    %eax,-0x14(%ebp)
081994a1 +0x0dd:  mov    -0x14(%ebp),%eax
081994a4 +0x0e0:  cmp    -0x20(%ebp),%eax
081994a7 +0x0e3:  jge    08199560 <+0x19c>
081994ad +0x0e9:  mov    0xc(%ebp),%eax
081994b0 +0x0ec:  mov    %eax,(%esp)
081994b3 +0x0ef:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
081994b8 +0x0f4:  mov    -0x1c(%ebp),%edx
081994bb +0x0f7:  add    $0x1d4c,%edx
081994c1 +0x0fd:  mov    0x8(%eax,%edx,4),%eax
081994c5 +0x101:  mov    %eax,%ebx
081994c7 +0x103:  mov    0xc(%ebp),%eax
081994ca +0x106:  mov    %eax,(%esp)
081994cd +0x109:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081994d2 +0x10e:  add    $0x4,%eax
081994d5 +0x111:  mov    %ebx,0x4(%esp)
081994d9 +0x115:  mov    %eax,(%esp)
081994dc +0x118:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
081994e1 +0x11d:  mov    0xc(%ebp),%eax
081994e4 +0x120:  mov    %eax,(%esp)
081994e7 +0x123:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081994ec +0x128:  mov    -0x1c(%ebp),%edx
081994ef +0x12b:  add    $0x1d4c,%edx
081994f5 +0x131:  movl   $0x0,0x8(%eax,%edx,4)
081994fd +0x139:  mov    0xc(%ebp),%eax
08199500 +0x13c:  mov    %eax,(%esp)
08199503 +0x13f:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08199508 +0x144:  mov    -0x1c(%ebp),%edx
0819950b +0x147:  add    $0x1d60,%edx
08199511 +0x14d:  movl   $0x0,0x8(%eax,%edx,4)
08199519 +0x155:  movl   $0x1,0x18(%esp)
08199521 +0x15d:  lea    -0x40(%ebp),%eax
08199524 +0x160:  mov    %eax,0x14(%esp)
08199528 +0x164:  lea    -0x3c(%ebp),%eax
0819952b +0x167:  mov    %eax,0x10(%esp)
0819952f +0x16b:  lea    -0x38(%ebp),%eax
08199532 +0x16e:  mov    %eax,0xc(%esp)
08199536 +0x172:  lea    -0x34(%ebp),%eax
08199539 +0x175:  mov    %eax,0x8(%esp)
0819953d +0x179:  mov    -0x18(%ebp),%eax
08199540 +0x17c:  mov    %eax,0x4(%esp)
08199544 +0x180:  mov    0xc(%ebp),%eax
08199547 +0x183:  mov    %eax,(%esp)
0819954a +0x186:  call   0866e7a8 <_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b>  ; CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool)
0819954f +0x18b:  movb   $0x1,-0x29(%ebp)
08199553 +0x18f:  addl   $0x1,-0x24(%ebp)
08199557 +0x193:  jmp    08199560 <+0x19c>
08199559 +0x195:  nop
0819955a +0x196:  jmp    08199560 <+0x19c>
0819955c +0x198:  nop
0819955d +0x199:  jmp    08199560 <+0x19c>
0819955f +0x19b:  nop
08199560 +0x19c:  addl   $0x1,-0x1c(%ebp)
08199564 +0x1a0:  cmpl   $0x13,-0x1c(%ebp)
08199568 +0x1a4:  setle  %al
0819956b +0x1a7:  test   %al,%al
0819956d +0x1a9:  jne    0819941a <+0x56>
08199573 +0x1af:  lea    -0x30(%ebp),%eax
08199576 +0x1b2:  mov    -0x28(%ebp),%edx
08199579 +0x1b5:  mov    %edx,0x4(%esp)
0819957d +0x1b9:  mov    %eax,(%esp)
08199580 +0x1bc:  call   0819afa4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xc8a>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xc8a
08199585 +0x1c1:  sub    $0x4,%esp
08199588 +0x1c4:  lea    -0x44(%ebp),%eax
0819958b +0x1c7:  mov    -0x28(%ebp),%edx
0819958e +0x1ca:  mov    %edx,0x4(%esp)
08199592 +0x1ce:  mov    %eax,(%esp)
08199595 +0x1d1:  call   0819afca <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcb0>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcb0
0819959a +0x1d6:  sub    $0x4,%esp
0819959d +0x1d9:  jmp    0819971b <+0x357>
081995a2 +0x1de:  lea    -0x44(%ebp),%eax
081995a5 +0x1e1:  mov    %eax,(%esp)
081995a8 +0x1e4:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
081995ad +0x1e9:  mov    0x4(%eax),%ebx
081995b0 +0x1ec:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081995b5 +0x1f1:  mov    %ebx,0x4(%esp)
081995b9 +0x1f5:  mov    %eax,(%esp)
081995bc +0x1f8:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
081995c1 +0x1fd:  mov    %eax,-0x10(%ebp)
081995c4 +0x200:  cmpl   $0x0,-0x10(%ebp)
081995c8 +0x204:  je     081996fd <+0x339>
081995ce +0x20a:  mov    -0x10(%ebp),%eax
081995d1 +0x20d:  mov    0x4(%eax),%eax
081995d4 +0x210:  cmp    $0xe04,%eax
081995d9 +0x215:  je     08199700 <+0x33c>
081995df +0x21b:  mov    -0x10(%ebp),%eax
081995e2 +0x21e:  mov    0x4(%eax),%eax
081995e5 +0x221:  cmp    $0xe05,%eax
081995ea +0x226:  je     08199703 <+0x33f>
081995f0 +0x22c:  mov    -0x10(%ebp),%eax
081995f3 +0x22f:  mov    0x4(%eax),%eax
081995f6 +0x232:  cmp    $0xe06,%eax
081995fb +0x237:  je     08199706 <+0x342>
08199601 +0x23d:  mov    -0x10(%ebp),%eax
08199604 +0x240:  mov    0x4(%eax),%eax
08199607 +0x243:  cmp    $0xe07,%eax
0819960c +0x248:  je     08199709 <+0x345>
08199612 +0x24e:  mov    -0x10(%ebp),%eax
08199615 +0x251:  mov    0x4(%eax),%eax
08199618 +0x254:  cmp    $0xe08,%eax
0819961d +0x259:  je     0819970c <+0x348>
08199623 +0x25f:  mov    0xc(%ebp),%eax
08199626 +0x262:  mov    %eax,(%esp)
08199629 +0x265:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0819962e +0x26a:  mov    %eax,0x4(%esp)
08199632 +0x26e:  mov    -0x10(%ebp),%eax
08199635 +0x271:  mov    %eax,(%esp)
08199638 +0x274:  call   08352a5c <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB>  ; Quest::checkPossibleJob(ENUM_CHARACTERJOB) const
0819963d +0x279:  xor    $0x1,%eax
08199640 +0x27c:  test   %al,%al
08199642 +0x27e:  jne    0819970f <+0x34b>
08199648 +0x284:  movl   $0x0,-0x48(%ebp)
0819964f +0x28b:  movl   $0x0,-0x4c(%ebp)
08199656 +0x292:  movl   $0x0,-0x50(%ebp)
0819965d +0x299:  mov    -0x10(%ebp),%eax
08199660 +0x29c:  mov    0x20(%eax),%eax
08199663 +0x29f:  mov    %eax,-0xc(%ebp)
08199666 +0x2a2:  mov    -0xc(%ebp),%eax
08199669 +0x2a5:  cmp    -0x20(%ebp),%eax
0819966c +0x2a8:  jge    08199710 <+0x34c>
08199672 +0x2ae:  mov    -0x10(%ebp),%eax
08199675 +0x2b1:  mov    0x4(%eax),%eax
08199678 +0x2b4:  mov    %eax,%ebx
0819967a +0x2b6:  mov    0xc(%ebp),%eax
0819967d +0x2b9:  mov    %eax,(%esp)
08199680 +0x2bc:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
08199685 +0x2c1:  add    $0x4,%eax
08199688 +0x2c4:  mov    %ebx,0x4(%esp)
0819968c +0x2c8:  mov    %eax,(%esp)
0819968f +0x2cb:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
08199694 +0x2d0:  xor    $0x1,%eax
08199697 +0x2d3:  test   %al,%al
08199699 +0x2d5:  je     08199710 <+0x34c>
0819969b +0x2d7:  mov    -0x10(%ebp),%eax
0819969e +0x2da:  mov    0x4(%eax),%eax
081996a1 +0x2dd:  mov    %eax,%ebx
081996a3 +0x2df:  mov    0xc(%ebp),%eax
081996a6 +0x2e2:  mov    %eax,(%esp)
081996a9 +0x2e5:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081996ae +0x2ea:  add    $0x4,%eax
081996b1 +0x2ed:  mov    %ebx,0x4(%esp)
081996b5 +0x2f1:  mov    %eax,(%esp)
081996b8 +0x2f4:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
081996bd +0x2f9:  movl   $0x1,0x18(%esp)
081996c5 +0x301:  lea    -0x54(%ebp),%eax
081996c8 +0x304:  mov    %eax,0x14(%esp)
081996cc +0x308:  lea    -0x50(%ebp),%eax
081996cf +0x30b:  mov    %eax,0x10(%esp)
081996d3 +0x30f:  lea    -0x4c(%ebp),%eax
081996d6 +0x312:  mov    %eax,0xc(%esp)
081996da +0x316:  lea    -0x48(%ebp),%eax
081996dd +0x319:  mov    %eax,0x8(%esp)
081996e1 +0x31d:  mov    -0x10(%ebp),%eax
081996e4 +0x320:  mov    %eax,0x4(%esp)
081996e8 +0x324:  mov    0xc(%ebp),%eax
081996eb +0x327:  mov    %eax,(%esp)
081996ee +0x32a:  call   0866e7a8 <_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b>  ; CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool)
081996f3 +0x32f:  movb   $0x1,-0x29(%ebp)
081996f7 +0x333:  addl   $0x1,-0x24(%ebp)
081996fb +0x337:  jmp    08199710 <+0x34c>
081996fd +0x339:  nop
081996fe +0x33a:  jmp    08199710 <+0x34c>
08199700 +0x33c:  nop
08199701 +0x33d:  jmp    08199710 <+0x34c>
08199703 +0x33f:  nop
08199704 +0x340:  jmp    08199710 <+0x34c>
08199706 +0x342:  nop
08199707 +0x343:  jmp    08199710 <+0x34c>
08199709 +0x345:  nop
0819970a +0x346:  jmp    08199710 <+0x34c>
0819970c +0x348:  nop
0819970d +0x349:  jmp    08199710 <+0x34c>
0819970f +0x34b:  nop
08199710 +0x34c:  lea    -0x44(%ebp),%eax
08199713 +0x34f:  mov    %eax,(%esp)
08199716 +0x352:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
0819971b +0x357:  lea    -0x30(%ebp),%eax
0819971e +0x35a:  mov    %eax,0x4(%esp)
08199722 +0x35e:  lea    -0x44(%ebp),%eax
08199725 +0x361:  mov    %eax,(%esp)
08199728 +0x364:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
0819972d +0x369:  test   %al,%al
0819972f +0x36b:  jne    081995a2 <+0x1de>
08199735 +0x371:  movzbl -0x29(%ebp),%eax
08199739 +0x375:  mov    -0x4(%ebp),%ebx
0819973c +0x378:  leave
0819973d +0x379:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest @ 0x81993c4

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest(CUser*) */

undefined1 __thiscall
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest
          (Arad_INTER_kAradJumpingCharacter *this,CUser *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_58 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_48 [4];
  int local_44 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [7];
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  Quest *local_1c;
  int local_18;
  Quest *local_14;
  int local_10;
  
  local_2d = 0;
  iVar3 = G_CDataManager();
  local_2c = QuestList::getQuestNPCList(*(QuestList **)(iVar3 + 0x18),0);
  if (local_2c != 0) {
    local_28 = 0;
    local_24 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    for (local_20 = 0; local_20 < 0x14; local_20 = local_20 + 1) {
      iVar3 = CUser::getCurCharacQuestW(param_1);
      if (*(int *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4) != 0) {
        CUser::getCurCharacQuestR(param_1);
        iVar3 = G_CDataManager();
        local_1c = (Quest *)CDataManager::find_quest(iVar3);
        if ((local_1c != (Quest *)0x0) && (*(int *)(local_1c + 8) == 0)) {
          local_44[3] = 0;
          local_44[2] = 0;
          local_44[1] = 0;
          local_18 = *(int *)(local_1c + 0x20);
          if (local_18 < local_24) {
            iVar3 = CUser::getCurCharacQuestR(param_1);
            uVar1 = *(uint *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4) = 0;
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 8 + (local_20 + 0x1d60) * 4) = 0;
            CUser::quest_basic_reward
                      (param_1,local_1c,local_44 + 3,local_44 + 2,local_44 + 1,local_44,true);
            local_2d = 1;
            local_28 = local_28 + 1;
          }
        }
      }
    }
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_48);
    while (cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48,
                              (_Rb_tree_const_iterator *)local_34), cVar2 != '\0') {
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48);
      iVar3 = G_CDataManager();
      local_14 = (Quest *)CDataManager::find_quest(iVar3);
      if ((((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 4) != 0xe04)) &&
          (*(int *)(local_14 + 4) != 0xe05)) &&
         (((*(int *)(local_14 + 4) != 0xe06 && (*(int *)(local_14 + 4) != 0xe07)) &&
          (*(int *)(local_14 + 4) != 0xe08)))) {
        uVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        cVar2 = Quest::checkPossibleJob(local_14,uVar4);
        if (cVar2 == '\x01') {
          local_58[3] = 0;
          local_58[2] = 0;
          local_58[1] = 0;
          local_10 = *(int *)(local_14 + 0x20);
          if (local_10 < local_24) {
            uVar1 = *(uint *)(local_14 + 4);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
            if (cVar2 != '\x01') {
              uVar1 = *(uint *)(local_14 + 4);
              iVar3 = CUser::getCurCharacQuestW(param_1);
              WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
              CUser::quest_basic_reward
                        (param_1,local_14,local_58 + 3,local_58 + 2,local_58 + 1,local_58,true);
              local_2d = 1;
              local_28 = local_28 + 1;
            }
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48);
    }
  }
  return local_2d;
}
```
