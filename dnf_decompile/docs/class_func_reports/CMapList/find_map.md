# find_map

`_ZN8CMapList8find_mapEi`

`CMapList::find_map(int)`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834f43e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f43e  _ZN8CMapList8find_mapEi
#           CMapList::find_map(int)
# range [0x0834f43e, 0x0834f4b9]
0834f43e +0x00:  push   %ebp
0834f43f +0x01:  mov    %esp,%ebp
0834f441 +0x03:  sub    $0x38,%esp
0834f444 +0x06:  lea    -0x18(%ebp),%eax
0834f447 +0x09:  mov    %eax,(%esp)
0834f44a +0x0c:  call   0838bdec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b88c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b88c
0834f44f +0x11:  mov    0x8(%ebp),%edx
0834f452 +0x14:  lea    -0x20(%ebp),%eax
0834f455 +0x17:  lea    0xc(%ebp),%ecx
0834f458 +0x1a:  mov    %ecx,0x8(%esp)
0834f45c +0x1e:  mov    %edx,0x4(%esp)
0834f460 +0x22:  mov    %eax,(%esp)
0834f463 +0x25:  call   0838bdf2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b892>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b892
0834f468 +0x2a:  sub    $0x4,%esp
0834f46b +0x2d:  mov    -0x20(%ebp),%eax
0834f46e +0x30:  mov    -0x1c(%ebp),%edx
0834f471 +0x33:  mov    %eax,-0x18(%ebp)
0834f474 +0x36:  mov    %edx,-0x14(%ebp)
0834f477 +0x39:  mov    0x8(%ebp),%edx
0834f47a +0x3c:  lea    -0x10(%ebp),%eax
0834f47d +0x3f:  mov    %edx,0x4(%esp)
0834f481 +0x43:  mov    %eax,(%esp)
0834f484 +0x46:  call   0838bb20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b5c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b5c0
0834f489 +0x4b:  sub    $0x4,%esp
0834f48c +0x4e:  lea    -0x10(%ebp),%eax
0834f48f +0x51:  mov    %eax,0x4(%esp)
0834f493 +0x55:  lea    -0x18(%ebp),%eax
0834f496 +0x58:  mov    %eax,(%esp)
0834f499 +0x5b:  call   0838bb46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b5e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b5e6
0834f49e +0x60:  test   %al,%al
0834f4a0 +0x62:  je     0834f4b2 <+0x74>
0834f4a2 +0x64:  lea    -0x18(%ebp),%eax
0834f4a5 +0x67:  mov    %eax,(%esp)
0834f4a8 +0x6a:  call   0838be1e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b8be>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b8be
0834f4ad +0x6f:  mov    0x4(%eax),%eax
0834f4b0 +0x72:  jmp    0834f4b7 <+0x79>
0834f4b2 +0x74:  mov    $0x0,%eax
0834f4b7 +0x79:  leave
0834f4b8 +0x7a:  ret
0834f4b9 +0x7b:  nop
```

## 反编译 C

```c
// CMapList::find_map @ 0x834f43e

/* CMapList::find_map(int) */

undefined4 CMapList::find_map(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
          ::operator!=((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                          *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
