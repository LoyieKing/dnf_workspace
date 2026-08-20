# SendInfinityGrowthWeapon

`_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii`

`GrowthEquipEvent::SendInfinityGrowthWeapon(CUser*, Inven_Item const*, int, int) const`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f74b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f74b2  _ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii
#           GrowthEquipEvent::SendInfinityGrowthWeapon(CUser*, Inven_Item const*, int, int) const
# range [0x080f74b2, 0x080f770f]
080f74b2 +0x000:  push   %ebp
080f74b3 +0x001:  mov    %esp,%ebp
080f74b5 +0x003:  push   %esi
080f74b6 +0x004:  push   %ebx
080f74b7 +0x005:  sub    $0xa0,%esp
080f74bd +0x00b:  lea    -0x4d(%ebp),%eax
080f74c0 +0x00e:  mov    %eax,(%esp)
080f74c3 +0x011:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080f74c8 +0x016:  mov    0x10(%ebp),%eax
080f74cb +0x019:  mov    0x2(%eax),%eax
080f74ce +0x01c:  mov    %eax,%ebx
080f74d0 +0x01e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f74d5 +0x023:  mov    %ebx,0x4(%esp)
080f74d9 +0x027:  mov    %eax,(%esp)
080f74dc +0x02a:  call   083655ac <_ZNK12CDataManager27get_GrowthWeaponEventRewardEi>  ; CDataManager::get_GrowthWeaponEventReward(int) const
080f74e1 +0x02f:  mov    %eax,-0x4b(%ebp)
080f74e4 +0x032:  mov    0x14(%ebp),%eax
080f74e7 +0x035:  mov    %eax,(%esp)
080f74ea +0x038:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
080f74ef +0x03d:  mov    %eax,-0x10(%ebp)
080f74f2 +0x040:  mov    -0x4b(%ebp),%eax
080f74f5 +0x043:  test   %eax,%eax
080f74f7 +0x045:  jne    080f7503 <+0x51>
080f74f9 +0x047:  mov    $0x17,%eax
080f74fe +0x04c:  jmp    080f7705 <+0x253>
080f7503 +0x051:  mov    -0x4b(%ebp),%eax
080f7506 +0x054:  mov    %eax,%ebx
080f7508 +0x056:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f750d +0x05b:  mov    %ebx,0x4(%esp)
080f7511 +0x05f:  mov    %eax,(%esp)
080f7514 +0x062:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080f7519 +0x067:  mov    %eax,-0xc(%ebp)
080f751c +0x06a:  cmpl   $0x0,-0xc(%ebp)
080f7520 +0x06e:  je     080f759f <+0xed>
080f7522 +0x070:  mov    -0xc(%ebp),%eax
080f7525 +0x073:  mov    (%eax),%eax
080f7527 +0x075:  add    $0x8,%eax
080f752a +0x078:  mov    (%eax),%edx
080f752c +0x07a:  lea    -0x4d(%ebp),%eax
080f752f +0x07d:  mov    %eax,0x4(%esp)
080f7533 +0x081:  mov    -0xc(%ebp),%eax
080f7536 +0x084:  mov    %eax,(%esp)
080f7539 +0x087:  call   *%edx
080f753b +0x089:  mov    0x10(%ebp),%eax
080f753e +0x08c:  mov    %eax,(%esp)
080f7541 +0x08f:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
080f7546 +0x094:  movzbl %al,%eax
080f7549 +0x097:  mov    %eax,0x4(%esp)
080f754d +0x09b:  lea    -0x4d(%ebp),%eax
080f7550 +0x09e:  mov    %eax,(%esp)
080f7553 +0x0a1:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
080f7558 +0x0a6:  mov    0x10(%ebp),%eax
080f755b +0x0a9:  mov    %eax,(%esp)
080f755e +0x0ac:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
080f7563 +0x0b1:  mov    %eax,0x4(%esp)
080f7567 +0x0b5:  lea    -0x4d(%ebp),%eax
080f756a +0x0b8:  mov    %eax,(%esp)
080f756d +0x0bb:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
080f7572 +0x0c0:  mov    0x10(%ebp),%eax
080f7575 +0x0c3:  movzbl 0x33(%eax),%eax
080f7579 +0x0c7:  and    $0x1f,%eax
080f757c +0x0ca:  mov    %eax,%edx
080f757e +0x0cc:  and    $0x1f,%edx
080f7581 +0x0cf:  movzbl -0x1a(%ebp),%eax
080f7585 +0x0d3:  and    $0xffffffe0,%eax
080f7588 +0x0d6:  or     %edx,%eax
080f758a +0x0d8:  mov    %al,-0x1a(%ebp)
080f758d +0x0db:  mov    0x10(%ebp),%eax
080f7590 +0x0de:  mov    0x11(%eax),%eax
080f7593 +0x0e1:  mov    %eax,-0x3c(%ebp)
080f7596 +0x0e4:  mov    0x10(%ebp),%eax
080f7599 +0x0e7:  mov    0xd(%eax),%eax
080f759c +0x0ea:  mov    %eax,-0x40(%ebp)
080f759f +0x0ed:  mov    -0x10(%ebp),%ebx
080f75a2 +0x0f0:  mov    0xc(%ebp),%eax
080f75a5 +0x0f3:  mov    %eax,(%esp)
080f75a8 +0x0f6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080f75ad +0x0fb:  movl   $0x1,0x14(%esp)
080f75b5 +0x103:  movl   $0x36,0x10(%esp)
080f75bd +0x10b:  movl   $0x1,0xc(%esp)
080f75c5 +0x113:  mov    0x18(%ebp),%edx
080f75c8 +0x116:  mov    %edx,0x8(%esp)
080f75cc +0x11a:  mov    %ebx,0x4(%esp)
080f75d0 +0x11e:  mov    %eax,(%esp)
080f75d3 +0x121:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
080f75d8 +0x126:  xor    $0x1,%eax
080f75db +0x129:  test   %al,%al
080f75dd +0x12b:  je     080f75e9 <+0x137>
080f75df +0x12d:  mov    $0x11,%eax
080f75e4 +0x132:  jmp    080f7705 <+0x253>
080f75e9 +0x137:  mov    0x14(%ebp),%eax
080f75ec +0x13a:  mov    0x18(%ebp),%edx
080f75ef +0x13d:  mov    %edx,0xc(%esp)
080f75f3 +0x141:  mov    %eax,0x8(%esp)
080f75f7 +0x145:  movl   $0x1,0x4(%esp)
080f75ff +0x14d:  mov    0xc(%ebp),%eax
080f7602 +0x150:  mov    %eax,(%esp)
080f7605 +0x153:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
080f760a +0x158:  mov    -0x10(%ebp),%ebx
080f760d +0x15b:  mov    0xc(%ebp),%eax
080f7610 +0x15e:  mov    %eax,(%esp)
080f7613 +0x161:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080f7618 +0x166:  mov    -0x4d(%ebp),%edx
080f761b +0x169:  mov    %edx,0xc(%esp)
080f761f +0x16d:  mov    -0x49(%ebp),%edx
080f7622 +0x170:  mov    %edx,0x10(%esp)
080f7626 +0x174:  mov    -0x45(%ebp),%edx
080f7629 +0x177:  mov    %edx,0x14(%esp)
080f762d +0x17b:  mov    -0x41(%ebp),%edx
080f7630 +0x17e:  mov    %edx,0x18(%esp)
080f7634 +0x182:  mov    -0x3d(%ebp),%edx
080f7637 +0x185:  mov    %edx,0x1c(%esp)
080f763b +0x189:  mov    -0x39(%ebp),%edx
080f763e +0x18c:  mov    %edx,0x20(%esp)
080f7642 +0x190:  mov    -0x35(%ebp),%edx
080f7645 +0x193:  mov    %edx,0x24(%esp)
080f7649 +0x197:  mov    -0x31(%ebp),%edx
080f764c +0x19a:  mov    %edx,0x28(%esp)
080f7650 +0x19e:  mov    -0x2d(%ebp),%edx
080f7653 +0x1a1:  mov    %edx,0x2c(%esp)
080f7657 +0x1a5:  mov    -0x29(%ebp),%edx
080f765a +0x1a8:  mov    %edx,0x30(%esp)
080f765e +0x1ac:  mov    -0x25(%ebp),%edx
080f7661 +0x1af:  mov    %edx,0x34(%esp)
080f7665 +0x1b3:  mov    -0x21(%ebp),%edx
080f7668 +0x1b6:  mov    %edx,0x38(%esp)
080f766c +0x1ba:  mov    -0x1d(%ebp),%edx
080f766f +0x1bd:  mov    %edx,0x3c(%esp)
080f7673 +0x1c1:  mov    -0x19(%ebp),%edx
080f7676 +0x1c4:  mov    %edx,0x40(%esp)
080f767a +0x1c8:  mov    -0x15(%ebp),%edx
080f767d +0x1cb:  mov    %edx,0x44(%esp)
080f7681 +0x1cf:  movzbl -0x11(%ebp),%edx
080f7685 +0x1d3:  mov    %dl,0x48(%esp)
080f7689 +0x1d7:  mov    0x18(%ebp),%edx
080f768c +0x1da:  mov    %edx,0x8(%esp)
080f7690 +0x1de:  mov    %ebx,0x4(%esp)
080f7694 +0x1e2:  mov    %eax,(%esp)
080f7697 +0x1e5:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
080f769c +0x1ea:  mov    0x14(%ebp),%eax
080f769f +0x1ed:  mov    0x18(%ebp),%edx
080f76a2 +0x1f0:  mov    %edx,0xc(%esp)
080f76a6 +0x1f4:  mov    %eax,0x8(%esp)
080f76aa +0x1f8:  movl   $0x1,0x4(%esp)
080f76b2 +0x200:  mov    0xc(%ebp),%eax
080f76b5 +0x203:  mov    %eax,(%esp)
080f76b8 +0x206:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
080f76bd +0x20b:  mov    -0x4b(%ebp),%eax
080f76c0 +0x20e:  mov    %eax,%esi
080f76c2 +0x210:  mov    0xc(%ebp),%eax
080f76c5 +0x213:  mov    %eax,(%esp)
080f76c8 +0x216:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f76cd +0x21b:  movzwl 0x10(%eax),%eax
080f76d1 +0x21f:  movswl %ax,%ebx
080f76d4 +0x222:  mov    0xc(%ebp),%eax
080f76d7 +0x225:  mov    %eax,(%esp)
080f76da +0x228:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080f76df +0x22d:  mov    %esi,0x8(%esp)
080f76e3 +0x231:  mov    %ebx,0x4(%esp)
080f76e7 +0x235:  mov    %eax,(%esp)
080f76ea +0x238:  call   084497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>  ; DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int)
080f76ef +0x23d:  mov    0xc(%ebp),%eax
080f76f2 +0x240:  mov    %eax,(%esp)
080f76f5 +0x243:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f76fa +0x248:  mov    -0x4b(%ebp),%edx
080f76fd +0x24b:  mov    %edx,0xc(%eax)
080f7700 +0x24e:  mov    $0x0,%eax
080f7705 +0x253:  add    $0xa0,%esp
080f770b +0x259:  pop    %ebx
080f770c +0x25a:  pop    %esi
080f770d +0x25b:  pop    %ebp
080f770e +0x25c:  ret
080f770f +0x25d:  nop
```

## 反编译 C

```c
// GrowthEquipEvent::SendInfinityGrowthWeapon @ 0x80f74b2

/* GrowthEquipEvent::SendInfinityGrowthWeapon(CUser*, Inven_Item const*, int, int) const */

undefined4 __thiscall
GrowthEquipEvent::SendInfinityGrowthWeapon
          (GrowthEquipEvent *this,CUser *param_1,Inven_Item *param_2,int param_3,int param_4)

{
  short sVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDataManager *this_00;
  CInventory *pCVar7;
  int iVar8;
  uint uVar9;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 uStack_4d;
  undefined2 uStack_4b;
  undefined4 local_49;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined4 uStack_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  undefined4 local_14;
  int *local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_51);
  uVar6 = *(undefined4 *)(param_2 + 2);
  iVar4 = G_CDataManager();
  uVar5 = CDataManager::get_GrowthWeaponEventReward(iVar4);
  uStack_4f = (undefined2)uVar5;
  uStack_4d = (undefined2)((uint)uVar5 >> 0x10);
  local_14 = GetInvenTypeFromItemSpace(param_3,uVar6);
  if (CONCAT22(uStack_4d,uStack_4f) == 0) {
    uVar6 = 0x17;
  }
  else {
    iVar4 = CONCAT22(uStack_4d,uStack_4f);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar4);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10,&local_51);
      uVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade((Inven_Item *)&local_51,uVar2);
      iVar4 = Inven_Item::get_add_info(param_2);
      Inven_Item::set_add_info((Inven_Item *)&local_51,iVar4);
      local_21 = CONCAT13(local_21._3_1_ & 0xe0 | (byte)param_2[0x33] & 0x1f,(undefined3)local_21);
      uStack_3d._0_1_ = (undefined1)((uint)*(undefined4 *)(param_2 + 0x11) >> 0x18);
      uStack_45._1_3_ = (undefined3)*(undefined4 *)(param_2 + 0xd);
      uStack_41._0_1_ = (undefined1)((uint)*(undefined4 *)(param_2 + 0xd) >> 0x18);
      uStack_41 = CONCAT31((int3)*(undefined4 *)(param_2 + 0x11),(undefined1)uStack_41);
    }
    uVar6 = local_14;
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar7,uVar6,param_4,1,0x36,1);
    if (cVar3 == '\x01') {
      CUser::SendUpdateItem(param_1,1,param_3,param_4);
      uVar6 = local_14;
      uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar5,uVar6,param_4,CONCAT22(uStack_4f,local_51),CONCAT22(uStack_4b,uStack_4d),
                 local_49,uStack_45,uStack_41,uStack_3d,local_39,local_35,local_31,local_2d,local_29
                 ,local_25,local_21,local_1d,local_19,local_15);
      CUser::SendUpdateItem(param_1,1,param_3,param_4);
      iVar4 = CONCAT22(uStack_4d,uStack_4f);
      iVar8 = CUser::getGrowthWeaponEventdata(param_1);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar9 = CUser::get_acc_id(param_1);
      DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar9,sVar1,iVar4);
      iVar4 = CUser::getGrowthWeaponEventdata(param_1);
      *(uint *)(iVar4 + 0xc) = CONCAT22(uStack_4d,uStack_4f);
      uVar6 = 0;
    }
    else {
      uVar6 = 0x11;
    }
  }
  return uVar6;
}
```
