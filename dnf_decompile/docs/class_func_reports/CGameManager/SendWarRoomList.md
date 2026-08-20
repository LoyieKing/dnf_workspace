# SendWarRoomList

`_ZN12CGameManager15SendWarRoomListEP5CUser`

`CGameManager::SendWarRoomList(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a2f94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a2f94  _ZN12CGameManager15SendWarRoomListEP5CUser
#           CGameManager::SendWarRoomList(CUser*)
# range [0x082a2f94, 0x082a30f1]
082a2f94 +0x000:  push   %ebp
082a2f95 +0x001:  mov    %esp,%ebp
082a2f97 +0x003:  push   %esi
082a2f98 +0x004:  push   %ebx
082a2f99 +0x005:  sub    $0x40,%esp
082a2f9c +0x008:  lea    -0x2c(%ebp),%eax
082a2f9f +0x00b:  mov    %eax,(%esp)
082a2fa2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082a2fa7 +0x013:  movl   $0x57,0x8(%esp)
082a2faf +0x01b:  movl   $0x0,0x4(%esp)
082a2fb7 +0x023:  lea    -0x2c(%ebp),%eax
082a2fba +0x026:  mov    %eax,(%esp)
082a2fbd +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082a2fc2 +0x02e:  lea    -0x2c(%ebp),%eax
082a2fc5 +0x031:  mov    %eax,(%esp)
082a2fc8 +0x034:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082a2fcd +0x039:  mov    %eax,-0x30(%ebp)
082a2fd0 +0x03c:  movl   $0x0,0x4(%esp)
082a2fd8 +0x044:  lea    -0x2c(%ebp),%eax
082a2fdb +0x047:  mov    %eax,(%esp)
082a2fde +0x04a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082a2fe3 +0x04f:  movl   $0x0,-0x10(%ebp)
082a2fea +0x056:  mov    0x8(%ebp),%eax
082a2fed +0x059:  lea    0x284(%eax),%edx
082a2ff3 +0x05f:  lea    -0x38(%ebp),%eax
082a2ff6 +0x062:  mov    %edx,0x4(%esp)
082a2ffa +0x066:  mov    %eax,(%esp)
082a2ffd +0x069:  call   082b4e64 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6d5f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6d5f
082a3002 +0x06e:  sub    $0x4,%esp
082a3005 +0x071:  jmp    082a3051 <+0xbd>
082a3007 +0x073:  lea    -0x38(%ebp),%eax
082a300a +0x076:  mov    %eax,(%esp)
082a300d +0x079:  call   082b4cca <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bc5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bc5
082a3012 +0x07e:  mov    0x4(%eax),%eax
082a3015 +0x081:  mov    %eax,-0xc(%ebp)
082a3018 +0x084:  cmpl   $0x0,-0xc(%ebp)
082a301c +0x088:  je     082a3034 <+0xa0>
082a301e +0x08a:  lea    -0x2c(%ebp),%eax
082a3021 +0x08d:  mov    %eax,0x4(%esp)
082a3025 +0x091:  mov    -0xc(%ebp),%eax
082a3028 +0x094:  mov    %eax,(%esp)
082a302b +0x097:  call   086bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>  ; WarRoom::MakeRoomInfo(char*)
082a3030 +0x09c:  addl   $0x1,-0x10(%ebp)
082a3034 +0x0a0:  lea    -0x18(%ebp),%eax
082a3037 +0x0a3:  movl   $0x0,0x8(%esp)
082a303f +0x0ab:  lea    -0x38(%ebp),%edx
082a3042 +0x0ae:  mov    %edx,0x4(%esp)
082a3046 +0x0b2:  mov    %eax,(%esp)
082a3049 +0x0b5:  call   082b4e8a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6d85>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6d85
082a304e +0x0ba:  sub    $0x4,%esp
082a3051 +0x0bd:  mov    0x8(%ebp),%eax
082a3054 +0x0c0:  lea    0x284(%eax),%edx
082a305a +0x0c6:  lea    -0x20(%ebp),%eax
082a305d +0x0c9:  mov    %edx,0x4(%esp)
082a3061 +0x0cd:  mov    %eax,(%esp)
082a3064 +0x0d0:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a3069 +0x0d5:  sub    $0x4,%esp
082a306c +0x0d8:  lea    -0x20(%ebp),%eax
082a306f +0x0db:  mov    %eax,0x4(%esp)
082a3073 +0x0df:  lea    -0x38(%ebp),%eax
082a3076 +0x0e2:  mov    %eax,(%esp)
082a3079 +0x0e5:  call   082b4cde <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bd9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bd9
082a307e +0x0ea:  test   %al,%al
082a3080 +0x0ec:  jne    082a3007 <+0x73>
082a3082 +0x0ee:  mov    -0x10(%ebp),%eax
082a3085 +0x0f1:  mov    %eax,0x8(%esp)
082a3089 +0x0f5:  lea    -0x30(%ebp),%eax
082a308c +0x0f8:  mov    %eax,0x4(%esp)
082a3090 +0x0fc:  lea    -0x2c(%ebp),%eax
082a3093 +0x0ff:  mov    %eax,(%esp)
082a3096 +0x102:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082a309b +0x107:  movl   $0x1,0x4(%esp)
082a30a3 +0x10f:  lea    -0x2c(%ebp),%eax
082a30a6 +0x112:  mov    %eax,(%esp)
082a30a9 +0x115:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082a30ae +0x11a:  lea    -0x2c(%ebp),%eax
082a30b1 +0x11d:  mov    %eax,0x4(%esp)
082a30b5 +0x121:  mov    0xc(%ebp),%eax
082a30b8 +0x124:  mov    %eax,(%esp)
082a30bb +0x127:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082a30c0 +0x12c:  jmp    082a30dd <+0x149>
082a30c2 +0x12e:  mov    %edx,%ebx
082a30c4 +0x130:  mov    %eax,%esi
082a30c6 +0x132:  lea    -0x2c(%ebp),%eax
082a30c9 +0x135:  mov    %eax,(%esp)
082a30cc +0x138:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a30d1 +0x13d:  mov    %esi,%eax
082a30d3 +0x13f:  mov    %ebx,%edx
082a30d5 +0x141:  mov    %eax,(%esp)
082a30d8 +0x144:  call   08ae3750 <_Unwind_Resume>
082a30dd +0x149:  lea    -0x2c(%ebp),%eax
082a30e0 +0x14c:  mov    %eax,(%esp)
082a30e3 +0x14f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a30e8 +0x154:  lea    -0x8(%ebp),%esp
082a30eb +0x157:  add    $0x0,%esp
082a30ee +0x15a:  pop    %ebx
082a30ef +0x15b:  pop    %esi
082a30f0 +0x15c:  pop    %ebp
082a30f1 +0x15d:  ret
```

## 反编译 C

```c
// CGameManager::SendWarRoomList @ 0x82a2f94

/* CGameManager::SendWarRoomList(CUser*) */

void __thiscall CGameManager::SendWarRoomList(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_3c [8];
  int local_34;
  PacketGuard local_30 [12];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_24 [8];
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_1c [8];
  int local_14;
  WarRoom *local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082a2fbd to 082a30bf has its CatchHandler @ 082a30c2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x57);
  local_34 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_30);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,0);
  local_14 = 0;
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::begin(local_3c);
  while( true ) {
    __gnu_cxx::
    hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>::end
              (local_24);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_3c,(_Hashtable_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
                          *)local_3c);
    local_10 = *(WarRoom **)(iVar2 + 4);
    if (local_10 != (WarRoom *)0x0) {
      WarRoom::MakeRoomInfo(local_10,(char *)local_30);
      local_14 = local_14 + 1;
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
    ::operator++(local_1c,(int)local_3c);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,&local_34,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
