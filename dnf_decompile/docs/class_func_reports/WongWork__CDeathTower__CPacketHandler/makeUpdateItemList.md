# makeUpdateItemList

`_ZN8WongWork11CDeathTower14CPacketHandler18makeUpdateItemListEP5CUser14ENUM_ITEMSPACEi`

`WongWork::CDeathTower::CPacketHandler::makeUpdateItemList(CUser*, ENUM_ITEMSPACE, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0846050e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846050e  _ZN8WongWork11CDeathTower14CPacketHandler18makeUpdateItemListEP5CUser14ENUM_ITEMSPACEi
#           WongWork::CDeathTower::CPacketHandler::makeUpdateItemList(CUser*, ENUM_ITEMSPACE, int)
# range [0x0846050e, 0x084605a1]
0846050e +0x00:  push   %ebp
0846050f +0x01:  mov    %esp,%ebp
08460511 +0x03:  push   %esi
08460512 +0x04:  push   %ebx
08460513 +0x05:  sub    $0x10,%esp
08460516 +0x08:  mov    0x8(%ebp),%eax
08460519 +0x0b:  movl   $0xe,0x8(%esp)
08460521 +0x13:  movl   $0x0,0x4(%esp)
08460529 +0x1b:  mov    %eax,(%esp)
0846052c +0x1e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08460531 +0x23:  mov    0x10(%ebp),%edx
08460534 +0x26:  mov    0x8(%ebp),%eax
08460537 +0x29:  mov    %edx,0x4(%esp)
0846053b +0x2d:  mov    %eax,(%esp)
0846053e +0x30:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460543 +0x35:  mov    0x8(%ebp),%eax
08460546 +0x38:  movl   $0x1,0x4(%esp)
0846054e +0x40:  mov    %eax,(%esp)
08460551 +0x43:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08460556 +0x48:  mov    0x8(%ebp),%esi
08460559 +0x4b:  mov    0x10(%ebp),%eax
0846055c +0x4e:  mov    %eax,(%esp)
0846055f +0x51:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08460564 +0x56:  mov    %eax,%ebx
08460566 +0x58:  mov    0xc(%ebp),%eax
08460569 +0x5b:  mov    %eax,(%esp)
0846056c +0x5e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08460571 +0x63:  mov    %esi,0xc(%esp)
08460575 +0x67:  mov    0x14(%ebp),%edx
08460578 +0x6a:  mov    %edx,0x8(%esp)
0846057c +0x6e:  mov    %ebx,0x4(%esp)
08460580 +0x72:  mov    %eax,(%esp)
08460583 +0x75:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
08460588 +0x7a:  mov    0x8(%ebp),%eax
0846058b +0x7d:  movl   $0x1,0x4(%esp)
08460593 +0x85:  mov    %eax,(%esp)
08460596 +0x88:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0846059b +0x8d:  add    $0x10,%esp
0846059e +0x90:  pop    %ebx
0846059f +0x91:  pop    %esi
084605a0 +0x92:  pop    %ebp
084605a1 +0x93:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeUpdateItemList @ 0x846050e

/* WongWork::CDeathTower::CPacketHandler::makeUpdateItemList(CUser*, ENUM_ITEMSPACE, int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeUpdateItemList
          (CPacketHandler *this,CUserCharacInfo *param_1,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  CInventory *pCVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,1);
  uVar1 = GetInvenTypeFromItemSpace(param_3);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  CInventory::MakeItemPacket(pCVar2,uVar1,param_4,this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
