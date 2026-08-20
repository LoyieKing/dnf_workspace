# SendPvpList

`_ZN12CGameManager11SendPvpListEP5CUser`

`CGameManager::SendPvpList(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08296642` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08296642  _ZN12CGameManager11SendPvpListEP5CUser
#           CGameManager::SendPvpList(CUser*)
# range [0x08296642, 0x08296791]
08296642 +0x000:  push   %ebp
08296643 +0x001:  mov    %esp,%ebp
08296645 +0x003:  push   %esi
08296646 +0x004:  push   %ebx
08296647 +0x005:  sub    $0x40,%esp
0829664a +0x008:  lea    -0x28(%ebp),%eax
0829664d +0x00b:  mov    %eax,(%esp)
08296650 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08296655 +0x013:  movl   $0x29,0x8(%esp)
0829665d +0x01b:  movl   $0x0,0x4(%esp)
08296665 +0x023:  lea    -0x28(%ebp),%eax
08296668 +0x026:  mov    %eax,(%esp)
0829666b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08296670 +0x02e:  mov    0x8(%ebp),%eax
08296673 +0x031:  add    $0x25c,%eax
08296678 +0x036:  mov    %eax,(%esp)
0829667b +0x039:  call   082b2b32 <_GLOBAL__I__ZN4CLog5this_E+0xef59>  ; global constructors keyed to CLog::this_+0xef59
08296680 +0x03e:  mov    %eax,0x4(%esp)
08296684 +0x042:  lea    -0x28(%ebp),%eax
08296687 +0x045:  mov    %eax,(%esp)
0829668a +0x048:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0829668f +0x04d:  mov    0x8(%ebp),%eax
08296692 +0x050:  lea    0x25c(%eax),%edx
08296698 +0x056:  lea    -0x30(%ebp),%eax
0829669b +0x059:  mov    %edx,0x4(%esp)
0829669f +0x05d:  mov    %eax,(%esp)
082966a2 +0x060:  call   082b2b46 <_GLOBAL__I__ZN4CLog5this_E+0xef6d>  ; global constructors keyed to CLog::this_+0xef6d
082966a7 +0x065:  sub    $0x4,%esp
082966aa +0x068:  jmp    08296706 <+0xc4>
082966ac +0x06a:  lea    -0x30(%ebp),%eax
082966af +0x06d:  mov    %eax,(%esp)
082966b2 +0x070:  call   082b1616 <_GLOBAL__I__ZN4CLog5this_E+0xda3d>  ; global constructors keyed to CLog::this_+0xda3d
082966b7 +0x075:  mov    0x4(%eax),%eax
082966ba +0x078:  mov    %eax,-0xc(%ebp)
082966bd +0x07b:  cmpl   $0x0,-0xc(%ebp)
082966c1 +0x07f:  je     082966e9 <+0xa7>
082966c3 +0x081:  mov    -0xc(%ebp),%eax
082966c6 +0x084:  mov    %eax,(%esp)
082966c9 +0x087:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
082966ce +0x08c:  test   %eax,%eax
082966d0 +0x08e:  setg   %al
082966d3 +0x091:  test   %al,%al
082966d5 +0x093:  je     082966e9 <+0xa7>
082966d7 +0x095:  lea    -0x28(%ebp),%eax
082966da +0x098:  mov    %eax,0x4(%esp)
082966de +0x09c:  mov    -0xc(%ebp),%eax
082966e1 +0x09f:  mov    %eax,(%esp)
082966e4 +0x0a2:  call   085db7f6 <_ZN8PvP_Room14make_room_infoEPc>  ; PvP_Room::make_room_info(char*)
082966e9 +0x0a7:  lea    -0x14(%ebp),%eax
082966ec +0x0aa:  movl   $0x0,0x8(%esp)
082966f4 +0x0b2:  lea    -0x30(%ebp),%edx
082966f7 +0x0b5:  mov    %edx,0x4(%esp)
082966fb +0x0b9:  mov    %eax,(%esp)
082966fe +0x0bc:  call   082b2b6c <_GLOBAL__I__ZN4CLog5this_E+0xef93>  ; global constructors keyed to CLog::this_+0xef93
08296703 +0x0c1:  sub    $0x4,%esp
08296706 +0x0c4:  mov    0x8(%ebp),%eax
08296709 +0x0c7:  lea    0x25c(%eax),%edx
0829670f +0x0cd:  lea    -0x1c(%ebp),%eax
08296712 +0x0d0:  mov    %edx,0x4(%esp)
08296716 +0x0d4:  mov    %eax,(%esp)
08296719 +0x0d7:  call   082b159e <_GLOBAL__I__ZN4CLog5this_E+0xd9c5>  ; global constructors keyed to CLog::this_+0xd9c5
0829671e +0x0dc:  sub    $0x4,%esp
08296721 +0x0df:  lea    -0x1c(%ebp),%eax
08296724 +0x0e2:  mov    %eax,0x4(%esp)
08296728 +0x0e6:  lea    -0x30(%ebp),%eax
0829672b +0x0e9:  mov    %eax,(%esp)
0829672e +0x0ec:  call   082b162a <_GLOBAL__I__ZN4CLog5this_E+0xda51>  ; global constructors keyed to CLog::this_+0xda51
08296733 +0x0f1:  test   %al,%al
08296735 +0x0f3:  jne    082966ac <+0x6a>
0829673b +0x0f9:  movl   $0x1,0x4(%esp)
08296743 +0x101:  lea    -0x28(%ebp),%eax
08296746 +0x104:  mov    %eax,(%esp)
08296749 +0x107:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0829674e +0x10c:  lea    -0x28(%ebp),%eax
08296751 +0x10f:  mov    %eax,0x4(%esp)
08296755 +0x113:  mov    0xc(%ebp),%eax
08296758 +0x116:  mov    %eax,(%esp)
0829675b +0x119:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08296760 +0x11e:  jmp    0829677d <+0x13b>
08296762 +0x120:  mov    %edx,%ebx
08296764 +0x122:  mov    %eax,%esi
08296766 +0x124:  lea    -0x28(%ebp),%eax
08296769 +0x127:  mov    %eax,(%esp)
0829676c +0x12a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08296771 +0x12f:  mov    %esi,%eax
08296773 +0x131:  mov    %ebx,%edx
08296775 +0x133:  mov    %eax,(%esp)
08296778 +0x136:  call   08ae3750 <_Unwind_Resume>
0829677d +0x13b:  lea    -0x28(%ebp),%eax
08296780 +0x13e:  mov    %eax,(%esp)
08296783 +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08296788 +0x146:  lea    -0x8(%ebp),%esp
0829678b +0x149:  add    $0x0,%esp
0829678e +0x14c:  pop    %ebx
0829678f +0x14d:  pop    %esi
08296790 +0x14e:  pop    %ebp
08296791 +0x14f:  ret
```

## 反编译 C

```c
// CGameManager::SendPvpList @ 0x8296642

/* CGameManager::SendPvpList(CUser*) */

void __thiscall CGameManager::SendPvpList(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_34 [8];
  PacketGuard local_2c [12];
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
  local_18 [8];
  PvP_Room *local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0829666b to 0829675f has its CatchHandler @ 08296762 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x29);
  iVar2 = __gnu_cxx::
          hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
          ::size((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
                  *)(this + 0x25c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,iVar2);
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::begin
            (local_34);
  while( true ) {
    __gnu_cxx::
    hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::end
              (local_20);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_34,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
                          *)local_34);
    local_10 = *(PvP_Room **)(iVar2 + 4);
    if (local_10 != (PvP_Room *)0x0) {
      iVar2 = PvP_Room::get_waiter_count(local_10);
      if (0 < iVar2) {
        PvP_Room::make_room_info(local_10,(char *)local_2c);
      }
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,PvP_Room*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,PvP_Room*>>,std::equal_to<int>,std::allocator<PvP_Room*>>
    ::operator++(local_18,(int)local_34);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  CUser::Send(param_1,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return;
}
```
