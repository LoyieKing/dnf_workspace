# GetWarRoom

`_ZN12CGameManager10GetWarRoomEi`

`CGameManager::GetWarRoom(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a25d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a25d0  _ZN12CGameManager10GetWarRoomEi
#           CGameManager::GetWarRoom(int)
# range [0x082a25d0, 0x082a263f]
082a25d0 +0x00:  push   %ebp
082a25d1 +0x01:  mov    %esp,%ebp
082a25d3 +0x03:  sub    $0x28,%esp
082a25d6 +0x06:  mov    0x8(%ebp),%eax
082a25d9 +0x09:  lea    0x284(%eax),%ecx
082a25df +0x0f:  lea    -0x18(%ebp),%eax
082a25e2 +0x12:  lea    0xc(%ebp),%edx
082a25e5 +0x15:  mov    %edx,0x8(%esp)
082a25e9 +0x19:  mov    %ecx,0x4(%esp)
082a25ed +0x1d:  mov    %eax,(%esp)
082a25f0 +0x20:  call   082b4c26 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b21>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b21
082a25f5 +0x25:  sub    $0x4,%esp
082a25f8 +0x28:  mov    0x8(%ebp),%eax
082a25fb +0x2b:  lea    0x284(%eax),%edx
082a2601 +0x31:  lea    -0x10(%ebp),%eax
082a2604 +0x34:  mov    %edx,0x4(%esp)
082a2608 +0x38:  mov    %eax,(%esp)
082a260b +0x3b:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a2610 +0x40:  sub    $0x4,%esp
082a2613 +0x43:  lea    -0x10(%ebp),%eax
082a2616 +0x46:  mov    %eax,0x4(%esp)
082a261a +0x4a:  lea    -0x18(%ebp),%eax
082a261d +0x4d:  mov    %eax,(%esp)
082a2620 +0x50:  call   082b4c78 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b73>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b73
082a2625 +0x55:  test   %al,%al
082a2627 +0x57:  je     082a2630 <+0x60>
082a2629 +0x59:  mov    $0x0,%eax
082a262e +0x5e:  jmp    082a263e <+0x6e>
082a2630 +0x60:  lea    -0x18(%ebp),%eax
082a2633 +0x63:  mov    %eax,(%esp)
082a2636 +0x66:  call   082b4cca <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bc5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bc5
082a263b +0x6b:  mov    0x4(%eax),%eax
082a263e +0x6e:  leave
082a263f +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::GetWarRoom @ 0x82a25d0

/* CGameManager::GetWarRoom(int) */

undefined4 CGameManager::GetWarRoom(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_14 [16];
  
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::find((int *)local_1c);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
