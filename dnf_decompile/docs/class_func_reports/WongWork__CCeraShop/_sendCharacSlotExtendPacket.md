# _sendCharacSlotExtendPacket

`_ZN8WongWork9CCeraShop27_sendCharacSlotExtendPacketEP5CUseri`

`WongWork::CCeraShop::_sendCharacSlotExtendPacket(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327674  _ZN8WongWork9CCeraShop27_sendCharacSlotExtendPacketEP5CUseri
#           WongWork::CCeraShop::_sendCharacSlotExtendPacket(CUser*, int)
# range [0x08327674, 0x08327725]
08327674 +0x00:  push   %ebp
08327675 +0x01:  mov    %esp,%ebp
08327677 +0x03:  push   %esi
08327678 +0x04:  push   %ebx
08327679 +0x05:  sub    $0x20,%esp
0832767c +0x08:  lea    -0x14(%ebp),%eax
0832767f +0x0b:  mov    %eax,(%esp)
08327682 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08327687 +0x13:  movl   $0x42,0x8(%esp)
0832768f +0x1b:  movl   $0x0,0x4(%esp)
08327697 +0x23:  lea    -0x14(%ebp),%eax
0832769a +0x26:  mov    %eax,(%esp)
0832769d +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083276a2 +0x2e:  mov    0x10(%ebp),%eax
083276a5 +0x31:  mov    %eax,0x4(%esp)
083276a9 +0x35:  lea    -0x14(%ebp),%eax
083276ac +0x38:  mov    %eax,(%esp)
083276af +0x3b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083276b4 +0x40:  mov    0xc(%ebp),%eax
083276b7 +0x43:  mov    %eax,(%esp)
083276ba +0x46:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
083276bf +0x4b:  movzbl %al,%eax
083276c2 +0x4e:  mov    %eax,0x4(%esp)
083276c6 +0x52:  lea    -0x14(%ebp),%eax
083276c9 +0x55:  mov    %eax,(%esp)
083276cc +0x58:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
083276d1 +0x5d:  movl   $0x1,0x4(%esp)
083276d9 +0x65:  lea    -0x14(%ebp),%eax
083276dc +0x68:  mov    %eax,(%esp)
083276df +0x6b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
083276e4 +0x70:  lea    -0x14(%ebp),%eax
083276e7 +0x73:  mov    %eax,0x4(%esp)
083276eb +0x77:  mov    0xc(%ebp),%eax
083276ee +0x7a:  mov    %eax,(%esp)
083276f1 +0x7d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
083276f6 +0x82:  jmp    08327713 <+0x9f>
083276f8 +0x84:  mov    %edx,%ebx
083276fa +0x86:  mov    %eax,%esi
083276fc +0x88:  lea    -0x14(%ebp),%eax
083276ff +0x8b:  mov    %eax,(%esp)
08327702 +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08327707 +0x93:  mov    %esi,%eax
08327709 +0x95:  mov    %ebx,%edx
0832770b +0x97:  mov    %eax,(%esp)
0832770e +0x9a:  call   08ae3750 <_Unwind_Resume>
08327713 +0x9f:  lea    -0x14(%ebp),%eax
08327716 +0xa2:  mov    %eax,(%esp)
08327719 +0xa5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0832771e +0xaa:  add    $0x20,%esp
08327721 +0xad:  pop    %ebx
08327722 +0xae:  pop    %esi
08327723 +0xaf:  pop    %ebp
08327724 +0xb0:  ret
08327725 +0xb1:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_sendCharacSlotExtendPacket @ 0x8327674

/* WongWork::CCeraShop::_sendCharacSlotExtendPacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendCharacSlotExtendPacket(CCeraShop *this,CUser *param_1,int param_2)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0832769d to 083276f5 has its CatchHandler @ 083276f8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  uVar1 = CUser::getCharacSlotLimit(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
