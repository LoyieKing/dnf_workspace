# select_quest

`_ZN9QuestList12select_questERSt4listIiSaIiEER18stSelectQuestParamRKN8WongWork11CQuestClearE`

`QuestList::select_quest(std::list<int, std::allocator<int> >&, stSelectQuestParam&, WongWork::CQuestClear const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355726  _ZN9QuestList12select_questERSt4listIiSaIiEER18stSelectQuestParamRKN8WongWork11CQuestClearE
#           QuestList::select_quest(std::list<int, std::allocator<int> >&, stSelectQuestParam&, WongWork::CQuestClear const&)
# range [0x08355726, 0x0835589d]
08355726 +0x000:  push   %ebp
08355727 +0x001:  mov    %esp,%ebp
08355729 +0x003:  sub    $0x28,%esp
0835572c +0x006:  mov    0xc(%ebp),%eax
0835572f +0x009:  mov    %eax,(%esp)
08355732 +0x00c:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
08355737 +0x011:  mov    0x8(%ebp),%eax
0835573a +0x014:  lea    0x14(%eax),%edx
0835573d +0x017:  movl   $0x0,0x14(%esp)
08355745 +0x01f:  mov    0x14(%ebp),%eax
08355748 +0x022:  mov    %eax,0x10(%esp)
0835574c +0x026:  mov    0x10(%ebp),%eax
0835574f +0x029:  mov    %eax,0xc(%esp)
08355753 +0x02d:  mov    %edx,0x8(%esp)
08355757 +0x031:  mov    0xc(%ebp),%eax
0835575a +0x034:  mov    %eax,0x4(%esp)
0835575e +0x038:  mov    0x8(%ebp),%eax
08355761 +0x03b:  mov    %eax,(%esp)
08355764 +0x03e:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
08355769 +0x043:  mov    0x8(%ebp),%eax
0835576c +0x046:  lea    0x2c(%eax),%edx
0835576f +0x049:  movl   $0x0,0x14(%esp)
08355777 +0x051:  mov    0x14(%ebp),%eax
0835577a +0x054:  mov    %eax,0x10(%esp)
0835577e +0x058:  mov    0x10(%ebp),%eax
08355781 +0x05b:  mov    %eax,0xc(%esp)
08355785 +0x05f:  mov    %edx,0x8(%esp)
08355789 +0x063:  mov    0xc(%ebp),%eax
0835578c +0x066:  mov    %eax,0x4(%esp)
08355790 +0x06a:  mov    0x8(%ebp),%eax
08355793 +0x06d:  mov    %eax,(%esp)
08355796 +0x070:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
0835579b +0x075:  mov    0x8(%ebp),%eax
0835579e +0x078:  lea    0x44(%eax),%edx
083557a1 +0x07b:  movl   $0x1,0x14(%esp)
083557a9 +0x083:  mov    0x14(%ebp),%eax
083557ac +0x086:  mov    %eax,0x10(%esp)
083557b0 +0x08a:  mov    0x10(%ebp),%eax
083557b3 +0x08d:  mov    %eax,0xc(%esp)
083557b7 +0x091:  mov    %edx,0x8(%esp)
083557bb +0x095:  mov    0xc(%ebp),%eax
083557be +0x098:  mov    %eax,0x4(%esp)
083557c2 +0x09c:  mov    0x8(%ebp),%eax
083557c5 +0x09f:  mov    %eax,(%esp)
083557c8 +0x0a2:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
083557cd +0x0a7:  mov    0x8(%ebp),%eax
083557d0 +0x0aa:  lea    0xbc(%eax),%edx
083557d6 +0x0b0:  movl   $0x0,0x14(%esp)
083557de +0x0b8:  mov    0x14(%ebp),%eax
083557e1 +0x0bb:  mov    %eax,0x10(%esp)
083557e5 +0x0bf:  mov    0x10(%ebp),%eax
083557e8 +0x0c2:  mov    %eax,0xc(%esp)
083557ec +0x0c6:  mov    %edx,0x8(%esp)
083557f0 +0x0ca:  mov    0xc(%ebp),%eax
083557f3 +0x0cd:  mov    %eax,0x4(%esp)
083557f7 +0x0d1:  mov    0x8(%ebp),%eax
083557fa +0x0d4:  mov    %eax,(%esp)
083557fd +0x0d7:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
08355802 +0x0dc:  mov    0x8(%ebp),%eax
08355805 +0x0df:  lea    0x5c(%eax),%edx
08355808 +0x0e2:  movl   $0x0,0x14(%esp)
08355810 +0x0ea:  mov    0x14(%ebp),%eax
08355813 +0x0ed:  mov    %eax,0x10(%esp)
08355817 +0x0f1:  mov    0x10(%ebp),%eax
0835581a +0x0f4:  mov    %eax,0xc(%esp)
0835581e +0x0f8:  mov    %edx,0x8(%esp)
08355822 +0x0fc:  mov    0xc(%ebp),%eax
08355825 +0x0ff:  mov    %eax,0x4(%esp)
08355829 +0x103:  mov    0x8(%ebp),%eax
0835582c +0x106:  mov    %eax,(%esp)
0835582f +0x109:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
08355834 +0x10e:  mov    0x8(%ebp),%eax
08355837 +0x111:  lea    0x74(%eax),%edx
0835583a +0x114:  movl   $0x0,0x14(%esp)
08355842 +0x11c:  mov    0x14(%ebp),%eax
08355845 +0x11f:  mov    %eax,0x10(%esp)
08355849 +0x123:  mov    0x10(%ebp),%eax
0835584c +0x126:  mov    %eax,0xc(%esp)
08355850 +0x12a:  mov    %edx,0x8(%esp)
08355854 +0x12e:  mov    0xc(%ebp),%eax
08355857 +0x131:  mov    %eax,0x4(%esp)
0835585b +0x135:  mov    0x8(%ebp),%eax
0835585e +0x138:  mov    %eax,(%esp)
08355861 +0x13b:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
08355866 +0x140:  mov    0x8(%ebp),%eax
08355869 +0x143:  lea    0x8c(%eax),%edx
0835586f +0x149:  movl   $0x0,0x14(%esp)
08355877 +0x151:  mov    0x14(%ebp),%eax
0835587a +0x154:  mov    %eax,0x10(%esp)
0835587e +0x158:  mov    0x10(%ebp),%eax
08355881 +0x15b:  mov    %eax,0xc(%esp)
08355885 +0x15f:  mov    %edx,0x8(%esp)
08355889 +0x163:  mov    0xc(%ebp),%eax
0835588c +0x166:  mov    %eax,0x4(%esp)
08355890 +0x16a:  mov    0x8(%ebp),%eax
08355893 +0x16d:  mov    %eax,(%esp)
08355896 +0x170:  call   0835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>  ; QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&, WongWork::CQuestClear const&, bool)
0835589b +0x175:  leave
0835589c +0x176:  ret
0835589d +0x177:  nop
```

## 反编译 C

```c
// QuestList::select_quest @ 0x8355726

/* QuestList::select_quest(std::list<int, std::allocator<int> >&, stSelectQuestParam&,
   WongWork::CQuestClear const&) */

void __thiscall
QuestList::select_quest
          (QuestList *this,list *param_1,stSelectQuestParam *param_2,CQuestClear *param_3)

{
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)param_1);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x14),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x2c),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x44),param_2,param_3,true);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0xbc),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x5c),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x74),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x8c),param_2,param_3,false);
  return;
}
```
