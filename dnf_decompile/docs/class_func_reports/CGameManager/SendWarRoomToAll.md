# SendWarRoomToAll

`_ZN12CGameManager16SendWarRoomToAllEi`

`CGameManager::SendWarRoomToAll(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a30f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a30f2  _ZN12CGameManager16SendWarRoomToAllEi
#           CGameManager::SendWarRoomToAll(int)
# range [0x082a30f2, 0x082a3201]
082a30f2 +0x000:  push   %ebp
082a30f3 +0x001:  mov    %esp,%ebp
082a30f5 +0x003:  push   %esi
082a30f6 +0x004:  push   %ebx
082a30f7 +0x005:  sub    $0x30,%esp
082a30fa +0x008:  lea    -0x20(%ebp),%eax
082a30fd +0x00b:  mov    %eax,(%esp)
082a3100 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082a3105 +0x013:  movl   $0x57,0x8(%esp)
082a310d +0x01b:  movl   $0x0,0x4(%esp)
082a3115 +0x023:  lea    -0x20(%ebp),%eax
082a3118 +0x026:  mov    %eax,(%esp)
082a311b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082a3120 +0x02e:  movl   $0x1,0x4(%esp)
082a3128 +0x036:  lea    -0x20(%ebp),%eax
082a312b +0x039:  mov    %eax,(%esp)
082a312e +0x03c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082a3133 +0x041:  mov    0x8(%ebp),%eax
082a3136 +0x044:  lea    0x284(%eax),%ecx
082a313c +0x04a:  lea    -0x28(%ebp),%eax
082a313f +0x04d:  lea    0xc(%ebp),%edx
082a3142 +0x050:  mov    %edx,0x8(%esp)
082a3146 +0x054:  mov    %ecx,0x4(%esp)
082a314a +0x058:  mov    %eax,(%esp)
082a314d +0x05b:  call   082b4c26 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b21>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b21
082a3152 +0x060:  sub    $0x4,%esp
082a3155 +0x063:  mov    0x8(%ebp),%eax
082a3158 +0x066:  lea    0x284(%eax),%edx
082a315e +0x06c:  lea    -0x14(%ebp),%eax
082a3161 +0x06f:  mov    %edx,0x4(%esp)
082a3165 +0x073:  mov    %eax,(%esp)
082a3168 +0x076:  call   082b4c52 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b4d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b4d
082a316d +0x07b:  sub    $0x4,%esp
082a3170 +0x07e:  lea    -0x14(%ebp),%eax
082a3173 +0x081:  mov    %eax,0x4(%esp)
082a3177 +0x085:  lea    -0x28(%ebp),%eax
082a317a +0x088:  mov    %eax,(%esp)
082a317d +0x08b:  call   082b4c78 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6b73>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6b73
082a3182 +0x090:  test   %al,%al
082a3184 +0x092:  jne    082a31ed <+0xfb>
082a3186 +0x094:  lea    -0x28(%ebp),%eax
082a3189 +0x097:  mov    %eax,(%esp)
082a318c +0x09a:  call   082b4cca <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6bc5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6bc5
082a3191 +0x09f:  mov    0x4(%eax),%eax
082a3194 +0x0a2:  mov    %eax,-0xc(%ebp)
082a3197 +0x0a5:  lea    -0x20(%ebp),%eax
082a319a +0x0a8:  mov    %eax,0x4(%esp)
082a319e +0x0ac:  mov    -0xc(%ebp),%eax
082a31a1 +0x0af:  mov    %eax,(%esp)
082a31a4 +0x0b2:  call   086bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>  ; WarRoom::MakeRoomInfo(char*)
082a31a9 +0x0b7:  movl   $0x1,0x4(%esp)
082a31b1 +0x0bf:  lea    -0x20(%ebp),%eax
082a31b4 +0x0c2:  mov    %eax,(%esp)
082a31b7 +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082a31bc +0x0ca:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082a31c1 +0x0cf:  lea    -0x20(%ebp),%edx
082a31c4 +0x0d2:  mov    %edx,0x4(%esp)
082a31c8 +0x0d6:  mov    %eax,(%esp)
082a31cb +0x0d9:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082a31d0 +0x0de:  jmp    082a31ed <+0xfb>
082a31d2 +0x0e0:  mov    %edx,%ebx
082a31d4 +0x0e2:  mov    %eax,%esi
082a31d6 +0x0e4:  lea    -0x20(%ebp),%eax
082a31d9 +0x0e7:  mov    %eax,(%esp)
082a31dc +0x0ea:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a31e1 +0x0ef:  mov    %esi,%eax
082a31e3 +0x0f1:  mov    %ebx,%edx
082a31e5 +0x0f3:  mov    %eax,(%esp)
082a31e8 +0x0f6:  call   08ae3750 <_Unwind_Resume>
082a31ed +0x0fb:  lea    -0x20(%ebp),%eax
082a31f0 +0x0fe:  mov    %eax,(%esp)
082a31f3 +0x101:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a31f8 +0x106:  lea    -0x8(%ebp),%esp
082a31fb +0x109:  add    $0x0,%esp
082a31fe +0x10c:  pop    %ebx
082a31ff +0x10d:  pop    %esi
082a3200 +0x10e:  pop    %ebp
082a3201 +0x10f:  ret
```

## 反编译 C

```c
// CGameManager::SendWarRoomToAll @ 0x82a30f2

/* CGameManager::SendWarRoomToAll(int) */

void CGameManager::SendWarRoomToAll(int param_1)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_2c [8];
  PacketGuard local_24 [12];
  hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  local_18 [8];
  WarRoom *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082a311b to 082a31cf has its CatchHandler @ 082a31d2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x57);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::find((int *)local_2c);
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::end(local_18);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
          ::operator==(local_2c,(_Hashtable_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WarRoom*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WarRoom*>>,std::equal_to<int>,std::allocator<WarRoom*>>
            ::operator->(local_2c);
    local_10 = *(WarRoom **)(iVar2 + 4);
    WarRoom::MakeRoomInfo(local_10,(char *)local_24);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
