# SendCoin

`_ZN5CUser8SendCoinEv`

`CUser::SendCoin()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656808  _ZN5CUser8SendCoinEv
#           CUser::SendCoin()
# range [0x08656808, 0x086568fb]
08656808 +0x00:  push   %ebp
08656809 +0x01:  mov    %esp,%ebp
0865680b +0x03:  push   %esi
0865680c +0x04:  push   %ebx
0865680d +0x05:  sub    $0x20,%esp
08656810 +0x08:  mov    0x8(%ebp),%eax
08656813 +0x0b:  mov    %eax,(%esp)
08656816 +0x0e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865681b +0x13:  test   %eax,%eax
0865681d +0x15:  sete   %al
08656820 +0x18:  test   %al,%al
08656822 +0x1a:  jne    086568f4 <+0xec>
08656828 +0x20:  lea    -0x14(%ebp),%eax
0865682b +0x23:  mov    %eax,(%esp)
0865682e +0x26:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08656833 +0x2b:  movl   $0xe,0x8(%esp)
0865683b +0x33:  movl   $0x0,0x4(%esp)
08656843 +0x3b:  lea    -0x14(%ebp),%eax
08656846 +0x3e:  mov    %eax,(%esp)
08656849 +0x41:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865684e +0x46:  movl   $0x0,0x4(%esp)
08656856 +0x4e:  lea    -0x14(%ebp),%eax
08656859 +0x51:  mov    %eax,(%esp)
0865685c +0x54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08656861 +0x59:  movl   $0x1,0x4(%esp)
08656869 +0x61:  lea    -0x14(%ebp),%eax
0865686c +0x64:  mov    %eax,(%esp)
0865686f +0x67:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08656874 +0x6c:  mov    0x8(%ebp),%eax
08656877 +0x6f:  mov    %eax,(%esp)
0865687a +0x72:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865687f +0x77:  lea    -0x14(%ebp),%edx
08656882 +0x7a:  mov    %edx,0xc(%esp)
08656886 +0x7e:  movl   $0x1,0x8(%esp)
0865688e +0x86:  movl   $0x1,0x4(%esp)
08656896 +0x8e:  mov    %eax,(%esp)
08656899 +0x91:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0865689e +0x96:  xor    $0x1,%eax
086568a1 +0x99:  test   %al,%al
086568a3 +0x9b:  jne    086568e7 <+0xdf>
086568a5 +0x9d:  movl   $0x1,0x4(%esp)
086568ad +0xa5:  lea    -0x14(%ebp),%eax
086568b0 +0xa8:  mov    %eax,(%esp)
086568b3 +0xab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086568b8 +0xb0:  lea    -0x14(%ebp),%eax
086568bb +0xb3:  mov    %eax,0x4(%esp)
086568bf +0xb7:  mov    0x8(%ebp),%eax
086568c2 +0xba:  mov    %eax,(%esp)
086568c5 +0xbd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086568ca +0xc2:  jmp    086568e7 <+0xdf>
086568cc +0xc4:  mov    %edx,%ebx
086568ce +0xc6:  mov    %eax,%esi
086568d0 +0xc8:  lea    -0x14(%ebp),%eax
086568d3 +0xcb:  mov    %eax,(%esp)
086568d6 +0xce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086568db +0xd3:  mov    %esi,%eax
086568dd +0xd5:  mov    %ebx,%edx
086568df +0xd7:  mov    %eax,(%esp)
086568e2 +0xda:  call   08ae3750 <_Unwind_Resume>
086568e7 +0xdf:  lea    -0x14(%ebp),%eax
086568ea +0xe2:  mov    %eax,(%esp)
086568ed +0xe5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086568f2 +0xea:  jmp    086568f5 <+0xed>
086568f4 +0xec:  nop
086568f5 +0xed:  add    $0x20,%esp
086568f8 +0xf0:  pop    %ebx
086568f9 +0xf1:  pop    %esi
086568fa +0xf2:  pop    %ebp
086568fb +0xf3:  ret
```

## 反编译 C

```c
// CUser::SendCoin @ 0x8656808

/* CUser::SendCoin() */

void __thiscall CUser::SendCoin(CUser *this)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  PacketGuard local_18 [12];
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08656849 to 086568c9 has its CatchHandler @ 086568cc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemPacket(pCVar3,1,1,local_18);
    if (cVar1 == '\x01') {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      Send(this,local_18);
    }
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
