# PutPvp

`_ZN12CGameManager6PutPvpEP8PvP_Room`

`CGameManager::PutPvp(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295348  _ZN12CGameManager6PutPvpEP8PvP_Room
#           CGameManager::PutPvp(PvP_Room*)
# range [0x08295348, 0x0829544f]
08295348 +0x000:  push   %ebp
08295349 +0x001:  mov    %esp,%ebp
0829534b +0x003:  push   %ebx
0829534c +0x004:  sub    $0x54,%esp
0829534f +0x007:  cmpl   $0x0,0xc(%ebp)
08295353 +0x00b:  je     08295449 <+0x101>
08295359 +0x011:  mov    0xc(%ebp),%eax
0829535c +0x014:  mov    %eax,(%esp)
0829535f +0x017:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08295364 +0x01c:  mov    %eax,%ebx
08295366 +0x01e:  movl   $0x0,0x10(%esp)
0829536e +0x026:  movl   $0x0,0xc(%esp)
08295376 +0x02e:  movl   $0xae4,0x8(%esp)
0829537e +0x036:  movl   $&_ZZN12CGameManager6PutPvpEP8PvP_RoomE19__PRETTY_FUNCTION__,0x4(%esp)
08295386 +0x03e:  lea    -0x28(%ebp),%eax
08295389 +0x041:  mov    %eax,(%esp)
0829538c +0x044:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
08295391 +0x049:  mov    %ebx,0x8(%esp)
08295395 +0x04d:  movl   $"pvp@log room(%d)",0x4(%esp)
0829539d +0x055:  lea    -0x28(%ebp),%eax
082953a0 +0x058:  mov    %eax,(%esp)
082953a3 +0x05b:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
082953a8 +0x060:  mov    0xc(%ebp),%eax
082953ab +0x063:  mov    %eax,(%esp)
082953ae +0x066:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
082953b3 +0x06b:  mov    %eax,-0x18(%ebp)
082953b6 +0x06e:  mov    0x8(%ebp),%eax
082953b9 +0x071:  lea    0x25c(%eax),%ecx
082953bf +0x077:  lea    -0x30(%ebp),%eax
082953c2 +0x07a:  lea    -0x18(%ebp),%edx
082953c5 +0x07d:  mov    %edx,0x8(%esp)
082953c9 +0x081:  mov    %ecx,0x4(%esp)
082953cd +0x085:  mov    %eax,(%esp)
082953d0 +0x088:  call   082b1572 <_GLOBAL__I__ZN4CLog5this_E+0xd999>  ; global constructors keyed to CLog::this_+0xd999
082953d5 +0x08d:  sub    $0x4,%esp
082953d8 +0x090:  mov    0x8(%ebp),%eax
082953db +0x093:  lea    0x25c(%eax),%edx
082953e1 +0x099:  lea    -0x14(%ebp),%eax
082953e4 +0x09c:  mov    %edx,0x4(%esp)
082953e8 +0x0a0:  mov    %eax,(%esp)
082953eb +0x0a3:  call   082b159e <_GLOBAL__I__ZN4CLog5this_E+0xd9c5>  ; global constructors keyed to CLog::this_+0xd9c5
082953f0 +0x0a8:  sub    $0x4,%esp
082953f3 +0x0ab:  lea    -0x14(%ebp),%eax
082953f6 +0x0ae:  mov    %eax,0x4(%esp)
082953fa +0x0b2:  lea    -0x30(%ebp),%eax
082953fd +0x0b5:  mov    %eax,(%esp)
08295400 +0x0b8:  call   082b162a <_GLOBAL__I__ZN4CLog5this_E+0xda51>  ; global constructors keyed to CLog::this_+0xda51
08295405 +0x0bd:  test   %al,%al
08295407 +0x0bf:  je     0829544a <+0x102>
08295409 +0x0c1:  mov    0xc(%ebp),%eax
0829540c +0x0c4:  mov    %eax,(%esp)
0829540f +0x0c7:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08295414 +0x0cc:  mov    %eax,-0xc(%ebp)
08295417 +0x0cf:  mov    0x8(%ebp),%eax
0829541a +0x0d2:  lea    0x25c(%eax),%edx
08295420 +0x0d8:  lea    -0xc(%ebp),%eax
08295423 +0x0db:  mov    %eax,0x4(%esp)
08295427 +0x0df:  mov    %edx,(%esp)
0829542a +0x0e2:  call   082b163e <_GLOBAL__I__ZN4CLog5this_E+0xda65>  ; global constructors keyed to CLog::this_+0xda65
0829542f +0x0e7:  mov    0x8(%ebp),%eax
08295432 +0x0ea:  lea    0xdc(%eax),%edx
08295438 +0x0f0:  mov    0xc(%ebp),%eax
0829543b +0x0f3:  mov    %eax,0x4(%esp)
0829543f +0x0f7:  mov    %edx,(%esp)
08295442 +0x0fa:  call   082b1658 <_GLOBAL__I__ZN4CLog5this_E+0xda7f>  ; global constructors keyed to CLog::this_+0xda7f
08295447 +0x0ff:  jmp    0829544a <+0x102>
08295449 +0x101:  nop
0829544a +0x102:  mov    -0x4(%ebp),%ebx
0829544d +0x105:  leave
0829544e +0x106:  ret
0829544f +0x107:  nop
```

## 反编译 C

```c
// CGameManager::PutPvp @ 0x8295348

/* CGameManager::PutPvp(PvP_Room*) */

void __thiscall CGameManager::PutPvp(CGameManager *this,PvP_Room *param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_34 [8];
  CSwitchLog local_2c [16];
  undefined4 local_1c;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  int local_10 [2];
  
  if (param_1 != (PvP_Room *)0x0) {
    uVar2 = PvP_Room::get_index(param_1);
    CSwitchLog::CSwitchLog(local_2c,"void CGameManager::PutPvp(PvP_Room*)",0xae4,0,0);
    CSwitchLog::operator()(local_2c,"pvp@log room(%d)",uVar2);
    local_1c = PvP_Room::get_index(param_1);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::find
              ((int *)local_34);
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=(local_34,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = PvP_Room::get_index(param_1);
      __gnu_cxx::
      hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
      erase((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
             *)(this + 0x25c),local_10);
      StaticPool<PvP_Room,600>::Free((StaticPool<PvP_Room,600> *)(this + 0xdc),param_1);
    }
  }
  return;
}
```
