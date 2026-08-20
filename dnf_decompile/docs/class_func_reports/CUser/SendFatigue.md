# SendFatigue

`_ZN5CUser11SendFatigueEv`

`CUser::SendFatigue()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656540  _ZN5CUser11SendFatigueEv
#           CUser::SendFatigue()
# range [0x08656540, 0x08656635]
08656540 +0x00:  push   %ebp
08656541 +0x01:  mov    %esp,%ebp
08656543 +0x03:  push   %esi
08656544 +0x04:  push   %ebx
08656545 +0x05:  sub    $0x20,%esp
08656548 +0x08:  lea    -0x14(%ebp),%eax
0865654b +0x0b:  mov    %eax,(%esp)
0865654e +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08656553 +0x13:  movl   $0x24,0x8(%esp)
0865655b +0x1b:  movl   $0x0,0x4(%esp)
08656563 +0x23:  lea    -0x14(%ebp),%eax
08656566 +0x26:  mov    %eax,(%esp)
08656569 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865656e +0x2e:  mov    0x8(%ebp),%eax
08656571 +0x31:  mov    %eax,(%esp)
08656574 +0x34:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
08656579 +0x39:  movzwl %ax,%eax
0865657c +0x3c:  mov    %eax,0x4(%esp)
08656580 +0x40:  lea    -0x14(%ebp),%eax
08656583 +0x43:  mov    %eax,(%esp)
08656586 +0x46:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865658b +0x4b:  mov    0x8(%ebp),%eax
0865658e +0x4e:  mov    %eax,(%esp)
08656591 +0x51:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
08656596 +0x56:  movzwl %ax,%eax
08656599 +0x59:  mov    %eax,0x4(%esp)
0865659d +0x5d:  lea    -0x14(%ebp),%eax
086565a0 +0x60:  mov    %eax,(%esp)
086565a3 +0x63:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086565a8 +0x68:  mov    0x8(%ebp),%eax
086565ab +0x6b:  mov    %eax,(%esp)
086565ae +0x6e:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
086565b3 +0x73:  movzwl %ax,%eax
086565b6 +0x76:  mov    %eax,0x4(%esp)
086565ba +0x7a:  lea    -0x14(%ebp),%eax
086565bd +0x7d:  mov    %eax,(%esp)
086565c0 +0x80:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086565c5 +0x85:  mov    0x8(%ebp),%eax
086565c8 +0x88:  mov    %eax,(%esp)
086565cb +0x8b:  call   084a852c <_GLOBAL__I__ZN21CFatigueBatteryHandleC2Ev+0x92>  ; global constructors keyed to CFatigueBatteryHandle::CFatigueBatteryHandle()+0x92
086565d0 +0x90:  movzwl %ax,%eax
086565d3 +0x93:  mov    %eax,0x4(%esp)
086565d7 +0x97:  lea    -0x14(%ebp),%eax
086565da +0x9a:  mov    %eax,(%esp)
086565dd +0x9d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086565e2 +0xa2:  movl   $0x1,0x4(%esp)
086565ea +0xaa:  lea    -0x14(%ebp),%eax
086565ed +0xad:  mov    %eax,(%esp)
086565f0 +0xb0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086565f5 +0xb5:  lea    -0x14(%ebp),%eax
086565f8 +0xb8:  mov    %eax,0x4(%esp)
086565fc +0xbc:  mov    0x8(%ebp),%eax
086565ff +0xbf:  mov    %eax,(%esp)
08656602 +0xc2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08656607 +0xc7:  jmp    08656624 <+0xe4>
08656609 +0xc9:  mov    %edx,%ebx
0865660b +0xcb:  mov    %eax,%esi
0865660d +0xcd:  lea    -0x14(%ebp),%eax
08656610 +0xd0:  mov    %eax,(%esp)
08656613 +0xd3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08656618 +0xd8:  mov    %esi,%eax
0865661a +0xda:  mov    %ebx,%edx
0865661c +0xdc:  mov    %eax,(%esp)
0865661f +0xdf:  call   08ae3750 <_Unwind_Resume>
08656624 +0xe4:  lea    -0x14(%ebp),%eax
08656627 +0xe7:  mov    %eax,(%esp)
0865662a +0xea:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865662f +0xef:  add    $0x20,%esp
08656632 +0xf2:  pop    %ebx
08656633 +0xf3:  pop    %esi
08656634 +0xf4:  pop    %ebp
08656635 +0xf5:  ret
```

## 反编译 C

```c
// CUser::SendFatigue @ 0x8656540

/* CUser::SendFatigue() */

void __thiscall CUser::SendFatigue(CUser *this)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08656569 to 08656606 has its CatchHandler @ 08656609 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x24);
  uVar1 = getCurCharacTotalFatigue(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  uVar1 = getCurCharacTotalMaxFatigue(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  uVar1 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  uVar1 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
