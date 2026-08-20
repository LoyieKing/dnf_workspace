# getBlueMarble

`_ZN12CGameManager13getBlueMarbleEv`

`CGameManager::getBlueMarble()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a22b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a22b6  _ZN12CGameManager13getBlueMarbleEv
#           CGameManager::getBlueMarble()
# range [0x082a22b6, 0x082a239d]
082a22b6 +0x00:  push   %ebp
082a22b7 +0x01:  mov    %esp,%ebp
082a22b9 +0x03:  sub    $0x38,%esp
082a22bc +0x06:  mov    0x8(%ebp),%eax
082a22bf +0x09:  add    $0x1fc,%eax
082a22c4 +0x0e:  mov    %eax,(%esp)
082a22c7 +0x11:  call   082b4542 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x643d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x643d
082a22cc +0x16:  mov    %eax,-0xc(%ebp)
082a22cf +0x19:  cmpl   $0x0,-0xc(%ebp)
082a22d3 +0x1d:  jne    082a22df <+0x29>
082a22d5 +0x1f:  mov    $0x0,%eax
082a22da +0x24:  jmp    082a239c <+0xe6>
082a22df +0x29:  mov    0x8(%ebp),%eax
082a22e2 +0x2c:  lea    0x1fc(%eax),%edx
082a22e8 +0x32:  mov    -0xc(%ebp),%eax
082a22eb +0x35:  mov    %eax,0x4(%esp)
082a22ef +0x39:  mov    %edx,(%esp)
082a22f2 +0x3c:  call   082b465e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6559>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6559
082a22f7 +0x41:  mov    %eax,0x4(%esp)
082a22fb +0x45:  mov    -0xc(%ebp),%eax
082a22fe +0x48:  mov    %eax,(%esp)
082a2301 +0x4b:  call   080d8c26 <_ZN10BlueMarble18setMemoryPoolIndexEi>  ; BlueMarble::setMemoryPoolIndex(int)
082a2306 +0x50:  mov    -0xc(%ebp),%eax
082a2309 +0x53:  mov    %eax,(%esp)
082a230c +0x56:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
082a2311 +0x5b:  mov    %eax,-0x1c(%ebp)
082a2314 +0x5e:  mov    0x8(%ebp),%eax
082a2317 +0x61:  lea    0x2e8(%eax),%ecx
082a231d +0x67:  lea    -0x24(%ebp),%eax
082a2320 +0x6a:  lea    -0x1c(%ebp),%edx
082a2323 +0x6d:  mov    %edx,0x8(%esp)
082a2327 +0x71:  mov    %ecx,0x4(%esp)
082a232b +0x75:  mov    %eax,(%esp)
082a232e +0x78:  call   082b478e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6689>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6689
082a2333 +0x7d:  sub    $0x4,%esp
082a2336 +0x80:  mov    0x8(%ebp),%eax
082a2339 +0x83:  lea    0x2e8(%eax),%edx
082a233f +0x89:  lea    -0x18(%ebp),%eax
082a2342 +0x8c:  mov    %edx,0x4(%esp)
082a2346 +0x90:  mov    %eax,(%esp)
082a2349 +0x93:  call   082b47ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66b5
082a234e +0x98:  sub    $0x4,%esp
082a2351 +0x9b:  lea    -0x18(%ebp),%eax
082a2354 +0x9e:  mov    %eax,0x4(%esp)
082a2358 +0xa2:  lea    -0x24(%ebp),%eax
082a235b +0xa5:  mov    %eax,(%esp)
082a235e +0xa8:  call   082b47e0 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66db>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66db
082a2363 +0xad:  test   %al,%al
082a2365 +0xaf:  je     082a2397 <+0xe1>
082a2367 +0xb1:  mov    -0xc(%ebp),%eax
082a236a +0xb4:  mov    %eax,(%esp)
082a236d +0xb7:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
082a2372 +0xbc:  mov    %eax,-0x10(%ebp)
082a2375 +0xbf:  mov    0x8(%ebp),%eax
082a2378 +0xc2:  lea    0x2e8(%eax),%edx
082a237e +0xc8:  lea    -0x10(%ebp),%eax
082a2381 +0xcb:  mov    %eax,0x4(%esp)
082a2385 +0xcf:  mov    %edx,(%esp)
082a2388 +0xd2:  call   082b47f4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66ef>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66ef
082a238d +0xd7:  mov    -0xc(%ebp),%edx
082a2390 +0xda:  mov    %edx,(%eax)
082a2392 +0xdc:  mov    -0xc(%ebp),%eax
082a2395 +0xdf:  jmp    082a239c <+0xe6>
082a2397 +0xe1:  mov    $0x0,%eax
082a239c +0xe6:  leave
082a239d +0xe7:  ret
```

## 反编译 C

```c
// CGameManager::getBlueMarble @ 0x82a22b6

/* CGameManager::getBlueMarble() */

BlueMarble * __thiscall CGameManager::getBlueMarble(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_1c [8];
  int local_14;
  BlueMarble *local_10;
  
  local_10 = (BlueMarble *)
             StaticPool<BlueMarble,300>::Acquire((StaticPool<BlueMarble,300> *)(this + 0x1fc));
  if (local_10 == (BlueMarble *)0x0) {
    local_10 = (BlueMarble *)0x0;
  }
  else {
    iVar2 = StaticPool<BlueMarble,300>::GetIndex
                      ((StaticPool<BlueMarble,300> *)(this + 0x1fc),local_10);
    BlueMarble::setMemoryPoolIndex(local_10,iVar2);
    local_20 = BlueMarble::getMemoryPoolIndex(local_10);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    find((int *)local_28);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (BlueMarble *)0x0;
    }
    else {
      local_14 = BlueMarble::getMemoryPoolIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               ::operator[]((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
                             *)(this + 0x2e8),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}
```
