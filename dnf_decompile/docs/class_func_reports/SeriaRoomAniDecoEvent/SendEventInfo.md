# SendEventInfo

`_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser`

`SeriaRoomAniDecoEvent::SendEventInfo(CUser&)`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b99a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b99a  _ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser
#           SeriaRoomAniDecoEvent::SendEventInfo(CUser&)
# range [0x0827b99a, 0x0827ba47]
0827b99a +0x00:  push   %ebp
0827b99b +0x01:  mov    %esp,%ebp
0827b99d +0x03:  push   %esi
0827b99e +0x04:  push   %ebx
0827b99f +0x05:  sub    $0x20,%esp
0827b9a2 +0x08:  lea    -0x18(%ebp),%eax
0827b9a5 +0x0b:  mov    %eax,(%esp)
0827b9a8 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0827b9ad +0x13:  movl   $0x1c1,0x8(%esp)
0827b9b5 +0x1b:  movl   $0x0,0x4(%esp)
0827b9bd +0x23:  lea    -0x18(%ebp),%eax
0827b9c0 +0x26:  mov    %eax,(%esp)
0827b9c3 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0827b9c8 +0x2e:  mov    0xc(%ebp),%edx
0827b9cb +0x31:  lea    -0xc(%ebp),%eax
0827b9ce +0x34:  mov    %edx,0x4(%esp)
0827b9d2 +0x38:  mov    %eax,(%esp)
0827b9d5 +0x3b:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
0827b9da +0x40:  sub    $0x4,%esp
0827b9dd +0x43:  movzwl -0xa(%ebp),%eax
0827b9e1 +0x47:  cwtl
0827b9e2 +0x48:  mov    %eax,0x4(%esp)
0827b9e6 +0x4c:  lea    -0x18(%ebp),%eax
0827b9e9 +0x4f:  mov    %eax,(%esp)
0827b9ec +0x52:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0827b9f1 +0x57:  movl   $0x1,0x4(%esp)
0827b9f9 +0x5f:  lea    -0x18(%ebp),%eax
0827b9fc +0x62:  mov    %eax,(%esp)
0827b9ff +0x65:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0827ba04 +0x6a:  lea    -0x18(%ebp),%eax
0827ba07 +0x6d:  mov    %eax,0x4(%esp)
0827ba0b +0x71:  mov    0xc(%ebp),%eax
0827ba0e +0x74:  mov    %eax,(%esp)
0827ba11 +0x77:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0827ba16 +0x7c:  jmp    0827ba33 <+0x99>
0827ba18 +0x7e:  mov    %edx,%ebx
0827ba1a +0x80:  mov    %eax,%esi
0827ba1c +0x82:  lea    -0x18(%ebp),%eax
0827ba1f +0x85:  mov    %eax,(%esp)
0827ba22 +0x88:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827ba27 +0x8d:  mov    %esi,%eax
0827ba29 +0x8f:  mov    %ebx,%edx
0827ba2b +0x91:  mov    %eax,(%esp)
0827ba2e +0x94:  call   08ae3750 <_Unwind_Resume>
0827ba33 +0x99:  lea    -0x18(%ebp),%eax
0827ba36 +0x9c:  mov    %eax,(%esp)
0827ba39 +0x9f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0827ba3e +0xa4:  lea    -0x8(%ebp),%esp
0827ba41 +0xa7:  add    $0x0,%esp
0827ba44 +0xaa:  pop    %ebx
0827ba45 +0xab:  pop    %esi
0827ba46 +0xac:  pop    %ebp
0827ba47 +0xad:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::SendEventInfo @ 0x827b99a

/* SeriaRoomAniDecoEvent::SendEventInfo(CUser&) */

void __thiscall SeriaRoomAniDecoEvent::SendEventInfo(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  PacketGuard local_1c [14];
  short local_e;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0827b9c3 to 0827ba15 has its CatchHandler @ 0827ba18 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1c1);
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)local_e);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
