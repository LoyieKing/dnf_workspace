# send

`_ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase`

`Dispatcher_CallPartyMemberRealtimeInfo::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallPartyMemberRealtimeInfo` | `0x081ce3ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce3ee  _ZN38Dispatcher_CallPartyMemberRealtimeInfo4sendEP5CUserR9ParamBase
#           Dispatcher_CallPartyMemberRealtimeInfo::send(CUser*, ParamBase&)
# range [0x081ce3ee, 0x081ce4e9]
081ce3ee +0x00:  push   %ebp
081ce3ef +0x01:  mov    %esp,%ebp
081ce3f1 +0x03:  push   %esi
081ce3f2 +0x04:  push   %ebx
081ce3f3 +0x05:  sub    $0x30,%esp
081ce3f6 +0x08:  lea    -0x18(%ebp),%eax
081ce3f9 +0x0b:  mov    %eax,(%esp)
081ce3fc +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ce401 +0x13:  lea    -0x24(%ebp),%eax
081ce404 +0x16:  mov    %eax,(%esp)
081ce407 +0x19:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081ce40c +0x1e:  mov    0xc(%ebp),%eax
081ce40f +0x21:  mov    %eax,(%esp)
081ce412 +0x24:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ce417 +0x29:  mov    %eax,-0xc(%ebp)
081ce41a +0x2c:  movl   $0xa9,0x8(%esp)
081ce422 +0x34:  movl   $0x1,0x4(%esp)
081ce42a +0x3c:  lea    -0x18(%ebp),%eax
081ce42d +0x3f:  mov    %eax,(%esp)
081ce430 +0x42:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081ce435 +0x47:  cmpl   $0x0,-0xc(%ebp)
081ce439 +0x4b:  jne    081ce48d <+0x9f>
081ce43b +0x4d:  movl   $0x0,0x4(%esp)
081ce443 +0x55:  lea    -0x18(%ebp),%eax
081ce446 +0x58:  mov    %eax,(%esp)
081ce449 +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ce44e +0x60:  movl   $0x13,0x4(%esp)
081ce456 +0x68:  lea    -0x18(%ebp),%eax
081ce459 +0x6b:  mov    %eax,(%esp)
081ce45c +0x6e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ce461 +0x73:  movl   $0x1,0x4(%esp)
081ce469 +0x7b:  lea    -0x18(%ebp),%eax
081ce46c +0x7e:  mov    %eax,(%esp)
081ce46f +0x81:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081ce474 +0x86:  lea    -0x18(%ebp),%eax
081ce477 +0x89:  mov    %eax,0x4(%esp)
081ce47b +0x8d:  mov    0xc(%ebp),%eax
081ce47e +0x90:  mov    %eax,(%esp)
081ce481 +0x93:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081ce486 +0x98:  mov    $0x0,%ebx
081ce48b +0x9d:  jmp    081ce4b4 <+0xc6>
081ce48d +0x9f:  mov    -0xc(%ebp),%eax
081ce490 +0xa2:  mov    %eax,(%esp)
081ce493 +0xa5:  call   0859cd24 <_ZN6CParty24send_party_realtime_infoEv>  ; CParty::send_party_realtime_info()
081ce498 +0xaa:  mov    $0x1,%ebx
081ce49d +0xaf:  jmp    081ce4b4 <+0xc6>
081ce49f +0xb1:  mov    %edx,%ebx
081ce4a1 +0xb3:  mov    %eax,%esi
081ce4a3 +0xb5:  lea    -0x24(%ebp),%eax
081ce4a6 +0xb8:  mov    %eax,(%esp)
081ce4a9 +0xbb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ce4ae +0xc0:  mov    %esi,%eax
081ce4b0 +0xc2:  mov    %ebx,%edx
081ce4b2 +0xc4:  jmp    081ce4d3 <+0xe5>
081ce4b4 +0xc6:  lea    -0x24(%ebp),%eax
081ce4b7 +0xc9:  mov    %eax,(%esp)
081ce4ba +0xcc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ce4bf +0xd1:  test   %ebx,%ebx
081ce4c1 +0xd3:  lea    -0x18(%ebp),%eax
081ce4c4 +0xd6:  mov    %eax,(%esp)
081ce4c7 +0xd9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ce4cc +0xde:  add    $0x30,%esp
081ce4cf +0xe1:  pop    %ebx
081ce4d0 +0xe2:  pop    %esi
081ce4d1 +0xe3:  pop    %ebp
081ce4d2 +0xe4:  ret
081ce4d3 +0xe5:  mov    %edx,%ebx
081ce4d5 +0xe7:  mov    %eax,%esi
081ce4d7 +0xe9:  lea    -0x18(%ebp),%eax
081ce4da +0xec:  mov    %eax,(%esp)
081ce4dd +0xef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081ce4e2 +0xf4:  mov    %esi,%eax
081ce4e4 +0xf6:  mov    %ebx,%edx
081ce4e6 +0xf8:  mov    %eax,(%esp)
081ce4e9 +0xfb:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Dispatcher_CallPartyMemberRealtimeInfo::send @ 0x81ce3ee

/* Dispatcher_CallPartyMemberRealtimeInfo::send(CUser*, ParamBase&) */

void Dispatcher_CallPartyMemberRealtimeInfo::send(CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081ce407 to 081ce40b has its CatchHandler @ 081ce4d3 */
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081ce412 to 081ce497 has its CatchHandler @ 081ce49f */
  local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa9);
  if (local_10 == (CParty *)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
  }
  else {
    CParty::send_party_realtime_info(local_10);
  }
                    /* try { // try from 081ce4ba to 081ce4be has its CatchHandler @ 081ce4d3 */
  PacketGuard::~PacketGuard(local_28);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
