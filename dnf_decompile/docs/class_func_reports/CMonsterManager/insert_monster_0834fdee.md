# insert_monster

`_ZN15CMonsterManager14insert_monsterEiP8CMonster`

`CMonsterManager::insert_monster(int, CMonster*)`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834fdee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834fdee  _ZN15CMonsterManager14insert_monsterEiP8CMonster
#           CMonsterManager::insert_monster(int, CMonster*)
# range [0x0834fdee, 0x0834fe9d]
0834fdee +0x00:  push   %ebp
0834fdef +0x01:  mov    %esp,%ebp
0834fdf1 +0x03:  sub    $0x58,%esp
0834fdf4 +0x06:  lea    -0x2c(%ebp),%eax
0834fdf7 +0x09:  mov    %eax,(%esp)
0834fdfa +0x0c:  call   0838f25c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ecfc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ecfc
0834fdff +0x11:  mov    0x8(%ebp),%eax
0834fe02 +0x14:  lea    0x18(%eax),%ecx
0834fe05 +0x17:  lea    -0x40(%ebp),%eax
0834fe08 +0x1a:  lea    0xc(%ebp),%edx
0834fe0b +0x1d:  mov    %edx,0x8(%esp)
0834fe0f +0x21:  mov    %ecx,0x4(%esp)
0834fe13 +0x25:  mov    %eax,(%esp)
0834fe16 +0x28:  call   0838f32e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edce
0834fe1b +0x2d:  sub    $0x4,%esp
0834fe1e +0x30:  mov    -0x40(%ebp),%eax
0834fe21 +0x33:  mov    -0x3c(%ebp),%edx
0834fe24 +0x36:  mov    %eax,-0x2c(%ebp)
0834fe27 +0x39:  mov    %edx,-0x28(%ebp)
0834fe2a +0x3c:  mov    0x8(%ebp),%eax
0834fe2d +0x3f:  lea    0x18(%eax),%edx
0834fe30 +0x42:  lea    -0x24(%ebp),%eax
0834fe33 +0x45:  mov    %edx,0x4(%esp)
0834fe37 +0x49:  mov    %eax,(%esp)
0834fe3a +0x4c:  call   0838f288 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed28
0834fe3f +0x51:  sub    $0x4,%esp
0834fe42 +0x54:  lea    -0x24(%ebp),%eax
0834fe45 +0x57:  mov    %eax,0x4(%esp)
0834fe49 +0x5b:  lea    -0x2c(%ebp),%eax
0834fe4c +0x5e:  mov    %eax,(%esp)
0834fe4f +0x61:  call   0838f35a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edfa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edfa
0834fe54 +0x66:  test   %al,%al
0834fe56 +0x68:  je     0834fe97 <+0xa9>
0834fe58 +0x6a:  lea    0x10(%ebp),%eax
0834fe5b +0x6d:  mov    %eax,0x8(%esp)
0834fe5f +0x71:  lea    0xc(%ebp),%eax
0834fe62 +0x74:  mov    %eax,0x4(%esp)
0834fe66 +0x78:  lea    -0x10(%ebp),%eax
0834fe69 +0x7b:  mov    %eax,(%esp)
0834fe6c +0x7e:  call   0838f36e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ee0e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ee0e
0834fe71 +0x83:  mov    0x8(%ebp),%eax
0834fe74 +0x86:  lea    0x18(%eax),%ecx
0834fe77 +0x89:  lea    -0x1c(%ebp),%eax
0834fe7a +0x8c:  lea    -0x10(%ebp),%edx
0834fe7d +0x8f:  mov    %edx,0x8(%esp)
0834fe81 +0x93:  mov    %ecx,0x4(%esp)
0834fe85 +0x97:  mov    %eax,(%esp)
0834fe88 +0x9a:  call   0838f39c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ee3c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ee3c
0834fe8d +0x9f:  sub    $0x4,%esp
0834fe90 +0xa2:  mov    $0x1,%eax
0834fe95 +0xa7:  jmp    0834fe9c <+0xae>
0834fe97 +0xa9:  mov    $0x0,%eax
0834fe9c +0xae:  leave
0834fe9d +0xaf:  ret
```

## 反编译 C

```c
// CMonsterManager::insert_monster @ 0x834fdee

/* CMonsterManager::insert_monster(int, CMonster*) */

bool CMonsterManager::insert_monster(int param_1,CMonster *param_2)

{
  char cVar1;
  int local_44;
  undefined4 local_40;
  int local_30;
  undefined4 local_2c;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_28 [8];
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_20 [12];
  pair<int_const,CMonster*> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::find
            (&local_44);
  local_30 = local_44;
  local_2c = local_40;
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
            (local_28);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                        *)&local_30,(_Hashtable_iterator *)local_28);
  if (cVar1 != '\0') {
    std::pair<int_const,CMonster*>::pair<int&,CMonster*&>
              (local_14,(int *)&param_2,(CMonster **)&stack0x0000000c);
    __gnu_cxx::
    hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
    insert(local_20,(pair *)(param_1 + 0x18));
  }
  return cVar1 != '\0';
}
```
