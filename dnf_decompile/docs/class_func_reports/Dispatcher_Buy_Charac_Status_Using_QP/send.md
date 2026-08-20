# send

`_ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase`

`Dispatcher_Buy_Charac_Status_Using_QP::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Buy_Charac_Status_Using_QP` | `0x081d65c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d65c2  _ZN37Dispatcher_Buy_Charac_Status_Using_QP4sendEP5CUserR9ParamBase
#           Dispatcher_Buy_Charac_Status_Using_QP::send(CUser*, ParamBase&)
# range [0x081d65c2, 0x081d6745]
081d65c2 +0x000:  push   %ebp
081d65c3 +0x001:  mov    %esp,%ebp
081d65c5 +0x003:  push   %esi
081d65c6 +0x004:  push   %ebx
081d65c7 +0x005:  sub    $0x30,%esp
081d65ca +0x008:  mov    0x10(%ebp),%eax
081d65cd +0x00b:  mov    %eax,-0xc(%ebp)
081d65d0 +0x00e:  mov    -0xc(%ebp),%eax
081d65d3 +0x011:  mov    0x8(%eax),%eax
081d65d6 +0x014:  test   %eax,%eax
081d65d8 +0x016:  jne    081d66a4 <+0xe2>
081d65de +0x01c:  lea    -0x18(%ebp),%eax
081d65e1 +0x01f:  mov    %eax,(%esp)
081d65e4 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d65e9 +0x027:  movl   $0x18f,0x8(%esp)
081d65f1 +0x02f:  movl   $0x1,0x4(%esp)
081d65f9 +0x037:  lea    -0x18(%ebp),%eax
081d65fc +0x03a:  mov    %eax,(%esp)
081d65ff +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d6604 +0x042:  movl   $0x1,0x4(%esp)
081d660c +0x04a:  lea    -0x18(%ebp),%eax
081d660f +0x04d:  mov    %eax,(%esp)
081d6612 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6617 +0x055:  mov    -0xc(%ebp),%eax
081d661a +0x058:  movzbl 0x4(%eax),%eax
081d661e +0x05c:  movzbl %al,%eax
081d6621 +0x05f:  mov    %eax,0x4(%esp)
081d6625 +0x063:  lea    -0x18(%ebp),%eax
081d6628 +0x066:  mov    %eax,(%esp)
081d662b +0x069:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6630 +0x06e:  mov    -0xc(%ebp),%eax
081d6633 +0x071:  movzwl 0x6(%eax),%eax
081d6637 +0x075:  cwtl
081d6638 +0x076:  mov    %eax,0x4(%esp)
081d663c +0x07a:  lea    -0x18(%ebp),%eax
081d663f +0x07d:  mov    %eax,(%esp)
081d6642 +0x080:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d6647 +0x085:  movl   $0x1,0x4(%esp)
081d664f +0x08d:  lea    -0x18(%ebp),%eax
081d6652 +0x090:  mov    %eax,(%esp)
081d6655 +0x093:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d665a +0x098:  lea    -0x18(%ebp),%eax
081d665d +0x09b:  mov    %eax,0x4(%esp)
081d6661 +0x09f:  mov    0xc(%ebp),%eax
081d6664 +0x0a2:  mov    %eax,(%esp)
081d6667 +0x0a5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d666c +0x0aa:  mov    0xc(%ebp),%eax
081d666f +0x0ad:  mov    %eax,(%esp)
081d6672 +0x0b0:  call   0868ac24 <_ZN5CUser12sendCharacQpEv>  ; CUser::sendCharacQp()
081d6677 +0x0b5:  jmp    081d6694 <+0xd2>
081d6679 +0x0b7:  mov    %edx,%ebx
081d667b +0x0b9:  mov    %eax,%esi
081d667d +0x0bb:  lea    -0x18(%ebp),%eax
081d6680 +0x0be:  mov    %eax,(%esp)
081d6683 +0x0c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d6688 +0x0c6:  mov    %esi,%eax
081d668a +0x0c8:  mov    %ebx,%edx
081d668c +0x0ca:  mov    %eax,(%esp)
081d668f +0x0cd:  call   08ae3750 <_Unwind_Resume>
081d6694 +0x0d2:  lea    -0x18(%ebp),%eax
081d6697 +0x0d5:  mov    %eax,(%esp)
081d669a +0x0d8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d669f +0x0dd:  jmp    081d673f <+0x17d>
081d66a4 +0x0e2:  lea    -0x24(%ebp),%eax
081d66a7 +0x0e5:  mov    %eax,(%esp)
081d66aa +0x0e8:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d66af +0x0ed:  movl   $0x18f,0x8(%esp)
081d66b7 +0x0f5:  movl   $0x1,0x4(%esp)
081d66bf +0x0fd:  lea    -0x24(%ebp),%eax
081d66c2 +0x100:  mov    %eax,(%esp)
081d66c5 +0x103:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d66ca +0x108:  movl   $0x0,0x4(%esp)
081d66d2 +0x110:  lea    -0x24(%ebp),%eax
081d66d5 +0x113:  mov    %eax,(%esp)
081d66d8 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d66dd +0x11b:  mov    -0xc(%ebp),%eax
081d66e0 +0x11e:  mov    0x8(%eax),%eax
081d66e3 +0x121:  mov    %eax,0x4(%esp)
081d66e7 +0x125:  lea    -0x24(%ebp),%eax
081d66ea +0x128:  mov    %eax,(%esp)
081d66ed +0x12b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d66f2 +0x130:  movl   $0x1,0x4(%esp)
081d66fa +0x138:  lea    -0x24(%ebp),%eax
081d66fd +0x13b:  mov    %eax,(%esp)
081d6700 +0x13e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d6705 +0x143:  lea    -0x24(%ebp),%eax
081d6708 +0x146:  mov    %eax,0x4(%esp)
081d670c +0x14a:  mov    0xc(%ebp),%eax
081d670f +0x14d:  mov    %eax,(%esp)
081d6712 +0x150:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d6717 +0x155:  jmp    081d6734 <+0x172>
081d6719 +0x157:  mov    %edx,%ebx
081d671b +0x159:  mov    %eax,%esi
081d671d +0x15b:  lea    -0x24(%ebp),%eax
081d6720 +0x15e:  mov    %eax,(%esp)
081d6723 +0x161:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d6728 +0x166:  mov    %esi,%eax
081d672a +0x168:  mov    %ebx,%edx
081d672c +0x16a:  mov    %eax,(%esp)
081d672f +0x16d:  call   08ae3750 <_Unwind_Resume>
081d6734 +0x172:  lea    -0x24(%ebp),%eax
081d6737 +0x175:  mov    %eax,(%esp)
081d673a +0x178:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d673f +0x17d:  add    $0x30,%esp
081d6742 +0x180:  pop    %ebx
081d6743 +0x181:  pop    %esi
081d6744 +0x182:  pop    %ebp
081d6745 +0x183:  ret
```

## 反编译 C

```c
// Dispatcher_Buy_Charac_Status_Using_QP::send @ 0x81d65c2

/* Dispatcher_Buy_Charac_Status_Using_QP::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::send
          (Dispatcher_Buy_Charac_Status_Using_QP *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 8) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d65ff to 081d6676 has its CatchHandler @ 081d6679 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,399);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[4]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 6));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::sendCharacQp(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d66c5 to 081d6716 has its CatchHandler @ 081d6719 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,399);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
