# find_skill

`_ZN10CSkillList10find_skillEii`

`CSkillList::find_skill(int, int)`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08351b74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08351b74  _ZN10CSkillList10find_skillEii
#           CSkillList::find_skill(int, int)
# range [0x08351b74, 0x08351c1d]
08351b74 +0x00:  push   %ebp
08351b75 +0x01:  mov    %esp,%ebp
08351b77 +0x03:  sub    $0x38,%esp
08351b7a +0x06:  cmpl   $0xa,0xc(%ebp)
08351b7e +0x0a:  jle    08351b8a <+0x16>
08351b80 +0x0c:  mov    $0x0,%eax
08351b85 +0x11:  jmp    08351c1b <+0xa7>
08351b8a +0x16:  lea    -0x18(%ebp),%eax
08351b8d +0x19:  mov    %eax,(%esp)
08351b90 +0x1c:  call   0838fb58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5f8
08351b95 +0x21:  mov    0xc(%ebp),%edx
08351b98 +0x24:  mov    %edx,%eax
08351b9a +0x26:  shl    $0x2,%eax
08351b9d +0x29:  add    %edx,%eax
08351b9f +0x2b:  shl    $0x2,%eax
08351ba2 +0x2e:  mov    %eax,%edx
08351ba4 +0x30:  add    0x8(%ebp),%edx
08351ba7 +0x33:  lea    -0x20(%ebp),%eax
08351baa +0x36:  lea    0x10(%ebp),%ecx
08351bad +0x39:  mov    %ecx,0x8(%esp)
08351bb1 +0x3d:  mov    %edx,0x4(%esp)
08351bb5 +0x41:  mov    %eax,(%esp)
08351bb8 +0x44:  call   0838fba8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f648>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f648
08351bbd +0x49:  sub    $0x4,%esp
08351bc0 +0x4c:  mov    -0x20(%ebp),%eax
08351bc3 +0x4f:  mov    -0x1c(%ebp),%edx
08351bc6 +0x52:  mov    %eax,-0x18(%ebp)
08351bc9 +0x55:  mov    %edx,-0x14(%ebp)
08351bcc +0x58:  mov    0xc(%ebp),%edx
08351bcf +0x5b:  mov    %edx,%eax
08351bd1 +0x5d:  shl    $0x2,%eax
08351bd4 +0x60:  add    %edx,%eax
08351bd6 +0x62:  shl    $0x2,%eax
08351bd9 +0x65:  mov    %eax,%edx
08351bdb +0x67:  add    0x8(%ebp),%edx
08351bde +0x6a:  lea    -0x10(%ebp),%eax
08351be1 +0x6d:  mov    %edx,0x4(%esp)
08351be5 +0x71:  mov    %eax,(%esp)
08351be8 +0x74:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
08351bed +0x79:  sub    $0x4,%esp
08351bf0 +0x7c:  lea    -0x10(%ebp),%eax
08351bf3 +0x7f:  mov    %eax,0x4(%esp)
08351bf7 +0x83:  lea    -0x18(%ebp),%eax
08351bfa +0x86:  mov    %eax,(%esp)
08351bfd +0x89:  call   0838fbd4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f674>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f674
08351c02 +0x8e:  test   %al,%al
08351c04 +0x90:  je     08351c0d <+0x99>
08351c06 +0x92:  mov    $0x0,%eax
08351c0b +0x97:  jmp    08351c1b <+0xa7>
08351c0d +0x99:  lea    -0x18(%ebp),%eax
08351c10 +0x9c:  mov    %eax,(%esp)
08351c13 +0x9f:  call   0838fb5e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5fe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5fe
08351c18 +0xa4:  mov    0x4(%eax),%eax
08351c1b +0xa7:  leave
08351c1c +0xa8:  ret
08351c1d +0xa9:  nop
```

## 反编译 C

```c
// CSkillList::find_skill @ 0x8351b74

/* CSkillList::find_skill(int, int) */

undefined4 CSkillList::find_skill(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
  local_14 [16];
  
  if (param_2 < 0xb) {
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
    ::_Hashtable_iterator();
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::find(&local_24);
    local_1c = local_24;
    local_18 = local_20;
    __gnu_cxx::hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
    ::end(local_14);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
            ::operator==((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                          *)&local_1c,(_Hashtable_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar3 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                            *)&local_1c);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
