# find_dungeon

`_ZNK12CDungeonList12find_dungeonEi`

`CDungeonList::find_dungeon(int) const`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d7ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d7ca  _ZNK12CDungeonList12find_dungeonEi
#           CDungeonList::find_dungeon(int) const
# range [0x0834d7ca, 0x0834d845]
0834d7ca +0x00:  push   %ebp
0834d7cb +0x01:  mov    %esp,%ebp
0834d7cd +0x03:  sub    $0x38,%esp
0834d7d0 +0x06:  lea    -0x18(%ebp),%eax
0834d7d3 +0x09:  mov    %eax,(%esp)
0834d7d6 +0x0c:  call   0838a8a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a342>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a342
0834d7db +0x11:  mov    0x8(%ebp),%edx
0834d7de +0x14:  lea    -0x20(%ebp),%eax
0834d7e1 +0x17:  lea    0xc(%ebp),%ecx
0834d7e4 +0x1a:  mov    %ecx,0x8(%esp)
0834d7e8 +0x1e:  mov    %edx,0x4(%esp)
0834d7ec +0x22:  mov    %eax,(%esp)
0834d7ef +0x25:  call   0838a8a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a348>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a348
0834d7f4 +0x2a:  sub    $0x4,%esp
0834d7f7 +0x2d:  mov    -0x20(%ebp),%eax
0834d7fa +0x30:  mov    -0x1c(%ebp),%edx
0834d7fd +0x33:  mov    %eax,-0x18(%ebp)
0834d800 +0x36:  mov    %edx,-0x14(%ebp)
0834d803 +0x39:  mov    0x8(%ebp),%edx
0834d806 +0x3c:  lea    -0x10(%ebp),%eax
0834d809 +0x3f:  mov    %edx,0x4(%esp)
0834d80d +0x43:  mov    %eax,(%esp)
0834d810 +0x46:  call   0838a8d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a374>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a374
0834d815 +0x4b:  sub    $0x4,%esp
0834d818 +0x4e:  lea    -0x10(%ebp),%eax
0834d81b +0x51:  mov    %eax,0x4(%esp)
0834d81f +0x55:  lea    -0x18(%ebp),%eax
0834d822 +0x58:  mov    %eax,(%esp)
0834d825 +0x5b:  call   0838a8fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a39a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a39a
0834d82a +0x60:  test   %al,%al
0834d82c +0x62:  je     0834d835 <+0x6b>
0834d82e +0x64:  mov    $0x0,%eax
0834d833 +0x69:  jmp    0834d843 <+0x79>
0834d835 +0x6b:  lea    -0x18(%ebp),%eax
0834d838 +0x6e:  mov    %eax,(%esp)
0834d83b +0x71:  call   0838a90e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a3ae
0834d840 +0x76:  mov    0x4(%eax),%eax
0834d843 +0x79:  leave
0834d844 +0x7a:  ret
0834d845 +0x7b:  nop
```

## 反编译 C

```c
// CDungeonList::find_dungeon @ 0x834d7ca

/* CDungeonList::find_dungeon(int) const */

undefined4 CDungeonList::find_dungeon(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_const_iterator();
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator==((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_1c,(_Hashtable_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
            ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
