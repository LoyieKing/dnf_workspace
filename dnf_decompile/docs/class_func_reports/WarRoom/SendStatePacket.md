# SendStatePacket

`_ZN7WarRoom15SendStatePacketEv`

`WarRoom::SendStatePacket()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bb672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bb672  _ZN7WarRoom15SendStatePacketEv
#           WarRoom::SendStatePacket()
# range [0x086bb672, 0x086bb71b]
086bb672 +0x00:  push   %ebp
086bb673 +0x01:  mov    %esp,%ebp
086bb675 +0x03:  push   %esi
086bb676 +0x04:  push   %ebx
086bb677 +0x05:  sub    $0x20,%esp
086bb67a +0x08:  lea    -0x14(%ebp),%eax
086bb67d +0x0b:  mov    %eax,(%esp)
086bb680 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bb685 +0x13:  movl   $0x58,0x8(%esp)
086bb68d +0x1b:  movl   $0x0,0x4(%esp)
086bb695 +0x23:  lea    -0x14(%ebp),%eax
086bb698 +0x26:  mov    %eax,(%esp)
086bb69b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bb6a0 +0x2e:  movl   $0x1,0x4(%esp)
086bb6a8 +0x36:  lea    -0x14(%ebp),%eax
086bb6ab +0x39:  mov    %eax,(%esp)
086bb6ae +0x3c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bb6b3 +0x41:  lea    -0x14(%ebp),%eax
086bb6b6 +0x44:  mov    %eax,0x4(%esp)
086bb6ba +0x48:  mov    0x8(%ebp),%eax
086bb6bd +0x4b:  mov    %eax,(%esp)
086bb6c0 +0x4e:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
086bb6c5 +0x53:  movl   $0x1,0x4(%esp)
086bb6cd +0x5b:  lea    -0x14(%ebp),%eax
086bb6d0 +0x5e:  mov    %eax,(%esp)
086bb6d3 +0x61:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bb6d8 +0x66:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086bb6dd +0x6b:  lea    -0x14(%ebp),%edx
086bb6e0 +0x6e:  mov    %edx,0x4(%esp)
086bb6e4 +0x72:  mov    %eax,(%esp)
086bb6e7 +0x75:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086bb6ec +0x7a:  jmp    086bb709 <+0x97>
086bb6ee +0x7c:  mov    %edx,%ebx
086bb6f0 +0x7e:  mov    %eax,%esi
086bb6f2 +0x80:  lea    -0x14(%ebp),%eax
086bb6f5 +0x83:  mov    %eax,(%esp)
086bb6f8 +0x86:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb6fd +0x8b:  mov    %esi,%eax
086bb6ff +0x8d:  mov    %ebx,%edx
086bb701 +0x8f:  mov    %eax,(%esp)
086bb704 +0x92:  call   08ae3750 <_Unwind_Resume>
086bb709 +0x97:  lea    -0x14(%ebp),%eax
086bb70c +0x9a:  mov    %eax,(%esp)
086bb70f +0x9d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bb714 +0xa2:  add    $0x20,%esp
086bb717 +0xa5:  pop    %ebx
086bb718 +0xa6:  pop    %esi
086bb719 +0xa7:  pop    %ebp
086bb71a +0xa8:  ret
086bb71b +0xa9:  nop
```

## 反编译 C

```c
// WarRoom::SendStatePacket @ 0x86bb672

/* WarRoom::SendStatePacket() */

void __thiscall WarRoom::SendStatePacket(WarRoom *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086bb69b to 086bb6eb has its CatchHandler @ 086bb6ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x58);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  MakeStateInfo(this,(char *)local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
