# SendEventNotiPacket

`_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser`

`Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorServerEventStart` | `0x084cf2de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf2de  _ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser
#           Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*)
# range [0x084cf2de, 0x084cf3c9]
084cf2de +0x00:  push   %ebp
084cf2df +0x01:  mov    %esp,%ebp
084cf2e1 +0x03:  push   %esi
084cf2e2 +0x04:  push   %ebx
084cf2e3 +0x05:  sub    $0x30,%esp
084cf2e6 +0x08:  mov    0x8(%ebp),%ecx
084cf2e9 +0x0b:  mov    0xc(%ebp),%edx
084cf2ec +0x0e:  mov    0x10(%ebp),%eax
084cf2ef +0x11:  mov    %cl,-0x1c(%ebp)
084cf2f2 +0x14:  mov    %dx,-0x20(%ebp)
084cf2f6 +0x18:  mov    %ax,-0x24(%ebp)
084cf2fa +0x1c:  lea    -0x14(%ebp),%eax
084cf2fd +0x1f:  mov    %eax,(%esp)
084cf300 +0x22:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cf305 +0x27:  movl   $0x45,0x8(%esp)
084cf30d +0x2f:  movl   $0x0,0x4(%esp)
084cf315 +0x37:  lea    -0x14(%ebp),%eax
084cf318 +0x3a:  mov    %eax,(%esp)
084cf31b +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cf320 +0x42:  movzbl -0x1c(%ebp),%eax
084cf324 +0x46:  mov    %eax,0x4(%esp)
084cf328 +0x4a:  lea    -0x14(%ebp),%eax
084cf32b +0x4d:  mov    %eax,(%esp)
084cf32e +0x50:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cf333 +0x55:  movswl -0x20(%ebp),%eax
084cf337 +0x59:  mov    %eax,0x4(%esp)
084cf33b +0x5d:  lea    -0x14(%ebp),%eax
084cf33e +0x60:  mov    %eax,(%esp)
084cf341 +0x63:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cf346 +0x68:  movswl -0x24(%ebp),%eax
084cf34a +0x6c:  mov    %eax,0x4(%esp)
084cf34e +0x70:  lea    -0x14(%ebp),%eax
084cf351 +0x73:  mov    %eax,(%esp)
084cf354 +0x76:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cf359 +0x7b:  movl   $0x1,0x4(%esp)
084cf361 +0x83:  lea    -0x14(%ebp),%eax
084cf364 +0x86:  mov    %eax,(%esp)
084cf367 +0x89:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cf36c +0x8e:  cmpl   $0x0,0x14(%ebp)
084cf370 +0x92:  jne    084cf388 <+0xaa>
084cf372 +0x94:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084cf377 +0x99:  lea    -0x14(%ebp),%edx
084cf37a +0x9c:  mov    %edx,0x4(%esp)
084cf37e +0xa0:  mov    %eax,(%esp)
084cf381 +0xa3:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084cf386 +0xa8:  jmp    084cf3b7 <+0xd9>
084cf388 +0xaa:  lea    -0x14(%ebp),%eax
084cf38b +0xad:  mov    %eax,0x4(%esp)
084cf38f +0xb1:  mov    0x14(%ebp),%eax
084cf392 +0xb4:  mov    %eax,(%esp)
084cf395 +0xb7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cf39a +0xbc:  jmp    084cf3b7 <+0xd9>
084cf39c +0xbe:  mov    %edx,%ebx
084cf39e +0xc0:  mov    %eax,%esi
084cf3a0 +0xc2:  lea    -0x14(%ebp),%eax
084cf3a3 +0xc5:  mov    %eax,(%esp)
084cf3a6 +0xc8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cf3ab +0xcd:  mov    %esi,%eax
084cf3ad +0xcf:  mov    %ebx,%edx
084cf3af +0xd1:  mov    %eax,(%esp)
084cf3b2 +0xd4:  call   08ae3750 <_Unwind_Resume>
084cf3b7 +0xd9:  lea    -0x14(%ebp),%eax
084cf3ba +0xdc:  mov    %eax,(%esp)
084cf3bd +0xdf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cf3c2 +0xe4:  add    $0x30,%esp
084cf3c5 +0xe7:  pop    %ebx
084cf3c6 +0xe8:  pop    %esi
084cf3c7 +0xe9:  pop    %ebp
084cf3c8 +0xea:  ret
084cf3c9 +0xeb:  nop
```

## 反编译 C

```c
// Inter_MonitorServerEventStart::SendEventNotiPacket @ 0x84cf2de

/* Inter_MonitorServerEventStart::SendEventNotiPacket(bool, short, short, CUser*) */

void Inter_MonitorServerEventStart::SendEventNotiPacket
               (bool param_1,short param_2,short param_3,CUser *param_4)

{
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084cf31b to 084cf399 has its CatchHandler @ 084cf39c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x45);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  if (param_4 == (CUser *)0x0) {
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18);
  }
  else {
    CUser::Send(param_4,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
