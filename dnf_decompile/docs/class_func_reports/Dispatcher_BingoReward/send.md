# send

`_ZN22Dispatcher_BingoReward4sendEP5CUserR9ParamBase`

`Dispatcher_BingoReward::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoReward` | `0x0825e87a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e87a  _ZN22Dispatcher_BingoReward4sendEP5CUserR9ParamBase
#           Dispatcher_BingoReward::send(CUser*, ParamBase&)
# range [0x0825e87a, 0x0825e961]
0825e87a +0x00:  push   %ebp
0825e87b +0x01:  mov    %esp,%ebp
0825e87d +0x03:  push   %esi
0825e87e +0x04:  push   %ebx
0825e87f +0x05:  sub    $0x20,%esp
0825e882 +0x08:  mov    0x10(%ebp),%eax
0825e885 +0x0b:  mov    %eax,-0xc(%ebp)
0825e888 +0x0e:  mov    -0xc(%ebp),%eax
0825e88b +0x11:  mov    0x4(%eax),%eax
0825e88e +0x14:  test   %eax,%eax
0825e890 +0x16:  jne    0825e8aa <+0x30>
0825e892 +0x18:  movl   $0x202,0x4(%esp)
0825e89a +0x20:  mov    0xc(%ebp),%eax
0825e89d +0x23:  mov    %eax,(%esp)
0825e8a0 +0x26:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0825e8a5 +0x2b:  jmp    0825e95a <+0xe0>
0825e8aa +0x30:  lea    -0x18(%ebp),%eax
0825e8ad +0x33:  mov    %eax,(%esp)
0825e8b0 +0x36:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825e8b5 +0x3b:  movl   $0x202,0x8(%esp)
0825e8bd +0x43:  movl   $0x1,0x4(%esp)
0825e8c5 +0x4b:  lea    -0x18(%ebp),%eax
0825e8c8 +0x4e:  mov    %eax,(%esp)
0825e8cb +0x51:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825e8d0 +0x56:  movl   $0x0,0x4(%esp)
0825e8d8 +0x5e:  lea    -0x18(%ebp),%eax
0825e8db +0x61:  mov    %eax,(%esp)
0825e8de +0x64:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e8e3 +0x69:  mov    -0xc(%ebp),%eax
0825e8e6 +0x6c:  mov    0x4(%eax),%eax
0825e8e9 +0x6f:  mov    %eax,0x4(%esp)
0825e8ed +0x73:  lea    -0x18(%ebp),%eax
0825e8f0 +0x76:  mov    %eax,(%esp)
0825e8f3 +0x79:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e8f8 +0x7e:  mov    -0xc(%ebp),%eax
0825e8fb +0x81:  mov    0x8(%eax),%eax
0825e8fe +0x84:  mov    %eax,0x4(%esp)
0825e902 +0x88:  lea    -0x18(%ebp),%eax
0825e905 +0x8b:  mov    %eax,(%esp)
0825e908 +0x8e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0825e90d +0x93:  movl   $0x1,0x4(%esp)
0825e915 +0x9b:  lea    -0x18(%ebp),%eax
0825e918 +0x9e:  mov    %eax,(%esp)
0825e91b +0xa1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825e920 +0xa6:  lea    -0x18(%ebp),%eax
0825e923 +0xa9:  mov    %eax,0x4(%esp)
0825e927 +0xad:  mov    0xc(%ebp),%eax
0825e92a +0xb0:  mov    %eax,(%esp)
0825e92d +0xb3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825e932 +0xb8:  jmp    0825e94f <+0xd5>
0825e934 +0xba:  mov    %edx,%ebx
0825e936 +0xbc:  mov    %eax,%esi
0825e938 +0xbe:  lea    -0x18(%ebp),%eax
0825e93b +0xc1:  mov    %eax,(%esp)
0825e93e +0xc4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e943 +0xc9:  mov    %esi,%eax
0825e945 +0xcb:  mov    %ebx,%edx
0825e947 +0xcd:  mov    %eax,(%esp)
0825e94a +0xd0:  call   08ae3750 <_Unwind_Resume>
0825e94f +0xd5:  lea    -0x18(%ebp),%eax
0825e952 +0xd8:  mov    %eax,(%esp)
0825e955 +0xdb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e95a +0xe0:  add    $0x20,%esp
0825e95d +0xe3:  pop    %ebx
0825e95e +0xe4:  pop    %esi
0825e95f +0xe5:  pop    %ebp
0825e960 +0xe6:  ret
0825e961 +0xe7:  nop
```

## 反编译 C

```c
// Dispatcher_BingoReward::send @ 0x825e87a

/* Dispatcher_BingoReward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BingoReward::send(Dispatcher_BingoReward *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x202);
  }
  else {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825e8cb to 0825e931 has its CatchHandler @ 0825e934 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x202);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
