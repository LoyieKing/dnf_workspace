# insert_skill

`_ZN10CSkillList12insert_skillEiP6CSkill`

`CSkillList::insert_skill(int, CSkill*)`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x083519a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083519a6  _ZN10CSkillList12insert_skillEiP6CSkill
#           CSkillList::insert_skill(int, CSkill*)
# range [0x083519a6, 0x08351b73]
083519a6 +0x000:  push   %ebp
083519a7 +0x001:  mov    %esp,%ebp
083519a9 +0x003:  sub    $0x88,%esp
083519af +0x009:  mov    0x10(%ebp),%eax
083519b2 +0x00c:  test   %eax,%eax
083519b4 +0x00e:  jne    08351a01 <+0x5b>
083519b6 +0x010:  movl   $0x5,0xc(%esp)
083519be +0x018:  movl   $0xf91,0x8(%esp)
083519c6 +0x020:  movl   $&_ZZN10CSkillList12insert_skillEiP6CSkillE19__PRETTY_FUNCTION__,0x4(%esp)
083519ce +0x028:  lea    -0x54(%ebp),%eax
083519d1 +0x02b:  mov    %eax,(%esp)
083519d4 +0x02e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083519d9 +0x033:  movl   $0xf91,0xc(%esp)
083519e1 +0x03b:  movl   $&_ZZN10CSkillList12insert_skillEiP6CSkillE19__PRETTY_FUNCTION__,0x8(%esp)
083519e9 +0x043:  movl   $"[%s][%d]_(0 == pSkill)",0x4(%esp)
083519f1 +0x04b:  lea    -0x54(%ebp),%eax
083519f4 +0x04e:  mov    %eax,(%esp)
083519f7 +0x051:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083519fc +0x056:  jmp    08351b72 <+0x1cc>
08351a01 +0x05b:  mov    0x10(%ebp),%eax
08351a04 +0x05e:  mov    %eax,(%esp)
08351a07 +0x061:  call   08374b7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb46
08351a0c +0x066:  mov    %eax,-0x58(%ebp)
08351a0f +0x069:  lea    -0x60(%ebp),%eax
08351a12 +0x06c:  mov    %eax,(%esp)
08351a15 +0x06f:  call   0838fb58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5f8
08351a1a +0x074:  mov    0xc(%ebp),%edx
08351a1d +0x077:  mov    %edx,%eax
08351a1f +0x079:  shl    $0x2,%eax
08351a22 +0x07c:  add    %edx,%eax
08351a24 +0x07e:  shl    $0x2,%eax
08351a27 +0x081:  mov    %eax,%edx
08351a29 +0x083:  add    0x8(%ebp),%edx
08351a2c +0x086:  lea    -0x70(%ebp),%eax
08351a2f +0x089:  lea    -0x58(%ebp),%ecx
08351a32 +0x08c:  mov    %ecx,0x8(%esp)
08351a36 +0x090:  mov    %edx,0x4(%esp)
08351a3a +0x094:  mov    %eax,(%esp)
08351a3d +0x097:  call   0838fba8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f648>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f648
08351a42 +0x09c:  sub    $0x4,%esp
08351a45 +0x09f:  mov    -0x70(%ebp),%eax
08351a48 +0x0a2:  mov    -0x6c(%ebp),%edx
08351a4b +0x0a5:  mov    %eax,-0x60(%ebp)
08351a4e +0x0a8:  mov    %edx,-0x5c(%ebp)
08351a51 +0x0ab:  mov    0xc(%ebp),%edx
08351a54 +0x0ae:  mov    %edx,%eax
08351a56 +0x0b0:  shl    $0x2,%eax
08351a59 +0x0b3:  add    %edx,%eax
08351a5b +0x0b5:  shl    $0x2,%eax
08351a5e +0x0b8:  mov    %eax,%edx
08351a60 +0x0ba:  add    0x8(%ebp),%edx
08351a63 +0x0bd:  lea    -0x44(%ebp),%eax
08351a66 +0x0c0:  mov    %edx,0x4(%esp)
08351a6a +0x0c4:  mov    %eax,(%esp)
08351a6d +0x0c7:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
08351a72 +0x0cc:  sub    $0x4,%esp
08351a75 +0x0cf:  lea    -0x44(%ebp),%eax
08351a78 +0x0d2:  mov    %eax,0x4(%esp)
08351a7c +0x0d6:  lea    -0x60(%ebp),%eax
08351a7f +0x0d9:  mov    %eax,(%esp)
08351a82 +0x0dc:  call   0838fbd4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f674>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f674
08351a87 +0x0e1:  test   %al,%al
08351a89 +0x0e3:  je     08351b2c <+0x186>
08351a8f +0x0e9:  lea    0x10(%ebp),%eax
08351a92 +0x0ec:  mov    %eax,0x8(%esp)
08351a96 +0x0f0:  lea    -0x58(%ebp),%eax
08351a99 +0x0f3:  mov    %eax,0x4(%esp)
08351a9d +0x0f7:  lea    -0x30(%ebp),%eax
08351aa0 +0x0fa:  mov    %eax,(%esp)
08351aa3 +0x0fd:  call   0838fbe8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f688>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f688
08351aa8 +0x102:  mov    0xc(%ebp),%edx
08351aab +0x105:  mov    %edx,%eax
08351aad +0x107:  shl    $0x2,%eax
08351ab0 +0x10a:  add    %edx,%eax
08351ab2 +0x10c:  shl    $0x2,%eax
08351ab5 +0x10f:  mov    %eax,%edx
08351ab7 +0x111:  add    0x8(%ebp),%edx
08351aba +0x114:  lea    -0x3c(%ebp),%eax
08351abd +0x117:  lea    -0x30(%ebp),%ecx
08351ac0 +0x11a:  mov    %ecx,0x8(%esp)
08351ac4 +0x11e:  mov    %edx,0x4(%esp)
08351ac8 +0x122:  mov    %eax,(%esp)
08351acb +0x125:  call   0838fc16 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f6b6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f6b6
08351ad0 +0x12a:  sub    $0x4,%esp
08351ad3 +0x12d:  mov    0x10(%ebp),%eax
08351ad6 +0x130:  mov    %eax,(%esp)
08351ad9 +0x133:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08351ade +0x138:  mov    %eax,-0x1c(%ebp)
08351ae1 +0x13b:  lea    0x10(%ebp),%eax
08351ae4 +0x13e:  mov    %eax,0x8(%esp)
08351ae8 +0x142:  lea    -0x1c(%ebp),%eax
08351aeb +0x145:  mov    %eax,0x4(%esp)
08351aef +0x149:  lea    -0x24(%ebp),%eax
08351af2 +0x14c:  mov    %eax,(%esp)
08351af5 +0x14f:  call   0838fc42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f6e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f6e2
08351afa +0x154:  mov    0xc(%ebp),%edx
08351afd +0x157:  mov    %edx,%eax
08351aff +0x159:  add    %eax,%eax
08351b01 +0x15b:  add    %edx,%eax
08351b03 +0x15d:  shl    $0x3,%eax
08351b06 +0x160:  add    $0xd0,%eax
08351b0b +0x165:  add    0x8(%ebp),%eax
08351b0e +0x168:  lea    0xc(%eax),%ecx
08351b11 +0x16b:  lea    -0x28(%ebp),%eax
08351b14 +0x16e:  lea    -0x24(%ebp),%edx
08351b17 +0x171:  mov    %edx,0x8(%esp)
08351b1b +0x175:  mov    %ecx,0x4(%esp)
08351b1f +0x179:  mov    %eax,(%esp)
08351b22 +0x17c:  call   0838fc70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f710
08351b27 +0x181:  sub    $0x4,%esp
08351b2a +0x184:  jmp    08351b72 <+0x1cc>
08351b2c +0x186:  movl   $0x5,0xc(%esp)
08351b34 +0x18e:  movl   $0xfa4,0x8(%esp)
08351b3c +0x196:  movl   $&_ZZN10CSkillList12insert_skillEiP6CSkillE19__PRETTY_FUNCTION__,0x4(%esp)
08351b44 +0x19e:  lea    -0x18(%ebp),%eax
08351b47 +0x1a1:  mov    %eax,(%esp)
08351b4a +0x1a4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08351b4f +0x1a9:  movl   $0xfa4,0xc(%esp)
08351b57 +0x1b1:  movl   $&_ZZN10CSkillList12insert_skillEiP6CSkillE19__PRETTY_FUNCTION__,0x8(%esp)
08351b5f +0x1b9:  movl   $"[%s][%d]_( itr != m_SkillList[job_type].end() )",0x4(%esp)
08351b67 +0x1c1:  lea    -0x18(%ebp),%eax
08351b6a +0x1c4:  mov    %eax,(%esp)
08351b6d +0x1c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08351b72 +0x1cc:  leave
08351b73 +0x1cd:  ret
```

## 反编译 C

```c
// CSkillList::insert_skill @ 0x83519a6

/* CSkillList::insert_skill(int, CSkill*) */

void __thiscall CSkillList::insert_skill(CSkillList *this,int param_1,CSkill *param_2)

{
  char cVar1;
  int local_74;
  undefined4 local_70;
  int local_64;
  undefined4 local_60;
  int local_5c;
  cMyTrace local_58 [16];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_48 [8]
  ;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_40 [12];
  pair<int_const,CSkill*> local_34 [8];
  pair local_2c [4];
  pair<int_const,CSkill*> local_28 [8];
  int local_20;
  cMyTrace local_1c [24];
  
  if (param_2 == (CSkill *)0x0) {
    cMyTrace::cMyTrace(local_58,"void CSkillList::insert_skill(int, CSkill*)",0xf91,5);
    cMyTrace::operator()
              (local_58,"[%s][%d]_(0 == pSkill)","void CSkillList::insert_skill(int, CSkill*)",0xf91
              );
  }
  else {
    local_5c = CSkill::get_index(param_2);
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_iterator();
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::find(&local_74);
    local_64 = local_74;
    local_60 = local_70;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_48);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
            ::operator==((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                          *)&local_64,(_Hashtable_iterator *)local_48);
    if (cVar1 == '\0') {
      cMyTrace::cMyTrace(local_1c,"void CSkillList::insert_skill(int, CSkill*)",0xfa4,5);
      cMyTrace::operator()
                (local_1c,"[%s][%d]_( itr != m_SkillList[job_type].end() )",
                 "void CSkillList::insert_skill(int, CSkill*)",0xfa4);
    }
    else {
      std::pair<int_const,CSkill*>::pair<int&,CSkill*&>(local_34,&local_5c,&param_2);
      __gnu_cxx::
      hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::insert
                (local_40,this + param_1 * 0x14);
      local_20 = CSkill::get_group(param_2);
      std::pair<int_const,CSkill*>::pair<int,CSkill*&>(local_28,&local_20,&param_2);
      std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::insert
                (local_2c);
    }
  }
  return;
}
```
