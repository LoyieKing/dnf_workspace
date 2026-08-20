# SendUpdateItemList

`_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi`

`CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c65a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c65a  _ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi
#           CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
# range [0x0867c65a, 0x0867c80d]
0867c65a +0x000:  push   %ebp
0867c65b +0x001:  mov    %esp,%ebp
0867c65d +0x003:  push   %esi
0867c65e +0x004:  push   %ebx
0867c65f +0x005:  sub    $0x20,%esp
0867c662 +0x008:  lea    -0x14(%ebp),%eax
0867c665 +0x00b:  mov    %eax,(%esp)
0867c668 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867c66d +0x013:  movl   $0xe,0x8(%esp)
0867c675 +0x01b:  movl   $0x0,0x4(%esp)
0867c67d +0x023:  lea    -0x14(%ebp),%eax
0867c680 +0x026:  mov    %eax,(%esp)
0867c683 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867c688 +0x02e:  mov    0x10(%ebp),%eax
0867c68b +0x031:  mov    %eax,0x4(%esp)
0867c68f +0x035:  lea    -0x14(%ebp),%eax
0867c692 +0x038:  mov    %eax,(%esp)
0867c695 +0x03b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867c69a +0x040:  movl   $0x1,0x4(%esp)
0867c6a2 +0x048:  lea    -0x14(%ebp),%eax
0867c6a5 +0x04b:  mov    %eax,(%esp)
0867c6a8 +0x04e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867c6ad +0x053:  cmpl   $0x1,0x10(%ebp)
0867c6b1 +0x057:  jne    0867c6f1 <+0x97>
0867c6b3 +0x059:  mov    0x8(%ebp),%eax
0867c6b6 +0x05c:  mov    %eax,(%esp)
0867c6b9 +0x05f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c6be +0x064:  lea    -0x14(%ebp),%edx
0867c6c1 +0x067:  mov    %edx,0xc(%esp)
0867c6c5 +0x06b:  mov    0x14(%ebp),%edx
0867c6c8 +0x06e:  mov    %edx,0x8(%esp)
0867c6cc +0x072:  movl   $0x2,0x4(%esp)
0867c6d4 +0x07a:  mov    %eax,(%esp)
0867c6d7 +0x07d:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0867c6dc +0x082:  xor    $0x1,%eax
0867c6df +0x085:  test   %al,%al
0867c6e1 +0x087:  je     0867c7ac <+0x152>
0867c6e7 +0x08d:  mov    $0x0,%ebx
0867c6ec +0x092:  jmp    0867c7fa <+0x1a0>
0867c6f1 +0x097:  cmpl   $0x7,0x10(%ebp)
0867c6f5 +0x09b:  jne    0867c735 <+0xdb>
0867c6f7 +0x09d:  mov    0x8(%ebp),%eax
0867c6fa +0x0a0:  mov    %eax,(%esp)
0867c6fd +0x0a3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c702 +0x0a8:  lea    -0x14(%ebp),%edx
0867c705 +0x0ab:  mov    %edx,0xc(%esp)
0867c709 +0x0af:  mov    0x14(%ebp),%edx
0867c70c +0x0b2:  mov    %edx,0x8(%esp)
0867c710 +0x0b6:  movl   $0x3,0x4(%esp)
0867c718 +0x0be:  mov    %eax,(%esp)
0867c71b +0x0c1:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0867c720 +0x0c6:  xor    $0x1,%eax
0867c723 +0x0c9:  test   %al,%al
0867c725 +0x0cb:  je     0867c7ac <+0x152>
0867c72b +0x0d1:  mov    $0x0,%ebx
0867c730 +0x0d6:  jmp    0867c7fa <+0x1a0>
0867c735 +0x0db:  cmpl   $0x3,0x10(%ebp)
0867c739 +0x0df:  jne    0867c775 <+0x11b>
0867c73b +0x0e1:  mov    0x8(%ebp),%eax
0867c73e +0x0e4:  mov    %eax,(%esp)
0867c741 +0x0e7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c746 +0x0ec:  lea    -0x14(%ebp),%edx
0867c749 +0x0ef:  mov    %edx,0xc(%esp)
0867c74d +0x0f3:  mov    0x14(%ebp),%edx
0867c750 +0x0f6:  mov    %edx,0x8(%esp)
0867c754 +0x0fa:  movl   $0x0,0x4(%esp)
0867c75c +0x102:  mov    %eax,(%esp)
0867c75f +0x105:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0867c764 +0x10a:  xor    $0x1,%eax
0867c767 +0x10d:  test   %al,%al
0867c769 +0x10f:  je     0867c7ac <+0x152>
0867c76b +0x111:  mov    $0x0,%ebx
0867c770 +0x116:  jmp    0867c7fa <+0x1a0>
0867c775 +0x11b:  mov    0x8(%ebp),%eax
0867c778 +0x11e:  mov    %eax,(%esp)
0867c77b +0x121:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867c780 +0x126:  lea    -0x14(%ebp),%edx
0867c783 +0x129:  mov    %edx,0xc(%esp)
0867c787 +0x12d:  mov    0x14(%ebp),%edx
0867c78a +0x130:  mov    %edx,0x8(%esp)
0867c78e +0x134:  movl   $0x1,0x4(%esp)
0867c796 +0x13c:  mov    %eax,(%esp)
0867c799 +0x13f:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0867c79e +0x144:  xor    $0x1,%eax
0867c7a1 +0x147:  test   %al,%al
0867c7a3 +0x149:  je     0867c7ac <+0x152>
0867c7a5 +0x14b:  mov    $0x0,%ebx
0867c7aa +0x150:  jmp    0867c7fa <+0x1a0>
0867c7ac +0x152:  movl   $0x1,0x4(%esp)
0867c7b4 +0x15a:  lea    -0x14(%ebp),%eax
0867c7b7 +0x15d:  mov    %eax,(%esp)
0867c7ba +0x160:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867c7bf +0x165:  lea    -0x14(%ebp),%eax
0867c7c2 +0x168:  mov    %eax,0x8(%esp)
0867c7c6 +0x16c:  mov    0xc(%ebp),%eax
0867c7c9 +0x16f:  mov    %eax,0x4(%esp)
0867c7cd +0x173:  mov    0x8(%ebp),%eax
0867c7d0 +0x176:  mov    %eax,(%esp)
0867c7d3 +0x179:  call   0867b8fe <_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard>  ; CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
0867c7d8 +0x17e:  mov    $0x1,%ebx
0867c7dd +0x183:  jmp    0867c7fa <+0x1a0>
0867c7df +0x185:  mov    %edx,%ebx
0867c7e1 +0x187:  mov    %eax,%esi
0867c7e3 +0x189:  lea    -0x14(%ebp),%eax
0867c7e6 +0x18c:  mov    %eax,(%esp)
0867c7e9 +0x18f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c7ee +0x194:  mov    %esi,%eax
0867c7f0 +0x196:  mov    %ebx,%edx
0867c7f2 +0x198:  mov    %eax,(%esp)
0867c7f5 +0x19b:  call   08ae3750 <_Unwind_Resume>
0867c7fa +0x1a0:  lea    -0x14(%ebp),%eax
0867c7fd +0x1a3:  mov    %eax,(%esp)
0867c800 +0x1a6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867c805 +0x1ab:  mov    %ebx,%eax
0867c807 +0x1ad:  add    $0x20,%esp
0867c80a +0x1b0:  pop    %ebx
0867c80b +0x1b1:  pop    %esi
0867c80c +0x1b2:  pop    %ebp
0867c80d +0x1b3:  ret
```

## 反编译 C

```c
// CUser::SendUpdateItemList @ 0x867c65a

/* CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int) */

undefined4 __thiscall
CUser::SendUpdateItemList(CUser *this,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867c683 to 0867c7d7 has its CatchHandler @ 0867c7df */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  if (param_3 == 1) {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemPacket(pCVar2,2,param_4,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0867c7fa;
    }
  }
  else if (param_3 == 7) {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemPacket(pCVar2,3,param_4,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0867c7fa;
    }
  }
  else if (param_3 == 3) {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemPacket(pCVar2,0,param_4,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0867c7fa;
    }
  }
  else {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    cVar1 = CInventory::MakeItemPacket(pCVar2,1,param_4,local_18);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0867c7fa;
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  SendPacket(this,param_2,local_18);
  uVar3 = 1;
LAB_0867c7fa:
  PacketGuard::~PacketGuard(local_18);
  return uVar3;
}
```
