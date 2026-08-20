# ResetTrainingQuest

`_ZN5CUser18ResetTrainingQuestEv`

`CUser::ResetTrainingQuest()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657662  _ZN5CUser18ResetTrainingQuestEv
#           CUser::ResetTrainingQuest()
# range [0x08657662, 0x08657765]
08657662 +0x000:  push   %ebp
08657663 +0x001:  mov    %esp,%ebp
08657665 +0x003:  push   %esi
08657666 +0x004:  push   %ebx
08657667 +0x005:  sub    $0x30,%esp
0865766a +0x008:  lea    -0x1c(%ebp),%eax
0865766d +0x00b:  mov    %eax,(%esp)
08657670 +0x00e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08657675 +0x013:  mov    0x8(%ebp),%eax
08657678 +0x016:  mov    %eax,(%esp)
0865767b +0x019:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08657680 +0x01e:  movswl %ax,%ebx
08657683 +0x021:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08657688 +0x026:  mov    0x18(%eax),%eax
0865768b +0x029:  mov    %ebx,0x8(%esp)
0865768f +0x02d:  lea    -0x1c(%ebp),%edx
08657692 +0x030:  mov    %edx,0x4(%esp)
08657696 +0x034:  mov    %eax,(%esp)
08657699 +0x037:  call   08355a10 <_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs>  ; QuestList::GetTrainingQuestList(std::vector<int, std::allocator<int> >&, short)
0865769e +0x03c:  lea    -0x20(%ebp),%eax
086576a1 +0x03f:  lea    -0x1c(%ebp),%edx
086576a4 +0x042:  mov    %edx,0x4(%esp)
086576a8 +0x046:  mov    %eax,(%esp)
086576ab +0x049:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086576b0 +0x04e:  sub    $0x4,%esp
086576b3 +0x051:  jmp    08657708 <+0xa6>
086576b5 +0x053:  lea    -0x20(%ebp),%eax
086576b8 +0x056:  mov    %eax,(%esp)
086576bb +0x059:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086576c0 +0x05e:  mov    (%eax),%eax
086576c2 +0x060:  mov    %eax,-0xc(%ebp)
086576c5 +0x063:  mov    0x8(%ebp),%eax
086576c8 +0x066:  mov    %eax,(%esp)
086576cb +0x069:  call   082604ec <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x21c
086576d0 +0x06e:  mov    -0xc(%ebp),%edx
086576d3 +0x071:  mov    %edx,0x4(%esp)
086576d7 +0x075:  mov    %eax,(%esp)
086576da +0x078:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
086576df +0x07d:  test   %al,%al
086576e1 +0x07f:  je     086576fd <+0x9b>
086576e3 +0x081:  mov    0x8(%ebp),%eax
086576e6 +0x084:  mov    %eax,(%esp)
086576e9 +0x087:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
086576ee +0x08c:  mov    -0xc(%ebp),%edx
086576f1 +0x08f:  mov    %edx,0x4(%esp)
086576f5 +0x093:  mov    %eax,(%esp)
086576f8 +0x096:  call   086ab93e <_ZN9UserQuest15resetClearQuestEi>  ; UserQuest::resetClearQuest(int)
086576fd +0x09b:  lea    -0x20(%ebp),%eax
08657700 +0x09e:  mov    %eax,(%esp)
08657703 +0x0a1:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08657708 +0x0a6:  lea    -0x10(%ebp),%eax
0865770b +0x0a9:  lea    -0x1c(%ebp),%edx
0865770e +0x0ac:  mov    %edx,0x4(%esp)
08657712 +0x0b0:  mov    %eax,(%esp)
08657715 +0x0b3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0865771a +0x0b8:  sub    $0x4,%esp
0865771d +0x0bb:  lea    -0x10(%ebp),%eax
08657720 +0x0be:  mov    %eax,0x4(%esp)
08657724 +0x0c2:  lea    -0x20(%ebp),%eax
08657727 +0x0c5:  mov    %eax,(%esp)
0865772a +0x0c8:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0865772f +0x0cd:  test   %al,%al
08657731 +0x0cf:  jne    086576b5 <+0x53>
08657733 +0x0d1:  jmp    08657750 <+0xee>
08657735 +0x0d3:  mov    %edx,%ebx
08657737 +0x0d5:  mov    %eax,%esi
08657739 +0x0d7:  lea    -0x1c(%ebp),%eax
0865773c +0x0da:  mov    %eax,(%esp)
0865773f +0x0dd:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08657744 +0x0e2:  mov    %esi,%eax
08657746 +0x0e4:  mov    %ebx,%edx
08657748 +0x0e6:  mov    %eax,(%esp)
0865774b +0x0e9:  call   08ae3750 <_Unwind_Resume>
08657750 +0x0ee:  lea    -0x1c(%ebp),%eax
08657753 +0x0f1:  mov    %eax,(%esp)
08657756 +0x0f4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0865775b +0x0f9:  lea    -0x8(%ebp),%esp
0865775e +0x0fc:  add    $0x0,%esp
08657761 +0x0ff:  pop    %ebx
08657762 +0x100:  pop    %esi
08657763 +0x101:  pop    %ebp
08657764 +0x102:  ret
08657765 +0x103:  nop
```

## 反编译 C

```c
// CUser::ResetTrainingQuest @ 0x8657662

/* CUser::ResetTrainingQuest() */

void __thiscall CUser::ResetTrainingQuest(CUser *this)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  UserQuest *pUVar6;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  vector<int,std::allocator<int>> local_20 [12];
  __normal_iterator local_14 [4];
  int local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_20);
  sVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
                    /* try { // try from 08657683 to 0865772e has its CatchHandler @ 08657735 */
  iVar4 = G_CDataManager();
  QuestList::GetTrainingQuestList(*(QuestList **)(iVar4 + 0x18),(vector *)local_20,sVar3);
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar2 = __gnu_cxx::operator!=(local_24,local_14);
    if (!bVar2) break;
    piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_24);
    local_10 = *piVar5;
    pUVar6 = (UserQuest *)getCurCharacQuestRefR(this);
    cVar1 = UserQuest::isClearQuest(pUVar6,local_10);
    if (cVar1 != '\0') {
      pUVar6 = (UserQuest *)getCurCharacQuestW(this);
      UserQuest::resetClearQuest(pUVar6,local_10);
    }
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_24);
  }
  std::vector<int,std::allocator<int>>::~vector(local_20);
  return;
}
```
