# _NoticeUpgrade

`_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb`

`WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08546824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08546824  _ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb
#           WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)
# range [0x08546824, 0x08546937]
08546824 +0x000:  push   %ebp
08546825 +0x001:  mov    %esp,%ebp
08546827 +0x003:  push   %esi
08546828 +0x004:  push   %ebx
08546829 +0x005:  sub    $0x30,%esp
0854682c +0x008:  mov    0x14(%ebp),%eax
0854682f +0x00b:  mov    %al,-0x1c(%ebp)
08546832 +0x00e:  lea    -0x14(%ebp),%eax
08546835 +0x011:  mov    %eax,(%esp)
08546838 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0854683d +0x019:  movl   $0x56,0x8(%esp)
08546845 +0x021:  movl   $0x0,0x4(%esp)
0854684d +0x029:  lea    -0x14(%ebp),%eax
08546850 +0x02c:  mov    %eax,(%esp)
08546853 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08546858 +0x034:  movl   $0x1,0x4(%esp)
08546860 +0x03c:  lea    -0x14(%ebp),%eax
08546863 +0x03f:  mov    %eax,(%esp)
08546866 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854686b +0x047:  movzbl -0x1c(%ebp),%eax
0854686f +0x04b:  mov    %eax,0x4(%esp)
08546873 +0x04f:  lea    -0x14(%ebp),%eax
08546876 +0x052:  mov    %eax,(%esp)
08546879 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854687e +0x05a:  mov    0xc(%ebp),%eax
08546881 +0x05d:  mov    %eax,(%esp)
08546884 +0x060:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08546889 +0x065:  movzwl %ax,%eax
0854688c +0x068:  mov    %eax,0x4(%esp)
08546890 +0x06c:  lea    -0x14(%ebp),%eax
08546893 +0x06f:  mov    %eax,(%esp)
08546896 +0x072:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854689b +0x077:  mov    0x10(%ebp),%eax
0854689e +0x07a:  mov    0x2(%eax),%eax
085468a1 +0x07d:  mov    %eax,0x4(%esp)
085468a5 +0x081:  lea    -0x14(%ebp),%eax
085468a8 +0x084:  mov    %eax,(%esp)
085468ab +0x087:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085468b0 +0x08c:  mov    0x10(%ebp),%eax
085468b3 +0x08f:  mov    %eax,(%esp)
085468b6 +0x092:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085468bb +0x097:  movzbl %al,%eax
085468be +0x09a:  mov    %eax,0x4(%esp)
085468c2 +0x09e:  lea    -0x14(%ebp),%eax
085468c5 +0x0a1:  mov    %eax,(%esp)
085468c8 +0x0a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085468cd +0x0a9:  mov    0x10(%ebp),%eax
085468d0 +0x0ac:  lea    0x25(%eax),%edx
085468d3 +0x0af:  lea    -0x14(%ebp),%eax
085468d6 +0x0b2:  mov    %eax,0x4(%esp)
085468da +0x0b6:  mov    %edx,(%esp)
085468dd +0x0b9:  call   0811f1ae <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x4a9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x4a9
085468e2 +0x0be:  movl   $0x1,0x4(%esp)
085468ea +0x0c6:  lea    -0x14(%ebp),%eax
085468ed +0x0c9:  mov    %eax,(%esp)
085468f0 +0x0cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085468f5 +0x0d1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085468fa +0x0d6:  lea    -0x14(%ebp),%edx
085468fd +0x0d9:  mov    %edx,0x4(%esp)
08546901 +0x0dd:  mov    %eax,(%esp)
08546904 +0x0e0:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08546909 +0x0e5:  jmp    08546926 <+0x102>
0854690b +0x0e7:  mov    %edx,%ebx
0854690d +0x0e9:  mov    %eax,%esi
0854690f +0x0eb:  lea    -0x14(%ebp),%eax
08546912 +0x0ee:  mov    %eax,(%esp)
08546915 +0x0f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0854691a +0x0f6:  mov    %esi,%eax
0854691c +0x0f8:  mov    %ebx,%edx
0854691e +0x0fa:  mov    %eax,(%esp)
08546921 +0x0fd:  call   08ae3750 <_Unwind_Resume>
08546926 +0x102:  lea    -0x14(%ebp),%eax
08546929 +0x105:  mov    %eax,(%esp)
0854692c +0x108:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08546931 +0x10d:  add    $0x30,%esp
08546934 +0x110:  pop    %ebx
08546935 +0x111:  pop    %esi
08546936 +0x112:  pop    %ebp
08546937 +0x113:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_NoticeUpgrade @ 0x8546824

/* WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool) */

void __thiscall
WongWork::CItemUpgrade::_NoticeUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,bool param_3)

{
  uint uVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08546853 to 08546908 has its CatchHandler @ 0854690b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 2));
  uVar1 = Inven_Item::GetUpgrade(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(param_2 + 0x25),local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
