# PutWarRoom

`_ZN12CGameManager10PutWarRoomEP7WarRoom`

`CGameManager::PutWarRoom(WarRoom*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a2666` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a2666  _ZN12CGameManager10PutWarRoomEP7WarRoom
#           CGameManager::PutWarRoom(WarRoom*)
# range [0x082a2666, 0x082a2719]
082a2666 +0x00:  push   %ebp
082a2667 +0x01:  mov    %esp,%ebp
082a2669 +0x03:  sub    $0x38,%esp
082a266c +0x06:  cmpl   $0x0,0xc(%ebp)
082a2670 +0x0a:  je     082a2717 <+0xb1>
082a2676 +0x10:  mov    0xc(%ebp),%eax
082a2679 +0x13:  mov    %eax,(%esp)
082a267c +0x16:  call   0822ee8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4534
082a2681 +0x1b:  mov    %eax,-0x18(%ebp)
082a2684 +0x1e:  mov    0x8(%ebp),%eax
082a2687 +0x21:  lea    0x284(%eax),%ecx
082a268d +0x27:  lea    -0x20(%ebp),%eax
082a2690 +0x2a:  lea    -0x18(%ebp),%edx
082a2693 +0x2d:  mov    %edx,0x8(%esp)
082a2697 +0x31:  mov    %ecx,0x4(%esp)
082a269b +0x35:  mov    %eax,(%esp)
082a269e +0x38:  call   082b4c26 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b21>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b21
082a26a3 +0x3d:  sub    $0x4,%esp
082a26a6 +0x40:  mov    0x8(%ebp),%eax
082a26a9 +0x43:  lea    0x284(%eax),%edx
082a26af +0x49:  lea    -0x14(%ebp),%eax
082a26b2 +0x4c:  mov    %edx,0x4(%esp)
082a26b6 +0x50:  mov    %eax,(%esp)
082a26b9 +0x53:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a26be +0x58:  sub    $0x4,%esp
082a26c1 +0x5b:  lea    -0x14(%ebp),%eax
082a26c4 +0x5e:  mov    %eax,0x4(%esp)
082a26c8 +0x62:  lea    -0x20(%ebp),%eax
082a26cb +0x65:  mov    %eax,(%esp)
082a26ce +0x68:  call   082b4cde <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bd9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bd9
082a26d3 +0x6d:  test   %al,%al
082a26d5 +0x6f:  je     082a2718 <+0xb2>
082a26d7 +0x71:  mov    0xc(%ebp),%eax
082a26da +0x74:  mov    %eax,(%esp)
082a26dd +0x77:  call   0822ee8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4534
082a26e2 +0x7c:  mov    %eax,-0xc(%ebp)
082a26e5 +0x7f:  mov    0x8(%ebp),%eax
082a26e8 +0x82:  lea    0x284(%eax),%edx
082a26ee +0x88:  lea    -0xc(%ebp),%eax
082a26f1 +0x8b:  mov    %eax,0x4(%esp)
082a26f5 +0x8f:  mov    %edx,(%esp)
082a26f8 +0x92:  call   082b4cf2 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bed>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bed
082a26fd +0x97:  mov    0x8(%ebp),%eax
082a2700 +0x9a:  lea    0x10c(%eax),%edx
082a2706 +0xa0:  mov    0xc(%ebp),%eax
082a2709 +0xa3:  mov    %eax,0x4(%esp)
082a270d +0xa7:  mov    %edx,(%esp)
082a2710 +0xaa:  call   082b4d0c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6c07>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6c07
082a2715 +0xaf:  jmp    082a2718 <+0xb2>
082a2717 +0xb1:  nop
082a2718 +0xb2:  leave
082a2719 +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::PutWarRoom @ 0x82a2666

/* CGameManager::PutWarRoom(WarRoom*) */

void __thiscall CGameManager::PutWarRoom(CGameManager *this,WarRoom *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (WarRoom *)0x0) {
    local_1c = WarRoom::GetIndex(param_1);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::find
              ((int *)local_24);
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WarRoom::GetIndex(param_1);
      __gnu_cxx::
      hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::erase
                ((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
                  *)(this + 0x284),local_10);
      StaticPool<WarRoom,40>::Free((StaticPool<WarRoom,40> *)(this + 0x10c),param_1);
    }
  }
  return;
}
```
