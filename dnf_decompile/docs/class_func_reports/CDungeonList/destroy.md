# destroy

`_ZN12CDungeonList7destroyEv`

`CDungeonList::destroy()`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d610  _ZN12CDungeonList7destroyEv
#           CDungeonList::destroy()
# range [0x0834d610, 0x0834d6cb]
0834d610 +0x00:  push   %ebp
0834d611 +0x01:  mov    %esp,%ebp
0834d613 +0x03:  push   %ebx
0834d614 +0x04:  sub    $0x44,%esp
0834d617 +0x07:  movl   $0x0,-0xc(%ebp)
0834d61e +0x0e:  lea    -0x24(%ebp),%eax
0834d621 +0x11:  mov    %eax,(%esp)
0834d624 +0x14:  call   0838a744 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1e4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1e4
0834d629 +0x19:  mov    0x8(%ebp),%edx
0834d62c +0x1c:  lea    -0x30(%ebp),%eax
0834d62f +0x1f:  mov    %edx,0x4(%esp)
0834d633 +0x23:  mov    %eax,(%esp)
0834d636 +0x26:  call   0838a74a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1ea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1ea
0834d63b +0x2b:  sub    $0x4,%esp
0834d63e +0x2e:  mov    -0x30(%ebp),%eax
0834d641 +0x31:  mov    -0x2c(%ebp),%edx
0834d644 +0x34:  mov    %eax,-0x24(%ebp)
0834d647 +0x37:  mov    %edx,-0x20(%ebp)
0834d64a +0x3a:  jmp    0834d691 <+0x81>
0834d64c +0x3c:  lea    -0x24(%ebp),%eax
0834d64f +0x3f:  mov    %eax,(%esp)
0834d652 +0x42:  call   0838a7aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a24a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a24a
0834d657 +0x47:  mov    0x4(%eax),%eax
0834d65a +0x4a:  mov    %eax,-0xc(%ebp)
0834d65d +0x4d:  mov    -0xc(%ebp),%ebx
0834d660 +0x50:  test   %ebx,%ebx
0834d662 +0x52:  je     0834d674 <+0x64>
0834d664 +0x54:  mov    %ebx,(%esp)
0834d667 +0x57:  call   08376fd8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6a78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6a78
0834d66c +0x5c:  mov    %ebx,(%esp)
0834d66f +0x5f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834d674 +0x64:  lea    -0x14(%ebp),%eax
0834d677 +0x67:  movl   $0x0,0x8(%esp)
0834d67f +0x6f:  lea    -0x24(%ebp),%edx
0834d682 +0x72:  mov    %edx,0x4(%esp)
0834d686 +0x76:  mov    %eax,(%esp)
0834d689 +0x79:  call   0838a7be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a25e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a25e
0834d68e +0x7e:  sub    $0x4,%esp
0834d691 +0x81:  mov    0x8(%ebp),%edx
0834d694 +0x84:  lea    -0x1c(%ebp),%eax
0834d697 +0x87:  mov    %edx,0x4(%esp)
0834d69b +0x8b:  mov    %eax,(%esp)
0834d69e +0x8e:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
0834d6a3 +0x93:  sub    $0x4,%esp
0834d6a6 +0x96:  lea    -0x1c(%ebp),%eax
0834d6a9 +0x99:  mov    %eax,0x4(%esp)
0834d6ad +0x9d:  lea    -0x24(%ebp),%eax
0834d6b0 +0xa0:  mov    %eax,(%esp)
0834d6b3 +0xa3:  call   0838a796 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a236>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a236
0834d6b8 +0xa8:  test   %al,%al
0834d6ba +0xaa:  jne    0834d64c <+0x3c>
0834d6bc +0xac:  mov    0x8(%ebp),%eax
0834d6bf +0xaf:  mov    %eax,(%esp)
0834d6c2 +0xb2:  call   0838a7f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a294>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a294
0834d6c7 +0xb7:  mov    -0x4(%ebp),%ebx
0834d6ca +0xba:  leave
0834d6cb +0xbb:  ret
```

## 反编译 C

```c
// CDungeonList::destroy @ 0x834d610

/* CDungeonList::destroy() */

void __thiscall CDungeonList::destroy(CDungeonList *this)

{
  CDungeon *this_00;
  char cVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_18 [8];
  CDungeon *local_10;
  
  local_10 = (CDungeon *)0x0;
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
            ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
              *)&local_34);
  local_28 = local_34;
  local_24 = local_30;
  while( true ) {
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28);
    this_00 = *(CDungeon **)(iVar2 + 4);
    local_10 = this_00;
    if (this_00 != (CDungeon *)0x0) {
      CDungeon::~CDungeon(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::operator++(local_18,(int)&local_28);
  }
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::clear
            ((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
              *)this);
  return;
}
```
