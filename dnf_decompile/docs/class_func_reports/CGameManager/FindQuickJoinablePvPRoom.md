# FindQuickJoinablePvPRoom

`_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser`

`CGameManager::FindQuickJoinablePvPRoom(bool, CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a3202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a3202  _ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser
#           CGameManager::FindQuickJoinablePvPRoom(bool, CUser*)
# range [0x082a3202, 0x082a32e1]
082a3202 +0x00:  push   %ebp
082a3203 +0x01:  mov    %esp,%ebp
082a3205 +0x03:  sub    $0x48,%esp
082a3208 +0x06:  mov    0xc(%ebp),%eax
082a320b +0x09:  mov    %al,-0x2c(%ebp)
082a320e +0x0c:  mov    0x8(%ebp),%eax
082a3211 +0x0f:  lea    0x25c(%eax),%edx
082a3217 +0x15:  lea    -0x1c(%ebp),%eax
082a321a +0x18:  mov    %edx,0x4(%esp)
082a321e +0x1c:  mov    %eax,(%esp)
082a3221 +0x1f:  call   082b2b46 <_GLOBAL__I__ZN4CLog5this_E+0xef6d>  ; global constructors keyed to CLog::this_+0xef6d
082a3226 +0x24:  sub    $0x4,%esp
082a3229 +0x27:  jmp    082a32a6 <+0xa4>
082a322b +0x29:  lea    -0x1c(%ebp),%eax
082a322e +0x2c:  mov    %eax,(%esp)
082a3231 +0x2f:  call   082b1616 <_GLOBAL__I__ZN4CLog5this_E+0xda3d>  ; global constructors keyed to CLog::this_+0xda3d
082a3236 +0x34:  mov    0x4(%eax),%eax
082a3239 +0x37:  mov    %eax,-0xc(%ebp)
082a323c +0x3a:  cmpl   $0x0,-0xc(%ebp)
082a3240 +0x3e:  je     082a329b <+0x99>
082a3242 +0x40:  mov    -0xc(%ebp),%eax
082a3245 +0x43:  mov    %eax,(%esp)
082a3248 +0x46:  call   0822d9cc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3076>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3076
082a324d +0x4b:  cmp    $0x6,%eax
082a3250 +0x4e:  sete   %al
082a3253 +0x51:  test   %al,%al
082a3255 +0x53:  jne    082a329a <+0x98>
082a3257 +0x55:  cmpb   $0x0,-0x2c(%ebp)
082a325b +0x59:  je     082a326f <+0x6d>
082a325d +0x5b:  mov    -0xc(%ebp),%eax
082a3260 +0x5e:  mov    %eax,(%esp)
082a3263 +0x61:  call   0822d974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x301e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x301e
082a3268 +0x66:  xor    $0x1,%eax
082a326b +0x69:  test   %al,%al
082a326d +0x6b:  je     082a328c <+0x8a>
082a326f +0x6d:  mov    0x10(%ebp),%eax
082a3272 +0x70:  mov    %eax,0x4(%esp)
082a3276 +0x74:  mov    -0xc(%ebp),%eax
082a3279 +0x77:  mov    %eax,(%esp)
082a327c +0x7a:  call   085d6be6 <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser>  ; PvP_Room::IsQuickJoinablePVPRoom(CUser*)
082a3281 +0x7f:  test   %al,%al
082a3283 +0x81:  je     082a328c <+0x8a>
082a3285 +0x83:  mov    $0x1,%eax
082a328a +0x88:  jmp    082a3291 <+0x8f>
082a328c +0x8a:  mov    $0x0,%eax
082a3291 +0x8f:  test   %al,%al
082a3293 +0x91:  je     082a329b <+0x99>
082a3295 +0x93:  mov    -0xc(%ebp),%eax
082a3298 +0x96:  jmp    082a32e0 <+0xde>
082a329a +0x98:  nop
082a329b +0x99:  lea    -0x1c(%ebp),%eax
082a329e +0x9c:  mov    %eax,(%esp)
082a32a1 +0x9f:  call   082b4ec0 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6dbb>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6dbb
082a32a6 +0xa4:  mov    0x8(%ebp),%eax
082a32a9 +0xa7:  lea    0x25c(%eax),%edx
082a32af +0xad:  lea    -0x14(%ebp),%eax
082a32b2 +0xb0:  mov    %edx,0x4(%esp)
082a32b6 +0xb4:  mov    %eax,(%esp)
082a32b9 +0xb7:  call   082b159e <_GLOBAL__I__ZN4CLog5this_E+0xd9c5>  ; global constructors keyed to CLog::this_+0xd9c5
082a32be +0xbc:  sub    $0x4,%esp
082a32c1 +0xbf:  lea    -0x14(%ebp),%eax
082a32c4 +0xc2:  mov    %eax,0x4(%esp)
082a32c8 +0xc6:  lea    -0x1c(%ebp),%eax
082a32cb +0xc9:  mov    %eax,(%esp)
082a32ce +0xcc:  call   082b162a <_GLOBAL__I__ZN4CLog5this_E+0xda51>  ; global constructors keyed to CLog::this_+0xda51
082a32d3 +0xd1:  test   %al,%al
082a32d5 +0xd3:  jne    082a322b <+0x29>
082a32db +0xd9:  mov    $0x0,%eax
082a32e0 +0xde:  leave
082a32e1 +0xdf:  ret
```

## 反编译 C

```c
// CGameManager::FindQuickJoinablePvPRoom @ 0x82a3202

/* CGameManager::FindQuickJoinablePvPRoom(bool, CUser*) */

PvP_Room * __thiscall
CGameManager::FindQuickJoinablePvPRoom(CGameManager *this,bool param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_20 [8];
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  PvP_Room *local_10;
  
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::begin
            (local_20);
  do {
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_18);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_20,(_Hashtable_iterator *)local_18);
    if (cVar2 == '\0') {
      return (PvP_Room *)0x0;
    }
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_20);
    local_10 = *(PvP_Room **)(iVar3 + 4);
    if ((local_10 != (PvP_Room *)0x0) &&
       (iVar3 = PvP_Room::get_pvp_battle_mode(local_10), iVar3 != 6)) {
      if (((param_1) && (cVar2 = PvP_Room::IsExistPassword(local_10), cVar2 == '\x01')) ||
         (cVar2 = PvP_Room::IsQuickJoinablePVPRoom(local_10,param_2), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return local_10;
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                  *)local_20);
  } while( true );
}
```
