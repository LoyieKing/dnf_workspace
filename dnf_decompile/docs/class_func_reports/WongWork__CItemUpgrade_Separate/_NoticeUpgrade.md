# _NoticeUpgrade

`_ZN8WongWork21CItemUpgrade_Separate14_NoticeUpgradeEPK5CUserRK10Inven_Itemb`

`WongWork::CItemUpgrade_Separate::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e53a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e53a  _ZN8WongWork21CItemUpgrade_Separate14_NoticeUpgradeEPK5CUserRK10Inven_Itemb
#           WongWork::CItemUpgrade_Separate::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)
# range [0x0811e53a, 0x0811e66d]
0811e53a +0x000:  push   %ebp
0811e53b +0x001:  mov    %esp,%ebp
0811e53d +0x003:  push   %esi
0811e53e +0x004:  push   %ebx
0811e53f +0x005:  sub    $0x30,%esp
0811e542 +0x008:  mov    0x14(%ebp),%eax
0811e545 +0x00b:  mov    %al,-0x1c(%ebp)
0811e548 +0x00e:  lea    -0x14(%ebp),%eax
0811e54b +0x011:  mov    %eax,(%esp)
0811e54e +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0811e553 +0x019:  movl   $0x56,0x8(%esp)
0811e55b +0x021:  movl   $0x0,0x4(%esp)
0811e563 +0x029:  lea    -0x14(%ebp),%eax
0811e566 +0x02c:  mov    %eax,(%esp)
0811e569 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0811e56e +0x034:  movl   $0xa,0x4(%esp)
0811e576 +0x03c:  lea    -0x14(%ebp),%eax
0811e579 +0x03f:  mov    %eax,(%esp)
0811e57c +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811e581 +0x047:  movzbl -0x1c(%ebp),%eax
0811e585 +0x04b:  mov    %eax,0x4(%esp)
0811e589 +0x04f:  lea    -0x14(%ebp),%eax
0811e58c +0x052:  mov    %eax,(%esp)
0811e58f +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811e594 +0x05a:  mov    0xc(%ebp),%eax
0811e597 +0x05d:  mov    %eax,(%esp)
0811e59a +0x060:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0811e59f +0x065:  movzwl %ax,%eax
0811e5a2 +0x068:  mov    %eax,0x4(%esp)
0811e5a6 +0x06c:  lea    -0x14(%ebp),%eax
0811e5a9 +0x06f:  mov    %eax,(%esp)
0811e5ac +0x072:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0811e5b1 +0x077:  mov    0x10(%ebp),%eax
0811e5b4 +0x07a:  mov    0x2(%eax),%eax
0811e5b7 +0x07d:  mov    %eax,0x4(%esp)
0811e5bb +0x081:  lea    -0x14(%ebp),%eax
0811e5be +0x084:  mov    %eax,(%esp)
0811e5c1 +0x087:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0811e5c6 +0x08c:  mov    0x10(%ebp),%eax
0811e5c9 +0x08f:  mov    %eax,(%esp)
0811e5cc +0x092:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0811e5d1 +0x097:  movzbl %al,%eax
0811e5d4 +0x09a:  mov    %eax,0x4(%esp)
0811e5d8 +0x09e:  lea    -0x14(%ebp),%eax
0811e5db +0x0a1:  mov    %eax,(%esp)
0811e5de +0x0a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811e5e3 +0x0a9:  mov    0x10(%ebp),%eax
0811e5e6 +0x0ac:  add    $0x33,%eax
0811e5e9 +0x0af:  mov    %eax,(%esp)
0811e5ec +0x0b2:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e5f1 +0x0b7:  movzbl %al,%eax
0811e5f4 +0x0ba:  mov    %eax,0x4(%esp)
0811e5f8 +0x0be:  lea    -0x14(%ebp),%eax
0811e5fb +0x0c1:  mov    %eax,(%esp)
0811e5fe +0x0c4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811e603 +0x0c9:  mov    0x10(%ebp),%eax
0811e606 +0x0cc:  lea    0x25(%eax),%edx
0811e609 +0x0cf:  lea    -0x14(%ebp),%eax
0811e60c +0x0d2:  mov    %eax,0x4(%esp)
0811e610 +0x0d6:  mov    %edx,(%esp)
0811e613 +0x0d9:  call   0811f1ae <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x4a9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x4a9
0811e618 +0x0de:  movl   $0x1,0x4(%esp)
0811e620 +0x0e6:  lea    -0x14(%ebp),%eax
0811e623 +0x0e9:  mov    %eax,(%esp)
0811e626 +0x0ec:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0811e62b +0x0f1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0811e630 +0x0f6:  lea    -0x14(%ebp),%edx
0811e633 +0x0f9:  mov    %edx,0x4(%esp)
0811e637 +0x0fd:  mov    %eax,(%esp)
0811e63a +0x100:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0811e63f +0x105:  jmp    0811e65c <+0x122>
0811e641 +0x107:  mov    %edx,%ebx
0811e643 +0x109:  mov    %eax,%esi
0811e645 +0x10b:  lea    -0x14(%ebp),%eax
0811e648 +0x10e:  mov    %eax,(%esp)
0811e64b +0x111:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811e650 +0x116:  mov    %esi,%eax
0811e652 +0x118:  mov    %ebx,%edx
0811e654 +0x11a:  mov    %eax,(%esp)
0811e657 +0x11d:  call   08ae3750 <_Unwind_Resume>
0811e65c +0x122:  lea    -0x14(%ebp),%eax
0811e65f +0x125:  mov    %eax,(%esp)
0811e662 +0x128:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811e667 +0x12d:  add    $0x30,%esp
0811e66a +0x130:  pop    %ebx
0811e66b +0x131:  pop    %esi
0811e66c +0x132:  pop    %ebp
0811e66d +0x133:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::_NoticeUpgrade @ 0x811e53a

/* WongWork::CItemUpgrade_Separate::_NoticeUpgrade(CUser const*, Inven_Item const&, bool) */

void __thiscall
WongWork::CItemUpgrade_Separate::_NoticeUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,Inven_Item *param_2,bool param_3)

{
  uint uVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0811e569 to 0811e63e has its CatchHandler @ 0811e641 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 2));
  uVar1 = Inven_Item::GetUpgrade(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  uVar1 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_2 + 0x33));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(param_2 + 0x25),local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
