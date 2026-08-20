# _sendCargoUpgradePacket

`_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri`

`WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327726  _ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri
#           WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int)
# range [0x08327726, 0x083277db]
08327726 +0x00:  push   %ebp
08327727 +0x01:  mov    %esp,%ebp
08327729 +0x03:  push   %esi
0832772a +0x04:  push   %ebx
0832772b +0x05:  sub    $0x20,%esp
0832772e +0x08:  lea    -0x14(%ebp),%eax
08327731 +0x0b:  mov    %eax,(%esp)
08327734 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08327739 +0x13:  movl   $0x42,0x8(%esp)
08327741 +0x1b:  movl   $0x0,0x4(%esp)
08327749 +0x23:  lea    -0x14(%ebp),%eax
0832774c +0x26:  mov    %eax,(%esp)
0832774f +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08327754 +0x2e:  mov    0x10(%ebp),%eax
08327757 +0x31:  mov    %eax,0x4(%esp)
0832775b +0x35:  lea    -0x14(%ebp),%eax
0832775e +0x38:  mov    %eax,(%esp)
08327761 +0x3b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08327766 +0x40:  mov    0xc(%ebp),%eax
08327769 +0x43:  mov    %eax,(%esp)
0832776c +0x46:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08327771 +0x4b:  mov    %eax,(%esp)
08327774 +0x4e:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
08327779 +0x53:  mov    %eax,0x4(%esp)
0832777d +0x57:  lea    -0x14(%ebp),%eax
08327780 +0x5a:  mov    %eax,(%esp)
08327783 +0x5d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08327788 +0x62:  movl   $0x1,0x4(%esp)
08327790 +0x6a:  lea    -0x14(%ebp),%eax
08327793 +0x6d:  mov    %eax,(%esp)
08327796 +0x70:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0832779b +0x75:  lea    -0x14(%ebp),%eax
0832779e +0x78:  mov    %eax,0x4(%esp)
083277a2 +0x7c:  mov    0xc(%ebp),%eax
083277a5 +0x7f:  mov    %eax,(%esp)
083277a8 +0x82:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
083277ad +0x87:  jmp    083277ca <+0xa4>
083277af +0x89:  mov    %edx,%ebx
083277b1 +0x8b:  mov    %eax,%esi
083277b3 +0x8d:  lea    -0x14(%ebp),%eax
083277b6 +0x90:  mov    %eax,(%esp)
083277b9 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083277be +0x98:  mov    %esi,%eax
083277c0 +0x9a:  mov    %ebx,%edx
083277c2 +0x9c:  mov    %eax,(%esp)
083277c5 +0x9f:  call   08ae3750 <_Unwind_Resume>
083277ca +0xa4:  lea    -0x14(%ebp),%eax
083277cd +0xa7:  mov    %eax,(%esp)
083277d0 +0xaa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
083277d5 +0xaf:  add    $0x20,%esp
083277d8 +0xb2:  pop    %ebx
083277d9 +0xb3:  pop    %esi
083277da +0xb4:  pop    %ebp
083277db +0xb5:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_sendCargoUpgradePacket @ 0x8327726

/* WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendCargoUpgradePacket(CCeraShop *this,CUser *param_1,int param_2)

{
  CCargo *this_00;
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0832774f to 083277ac has its CatchHandler @ 083277af */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
  iVar1 = CCargo::GetCapacity(this_00);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
