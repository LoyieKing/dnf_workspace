# get_dungeon_at_index

`_ZNK12CDungeonList20get_dungeon_at_indexEi`

`CDungeonList::get_dungeon_at_index(int) const`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d846` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d846  _ZNK12CDungeonList20get_dungeon_at_indexEi
#           CDungeonList::get_dungeon_at_index(int) const
# range [0x0834d846, 0x0834d8eb]
0834d846 +0x00:  push   %ebp
0834d847 +0x01:  mov    %esp,%ebp
0834d849 +0x03:  sub    $0x48,%esp
0834d84c +0x06:  lea    -0x24(%ebp),%eax
0834d84f +0x09:  mov    %eax,(%esp)
0834d852 +0x0c:  call   0838a8a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a342>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a342
0834d857 +0x11:  movl   $0x0,-0xc(%ebp)
0834d85e +0x18:  mov    0x8(%ebp),%edx
0834d861 +0x1b:  lea    -0x30(%ebp),%eax
0834d864 +0x1e:  mov    %edx,0x4(%esp)
0834d868 +0x22:  mov    %eax,(%esp)
0834d86b +0x25:  call   0838a922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3c2
0834d870 +0x2a:  sub    $0x4,%esp
0834d873 +0x2d:  mov    -0x30(%ebp),%eax
0834d876 +0x30:  mov    -0x2c(%ebp),%edx
0834d879 +0x33:  mov    %eax,-0x24(%ebp)
0834d87c +0x36:  mov    %edx,-0x20(%ebp)
0834d87f +0x39:  jmp    0834d8ba <+0x74>
0834d881 +0x3b:  mov    0xc(%ebp),%eax
0834d884 +0x3e:  cmp    -0xc(%ebp),%eax
0834d887 +0x41:  jne    0834d899 <+0x53>
0834d889 +0x43:  lea    -0x24(%ebp),%eax
0834d88c +0x46:  mov    %eax,(%esp)
0834d88f +0x49:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
0834d894 +0x4e:  mov    0x4(%eax),%eax
0834d897 +0x51:  jmp    0834d8ea <+0xa4>
0834d899 +0x53:  addl   $0x1,-0xc(%ebp)
0834d89d +0x57:  lea    -0x14(%ebp),%eax
0834d8a0 +0x5a:  movl   $0x0,0x8(%esp)
0834d8a8 +0x62:  lea    -0x24(%ebp),%edx
0834d8ab +0x65:  mov    %edx,0x4(%esp)
0834d8af +0x69:  mov    %eax,(%esp)
0834d8b2 +0x6c:  call   0838a95c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3fc
0834d8b7 +0x71:  sub    $0x4,%esp
0834d8ba +0x74:  mov    0x8(%ebp),%edx
0834d8bd +0x77:  lea    -0x1c(%ebp),%eax
0834d8c0 +0x7a:  mov    %edx,0x4(%esp)
0834d8c4 +0x7e:  mov    %eax,(%esp)
0834d8c7 +0x81:  call   0838a8d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a374>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a374
0834d8cc +0x86:  sub    $0x4,%esp
0834d8cf +0x89:  lea    -0x1c(%ebp),%eax
0834d8d2 +0x8c:  mov    %eax,0x4(%esp)
0834d8d6 +0x90:  lea    -0x24(%ebp),%eax
0834d8d9 +0x93:  mov    %eax,(%esp)
0834d8dc +0x96:  call   0838a948 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3e8
0834d8e1 +0x9b:  test   %al,%al
0834d8e3 +0x9d:  jne    0834d881 <+0x3b>
0834d8e5 +0x9f:  mov    $0x0,%eax
0834d8ea +0xa4:  leave
0834d8eb +0xa5:  ret
```

## 反编译 C

```c
// CDungeonList::get_dungeon_at_index @ 0x834d846

/* CDungeonList::get_dungeon_at_index(int) const */

undefined4 __thiscall CDungeonList::get_dungeon_at_index(CDungeonList *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_18 [8];
  int local_10;
  
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_const_iterator();
  local_10 = 0;
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
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_28,(_Hashtable_const_iterator *)local_20);
    if (cVar1 == '\0') {
      return 0;
    }
    if (param_1 == local_10) break;
    local_10 = local_10 + 1;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
    ::operator++(local_18,(int)&local_28);
  }
  iVar2 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_28);
  return *(undefined4 *)(iVar2 + 4);
}
```
