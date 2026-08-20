# DelRoom

`_ZN19CMultiMatchRoomList7DelRoomEP6IMatch`

`CMultiMatchRoomList::DelRoom(IMatch*)`

| 类 | 地址 |
|---|---|
| `CMultiMatchRoomList` | `0x08567bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567bba  _ZN19CMultiMatchRoomList7DelRoomEP6IMatch
#           CMultiMatchRoomList::DelRoom(IMatch*)
# range [0x08567bba, 0x08567cff]
08567bba +0x000:  push   %ebp
08567bbb +0x001:  mov    %esp,%ebp
08567bbd +0x003:  push   %edi
08567bbe +0x004:  push   %ebx
08567bbf +0x005:  sub    $0x140,%esp
08567bc5 +0x00b:  lea    -0x11f(%ebp),%edx
08567bcb +0x011:  mov    $0xff,%ebx
08567bd0 +0x016:  mov    $0x0,%eax
08567bd5 +0x01b:  mov    %edx,%ecx
08567bd7 +0x01d:  and    $0x1,%ecx
08567bda +0x020:  test   %ecx,%ecx
08567bdc +0x022:  je     08567be6 <+0x2c>
08567bde +0x024:  mov    %al,(%edx)
08567be0 +0x026:  add    $0x1,%edx
08567be3 +0x029:  sub    $0x1,%ebx
08567be6 +0x02c:  mov    %edx,%ecx
08567be8 +0x02e:  and    $0x2,%ecx
08567beb +0x031:  test   %ecx,%ecx
08567bed +0x033:  je     08567bf8 <+0x3e>
08567bef +0x035:  mov    %ax,(%edx)
08567bf2 +0x038:  add    $0x2,%edx
08567bf5 +0x03b:  sub    $0x2,%ebx
08567bf8 +0x03e:  mov    %ebx,%ecx
08567bfa +0x040:  shr    $0x2,%ecx
08567bfd +0x043:  mov    %edx,%edi
08567bff +0x045:  rep stos %eax,%es:(%edi)
08567c01 +0x047:  mov    %edi,%edx
08567c03 +0x049:  mov    %ebx,%ecx
08567c05 +0x04b:  and    $0x2,%ecx
08567c08 +0x04e:  test   %ecx,%ecx
08567c0a +0x050:  je     08567c12 <+0x58>
08567c0c +0x052:  mov    %ax,(%edx)
08567c0f +0x055:  add    $0x2,%edx
08567c12 +0x058:  mov    %ebx,%ecx
08567c14 +0x05a:  and    $0x1,%ecx
08567c17 +0x05d:  test   %ecx,%ecx
08567c19 +0x05f:  je     08567c20 <+0x66>
08567c1b +0x061:  mov    %al,(%edx)
08567c1d +0x063:  add    $0x1,%edx
08567c20 +0x066:  lea    -0x11f(%ebp),%eax
08567c26 +0x06c:  mov    %eax,0x4(%esp)
08567c2a +0x070:  mov    0xc(%ebp),%eax
08567c2d +0x073:  mov    %eax,(%esp)
08567c30 +0x076:  call   08563ff7 <_Z11GetUserNameP6IMatchPc>  ; GetUserName(IMatch*, char*)
08567c35 +0x07b:  mov    %eax,%ebx
08567c37 +0x07d:  movl   $0x0,0x10(%esp)
08567c3f +0x085:  movl   $0x0,0xc(%esp)
08567c47 +0x08d:  movl   $0x1209,0x8(%esp)
08567c4f +0x095:  movl   $&_ZZN19CMultiMatchRoomList7DelRoomEP6IMatchE19__PRETTY_FUNCTION__,0x4(%esp)
08567c57 +0x09d:  lea    -0x1c(%ebp),%eax
08567c5a +0x0a0:  mov    %eax,(%esp)
08567c5d +0x0a3:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08567c62 +0x0a8:  mov    %ebx,0xc(%esp)
08567c66 +0x0ac:  mov    0xc(%ebp),%eax
08567c69 +0x0af:  mov    %eax,0x8(%esp)
08567c6d +0x0b3:  movl   $"pvp@log match(%x), %s ",0x4(%esp)
08567c75 +0x0bb:  lea    -0x1c(%ebp),%eax
08567c78 +0x0be:  mov    %eax,(%esp)
08567c7b +0x0c1:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
08567c80 +0x0c6:  mov    0x8(%ebp),%eax
08567c83 +0x0c9:  lea    0x4(%eax),%edx
08567c86 +0x0cc:  lea    -0x20(%ebp),%eax
08567c89 +0x0cf:  mov    %edx,0x4(%esp)
08567c8d +0x0d3:  mov    %eax,(%esp)
08567c90 +0x0d6:  call   08569b3e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1508>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1508
08567c95 +0x0db:  sub    $0x4,%esp
08567c98 +0x0de:  jmp    08567cc2 <+0x108>
08567c9a +0x0e0:  lea    -0x20(%ebp),%eax
08567c9d +0x0e3:  mov    %eax,(%esp)
08567ca0 +0x0e6:  call   08569894 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x125e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x125e
08567ca5 +0x0eb:  lea    0x4(%eax),%edx
08567ca8 +0x0ee:  mov    0xc(%ebp),%eax
08567cab +0x0f1:  mov    %eax,0x4(%esp)
08567caf +0x0f5:  mov    %edx,(%esp)
08567cb2 +0x0f8:  call   085688be <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x288>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x288
08567cb7 +0x0fd:  lea    -0x20(%ebp),%eax
08567cba +0x100:  mov    %eax,(%esp)
08567cbd +0x103:  call   08569b9e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1568>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1568
08567cc2 +0x108:  mov    0x8(%ebp),%eax
08567cc5 +0x10b:  lea    0x4(%eax),%edx
08567cc8 +0x10e:  lea    -0xc(%ebp),%eax
08567ccb +0x111:  mov    %edx,0x4(%esp)
08567ccf +0x115:  mov    %eax,(%esp)
08567cd2 +0x118:  call   08569b64 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x152e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x152e
08567cd7 +0x11d:  sub    $0x4,%esp
08567cda +0x120:  lea    -0xc(%ebp),%eax
08567cdd +0x123:  mov    %eax,0x4(%esp)
08567ce1 +0x127:  lea    -0x20(%ebp),%eax
08567ce4 +0x12a:  mov    %eax,(%esp)
08567ce7 +0x12d:  call   08569b8a <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1554>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1554
08567cec +0x132:  test   %al,%al
08567cee +0x134:  jne    08567c9a <+0xe0>
08567cf0 +0x136:  mov    $0x1,%eax
08567cf5 +0x13b:  lea    -0x8(%ebp),%esp
08567cf8 +0x13e:  add    $0x0,%esp
08567cfb +0x141:  pop    %ebx
08567cfc +0x142:  pop    %edi
08567cfd +0x143:  pop    %ebp
08567cfe +0x144:  ret
08567cff +0x145:  nop
```

## 反编译 C

```c
// CMultiMatchRoomList::DelRoom @ 0x8567bba

/* CMultiMatchRoomList::DelRoom(IMatch*) */

undefined4 __thiscall CMultiMatchRoomList::DelRoom(CMultiMatchRoomList *this,IMatch *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_123;
  char local_122 [254];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_24 [4];
  CSwitchLog local_20 [16];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_10 [4];
  
  pcVar5 = &local_123;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_123 = '\0';
    pcVar5 = local_122;
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
  uVar2 = GetUserName(param_1,&local_123);
  CSwitchLog::CSwitchLog(local_20,"virtual bool CMultiMatchRoomList::DelRoom(IMatch*)",0x1209,0,0);
  CSwitchLog::operator()(local_20,"pvp@log match(%x), %s ",param_1,uVar2);
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  begin(local_24);
  while( true ) {
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24);
    CWaitingRoomList::erase((IMatch *)(iVar3 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24);
  }
  return 1;
}
```
