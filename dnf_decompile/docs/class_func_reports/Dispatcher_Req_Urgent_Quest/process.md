# process

`_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Req_Urgent_Quest::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Req_Urgent_Quest` | `0x081df42c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df42c  _ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Req_Urgent_Quest::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081df42c, 0x081df759]
081df42c +0x000:  push   %ebp
081df42d +0x001:  mov    %esp,%ebp
081df42f +0x003:  push   %edi
081df430 +0x004:  push   %esi
081df431 +0x005:  push   %ebx
081df432 +0x006:  sub    $0x75ac,%esp
081df438 +0x00c:  mov    0xc(%ebp),%eax
081df43b +0x00f:  mov    %eax,(%esp)
081df43e +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081df443 +0x017:  cmp    $0x2,%eax
081df446 +0x01a:  setle  %al
081df449 +0x01d:  test   %al,%al
081df44b +0x01f:  je     081df457 <+0x2b>
081df44d +0x021:  mov    $0x0,%eax
081df452 +0x026:  jmp    081df74f <+0x323>
081df457 +0x02b:  mov    0x14(%ebp),%eax
081df45a +0x02e:  mov    %eax,-0x28(%ebp)
081df45d +0x031:  mov    -0x28(%ebp),%eax
081df460 +0x034:  movb   $0x0,0x4(%eax)
081df464 +0x038:  mov    -0x28(%ebp),%eax
081df467 +0x03b:  movl   $0xffffffff,0x8(%eax)
081df46e +0x042:  mov    0xc(%ebp),%eax
081df471 +0x045:  mov    %eax,(%esp)
081df474 +0x048:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081df479 +0x04d:  mov    %eax,-0x24(%ebp)
081df47c +0x050:  cmpl   $0x1a,-0x24(%ebp)
081df480 +0x054:  jle    081df4a5 <+0x79>
081df482 +0x056:  cmpl   $0x45,-0x24(%ebp)
081df486 +0x05a:  jg     081df4a5 <+0x79>
081df488 +0x05c:  mov    0xc(%ebp),%eax
081df48b +0x05f:  mov    %eax,(%esp)
081df48e +0x062:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
081df493 +0x067:  mov    0x75f0(%eax),%eax
081df499 +0x06d:  cmp    $0xffffffff,%eax
081df49c +0x070:  jne    081df4a5 <+0x79>
081df49e +0x072:  mov    $0x1,%eax
081df4a3 +0x077:  jmp    081df4aa <+0x7e>
081df4a5 +0x079:  mov    $0x0,%eax
081df4aa +0x07e:  test   %al,%al
081df4ac +0x080:  je     081df740 <+0x314>
081df4b2 +0x086:  mov    0xc(%ebp),%eax
081df4b5 +0x089:  mov    %eax,(%esp)
081df4b8 +0x08c:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081df4bd +0x091:  mov    %eax,(%esp)
081df4c0 +0x094:  call   086ad266 <_ZN9UserQuest12hasEpicQuestEv>  ; UserQuest::hasEpicQuest()
081df4c5 +0x099:  test   %al,%al
081df4c7 +0x09b:  je     081df4dd <+0xb1>
081df4c9 +0x09d:  mov    -0x28(%ebp),%eax
081df4cc +0x0a0:  movl   $0x1,0xc(%eax)
081df4d3 +0x0a7:  mov    $0x0,%eax
081df4d8 +0x0ac:  jmp    081df74f <+0x323>
081df4dd +0x0b1:  mov    $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,%eax
081df4e2 +0x0b6:  movzbl (%eax),%eax
081df4e5 +0x0b9:  test   %al,%al
081df4e7 +0x0bb:  jne    081df55a <+0x12e>
081df4e9 +0x0bd:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df4f0 +0x0c4:  call   08725330 <__cxa_guard_acquire>
081df4f5 +0x0c9:  test   %eax,%eax
081df4f7 +0x0cb:  setne  %al
081df4fa +0x0ce:  test   %al,%al
081df4fc +0x0d0:  je     081df55a <+0x12e>
081df4fe +0x0d2:  mov    $0x0,%ebx
081df503 +0x0d7:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df50a +0x0de:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
081df50f +0x0e3:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df516 +0x0ea:  call   08725250 <__cxa_guard_release>
081df51b +0x0ef:  mov    $&_ZNSt4listIiSaIiEED1Ev,%eax
081df520 +0x0f4:  movl   $&__dso_handle,0x8(%esp)
081df528 +0x0fc:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,0x4(%esp)
081df530 +0x104:  mov    %eax,(%esp)
081df533 +0x107:  call   0807ddd0 <_init+0x6c8>
081df538 +0x10c:  jmp    081df55a <+0x12e>
081df53a +0x10e:  mov    %edx,%esi
081df53c +0x110:  mov    %eax,%edi
081df53e +0x112:  test   %bl,%bl
081df540 +0x114:  jne    081df54e <+0x122>
081df542 +0x116:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df549 +0x11d:  call   087252c0 <__cxa_guard_abort>
081df54e +0x122:  mov    %edi,%eax
081df550 +0x124:  mov    %esi,%edx
081df552 +0x126:  mov    %eax,(%esp)
081df555 +0x129:  call   08ae3750 <_Unwind_Resume>
081df55a +0x12e:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df561 +0x135:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
081df566 +0x13a:  mov    0xc(%ebp),%eax
081df569 +0x13d:  mov    %eax,(%esp)
081df56c +0x140:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
081df571 +0x145:  mov    %eax,%edx
081df573 +0x147:  lea    -0x7589(%ebp),%eax
081df579 +0x14d:  lea    0x4(%edx),%ecx
081df57c +0x150:  mov    $0x7531,%edx
081df581 +0x155:  mov    %edx,0x8(%esp)
081df585 +0x159:  mov    %ecx,0x4(%esp)
081df589 +0x15d:  mov    %eax,(%esp)
081df58c +0x160:  call   0807d8a0 <_init+0x198>
081df591 +0x165:  mov    0xc(%ebp),%eax
081df594 +0x168:  mov    %eax,0x4(%esp)
081df598 +0x16c:  lea    -0x58(%ebp),%eax
081df59b +0x16f:  mov    %eax,(%esp)
081df59e +0x172:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
081df5a3 +0x177:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081df5a8 +0x17c:  mov    0x18(%eax),%eax
081df5ab +0x17f:  movl   $0x8,0x4(%esp)
081df5b3 +0x187:  mov    %eax,(%esp)
081df5b6 +0x18a:  call   08355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>  ; QuestList::getQuestNPCList(ENUM_QUEST_GRADE)
081df5bb +0x18f:  mov    %eax,%ebx
081df5bd +0x191:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081df5c2 +0x196:  mov    0x18(%eax),%eax
081df5c5 +0x199:  movl   $0x1,0x14(%esp)
081df5cd +0x1a1:  lea    -0x7589(%ebp),%edx
081df5d3 +0x1a7:  mov    %edx,0x10(%esp)
081df5d7 +0x1ab:  lea    -0x58(%ebp),%edx
081df5da +0x1ae:  mov    %edx,0xc(%esp)
081df5de +0x1b2:  mov    %ebx,0x8(%esp)
081df5e2 +0x1b6:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,0x4(%esp)
081df5ea +0x1be:  mov    %eax,(%esp)
081df5ed +0x1c1:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
081df5f2 +0x1c6:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df5f9 +0x1cd:  call   082373b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca60
081df5fe +0x1d2:  xor    $0x1,%eax
081df601 +0x1d5:  test   %al,%al
081df603 +0x1d7:  je     081df706 <+0x2da>
081df609 +0x1dd:  mov    $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,%eax
081df60e +0x1e2:  movzbl (%eax),%eax
081df611 +0x1e5:  test   %al,%al
081df613 +0x1e7:  jne    081df666 <+0x23a>
081df615 +0x1e9:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,(%esp)
081df61c +0x1f0:  call   08725330 <__cxa_guard_acquire>
081df621 +0x1f5:  test   %eax,%eax
081df623 +0x1f7:  setne  %al
081df626 +0x1fa:  test   %al,%al
081df628 +0x1fc:  je     081df666 <+0x23a>
081df62a +0x1fe:  mov    $0x0,%ebx
081df62f +0x203:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,(%esp)
081df636 +0x20a:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
081df63b +0x20f:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,(%esp)
081df642 +0x216:  call   08725250 <__cxa_guard_release>
081df647 +0x21b:  jmp    081df666 <+0x23a>
081df649 +0x21d:  mov    %edx,%esi
081df64b +0x21f:  mov    %eax,%edi
081df64d +0x221:  test   %bl,%bl
081df64f +0x223:  jne    081df65d <+0x231>
081df651 +0x225:  movl   $&_ZGVZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,(%esp)
081df658 +0x22c:  call   087252c0 <__cxa_guard_abort>
081df65d +0x231:  mov    %edi,%eax
081df65f +0x233:  mov    %esi,%edx
081df661 +0x235:  jmp    081df712 <+0x2e6>
081df666 +0x23a:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df66d +0x241:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
081df672 +0x246:  sub    $0x1,%eax
081df675 +0x249:  mov    %eax,-0x2c(%ebp)
081df678 +0x24c:  lea    -0x2c(%ebp),%eax
081df67b +0x24f:  mov    %eax,0x4(%esp)
081df67f +0x253:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE16urgentRandomDice,(%esp)
081df686 +0x25a:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081df68b +0x25f:  mov    %eax,-0x20(%ebp)
081df68e +0x262:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,(%esp)
081df695 +0x269:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
081df69a +0x26e:  cmp    -0x20(%ebp),%eax
081df69d +0x271:  seta   %al
081df6a0 +0x274:  test   %al,%al
081df6a2 +0x276:  je     081df730 <+0x304>
081df6a8 +0x27c:  lea    -0x30(%ebp),%eax
081df6ab +0x27f:  movl   $&_ZZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBaseE14selected_quest,0x4(%esp)
081df6b3 +0x287:  mov    %eax,(%esp)
081df6b6 +0x28a:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
081df6bb +0x28f:  sub    $0x4,%esp
081df6be +0x292:  mov    -0x20(%ebp),%eax
081df6c1 +0x295:  mov    %eax,0x4(%esp)
081df6c5 +0x299:  lea    -0x30(%ebp),%eax
081df6c8 +0x29c:  mov    %eax,(%esp)
081df6cb +0x29f:  call   082373ed <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca97>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca97
081df6d0 +0x2a4:  lea    -0x30(%ebp),%eax
081df6d3 +0x2a7:  mov    %eax,(%esp)
081df6d6 +0x2aa:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
081df6db +0x2af:  mov    (%eax),%eax
081df6dd +0x2b1:  mov    %eax,-0x1c(%ebp)
081df6e0 +0x2b4:  mov    0xc(%ebp),%eax
081df6e3 +0x2b7:  mov    %eax,(%esp)
081df6e6 +0x2ba:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081df6eb +0x2bf:  mov    -0x1c(%ebp),%edx
081df6ee +0x2c2:  mov    %edx,0x75f0(%eax)
081df6f4 +0x2c8:  mov    -0x28(%ebp),%eax
081df6f7 +0x2cb:  mov    -0x1c(%ebp),%edx
081df6fa +0x2ce:  mov    %edx,0x8(%eax)
081df6fd +0x2d1:  mov    -0x28(%ebp),%eax
081df700 +0x2d4:  movb   $0x1,0x4(%eax)
081df704 +0x2d8:  jmp    081df730 <+0x304>
081df706 +0x2da:  mov    -0x28(%ebp),%eax
081df709 +0x2dd:  movl   $0x4,0xc(%eax)
081df710 +0x2e4:  jmp    081df730 <+0x304>
081df712 +0x2e6:  mov    %edx,%ebx
081df714 +0x2e8:  mov    %eax,%esi
081df716 +0x2ea:  lea    -0x7589(%ebp),%eax
081df71c +0x2f0:  mov    %eax,(%esp)
081df71f +0x2f3:  call   0822e4cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b76
081df724 +0x2f8:  mov    %esi,%eax
081df726 +0x2fa:  mov    %ebx,%edx
081df728 +0x2fc:  mov    %eax,(%esp)
081df72b +0x2ff:  call   08ae3750 <_Unwind_Resume>
081df730 +0x304:  lea    -0x7589(%ebp),%eax
081df736 +0x30a:  mov    %eax,(%esp)
081df739 +0x30d:  call   0822e4cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b76
081df73e +0x312:  jmp    081df74a <+0x31e>
081df740 +0x314:  mov    -0x28(%ebp),%eax
081df743 +0x317:  movl   $0x1,0xc(%eax)
081df74a +0x31e:  mov    $0x0,%eax
081df74f +0x323:  lea    -0xc(%ebp),%esp
081df752 +0x326:  add    $0x0,%esp
081df755 +0x329:  pop    %ebx
081df756 +0x32a:  pop    %esi
081df757 +0x32b:  pop    %edi
081df758 +0x32c:  pop    %ebp
081df759 +0x32d:  ret
```

## 反编译 C

```c
// Dispatcher_Req_Urgent_Quest::process @ 0x81df42c

/* Dispatcher_Req_Urgent_Quest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Req_Urgent_Quest::process
          (Dispatcher_Req_Urgent_Quest *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UserQuest *this_00;
  multimap *pmVar4;
  uint uVar5;
  undefined4 *puVar6;
  CQuestClear local_758d [30001];
  stSelectQuestParam local_5c [40];
  _List_iterator local_34 [4];
  ulong local_30;
  ParamBase *local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    local_2c = param_3;
    param_3[4] = (ParamBase)0x0;
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    local_28 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (((local_28 < 0x1b) || (0x45 < local_28)) ||
       (iVar3 = CUser::getCurCharacQuestR(param_1), *(int *)(iVar3 + 0x75f0) != -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      this_00 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
      cVar2 = UserQuest::hasEpicQuest(this_00);
      if (cVar2 == '\0') {
        if ((process(CUser*,MSG_BASE&,ParamBase&)::selected_quest == '\0') &&
           (iVar3 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest),
           iVar3 != 0)) {
                    /* try { // try from 081df50a to 081df50e has its CatchHandler @ 081df53a */
          std::list<int,std::allocator<int>>::list
                    ((list<int,std::allocator<int>> *)
                     &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
          __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
          __cxa_atexit(std::list<int,std::allocator<int>>::~list,
                       &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest,&__dso_handle);
        }
        std::list<int,std::allocator<int>>::clear
                  ((list<int,std::allocator<int>> *)
                   &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
        iVar3 = CUser::getCurCharacQuestR(param_1);
        memcpy(local_758d,(void *)(iVar3 + 4),0x7531);
                    /* try { // try from 081df59e to 081df5f1 has its CatchHandler @ 081df712 */
        stSelectQuestParam::stSelectQuestParam(local_5c,param_1);
        iVar3 = G_CDataManager();
        pmVar4 = (multimap *)QuestList::getQuestNPCList(*(QuestList **)(iVar3 + 0x18),8);
        iVar3 = G_CDataManager();
        QuestList::allowable_questlist_as_npc
                  (*(QuestList **)(iVar3 + 0x18),
                   (list *)&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest,pmVar4,local_5c,
                   local_758d,true);
        cVar2 = std::list<int,std::allocator<int>>::empty
                          ((list<int,std::allocator<int>> *)
                           &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
        if (cVar2 == '\x01') {
          *(undefined4 *)(local_2c + 0xc) = 4;
        }
        else {
          if ((process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice == '\0') &&
             (iVar3 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice),
             iVar3 != 0)) {
                    /* try { // try from 081df636 to 081df63a has its CatchHandler @ 081df649 */
            CMTRand::CMTRand((CMTRand *)process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice);
            __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice);
          }
                    /* try { // try from 081df66d to 081df6cf has its CatchHandler @ 081df712 */
          iVar3 = std::list<int,std::allocator<int>>::size();
          local_30 = iVar3 - 1;
          local_24 = CMTRand::randInt((CMTRand *)
                                      process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice,
                                      &local_30);
          uVar5 = std::list<int,std::allocator<int>>::size();
          if (local_24 < uVar5) {
            std::list<int,std::allocator<int>>::begin();
            std::advance<std::_List_iterator<int>,unsigned_int>(local_34,local_24);
            puVar6 = (undefined4 *)
                     std::_List_iterator<int>::operator*((_List_iterator<int> *)local_34);
            local_20 = *puVar6;
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 0x75f0) = local_20;
            *(undefined4 *)(local_2c + 8) = local_20;
            local_2c[4] = (ParamBase)0x1;
          }
        }
        WongWork::CQuestClear::~CQuestClear(local_758d);
      }
      else {
        *(undefined4 *)(local_2c + 0xc) = 1;
      }
    }
    else {
      *(undefined4 *)(local_2c + 0xc) = 1;
    }
  }
  return 0;
}
```
