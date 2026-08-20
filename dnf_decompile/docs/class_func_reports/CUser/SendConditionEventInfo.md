# SendConditionEventInfo

`_ZN5CUser22SendConditionEventInfoEv`

`CUser::SendConditionEventInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086818fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086818fc  _ZN5CUser22SendConditionEventInfoEv
#           CUser::SendConditionEventInfo()
# range [0x086818fc, 0x086819f9]
086818fc +0x00:  push   %ebp
086818fd +0x01:  mov    %esp,%ebp
086818ff +0x03:  push   %esi
08681900 +0x04:  push   %ebx
08681901 +0x05:  sub    $0x30,%esp
08681904 +0x08:  lea    -0x20(%ebp),%eax
08681907 +0x0b:  mov    %eax,(%esp)
0868190a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868190f +0x13:  movl   $0xea,0x8(%esp)
08681917 +0x1b:  movl   $0x0,0x4(%esp)
0868191f +0x23:  lea    -0x20(%ebp),%eax
08681922 +0x26:  mov    %eax,(%esp)
08681925 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868192a +0x2e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0868192f +0x33:  mov    %eax,(%esp)
08681932 +0x36:  call   08298f60 <_ZN12CGameManager24GetConditionEventManagerEv>  ; CGameManager::GetConditionEventManager()
08681937 +0x3b:  mov    %eax,-0x14(%ebp)
0868193a +0x3e:  cmpl   $0x0,-0x14(%ebp)
0868193e +0x42:  je     086819e8 <+0xec>
08681944 +0x48:  mov    -0x14(%ebp),%eax
08681947 +0x4b:  mov    %eax,(%esp)
0868194a +0x4e:  call   08335754 <_ZN22CConditionEventManager16GetCurEventIndexEv>  ; CConditionEventManager::GetCurEventIndex()
0868194f +0x53:  mov    %eax,-0x10(%ebp)
08681952 +0x56:  mov    0x8(%ebp),%eax
08681955 +0x59:  mov    %eax,(%esp)
08681958 +0x5c:  call   08335ba8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x4e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x4e
0868195d +0x61:  mov    %al,-0xa(%ebp)
08681960 +0x64:  mov    0x8(%ebp),%eax
08681963 +0x67:  mov    %eax,(%esp)
08681966 +0x6a:  call   08335c14 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0xba>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0xba
0868196b +0x6f:  mov    %al,-0x9(%ebp)
0868196e +0x72:  mov    -0x10(%ebp),%eax
08681971 +0x75:  mov    %eax,0x4(%esp)
08681975 +0x79:  lea    -0x20(%ebp),%eax
08681978 +0x7c:  mov    %eax,(%esp)
0868197b +0x7f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08681980 +0x84:  movsbl -0xa(%ebp),%eax
08681984 +0x88:  mov    %eax,0x4(%esp)
08681988 +0x8c:  lea    -0x20(%ebp),%eax
0868198b +0x8f:  mov    %eax,(%esp)
0868198e +0x92:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08681993 +0x97:  movsbl -0x9(%ebp),%eax
08681997 +0x9b:  mov    %eax,0x4(%esp)
0868199b +0x9f:  lea    -0x20(%ebp),%eax
0868199e +0xa2:  mov    %eax,(%esp)
086819a1 +0xa5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086819a6 +0xaa:  movl   $0x1,0x4(%esp)
086819ae +0xb2:  lea    -0x20(%ebp),%eax
086819b1 +0xb5:  mov    %eax,(%esp)
086819b4 +0xb8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086819b9 +0xbd:  lea    -0x20(%ebp),%eax
086819bc +0xc0:  mov    %eax,0x4(%esp)
086819c0 +0xc4:  mov    0x8(%ebp),%eax
086819c3 +0xc7:  mov    %eax,(%esp)
086819c6 +0xca:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086819cb +0xcf:  jmp    086819e8 <+0xec>
086819cd +0xd1:  mov    %edx,%ebx
086819cf +0xd3:  mov    %eax,%esi
086819d1 +0xd5:  lea    -0x20(%ebp),%eax
086819d4 +0xd8:  mov    %eax,(%esp)
086819d7 +0xdb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086819dc +0xe0:  mov    %esi,%eax
086819de +0xe2:  mov    %ebx,%edx
086819e0 +0xe4:  mov    %eax,(%esp)
086819e3 +0xe7:  call   08ae3750 <_Unwind_Resume>
086819e8 +0xec:  lea    -0x20(%ebp),%eax
086819eb +0xef:  mov    %eax,(%esp)
086819ee +0xf2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086819f3 +0xf7:  add    $0x30,%esp
086819f6 +0xfa:  pop    %ebx
086819f7 +0xfb:  pop    %esi
086819f8 +0xfc:  pop    %ebp
086819f9 +0xfd:  ret
```

## 反编译 C

```c
// CUser::SendConditionEventInfo @ 0x86818fc

/* CUser::SendConditionEventInfo() */

void __thiscall CUser::SendConditionEventInfo(CUser *this)

{
  CGameManager *this_00;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  char local_e;
  char local_d;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08681925 to 086819ca has its CatchHandler @ 086819cd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xea);
  this_00 = (CGameManager *)G_CGameManager();
  local_18 = CGameManager::GetConditionEventManager(this_00);
  if (local_18 != 0) {
    local_14 = CConditionEventManager::GetCurEventIndex();
    local_e = CUserCharacInfo::GetCurConditionEventStep((CUserCharacInfo *)this);
    local_d = CUserCharacInfo::GetCurConditionEventRewardStep((CUserCharacInfo *)this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_14);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    Send(this,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
