# GetPvp

`_ZN12CGameManager6GetPvpEv`

`CGameManager::GetPvp()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829507c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829507c  _ZN12CGameManager6GetPvpEv
#           CGameManager::GetPvp()
# range [0x0829507c, 0x08295205]
0829507c +0x000:  push   %ebp
0829507d +0x001:  mov    %esp,%ebp
0829507f +0x003:  push   %ebx
08295080 +0x004:  sub    $0x64,%esp
08295083 +0x007:  mov    0x8(%ebp),%eax
08295086 +0x00a:  add    $0xdc,%eax
0829508b +0x00f:  mov    %eax,(%esp)
0829508e +0x012:  call   082b1302 <_GLOBAL__I__ZN4CLog5this_E+0xd729>  ; global constructors keyed to CLog::this_+0xd729
08295093 +0x017:  mov    %eax,-0xc(%ebp)
08295096 +0x01a:  cmpl   $0x0,-0xc(%ebp)
0829509a +0x01e:  jne    082950a6 <+0x2a>
0829509c +0x020:  mov    $0x0,%eax
082950a1 +0x025:  jmp    08295201 <+0x185>
082950a6 +0x02a:  mov    0x8(%ebp),%eax
082950a9 +0x02d:  lea    0xdc(%eax),%edx
082950af +0x033:  mov    -0xc(%ebp),%eax
082950b2 +0x036:  mov    %eax,0x4(%esp)
082950b6 +0x03a:  mov    %edx,(%esp)
082950b9 +0x03d:  call   082b1430 <_GLOBAL__I__ZN4CLog5this_E+0xd857>  ; global constructors keyed to CLog::this_+0xd857
082950be +0x042:  mov    %eax,0x4(%esp)
082950c2 +0x046:  mov    -0xc(%ebp),%eax
082950c5 +0x049:  mov    %eax,(%esp)
082950c8 +0x04c:  call   085d62ac <_ZN8PvP_Room6SetIDXEi>  ; PvP_Room::SetIDX(int)
082950cd +0x051:  mov    -0xc(%ebp),%eax
082950d0 +0x054:  mov    %eax,(%esp)
082950d3 +0x057:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
082950d8 +0x05c:  mov    %eax,-0x3c(%ebp)
082950db +0x05f:  mov    0x8(%ebp),%eax
082950de +0x062:  lea    0x25c(%eax),%ecx
082950e4 +0x068:  lea    -0x44(%ebp),%eax
082950e7 +0x06b:  lea    -0x3c(%ebp),%edx
082950ea +0x06e:  mov    %edx,0x8(%esp)
082950ee +0x072:  mov    %ecx,0x4(%esp)
082950f2 +0x076:  mov    %eax,(%esp)
082950f5 +0x079:  call   082b1572 <_GLOBAL__I__ZN4CLog5this_E+0xd999>  ; global constructors keyed to CLog::this_+0xd999
082950fa +0x07e:  sub    $0x4,%esp
082950fd +0x081:  mov    0x8(%ebp),%eax
08295100 +0x084:  lea    0x25c(%eax),%edx
08295106 +0x08a:  lea    -0x38(%ebp),%eax
08295109 +0x08d:  mov    %edx,0x4(%esp)
0829510d +0x091:  mov    %eax,(%esp)
08295110 +0x094:  call   082b159e <_GLOBAL__I__ZN4CLog5this_E+0xd9c5>  ; global constructors keyed to CLog::this_+0xd9c5
08295115 +0x099:  sub    $0x4,%esp
08295118 +0x09c:  lea    -0x38(%ebp),%eax
0829511b +0x09f:  mov    %eax,0x4(%esp)
0829511f +0x0a3:  lea    -0x44(%ebp),%eax
08295122 +0x0a6:  mov    %eax,(%esp)
08295125 +0x0a9:  call   082b15c4 <_GLOBAL__I__ZN4CLog5this_E+0xd9eb>  ; global constructors keyed to CLog::this_+0xd9eb
0829512a +0x0ae:  test   %al,%al
0829512c +0x0b0:  je     082951ad <+0x131>
0829512e +0x0b2:  mov    -0xc(%ebp),%eax
08295131 +0x0b5:  mov    %eax,(%esp)
08295134 +0x0b8:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08295139 +0x0bd:  mov    %eax,%ebx
0829513b +0x0bf:  movl   $0x0,0x10(%esp)
08295143 +0x0c7:  movl   $0x0,0xc(%esp)
0829514b +0x0cf:  movl   $0xaa9,0x8(%esp)
08295153 +0x0d7:  movl   $&_ZZN12CGameManager6GetPvpEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829515b +0x0df:  lea    -0x30(%ebp),%eax
0829515e +0x0e2:  mov    %eax,(%esp)
08295161 +0x0e5:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08295166 +0x0ea:  mov    %ebx,0x8(%esp)
0829516a +0x0ee:  movl   $"pvp@log room(%d) new alloc",0x4(%esp)
08295172 +0x0f6:  lea    -0x30(%ebp),%eax
08295175 +0x0f9:  mov    %eax,(%esp)
08295178 +0x0fc:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
0829517d +0x101:  mov    -0xc(%ebp),%eax
08295180 +0x104:  mov    %eax,(%esp)
08295183 +0x107:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08295188 +0x10c:  mov    %eax,-0x20(%ebp)
0829518b +0x10f:  mov    0x8(%ebp),%eax
0829518e +0x112:  lea    0x25c(%eax),%edx
08295194 +0x118:  lea    -0x20(%ebp),%eax
08295197 +0x11b:  mov    %eax,0x4(%esp)
0829519b +0x11f:  mov    %edx,(%esp)
0829519e +0x122:  call   082b15d8 <_GLOBAL__I__ZN4CLog5this_E+0xd9ff>  ; global constructors keyed to CLog::this_+0xd9ff
082951a3 +0x127:  mov    -0xc(%ebp),%edx
082951a6 +0x12a:  mov    %edx,(%eax)
082951a8 +0x12c:  mov    -0xc(%ebp),%eax
082951ab +0x12f:  jmp    08295201 <+0x185>
082951ad +0x131:  mov    -0xc(%ebp),%eax
082951b0 +0x134:  mov    %eax,(%esp)
082951b3 +0x137:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
082951b8 +0x13c:  mov    %eax,%ebx
082951ba +0x13e:  movl   $0x0,0x10(%esp)
082951c2 +0x146:  movl   $0x0,0xc(%esp)
082951ca +0x14e:  movl   $0xab2,0x8(%esp)
082951d2 +0x156:  movl   $&_ZZN12CGameManager6GetPvpEvE19__PRETTY_FUNCTION__,0x4(%esp)
082951da +0x15e:  lea    -0x1c(%ebp),%eax
082951dd +0x161:  mov    %eax,(%esp)
082951e0 +0x164:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
082951e5 +0x169:  mov    %ebx,0x8(%esp)
082951e9 +0x16d:  movl   $"pvp@log room(%d) already alloc",0x4(%esp)
082951f1 +0x175:  lea    -0x1c(%ebp),%eax
082951f4 +0x178:  mov    %eax,(%esp)
082951f7 +0x17b:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
082951fc +0x180:  mov    $0x0,%eax
08295201 +0x185:  mov    -0x4(%ebp),%ebx
08295204 +0x188:  leave
08295205 +0x189:  ret
```

## 反编译 C

```c
// CGameManager::GetPvp @ 0x829507c

/* CGameManager::GetPvp() */

PvP_Room * __thiscall CGameManager::GetPvp(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_48 [8];
  undefined4 local_40;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_3c [8];
  CSwitchLog local_34 [16];
  int local_24;
  CSwitchLog local_20 [16];
  PvP_Room *local_10;
  
  local_10 = (PvP_Room *)
             StaticPool<PvP_Room,600>::Acquire((StaticPool<PvP_Room,600> *)(this + 0xdc));
  if (local_10 == (PvP_Room *)0x0) {
    local_10 = (PvP_Room *)0x0;
  }
  else {
    iVar2 = StaticPool<PvP_Room,600>::GetIndex((StaticPool<PvP_Room,600> *)(this + 0xdc),local_10);
    PvP_Room::SetIDX(local_10,iVar2);
    local_40 = PvP_Room::get_index(local_10);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::find
              ((int *)local_48);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_3c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator==(local_48,(_Hashtable_iterator *)local_3c);
    if (cVar1 == '\0') {
      uVar3 = PvP_Room::get_index(local_10);
      CSwitchLog::CSwitchLog(local_20,"PvP_Room* CGameManager::GetPvp()",0xab2,0,0);
      CSwitchLog::operator()(local_20,"pvp@log room(%d) already alloc",uVar3);
      local_10 = (PvP_Room *)0x0;
    }
    else {
      uVar3 = PvP_Room::get_index(local_10);
      CSwitchLog::CSwitchLog(local_34,"PvP_Room* CGameManager::GetPvp()",0xaa9,0,0);
      CSwitchLog::operator()(local_34,"pvp@log room(%d) new alloc",uVar3);
      local_24 = PvP_Room::get_index(local_10);
      puVar4 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
               ::operator[]((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
                             *)(this + 0x25c),&local_24);
      *puVar4 = local_10;
    }
  }
  return local_10;
}
```
