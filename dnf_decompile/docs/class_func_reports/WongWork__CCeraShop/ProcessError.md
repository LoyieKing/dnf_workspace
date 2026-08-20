# ProcessError

`_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic`

`WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08323978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08323978  _ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic
#           WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
# range [0x08323978, 0x08323af3]
08323978 +0x000:  push   %ebp
08323979 +0x001:  mov    %esp,%ebp
0832397b +0x003:  push   %esi
0832397c +0x004:  push   %ebx
0832397d +0x005:  sub    $0x40,%esp
08323980 +0x008:  mov    0x10(%ebp),%edx
08323983 +0x00b:  mov    0x24(%ebp),%eax
08323986 +0x00e:  mov    %dx,-0x2c(%ebp)
0832398a +0x012:  mov    %al,-0x30(%ebp)
0832398d +0x015:  lea    -0x24(%ebp),%eax
08323990 +0x018:  mov    %eax,(%esp)
08323993 +0x01b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08323998 +0x020:  movl   $0x43,0x8(%esp)
083239a0 +0x028:  movl   $0x1,0x4(%esp)
083239a8 +0x030:  lea    -0x24(%ebp),%eax
083239ab +0x033:  mov    %eax,(%esp)
083239ae +0x036:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083239b3 +0x03b:  movl   $0x0,0x4(%esp)
083239bb +0x043:  lea    -0x24(%ebp),%eax
083239be +0x046:  mov    %eax,(%esp)
083239c1 +0x049:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083239c6 +0x04e:  movl   $0x0,0x4(%esp)
083239ce +0x056:  lea    -0x24(%ebp),%eax
083239d1 +0x059:  mov    %eax,(%esp)
083239d4 +0x05c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083239d9 +0x061:  movzwl -0x2c(%ebp),%eax
083239dd +0x065:  mov    %eax,0x4(%esp)
083239e1 +0x069:  lea    -0x24(%ebp),%eax
083239e4 +0x06c:  mov    %eax,(%esp)
083239e7 +0x06f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083239ec +0x074:  movsbl -0x30(%ebp),%eax
083239f0 +0x078:  mov    %eax,0x4(%esp)
083239f4 +0x07c:  lea    -0x24(%ebp),%eax
083239f7 +0x07f:  mov    %eax,(%esp)
083239fa +0x082:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083239ff +0x087:  mov    0x14(%ebp),%eax
08323a02 +0x08a:  mov    %eax,0x4(%esp)
08323a06 +0x08e:  lea    -0x24(%ebp),%eax
08323a09 +0x091:  mov    %eax,(%esp)
08323a0c +0x094:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323a11 +0x099:  mov    0x18(%ebp),%eax
08323a14 +0x09c:  mov    %eax,0x4(%esp)
08323a18 +0x0a0:  lea    -0x24(%ebp),%eax
08323a1b +0x0a3:  mov    %eax,(%esp)
08323a1e +0x0a6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323a23 +0x0ab:  mov    0x1c(%ebp),%eax
08323a26 +0x0ae:  mov    %eax,0x4(%esp)
08323a2a +0x0b2:  lea    -0x24(%ebp),%eax
08323a2d +0x0b5:  mov    %eax,(%esp)
08323a30 +0x0b8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323a35 +0x0bd:  mov    0x20(%ebp),%eax
08323a38 +0x0c0:  mov    %eax,0x4(%esp)
08323a3c +0x0c4:  lea    -0x24(%ebp),%eax
08323a3f +0x0c7:  mov    %eax,(%esp)
08323a42 +0x0ca:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323a47 +0x0cf:  movl   $0xffffffff,0x4(%esp)
08323a4f +0x0d7:  lea    -0x24(%ebp),%eax
08323a52 +0x0da:  mov    %eax,(%esp)
08323a55 +0x0dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08323a5a +0x0e2:  movl   $0x1,0x4(%esp)
08323a62 +0x0ea:  lea    -0x24(%ebp),%eax
08323a65 +0x0ed:  mov    %eax,(%esp)
08323a68 +0x0f0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08323a6d +0x0f5:  lea    -0x24(%ebp),%eax
08323a70 +0x0f8:  mov    %eax,0x4(%esp)
08323a74 +0x0fc:  mov    0xc(%ebp),%eax
08323a77 +0x0ff:  mov    %eax,(%esp)
08323a7a +0x102:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08323a7f +0x107:  movzwl -0x2c(%ebp),%ebx
08323a83 +0x10b:  movl   $0x0,0xc(%esp)
08323a8b +0x113:  movl   $0xc2a,0x8(%esp)
08323a93 +0x11b:  movl   $&_ZZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiicE19__PRETTY_FUNCTION__,0x4(%esp)
08323a9b +0x123:  lea    -0x18(%ebp),%eax
08323a9e +0x126:  mov    %eax,(%esp)
08323aa1 +0x129:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08323aa6 +0x12e:  mov    0x18(%ebp),%eax
08323aa9 +0x131:  mov    %eax,0xc(%esp)
08323aad +0x135:  mov    %ebx,0x8(%esp)
08323ab1 +0x139:  movl   $"NEXON BILLING : Buy Error(%d,%u)",0x4(%esp)
08323ab9 +0x141:  lea    -0x18(%ebp),%eax
08323abc +0x144:  mov    %eax,(%esp)
08323abf +0x147:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08323ac4 +0x14c:  jmp    08323ae1 <+0x169>
08323ac6 +0x14e:  mov    %edx,%ebx
08323ac8 +0x150:  mov    %eax,%esi
08323aca +0x152:  lea    -0x24(%ebp),%eax
08323acd +0x155:  mov    %eax,(%esp)
08323ad0 +0x158:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08323ad5 +0x15d:  mov    %esi,%eax
08323ad7 +0x15f:  mov    %ebx,%edx
08323ad9 +0x161:  mov    %eax,(%esp)
08323adc +0x164:  call   08ae3750 <_Unwind_Resume>
08323ae1 +0x169:  lea    -0x24(%ebp),%eax
08323ae4 +0x16c:  mov    %eax,(%esp)
08323ae7 +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08323aec +0x174:  add    $0x40,%esp
08323aef +0x177:  pop    %ebx
08323af0 +0x178:  pop    %esi
08323af1 +0x179:  pop    %ebp
08323af2 +0x17a:  ret
08323af3 +0x17b:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::ProcessError @ 0x8323978

/* WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char) */

void __thiscall
WongWork::CCeraShop::ProcessError
          (CCeraShop *this,CUser *param_1,ushort param_2,int param_3,uint param_4,int param_5,
          int param_6,char param_7)

{
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 083239ae to 08323ac3 has its CatchHandler @ 08323ac6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)param_7);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_6);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,-1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  cMyTrace::cMyTrace(local_1c,
                     "void WongWork::CCeraShop::ProcessError(CUser*, short unsigned int, int, unsigned int, int, int, char)"
                     ,0xc2a,0);
  cMyTrace::operator()(local_1c,"NEXON BILLING : Buy Error(%d,%u)",(uint)param_2,param_4);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
