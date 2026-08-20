# _sendInventoryUpgradePacket

`_ZN8WongWork9CCeraShop27_sendInventoryUpgradePacketEP5CUseri`

`WongWork::CCeraShop::_sendInventoryUpgradePacket(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083275be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083275be  _ZN8WongWork9CCeraShop27_sendInventoryUpgradePacketEP5CUseri
#           WongWork::CCeraShop::_sendInventoryUpgradePacket(CUser*, int)
# range [0x083275be, 0x08327673]
083275be +0x00:  push   %ebp
083275bf +0x01:  mov    %esp,%ebp
083275c1 +0x03:  push   %esi
083275c2 +0x04:  push   %ebx
083275c3 +0x05:  sub    $0x20,%esp
083275c6 +0x08:  lea    -0x14(%ebp),%eax
083275c9 +0x0b:  mov    %eax,(%esp)
083275cc +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083275d1 +0x13:  movl   $0x42,0x8(%esp)
083275d9 +0x1b:  movl   $0x0,0x4(%esp)
083275e1 +0x23:  lea    -0x14(%ebp),%eax
083275e4 +0x26:  mov    %eax,(%esp)
083275e7 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083275ec +0x2e:  mov    0x10(%ebp),%eax
083275ef +0x31:  mov    %eax,0x4(%esp)
083275f3 +0x35:  lea    -0x14(%ebp),%eax
083275f6 +0x38:  mov    %eax,(%esp)
083275f9 +0x3b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083275fe +0x40:  mov    0xc(%ebp),%eax
08327601 +0x43:  mov    %eax,(%esp)
08327604 +0x46:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08327609 +0x4b:  mov    %eax,(%esp)
0832760c +0x4e:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
08327611 +0x53:  mov    %eax,0x4(%esp)
08327615 +0x57:  lea    -0x14(%ebp),%eax
08327618 +0x5a:  mov    %eax,(%esp)
0832761b +0x5d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08327620 +0x62:  movl   $0x1,0x4(%esp)
08327628 +0x6a:  lea    -0x14(%ebp),%eax
0832762b +0x6d:  mov    %eax,(%esp)
0832762e +0x70:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08327633 +0x75:  lea    -0x14(%ebp),%eax
08327636 +0x78:  mov    %eax,0x4(%esp)
0832763a +0x7c:  mov    0xc(%ebp),%eax
0832763d +0x7f:  mov    %eax,(%esp)
08327640 +0x82:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08327645 +0x87:  jmp    08327662 <+0xa4>
08327647 +0x89:  mov    %edx,%ebx
08327649 +0x8b:  mov    %eax,%esi
0832764b +0x8d:  lea    -0x14(%ebp),%eax
0832764e +0x90:  mov    %eax,(%esp)
08327651 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08327656 +0x98:  mov    %esi,%eax
08327658 +0x9a:  mov    %ebx,%edx
0832765a +0x9c:  mov    %eax,(%esp)
0832765d +0x9f:  call   08ae3750 <_Unwind_Resume>
08327662 +0xa4:  lea    -0x14(%ebp),%eax
08327665 +0xa7:  mov    %eax,(%esp)
08327668 +0xaa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0832766d +0xaf:  add    $0x20,%esp
08327670 +0xb2:  pop    %ebx
08327671 +0xb3:  pop    %esi
08327672 +0xb4:  pop    %ebp
08327673 +0xb5:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_sendInventoryUpgradePacket @ 0x83275be

/* WongWork::CCeraShop::_sendInventoryUpgradePacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendInventoryUpgradePacket(CCeraShop *this,CUser *param_1,int param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 083275e7 to 08327644 has its CatchHandler @ 08327647 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar1 = CInventory::get_inventory_capacity(this_00);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
