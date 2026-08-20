# set_post_learning_skill

`_ZN10CSkillList23set_post_learning_skillEiP6CSkill`

`CSkillList::set_post_learning_skill(int, CSkill*)`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08351e18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08351e18  _ZN10CSkillList23set_post_learning_skillEiP6CSkill
#           CSkillList::set_post_learning_skill(int, CSkill*)
# range [0x08351e18, 0x08352027]
08351e18 +0x000:  push   %ebp
08351e19 +0x001:  mov    %esp,%ebp
08351e1b +0x003:  push   %esi
08351e1c +0x004:  push   %ebx
08351e1d +0x005:  sub    $0x50,%esp
08351e20 +0x008:  cmpl   $0x0,0x10(%ebp)
08351e24 +0x00c:  je     0835201d <+0x205>
08351e2a +0x012:  mov    0x10(%ebp),%eax
08351e2d +0x015:  add    $0x18,%eax
08351e30 +0x018:  mov    %eax,(%esp)
08351e33 +0x01b:  call   0838f494 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef34>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef34
08351e38 +0x020:  test   %eax,%eax
08351e3a +0x022:  setne  %al
08351e3d +0x025:  test   %al,%al
08351e3f +0x027:  je     0835201e <+0x206>
08351e45 +0x02d:  mov    0x10(%ebp),%eax
08351e48 +0x030:  lea    0x18(%eax),%edx
08351e4b +0x033:  lea    -0x2c(%ebp),%eax
08351e4e +0x036:  mov    %edx,0x4(%esp)
08351e52 +0x03a:  mov    %eax,(%esp)
08351e55 +0x03d:  call   0838f4d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef78
08351e5a +0x042:  sub    $0x4,%esp
08351e5d +0x045:  jmp    08351fe9 <+0x1d1>
08351e62 +0x04a:  lea    -0x2c(%ebp),%eax
08351e65 +0x04d:  mov    %eax,(%esp)
08351e68 +0x050:  call   0838fdfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f89a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f89a
08351e6d +0x055:  mov    %eax,%ecx
08351e6f +0x057:  mov    0xc(%ebp),%edx
08351e72 +0x05a:  mov    %edx,%eax
08351e74 +0x05c:  add    %eax,%eax
08351e76 +0x05e:  add    %edx,%eax
08351e78 +0x060:  shl    $0x3,%eax
08351e7b +0x063:  add    $0x1e0,%eax
08351e80 +0x068:  add    0x8(%ebp),%eax
08351e83 +0x06b:  lea    0x4(%eax),%edx
08351e86 +0x06e:  lea    -0x30(%ebp),%eax
08351e89 +0x071:  mov    %ecx,0x8(%esp)
08351e8d +0x075:  mov    %edx,0x4(%esp)
08351e91 +0x079:  mov    %eax,(%esp)
08351e94 +0x07c:  call   0838fe08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8a8
08351e99 +0x081:  sub    $0x4,%esp
08351e9c +0x084:  lea    -0x38(%ebp),%eax
08351e9f +0x087:  mov    %eax,(%esp)
08351ea2 +0x08a:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08351ea7 +0x08f:  mov    0x10(%ebp),%eax
08351eaa +0x092:  mov    %eax,(%esp)
08351ead +0x095:  call   08374b7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb46
08351eb2 +0x09a:  mov    %eax,-0x38(%ebp)
08351eb5 +0x09d:  lea    -0x2c(%ebp),%eax
08351eb8 +0x0a0:  mov    %eax,(%esp)
08351ebb +0x0a3:  call   0838fdfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f89a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f89a
08351ec0 +0x0a8:  mov    0x4(%eax),%eax
08351ec3 +0x0ab:  mov    %eax,-0x34(%ebp)
08351ec6 +0x0ae:  mov    0xc(%ebp),%edx
08351ec9 +0x0b1:  mov    %edx,%eax
08351ecb +0x0b3:  add    %eax,%eax
08351ecd +0x0b5:  add    %edx,%eax
08351ecf +0x0b7:  shl    $0x3,%eax
08351ed2 +0x0ba:  add    $0x1e0,%eax
08351ed7 +0x0bf:  add    0x8(%ebp),%eax
08351eda +0x0c2:  lea    0x4(%eax),%edx
08351edd +0x0c5:  lea    -0x24(%ebp),%eax
08351ee0 +0x0c8:  mov    %edx,0x4(%esp)
08351ee4 +0x0cc:  mov    %eax,(%esp)
08351ee7 +0x0cf:  call   0838fe34 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8d4
08351eec +0x0d4:  sub    $0x4,%esp
08351eef +0x0d7:  lea    -0x24(%ebp),%eax
08351ef2 +0x0da:  mov    %eax,0x4(%esp)
08351ef6 +0x0de:  lea    -0x30(%ebp),%eax
08351ef9 +0x0e1:  mov    %eax,(%esp)
08351efc +0x0e4:  call   0838fe5a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f8fa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f8fa
08351f01 +0x0e9:  test   %al,%al
08351f03 +0x0eb:  je     08351fc1 <+0x1a9>
08351f09 +0x0f1:  lea    -0x44(%ebp),%eax
08351f0c +0x0f4:  mov    %eax,(%esp)
08351f0f +0x0f7:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08351f14 +0x0fc:  lea    -0x38(%ebp),%eax
08351f17 +0x0ff:  mov    %eax,0x4(%esp)
08351f1b +0x103:  lea    -0x44(%ebp),%eax
08351f1e +0x106:  mov    %eax,(%esp)
08351f21 +0x109:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08351f26 +0x10e:  lea    -0x2c(%ebp),%eax
08351f29 +0x111:  mov    %eax,(%esp)
08351f2c +0x114:  call   0838fdfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f89a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f89a
08351f31 +0x119:  lea    -0x44(%ebp),%edx
08351f34 +0x11c:  mov    %edx,0x8(%esp)
08351f38 +0x120:  mov    %eax,0x4(%esp)
08351f3c +0x124:  lea    -0x18(%ebp),%eax
08351f3f +0x127:  mov    %eax,(%esp)
08351f42 +0x12a:  call   0838fe6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f90e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f90e
08351f47 +0x12f:  mov    0xc(%ebp),%edx
08351f4a +0x132:  mov    %edx,%eax
08351f4c +0x134:  add    %eax,%eax
08351f4e +0x136:  add    %edx,%eax
08351f50 +0x138:  shl    $0x3,%eax
08351f53 +0x13b:  add    $0x1e0,%eax
08351f58 +0x140:  add    0x8(%ebp),%eax
08351f5b +0x143:  lea    0x4(%eax),%ecx
08351f5e +0x146:  lea    -0x20(%ebp),%eax
08351f61 +0x149:  lea    -0x18(%ebp),%edx
08351f64 +0x14c:  mov    %edx,0x8(%esp)
08351f68 +0x150:  mov    %ecx,0x4(%esp)
08351f6c +0x154:  mov    %eax,(%esp)
08351f6f +0x157:  call   0838fea6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f946>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f946
08351f74 +0x15c:  sub    $0x4,%esp
08351f77 +0x15f:  lea    -0x18(%ebp),%eax
08351f7a +0x162:  mov    %eax,(%esp)
08351f7d +0x165:  call   0837a668 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa108>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa108
08351f82 +0x16a:  jmp    08351fb4 <+0x19c>
08351f84 +0x16c:  mov    %edx,%ebx
08351f86 +0x16e:  mov    %eax,%esi
08351f88 +0x170:  lea    -0x18(%ebp),%eax
08351f8b +0x173:  mov    %eax,(%esp)
08351f8e +0x176:  call   0837a668 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa108>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa108
08351f93 +0x17b:  mov    %esi,%eax
08351f95 +0x17d:  mov    %ebx,%edx
08351f97 +0x17f:  jmp    08351f99 <+0x181>
08351f99 +0x181:  mov    %edx,%ebx
08351f9b +0x183:  mov    %eax,%esi
08351f9d +0x185:  lea    -0x44(%ebp),%eax
08351fa0 +0x188:  mov    %eax,(%esp)
08351fa3 +0x18b:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08351fa8 +0x190:  mov    %esi,%eax
08351faa +0x192:  mov    %ebx,%edx
08351fac +0x194:  mov    %eax,(%esp)
08351faf +0x197:  call   08ae3750 <_Unwind_Resume>
08351fb4 +0x19c:  lea    -0x44(%ebp),%eax
08351fb7 +0x19f:  mov    %eax,(%esp)
08351fba +0x1a2:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08351fbf +0x1a7:  jmp    08351fde <+0x1c6>
08351fc1 +0x1a9:  lea    -0x30(%ebp),%eax
08351fc4 +0x1ac:  mov    %eax,(%esp)
08351fc7 +0x1af:  call   0838fed2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f972>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f972
08351fcc +0x1b4:  lea    0x4(%eax),%edx
08351fcf +0x1b7:  lea    -0x38(%ebp),%eax
08351fd2 +0x1ba:  mov    %eax,0x4(%esp)
08351fd6 +0x1be:  mov    %edx,(%esp)
08351fd9 +0x1c1:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08351fde +0x1c6:  lea    -0x2c(%ebp),%eax
08351fe1 +0x1c9:  mov    %eax,(%esp)
08351fe4 +0x1cc:  call   0838fee0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f980>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f980
08351fe9 +0x1d1:  mov    0x10(%ebp),%eax
08351fec +0x1d4:  lea    0x18(%eax),%edx
08351fef +0x1d7:  lea    -0x28(%ebp),%eax
08351ff2 +0x1da:  mov    %edx,0x4(%esp)
08351ff6 +0x1de:  mov    %eax,(%esp)
08351ff9 +0x1e1:  call   0838fdc2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f862>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f862
08351ffe +0x1e6:  sub    $0x4,%esp
08352001 +0x1e9:  lea    -0x28(%ebp),%eax
08352004 +0x1ec:  mov    %eax,0x4(%esp)
08352008 +0x1f0:  lea    -0x2c(%ebp),%eax
0835200b +0x1f3:  mov    %eax,(%esp)
0835200e +0x1f6:  call   0838fde6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f886>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f886
08352013 +0x1fb:  test   %al,%al
08352015 +0x1fd:  jne    08351e62 <+0x4a>
0835201b +0x203:  jmp    0835201e <+0x206>
0835201d +0x205:  nop
0835201e +0x206:  lea    -0x8(%ebp),%esp
08352021 +0x209:  add    $0x0,%esp
08352024 +0x20c:  pop    %ebx
08352025 +0x20d:  pop    %esi
08352026 +0x20e:  pop    %ebp
08352027 +0x20f:  ret
```

## 反编译 C

```c
// CSkillList::set_post_learning_skill @ 0x8351e18

/* CSkillList::set_post_learning_skill(int, CSkill*) */

void __thiscall CSkillList::set_post_learning_skill(CSkillList *this,int param_1,CSkill *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
  local_34 [4];
  _List_iterator<_pre_skill> local_30 [4];
  _List_iterator local_2c [4];
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  local_28 [4];
  pair local_24 [8];
  pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>> local_1c [16];
  
  if ((param_2 != (CSkill *)0x0) &&
     (iVar2 = std::list<_pre_skill,std::allocator<_pre_skill>>::size(), iVar2 != 0)) {
    std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
    while( true ) {
      std::list<_pre_skill,std::allocator<_pre_skill>>::end();
      cVar1 = std::_List_iterator<_pre_skill>::operator!=(local_30,local_2c);
      if (cVar1 == '\0') break;
      std::_List_iterator<_pre_skill>::operator->(local_30);
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::find((int *)local_34);
      std::pair<int,int>::pair((pair<int,int> *)&local_3c);
      local_3c = CSkill::get_index(param_2);
      iVar2 = std::_List_iterator<_pre_skill>::operator->(local_30);
      local_38 = *(undefined4 *)(iVar2 + 4);
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        iVar2 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
                ::operator->(local_34);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(iVar2 + 4),
                   (pair *)&local_3c);
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_48);
                    /* try { // try from 08351f21 to 08351f46 has its CatchHandler @ 08351f99 */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_48,(pair *)&local_3c);
        piVar3 = (int *)std::_List_iterator<_pre_skill>::operator->(local_30);
        std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>::
        pair<int&,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>&>
                  (local_1c,piVar3,(vector *)local_48);
                    /* try { // try from 08351f6f to 08351f73 has its CatchHandler @ 08351f84 */
        std::
        map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
        ::insert(local_24);
                    /* try { // try from 08351f7d to 08351f81 has its CatchHandler @ 08351f99 */
        std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>::
        ~pair(local_1c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_48);
      }
      std::_List_iterator<_pre_skill>::operator++(local_30);
    }
  }
  return;
}
```
