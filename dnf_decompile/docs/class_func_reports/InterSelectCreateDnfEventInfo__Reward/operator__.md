# operator()

`_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser`

`InterSelectCreateDnfEventInfo::Reward::operator()(CUser*)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfEventInfo::Reward` | `0x08160c6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160c6e  _ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser
#           InterSelectCreateDnfEventInfo::Reward::operator()(CUser*)
# range [0x08160c6e, 0x08160d5d]
08160c6e +0x00:  push   %ebp
08160c6f +0x01:  mov    %esp,%ebp
08160c71 +0x03:  push   %esi
08160c72 +0x04:  push   %ebx
08160c73 +0x05:  sub    $0x20,%esp
08160c76 +0x08:  lea    -0x14(%ebp),%eax
08160c79 +0x0b:  mov    %eax,(%esp)
08160c7c +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08160c81 +0x13:  movl   $0x22d,0x8(%esp)
08160c89 +0x1b:  movl   $0x0,0x4(%esp)
08160c91 +0x23:  lea    -0x14(%ebp),%eax
08160c94 +0x26:  mov    %eax,(%esp)
08160c97 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08160c9c +0x2e:  mov    0x8(%ebp),%eax
08160c9f +0x31:  movzwl (%eax),%eax
08160ca2 +0x34:  movzwl %ax,%eax
08160ca5 +0x37:  mov    %eax,0x4(%esp)
08160ca9 +0x3b:  lea    -0x14(%ebp),%eax
08160cac +0x3e:  mov    %eax,(%esp)
08160caf +0x41:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08160cb4 +0x46:  mov    0xc(%ebp),%eax
08160cb7 +0x49:  mov    %eax,(%esp)
08160cba +0x4c:  call   086931b4 <_ZN5CUser23GetEventCreateDnfRewardEv>  ; CUser::GetEventCreateDnfReward()
08160cbf +0x51:  xor    $0x1,%eax
08160cc2 +0x54:  test   %al,%al
08160cc4 +0x56:  je     08160cd8 <+0x6a>
08160cc6 +0x58:  mov    0x8(%ebp),%eax
08160cc9 +0x5b:  movzbl 0x2(%eax),%eax
08160ccd +0x5f:  test   %al,%al
08160ccf +0x61:  je     08160cd8 <+0x6a>
08160cd1 +0x63:  mov    $0x1,%eax
08160cd6 +0x68:  jmp    08160cdd <+0x6f>
08160cd8 +0x6a:  mov    $0x0,%eax
08160cdd +0x6f:  test   %al,%al
08160cdf +0x71:  je     08160cf6 <+0x88>
08160ce1 +0x73:  movl   $0x1,0x4(%esp)
08160ce9 +0x7b:  lea    -0x14(%ebp),%eax
08160cec +0x7e:  mov    %eax,(%esp)
08160cef +0x81:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08160cf4 +0x86:  jmp    08160d09 <+0x9b>
08160cf6 +0x88:  movl   $0x0,0x4(%esp)
08160cfe +0x90:  lea    -0x14(%ebp),%eax
08160d01 +0x93:  mov    %eax,(%esp)
08160d04 +0x96:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08160d09 +0x9b:  movl   $0x1,0x4(%esp)
08160d11 +0xa3:  lea    -0x14(%ebp),%eax
08160d14 +0xa6:  mov    %eax,(%esp)
08160d17 +0xa9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08160d1c +0xae:  lea    -0x14(%ebp),%eax
08160d1f +0xb1:  mov    %eax,0x4(%esp)
08160d23 +0xb5:  mov    0xc(%ebp),%eax
08160d26 +0xb8:  mov    %eax,(%esp)
08160d29 +0xbb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08160d2e +0xc0:  jmp    08160d4b <+0xdd>
08160d30 +0xc2:  mov    %edx,%ebx
08160d32 +0xc4:  mov    %eax,%esi
08160d34 +0xc6:  lea    -0x14(%ebp),%eax
08160d37 +0xc9:  mov    %eax,(%esp)
08160d3a +0xcc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08160d3f +0xd1:  mov    %esi,%eax
08160d41 +0xd3:  mov    %ebx,%edx
08160d43 +0xd5:  mov    %eax,(%esp)
08160d46 +0xd8:  call   08ae3750 <_Unwind_Resume>
08160d4b +0xdd:  lea    -0x14(%ebp),%eax
08160d4e +0xe0:  mov    %eax,(%esp)
08160d51 +0xe3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08160d56 +0xe8:  add    $0x20,%esp
08160d59 +0xeb:  pop    %ebx
08160d5a +0xec:  pop    %esi
08160d5b +0xed:  pop    %ebp
08160d5c +0xee:  ret
08160d5d +0xef:  nop
```

## 反编译 C

```c
// InterSelectCreateDnfEventInfo::Reward::operator @ 0x8160c6e

/* InterSelectCreateDnfEventInfo::Reward::TEMPNAMEPLACEHOLDERVALUE(CUser*) */

void __thiscall InterSelectCreateDnfEventInfo::Reward::operator()(Reward *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08160c97 to 08160d2d has its CatchHandler @ 08160d30 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22d);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)*(ushort *)this);
  cVar2 = CUser::GetEventCreateDnfReward(param_1);
  if ((cVar2 == '\x01') || (this[2] == (Reward)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
