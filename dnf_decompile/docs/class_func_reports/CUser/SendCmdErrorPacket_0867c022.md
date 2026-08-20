# SendCmdErrorPacket

`_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE`

`CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c022  _ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE
#           CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
# range [0x0867c022, 0x0867c10b]
0867c022 +0x00:  push   %ebp
0867c023 +0x01:  mov    %esp,%ebp
0867c025 +0x03:  push   %esi
0867c026 +0x04:  push   %ebx
0867c027 +0x05:  sub    $0x30,%esp
0867c02a +0x08:  mov    0x10(%ebp),%eax
0867c02d +0x0b:  mov    %al,-0x1c(%ebp)
0867c030 +0x0e:  lea    -0x18(%ebp),%eax
0867c033 +0x11:  mov    %eax,(%esp)
0867c036 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c03b +0x19:  mov    0xc(%ebp),%eax
0867c03e +0x1c:  mov    %eax,0x8(%esp)
0867c042 +0x20:  movl   $0x1,0x4(%esp)
0867c04a +0x28:  lea    -0x18(%ebp),%eax
0867c04d +0x2b:  mov    %eax,(%esp)
0867c050 +0x2e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c055 +0x33:  movl   $0x0,0x4(%esp)
0867c05d +0x3b:  lea    -0x18(%ebp),%eax
0867c060 +0x3e:  mov    %eax,(%esp)
0867c063 +0x41:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c068 +0x46:  movzbl -0x1c(%ebp),%eax
0867c06c +0x4a:  mov    %eax,0x4(%esp)
0867c070 +0x4e:  lea    -0x18(%ebp),%eax
0867c073 +0x51:  mov    %eax,(%esp)
0867c076 +0x54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c07b +0x59:  mov    0x14(%ebp),%eax
0867c07e +0x5c:  mov    %eax,0x4(%esp)
0867c082 +0x60:  lea    -0x18(%ebp),%eax
0867c085 +0x63:  mov    %eax,(%esp)
0867c088 +0x66:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c08d +0x6b:  movl   $0x1,0x4(%esp)
0867c095 +0x73:  lea    -0x18(%ebp),%eax
0867c098 +0x76:  mov    %eax,(%esp)
0867c09b +0x79:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c0a0 +0x7e:  movzbl -0x1c(%ebp),%esi
0867c0a4 +0x82:  mov    0xc(%ebp),%ebx
0867c0a7 +0x85:  lea    -0x9(%ebp),%eax
0867c0aa +0x88:  mov    %eax,(%esp)
0867c0ad +0x8b:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
0867c0b2 +0x90:  mov    %esi,0xc(%esp)
0867c0b6 +0x94:  mov    %ebx,0x8(%esp)
0867c0ba +0x98:  movl   $"CmdID %d, nErrorCode %d",0x4(%esp)
0867c0c2 +0xa0:  lea    -0x9(%ebp),%eax
0867c0c5 +0xa3:  mov    %eax,(%esp)
0867c0c8 +0xa6:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
0867c0cd +0xab:  lea    -0x18(%ebp),%eax
0867c0d0 +0xae:  mov    %eax,0x4(%esp)
0867c0d4 +0xb2:  mov    0x8(%ebp),%eax
0867c0d7 +0xb5:  mov    %eax,(%esp)
0867c0da +0xb8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867c0df +0xbd:  mov    %eax,%ebx
0867c0e1 +0xbf:  lea    -0x18(%ebp),%eax
0867c0e4 +0xc2:  mov    %eax,(%esp)
0867c0e7 +0xc5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c0ec +0xca:  mov    %ebx,%eax
0867c0ee +0xcc:  add    $0x30,%esp
0867c0f1 +0xcf:  pop    %ebx
0867c0f2 +0xd0:  pop    %esi
0867c0f3 +0xd1:  pop    %ebp
0867c0f4 +0xd2:  ret
0867c0f5 +0xd3:  mov    %edx,%ebx
0867c0f7 +0xd5:  mov    %eax,%esi
0867c0f9 +0xd7:  lea    -0x18(%ebp),%eax
0867c0fc +0xda:  mov    %eax,(%esp)
0867c0ff +0xdd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c104 +0xe2:  mov    %esi,%eax
0867c106 +0xe4:  mov    %ebx,%edx
0867c108 +0xe6:  mov    %eax,(%esp)
0867c10b +0xe9:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::SendCmdErrorPacket @ 0x867c022

/* CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE) */

undefined4 __thiscall CUser::SendCmdErrorPacket(CUser *this,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  PacketGuard local_1c [15];
  cMyTraceNoop local_d;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0867c050 to 0867c0de has its CatchHandler @ 0867c0f5 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_3 & 0xff);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  cMyTraceNoop::cMyTraceNoop(&local_d);
  cMyTraceNoop::operator()((char *)&local_d,"CmdID %d, nErrorCode %d",param_2,param_3 & 0xff);
  uVar1 = Send(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return uVar1;
}
```
