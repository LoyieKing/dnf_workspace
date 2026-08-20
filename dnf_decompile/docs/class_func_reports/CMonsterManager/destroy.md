# destroy

`_ZN15CMonsterManager7destroyEv`

`CMonsterManager::destroy()`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834f9be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f9be  _ZN15CMonsterManager7destroyEv
#           CMonsterManager::destroy()
# range [0x0834f9be, 0x0834fa83]
0834f9be +0x00:  push   %ebp
0834f9bf +0x01:  mov    %esp,%ebp
0834f9c1 +0x03:  push   %ebx
0834f9c2 +0x04:  sub    $0x44,%esp
0834f9c5 +0x07:  movl   $0x0,-0xc(%ebp)
0834f9cc +0x0e:  lea    -0x24(%ebp),%eax
0834f9cf +0x11:  mov    %eax,(%esp)
0834f9d2 +0x14:  call   0838f25c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ecfc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ecfc
0834f9d7 +0x19:  mov    0x8(%ebp),%eax
0834f9da +0x1c:  lea    0x18(%eax),%edx
0834f9dd +0x1f:  lea    -0x30(%ebp),%eax
0834f9e0 +0x22:  mov    %edx,0x4(%esp)
0834f9e4 +0x26:  mov    %eax,(%esp)
0834f9e7 +0x29:  call   0838f262 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed02
0834f9ec +0x2e:  sub    $0x4,%esp
0834f9ef +0x31:  mov    -0x30(%ebp),%eax
0834f9f2 +0x34:  mov    -0x2c(%ebp),%edx
0834f9f5 +0x37:  mov    %eax,-0x24(%ebp)
0834f9f8 +0x3a:  mov    %edx,-0x20(%ebp)
0834f9fb +0x3d:  jmp    0834fa42 <+0x84>
0834f9fd +0x3f:  lea    -0x24(%ebp),%eax
0834fa00 +0x42:  mov    %eax,(%esp)
0834fa03 +0x45:  call   0838f2c2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed62>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed62
0834fa08 +0x4a:  mov    0x4(%eax),%eax
0834fa0b +0x4d:  mov    %eax,-0xc(%ebp)
0834fa0e +0x50:  lea    -0x14(%ebp),%eax
0834fa11 +0x53:  movl   $0x0,0x8(%esp)
0834fa19 +0x5b:  lea    -0x24(%ebp),%edx
0834fa1c +0x5e:  mov    %edx,0x4(%esp)
0834fa20 +0x62:  mov    %eax,(%esp)
0834fa23 +0x65:  call   0838f2d6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed76>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed76
0834fa28 +0x6a:  sub    $0x4,%esp
0834fa2b +0x6d:  mov    -0xc(%ebp),%ebx
0834fa2e +0x70:  test   %ebx,%ebx
0834fa30 +0x72:  je     0834fa42 <+0x84>
0834fa32 +0x74:  mov    %ebx,(%esp)
0834fa35 +0x77:  call   08379dce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x986e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x986e
0834fa3a +0x7c:  mov    %ebx,(%esp)
0834fa3d +0x7f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834fa42 +0x84:  mov    0x8(%ebp),%eax
0834fa45 +0x87:  lea    0x18(%eax),%edx
0834fa48 +0x8a:  lea    -0x1c(%ebp),%eax
0834fa4b +0x8d:  mov    %edx,0x4(%esp)
0834fa4f +0x91:  mov    %eax,(%esp)
0834fa52 +0x94:  call   0838f288 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed28
0834fa57 +0x99:  sub    $0x4,%esp
0834fa5a +0x9c:  lea    -0x1c(%ebp),%eax
0834fa5d +0x9f:  mov    %eax,0x4(%esp)
0834fa61 +0xa3:  lea    -0x24(%ebp),%eax
0834fa64 +0xa6:  mov    %eax,(%esp)
0834fa67 +0xa9:  call   0838f2ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed4e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed4e
0834fa6c +0xae:  test   %al,%al
0834fa6e +0xb0:  jne    0834f9fd <+0x3f>
0834fa70 +0xb2:  mov    0x8(%ebp),%eax
0834fa73 +0xb5:  add    $0x18,%eax
0834fa76 +0xb8:  mov    %eax,(%esp)
0834fa79 +0xbb:  call   0838f30c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edac
0834fa7e +0xc0:  mov    -0x4(%ebp),%ebx
0834fa81 +0xc3:  leave
0834fa82 +0xc4:  ret
0834fa83 +0xc5:  nop
```

## 反编译 C

```c
// CMonsterManager::destroy @ 0x834f9be

/* CMonsterManager::destroy() */

void __thiscall CMonsterManager::destroy(CMonsterManager *this)

{
  CMonster *pCVar1;
  char cVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  local_18 [8];
  CMonster *local_10;
  
  local_10 = (CMonster *)0x0;
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::begin
            ((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
              *)&local_34);
  local_28 = local_34;
  local_24 = local_30;
  while( true ) {
    __gnu_cxx::
    hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
              (local_20);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_28,(_Hashtable_iterator *)local_20);
    if (cVar2 == '\0') break;
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_28);
    local_10 = *(CMonster **)(iVar3 + 4);
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
    ::operator++(local_18,(int)&local_28);
    pCVar1 = local_10;
    if (local_10 != (CMonster *)0x0) {
      CMonster::~CMonster(local_10);
      operator_delete(pCVar1);
    }
  }
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::clear
            ((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
              *)(this + 0x18));
  return;
}
```
