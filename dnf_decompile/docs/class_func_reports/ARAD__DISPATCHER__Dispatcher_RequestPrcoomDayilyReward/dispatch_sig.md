# dispatch_sig

`_ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward` | `0x081a0612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0612  _ZN4ARAD10DISPATCHER36Dispatcher_RequestPrcoomDayilyReward12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig(CUser*, PacketBuf&)
# range [0x081a0612, 0x081a08d0]
081a0612 +0x000:  push   %ebp
081a0613 +0x001:  mov    %esp,%ebp
081a0615 +0x003:  push   %ebx
081a0616 +0x004:  sub    $0xa4,%esp
081a061c +0x00a:  cmpl   $0x0,0xc(%ebp)
081a0620 +0x00e:  jne    081a062c <+0x1a>
081a0622 +0x010:  mov    $0x7e8,%eax
081a0627 +0x015:  jmp    081a08c8 <+0x2b6>
081a062c +0x01a:  mov    0xc(%ebp),%eax
081a062f +0x01d:  mov    %eax,(%esp)
081a0632 +0x020:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081a0637 +0x025:  test   %eax,%eax
081a0639 +0x027:  sete   %al
081a063c +0x02a:  test   %al,%al
081a063e +0x02c:  je     081a064a <+0x38>
081a0640 +0x02e:  mov    $0x0,%eax
081a0645 +0x033:  jmp    081a08c8 <+0x2b6>
081a064a +0x038:  mov    0xc(%ebp),%eax
081a064d +0x03b:  mov    %eax,(%esp)
081a0650 +0x03e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a0655 +0x043:  cmp    $0x2,%eax
081a0658 +0x046:  jle    081a066a <+0x58>
081a065a +0x048:  mov    0xc(%ebp),%eax
081a065d +0x04b:  mov    %eax,(%esp)
081a0660 +0x04e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081a0665 +0x053:  cmp    $0x4,%eax
081a0668 +0x056:  jle    081a0671 <+0x5f>
081a066a +0x058:  mov    $0x1,%eax
081a066f +0x05d:  jmp    081a0676 <+0x64>
081a0671 +0x05f:  mov    $0x0,%eax
081a0676 +0x064:  test   %al,%al
081a0678 +0x066:  je     081a0684 <+0x72>
081a067a +0x068:  mov    $0x0,%eax
081a067f +0x06d:  jmp    081a08c8 <+0x2b6>
081a0684 +0x072:  mov    0xc(%ebp),%eax
081a0687 +0x075:  movzbl 0x8ec32(%eax),%eax
081a068e +0x07c:  test   %al,%al
081a0690 +0x07e:  jg     081a06b7 <+0xa5>
081a0692 +0x080:  movl   $0x16,0x8(%esp)
081a069a +0x088:  movl   $0x259,0x4(%esp)
081a06a2 +0x090:  mov    0xc(%ebp),%eax
081a06a5 +0x093:  mov    %eax,(%esp)
081a06a8 +0x096:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a06ad +0x09b:  mov    $0x0,%eax
081a06b2 +0x0a0:  jmp    081a08c8 <+0x2b6>
081a06b7 +0x0a5:  movl   $0x0,-0x14(%ebp)
081a06be +0x0ac:  lea    -0x14(%ebp),%eax
081a06c1 +0x0af:  mov    %eax,0x4(%esp)
081a06c5 +0x0b3:  mov    0x10(%ebp),%eax
081a06c8 +0x0b6:  mov    %eax,(%esp)
081a06cb +0x0b9:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081a06d0 +0x0be:  xor    $0x1,%eax
081a06d3 +0x0c1:  test   %al,%al
081a06d5 +0x0c3:  je     081a06e1 <+0xcf>
081a06d7 +0x0c5:  mov    $0x7fb,%eax
081a06dc +0x0ca:  jmp    081a08c8 <+0x2b6>
081a06e1 +0x0cf:  mov    -0x14(%ebp),%eax
081a06e4 +0x0d2:  cmp    $0x212f,%eax
081a06e9 +0x0d7:  je     081a06ff <+0xed>
081a06eb +0x0d9:  mov    -0x14(%ebp),%eax
081a06ee +0x0dc:  cmp    $0x2130,%eax
081a06f3 +0x0e1:  je     081a06ff <+0xed>
081a06f5 +0x0e3:  mov    $0x800,%eax
081a06fa +0x0e8:  jmp    081a08c8 <+0x2b6>
081a06ff +0x0ed:  mov    -0x14(%ebp),%ebx
081a0702 +0x0f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081a0707 +0x0f5:  mov    %ebx,0x4(%esp)
081a070b +0x0f9:  mov    %eax,(%esp)
081a070e +0x0fc:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081a0713 +0x101:  mov    %eax,-0x10(%ebp)
081a0716 +0x104:  cmpl   $0x0,-0x10(%ebp)
081a071a +0x108:  je     081a0732 <+0x120>
081a071c +0x10a:  mov    -0x10(%ebp),%eax
081a071f +0x10d:  mov    (%eax),%eax
081a0721 +0x10f:  add    $0xc,%eax
081a0724 +0x112:  mov    (%eax),%edx
081a0726 +0x114:  mov    -0x10(%ebp),%eax
081a0729 +0x117:  mov    %eax,(%esp)
081a072c +0x11a:  call   *%edx
081a072e +0x11c:  test   %eax,%eax
081a0730 +0x11e:  je     081a0739 <+0x127>
081a0732 +0x120:  mov    $0x1,%eax
081a0737 +0x125:  jmp    081a073e <+0x12c>
081a0739 +0x127:  mov    $0x0,%eax
081a073e +0x12c:  test   %al,%al
081a0740 +0x12e:  je     081a074c <+0x13a>
081a0742 +0x130:  mov    $0x0,%eax
081a0747 +0x135:  jmp    081a08c8 <+0x2b6>
081a074c +0x13a:  lea    -0x51(%ebp),%eax
081a074f +0x13d:  mov    %eax,(%esp)
081a0752 +0x140:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081a0757 +0x145:  mov    -0x10(%ebp),%eax
081a075a +0x148:  mov    %eax,(%esp)
081a075d +0x14b:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081a0762 +0x150:  mov    %eax,-0x4f(%ebp)
081a0765 +0x153:  mov    -0x10(%ebp),%eax
081a0768 +0x156:  mov    (%eax),%eax
081a076a +0x158:  add    $0x8,%eax
081a076d +0x15b:  mov    (%eax),%edx
081a076f +0x15d:  lea    -0x51(%ebp),%eax
081a0772 +0x160:  mov    %eax,0x4(%esp)
081a0776 +0x164:  mov    -0x10(%ebp),%eax
081a0779 +0x167:  mov    %eax,(%esp)
081a077c +0x16a:  call   *%edx
081a077e +0x16c:  movl   $0x1,0x4(%esp)
081a0786 +0x174:  lea    -0x51(%ebp),%eax
081a0789 +0x177:  mov    %eax,(%esp)
081a078c +0x17a:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
081a0791 +0x17f:  mov    0xc(%ebp),%eax
081a0794 +0x182:  mov    %eax,(%esp)
081a0797 +0x185:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081a079c +0x18a:  movl   $0x1,0x4c(%esp)
081a07a4 +0x192:  movl   $0x1,0x48(%esp)
081a07ac +0x19a:  movl   $0xe,0x44(%esp)
081a07b4 +0x1a2:  mov    -0x51(%ebp),%edx
081a07b7 +0x1a5:  mov    %edx,0x4(%esp)
081a07bb +0x1a9:  mov    -0x4d(%ebp),%edx
081a07be +0x1ac:  mov    %edx,0x8(%esp)
081a07c2 +0x1b0:  mov    -0x49(%ebp),%edx
081a07c5 +0x1b3:  mov    %edx,0xc(%esp)
081a07c9 +0x1b7:  mov    -0x45(%ebp),%edx
081a07cc +0x1ba:  mov    %edx,0x10(%esp)
081a07d0 +0x1be:  mov    -0x41(%ebp),%edx
081a07d3 +0x1c1:  mov    %edx,0x14(%esp)
081a07d7 +0x1c5:  mov    -0x3d(%ebp),%edx
081a07da +0x1c8:  mov    %edx,0x18(%esp)
081a07de +0x1cc:  mov    -0x39(%ebp),%edx
081a07e1 +0x1cf:  mov    %edx,0x1c(%esp)
081a07e5 +0x1d3:  mov    -0x35(%ebp),%edx
081a07e8 +0x1d6:  mov    %edx,0x20(%esp)
081a07ec +0x1da:  mov    -0x31(%ebp),%edx
081a07ef +0x1dd:  mov    %edx,0x24(%esp)
081a07f3 +0x1e1:  mov    -0x2d(%ebp),%edx
081a07f6 +0x1e4:  mov    %edx,0x28(%esp)
081a07fa +0x1e8:  mov    -0x29(%ebp),%edx
081a07fd +0x1eb:  mov    %edx,0x2c(%esp)
081a0801 +0x1ef:  mov    -0x25(%ebp),%edx
081a0804 +0x1f2:  mov    %edx,0x30(%esp)
081a0808 +0x1f6:  mov    -0x21(%ebp),%edx
081a080b +0x1f9:  mov    %edx,0x34(%esp)
081a080f +0x1fd:  mov    -0x1d(%ebp),%edx
081a0812 +0x200:  mov    %edx,0x38(%esp)
081a0816 +0x204:  mov    -0x19(%ebp),%edx
081a0819 +0x207:  mov    %edx,0x3c(%esp)
081a081d +0x20b:  movzbl -0x15(%ebp),%edx
081a0821 +0x20f:  mov    %dl,0x40(%esp)
081a0825 +0x213:  mov    %eax,(%esp)
081a0828 +0x216:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081a082d +0x21b:  mov    %ax,-0xa(%ebp)
081a0831 +0x21f:  movzwl -0xa(%ebp),%eax
081a0835 +0x223:  not    %eax
081a0837 +0x225:  shr    $0xf,%ax
081a083b +0x229:  test   %al,%al
081a083d +0x22b:  je     081a08a8 <+0x296>
081a083f +0x22d:  movl   $0x259,0x4(%esp)
081a0847 +0x235:  mov    0xc(%ebp),%eax
081a084a +0x238:  mov    %eax,(%esp)
081a084d +0x23b:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081a0852 +0x240:  movswl -0xa(%ebp),%eax
081a0856 +0x244:  mov    %eax,0xc(%esp)
081a085a +0x248:  movl   $0x0,0x8(%esp)
081a0862 +0x250:  movl   $0x1,0x4(%esp)
081a086a +0x258:  mov    0xc(%ebp),%eax
081a086d +0x25b:  mov    %eax,(%esp)
081a0870 +0x25e:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081a0875 +0x263:  mov    0xc(%ebp),%eax
081a0878 +0x266:  movzbl 0x8ec32(%eax),%eax
081a087f +0x26d:  lea    -0x1(%eax),%edx
081a0882 +0x270:  mov    0xc(%ebp),%eax
081a0885 +0x273:  mov    %dl,0x8ec32(%eax)
081a088b +0x279:  mov    0xc(%ebp),%eax
081a088e +0x27c:  mov    %eax,(%esp)
081a0891 +0x27f:  call   081618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>  ; InterSelectPcroomDailyReward::SendPacket(CUser*)
081a0896 +0x284:  mov    0xc(%ebp),%eax
081a0899 +0x287:  mov    %eax,(%esp)
081a089c +0x28a:  call   0815cf06 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser>  ; DBUpdatePcroomDailyReward::makeRequest(CUser*)
081a08a1 +0x28f:  mov    $0x0,%eax
081a08a6 +0x294:  jmp    081a08c8 <+0x2b6>
081a08a8 +0x296:  movl   $0x4,0x8(%esp)
081a08b0 +0x29e:  movl   $0x259,0x4(%esp)
081a08b8 +0x2a6:  mov    0xc(%ebp),%eax
081a08bb +0x2a9:  mov    %eax,(%esp)
081a08be +0x2ac:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081a08c3 +0x2b1:  mov    $0x0,%eax
081a08c8 +0x2b6:  add    $0xa4,%esp
081a08ce +0x2bc:  pop    %ebx
081a08cf +0x2bd:  pop    %ebp
081a08d0 +0x2be:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig @ 0x81a0612

/* ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::dispatch_sig
          (Dispatcher_RequestPrcoomDayilyReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined2 uStack_51;
  undefined2 uStack_4f;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  int local_18;
  CItem *local_14;
  short local_e;
  
  if (param_1 == (CUser *)0x0) {
    return 0x7e8;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  if ((char)param_1[0x8ec32] < '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x259,0x16);
    return 0;
  }
  local_18 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_18);
  iVar3 = local_18;
  if (cVar2 != '\x01') {
    return 0x7fb;
  }
  if ((local_18 != 0x212f) && (local_18 != 0x2130)) {
    return 0x800;
  }
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if ((local_14 == (CItem *)0x0) ||
     (iVar3 = (**(code **)(*(int *)local_14 + 0xc))(local_14), iVar3 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Inven_Item::Inven_Item((Inven_Item *)&local_55);
    uVar4 = CItem::get_index(local_14);
    uStack_53 = (undefined2)uVar4;
    uStack_51 = (undefined2)((uint)uVar4 >> 0x10);
    (**(code **)(*(int *)local_14 + 8))(local_14,&local_55);
    Inven_Item::set_add_info((Inven_Item *)&local_55,1);
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_e = CInventory::insertItemIntoInventory
                        (uVar4,CONCAT22(uStack_53,local_55),CONCAT22(uStack_4f,uStack_51),local_4d,
                         local_49,local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,
                         local_29,local_25,local_21,local_1d,local_19,0xe,1,1);
    if (local_e < 0) {
      CUser::SendCmdErrorPacket(param_1,0x259,4);
    }
    else {
      CUser::SendCmdOkPacket(param_1,0x259);
      CUser::SendUpdateItem(param_1,1,0,(int)local_e);
      param_1[0x8ec32] = (CUser)((char)param_1[0x8ec32] + -1);
      InterSelectPcroomDailyReward::SendPacket(param_1);
      DBUpdatePcroomDailyReward::makeRequest(param_1);
    }
  }
  return 0;
}
```
