# destroy

`_ZN10CSkillList7destroyEv`

`CSkillList::destroy()`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08350b42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350b42  _ZN10CSkillList7destroyEv
#           CSkillList::destroy()
# range [0x08350b42, 0x08350c25]
08350b42 +0x00:  push   %ebp
08350b43 +0x01:  mov    %esp,%ebp
08350b45 +0x03:  push   %ebx
08350b46 +0x04:  sub    $0x34,%esp
08350b49 +0x07:  movl   $0x0,-0x18(%ebp)
08350b50 +0x0e:  jmp    08350c11 <+0xcf>
08350b55 +0x13:  mov    -0x18(%ebp),%edx
08350b58 +0x16:  mov    %edx,%eax
08350b5a +0x18:  shl    $0x2,%eax
08350b5d +0x1b:  add    %edx,%eax
08350b5f +0x1d:  shl    $0x2,%eax
08350b62 +0x20:  add    0x8(%ebp),%eax
08350b65 +0x23:  mov    %eax,-0x14(%ebp)
08350b68 +0x26:  lea    -0x20(%ebp),%eax
08350b6b +0x29:  mov    -0x14(%ebp),%edx
08350b6e +0x2c:  mov    %edx,0x4(%esp)
08350b72 +0x30:  mov    %eax,(%esp)
08350b75 +0x33:  call   0838f6d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f178>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f178
08350b7a +0x38:  sub    $0x4,%esp
08350b7d +0x3b:  lea    -0x28(%ebp),%eax
08350b80 +0x3e:  mov    -0x14(%ebp),%edx
08350b83 +0x41:  mov    %edx,0x4(%esp)
08350b87 +0x45:  mov    %eax,(%esp)
08350b8a +0x48:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
08350b8f +0x4d:  sub    $0x4,%esp
08350b92 +0x50:  jmp    08350bc7 <+0x85>
08350b94 +0x52:  lea    -0x20(%ebp),%eax
08350b97 +0x55:  mov    %eax,(%esp)
08350b9a +0x58:  call   0838f7d0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f270>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f270
08350b9f +0x5d:  mov    0x4(%eax),%eax
08350ba2 +0x60:  mov    %eax,-0x10(%ebp)
08350ba5 +0x63:  mov    -0x10(%ebp),%ebx
08350ba8 +0x66:  test   %ebx,%ebx
08350baa +0x68:  je     08350bbc <+0x7a>
08350bac +0x6a:  mov    %ebx,(%esp)
08350baf +0x6d:  call   08379fd8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a78
08350bb4 +0x72:  mov    %ebx,(%esp)
08350bb7 +0x75:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08350bbc +0x7a:  lea    -0x20(%ebp),%eax
08350bbf +0x7d:  mov    %eax,(%esp)
08350bc2 +0x80:  call   0838f738 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f1d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f1d8
08350bc7 +0x85:  lea    -0x28(%ebp),%eax
08350bca +0x88:  mov    %eax,0x4(%esp)
08350bce +0x8c:  lea    -0x20(%ebp),%eax
08350bd1 +0x8f:  mov    %eax,(%esp)
08350bd4 +0x92:  call   0838f724 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f1c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f1c4
08350bd9 +0x97:  test   %al,%al
08350bdb +0x99:  jne    08350b94 <+0x52>
08350bdd +0x9b:  mov    -0x14(%ebp),%eax
08350be0 +0x9e:  mov    %eax,(%esp)
08350be3 +0xa1:  call   0838f7de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f27e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f27e
08350be8 +0xa6:  mov    -0x18(%ebp),%edx
08350beb +0xa9:  mov    %edx,%eax
08350bed +0xab:  add    %eax,%eax
08350bef +0xad:  add    %edx,%eax
08350bf1 +0xaf:  shl    $0x3,%eax
08350bf4 +0xb2:  add    $0xd0,%eax
08350bf9 +0xb7:  add    0x8(%ebp),%eax
08350bfc +0xba:  add    $0xc,%eax
08350bff +0xbd:  mov    %eax,-0xc(%ebp)
08350c02 +0xc0:  mov    -0xc(%ebp),%eax
08350c05 +0xc3:  mov    %eax,(%esp)
08350c08 +0xc6:  call   0838f7f2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f292>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f292
08350c0d +0xcb:  addl   $0x1,-0x18(%ebp)
08350c11 +0xcf:  cmpl   $0xa,-0x18(%ebp)
08350c15 +0xd3:  setle  %al
08350c18 +0xd6:  test   %al,%al
08350c1a +0xd8:  jne    08350b55 <+0x13>
08350c20 +0xde:  mov    -0x4(%ebp),%ebx
08350c23 +0xe1:  leave
08350c24 +0xe2:  ret
08350c25 +0xe3:  nop
```

## 反编译 C

```c
// CSkillList::destroy @ 0x8350b42

/* CSkillList::destroy() */

void __thiscall CSkillList::destroy(CSkillList *this)

{
  CSkill *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_2c [8]
  ;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_24 [8]
  ;
  int local_1c;
  CSkillList *local_18;
  CSkill *local_14;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *local_10;
  
  for (local_1c = 0; local_1c < 0xb; local_1c = local_1c + 1) {
    local_18 = this + local_1c * 0x14;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::begin(local_24);
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_2c);
    while( true ) {
      cVar1 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator!=((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                            *)local_24,(_Hashtable_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator*((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                           *)local_24);
      this_00 = *(CSkill **)(iVar2 + 4);
      local_14 = this_00;
      if (this_00 != (CSkill *)0x0) {
        CSkill::~CSkill(this_00);
        operator_delete(this_00);
      }
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                    *)local_24);
    }
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::clear((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *
            )local_18);
    local_10 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
               (this + local_1c * 0x18 + 0xdc);
    std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::clear
              (local_10);
  }
  return;
}
```
