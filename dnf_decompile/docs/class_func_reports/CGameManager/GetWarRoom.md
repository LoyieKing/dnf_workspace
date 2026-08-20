# GetWarRoom

`_ZN12CGameManager10GetWarRoomEv`

`CGameManager::GetWarRoom()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a24e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a24e8  _ZN12CGameManager10GetWarRoomEv
#           CGameManager::GetWarRoom()
# range [0x082a24e8, 0x082a25cf]
082a24e8 +0x00:  push   %ebp
082a24e9 +0x01:  mov    %esp,%ebp
082a24eb +0x03:  sub    $0x38,%esp
082a24ee +0x06:  mov    0x8(%ebp),%eax
082a24f1 +0x09:  add    $0x10c,%eax
082a24f6 +0x0e:  mov    %eax,(%esp)
082a24f9 +0x11:  call   082b49ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x68b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x68b5
082a24fe +0x16:  mov    %eax,-0xc(%ebp)
082a2501 +0x19:  cmpl   $0x0,-0xc(%ebp)
082a2505 +0x1d:  jne    082a2511 <+0x29>
082a2507 +0x1f:  mov    $0x0,%eax
082a250c +0x24:  jmp    082a25ce <+0xe6>
082a2511 +0x29:  mov    0x8(%ebp),%eax
082a2514 +0x2c:  lea    0x10c(%eax),%edx
082a251a +0x32:  mov    -0xc(%ebp),%eax
082a251d +0x35:  mov    %eax,0x4(%esp)
082a2521 +0x39:  mov    %edx,(%esp)
082a2524 +0x3c:  call   082b4ae8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x69e3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x69e3
082a2529 +0x41:  mov    %eax,0x4(%esp)
082a252d +0x45:  mov    -0xc(%ebp),%eax
082a2530 +0x48:  mov    %eax,(%esp)
082a2533 +0x4b:  call   086ba834 <_ZN7WarRoom8SetIndexEi>  ; WarRoom::SetIndex(int)
082a2538 +0x50:  mov    -0xc(%ebp),%eax
082a253b +0x53:  mov    %eax,(%esp)
082a253e +0x56:  call   0822ee8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4534
082a2543 +0x5b:  mov    %eax,-0x1c(%ebp)
082a2546 +0x5e:  mov    0x8(%ebp),%eax
082a2549 +0x61:  lea    0x284(%eax),%ecx
082a254f +0x67:  lea    -0x24(%ebp),%eax
082a2552 +0x6a:  lea    -0x1c(%ebp),%edx
082a2555 +0x6d:  mov    %edx,0x8(%esp)
082a2559 +0x71:  mov    %ecx,0x4(%esp)
082a255d +0x75:  mov    %eax,(%esp)
082a2560 +0x78:  call   082b4c26 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b21>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b21
082a2565 +0x7d:  sub    $0x4,%esp
082a2568 +0x80:  mov    0x8(%ebp),%eax
082a256b +0x83:  lea    0x284(%eax),%edx
082a2571 +0x89:  lea    -0x18(%ebp),%eax
082a2574 +0x8c:  mov    %edx,0x4(%esp)
082a2578 +0x90:  mov    %eax,(%esp)
082a257b +0x93:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a2580 +0x98:  sub    $0x4,%esp
082a2583 +0x9b:  lea    -0x18(%ebp),%eax
082a2586 +0x9e:  mov    %eax,0x4(%esp)
082a258a +0xa2:  lea    -0x24(%ebp),%eax
082a258d +0xa5:  mov    %eax,(%esp)
082a2590 +0xa8:  call   082b4c78 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b73>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b73
082a2595 +0xad:  test   %al,%al
082a2597 +0xaf:  je     082a25c9 <+0xe1>
082a2599 +0xb1:  mov    -0xc(%ebp),%eax
082a259c +0xb4:  mov    %eax,(%esp)
082a259f +0xb7:  call   0822ee8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4534
082a25a4 +0xbc:  mov    %eax,-0x10(%ebp)
082a25a7 +0xbf:  mov    0x8(%ebp),%eax
082a25aa +0xc2:  lea    0x284(%eax),%edx
082a25b0 +0xc8:  lea    -0x10(%ebp),%eax
082a25b3 +0xcb:  mov    %eax,0x4(%esp)
082a25b7 +0xcf:  mov    %edx,(%esp)
082a25ba +0xd2:  call   082b4c8c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b87>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b87
082a25bf +0xd7:  mov    -0xc(%ebp),%edx
082a25c2 +0xda:  mov    %edx,(%eax)
082a25c4 +0xdc:  mov    -0xc(%ebp),%eax
082a25c7 +0xdf:  jmp    082a25ce <+0xe6>
082a25c9 +0xe1:  mov    $0x0,%eax
082a25ce +0xe6:  leave
082a25cf +0xe7:  ret
```

## 反编译 C

```c
// CGameManager::GetWarRoom @ 0x82a24e8

/* CGameManager::GetWarRoom() */

WarRoom * __thiscall CGameManager::GetWarRoom(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  int local_14;
  WarRoom *local_10;
  
  local_10 = (WarRoom *)StaticPool<WarRoom,40>::Acquire((StaticPool<WarRoom,40> *)(this + 0x10c));
  if (local_10 == (WarRoom *)0x0) {
    local_10 = (WarRoom *)0x0;
  }
  else {
    iVar2 = StaticPool<WarRoom,40>::GetIndex((StaticPool<WarRoom,40> *)(this + 0x10c),local_10);
    WarRoom::SetIndex(local_10,iVar2);
    local_20 = WarRoom::GetIndex(local_10);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::find
              ((int *)local_28);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (WarRoom *)0x0;
    }
    else {
      local_14 = WarRoom::GetIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
               ::operator[]((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
                             *)(this + 0x284),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}
```
