# ConsistTournament

`_ZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEE`

`CBattle_Field::ConsistTournament(CMap const*, std::list<_mapMonster, std::allocator<_mapMonster> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083035c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083035c8  _ZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEE
#           CBattle_Field::ConsistTournament(CMap const*, std::list<_mapMonster, std::allocator<_mapMonster> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&)
# range [0x083035c8, 0x08303895]
083035c8 +0x000:  push   %ebp
083035c9 +0x001:  mov    %esp,%ebp
083035cb +0x003:  push   %esi
083035cc +0x004:  push   %ebx
083035cd +0x005:  sub    $0x90,%esp
083035d3 +0x00b:  cmpl   $0x0,0xc(%ebp)
083035d7 +0x00f:  jne    08303619 <+0x51>
083035d9 +0x011:  movl   $0x5,0xc(%esp)
083035e1 +0x019:  movl   $0xb5a,0x8(%esp)
083035e9 +0x021:  movl   $&_ZZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEEE19__PRETTY_FUNCTION__,0x4(%esp)
083035f1 +0x029:  lea    -0x50(%ebp),%eax
083035f4 +0x02c:  mov    %eax,(%esp)
083035f7 +0x02f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083035fc +0x034:  movl   $"CBattle_Field::ConsistTournament ERROR!! : pMap is NULL pointer",0x4(%esp)
08303604 +0x03c:  lea    -0x50(%ebp),%eax
08303607 +0x03f:  mov    %eax,(%esp)
0830360a +0x042:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0830360f +0x047:  mov    $0x0,%ebx
08303614 +0x04c:  jmp    0830388a <+0x2c2>
08303619 +0x051:  mov    0xc(%ebp),%eax
0830361c +0x054:  add    $0x114,%eax
08303621 +0x059:  mov    %eax,(%esp)
08303624 +0x05c:  call   08310a1a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x25ff>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x25ff
08303629 +0x061:  test   %al,%al
0830362b +0x063:  je     0830366d <+0xa5>
0830362d +0x065:  movl   $0x5,0xc(%esp)
08303635 +0x06d:  movl   $0xb61,0x8(%esp)
0830363d +0x075:  movl   $&_ZZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEEE19__PRETTY_FUNCTION__,0x4(%esp)
08303645 +0x07d:  lea    -0x40(%ebp),%eax
08303648 +0x080:  mov    %eax,(%esp)
0830364b +0x083:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08303650 +0x088:  movl   $"CBattle_Field::ConsistTournament ERROR!! : tournamentMonster is empty",0x4(%esp)
08303658 +0x090:  lea    -0x40(%ebp),%eax
0830365b +0x093:  mov    %eax,(%esp)
0830365e +0x096:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08303663 +0x09b:  mov    $0x0,%ebx
08303668 +0x0a0:  jmp    0830388a <+0x2c2>
0830366d +0x0a5:  lea    -0x5c(%ebp),%eax
08303670 +0x0a8:  mov    %eax,(%esp)
08303673 +0x0ab:  call   08310a2e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2613>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2613
08303678 +0x0b0:  mov    0x8(%ebp),%eax
0830367b +0x0b3:  mov    (%eax),%eax
0830367d +0x0b5:  mov    %eax,(%esp)
08303680 +0x0b8:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08303685 +0x0bd:  mov    %eax,-0x10(%ebp)
08303688 +0x0c0:  mov    -0x10(%ebp),%eax
0830368b +0x0c3:  mov    %al,-0x2d(%ebp)
0830368e +0x0c6:  mov    0xc(%ebp),%eax
08303691 +0x0c9:  lea    0x114(%eax),%ecx
08303697 +0x0cf:  lea    -0x60(%ebp),%eax
0830369a +0x0d2:  lea    -0x2d(%ebp),%edx
0830369d +0x0d5:  mov    %edx,0x8(%esp)
083036a1 +0x0d9:  mov    %ecx,0x4(%esp)
083036a5 +0x0dd:  mov    %eax,(%esp)
083036a8 +0x0e0:  call   08310aa0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2685>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2685
083036ad +0x0e5:  sub    $0x4,%esp
083036b0 +0x0e8:  mov    0xc(%ebp),%eax
083036b3 +0x0eb:  lea    0x114(%eax),%edx
083036b9 +0x0f1:  lea    -0x2c(%ebp),%eax
083036bc +0x0f4:  mov    %edx,0x4(%esp)
083036c0 +0x0f8:  mov    %eax,(%esp)
083036c3 +0x0fb:  call   08310acc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x26b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x26b1
083036c8 +0x100:  sub    $0x4,%esp
083036cb +0x103:  lea    -0x2c(%ebp),%eax
083036ce +0x106:  mov    %eax,0x4(%esp)
083036d2 +0x10a:  lea    -0x60(%ebp),%eax
083036d5 +0x10d:  mov    %eax,(%esp)
083036d8 +0x110:  call   08310af2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x26d7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x26d7
083036dd +0x115:  test   %al,%al
083036df +0x117:  je     08303734 <+0x16c>
083036e1 +0x119:  mov    0x8(%ebp),%eax
083036e4 +0x11c:  mov    (%eax),%eax
083036e6 +0x11e:  mov    %eax,(%esp)
083036e9 +0x121:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
083036ee +0x126:  mov    %eax,%ebx
083036f0 +0x128:  movl   $0x5,0xc(%esp)
083036f8 +0x130:  movl   $0xb6c,0x8(%esp)
08303700 +0x138:  movl   $&_ZZN13CBattle_Field17ConsistTournamentEPK4CMapRSt4listI11_mapMonsterSaIS4_EERSt3mapIsSt6vectorINS_14TournamentInfoESaISA_EESt4lessIsESaISt4pairIKsSC_EEEE19__PRETTY_FUNCTION__,0x4(%esp)
08303708 +0x140:  lea    -0x28(%ebp),%eax
0830370b +0x143:  mov    %eax,(%esp)
0830370e +0x146:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08303713 +0x14b:  mov    %ebx,0x8(%esp)
08303717 +0x14f:  movl   $"CBattle_Field::ConsistTournament ERROR!! : party member count is invalid(%d)",0x4(%esp)
0830371f +0x157:  lea    -0x28(%ebp),%eax
08303722 +0x15a:  mov    %eax,(%esp)
08303725 +0x15d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0830372a +0x162:  mov    $0x0,%ebx
0830372f +0x167:  jmp    0830387f <+0x2b7>
08303734 +0x16c:  lea    -0x60(%ebp),%eax
08303737 +0x16f:  mov    %eax,(%esp)
0830373a +0x172:  call   08310b06 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x26eb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x26eb
0830373f +0x177:  add    $0x4,%eax
08303742 +0x17a:  mov    %eax,0x4(%esp)
08303746 +0x17e:  lea    -0x5c(%ebp),%eax
08303749 +0x181:  mov    %eax,(%esp)
0830374c +0x184:  call   08310b14 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x26f9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x26f9
08303751 +0x189:  lea    -0x6c(%ebp),%eax
08303754 +0x18c:  mov    %eax,(%esp)
08303757 +0x18f:  call   08310d62 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2947>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2947
0830375c +0x194:  lea    -0x6c(%ebp),%eax
0830375f +0x197:  mov    %eax,0xc(%esp)
08303763 +0x19b:  lea    -0x5c(%ebp),%eax
08303766 +0x19e:  mov    %eax,0x8(%esp)
0830376a +0x1a2:  mov    -0x10(%ebp),%eax
0830376d +0x1a5:  mov    %eax,0x4(%esp)
08303771 +0x1a9:  mov    0x8(%ebp),%eax
08303774 +0x1ac:  mov    %eax,(%esp)
08303777 +0x1af:  call   08303896 <_ZN13CBattle_Field18MakeBasicRoundInfoEiRSt6vectorI17TournamentMonsterSaIS1_EERS0_INS_14TournamentInfoESaIS5_EE>  ; CBattle_Field::MakeBasicRoundInfo(int, std::vector<TournamentMonster, std::allocator<TournamentMonster> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)
0830377c +0x1b4:  mov    %al,-0x9(%ebp)
0830377f +0x1b7:  movzbl -0x9(%ebp),%eax
08303783 +0x1bb:  xor    $0x1,%eax
08303786 +0x1be:  test   %al,%al
08303788 +0x1c0:  je     08303794 <+0x1cc>
0830378a +0x1c2:  mov    $0x0,%ebx
0830378f +0x1c7:  jmp    08303857 <+0x28f>
08303794 +0x1cc:  lea    -0x18(%ebp),%eax
08303797 +0x1cf:  lea    -0x6c(%ebp),%edx
0830379a +0x1d2:  mov    %edx,0x4(%esp)
0830379e +0x1d6:  mov    %eax,(%esp)
083037a1 +0x1d9:  call   08310d9a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x297f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x297f
083037a6 +0x1de:  sub    $0x4,%esp
083037a9 +0x1e1:  lea    -0x14(%ebp),%eax
083037ac +0x1e4:  lea    -0x6c(%ebp),%edx
083037af +0x1e7:  mov    %edx,0x4(%esp)
083037b3 +0x1eb:  mov    %eax,(%esp)
083037b6 +0x1ee:  call   08310d76 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x295b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x295b
083037bb +0x1f3:  sub    $0x4,%esp
083037be +0x1f6:  mov    -0x18(%ebp),%eax
083037c1 +0x1f9:  mov    %eax,0x4(%esp)
083037c5 +0x1fd:  mov    -0x14(%ebp),%eax
083037c8 +0x200:  mov    %eax,(%esp)
083037cb +0x203:  call   08310dc0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x29a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x29a5
083037d0 +0x208:  lea    -0x78(%ebp),%eax
083037d3 +0x20b:  mov    %eax,(%esp)
083037d6 +0x20e:  call   08310d62 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2947>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2947
083037db +0x213:  lea    -0x78(%ebp),%eax
083037de +0x216:  mov    %eax,0x8(%esp)
083037e2 +0x21a:  lea    -0x6c(%ebp),%eax
083037e5 +0x21d:  mov    %eax,0x4(%esp)
083037e9 +0x221:  mov    0x8(%ebp),%eax
083037ec +0x224:  mov    %eax,(%esp)
083037ef +0x227:  call   08303a1c <_ZN13CBattle_Field16ChoiceFirstGroupERSt6vectorINS_14TournamentInfoESaIS1_EES4_>  ; CBattle_Field::ChoiceFirstGroup(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&)
083037f4 +0x22c:  mov    0x10(%ebp),%eax
083037f7 +0x22f:  mov    %eax,0x10(%esp)
083037fb +0x233:  mov    0x14(%ebp),%eax
083037fe +0x236:  mov    %eax,0xc(%esp)
08303802 +0x23a:  lea    -0x6c(%ebp),%eax
08303805 +0x23d:  mov    %eax,0x8(%esp)
08303809 +0x241:  lea    -0x78(%ebp),%eax
0830380c +0x244:  mov    %eax,0x4(%esp)
08303810 +0x248:  mov    0x8(%ebp),%eax
08303813 +0x24b:  mov    %eax,(%esp)
08303816 +0x24e:  call   08303ace <_ZN13CBattle_Field22ConsistTournamentRoundERSt6vectorINS_14TournamentInfoESaIS1_EES4_RSt3mapIsS3_St4lessIsESaISt4pairIKsS3_EEERSt4listI11_mapMonsterSaISF_EE>  ; CBattle_Field::ConsistTournamentRound(std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
0830381b +0x253:  mov    $0x1,%ebx
08303820 +0x258:  lea    -0x78(%ebp),%eax
08303823 +0x25b:  mov    %eax,(%esp)
08303826 +0x25e:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
0830382b +0x263:  jmp    08303857 <+0x28f>
0830382d +0x265:  mov    %edx,%ebx
0830382f +0x267:  mov    %eax,%esi
08303831 +0x269:  lea    -0x78(%ebp),%eax
08303834 +0x26c:  mov    %eax,(%esp)
08303837 +0x26f:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
0830383c +0x274:  mov    %esi,%eax
0830383e +0x276:  mov    %ebx,%edx
08303840 +0x278:  jmp    08303842 <+0x27a>
08303842 +0x27a:  mov    %edx,%ebx
08303844 +0x27c:  mov    %eax,%esi
08303846 +0x27e:  lea    -0x6c(%ebp),%eax
08303849 +0x281:  mov    %eax,(%esp)
0830384c +0x284:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
08303851 +0x289:  mov    %esi,%eax
08303853 +0x28b:  mov    %ebx,%edx
08303855 +0x28d:  jmp    08303864 <+0x29c>
08303857 +0x28f:  lea    -0x6c(%ebp),%eax
0830385a +0x292:  mov    %eax,(%esp)
0830385d +0x295:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
08303862 +0x29a:  jmp    0830387f <+0x2b7>
08303864 +0x29c:  mov    %edx,%ebx
08303866 +0x29e:  mov    %eax,%esi
08303868 +0x2a0:  lea    -0x5c(%ebp),%eax
0830386b +0x2a3:  mov    %eax,(%esp)
0830386e +0x2a6:  call   08310a42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2627
08303873 +0x2ab:  mov    %esi,%eax
08303875 +0x2ad:  mov    %ebx,%edx
08303877 +0x2af:  mov    %eax,(%esp)
0830387a +0x2b2:  call   08ae3750 <_Unwind_Resume>
0830387f +0x2b7:  lea    -0x5c(%ebp),%eax
08303882 +0x2ba:  mov    %eax,(%esp)
08303885 +0x2bd:  call   08310a42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2627
0830388a +0x2c2:  mov    %ebx,%eax
0830388c +0x2c4:  lea    -0x8(%ebp),%esp
0830388f +0x2c7:  add    $0x0,%esp
08303892 +0x2ca:  pop    %ebx
08303893 +0x2cb:  pop    %esi
08303894 +0x2cc:  pop    %ebp
08303895 +0x2cd:  ret
```

## 反编译 C

```c
// CBattle_Field::ConsistTournament @ 0x83035c8

/* CBattle_Field::ConsistTournament(CMap const*, std::list<_mapMonster, std::allocator<_mapMonster>
   >&, std::map<short, std::vector<CBattle_Field::TournamentInfo,
   std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short
   const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >
   > > >&) */

bool __thiscall
CBattle_Field::ConsistTournament(CBattle_Field *this,CMap *param_1,list *param_2,map *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> local_7c [12];
  vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> local_70 [12];
  _Rb_tree_const_iterator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>
  local_64 [4];
  vector<TournamentMonster,std::allocator<TournamentMonster>> local_60 [12];
  cMyTrace local_54 [16];
  cMyTrace local_44 [19];
  undefined1 local_31;
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  local_30 [4];
  cMyTrace local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  char local_d;
  
  if (param_1 == (CMap *)0x0) {
    cMyTrace::cMyTrace(local_54,
                       "bool CBattle_Field::ConsistTournament(const CMap*, MOB_REF_LIST&, CBattle_Field::TournamentRoundInfoMap&)"
                       ,0xb5a,5);
    cMyTrace::operator()(local_54,"CBattle_Field::ConsistTournament ERROR!! : pMap is NULL pointer")
    ;
    bVar4 = false;
  }
  else {
    cVar1 = std::
            map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
            ::empty((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
                     *)(param_1 + 0x114));
    if (cVar1 == '\0') {
      std::vector<TournamentMonster,std::allocator<TournamentMonster>>::vector(local_60);
                    /* try { // try from 08303680 to 0830375b has its CatchHandler @ 08303864 */
      local_14 = CParty::get_member_count(*(CParty **)this);
      local_31 = (undefined1)local_14;
      std::
      map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
      ::find((char *)local_64);
      std::
      map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
      ::end(local_30);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>
              ::operator==(local_64,(_Rb_tree_const_iterator *)local_30);
      if (cVar1 == '\0') {
        iVar3 = std::
                _Rb_tree_const_iterator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>
                ::operator->(local_64);
        std::vector<TournamentMonster,std::allocator<TournamentMonster>>::operator=
                  (local_60,(vector *)(iVar3 + 4));
        std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
        vector(local_70);
                    /* try { // try from 08303777 to 083037da has its CatchHandler @ 08303842 */
        local_d = MakeBasicRoundInfo(this,local_14,(vector *)local_60,(vector *)local_70);
        bVar4 = local_d == '\x01';
        if (bVar4) {
          std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
          end();
          std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
          begin();
          std::
          sort<__gnu_cxx::__normal_iterator<CBattle_Field::TournamentInfo*,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>
                    (local_18,local_1c);
          std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
          vector(local_7c);
                    /* try { // try from 083037ef to 0830381a has its CatchHandler @ 0830382d */
          ChoiceFirstGroup(this,(vector *)local_70,(vector *)local_7c);
          ConsistTournamentRound(this,(vector *)local_7c,(vector *)local_70,param_3,param_2);
                    /* try { // try from 08303826 to 0830382a has its CatchHandler @ 08303842 */
          std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
          ~vector(local_7c);
        }
                    /* try { // try from 0830385d to 08303861 has its CatchHandler @ 08303864 */
        std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
        ~vector(local_70);
      }
      else {
        uVar2 = CParty::get_member_count(*(CParty **)this);
        cMyTrace::cMyTrace(local_2c,
                           "bool CBattle_Field::ConsistTournament(const CMap*, MOB_REF_LIST&, CBattle_Field::TournamentRoundInfoMap&)"
                           ,0xb6c,5);
        cMyTrace::operator()
                  (local_2c,
                   "CBattle_Field::ConsistTournament ERROR!! : party member count is invalid(%d)",
                   uVar2);
        bVar4 = false;
      }
      std::vector<TournamentMonster,std::allocator<TournamentMonster>>::~vector(local_60);
    }
    else {
      cMyTrace::cMyTrace(local_44,
                         "bool CBattle_Field::ConsistTournament(const CMap*, MOB_REF_LIST&, CBattle_Field::TournamentRoundInfoMap&)"
                         ,0xb61,5);
      cMyTrace::operator()
                (local_44,"CBattle_Field::ConsistTournament ERROR!! : tournamentMonster is empty");
      bVar4 = false;
    }
  }
  return bVar4;
}
```
