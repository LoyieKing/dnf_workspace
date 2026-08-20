# BuyFail

`_ZN19Arad_MileageProcess7BuyFailEP5CUsersiii`

`Arad_MileageProcess::BuyFail(CUser*, short, int, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_MileageProcess` | `0x0819e50e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e50e  _ZN19Arad_MileageProcess7BuyFailEP5CUsersiii
#           Arad_MileageProcess::BuyFail(CUser*, short, int, int, int)
# range [0x0819e50e, 0x0819e648]
0819e50e +0x000:  push   %ebp
0819e50f +0x001:  mov    %esp,%ebp
0819e511 +0x003:  push   %esi
0819e512 +0x004:  push   %ebx
0819e513 +0x005:  sub    $0x40,%esp
0819e516 +0x008:  mov    0x10(%ebp),%eax
0819e519 +0x00b:  mov    %ax,-0x2c(%ebp)
0819e51d +0x00f:  lea    -0x1c(%ebp),%eax
0819e520 +0x012:  mov    %eax,(%esp)
0819e523 +0x015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0819e528 +0x01a:  movl   $0xb,-0x10(%ebp)
0819e52f +0x021:  movb   $0x0,-0x9(%ebp)
0819e533 +0x025:  movl   $0x43,0x8(%esp)
0819e53b +0x02d:  movl   $0x1,0x4(%esp)
0819e543 +0x035:  lea    -0x1c(%ebp),%eax
0819e546 +0x038:  mov    %eax,(%esp)
0819e549 +0x03b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0819e54e +0x040:  movl   $0x0,0x4(%esp)
0819e556 +0x048:  lea    -0x1c(%ebp),%eax
0819e559 +0x04b:  mov    %eax,(%esp)
0819e55c +0x04e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e561 +0x053:  movl   $0x0,0x4(%esp)
0819e569 +0x05b:  lea    -0x1c(%ebp),%eax
0819e56c +0x05e:  mov    %eax,(%esp)
0819e56f +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e574 +0x066:  movswl -0x2c(%ebp),%eax
0819e578 +0x06a:  mov    %eax,0x4(%esp)
0819e57c +0x06e:  lea    -0x1c(%ebp),%eax
0819e57f +0x071:  mov    %eax,(%esp)
0819e582 +0x074:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0819e587 +0x079:  movsbl -0x9(%ebp),%eax
0819e58b +0x07d:  mov    %eax,0x4(%esp)
0819e58f +0x081:  lea    -0x1c(%ebp),%eax
0819e592 +0x084:  mov    %eax,(%esp)
0819e595 +0x087:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0819e59a +0x08c:  mov    -0x10(%ebp),%eax
0819e59d +0x08f:  mov    %eax,0x4(%esp)
0819e5a1 +0x093:  lea    -0x1c(%ebp),%eax
0819e5a4 +0x096:  mov    %eax,(%esp)
0819e5a7 +0x099:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e5ac +0x09e:  mov    0x14(%ebp),%eax
0819e5af +0x0a1:  mov    %eax,0x4(%esp)
0819e5b3 +0x0a5:  lea    -0x1c(%ebp),%eax
0819e5b6 +0x0a8:  mov    %eax,(%esp)
0819e5b9 +0x0ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e5be +0x0b0:  mov    0x18(%ebp),%eax
0819e5c1 +0x0b3:  mov    %eax,0x4(%esp)
0819e5c5 +0x0b7:  lea    -0x1c(%ebp),%eax
0819e5c8 +0x0ba:  mov    %eax,(%esp)
0819e5cb +0x0bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e5d0 +0x0c2:  mov    0x1c(%ebp),%eax
0819e5d3 +0x0c5:  mov    %eax,0x4(%esp)
0819e5d7 +0x0c9:  lea    -0x1c(%ebp),%eax
0819e5da +0x0cc:  mov    %eax,(%esp)
0819e5dd +0x0cf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e5e2 +0x0d4:  movl   $0xffffffff,0x4(%esp)
0819e5ea +0x0dc:  lea    -0x1c(%ebp),%eax
0819e5ed +0x0df:  mov    %eax,(%esp)
0819e5f0 +0x0e2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0819e5f5 +0x0e7:  movl   $0x1,0x4(%esp)
0819e5fd +0x0ef:  lea    -0x1c(%ebp),%eax
0819e600 +0x0f2:  mov    %eax,(%esp)
0819e603 +0x0f5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0819e608 +0x0fa:  lea    -0x1c(%ebp),%eax
0819e60b +0x0fd:  mov    %eax,0x4(%esp)
0819e60f +0x101:  mov    0xc(%ebp),%eax
0819e612 +0x104:  mov    %eax,(%esp)
0819e615 +0x107:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0819e61a +0x10c:  jmp    0819e637 <+0x129>
0819e61c +0x10e:  mov    %edx,%ebx
0819e61e +0x110:  mov    %eax,%esi
0819e620 +0x112:  lea    -0x1c(%ebp),%eax
0819e623 +0x115:  mov    %eax,(%esp)
0819e626 +0x118:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e62b +0x11d:  mov    %esi,%eax
0819e62d +0x11f:  mov    %ebx,%edx
0819e62f +0x121:  mov    %eax,(%esp)
0819e632 +0x124:  call   08ae3750 <_Unwind_Resume>
0819e637 +0x129:  lea    -0x1c(%ebp),%eax
0819e63a +0x12c:  mov    %eax,(%esp)
0819e63d +0x12f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0819e642 +0x134:  add    $0x40,%esp
0819e645 +0x137:  pop    %ebx
0819e646 +0x138:  pop    %esi
0819e647 +0x139:  pop    %ebp
0819e648 +0x13a:  ret
```

## 反编译 C

```c
// Arad_MileageProcess::BuyFail @ 0x819e50e

/* Arad_MileageProcess::BuyFail(CUser*, short, int, int, int) */

void __thiscall
Arad_MileageProcess::BuyFail
          (Arad_MileageProcess *this,CUser *param_1,short param_2,int param_3,int param_4,
          int param_5)

{
  PacketGuard local_20 [12];
  int local_14;
  char local_d;
  
  PacketGuard::PacketGuard(local_20);
  local_14 = 0xb;
  local_d = '\0';
                    /* try { // try from 0819e549 to 0819e619 has its CatchHandler @ 0819e61c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(int)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_d);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,-1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
