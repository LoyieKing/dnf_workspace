# putBlueMarble

`_ZN12CGameManager13putBlueMarbleEP10BlueMarble`

`CGameManager::putBlueMarble(BlueMarble*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a2434` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a2434  _ZN12CGameManager13putBlueMarbleEP10BlueMarble
#           CGameManager::putBlueMarble(BlueMarble*)
# range [0x082a2434, 0x082a24e7]
082a2434 +0x00:  push   %ebp
082a2435 +0x01:  mov    %esp,%ebp
082a2437 +0x03:  sub    $0x38,%esp
082a243a +0x06:  cmpl   $0x0,0xc(%ebp)
082a243e +0x0a:  je     082a24e5 <+0xb1>
082a2444 +0x10:  mov    0xc(%ebp),%eax
082a2447 +0x13:  mov    %eax,(%esp)
082a244a +0x16:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
082a244f +0x1b:  mov    %eax,-0x18(%ebp)
082a2452 +0x1e:  mov    0x8(%ebp),%eax
082a2455 +0x21:  lea    0x2e8(%eax),%ecx
082a245b +0x27:  lea    -0x20(%ebp),%eax
082a245e +0x2a:  lea    -0x18(%ebp),%edx
082a2461 +0x2d:  mov    %edx,0x8(%esp)
082a2465 +0x31:  mov    %ecx,0x4(%esp)
082a2469 +0x35:  mov    %eax,(%esp)
082a246c +0x38:  call   082b478e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6689>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6689
082a2471 +0x3d:  sub    $0x4,%esp
082a2474 +0x40:  mov    0x8(%ebp),%eax
082a2477 +0x43:  lea    0x2e8(%eax),%edx
082a247d +0x49:  lea    -0x14(%ebp),%eax
082a2480 +0x4c:  mov    %edx,0x4(%esp)
082a2484 +0x50:  mov    %eax,(%esp)
082a2487 +0x53:  call   082b47ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66b5
082a248c +0x58:  sub    $0x4,%esp
082a248f +0x5b:  lea    -0x14(%ebp),%eax
082a2492 +0x5e:  mov    %eax,0x4(%esp)
082a2496 +0x62:  lea    -0x20(%ebp),%eax
082a2499 +0x65:  mov    %eax,(%esp)
082a249c +0x68:  call   082b4846 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6741>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6741
082a24a1 +0x6d:  test   %al,%al
082a24a3 +0x6f:  je     082a24e6 <+0xb2>
082a24a5 +0x71:  mov    0xc(%ebp),%eax
082a24a8 +0x74:  mov    %eax,(%esp)
082a24ab +0x77:  call   080d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>  ; BlueMarble::getMemoryPoolIndex() const
082a24b0 +0x7c:  mov    %eax,-0xc(%ebp)
082a24b3 +0x7f:  mov    0x8(%ebp),%eax
082a24b6 +0x82:  lea    0x2e8(%eax),%edx
082a24bc +0x88:  lea    -0xc(%ebp),%eax
082a24bf +0x8b:  mov    %eax,0x4(%esp)
082a24c3 +0x8f:  mov    %edx,(%esp)
082a24c6 +0x92:  call   082b485a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6755>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6755
082a24cb +0x97:  mov    0x8(%ebp),%eax
082a24ce +0x9a:  lea    0x1fc(%eax),%edx
082a24d4 +0xa0:  mov    0xc(%ebp),%eax
082a24d7 +0xa3:  mov    %eax,0x4(%esp)
082a24db +0xa7:  mov    %edx,(%esp)
082a24de +0xaa:  call   082b4874 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x676f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x676f
082a24e3 +0xaf:  jmp    082a24e6 <+0xb2>
082a24e5 +0xb1:  nop
082a24e6 +0xb2:  leave
082a24e7 +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::putBlueMarble @ 0x82a2434

/* CGameManager::putBlueMarble(BlueMarble*) */

void __thiscall CGameManager::putBlueMarble(CGameManager *this,BlueMarble *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (BlueMarble *)0x0) {
    local_1c = BlueMarble::getMemoryPoolIndex(param_1);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    find((int *)local_24);
    __gnu_cxx::
    hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
    end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = BlueMarble::getMemoryPoolIndex(param_1);
      __gnu_cxx::
      hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
      ::erase((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               *)(this + 0x2e8),local_10);
      StaticPool<BlueMarble,300>::Free((StaticPool<BlueMarble,300> *)(this + 0x1fc),param_1);
    }
  }
  return;
}
```
