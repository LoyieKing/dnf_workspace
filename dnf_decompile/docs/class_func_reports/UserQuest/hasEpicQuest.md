# hasEpicQuest

`_ZN9UserQuest12hasEpicQuestEv`

`UserQuest::hasEpicQuest()`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ad266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad266  _ZN9UserQuest12hasEpicQuestEv
#           UserQuest::hasEpicQuest()
# range [0x086ad266, 0x086ad489]
086ad266 +0x000:  push   %ebp
086ad267 +0x001:  mov    %esp,%ebp
086ad269 +0x003:  push   %esi
086ad26a +0x004:  push   %ebx
086ad26b +0x005:  sub    $0x75a0,%esp
086ad271 +0x00b:  mov    0x8(%ebp),%eax
086ad274 +0x00e:  mov    (%eax),%eax
086ad276 +0x010:  test   %eax,%eax
086ad278 +0x012:  jne    086ad284 <+0x1e>
086ad27a +0x014:  mov    $0x0,%ebx
086ad27f +0x019:  jmp    086ad47d <+0x217>
086ad284 +0x01e:  lea    -0x24(%ebp),%eax
086ad287 +0x021:  mov    %eax,(%esp)
086ad28a +0x024:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
086ad28f +0x029:  mov    0x8(%ebp),%eax
086ad292 +0x02c:  mov    (%eax),%eax
086ad294 +0x02e:  mov    %eax,0x4(%esp)
086ad298 +0x032:  lea    -0x50(%ebp),%eax
086ad29b +0x035:  mov    %eax,(%esp)
086ad29e +0x038:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
086ad2a3 +0x03d:  mov    0x8(%ebp),%eax
086ad2a6 +0x040:  mov    (%eax),%eax
086ad2a8 +0x042:  mov    %eax,(%esp)
086ad2ab +0x045:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086ad2b0 +0x04a:  mov    %eax,%edx
086ad2b2 +0x04c:  lea    -0x7581(%ebp),%eax
086ad2b8 +0x052:  lea    0x4(%edx),%ecx
086ad2bb +0x055:  mov    $0x7531,%edx
086ad2c0 +0x05a:  mov    %edx,0x8(%esp)
086ad2c4 +0x05e:  mov    %ecx,0x4(%esp)
086ad2c8 +0x062:  mov    %eax,(%esp)
086ad2cb +0x065:  call   0807d8a0 <_init+0x198>
086ad2d0 +0x06a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad2d5 +0x06f:  mov    0x18(%eax),%eax
086ad2d8 +0x072:  movl   $0x0,0x4(%esp)
086ad2e0 +0x07a:  mov    %eax,(%esp)
086ad2e3 +0x07d:  call   08355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>  ; QuestList::getQuestNPCList(ENUM_QUEST_GRADE)
086ad2e8 +0x082:  mov    %eax,%ebx
086ad2ea +0x084:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad2ef +0x089:  mov    0x18(%eax),%eax
086ad2f2 +0x08c:  movl   $0x0,0x14(%esp)
086ad2fa +0x094:  lea    -0x7581(%ebp),%edx
086ad300 +0x09a:  mov    %edx,0x10(%esp)
086ad304 +0x09e:  lea    -0x50(%ebp),%edx
086ad307 +0x0a1:  mov    %edx,0xc(%esp)
086ad30b +0x0a5:  mov    %ebx,0x8(%esp)
086ad30f +0x0a9:  lea    -0x24(%ebp),%edx
086ad312 +0x0ac:  mov    %edx,0x4(%esp)
086ad316 +0x0b0:  mov    %eax,(%esp)
086ad319 +0x0b3:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
086ad31e +0x0b8:  lea    -0x24(%ebp),%eax
086ad321 +0x0bb:  mov    %eax,(%esp)
086ad324 +0x0be:  call   082373b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca60
086ad329 +0x0c3:  xor    $0x1,%eax
086ad32c +0x0c6:  test   %al,%al
086ad32e +0x0c8:  je     086ad428 <+0x1c2>
086ad334 +0x0ce:  movb   $0x0,-0x15(%ebp)
086ad338 +0x0d2:  lea    -0x28(%ebp),%eax
086ad33b +0x0d5:  lea    -0x24(%ebp),%edx
086ad33e +0x0d8:  mov    %edx,0x4(%esp)
086ad342 +0x0dc:  mov    %eax,(%esp)
086ad345 +0x0df:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
086ad34a +0x0e4:  sub    $0x4,%esp
086ad34d +0x0e7:  jmp    086ad3f9 <+0x193>
086ad352 +0x0ec:  lea    -0x28(%ebp),%eax
086ad355 +0x0ef:  mov    %eax,(%esp)
086ad358 +0x0f2:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
086ad35d +0x0f7:  mov    (%eax),%ebx
086ad35f +0x0f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ad364 +0x0fe:  mov    %ebx,0x4(%esp)
086ad368 +0x102:  mov    %eax,(%esp)
086ad36b +0x105:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ad370 +0x10a:  mov    %eax,-0x14(%ebp)
086ad373 +0x10d:  cmpl   $0x0,-0x14(%ebp)
086ad377 +0x111:  je     086ad3ea <+0x184>
086ad379 +0x113:  movb   $0x0,-0xd(%ebp)
086ad37d +0x117:  movl   $0x0,-0xc(%ebp)
086ad384 +0x11e:  jmp    086ad3b3 <+0x14d>
086ad386 +0x120:  mov    -0x14(%ebp),%eax
086ad389 +0x123:  lea    0x144(%eax),%edx
086ad38f +0x129:  mov    -0xc(%ebp),%eax
086ad392 +0x12c:  mov    %eax,0x4(%esp)
086ad396 +0x130:  mov    %edx,(%esp)
086ad399 +0x133:  call   086ad7f8 <_GLOBAL__I__ZN9UserQuest5resetEv+0x2a9>  ; global constructors keyed to UserQuest::reset()+0x2a9
086ad39e +0x138:  mov    (%eax),%eax
086ad3a0 +0x13a:  test   %eax,%eax
086ad3a2 +0x13c:  sete   %al
086ad3a5 +0x13f:  test   %al,%al
086ad3a7 +0x141:  je     086ad3af <+0x149>
086ad3a9 +0x143:  movb   $0x1,-0xd(%ebp)
086ad3ad +0x147:  jmp    086ad3cd <+0x167>
086ad3af +0x149:  addl   $0x1,-0xc(%ebp)
086ad3b3 +0x14d:  mov    -0x14(%ebp),%eax
086ad3b6 +0x150:  add    $0x144,%eax
086ad3bb +0x155:  mov    %eax,(%esp)
086ad3be +0x158:  call   083ad51e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x474ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0x474ea
086ad3c3 +0x15d:  cmp    -0xc(%ebp),%eax
086ad3c6 +0x160:  seta   %al
086ad3c9 +0x163:  test   %al,%al
086ad3cb +0x165:  jne    086ad386 <+0x120>
086ad3cd +0x167:  cmpb   $0x0,-0xd(%ebp)
086ad3d1 +0x16b:  jne    086ad3ed <+0x187>
086ad3d3 +0x16d:  mov    -0x50(%ebp),%edx
086ad3d6 +0x170:  mov    -0x14(%ebp),%eax
086ad3d9 +0x173:  mov    0x20(%eax),%eax
086ad3dc +0x176:  add    $0xc,%eax
086ad3df +0x179:  cmp    %eax,%edx
086ad3e1 +0x17b:  jge    086ad3ee <+0x188>
086ad3e3 +0x17d:  mov    $0x1,%ebx
086ad3e8 +0x182:  jmp    086ad447 <+0x1e1>
086ad3ea +0x184:  nop
086ad3eb +0x185:  jmp    086ad3ee <+0x188>
086ad3ed +0x187:  nop
086ad3ee +0x188:  lea    -0x28(%ebp),%eax
086ad3f1 +0x18b:  mov    %eax,(%esp)
086ad3f4 +0x18e:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
086ad3f9 +0x193:  lea    -0x1c(%ebp),%eax
086ad3fc +0x196:  lea    -0x24(%ebp),%edx
086ad3ff +0x199:  mov    %edx,0x4(%esp)
086ad403 +0x19d:  mov    %eax,(%esp)
086ad406 +0x1a0:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
086ad40b +0x1a5:  sub    $0x4,%esp
086ad40e +0x1a8:  lea    -0x1c(%ebp),%eax
086ad411 +0x1ab:  mov    %eax,0x4(%esp)
086ad415 +0x1af:  lea    -0x28(%ebp),%eax
086ad418 +0x1b2:  mov    %eax,(%esp)
086ad41b +0x1b5:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
086ad420 +0x1ba:  test   %al,%al
086ad422 +0x1bc:  jne    086ad352 <+0xec>
086ad428 +0x1c2:  mov    $0x0,%ebx
086ad42d +0x1c7:  jmp    086ad447 <+0x1e1>
086ad42f +0x1c9:  mov    %edx,%ebx
086ad431 +0x1cb:  mov    %eax,%esi
086ad433 +0x1cd:  lea    -0x7581(%ebp),%eax
086ad439 +0x1d3:  mov    %eax,(%esp)
086ad43c +0x1d6:  call   0822e4cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b76
086ad441 +0x1db:  mov    %esi,%eax
086ad443 +0x1dd:  mov    %ebx,%edx
086ad445 +0x1df:  jmp    086ad462 <+0x1fc>
086ad447 +0x1e1:  lea    -0x7581(%ebp),%eax
086ad44d +0x1e7:  mov    %eax,(%esp)
086ad450 +0x1ea:  call   0822e4cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3b76>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3b76
086ad455 +0x1ef:  lea    -0x24(%ebp),%eax
086ad458 +0x1f2:  mov    %eax,(%esp)
086ad45b +0x1f5:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
086ad460 +0x1fa:  jmp    086ad47d <+0x217>
086ad462 +0x1fc:  mov    %edx,%ebx
086ad464 +0x1fe:  mov    %eax,%esi
086ad466 +0x200:  lea    -0x24(%ebp),%eax
086ad469 +0x203:  mov    %eax,(%esp)
086ad46c +0x206:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
086ad471 +0x20b:  mov    %esi,%eax
086ad473 +0x20d:  mov    %ebx,%edx
086ad475 +0x20f:  mov    %eax,(%esp)
086ad478 +0x212:  call   08ae3750 <_Unwind_Resume>
086ad47d +0x217:  mov    %ebx,%eax
086ad47f +0x219:  lea    -0x8(%ebp),%esp
086ad482 +0x21c:  add    $0x0,%esp
086ad485 +0x21f:  pop    %ebx
086ad486 +0x220:  pop    %esi
086ad487 +0x221:  pop    %ebp
086ad488 +0x222:  ret
086ad489 +0x223:  nop
```

## 反编译 C

```c
// UserQuest::hasEpicQuest @ 0x86ad266

/* UserQuest::hasEpicQuest() */

undefined4 __thiscall UserQuest::hasEpicQuest(UserQuest *this)

{
  char cVar1;
  int iVar2;
  multimap *pmVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  CQuestClear local_7585 [30001];
  int local_54 [10];
  _List_iterator<int> local_2c [4];
  list<int,std::allocator<int>> local_28 [8];
  _List_iterator local_20 [7];
  undefined1 local_19;
  int local_18;
  char local_11;
  uint local_10;
  
  if (*(int *)this == 0) {
    uVar6 = 0;
  }
  else {
    std::list<int,std::allocator<int>>::list(local_28);
                    /* try { // try from 086ad29e to 086ad2a2 has its CatchHandler @ 086ad462 */
    stSelectQuestParam::stSelectQuestParam((stSelectQuestParam *)local_54,*(CUser **)this);
    iVar2 = CUser::getCurCharacQuestR(*(CUser **)this);
    memcpy(local_7585,(void *)(iVar2 + 4),0x7531);
                    /* try { // try from 086ad2d0 to 086ad40a has its CatchHandler @ 086ad42f */
    iVar2 = G_CDataManager();
    pmVar3 = (multimap *)QuestList::getQuestNPCList(*(QuestList **)(iVar2 + 0x18),0);
    iVar2 = G_CDataManager();
    QuestList::allowable_questlist_as_npc
              (*(QuestList **)(iVar2 + 0x18),(list *)local_28,pmVar3,(stSelectQuestParam *)local_54,
               local_7585,false);
    cVar1 = std::list<int,std::allocator<int>>::empty(local_28);
    if (cVar1 != '\x01') {
      local_19 = 0;
      std::list<int,std::allocator<int>>::begin();
      while( true ) {
        std::list<int,std::allocator<int>>::end();
        cVar1 = std::_List_iterator<int>::operator!=(local_2c,local_20);
        if (cVar1 == '\0') break;
        std::_List_iterator<int>::operator*(local_2c);
        iVar2 = G_CDataManager();
        local_18 = CDataManager::find_quest(iVar2);
        if (local_18 != 0) {
          local_11 = '\0';
          local_10 = 0;
          while (uVar5 = std::
                         vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                         ::size((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                                 *)(local_18 + 0x144)), local_10 < uVar5) {
            piVar4 = (int *)std::
                            vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                            ::operator[]((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                                          *)(local_18 + 0x144),local_10);
            if (*piVar4 == 0) {
              local_11 = '\x01';
              break;
            }
            local_10 = local_10 + 1;
          }
          if ((local_11 == '\0') && (local_54[0] < *(int *)(local_18 + 0x20) + 0xc)) {
            uVar6 = 1;
            goto LAB_086ad447;
          }
        }
        std::_List_iterator<int>::operator++(local_2c);
      }
    }
    uVar6 = 0;
LAB_086ad447:
    WongWork::CQuestClear::~CQuestClear(local_7585);
    std::list<int,std::allocator<int>>::~list(local_28);
  }
  return uVar6;
}
```
