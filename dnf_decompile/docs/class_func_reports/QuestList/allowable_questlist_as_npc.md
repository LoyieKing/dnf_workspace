# allowable_questlist_as_npc

`_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb`

`QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x0835556c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835556c  _ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb
#           QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
# range [0x0835556c, 0x08355725]
0835556c +0x000:  push   %ebp
0835556d +0x001:  mov    %esp,%ebp
0835556f +0x003:  sub    $0x58,%esp
08355572 +0x006:  mov    0x1c(%ebp),%eax
08355575 +0x009:  mov    %al,-0x3c(%ebp)
08355578 +0x00c:  lea    -0x20(%ebp),%eax
0835557b +0x00f:  mov    %eax,(%esp)
0835557e +0x012:  call   0838f320 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edc0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edc0
08355583 +0x017:  movl   $0x0,-0xc(%ebp)
0835558a +0x01e:  lea    -0x2c(%ebp),%eax
0835558d +0x021:  mov    %eax,(%esp)
08355590 +0x024:  call   08391c8a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2172a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2172a
08355595 +0x029:  mov    0x8(%ebp),%eax
08355598 +0x02c:  lea    0xe0(%eax),%edx
0835559e +0x032:  lea    -0x40(%ebp),%eax
083555a1 +0x035:  mov    %edx,0x4(%esp)
083555a5 +0x039:  mov    %eax,(%esp)
083555a8 +0x03c:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
083555ad +0x041:  sub    $0x4,%esp
083555b0 +0x044:  mov    -0x40(%ebp),%eax
083555b3 +0x047:  mov    %eax,-0x20(%ebp)
083555b6 +0x04a:  jmp    083556ee <+0x182>
083555bb +0x04f:  lea    -0x20(%ebp),%eax
083555be +0x052:  mov    %eax,(%esp)
083555c1 +0x055:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
083555c6 +0x05a:  mov    (%eax),%eax
083555c8 +0x05c:  mov    %eax,-0x24(%ebp)
083555cb +0x05f:  lea    -0x18(%ebp),%eax
083555ce +0x062:  lea    -0x24(%ebp),%edx
083555d1 +0x065:  mov    %edx,0x8(%esp)
083555d5 +0x069:  mov    0x10(%ebp),%edx
083555d8 +0x06c:  mov    %edx,0x4(%esp)
083555dc +0x070:  mov    %eax,(%esp)
083555df +0x073:  call   08391cac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2174c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2174c
083555e4 +0x078:  sub    $0x4,%esp
083555e7 +0x07b:  lea    -0x18(%ebp),%eax
083555ea +0x07e:  mov    %eax,0x4(%esp)
083555ee +0x082:  lea    -0x2c(%ebp),%eax
083555f1 +0x085:  mov    %eax,(%esp)
083555f4 +0x088:  call   08391cd8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21778>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21778
083555f9 +0x08d:  mov    -0x2c(%ebp),%eax
083555fc +0x090:  mov    %eax,-0x30(%ebp)
083555ff +0x093:  jmp    083556b4 <+0x148>
08355604 +0x098:  lea    -0x30(%ebp),%eax
08355607 +0x09b:  mov    %eax,(%esp)
0835560a +0x09e:  call   080c6f10 <_GLOBAL__I_g_ServerString_+0x47b>  ; global constructors keyed to g_ServerString_+0x47b
0835560f +0x0a3:  mov    0x4(%eax),%edx
08355612 +0x0a6:  mov    0x14(%ebp),%eax
08355615 +0x0a9:  mov    %edx,0x18(%eax)
08355618 +0x0ac:  mov    0x14(%ebp),%eax
0835561b +0x0af:  mov    0x18(%eax),%eax
0835561e +0x0b2:  mov    %eax,0x4(%esp)
08355622 +0x0b6:  mov    0x8(%ebp),%eax
08355625 +0x0b9:  mov    %eax,(%esp)
08355628 +0x0bc:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
0835562d +0x0c1:  mov    %eax,-0xc(%ebp)
08355630 +0x0c4:  cmpl   $0x0,-0xc(%ebp)
08355634 +0x0c8:  je     083556a2 <+0x136>
08355636 +0x0ca:  mov    0x18(%ebp),%eax
08355639 +0x0cd:  mov    %eax,0xc(%esp)
0835563d +0x0d1:  mov    0x14(%ebp),%eax
08355640 +0x0d4:  mov    %eax,0x8(%esp)
08355644 +0x0d8:  mov    -0xc(%ebp),%eax
08355647 +0x0db:  mov    %eax,0x4(%esp)
0835564b +0x0df:  mov    0x8(%ebp),%eax
0835564e +0x0e2:  mov    %eax,(%esp)
08355651 +0x0e5:  call   08355474 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE>  ; QuestList::Check_Quest(Quest*, stSelectQuestParam&, WongWork::CQuestClear const&)
08355656 +0x0ea:  xor    $0x1,%eax
08355659 +0x0ed:  test   %al,%al
0835565b +0x0ef:  jne    083556a5 <+0x139>
0835565d +0x0f1:  movzbl -0x3c(%ebp),%eax
08355661 +0x0f5:  xor    $0x1,%eax
08355664 +0x0f8:  test   %al,%al
08355666 +0x0fa:  je     0835568b <+0x11f>
08355668 +0x0fc:  mov    0x14(%ebp),%eax
0835566b +0x0ff:  mov    0x18(%eax),%eax
0835566e +0x102:  mov    0x18(%ebp),%edx
08355671 +0x105:  mov    %edx,0x8(%esp)
08355675 +0x109:  mov    %eax,0x4(%esp)
08355679 +0x10d:  mov    0x8(%ebp),%eax
0835567c +0x110:  mov    %eax,(%esp)
0835567f +0x113:  call   08355284 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE>  ; QuestList::check_clear(int, WongWork::CQuestClear const&)
08355684 +0x118:  xor    $0x1,%eax
08355687 +0x11b:  test   %al,%al
08355689 +0x11d:  jne    083556a8 <+0x13c>
0835568b +0x11f:  mov    0x14(%ebp),%eax
0835568e +0x122:  add    $0x18,%eax
08355691 +0x125:  mov    %eax,0x4(%esp)
08355695 +0x129:  mov    0xc(%ebp),%eax
08355698 +0x12c:  mov    %eax,(%esp)
0835569b +0x12f:  call   0826cbae <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x147c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x147c
083556a0 +0x134:  jmp    083556a9 <+0x13d>
083556a2 +0x136:  nop
083556a3 +0x137:  jmp    083556a9 <+0x13d>
083556a5 +0x139:  nop
083556a6 +0x13a:  jmp    083556a9 <+0x13d>
083556a8 +0x13c:  nop
083556a9 +0x13d:  lea    -0x30(%ebp),%eax
083556ac +0x140:  mov    %eax,(%esp)
083556af +0x143:  call   08151f82 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18b7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18b7
083556b4 +0x148:  lea    -0x2c(%ebp),%eax
083556b7 +0x14b:  add    $0x4,%eax
083556ba +0x14e:  mov    %eax,0x4(%esp)
083556be +0x152:  lea    -0x30(%ebp),%eax
083556c1 +0x155:  mov    %eax,(%esp)
083556c4 +0x158:  call   080c6efc <_GLOBAL__I_g_ServerString_+0x467>  ; global constructors keyed to g_ServerString_+0x467
083556c9 +0x15d:  test   %al,%al
083556cb +0x15f:  jne    08355604 <+0x98>
083556d1 +0x165:  lea    -0x10(%ebp),%eax
083556d4 +0x168:  movl   $0x0,0x8(%esp)
083556dc +0x170:  lea    -0x20(%ebp),%edx
083556df +0x173:  mov    %edx,0x4(%esp)
083556e3 +0x177:  mov    %eax,(%esp)
083556e6 +0x17a:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
083556eb +0x17f:  sub    $0x4,%esp
083556ee +0x182:  mov    0x8(%ebp),%eax
083556f1 +0x185:  lea    0xe0(%eax),%edx
083556f7 +0x18b:  lea    -0x1c(%ebp),%eax
083556fa +0x18e:  mov    %edx,0x4(%esp)
083556fe +0x192:  mov    %eax,(%esp)
08355701 +0x195:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
08355706 +0x19a:  sub    $0x4,%esp
08355709 +0x19d:  lea    -0x1c(%ebp),%eax
0835570c +0x1a0:  mov    %eax,0x4(%esp)
08355710 +0x1a4:  lea    -0x20(%ebp),%eax
08355713 +0x1a7:  mov    %eax,(%esp)
08355716 +0x1aa:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0835571b +0x1af:  test   %al,%al
0835571d +0x1b1:  jne    083555bb <+0x4f>
08355723 +0x1b7:  leave
08355724 +0x1b8:  ret
08355725 +0x1b9:  nop
```

## 反编译 C

```c
// QuestList::allowable_questlist_as_npc @ 0x835556c

/* QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int,
   int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&,
   WongWork::CQuestClear const&, bool) */

void __thiscall
QuestList::allowable_questlist_as_npc
          (QuestList *this,list *param_1,multimap *param_2,stSelectQuestParam *param_3,
          CQuestClear *param_4,bool param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  _Rb_tree_const_iterator a_Stack_2c [4];
  undefined4 local_28;
  _List_iterator<int> local_24 [4];
  _List_iterator local_20 [4];
  int local_1c [2];
  _List_iterator<int> local_14 [4];
  Quest *local_10;
  
  std::_List_iterator<int>::_List_iterator(local_24);
  local_10 = (Quest *)0x0;
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
          *)&local_30);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_24,local_20);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<int>::operator*(local_24);
    local_28 = *puVar2;
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
              (local_1c);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
    ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
                 *)&local_30,(pair *)local_1c);
    local_34 = local_30;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34,
                              a_Stack_2c), cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar3 + 4);
      local_10 = (Quest *)find_quest((int)this);
      if (((local_10 != (Quest *)0x0) &&
          (cVar1 = Check_Quest(this,local_10,param_3,param_4), cVar1 == '\x01')) &&
         ((param_5 || (cVar1 = check_clear(this,*(int *)(param_3 + 0x18),param_4), cVar1 == '\x01'))
         )) {
        std::list<int,std::allocator<int>>::push_back
                  ((list<int,std::allocator<int>> *)param_1,(int *)(param_3 + 0x18));
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
    }
    std::_List_iterator<int>::operator++(local_14,(int)local_24);
  }
  return;
}
```
