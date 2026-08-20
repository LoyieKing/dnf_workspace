# get_ran_groupskill_index

`_ZN10CSkillList24get_ran_groupskill_indexEiii`

`CSkillList::get_ran_groupskill_index(int, int, int)`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08351c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08351c1e  _ZN10CSkillList24get_ran_groupskill_indexEiii
#           CSkillList::get_ran_groupskill_index(int, int, int)
# range [0x08351c1e, 0x08351e17]
08351c1e +0x000:  push   %ebp
08351c1f +0x001:  mov    %esp,%ebp
08351c21 +0x003:  sub    $0x68,%esp
08351c24 +0x006:  mov    0xc(%ebp),%edx
08351c27 +0x009:  mov    %edx,%eax
08351c29 +0x00b:  add    %eax,%eax
08351c2b +0x00d:  add    %edx,%eax
08351c2d +0x00f:  shl    $0x3,%eax
08351c30 +0x012:  add    $0xd0,%eax
08351c35 +0x017:  add    0x8(%ebp),%eax
08351c38 +0x01a:  lea    0xc(%eax),%edx
08351c3b +0x01d:  lea    0x10(%ebp),%eax
08351c3e +0x020:  mov    %eax,0x4(%esp)
08351c42 +0x024:  mov    %edx,(%esp)
08351c45 +0x027:  call   0838fc9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f73c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f73c
08351c4a +0x02c:  mov    %eax,-0x18(%ebp)
08351c4d +0x02f:  cmpl   $0x0,-0x18(%ebp)
08351c51 +0x033:  jne    08351c5d <+0x3f>
08351c53 +0x035:  mov    $0xffffffff,%eax
08351c58 +0x03a:  jmp    08351e15 <+0x1f7>
08351c5d +0x03f:  mov    -0x18(%ebp),%eax
08351c60 +0x042:  mov    %eax,(%esp)
08351c63 +0x045:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08351c68 +0x04a:  mov    %eax,-0x14(%ebp)
08351c6b +0x04d:  mov    0xc(%ebp),%edx
08351c6e +0x050:  mov    %edx,%eax
08351c70 +0x052:  add    %eax,%eax
08351c72 +0x054:  add    %edx,%eax
08351c74 +0x056:  shl    $0x3,%eax
08351c77 +0x059:  add    $0xd0,%eax
08351c7c +0x05e:  add    0x8(%ebp),%eax
08351c7f +0x061:  lea    0xc(%eax),%ecx
08351c82 +0x064:  lea    -0x40(%ebp),%eax
08351c85 +0x067:  lea    0x10(%ebp),%edx
08351c88 +0x06a:  mov    %edx,0x8(%esp)
08351c8c +0x06e:  mov    %ecx,0x4(%esp)
08351c90 +0x072:  mov    %eax,(%esp)
08351c93 +0x075:  call   0838fcb6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f756>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f756
08351c98 +0x07a:  sub    $0x4,%esp
08351c9b +0x07d:  lea    -0x40(%ebp),%eax
08351c9e +0x080:  mov    %eax,0x4(%esp)
08351ca2 +0x084:  lea    -0x48(%ebp),%eax
08351ca5 +0x087:  mov    %eax,(%esp)
08351ca8 +0x08a:  call   0838fce2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f782>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f782
08351cad +0x08f:  mov    -0x48(%ebp),%eax
08351cb0 +0x092:  mov    %eax,-0x4c(%ebp)
08351cb3 +0x095:  movl   $0x0,-0xc(%ebp)
08351cba +0x09c:  jmp    08351cdd <+0xbf>
08351cbc +0x09e:  lea    -0x38(%ebp),%eax
08351cbf +0x0a1:  movl   $0x0,0x8(%esp)
08351cc7 +0x0a9:  lea    -0x4c(%ebp),%edx
08351cca +0x0ac:  mov    %edx,0x4(%esp)
08351cce +0x0b0:  mov    %eax,(%esp)
08351cd1 +0x0b3:  call   0838fd24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f7c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f7c4
08351cd6 +0x0b8:  sub    $0x4,%esp
08351cd9 +0x0bb:  addl   $0x1,-0xc(%ebp)
08351cdd +0x0bf:  mov    -0xc(%ebp),%eax
08351ce0 +0x0c2:  cmp    -0x14(%ebp),%eax
08351ce3 +0x0c5:  setl   %al
08351ce6 +0x0c8:  test   %al,%al
08351ce8 +0x0ca:  jne    08351cbc <+0x9e>
08351cea +0x0cc:  lea    -0x4c(%ebp),%eax
08351ced +0x0cf:  mov    %eax,(%esp)
08351cf0 +0x0d2:  call   0838fd62 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f802>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f802
08351cf5 +0x0d7:  mov    0x4(%eax),%eax
08351cf8 +0x0da:  mov    %eax,-0x10(%ebp)
08351cfb +0x0dd:  mov    -0x10(%ebp),%eax
08351cfe +0x0e0:  mov    %eax,(%esp)
08351d01 +0x0e3:  call   08374b7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb46
08351d06 +0x0e8:  cmp    0x14(%ebp),%eax
08351d09 +0x0eb:  sete   %al
08351d0c +0x0ee:  test   %al,%al
08351d0e +0x0f0:  je     08351e0a <+0x1ec>
08351d14 +0x0f6:  lea    -0x34(%ebp),%eax
08351d17 +0x0f9:  movl   $0x0,0x8(%esp)
08351d1f +0x101:  lea    -0x4c(%ebp),%edx
08351d22 +0x104:  mov    %edx,0x4(%esp)
08351d26 +0x108:  mov    %eax,(%esp)
08351d29 +0x10b:  call   0838fd24 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f7c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f7c4
08351d2e +0x110:  sub    $0x4,%esp
08351d31 +0x113:  lea    -0x48(%ebp),%eax
08351d34 +0x116:  add    $0x4,%eax
08351d37 +0x119:  mov    %eax,0x4(%esp)
08351d3b +0x11d:  lea    -0x4c(%ebp),%eax
08351d3e +0x120:  mov    %eax,(%esp)
08351d41 +0x123:  call   0838fd70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f810>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f810
08351d46 +0x128:  test   %al,%al
08351d48 +0x12a:  je     08351df9 <+0x1db>
08351d4e +0x130:  lea    -0x30(%ebp),%eax
08351d51 +0x133:  movl   $0x0,0x8(%esp)
08351d59 +0x13b:  lea    -0x4c(%ebp),%edx
08351d5c +0x13e:  mov    %edx,0x4(%esp)
08351d60 +0x142:  mov    %eax,(%esp)
08351d63 +0x145:  call   0838fd84 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f824>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f824
08351d68 +0x14a:  sub    $0x4,%esp
08351d6b +0x14d:  lea    -0x48(%ebp),%eax
08351d6e +0x150:  mov    %eax,0x4(%esp)
08351d72 +0x154:  lea    -0x4c(%ebp),%eax
08351d75 +0x157:  mov    %eax,(%esp)
08351d78 +0x15a:  call   0838fd70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f810>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f810
08351d7d +0x15f:  test   %al,%al
08351d7f +0x161:  je     08351dc9 <+0x1ab>
08351d81 +0x163:  movl   $0x5,0xc(%esp)
08351d89 +0x16b:  movl   $0xfde,0x8(%esp)
08351d91 +0x173:  movl   $&_ZZN10CSkillList24get_ran_groupskill_indexEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08351d99 +0x17b:  lea    -0x2c(%ebp),%eax
08351d9c +0x17e:  mov    %eax,(%esp)
08351d9f +0x181:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08351da4 +0x186:  movl   $0xfde,0xc(%esp)
08351dac +0x18e:  movl   $&_ZZN10CSkillList24get_ran_groupskill_indexEiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08351db4 +0x196:  movl   $"[%s][%d]_( i == res.first )",0x4(%esp)
08351dbc +0x19e:  lea    -0x2c(%ebp),%eax
08351dbf +0x1a1:  mov    %eax,(%esp)
08351dc2 +0x1a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08351dc7 +0x1a9:  jmp    08351e0a <+0x1ec>
08351dc9 +0x1ab:  lea    -0x1c(%ebp),%eax
08351dcc +0x1ae:  movl   $0x0,0x8(%esp)
08351dd4 +0x1b6:  lea    -0x4c(%ebp),%edx
08351dd7 +0x1b9:  mov    %edx,0x4(%esp)
08351ddb +0x1bd:  mov    %eax,(%esp)
08351dde +0x1c0:  call   0838fd84 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f824>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f824
08351de3 +0x1c5:  sub    $0x4,%esp
08351de6 +0x1c8:  lea    -0x4c(%ebp),%eax
08351de9 +0x1cb:  mov    %eax,(%esp)
08351dec +0x1ce:  call   0838fd62 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f802>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f802
08351df1 +0x1d3:  mov    0x4(%eax),%eax
08351df4 +0x1d6:  mov    %eax,-0x10(%ebp)
08351df7 +0x1d9:  jmp    08351e0a <+0x1ec>
08351df9 +0x1db:  lea    -0x4c(%ebp),%eax
08351dfc +0x1de:  mov    %eax,(%esp)
08351dff +0x1e1:  call   0838fd62 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f802>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f802
08351e04 +0x1e6:  mov    0x4(%eax),%eax
08351e07 +0x1e9:  mov    %eax,-0x10(%ebp)
08351e0a +0x1ec:  mov    -0x10(%ebp),%eax
08351e0d +0x1ef:  mov    %eax,(%esp)
08351e10 +0x1f2:  call   08374b7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb46>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb46
08351e15 +0x1f7:  leave
08351e16 +0x1f8:  ret
08351e17 +0x1f9:  nop
```

## 反编译 C

```c
// CSkillList::get_ran_groupskill_index @ 0x8351c1e

/* CSkillList::get_ran_groupskill_index(int, int, int) */

undefined4 __thiscall
CSkillList::get_ran_groupskill_index(CSkillList *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  _Rb_tree_const_iterator a_Stack_48 [4];
  int local_44 [2];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_34 [4];
  cMyTrace local_30 [16];
  _Rb_tree_const_iterator<std::pair<int_const,CSkill*>> local_20 [4];
  int local_1c;
  int local_18;
  CSkill *local_14;
  int local_10;
  
  local_1c = std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>
             ::count((multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>
                      *)(this + param_1 * 0x18 + 0xdc),&param_2);
  if (local_1c == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = get_rand_int(local_1c);
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::
    equal_range(local_44);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>>
    ::
    pair<std::_Rb_tree_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_iterator<std::pair<int_const,CSkill*>>>
              ((pair<std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>,std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>>
                *)&local_4c,(pair *)local_44);
    local_50 = local_4c;
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator++
                (local_3c,(int)&local_50);
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
    local_14 = *(CSkill **)(iVar3 + 4);
    iVar3 = CSkill::get_index(local_14);
    if (iVar3 == param_3) {
      std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator++
                (local_38,(int)&local_50);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator==
                        ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50,
                         a_Stack_48);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
        local_14 = *(CSkill **)(iVar3 + 4);
      }
      else {
        std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator--
                  (local_34,(int)&local_50);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator==
                          ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50,
                           (_Rb_tree_const_iterator *)&local_4c);
        if (cVar1 == '\0') {
          std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator--
                    (local_20,(int)&local_50);
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CSkill*>>::operator->
                            ((_Rb_tree_const_iterator<std::pair<int_const,CSkill*>> *)&local_50);
          local_14 = *(CSkill **)(iVar3 + 4);
        }
        else {
          cMyTrace::cMyTrace(local_30,"int CSkillList::get_ran_groupskill_index(int, int, int)",
                             0xfde,5);
          cMyTrace::operator()
                    (local_30,"[%s][%d]_( i == res.first )",
                     "int CSkillList::get_ran_groupskill_index(int, int, int)",0xfde);
        }
      }
    }
    uVar2 = CSkill::get_index(local_14);
  }
  return uVar2;
}
```
