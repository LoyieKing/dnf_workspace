# MakeRoundInfo

`_ZN13CBattle_Field13MakeRoundInfoERSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEERS0_IsSt6vectorIS1_SaIS1_EES3_SaIS4_IS5_SC_EEERSt4listI11_mapMonsterSaISI_EE`

`CBattle_Field::MakeRoundInfo(std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08303f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08303f66  _ZN13CBattle_Field13MakeRoundInfoERSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEERS0_IsSt6vectorIS1_SaIS1_EES3_SaIS4_IS5_SC_EEERSt4listI11_mapMonsterSaISI_EE
#           CBattle_Field::MakeRoundInfo(std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&, std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
# range [0x08303f66, 0x0830410b]
08303f66 +0x000:  push   %ebp
08303f67 +0x001:  mov    %esp,%ebp
08303f69 +0x003:  push   %esi
08303f6a +0x004:  push   %ebx
08303f6b +0x005:  sub    $0x60,%esp
08303f6e +0x008:  movl   $0x1,-0x3c(%ebp)
08303f75 +0x00f:  jmp    083040d7 <+0x171>
08303f7a +0x014:  lea    -0x40(%ebp),%eax
08303f7d +0x017:  mov    0xc(%ebp),%edx
08303f80 +0x01a:  mov    %edx,0x4(%esp)
08303f84 +0x01e:  mov    %eax,(%esp)
08303f87 +0x021:  call   0831136a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2f4f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2f4f
08303f8c +0x026:  sub    $0x4,%esp
08303f8f +0x029:  lea    -0x4c(%ebp),%eax
08303f92 +0x02c:  mov    %eax,(%esp)
08303f95 +0x02f:  call   08310d62 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2947>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2947
08303f9a +0x034:  jmp    08303fd6 <+0x70>
08303f9c +0x036:  lea    -0x40(%ebp),%eax
08303f9f +0x039:  mov    %eax,(%esp)
08303fa2 +0x03c:  call   083113ca <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2faf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2faf
08303fa7 +0x041:  add    $0x4,%eax
08303faa +0x044:  mov    %eax,0x4(%esp)
08303fae +0x048:  lea    -0x4c(%ebp),%eax
08303fb1 +0x04b:  mov    %eax,(%esp)
08303fb4 +0x04e:  call   08310fd4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2bb9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2bb9
08303fb9 +0x053:  lea    -0x34(%ebp),%eax
08303fbc +0x056:  movl   $0x0,0x8(%esp)
08303fc4 +0x05e:  lea    -0x40(%ebp),%edx
08303fc7 +0x061:  mov    %edx,0x4(%esp)
08303fcb +0x065:  mov    %eax,(%esp)
08303fce +0x068:  call   083113d8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2fbd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2fbd
08303fd3 +0x06d:  sub    $0x4,%esp
08303fd6 +0x070:  lea    -0x38(%ebp),%eax
08303fd9 +0x073:  mov    0xc(%ebp),%edx
08303fdc +0x076:  mov    %edx,0x4(%esp)
08303fe0 +0x07a:  mov    %eax,(%esp)
08303fe3 +0x07d:  call   08311390 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2f75>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2f75
08303fe8 +0x082:  sub    $0x4,%esp
08303feb +0x085:  lea    -0x38(%ebp),%eax
08303fee +0x088:  mov    %eax,0x4(%esp)
08303ff2 +0x08c:  lea    -0x40(%ebp),%eax
08303ff5 +0x08f:  mov    %eax,(%esp)
08303ff8 +0x092:  call   083113b6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2f9b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2f9b
08303ffd +0x097:  test   %al,%al
08303fff +0x099:  jne    08303f9c <+0x36>
08304001 +0x09b:  lea    -0x18(%ebp),%eax
08304004 +0x09e:  lea    -0x4c(%ebp),%edx
08304007 +0x0a1:  mov    %edx,0x8(%esp)
0830400b +0x0a5:  lea    -0x3c(%ebp),%edx
0830400e +0x0a8:  mov    %edx,0x4(%esp)
08304012 +0x0ac:  mov    %eax,(%esp)
08304015 +0x0af:  call   08311415 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x2ffa>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x2ffa
0830401a +0x0b4:  sub    $0x4,%esp
0830401d +0x0b7:  lea    -0x18(%ebp),%eax
08304020 +0x0ba:  mov    %eax,0x4(%esp)
08304024 +0x0be:  lea    -0x28(%ebp),%eax
08304027 +0x0c1:  mov    %eax,(%esp)
0830402a +0x0c4:  call   0831145a <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x303f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x303f
0830402f +0x0c9:  lea    -0x30(%ebp),%eax
08304032 +0x0cc:  lea    -0x28(%ebp),%edx
08304035 +0x0cf:  mov    %edx,0x8(%esp)
08304039 +0x0d3:  mov    0x10(%ebp),%edx
0830403c +0x0d6:  mov    %edx,0x4(%esp)
08304040 +0x0da:  mov    %eax,(%esp)
08304043 +0x0dd:  call   08311498 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x307d>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x307d
08304048 +0x0e2:  sub    $0x4,%esp
0830404b +0x0e5:  lea    -0x28(%ebp),%eax
0830404e +0x0e8:  mov    %eax,(%esp)
08304051 +0x0eb:  call   082c8d58 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1ac53>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1ac53
08304056 +0x0f0:  jmp    08304082 <+0x11c>
08304058 +0x0f2:  mov    %edx,%ebx
0830405a +0x0f4:  mov    %eax,%esi
0830405c +0x0f6:  lea    -0x28(%ebp),%eax
0830405f +0x0f9:  mov    %eax,(%esp)
08304062 +0x0fc:  call   082c8d58 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1ac53>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1ac53
08304067 +0x101:  mov    %esi,%eax
08304069 +0x103:  mov    %ebx,%edx
0830406b +0x105:  jmp    0830406d <+0x107>
0830406d +0x107:  mov    %edx,%ebx
0830406f +0x109:  mov    %eax,%esi
08304071 +0x10b:  lea    -0x18(%ebp),%eax
08304074 +0x10e:  mov    %eax,(%esp)
08304077 +0x111:  call   0830ee8c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa71
0830407c +0x116:  mov    %esi,%eax
0830407e +0x118:  mov    %ebx,%edx
08304080 +0x11a:  jmp    083040a8 <+0x142>
08304082 +0x11c:  lea    -0x18(%ebp),%eax
08304085 +0x11f:  mov    %eax,(%esp)
08304088 +0x122:  call   0830ee8c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xa71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xa71
0830408d +0x127:  mov    -0x3c(%ebp),%eax
08304090 +0x12a:  mov    0xc(%ebp),%edx
08304093 +0x12d:  mov    %edx,0x8(%esp)
08304097 +0x131:  mov    %eax,0x4(%esp)
0830409b +0x135:  mov    0x8(%ebp),%eax
0830409e +0x138:  mov    %eax,(%esp)
083040a1 +0x13b:  call   0830410c <_ZN13CBattle_Field17MakeNextRoundInfoEiRSt3mapIsNS_14TournamentInfoESt4lessIsESaISt4pairIKsS1_EEE>  ; CBattle_Field::MakeNextRoundInfo(int, std::map<short, CBattle_Field::TournamentInfo, std::less<short>, std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&)
083040a6 +0x140:  jmp    083040c3 <+0x15d>
083040a8 +0x142:  mov    %edx,%ebx
083040aa +0x144:  mov    %eax,%esi
083040ac +0x146:  lea    -0x4c(%ebp),%eax
083040af +0x149:  mov    %eax,(%esp)
083040b2 +0x14c:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
083040b7 +0x151:  mov    %esi,%eax
083040b9 +0x153:  mov    %ebx,%edx
083040bb +0x155:  mov    %eax,(%esp)
083040be +0x158:  call   08ae3750 <_Unwind_Resume>
083040c3 +0x15d:  lea    -0x4c(%ebp),%eax
083040c6 +0x160:  mov    %eax,(%esp)
083040c9 +0x163:  call   082d2b88 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x24a83>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x24a83
083040ce +0x168:  mov    -0x3c(%ebp),%eax
083040d1 +0x16b:  add    $0x1,%eax
083040d4 +0x16e:  mov    %eax,-0x3c(%ebp)
083040d7 +0x171:  mov    -0x3c(%ebp),%eax
083040da +0x174:  cmp    $0x4,%eax
083040dd +0x177:  setle  %al
083040e0 +0x17a:  test   %al,%al
083040e2 +0x17c:  jne    08303f7a <+0x14>
083040e8 +0x182:  mov    0x14(%ebp),%eax
083040eb +0x185:  mov    %eax,0x8(%esp)
083040ef +0x189:  mov    0x10(%ebp),%eax
083040f2 +0x18c:  mov    %eax,0x4(%esp)
083040f6 +0x190:  mov    0x8(%ebp),%eax
083040f9 +0x193:  mov    %eax,(%esp)
083040fc +0x196:  call   08304594 <_ZN13CBattle_Field25MakeTournamentMonsterListERSt3mapIsSt6vectorINS_14TournamentInfoESaIS2_EESt4lessIsESaISt4pairIKsS4_EEERSt4listI11_mapMonsterSaISE_EE>  ; CBattle_Field::MakeTournamentMonsterList(std::map<short, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >, std::less<short>, std::allocator<std::pair<short const, std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > > >&, std::list<_mapMonster, std::allocator<_mapMonster> >&)
08304101 +0x19b:  lea    -0x8(%ebp),%esp
08304104 +0x19e:  add    $0x0,%esp
08304107 +0x1a1:  pop    %ebx
08304108 +0x1a2:  pop    %esi
08304109 +0x1a3:  pop    %ebp
0830410a +0x1a4:  ret
0830410b +0x1a5:  nop
```

## 反编译 C

```c
// CBattle_Field::MakeRoundInfo @ 0x8303f66

/* CBattle_Field::MakeRoundInfo(std::map<short, CBattle_Field::TournamentInfo, std::less<short>,
   std::allocator<std::pair<short const, CBattle_Field::TournamentInfo> > >&, std::map<short,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> >,
   std::less<short>, std::allocator<std::pair<short const,
   std::vector<CBattle_Field::TournamentInfo, std::allocator<CBattle_Field::TournamentInfo> > > >
   >&, std::list<_mapMonster, std::allocator<_mapMonster> >&) */

void __thiscall
CBattle_Field::MakeRoundInfo(CBattle_Field *this,map *param_1,map *param_2,list *param_3)

{
  char cVar1;
  int iVar2;
  vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>> local_50 [12];
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  local_44 [4];
  int local_40;
  map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>> local_38 [4];
  pair local_34 [8];
  pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
  local_2c [16];
  pair<int,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
  local_1c [16];
  
  for (local_40 = 1; local_40 < 5; local_40 = local_40 + 1) {
    std::
    map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
    ::begin(local_44);
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::vector
              (local_50);
    while( true ) {
      std::
      map<short,CBattle_Field::TournamentInfo,std::less<short>,std::allocator<std::pair<short_const,CBattle_Field::TournamentInfo>>>
      ::end(local_3c);
      cVar1 = std::_Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>>::
              operator!=((_Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>> *)
                         local_44,(_Rb_tree_iterator *)local_3c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>>::
              operator->((_Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>> *)
                         local_44);
                    /* try { // try from 08303fb4 to 08304019 has its CatchHandler @ 083040a8 */
      std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
      push_back(local_50,(TournamentInfo *)(iVar2 + 4));
      std::_Rb_tree_iterator<std::pair<short_const,CBattle_Field::TournamentInfo>>::operator++
                (local_38,(int)local_44);
    }
    std::
    make_pair<int&,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>&>
              ((int *)local_1c,(vector *)&local_40);
                    /* try { // try from 0830402a to 0830402e has its CatchHandler @ 0830406d */
    std::
    pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
    ::
    pair<int,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
              (local_2c,local_1c);
                    /* try { // try from 08304043 to 08304047 has its CatchHandler @ 08304058 */
    std::
    map<short,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>>>
    ::insert(local_34);
                    /* try { // try from 08304051 to 08304055 has its CatchHandler @ 0830406d */
    std::
    pair<short_const,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
    ::~pair(local_2c);
                    /* try { // try from 08304088 to 083040a5 has its CatchHandler @ 083040a8 */
    std::
    pair<int,std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>>
    ::~pair(local_1c);
    MakeNextRoundInfo(this,local_40,param_1);
    std::vector<CBattle_Field::TournamentInfo,std::allocator<CBattle_Field::TournamentInfo>>::
    ~vector(local_50);
  }
  MakeTournamentMonsterList(this,param_2,param_3);
  return;
}
```
