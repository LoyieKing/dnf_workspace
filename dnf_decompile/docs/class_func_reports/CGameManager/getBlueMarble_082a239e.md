# getBlueMarble

`_ZN12CGameManager13getBlueMarbleEi`

`CGameManager::getBlueMarble(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a239e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a239e  _ZN12CGameManager13getBlueMarbleEi
#           CGameManager::getBlueMarble(int)
# range [0x082a239e, 0x082a240d]
082a239e +0x00:  push   %ebp
082a239f +0x01:  mov    %esp,%ebp
082a23a1 +0x03:  sub    $0x28,%esp
082a23a4 +0x06:  mov    0x8(%ebp),%eax
082a23a7 +0x09:  lea    0x2e8(%eax),%ecx
082a23ad +0x0f:  lea    -0x18(%ebp),%eax
082a23b0 +0x12:  lea    0xc(%ebp),%edx
082a23b3 +0x15:  mov    %edx,0x8(%esp)
082a23b7 +0x19:  mov    %ecx,0x4(%esp)
082a23bb +0x1d:  mov    %eax,(%esp)
082a23be +0x20:  call   082b478e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6689>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6689
082a23c3 +0x25:  sub    $0x4,%esp
082a23c6 +0x28:  mov    0x8(%ebp),%eax
082a23c9 +0x2b:  lea    0x2e8(%eax),%edx
082a23cf +0x31:  lea    -0x10(%ebp),%eax
082a23d2 +0x34:  mov    %edx,0x4(%esp)
082a23d6 +0x38:  mov    %eax,(%esp)
082a23d9 +0x3b:  call   082b47ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66b5
082a23de +0x40:  sub    $0x4,%esp
082a23e1 +0x43:  lea    -0x10(%ebp),%eax
082a23e4 +0x46:  mov    %eax,0x4(%esp)
082a23e8 +0x4a:  lea    -0x18(%ebp),%eax
082a23eb +0x4d:  mov    %eax,(%esp)
082a23ee +0x50:  call   082b47e0 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66db>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66db
082a23f3 +0x55:  test   %al,%al
082a23f5 +0x57:  je     082a23fe <+0x60>
082a23f7 +0x59:  mov    $0x0,%eax
082a23fc +0x5e:  jmp    082a240c <+0x6e>
082a23fe +0x60:  lea    -0x18(%ebp),%eax
082a2401 +0x63:  mov    %eax,(%esp)
082a2404 +0x66:  call   082b4832 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x672d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x672d
082a2409 +0x6b:  mov    0x4(%eax),%eax
082a240c +0x6e:  leave
082a240d +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::getBlueMarble @ 0x82a239e

/* CGameManager::getBlueMarble(int) */

undefined4 CGameManager::getBlueMarble(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_1c [8];
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  find((int *)local_1c);
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
