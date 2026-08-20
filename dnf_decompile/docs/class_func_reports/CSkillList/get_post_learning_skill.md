# get_post_learning_skill

`_ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE`

`CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08352028` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352028  _ZN10CSkillList23get_post_learning_skillEiiRSt6vectorISt4pairIiiESaIS2_EE
#           CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x08352028, 0x083520c7]
08352028 +0x00:  push   %ebp
08352029 +0x01:  mov    %esp,%ebp
0835202b +0x03:  sub    $0x28,%esp
0835202e +0x06:  mov    0xc(%ebp),%edx
08352031 +0x09:  mov    %edx,%eax
08352033 +0x0b:  add    %eax,%eax
08352035 +0x0d:  add    %edx,%eax
08352037 +0x0f:  shl    $0x3,%eax
0835203a +0x12:  add    $0x1e0,%eax
0835203f +0x17:  add    0x8(%ebp),%eax
08352042 +0x1a:  lea    0x4(%eax),%ecx
08352045 +0x1d:  lea    -0x10(%ebp),%eax
08352048 +0x20:  lea    0x10(%ebp),%edx
0835204b +0x23:  mov    %edx,0x8(%esp)
0835204f +0x27:  mov    %ecx,0x4(%esp)
08352053 +0x2b:  mov    %eax,(%esp)
08352056 +0x2e:  call   0838fe08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8a8
0835205b +0x33:  sub    $0x4,%esp
0835205e +0x36:  mov    0xc(%ebp),%edx
08352061 +0x39:  mov    %edx,%eax
08352063 +0x3b:  add    %eax,%eax
08352065 +0x3d:  add    %edx,%eax
08352067 +0x3f:  shl    $0x3,%eax
0835206a +0x42:  add    $0x1e0,%eax
0835206f +0x47:  add    0x8(%ebp),%eax
08352072 +0x4a:  lea    0x4(%eax),%edx
08352075 +0x4d:  lea    -0xc(%ebp),%eax
08352078 +0x50:  mov    %edx,0x4(%esp)
0835207c +0x54:  mov    %eax,(%esp)
0835207f +0x57:  call   0838fe34 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8d4
08352084 +0x5c:  sub    $0x4,%esp
08352087 +0x5f:  lea    -0xc(%ebp),%eax
0835208a +0x62:  mov    %eax,0x4(%esp)
0835208e +0x66:  lea    -0x10(%ebp),%eax
08352091 +0x69:  mov    %eax,(%esp)
08352094 +0x6c:  call   0838fef4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f994>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f994
08352099 +0x71:  test   %al,%al
0835209b +0x73:  je     083520c1 <+0x99>
0835209d +0x75:  lea    -0x10(%ebp),%eax
083520a0 +0x78:  mov    %eax,(%esp)
083520a3 +0x7b:  call   0838fed2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f972>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f972
083520a8 +0x80:  add    $0x4,%eax
083520ab +0x83:  mov    %eax,0x4(%esp)
083520af +0x87:  mov    0x14(%ebp),%eax
083520b2 +0x8a:  mov    %eax,(%esp)
083520b5 +0x8d:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
083520ba +0x92:  mov    $0x1,%eax
083520bf +0x97:  jmp    083520c6 <+0x9e>
083520c1 +0x99:  mov    $0x0,%eax
083520c6 +0x9e:  leave
083520c7 +0x9f:  ret
```

## 反编译 C

```c
// CSkillList::get_post_learning_skill @ 0x8352028

/* CSkillList::get_post_learning_skill(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

bool CSkillList::get_post_learning_skill(int param_1,int param_2,vector *param_3)

{
  char cVar1;
  int iVar2;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *in_stack_00000010;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_14 [4];
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            ::operator->(local_14);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              (in_stack_00000010,(vector *)(iVar2 + 4));
  }
  return cVar1 != '\0';
}
```
