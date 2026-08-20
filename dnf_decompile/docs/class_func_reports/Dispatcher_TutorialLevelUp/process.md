# process

`_ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TutorialLevelUp::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TutorialLevelUp` | `0x081e3724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3724  _ZN26Dispatcher_TutorialLevelUp7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TutorialLevelUp::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e3724, 0x081e3913]
081e3724 +0x000:  push   %ebp
081e3725 +0x001:  mov    %esp,%ebp
081e3727 +0x003:  sub    $0x48,%esp
081e372a +0x006:  mov    0xc(%ebp),%eax
081e372d +0x009:  mov    %eax,(%esp)
081e3730 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e3735 +0x011:  cmp    $0x5,%eax
081e3738 +0x014:  setne  %al
081e373b +0x017:  test   %al,%al
081e373d +0x019:  je     081e3764 <+0x40>
081e373f +0x01b:  movl   $0x13,0x8(%esp)
081e3747 +0x023:  movl   $0x1e4,0x4(%esp)
081e374f +0x02b:  mov    0xc(%ebp),%eax
081e3752 +0x02e:  mov    %eax,(%esp)
081e3755 +0x031:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e375a +0x036:  mov    $0x0,%eax
081e375f +0x03b:  jmp    081e3912 <+0x1ee>
081e3764 +0x040:  mov    0xc(%ebp),%eax
081e3767 +0x043:  mov    %eax,(%esp)
081e376a +0x046:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081e376f +0x04b:  cmp    $0x1,%eax
081e3772 +0x04e:  setne  %al
081e3775 +0x051:  test   %al,%al
081e3777 +0x053:  je     081e379e <+0x7a>
081e3779 +0x055:  movl   $0x13,0x8(%esp)
081e3781 +0x05d:  movl   $0x1e4,0x4(%esp)
081e3789 +0x065:  mov    0xc(%ebp),%eax
081e378c +0x068:  mov    %eax,(%esp)
081e378f +0x06b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e3794 +0x070:  mov    $0x0,%eax
081e3799 +0x075:  jmp    081e3912 <+0x1ee>
081e379e +0x07a:  mov    0xc(%ebp),%eax
081e37a1 +0x07d:  mov    %eax,(%esp)
081e37a4 +0x080:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081e37a9 +0x085:  mov    %eax,-0xc(%ebp)
081e37ac +0x088:  cmpl   $0x0,-0xc(%ebp)
081e37b0 +0x08c:  jne    081e37d7 <+0xb3>
081e37b2 +0x08e:  movl   $0x13,0x8(%esp)
081e37ba +0x096:  movl   $0x1e4,0x4(%esp)
081e37c2 +0x09e:  mov    0xc(%ebp),%eax
081e37c5 +0x0a1:  mov    %eax,(%esp)
081e37c8 +0x0a4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e37cd +0x0a9:  mov    $0x0,%eax
081e37d2 +0x0ae:  jmp    081e3912 <+0x1ee>
081e37d7 +0x0b3:  mov    -0xc(%ebp),%eax
081e37da +0x0b6:  add    $0xb24,%eax
081e37df +0x0bb:  mov    %eax,(%esp)
081e37e2 +0x0be:  call   0822cffc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26a6
081e37e7 +0x0c3:  cmp    $0xee49,%eax
081e37ec +0x0c8:  je     081e3823 <+0xff>
081e37ee +0x0ca:  mov    -0xc(%ebp),%eax
081e37f1 +0x0cd:  add    $0xb24,%eax
081e37f6 +0x0d2:  mov    %eax,(%esp)
081e37f9 +0x0d5:  call   0822cffc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26a6
081e37fe +0x0da:  cmp    $0xee51,%eax
081e3803 +0x0df:  je     081e3823 <+0xff>
081e3805 +0x0e1:  mov    -0xc(%ebp),%eax
081e3808 +0x0e4:  add    $0xb24,%eax
081e380d +0x0e9:  mov    %eax,(%esp)
081e3810 +0x0ec:  call   0822cffc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26a6
081e3815 +0x0f1:  cmp    $0xee58,%eax
081e381a +0x0f6:  je     081e3823 <+0xff>
081e381c +0x0f8:  mov    $0x1,%eax
081e3821 +0x0fd:  jmp    081e3828 <+0x104>
081e3823 +0x0ff:  mov    $0x0,%eax
081e3828 +0x104:  test   %al,%al
081e382a +0x106:  je     081e3851 <+0x12d>
081e382c +0x108:  movl   $0x13,0x8(%esp)
081e3834 +0x110:  movl   $0x1e4,0x4(%esp)
081e383c +0x118:  mov    0xc(%ebp),%eax
081e383f +0x11b:  mov    %eax,(%esp)
081e3842 +0x11e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e3847 +0x123:  mov    $0x0,%eax
081e384c +0x128:  jmp    081e3912 <+0x1ee>
081e3851 +0x12d:  movb   $0x0,-0xd(%ebp)
081e3855 +0x131:  movl   $0x0,-0x14(%ebp)
081e385c +0x138:  movl   $0x3b,0x10(%esp)
081e3864 +0x140:  movl   $0x1,0xc(%esp)
081e386c +0x148:  lea    -0x14(%ebp),%eax
081e386f +0x14b:  mov    %eax,0x8(%esp)
081e3873 +0x14f:  lea    -0xd(%ebp),%eax
081e3876 +0x152:  mov    %eax,0x4(%esp)
081e387a +0x156:  mov    0xc(%ebp),%eax
081e387d +0x159:  mov    %eax,(%esp)
081e3880 +0x15c:  call   08689d74 <_ZN5CUser19CalLevelUpItemStateERcRiii>  ; CUser::CalLevelUpItemState(char&, int&, int, int)
081e3885 +0x161:  xor    $0x1,%eax
081e3888 +0x164:  test   %al,%al
081e388a +0x166:  je     081e38ae <+0x18a>
081e388c +0x168:  movl   $0x13,0x8(%esp)
081e3894 +0x170:  movl   $0x1e4,0x4(%esp)
081e389c +0x178:  mov    0xc(%ebp),%eax
081e389f +0x17b:  mov    %eax,(%esp)
081e38a2 +0x17e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e38a7 +0x183:  mov    $0x0,%eax
081e38ac +0x188:  jmp    081e3912 <+0x1ee>
081e38ae +0x18a:  movl   $0x0,-0x18(%ebp)
081e38b5 +0x191:  movl   $0x0,-0x1c(%ebp)
081e38bc +0x198:  mov    -0x14(%ebp),%eax
081e38bf +0x19b:  movl   $0x1,0x1c(%esp)
081e38c7 +0x1a3:  movl   $0xd,0x18(%esp)
081e38cf +0x1ab:  lea    -0x24(%ebp),%edx
081e38d2 +0x1ae:  mov    %edx,0x14(%esp)
081e38d6 +0x1b2:  lea    -0x20(%ebp),%edx
081e38d9 +0x1b5:  mov    %edx,0x10(%esp)
081e38dd +0x1b9:  lea    -0x1c(%ebp),%edx
081e38e0 +0x1bc:  mov    %edx,0xc(%esp)
081e38e4 +0x1c0:  lea    -0x18(%ebp),%edx
081e38e7 +0x1c3:  mov    %edx,0x8(%esp)
081e38eb +0x1c7:  mov    %eax,0x4(%esp)
081e38ef +0x1cb:  mov    0xc(%ebp),%eax
081e38f2 +0x1ce:  mov    %eax,(%esp)
081e38f5 +0x1d1:  call   0868b20c <_ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb>  ; CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool)
081e38fa +0x1d6:  movl   $0x1e4,0x4(%esp)
081e3902 +0x1de:  mov    0xc(%ebp),%eax
081e3905 +0x1e1:  mov    %eax,(%esp)
081e3908 +0x1e4:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e390d +0x1e9:  mov    $0x0,%eax
081e3912 +0x1ee:  leave
081e3913 +0x1ef:  ret
```

## 反编译 C

```c
// Dispatcher_TutorialLevelUp::process @ 0x81e3724

/* Dispatcher_TutorialLevelUp::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TutorialLevelUp::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 5) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
    return 0;
  }
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  if (iVar3 == 1) {
    local_10 = CUser::GetParty((CUser *)param_2);
    if (local_10 != 0) {
      iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24));
      if (((iVar3 == 0xee49) ||
          (iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24)), iVar3 == 0xee51)
          ) || (iVar3 = CBattle_Field::get_cur_map((CBattle_Field *)(local_10 + 0xb24)),
               iVar3 == 0xee58)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
      }
      else {
        local_11 = '\0';
        local_18 = 0;
        cVar2 = CUser::CalLevelUpItemState((CUser *)param_2,&local_11,&local_18,1,0x3b);
        if (cVar2 == '\x01') {
          local_1c = 0;
          local_20 = 0;
          CUser::rewardExp((CUser *)param_2,local_18,&local_1c,&local_20,local_24,local_28,0xd,1);
          CUser::SendCmdOkPacket((CUser *)param_2,0x1e4);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
        }
      }
      return 0;
    }
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
    return 0;
  }
  CUser::SendCmdErrorPacket((CUser *)param_2,0x1e4,0x13);
  return 0;
}
```
