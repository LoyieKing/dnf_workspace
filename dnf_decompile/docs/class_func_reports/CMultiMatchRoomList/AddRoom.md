# AddRoom

`_ZN19CMultiMatchRoomList7AddRoomEP6IMatch`

`CMultiMatchRoomList::AddRoom(IMatch*)`

| 类 | 地址 |
|---|---|
| `CMultiMatchRoomList` | `0x08567954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567954  _ZN19CMultiMatchRoomList7AddRoomEP6IMatch
#           CMultiMatchRoomList::AddRoom(IMatch*)
# range [0x08567954, 0x08567bb9]
08567954 +0x000:  push   %ebp
08567955 +0x001:  mov    %esp,%ebp
08567957 +0x003:  push   %edi
08567958 +0x004:  push   %ebx
08567959 +0x005:  sub    $0x150,%esp
0856795f +0x00b:  lea    -0x127(%ebp),%edx
08567965 +0x011:  mov    $0xff,%ebx
0856796a +0x016:  mov    $0x0,%eax
0856796f +0x01b:  mov    %edx,%ecx
08567971 +0x01d:  and    $0x1,%ecx
08567974 +0x020:  test   %ecx,%ecx
08567976 +0x022:  je     08567980 <+0x2c>
08567978 +0x024:  mov    %al,(%edx)
0856797a +0x026:  add    $0x1,%edx
0856797d +0x029:  sub    $0x1,%ebx
08567980 +0x02c:  mov    %edx,%ecx
08567982 +0x02e:  and    $0x2,%ecx
08567985 +0x031:  test   %ecx,%ecx
08567987 +0x033:  je     08567992 <+0x3e>
08567989 +0x035:  mov    %ax,(%edx)
0856798c +0x038:  add    $0x2,%edx
0856798f +0x03b:  sub    $0x2,%ebx
08567992 +0x03e:  mov    %ebx,%ecx
08567994 +0x040:  shr    $0x2,%ecx
08567997 +0x043:  mov    %edx,%edi
08567999 +0x045:  rep stos %eax,%es:(%edi)
0856799b +0x047:  mov    %edi,%edx
0856799d +0x049:  mov    %ebx,%ecx
0856799f +0x04b:  and    $0x2,%ecx
085679a2 +0x04e:  test   %ecx,%ecx
085679a4 +0x050:  je     085679ac <+0x58>
085679a6 +0x052:  mov    %ax,(%edx)
085679a9 +0x055:  add    $0x2,%edx
085679ac +0x058:  mov    %ebx,%ecx
085679ae +0x05a:  and    $0x1,%ecx
085679b1 +0x05d:  test   %ecx,%ecx
085679b3 +0x05f:  je     085679ba <+0x66>
085679b5 +0x061:  mov    %al,(%edx)
085679b7 +0x063:  add    $0x1,%edx
085679ba +0x066:  lea    -0x127(%ebp),%eax
085679c0 +0x06c:  mov    %eax,0x4(%esp)
085679c4 +0x070:  mov    0xc(%ebp),%eax
085679c7 +0x073:  mov    %eax,(%esp)
085679ca +0x076:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
085679cf +0x07b:  mov    %eax,%ebx
085679d1 +0x07d:  movl   $0x0,0x10(%esp)
085679d9 +0x085:  movl   $0x0,0xc(%esp)
085679e1 +0x08d:  movl   $0x11ea,0x8(%esp)
085679e9 +0x095:  movl   $&_ZZN19CMultiMatchRoomList7AddRoomEP6IMatchE19__PRETTY_FUNCTION__,0x4(%esp)
085679f1 +0x09d:  lea    -0x24(%ebp),%eax
085679f4 +0x0a0:  mov    %eax,(%esp)
085679f7 +0x0a3:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085679fc +0x0a8:  mov    %ebx,0xc(%esp)
08567a00 +0x0ac:  mov    0xc(%ebp),%eax
08567a03 +0x0af:  mov    %eax,0x8(%esp)
08567a07 +0x0b3:  movl   $"pvp@log match(%x), %s ",0x4(%esp)
08567a0f +0x0bb:  lea    -0x24(%ebp),%eax
08567a12 +0x0be:  mov    %eax,(%esp)
08567a15 +0x0c1:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08567a1a +0x0c6:  mov    0x8(%ebp),%eax
08567a1d +0x0c9:  lea    0x4(%eax),%edx
08567a20 +0x0cc:  lea    -0x28(%ebp),%eax
08567a23 +0x0cf:  mov    %edx,0x4(%esp)
08567a27 +0x0d3:  mov    %eax,(%esp)
08567a2a +0x0d6:  call   08569b3e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1508>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1508
08567a2f +0x0db:  sub    $0x4,%esp
08567a32 +0x0de:  jmp    08567a9e <+0x14a>
08567a34 +0x0e0:  lea    -0x28(%ebp),%eax
08567a37 +0x0e3:  mov    %eax,(%esp)
08567a3a +0x0e6:  call   08569894 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x125e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x125e
08567a3f +0x0eb:  lea    0x4(%eax),%edx
08567a42 +0x0ee:  mov    0xc(%ebp),%eax
08567a45 +0x0f1:  mov    %eax,0x4(%esp)
08567a49 +0x0f5:  mov    %edx,(%esp)
08567a4c +0x0f8:  call   08568872 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x23c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x23c
08567a51 +0x0fd:  test   %al,%al
08567a53 +0x0ff:  je     08567a93 <+0x13f>
08567a55 +0x101:  movl   $0x11f3,0x14(%esp)
08567a5d +0x109:  movl   $"error find line(%d)",0x10(%esp)
08567a65 +0x111:  movl   $0x11f3,0xc(%esp)
08567a6d +0x119:  movl   $&_ZZN19CMultiMatchRoomList7AddRoomEP6IMatchE19__PRETTY_FUNCTION__,0x8(%esp)
08567a75 +0x121:  movl   $"MatchingSystem.cpp",0x4(%esp)
08567a7d +0x129:  movl   $0x1,(%esp)
08567a84 +0x130:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08567a89 +0x135:  mov    $0x0,%eax
08567a8e +0x13a:  jmp    08567bb0 <+0x25c>
08567a93 +0x13f:  lea    -0x28(%ebp),%eax
08567a96 +0x142:  mov    %eax,(%esp)
08567a99 +0x145:  call   08569b9e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1568>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1568
08567a9e +0x14a:  mov    0x8(%ebp),%eax
08567aa1 +0x14d:  lea    0x4(%eax),%edx
08567aa4 +0x150:  lea    -0x14(%ebp),%eax
08567aa7 +0x153:  mov    %edx,0x4(%esp)
08567aab +0x157:  mov    %eax,(%esp)
08567aae +0x15a:  call   08569b64 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x152e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x152e
08567ab3 +0x15f:  sub    $0x4,%esp
08567ab6 +0x162:  lea    -0x14(%ebp),%eax
08567ab9 +0x165:  mov    %eax,0x4(%esp)
08567abd +0x169:  lea    -0x28(%ebp),%eax
08567ac0 +0x16c:  mov    %eax,(%esp)
08567ac3 +0x16f:  call   08569b8a <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1554>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1554
08567ac8 +0x174:  test   %al,%al
08567aca +0x176:  jne    08567a34 <+0xe0>
08567ad0 +0x17c:  mov    0xc(%ebp),%eax
08567ad3 +0x17f:  mov    (%eax),%eax
08567ad5 +0x181:  add    $0x84,%eax
08567ada +0x186:  mov    (%eax),%edx
08567adc +0x188:  mov    0xc(%ebp),%eax
08567adf +0x18b:  mov    %eax,(%esp)
08567ae2 +0x18e:  call   *%edx
08567ae4 +0x190:  mov    %eax,-0x10(%ebp)
08567ae7 +0x193:  mov    0x8(%ebp),%eax
08567aea +0x196:  lea    0x4(%eax),%ecx
08567aed +0x199:  lea    -0x12c(%ebp),%eax
08567af3 +0x19f:  lea    -0x10(%ebp),%edx
08567af6 +0x1a2:  mov    %edx,0x8(%esp)
08567afa +0x1a6:  mov    %ecx,0x4(%esp)
08567afe +0x1aa:  mov    %eax,(%esp)
08567b01 +0x1ad:  call   08569868 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1232>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1232
08567b06 +0x1b2:  sub    $0x4,%esp
08567b09 +0x1b5:  mov    -0x12c(%ebp),%eax
08567b0f +0x1bb:  mov    %eax,-0x28(%ebp)
08567b12 +0x1be:  mov    0x8(%ebp),%eax
08567b15 +0x1c1:  lea    0x4(%eax),%edx
08567b18 +0x1c4:  lea    -0xc(%ebp),%eax
08567b1b +0x1c7:  mov    %edx,0x4(%esp)
08567b1f +0x1cb:  mov    %eax,(%esp)
08567b22 +0x1ce:  call   08569b64 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x152e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x152e
08567b27 +0x1d3:  sub    $0x4,%esp
08567b2a +0x1d6:  lea    -0xc(%ebp),%eax
08567b2d +0x1d9:  mov    %eax,0x4(%esp)
08567b31 +0x1dd:  lea    -0x28(%ebp),%eax
08567b34 +0x1e0:  mov    %eax,(%esp)
08567b37 +0x1e3:  call   08569b8a <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1554>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1554
08567b3c +0x1e8:  test   %al,%al
08567b3e +0x1ea:  je     08567b5f <+0x20b>
08567b40 +0x1ec:  lea    -0x28(%ebp),%eax
08567b43 +0x1ef:  mov    %eax,(%esp)
08567b46 +0x1f2:  call   08569894 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x125e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x125e
08567b4b +0x1f7:  lea    0x4(%eax),%edx
08567b4e +0x1fa:  mov    0xc(%ebp),%eax
08567b51 +0x1fd:  mov    %eax,0x4(%esp)
08567b55 +0x201:  mov    %edx,(%esp)
08567b58 +0x204:  call   085688d8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x2a2>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x2a2
08567b5d +0x209:  jmp    08567bab <+0x257>
08567b5f +0x20b:  mov    0xc(%ebp),%eax
08567b62 +0x20e:  mov    (%eax),%eax
08567b64 +0x210:  add    $0x84,%eax
08567b69 +0x215:  mov    (%eax),%edx
08567b6b +0x217:  mov    0xc(%ebp),%eax
08567b6e +0x21a:  mov    %eax,(%esp)
08567b71 +0x21d:  call   *%edx
08567b73 +0x21f:  mov    %eax,0x18(%esp)
08567b77 +0x223:  movl   $0x11ff,0x14(%esp)
08567b7f +0x22b:  movl   $"error find line(%d), playCount(%d)",0x10(%esp)
08567b87 +0x233:  movl   $0x11ff,0xc(%esp)
08567b8f +0x23b:  movl   $&_ZZN19CMultiMatchRoomList7AddRoomEP6IMatchE19__PRETTY_FUNCTION__,0x8(%esp)
08567b97 +0x243:  movl   $"MatchingSystem.cpp",0x4(%esp)
08567b9f +0x24b:  movl   $0x1,(%esp)
08567ba6 +0x252:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08567bab +0x257:  mov    $0x1,%eax
08567bb0 +0x25c:  lea    -0x8(%ebp),%esp
08567bb3 +0x25f:  add    $0x0,%esp
08567bb6 +0x262:  pop    %ebx
08567bb7 +0x263:  pop    %edi
08567bb8 +0x264:  pop    %ebp
08567bb9 +0x265:  ret
```

## 反编译 C

```c
// CMultiMatchRoomList::AddRoom @ 0x8567954

/* CMultiMatchRoomList::AddRoom(IMatch*) */

undefined4 __thiscall CMultiMatchRoomList::AddRoom(CMultiMatchRoomList *this,IMatch *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  _Rb_tree_iterator *p_Var8;
  undefined4 *puVar9;
  int local_130;
  char local_12b;
  char local_12a [254];
  int local_2c;
  CSwitchLog local_28 [16];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_18 [4];
  undefined4 local_14;
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_10 [4];
  
  pcVar5 = &local_12b;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_12b = '\0';
    pcVar5 = local_12a;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  uVar2 = GetUserName(param_1,&local_12b);
  CSwitchLog::CSwitchLog(local_28,"virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",0x11ea,0,0);
  CSwitchLog::operator()(local_28,"pvp@log match(%x), %s ",param_1,uVar2);
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  begin((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
         *)&local_2c);
  while( true ) {
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      local_14 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
      puVar9 = &local_14;
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::find(&local_130);
      local_2c = local_130;
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::end(local_10);
      p_Var8 = (_Rb_tree_iterator *)local_10;
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c,
                         p_Var8);
      if (cVar1 == '\0') {
        uVar2 = (**(code **)(*(int *)param_1 + 0x84))(param_1,p_Var8,puVar9);
        LogManager::logFormat
                  (1,"MatchingSystem.cpp","virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",
                   0x11ff,"error find line(%d), playCount(%d)",0x11ff,uVar2);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
        CWaitingRoomList::insert((IMatch *)(iVar3 + 4));
      }
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
    cVar1 = CWaitingRoomList::find((IMatch *)(iVar3 + 4));
    if (cVar1 != '\0') break;
    std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
  }
  LogManager::logFormat
            (1,"MatchingSystem.cpp","virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",0x11f3,
             "error find line(%d)",0x11f3);
  return 0;
}
```
