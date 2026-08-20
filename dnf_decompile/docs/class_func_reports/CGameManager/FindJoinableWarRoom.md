# FindJoinableWarRoom

`_ZN12CGameManager19FindJoinableWarRoomEP5CUser`

`CGameManager::FindJoinableWarRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a32e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a32e2  _ZN12CGameManager19FindJoinableWarRoomEP5CUser
#           CGameManager::FindJoinableWarRoom(CUser*)
# range [0x082a32e2, 0x082a3395]
082a32e2 +0x00:  push   %ebp
082a32e3 +0x01:  mov    %esp,%ebp
082a32e5 +0x03:  sub    $0x38,%esp
082a32e8 +0x06:  mov    0x8(%ebp),%eax
082a32eb +0x09:  lea    0x284(%eax),%edx
082a32f1 +0x0f:  lea    -0x24(%ebp),%eax
082a32f4 +0x12:  mov    %edx,0x4(%esp)
082a32f8 +0x16:  mov    %eax,(%esp)
082a32fb +0x19:  call   082b4e64 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6d5f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6d5f
082a3300 +0x1e:  sub    $0x4,%esp
082a3303 +0x21:  jmp    082a3359 <+0x77>
082a3305 +0x23:  lea    -0x24(%ebp),%eax
082a3308 +0x26:  mov    %eax,(%esp)
082a330b +0x29:  call   082b4cca <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bc5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bc5
082a3310 +0x2e:  mov    0x4(%eax),%eax
082a3313 +0x31:  mov    %eax,-0xc(%ebp)
082a3316 +0x34:  cmpl   $0x0,-0xc(%ebp)
082a331a +0x38:  je     082a333c <+0x5a>
082a331c +0x3a:  mov    0xc(%ebp),%eax
082a331f +0x3d:  mov    %eax,0x4(%esp)
082a3323 +0x41:  mov    -0xc(%ebp),%eax
082a3326 +0x44:  mov    %eax,(%esp)
082a3329 +0x47:  call   086bacae <_ZN7WarRoom10IsJoinableEP5CUser>  ; WarRoom::IsJoinable(CUser*)
082a332e +0x4c:  test   %eax,%eax
082a3330 +0x4e:  sete   %al
082a3333 +0x51:  test   %al,%al
082a3335 +0x53:  je     082a333c <+0x5a>
082a3337 +0x55:  mov    -0xc(%ebp),%eax
082a333a +0x58:  jmp    082a3393 <+0xb1>
082a333c +0x5a:  lea    -0x14(%ebp),%eax
082a333f +0x5d:  movl   $0x0,0x8(%esp)
082a3347 +0x65:  lea    -0x24(%ebp),%edx
082a334a +0x68:  mov    %edx,0x4(%esp)
082a334e +0x6c:  mov    %eax,(%esp)
082a3351 +0x6f:  call   082b4e8a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6d85>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6d85
082a3356 +0x74:  sub    $0x4,%esp
082a3359 +0x77:  mov    0x8(%ebp),%eax
082a335c +0x7a:  lea    0x284(%eax),%edx
082a3362 +0x80:  lea    -0x1c(%ebp),%eax
082a3365 +0x83:  mov    %edx,0x4(%esp)
082a3369 +0x87:  mov    %eax,(%esp)
082a336c +0x8a:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a3371 +0x8f:  sub    $0x4,%esp
082a3374 +0x92:  lea    -0x1c(%ebp),%eax
082a3377 +0x95:  mov    %eax,0x4(%esp)
082a337b +0x99:  lea    -0x24(%ebp),%eax
082a337e +0x9c:  mov    %eax,(%esp)
082a3381 +0x9f:  call   082b4cde <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bd9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bd9
082a3386 +0xa4:  test   %al,%al
082a3388 +0xa6:  jne    082a3305 <+0x23>
082a338e +0xac:  mov    $0x0,%eax
082a3393 +0xb1:  leave
082a3394 +0xb2:  ret
082a3395 +0xb3:  nop
```

## 反编译 C

```c
// CGameManager::FindJoinableWarRoom @ 0x82a32e2

/* CGameManager::FindJoinableWarRoom(CUser*) */

WarRoom * __thiscall CGameManager::FindJoinableWarRoom(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_28 [8];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  WarRoom *local_10;
  
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::begin(local_28);
  while( true ) {
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_28,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') {
      return (WarRoom *)0x0;
    }
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_28);
    local_10 = *(WarRoom **)(iVar2 + 4);
    if ((local_10 != (WarRoom *)0x0) && (iVar2 = WarRoom::IsJoinable(local_10,param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
    ::operator++(local_18,(int)local_28);
  }
  return local_10;
}
```
