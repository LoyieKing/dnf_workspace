# checkWorkState

`_ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE`

`ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState(CUser*, arad::SigAradJumpingCharacter&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter` | `0x0819f44c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f44c  _ZN4ARAD10DISPATCHER31Dispatcher_AradJumpingCharacter14checkWorkStateEP5CUserRN4arad23SigAradJumpingCharacterE
#           ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState(CUser*, arad::SigAradJumpingCharacter&)
# range [0x0819f44c, 0x0819f6f7]
0819f44c +0x000:  push   %ebp
0819f44d +0x001:  mov    %esp,%ebp
0819f44f +0x003:  sub    $0xa8,%esp
0819f455 +0x009:  movb   $0x0,-0x15(%ebp)
0819f459 +0x00d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0819f45e +0x012:  movl   $0x2a,0x8(%esp)
0819f466 +0x01a:  mov    0xc(%ebp),%edx
0819f469 +0x01d:  mov    %edx,0x4(%esp)
0819f46d +0x021:  mov    %eax,(%esp)
0819f470 +0x024:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0819f475 +0x029:  mov    %eax,-0x14(%ebp)
0819f478 +0x02c:  cmpl   $0x0,-0x14(%ebp)
0819f47c +0x030:  je     0819f4a5 <+0x59>
0819f47e +0x032:  mov    -0x14(%ebp),%eax
0819f481 +0x035:  movzbl %al,%eax
0819f484 +0x038:  mov    %eax,0x8(%esp)
0819f488 +0x03c:  movl   $0x249,0x4(%esp)
0819f490 +0x044:  mov    0xc(%ebp),%eax
0819f493 +0x047:  mov    %eax,(%esp)
0819f496 +0x04a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f49b +0x04f:  mov    $0x0,%eax
0819f4a0 +0x054:  jmp    0819f6f5 <+0x2a9>
0819f4a5 +0x059:  mov    0x10(%ebp),%eax
0819f4a8 +0x05c:  movzbl 0x9(%eax),%eax
0819f4ac +0x060:  cmp    $0x2,%al
0819f4ae +0x062:  jne    0819f538 <+0xec>
0819f4b4 +0x068:  movl   $0x0,-0xc(%ebp)
0819f4bb +0x06f:  jmp    0819f4ee <+0xa2>
0819f4bd +0x071:  mov    0xc(%ebp),%eax
0819f4c0 +0x074:  lea    0x796e8(%eax),%edx
0819f4c6 +0x07a:  mov    -0xc(%ebp),%eax
0819f4c9 +0x07d:  mov    %eax,0x4(%esp)
0819f4cd +0x081:  mov    %edx,(%esp)
0819f4d0 +0x084:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0819f4d5 +0x089:  movzwl 0x27(%eax),%eax
0819f4d9 +0x08d:  cmp    $0x3b,%ax
0819f4dd +0x091:  setg   %al
0819f4e0 +0x094:  test   %al,%al
0819f4e2 +0x096:  je     0819f4ea <+0x9e>
0819f4e4 +0x098:  movb   $0x1,-0x15(%ebp)
0819f4e8 +0x09c:  jmp    0819f508 <+0xbc>
0819f4ea +0x09e:  addl   $0x1,-0xc(%ebp)
0819f4ee +0x0a2:  mov    0xc(%ebp),%eax
0819f4f1 +0x0a5:  add    $0x796e8,%eax
0819f4f6 +0x0aa:  mov    %eax,(%esp)
0819f4f9 +0x0ad:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0819f4fe +0x0b2:  cmp    -0xc(%ebp),%eax
0819f501 +0x0b5:  seta   %al
0819f504 +0x0b8:  test   %al,%al
0819f506 +0x0ba:  jne    0819f4bd <+0x71>
0819f508 +0x0bc:  movzbl -0x15(%ebp),%eax
0819f50c +0x0c0:  xor    $0x1,%eax
0819f50f +0x0c3:  test   %al,%al
0819f511 +0x0c5:  je     0819f538 <+0xec>
0819f513 +0x0c7:  movl   $0x8,0x8(%esp)
0819f51b +0x0cf:  movl   $0x249,0x4(%esp)
0819f523 +0x0d7:  mov    0xc(%ebp),%eax
0819f526 +0x0da:  mov    %eax,(%esp)
0819f529 +0x0dd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f52e +0x0e2:  mov    $0x0,%eax
0819f533 +0x0e7:  jmp    0819f6f5 <+0x2a9>
0819f538 +0x0ec:  mov    0xc(%ebp),%eax
0819f53b +0x0ef:  mov    %eax,(%esp)
0819f53e +0x0f2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0819f543 +0x0f7:  cmp    $0x11,%eax
0819f546 +0x0fa:  setg   %al
0819f549 +0x0fd:  test   %al,%al
0819f54b +0x0ff:  je     0819f572 <+0x126>
0819f54d +0x101:  movl   $0x12,0x8(%esp)
0819f555 +0x109:  movl   $0x249,0x4(%esp)
0819f55d +0x111:  mov    0xc(%ebp),%eax
0819f560 +0x114:  mov    %eax,(%esp)
0819f563 +0x117:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f568 +0x11c:  mov    $0x0,%eax
0819f56d +0x121:  jmp    0819f6f5 <+0x2a9>
0819f572 +0x126:  mov    0xc(%ebp),%eax
0819f575 +0x129:  mov    %eax,(%esp)
0819f578 +0x12c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819f57d +0x131:  mov    %eax,-0x10(%ebp)
0819f580 +0x134:  lea    -0x52(%ebp),%eax
0819f583 +0x137:  mov    %eax,(%esp)
0819f586 +0x13a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0819f58b +0x13f:  mov    0x10(%ebp),%eax
0819f58e +0x142:  movzwl 0xb(%eax),%eax
0819f592 +0x146:  movzwl %ax,%edx
0819f595 +0x149:  lea    -0x98(%ebp),%eax
0819f59b +0x14f:  mov    %edx,0xc(%esp)
0819f59f +0x153:  movl   $0x1,0x8(%esp)
0819f5a7 +0x15b:  mov    -0x10(%ebp),%edx
0819f5aa +0x15e:  mov    %edx,0x4(%esp)
0819f5ae +0x162:  mov    %eax,(%esp)
0819f5b1 +0x165:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0819f5b6 +0x16a:  sub    $0x4,%esp
0819f5b9 +0x16d:  mov    -0x98(%ebp),%eax
0819f5bf +0x173:  mov    %eax,-0x52(%ebp)
0819f5c2 +0x176:  mov    -0x94(%ebp),%eax
0819f5c8 +0x17c:  mov    %eax,-0x4e(%ebp)
0819f5cb +0x17f:  mov    -0x90(%ebp),%eax
0819f5d1 +0x185:  mov    %eax,-0x4a(%ebp)
0819f5d4 +0x188:  mov    -0x8c(%ebp),%eax
0819f5da +0x18e:  mov    %eax,-0x46(%ebp)
0819f5dd +0x191:  mov    -0x88(%ebp),%eax
0819f5e3 +0x197:  mov    %eax,-0x42(%ebp)
0819f5e6 +0x19a:  mov    -0x84(%ebp),%eax
0819f5ec +0x1a0:  mov    %eax,-0x3e(%ebp)
0819f5ef +0x1a3:  mov    -0x80(%ebp),%eax
0819f5f2 +0x1a6:  mov    %eax,-0x3a(%ebp)
0819f5f5 +0x1a9:  mov    -0x7c(%ebp),%eax
0819f5f8 +0x1ac:  mov    %eax,-0x36(%ebp)
0819f5fb +0x1af:  mov    -0x78(%ebp),%eax
0819f5fe +0x1b2:  mov    %eax,-0x32(%ebp)
0819f601 +0x1b5:  mov    -0x74(%ebp),%eax
0819f604 +0x1b8:  mov    %eax,-0x2e(%ebp)
0819f607 +0x1bb:  mov    -0x70(%ebp),%eax
0819f60a +0x1be:  mov    %eax,-0x2a(%ebp)
0819f60d +0x1c1:  mov    -0x6c(%ebp),%eax
0819f610 +0x1c4:  mov    %eax,-0x26(%ebp)
0819f613 +0x1c7:  mov    -0x68(%ebp),%eax
0819f616 +0x1ca:  mov    %eax,-0x22(%ebp)
0819f619 +0x1cd:  mov    -0x64(%ebp),%eax
0819f61c +0x1d0:  mov    %eax,-0x1e(%ebp)
0819f61f +0x1d3:  mov    -0x60(%ebp),%eax
0819f622 +0x1d6:  mov    %eax,-0x1a(%ebp)
0819f625 +0x1d9:  movzbl -0x5c(%ebp),%eax
0819f629 +0x1dd:  mov    %al,-0x16(%ebp)
0819f62c +0x1e0:  lea    -0x52(%ebp),%eax
0819f62f +0x1e3:  mov    %eax,(%esp)
0819f632 +0x1e6:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0819f637 +0x1eb:  test   %al,%al
0819f639 +0x1ed:  je     0819f660 <+0x214>
0819f63b +0x1ef:  movl   $0x11,0x8(%esp)
0819f643 +0x1f7:  movl   $0x249,0x4(%esp)
0819f64b +0x1ff:  mov    0xc(%ebp),%eax
0819f64e +0x202:  mov    %eax,(%esp)
0819f651 +0x205:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f656 +0x20a:  mov    $0x0,%eax
0819f65b +0x20f:  jmp    0819f6f5 <+0x2a9>
0819f660 +0x214:  mov    0x10(%ebp),%eax
0819f663 +0x217:  movzbl 0x9(%eax),%eax
0819f667 +0x21b:  cmp    $0x1,%al
0819f669 +0x21d:  jne    0819f697 <+0x24b>
0819f66b +0x21f:  mov    -0x50(%ebp),%eax
0819f66e +0x222:  cmp    $0x28d468,%eax
0819f673 +0x227:  je     0819f6f0 <+0x2a4>
0819f675 +0x229:  movl   $0x11,0x8(%esp)
0819f67d +0x231:  movl   $0x249,0x4(%esp)
0819f685 +0x239:  mov    0xc(%ebp),%eax
0819f688 +0x23c:  mov    %eax,(%esp)
0819f68b +0x23f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f690 +0x244:  mov    $0x0,%eax
0819f695 +0x249:  jmp    0819f6f5 <+0x2a9>
0819f697 +0x24b:  mov    0x10(%ebp),%eax
0819f69a +0x24e:  movzbl 0x9(%eax),%eax
0819f69e +0x252:  cmp    $0x2,%al
0819f6a0 +0x254:  jne    0819f6ce <+0x282>
0819f6a2 +0x256:  mov    -0x50(%ebp),%eax
0819f6a5 +0x259:  cmp    $0x28d469,%eax
0819f6aa +0x25e:  je     0819f6f0 <+0x2a4>
0819f6ac +0x260:  movl   $0x11,0x8(%esp)
0819f6b4 +0x268:  movl   $0x249,0x4(%esp)
0819f6bc +0x270:  mov    0xc(%ebp),%eax
0819f6bf +0x273:  mov    %eax,(%esp)
0819f6c2 +0x276:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f6c7 +0x27b:  mov    $0x0,%eax
0819f6cc +0x280:  jmp    0819f6f5 <+0x2a9>
0819f6ce +0x282:  movl   $0x11,0x8(%esp)
0819f6d6 +0x28a:  movl   $0x249,0x4(%esp)
0819f6de +0x292:  mov    0xc(%ebp),%eax
0819f6e1 +0x295:  mov    %eax,(%esp)
0819f6e4 +0x298:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f6e9 +0x29d:  mov    $0x0,%eax
0819f6ee +0x2a2:  jmp    0819f6f5 <+0x2a9>
0819f6f0 +0x2a4:  mov    $0x1,%eax
0819f6f5 +0x2a9:  leave
0819f6f6 +0x2aa:  ret
0819f6f7 +0x2ab:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState @ 0x819f44c

/* ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState(CUser*,
   arad::SigAradJumpingCharacter&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::checkWorkState
          (Dispatcher_AradJumpingCharacter *this,CUser *param_1,SigAradJumpingCharacter *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined2 local_52;
  undefined2 uStack_50;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined1 local_1a;
  char local_19;
  uint local_18;
  int local_14;
  uint local_10;
  
  local_19 = '\0';
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
  if (local_18 == 0) {
    local_18 = 0;
    if (param_2[9] == (SigAradJumpingCharacter)0x2) {
      local_10 = 0;
      while (uVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (param_1 + 0x796e8)), local_10 < uVar3) {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           local_10);
        if (0x3b < *(short *)(iVar4 + 0x27)) {
          local_19 = '\x01';
          break;
        }
        local_10 = local_10 + 1;
      }
      if (local_19 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x249,8);
        return 0;
      }
    }
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar4 < 0x12) {
      local_14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      Inven_Item::Inven_Item((Inven_Item *)&local_56);
      uVar3 = (uint)*(ushort *)(param_2 + 0xb);
      CInventory::GetInvenSlot((int)local_9c,local_14);
      local_56 = (undefined2)local_9c._0_4_;
      uStack_54 = SUB42(local_9c._0_4_,2);
      local_52 = (undefined2)local_9c._4_4_;
      uStack_50 = SUB42(local_9c._4_4_,2);
      local_4e = local_94;
      local_4a = local_90;
      local_46 = local_8c;
      local_42 = local_88;
      local_3e = local_84;
      local_3a = local_80;
      local_36 = local_7c;
      local_32 = local_78;
      local_2e = local_74;
      local_2a = local_70;
      local_26 = local_6c;
      local_22 = local_68;
      local_1e = local_64;
      local_1a = local_60;
      cVar1 = Inven_Item::isEmpty((Inven_Item *)&local_56);
      if (cVar1 == '\0') {
        if (param_2[9] == (SigAradJumpingCharacter)0x1) {
          if (CONCAT22(local_52,uStack_54) != 0x28d468) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
        }
        else {
          if (param_2[9] != (SigAradJumpingCharacter)0x2) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
          if (CONCAT22(local_52,uStack_54) != 0x28d469) {
            CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x249,0x11,uVar3);
        uVar2 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x249,0x12);
      uVar2 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x249,local_18 & 0xff);
    uVar2 = 0;
  }
  return uVar2;
}
```
