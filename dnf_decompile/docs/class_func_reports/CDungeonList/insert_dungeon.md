# insert_dungeon

`_ZN12CDungeonList14insert_dungeonEP8CDungeon`

`CDungeonList::insert_dungeon(CDungeon*)`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d6cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d6cc  _ZN12CDungeonList14insert_dungeonEP8CDungeon
#           CDungeonList::insert_dungeon(CDungeon*)
# range [0x0834d6cc, 0x0834d7c9]
0834d6cc +0x00:  push   %ebp
0834d6cd +0x01:  mov    %esp,%ebp
0834d6cf +0x03:  sub    $0x68,%esp
0834d6d2 +0x06:  lea    -0x34(%ebp),%eax
0834d6d5 +0x09:  mov    %eax,(%esp)
0834d6d8 +0x0c:  call   0838a744 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a1e4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a1e4
0834d6dd +0x11:  mov    0xc(%ebp),%eax
0834d6e0 +0x14:  mov    %eax,(%esp)
0834d6e3 +0x17:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0834d6e8 +0x1c:  mov    %eax,-0x2c(%ebp)
0834d6eb +0x1f:  mov    0x8(%ebp),%edx
0834d6ee +0x22:  lea    -0x40(%ebp),%eax
0834d6f1 +0x25:  lea    -0x2c(%ebp),%ecx
0834d6f4 +0x28:  mov    %ecx,0x8(%esp)
0834d6f8 +0x2c:  mov    %edx,0x4(%esp)
0834d6fc +0x30:  mov    %eax,(%esp)
0834d6ff +0x33:  call   0838a808 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a2a8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a2a8
0834d704 +0x38:  sub    $0x4,%esp
0834d707 +0x3b:  mov    -0x40(%ebp),%eax
0834d70a +0x3e:  mov    -0x3c(%ebp),%edx
0834d70d +0x41:  mov    %eax,-0x34(%ebp)
0834d710 +0x44:  mov    %edx,-0x30(%ebp)
0834d713 +0x47:  mov    0x8(%ebp),%edx
0834d716 +0x4a:  lea    -0x28(%ebp),%eax
0834d719 +0x4d:  mov    %edx,0x4(%esp)
0834d71d +0x51:  mov    %eax,(%esp)
0834d720 +0x54:  call   0838a770 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a210>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a210
0834d725 +0x59:  sub    $0x4,%esp
0834d728 +0x5c:  lea    -0x28(%ebp),%eax
0834d72b +0x5f:  mov    %eax,0x4(%esp)
0834d72f +0x63:  lea    -0x34(%ebp),%eax
0834d732 +0x66:  mov    %eax,(%esp)
0834d735 +0x69:  call   0838a834 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a2d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a2d4
0834d73a +0x6e:  test   %al,%al
0834d73c +0x70:  je     0834d788 <+0xbc>
0834d73e +0x72:  mov    0xc(%ebp),%eax
0834d741 +0x75:  mov    %eax,(%esp)
0834d744 +0x78:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0834d749 +0x7d:  mov    %eax,-0xc(%ebp)
0834d74c +0x80:  lea    0xc(%ebp),%eax
0834d74f +0x83:  mov    %eax,0x8(%esp)
0834d753 +0x87:  lea    -0xc(%ebp),%eax
0834d756 +0x8a:  mov    %eax,0x4(%esp)
0834d75a +0x8e:  lea    -0x14(%ebp),%eax
0834d75d +0x91:  mov    %eax,(%esp)
0834d760 +0x94:  call   0838a848 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a2e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a2e8
0834d765 +0x99:  mov    0x8(%ebp),%edx
0834d768 +0x9c:  lea    -0x20(%ebp),%eax
0834d76b +0x9f:  lea    -0x14(%ebp),%ecx
0834d76e +0xa2:  mov    %ecx,0x8(%esp)
0834d772 +0xa6:  mov    %edx,0x4(%esp)
0834d776 +0xaa:  mov    %eax,(%esp)
0834d779 +0xad:  call   0838a876 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a316>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a316
0834d77e +0xb2:  sub    $0x4,%esp
0834d781 +0xb5:  mov    $0x1,%eax
0834d786 +0xba:  jmp    0834d7c8 <+0xfc>
0834d788 +0xbc:  mov    0xc(%ebp),%eax
0834d78b +0xbf:  mov    %eax,(%esp)
0834d78e +0xc2:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0834d793 +0xc7:  mov    %eax,0x14(%esp)
0834d797 +0xcb:  movl   $"Already registed dungeon index detected : %d",0x10(%esp)
0834d79f +0xd3:  movl   $0x921,0xc(%esp)
0834d7a7 +0xdb:  movl   $&_ZZN12CDungeonList14insert_dungeonEP8CDungeonE19__PRETTY_FUNCTION__,0x8(%esp)
0834d7af +0xe3:  movl   $"data_manager.cpp",0x4(%esp)
0834d7b7 +0xeb:  movl   $0x1,(%esp)
0834d7be +0xf2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834d7c3 +0xf7:  mov    $0x0,%eax
0834d7c8 +0xfc:  leave
0834d7c9 +0xfd:  ret
```

## 反编译 C

```c
// CDungeonList::insert_dungeon @ 0x834d6cc

/* CDungeonList::insert_dungeon(CDungeon*) */

bool __thiscall CDungeonList::insert_dungeon(CDungeonList *this,CDungeon *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_2c [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_24 [12];
  pair<int_const,CDungeon*> local_18 [8];
  int local_10 [3];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  ::_Hashtable_iterator();
  local_30 = CDungeon::get_index(param_1);
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::find
            (&local_44);
  local_38 = local_44;
  local_34 = local_40;
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
            (local_2c);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                        *)&local_38,(_Hashtable_iterator *)local_2c);
  if (cVar1 == '\0') {
    uVar2 = CDungeon::get_index(param_1);
    LogManager::logFormat
              (1,"data_manager.cpp","bool CDungeonList::insert_dungeon(CDungeon*)",0x921,
               "Already registed dungeon index detected : %d",uVar2);
  }
  else {
    local_10[0] = CDungeon::get_index(param_1);
    std::pair<int_const,CDungeon*>::pair<int,CDungeon*&>(local_18,local_10,&param_1);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
    insert(local_24,this);
  }
  return cVar1 != '\0';
}
```
