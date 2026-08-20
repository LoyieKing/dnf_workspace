# SendSecretShopBuyItem

`_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii`

`secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::IBuyRule` | `0x085fb55e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb55e  _ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii
#           secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int)
# range [0x085fb55e, 0x085fb6c7]
085fb55e +0x000:  push   %ebp
085fb55f +0x001:  mov    %esp,%ebp
085fb561 +0x003:  push   %esi
085fb562 +0x004:  push   %ebx
085fb563 +0x005:  sub    $0x20,%esp
085fb566 +0x008:  lea    -0x14(%ebp),%eax
085fb569 +0x00b:  mov    %eax,(%esp)
085fb56c +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085fb571 +0x013:  movl   $0x129,0x8(%esp)
085fb579 +0x01b:  movl   $0x1,0x4(%esp)
085fb581 +0x023:  lea    -0x14(%ebp),%eax
085fb584 +0x026:  mov    %eax,(%esp)
085fb587 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085fb58c +0x02e:  movl   $0x1,0x4(%esp)
085fb594 +0x036:  lea    -0x14(%ebp),%eax
085fb597 +0x039:  mov    %eax,(%esp)
085fb59a +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085fb59f +0x041:  mov    0xc(%ebp),%eax
085fb5a2 +0x044:  mov    %eax,(%esp)
085fb5a5 +0x047:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085fb5aa +0x04c:  mov    %eax,(%esp)
085fb5ad +0x04f:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085fb5b2 +0x054:  mov    %eax,0x4(%esp)
085fb5b6 +0x058:  lea    -0x14(%ebp),%eax
085fb5b9 +0x05b:  mov    %eax,(%esp)
085fb5bc +0x05e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb5c1 +0x063:  mov    0x10(%ebp),%eax
085fb5c4 +0x066:  mov    %eax,0x4(%esp)
085fb5c8 +0x06a:  lea    -0x14(%ebp),%eax
085fb5cb +0x06d:  mov    %eax,(%esp)
085fb5ce +0x070:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085fb5d3 +0x075:  mov    0x14(%ebp),%eax
085fb5d6 +0x078:  mov    0x2(%eax),%eax
085fb5d9 +0x07b:  mov    %eax,0x4(%esp)
085fb5dd +0x07f:  lea    -0x14(%ebp),%eax
085fb5e0 +0x082:  mov    %eax,(%esp)
085fb5e3 +0x085:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb5e8 +0x08a:  mov    0x14(%ebp),%eax
085fb5eb +0x08d:  mov    0x7(%eax),%eax
085fb5ee +0x090:  mov    %eax,0x4(%esp)
085fb5f2 +0x094:  lea    -0x14(%ebp),%eax
085fb5f5 +0x097:  mov    %eax,(%esp)
085fb5f8 +0x09a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb5fd +0x09f:  mov    0x14(%ebp),%eax
085fb600 +0x0a2:  add    $0x11,%eax
085fb603 +0x0a5:  mov    %eax,(%esp)
085fb606 +0x0a8:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085fb60b +0x0ad:  movzbl %al,%eax
085fb60e +0x0b0:  mov    %eax,0x4(%esp)
085fb612 +0x0b4:  lea    -0x14(%ebp),%eax
085fb615 +0x0b7:  mov    %eax,(%esp)
085fb618 +0x0ba:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085fb61d +0x0bf:  mov    0x14(%ebp),%eax
085fb620 +0x0c2:  add    $0x11,%eax
085fb623 +0x0c5:  mov    %eax,(%esp)
085fb626 +0x0c8:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085fb62b +0x0cd:  movzwl %ax,%eax
085fb62e +0x0d0:  mov    %eax,0x4(%esp)
085fb632 +0x0d4:  lea    -0x14(%ebp),%eax
085fb635 +0x0d7:  mov    %eax,(%esp)
085fb638 +0x0da:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085fb63d +0x0df:  mov    0x18(%ebp),%eax
085fb640 +0x0e2:  mov    %eax,0x4(%esp)
085fb644 +0x0e6:  lea    -0x14(%ebp),%eax
085fb647 +0x0e9:  mov    %eax,(%esp)
085fb64a +0x0ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb64f +0x0f1:  mov    0x1c(%ebp),%eax
085fb652 +0x0f4:  mov    %eax,0x4(%esp)
085fb656 +0x0f8:  lea    -0x14(%ebp),%eax
085fb659 +0x0fb:  mov    %eax,(%esp)
085fb65c +0x0fe:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb661 +0x103:  mov    0x20(%ebp),%eax
085fb664 +0x106:  mov    %eax,0x4(%esp)
085fb668 +0x10a:  lea    -0x14(%ebp),%eax
085fb66b +0x10d:  mov    %eax,(%esp)
085fb66e +0x110:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb673 +0x115:  movl   $0x1,0x4(%esp)
085fb67b +0x11d:  lea    -0x14(%ebp),%eax
085fb67e +0x120:  mov    %eax,(%esp)
085fb681 +0x123:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085fb686 +0x128:  lea    -0x14(%ebp),%eax
085fb689 +0x12b:  mov    %eax,0x4(%esp)
085fb68d +0x12f:  mov    0xc(%ebp),%eax
085fb690 +0x132:  mov    %eax,(%esp)
085fb693 +0x135:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085fb698 +0x13a:  jmp    085fb6b5 <+0x157>
085fb69a +0x13c:  mov    %edx,%ebx
085fb69c +0x13e:  mov    %eax,%esi
085fb69e +0x140:  lea    -0x14(%ebp),%eax
085fb6a1 +0x143:  mov    %eax,(%esp)
085fb6a4 +0x146:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb6a9 +0x14b:  mov    %esi,%eax
085fb6ab +0x14d:  mov    %ebx,%edx
085fb6ad +0x14f:  mov    %eax,(%esp)
085fb6b0 +0x152:  call   08ae3750 <_Unwind_Resume>
085fb6b5 +0x157:  lea    -0x14(%ebp),%eax
085fb6b8 +0x15a:  mov    %eax,(%esp)
085fb6bb +0x15d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb6c0 +0x162:  add    $0x20,%esp
085fb6c3 +0x165:  pop    %ebx
085fb6c4 +0x166:  pop    %esi
085fb6c5 +0x167:  pop    %ebp
085fb6c6 +0x168:  ret
085fb6c7 +0x169:  nop
```

## 反编译 C

```c
// secretshop::IBuyRule::SendSecretShopBuyItem @ 0x85fb55e

/* secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int) */

void __thiscall
secretshop::IBuyRule::SendSecretShopBuyItem
          (IBuyRule *this,CUser *param_1,int param_2,Inven_Item *param_3,int param_4,int param_5,
          int param_6)

{
  CInventory *this_00;
  int iVar1;
  uint uVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085fb587 to 085fb697 has its CatchHandler @ 085fb69a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x129);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar1 = CInventory::get_money(this_00);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_3 + 2));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_3 + 7));
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_6);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
