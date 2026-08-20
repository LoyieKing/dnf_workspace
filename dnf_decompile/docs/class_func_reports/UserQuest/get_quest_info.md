# get_quest_info

`_ZNK9UserQuest14get_quest_infoEPc`

`UserQuest::get_quest_info(char*) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086abba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086abba8  _ZNK9UserQuest14get_quest_infoEPc
#           UserQuest::get_quest_info(char*) const
# range [0x086abba8, 0x086abd79]
086abba8 +0x000:  push   %ebp
086abba9 +0x001:  mov    %esp,%ebp
086abbab +0x003:  push   %esi
086abbac +0x004:  push   %ebx
086abbad +0x005:  sub    $0x60,%esp
086abbb0 +0x008:  mov    0x8(%ebp),%eax
086abbb3 +0x00b:  mov    (%eax),%eax
086abbb5 +0x00d:  mov    %eax,0x4(%esp)
086abbb9 +0x011:  lea    -0x54(%ebp),%eax
086abbbc +0x014:  mov    %eax,(%esp)
086abbbf +0x017:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
086abbc4 +0x01c:  mov    0xc(%ebp),%eax
086abbc7 +0x01f:  mov    %eax,-0x14(%ebp)
086abbca +0x022:  mov    -0x14(%ebp),%eax
086abbcd +0x025:  movl   $0x15,0x8(%esp)
086abbd5 +0x02d:  movl   $0x0,0x4(%esp)
086abbdd +0x035:  mov    %eax,(%esp)
086abbe0 +0x038:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086abbe5 +0x03d:  lea    -0x24(%ebp),%eax
086abbe8 +0x040:  mov    %eax,(%esp)
086abbeb +0x043:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
086abbf0 +0x048:  mov    0x8(%ebp),%eax
086abbf3 +0x04b:  lea    0x4(%eax),%ebx
086abbf6 +0x04e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086abbfb +0x053:  mov    0x18(%eax),%eax
086abbfe +0x056:  mov    %ebx,0xc(%esp)
086abc02 +0x05a:  lea    -0x54(%ebp),%edx
086abc05 +0x05d:  mov    %edx,0x8(%esp)
086abc09 +0x061:  lea    -0x24(%ebp),%edx
086abc0c +0x064:  mov    %edx,0x4(%esp)
086abc10 +0x068:  mov    %eax,(%esp)
086abc13 +0x06b:  call   08355726 <_ZN9QuestList12select_questERSt4listIiSaIiEER18stSelectQuestParamRKN8WongWork11CQuestClearE>  ; QuestList::select_quest(std::list<int, std::allocator<int> >&, stSelectQuestParam&, WongWork::CQuestClear const&)
086abc18 +0x070:  mov    -0x30(%ebp),%eax
086abc1b +0x073:  cmp    $0xffffffff,%eax
086abc1e +0x076:  je     086abc35 <+0x8d>
086abc20 +0x078:  lea    -0x54(%ebp),%eax
086abc23 +0x07b:  add    $0x24,%eax
086abc26 +0x07e:  mov    %eax,0x4(%esp)
086abc2a +0x082:  lea    -0x24(%ebp),%eax
086abc2d +0x085:  mov    %eax,(%esp)
086abc30 +0x088:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
086abc35 +0x08d:  mov    0x8(%ebp),%eax
086abc38 +0x090:  mov    (%eax),%eax
086abc3a +0x092:  mov    %eax,(%esp)
086abc3d +0x095:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086abc42 +0x09a:  mov    -0x14(%ebp),%edx
086abc45 +0x09d:  mov    %eax,0x4(%esp)
086abc49 +0x0a1:  mov    %edx,(%esp)
086abc4c +0x0a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086abc51 +0x0a9:  mov    -0x14(%ebp),%eax
086abc54 +0x0ac:  mov    %eax,(%esp)
086abc57 +0x0af:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086abc5c +0x0b4:  mov    %eax,-0x28(%ebp)
086abc5f +0x0b7:  movl   $0x0,-0x10(%ebp)
086abc66 +0x0be:  mov    -0x14(%ebp),%eax
086abc69 +0x0c1:  mov    -0x10(%ebp),%edx
086abc6c +0x0c4:  mov    %edx,0x4(%esp)
086abc70 +0x0c8:  mov    %eax,(%esp)
086abc73 +0x0cb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086abc78 +0x0d0:  lea    -0x2c(%ebp),%eax
086abc7b +0x0d3:  lea    -0x24(%ebp),%edx
086abc7e +0x0d6:  mov    %edx,0x4(%esp)
086abc82 +0x0da:  mov    %eax,(%esp)
086abc85 +0x0dd:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
086abc8a +0x0e2:  sub    $0x4,%esp
086abc8d +0x0e5:  jmp    086abced <+0x145>
086abc8f +0x0e7:  lea    -0x2c(%ebp),%eax
086abc92 +0x0ea:  mov    %eax,(%esp)
086abc95 +0x0ed:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
086abc9a +0x0f2:  mov    (%eax),%eax
086abc9c +0x0f4:  mov    %eax,-0xc(%ebp)
086abc9f +0x0f7:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
086abca4 +0x0fc:  mov    -0xc(%ebp),%edx
086abca7 +0x0ff:  mov    %edx,0x4(%esp)
086abcab +0x103:  mov    %eax,(%esp)
086abcae +0x106:  call   08234e46 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa4f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa4f0
086abcb3 +0x10b:  test   %al,%al
086abcb5 +0x10d:  jne    086abccf <+0x127>
086abcb7 +0x10f:  addl   $0x1,-0x10(%ebp)
086abcbb +0x113:  mov    -0x14(%ebp),%eax
086abcbe +0x116:  mov    -0xc(%ebp),%edx
086abcc1 +0x119:  mov    %edx,0x4(%esp)
086abcc5 +0x11d:  mov    %eax,(%esp)
086abcc8 +0x120:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086abccd +0x125:  jmp    086abcd0 <+0x128>
086abccf +0x127:  nop
086abcd0 +0x128:  lea    -0x18(%ebp),%eax
086abcd3 +0x12b:  movl   $0x0,0x8(%esp)
086abcdb +0x133:  lea    -0x2c(%ebp),%edx
086abcde +0x136:  mov    %edx,0x4(%esp)
086abce2 +0x13a:  mov    %eax,(%esp)
086abce5 +0x13d:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
086abcea +0x142:  sub    $0x4,%esp
086abced +0x145:  lea    -0x1c(%ebp),%eax
086abcf0 +0x148:  lea    -0x24(%ebp),%edx
086abcf3 +0x14b:  mov    %edx,0x4(%esp)
086abcf7 +0x14f:  mov    %eax,(%esp)
086abcfa +0x152:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
086abcff +0x157:  sub    $0x4,%esp
086abd02 +0x15a:  lea    -0x1c(%ebp),%eax
086abd05 +0x15d:  mov    %eax,0x4(%esp)
086abd09 +0x161:  lea    -0x2c(%ebp),%eax
086abd0c +0x164:  mov    %eax,(%esp)
086abd0f +0x167:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
086abd14 +0x16c:  test   %al,%al
086abd16 +0x16e:  jne    086abc8f <+0xe7>
086abd1c +0x174:  mov    -0x14(%ebp),%eax
086abd1f +0x177:  mov    -0x10(%ebp),%edx
086abd22 +0x17a:  mov    %edx,0x8(%esp)
086abd26 +0x17e:  lea    -0x28(%ebp),%edx
086abd29 +0x181:  mov    %edx,0x4(%esp)
086abd2d +0x185:  mov    %eax,(%esp)
086abd30 +0x188:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086abd35 +0x18d:  mov    -0x14(%ebp),%eax
086abd38 +0x190:  movl   $0x1,0x4(%esp)
086abd40 +0x198:  mov    %eax,(%esp)
086abd43 +0x19b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086abd48 +0x1a0:  jmp    086abd65 <+0x1bd>
086abd4a +0x1a2:  mov    %edx,%ebx
086abd4c +0x1a4:  mov    %eax,%esi
086abd4e +0x1a6:  lea    -0x24(%ebp),%eax
086abd51 +0x1a9:  mov    %eax,(%esp)
086abd54 +0x1ac:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
086abd59 +0x1b1:  mov    %esi,%eax
086abd5b +0x1b3:  mov    %ebx,%edx
086abd5d +0x1b5:  mov    %eax,(%esp)
086abd60 +0x1b8:  call   08ae3750 <_Unwind_Resume>
086abd65 +0x1bd:  lea    -0x24(%ebp),%eax
086abd68 +0x1c0:  mov    %eax,(%esp)
086abd6b +0x1c3:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
086abd70 +0x1c8:  lea    -0x8(%ebp),%esp
086abd73 +0x1cb:  add    $0x0,%esp
086abd76 +0x1ce:  pop    %ebx
086abd77 +0x1cf:  pop    %esi
086abd78 +0x1d0:  pop    %ebp
086abd79 +0x1d1:  ret
```

## 反编译 C

```c
// UserQuest::get_quest_info @ 0x86abba8

/* UserQuest::get_quest_info(char*) const */

void __thiscall UserQuest::get_quest_info(UserQuest *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  stSelectQuestParam local_58 [36];
  int local_34;
  _List_iterator<int> local_30 [4];
  int local_2c;
  list<int,std::allocator<int>> local_28 [8];
  _List_iterator local_20 [4];
  _List_iterator<int> local_1c [4];
  InterfacePacketBuf *local_18;
  int local_14;
  int local_10;
  
  stSelectQuestParam::stSelectQuestParam(local_58,*(CUser **)this);
  local_18 = (InterfacePacketBuf *)param_1;
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x15);
  std::list<int,std::allocator<int>>::list(local_28);
                    /* try { // try from 086abbf6 to 086abd47 has its CatchHandler @ 086abd4a */
  iVar2 = G_CDataManager();
  QuestList::select_quest
            (*(QuestList **)(iVar2 + 0x18),(list *)local_28,local_58,(CQuestClear *)(this + 4));
  if (local_34 != -1) {
    std::list<int,std::allocator<int>>::push_back(local_28,&local_34);
  }
  iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
  InterfacePacketBuf::put_byte(local_18,iVar2);
  local_2c = InterfacePacketBuf::get_index(local_18);
  local_14 = 0;
  InterfacePacketBuf::put_short(local_18,0);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_30,local_20);
    if (cVar1 == '\0') break;
    piVar3 = (int *)std::_List_iterator<int>::operator*(local_30);
    local_10 = *piVar3;
    cVar1 = CTimeGate::setBlindTimeGateStateQuest(GlobalData::s_timeGate_,local_10);
    if (cVar1 == '\0') {
      local_14 = local_14 + 1;
      InterfacePacketBuf::put_short(local_18,local_10);
    }
    std::_List_iterator<int>::operator++(local_1c,(int)local_30);
  }
  InterfacePacketBuf::put_short(local_18,&local_2c,local_14);
  InterfacePacketBuf::finalize(local_18,true);
  std::list<int,std::allocator<int>>::~list(local_28);
  return;
}
```
