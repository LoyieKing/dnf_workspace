# ResetDailyQuest

`_ZN5CUser15ResetDailyQuestEv`

`CUser::ResetDailyQuest()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657570  _ZN5CUser15ResetDailyQuestEv
#           CUser::ResetDailyQuest()
# range [0x08657570, 0x08657661]
08657570 +0x00:  push   %ebp
08657571 +0x01:  mov    %esp,%ebp
08657573 +0x03:  push   %esi
08657574 +0x04:  push   %ebx
08657575 +0x05:  sub    $0x30,%esp
08657578 +0x08:  lea    -0x18(%ebp),%eax
0865757b +0x0b:  mov    %eax,(%esp)
0865757e +0x0e:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
08657583 +0x13:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08657588 +0x18:  mov    0x18(%eax),%eax
0865758b +0x1b:  lea    -0x18(%ebp),%edx
0865758e +0x1e:  mov    %edx,0x4(%esp)
08657592 +0x22:  mov    %eax,(%esp)
08657595 +0x25:  call   0835589e <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE>  ; QuestList::GetDailyQuestList(std::list<int, std::allocator<int> >&)
0865759a +0x2a:  lea    -0x1c(%ebp),%eax
0865759d +0x2d:  lea    -0x18(%ebp),%edx
086575a0 +0x30:  mov    %edx,0x4(%esp)
086575a4 +0x34:  mov    %eax,(%esp)
086575a7 +0x37:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
086575ac +0x3c:  sub    $0x4,%esp
086575af +0x3f:  jmp    08657604 <+0x94>
086575b1 +0x41:  lea    -0x1c(%ebp),%eax
086575b4 +0x44:  mov    %eax,(%esp)
086575b7 +0x47:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
086575bc +0x4c:  mov    (%eax),%eax
086575be +0x4e:  mov    %eax,-0xc(%ebp)
086575c1 +0x51:  mov    0x8(%ebp),%eax
086575c4 +0x54:  mov    %eax,(%esp)
086575c7 +0x57:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
086575cc +0x5c:  mov    -0xc(%ebp),%edx
086575cf +0x5f:  mov    %edx,0x4(%esp)
086575d3 +0x63:  mov    %eax,(%esp)
086575d6 +0x66:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
086575db +0x6b:  test   %al,%al
086575dd +0x6d:  je     086575f9 <+0x89>
086575df +0x6f:  mov    0x8(%ebp),%eax
086575e2 +0x72:  mov    %eax,(%esp)
086575e5 +0x75:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
086575ea +0x7a:  mov    -0xc(%ebp),%edx
086575ed +0x7d:  mov    %edx,0x4(%esp)
086575f1 +0x81:  mov    %eax,(%esp)
086575f4 +0x84:  call   086ab93e <_ZN9UserQuest15resetClearQuestEi>  ; UserQuest::resetClearQuest(int)
086575f9 +0x89:  lea    -0x1c(%ebp),%eax
086575fc +0x8c:  mov    %eax,(%esp)
086575ff +0x8f:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
08657604 +0x94:  lea    -0x10(%ebp),%eax
08657607 +0x97:  lea    -0x18(%ebp),%edx
0865760a +0x9a:  mov    %edx,0x4(%esp)
0865760e +0x9e:  mov    %eax,(%esp)
08657611 +0xa1:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
08657616 +0xa6:  sub    $0x4,%esp
08657619 +0xa9:  lea    -0x10(%ebp),%eax
0865761c +0xac:  mov    %eax,0x4(%esp)
08657620 +0xb0:  lea    -0x1c(%ebp),%eax
08657623 +0xb3:  mov    %eax,(%esp)
08657626 +0xb6:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
0865762b +0xbb:  test   %al,%al
0865762d +0xbd:  jne    086575b1 <+0x41>
0865762f +0xbf:  jmp    0865764c <+0xdc>
08657631 +0xc1:  mov    %edx,%ebx
08657633 +0xc3:  mov    %eax,%esi
08657635 +0xc5:  lea    -0x18(%ebp),%eax
08657638 +0xc8:  mov    %eax,(%esp)
0865763b +0xcb:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08657640 +0xd0:  mov    %esi,%eax
08657642 +0xd2:  mov    %ebx,%edx
08657644 +0xd4:  mov    %eax,(%esp)
08657647 +0xd7:  call   08ae3750 <_Unwind_Resume>
0865764c +0xdc:  lea    -0x18(%ebp),%eax
0865764f +0xdf:  mov    %eax,(%esp)
08657652 +0xe2:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
08657657 +0xe7:  lea    -0x8(%ebp),%esp
0865765a +0xea:  add    $0x0,%esp
0865765d +0xed:  pop    %ebx
0865765e +0xee:  pop    %esi
0865765f +0xef:  pop    %ebp
08657660 +0xf0:  ret
08657661 +0xf1:  nop
```

## 反编译 C

```c
// CUser::ResetDailyQuest @ 0x8657570

/* CUser::ResetDailyQuest() */

void __thiscall CUser::ResetDailyQuest(CUser *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  UserQuest *pUVar4;
  _List_iterator<int> local_20 [4];
  list<int,std::allocator<int>> local_1c [8];
  _List_iterator local_14 [4];
  int local_10;
  
  std::list<int,std::allocator<int>>::list(local_1c);
                    /* try { // try from 08657583 to 08657615 has its CatchHandler @ 08657631 */
  iVar2 = G_CDataManager();
  QuestList::GetDailyQuestList(*(QuestList **)(iVar2 + 0x18),(list *)local_1c);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_20,local_14);
    if (cVar1 == '\0') break;
    piVar3 = (int *)std::_List_iterator<int>::operator*(local_20);
    local_10 = *piVar3;
    pUVar4 = (UserQuest *)getCurCharacQuestRefR(this);
    cVar1 = UserQuest::isClearQuest(pUVar4,local_10);
    if (cVar1 != '\0') {
      pUVar4 = (UserQuest *)getCurCharacQuestW(this);
      UserQuest::resetClearQuest(pUVar4,local_10);
    }
    std::_List_iterator<int>::operator++(local_20);
  }
  std::list<int,std::allocator<int>>::~list(local_1c);
  return;
}
```
