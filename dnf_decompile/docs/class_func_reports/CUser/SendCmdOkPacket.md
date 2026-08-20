# SendCmdOkPacket

`_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET`

`CUser::SendCmdOkPacket(ENUM_CMDPACKET)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867bea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867bea0  _ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET
#           CUser::SendCmdOkPacket(ENUM_CMDPACKET)
# range [0x0867bea0, 0x0867bf41]
0867bea0 +0x00:  push   %ebp
0867bea1 +0x01:  mov    %esp,%ebp
0867bea3 +0x03:  push   %esi
0867bea4 +0x04:  push   %ebx
0867bea5 +0x05:  sub    $0x20,%esp
0867bea8 +0x08:  lea    -0x14(%ebp),%eax
0867beab +0x0b:  mov    %eax,(%esp)
0867beae +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867beb3 +0x13:  lea    -0x14(%ebp),%eax
0867beb6 +0x16:  mov    %eax,(%esp)
0867beb9 +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0867bebe +0x1e:  mov    0xc(%ebp),%eax
0867bec1 +0x21:  mov    %eax,0x8(%esp)
0867bec5 +0x25:  movl   $0x1,0x4(%esp)
0867becd +0x2d:  lea    -0x14(%ebp),%eax
0867bed0 +0x30:  mov    %eax,(%esp)
0867bed3 +0x33:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867bed8 +0x38:  movl   $0x1,0x4(%esp)
0867bee0 +0x40:  lea    -0x14(%ebp),%eax
0867bee3 +0x43:  mov    %eax,(%esp)
0867bee6 +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867beeb +0x4b:  movl   $0x1,0x4(%esp)
0867bef3 +0x53:  lea    -0x14(%ebp),%eax
0867bef6 +0x56:  mov    %eax,(%esp)
0867bef9 +0x59:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867befe +0x5e:  lea    -0x14(%ebp),%eax
0867bf01 +0x61:  mov    %eax,0x4(%esp)
0867bf05 +0x65:  mov    0x8(%ebp),%eax
0867bf08 +0x68:  mov    %eax,(%esp)
0867bf0b +0x6b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867bf10 +0x70:  mov    %eax,%ebx
0867bf12 +0x72:  lea    -0x14(%ebp),%eax
0867bf15 +0x75:  mov    %eax,(%esp)
0867bf18 +0x78:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bf1d +0x7d:  mov    %ebx,%eax
0867bf1f +0x7f:  add    $0x20,%esp
0867bf22 +0x82:  pop    %ebx
0867bf23 +0x83:  pop    %esi
0867bf24 +0x84:  pop    %ebp
0867bf25 +0x85:  ret
0867bf26 +0x86:  mov    %edx,%ebx
0867bf28 +0x88:  mov    %eax,%esi
0867bf2a +0x8a:  lea    -0x14(%ebp),%eax
0867bf2d +0x8d:  mov    %eax,(%esp)
0867bf30 +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bf35 +0x95:  mov    %esi,%eax
0867bf37 +0x97:  mov    %ebx,%edx
0867bf39 +0x99:  mov    %eax,(%esp)
0867bf3c +0x9c:  call   08ae3750 <_Unwind_Resume>
0867bf41 +0xa1:  nop
```

## 反编译 C

```c
// CUser::SendCmdOkPacket @ 0x867bea0

/* CUser::SendCmdOkPacket(ENUM_CMDPACKET) */

undefined4 __thiscall CUser::SendCmdOkPacket(CUser *this,int param_2)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867beb9 to 0867bf0f has its CatchHandler @ 0867bf26 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  uVar1 = Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
