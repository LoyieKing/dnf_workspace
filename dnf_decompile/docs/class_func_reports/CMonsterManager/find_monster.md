# find_monster

`_ZN15CMonsterManager12find_monsterEi`

`CMonsterManager::find_monster(int)`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834fe9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834fe9e  _ZN15CMonsterManager12find_monsterEi
#           CMonsterManager::find_monster(int)
# range [0x0834fe9e, 0x0834ff1f]
0834fe9e +0x00:  push   %ebp
0834fe9f +0x01:  mov    %esp,%ebp
0834fea1 +0x03:  sub    $0x38,%esp
0834fea4 +0x06:  lea    -0x18(%ebp),%eax
0834fea7 +0x09:  mov    %eax,(%esp)
0834feaa +0x0c:  call   0838f25c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ecfc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ecfc
0834feaf +0x11:  mov    0x8(%ebp),%eax
0834feb2 +0x14:  lea    0x18(%eax),%ecx
0834feb5 +0x17:  lea    -0x20(%ebp),%eax
0834feb8 +0x1a:  lea    0xc(%ebp),%edx
0834febb +0x1d:  mov    %edx,0x8(%esp)
0834febf +0x21:  mov    %ecx,0x4(%esp)
0834fec3 +0x25:  mov    %eax,(%esp)
0834fec6 +0x28:  call   0838f32e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edce
0834fecb +0x2d:  sub    $0x4,%esp
0834fece +0x30:  mov    -0x20(%ebp),%eax
0834fed1 +0x33:  mov    -0x1c(%ebp),%edx
0834fed4 +0x36:  mov    %eax,-0x18(%ebp)
0834fed7 +0x39:  mov    %edx,-0x14(%ebp)
0834feda +0x3c:  mov    0x8(%ebp),%eax
0834fedd +0x3f:  lea    0x18(%eax),%edx
0834fee0 +0x42:  lea    -0x10(%ebp),%eax
0834fee3 +0x45:  mov    %edx,0x4(%esp)
0834fee7 +0x49:  mov    %eax,(%esp)
0834feea +0x4c:  call   0838f288 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed28
0834feef +0x51:  sub    $0x4,%esp
0834fef2 +0x54:  lea    -0x10(%ebp),%eax
0834fef5 +0x57:  mov    %eax,0x4(%esp)
0834fef9 +0x5b:  lea    -0x18(%ebp),%eax
0834fefc +0x5e:  mov    %eax,(%esp)
0834feff +0x61:  call   0838f35a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edfa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edfa
0834ff04 +0x66:  test   %al,%al
0834ff06 +0x68:  je     0834ff0f <+0x71>
0834ff08 +0x6a:  mov    $0x0,%eax
0834ff0d +0x6f:  jmp    0834ff1d <+0x7f>
0834ff0f +0x71:  lea    -0x18(%ebp),%eax
0834ff12 +0x74:  mov    %eax,(%esp)
0834ff15 +0x77:  call   0838f2c2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ed62>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ed62
0834ff1a +0x7c:  mov    0x4(%eax),%eax
0834ff1d +0x7f:  leave
0834ff1e +0x80:  ret
0834ff1f +0x81:  nop
```

## 反编译 C

```c
// CMonsterManager::find_monster @ 0x834fe9e

/* CMonsterManager::find_monster(int) */

undefined4 CMonsterManager::find_monster(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
