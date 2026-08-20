# CheckupAllRentalItems

`_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE`

`RentalMachineDimension::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f52c  _ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE
#           RentalMachineDimension::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)
# range [0x0826f52c, 0x0826f7e3]
0826f52c +0x000:  push   %ebp
0826f52d +0x001:  mov    %esp,%ebp
0826f52f +0x003:  push   %esi
0826f530 +0x004:  push   %ebx
0826f531 +0x005:  sub    $0xc0,%esp
0826f537 +0x00b:  movl   $0x0,-0x14(%ebp)
0826f53e +0x012:  mov    0x10(%ebp),%edx
0826f541 +0x015:  lea    -0x1c(%ebp),%eax
0826f544 +0x018:  mov    %edx,0x4(%esp)
0826f548 +0x01c:  mov    %eax,(%esp)
0826f54b +0x01f:  call   0826fb4a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x14c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x14c
0826f550 +0x024:  sub    $0x4,%esp
0826f553 +0x027:  jmp    0826f783 <+0x257>
0826f558 +0x02c:  lea    -0x1c(%ebp),%eax
0826f55b +0x02f:  mov    %eax,(%esp)
0826f55e +0x032:  call   0826fbe4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1e6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1e6
0826f563 +0x037:  mov    %eax,-0x10(%ebp)
0826f566 +0x03a:  lea    -0x34(%ebp),%eax
0826f569 +0x03d:  mov    %eax,(%esp)
0826f56c +0x040:  call   0891548a <_ZN19EventRewardItemInfoC1Ev>  ; EventRewardItemInfo::EventRewardItemInfo()
0826f571 +0x045:  lea    -0x34(%ebp),%eax
0826f574 +0x048:  mov    %eax,0xc(%esp)
0826f578 +0x04c:  mov    -0x10(%ebp),%eax
0826f57b +0x04f:  mov    %eax,0x8(%esp)
0826f57f +0x053:  mov    0xc(%ebp),%eax
0826f582 +0x056:  mov    %eax,0x4(%esp)
0826f586 +0x05a:  mov    0x8(%ebp),%eax
0826f589 +0x05d:  mov    %eax,(%esp)
0826f58c +0x060:  call   0826f842 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo>  ; RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo&)
0826f591 +0x065:  xor    $0x1,%eax
0826f594 +0x068:  test   %al,%al
0826f596 +0x06a:  je     0826f5a7 <+0x7b>
0826f598 +0x06c:  mov    $0x1,%ebx
0826f59d +0x071:  mov    $0x0,%esi
0826f5a2 +0x076:  jmp    0826f769 <+0x23d>
0826f5a7 +0x07b:  mov    -0x34(%ebp),%eax
0826f5aa +0x07e:  mov    %eax,%esi
0826f5ac +0x080:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0826f5b1 +0x085:  mov    %esi,0x4(%esp)
0826f5b5 +0x089:  mov    %eax,(%esp)
0826f5b8 +0x08c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0826f5bd +0x091:  mov    %eax,-0xc(%ebp)
0826f5c0 +0x094:  cmpl   $0x0,-0xc(%ebp)
0826f5c4 +0x098:  jne    0826f5d5 <+0xa9>
0826f5c6 +0x09a:  mov    $0x1,%ebx
0826f5cb +0x09f:  mov    $0x0,%esi
0826f5d0 +0x0a4:  jmp    0826f769 <+0x23d>
0826f5d5 +0x0a9:  lea    -0x71(%ebp),%eax
0826f5d8 +0x0ac:  mov    %eax,(%esp)
0826f5db +0x0af:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0826f5e0 +0x0b4:  mov    -0x34(%ebp),%eax
0826f5e3 +0x0b7:  mov    %eax,-0x6f(%ebp)
0826f5e6 +0x0ba:  mov    -0xc(%ebp),%eax
0826f5e9 +0x0bd:  mov    (%eax),%eax
0826f5eb +0x0bf:  add    $0x8,%eax
0826f5ee +0x0c2:  mov    (%eax),%edx
0826f5f0 +0x0c4:  lea    -0x71(%ebp),%eax
0826f5f3 +0x0c7:  mov    %eax,0x4(%esp)
0826f5f7 +0x0cb:  mov    -0xc(%ebp),%eax
0826f5fa +0x0ce:  mov    %eax,(%esp)
0826f5fd +0x0d1:  call   *%edx
0826f5ff +0x0d3:  mov    -0x10(%ebp),%eax
0826f602 +0x0d6:  movzbl 0x2(%eax),%eax
0826f606 +0x0da:  test   %al,%al
0826f608 +0x0dc:  je     0826f6ac <+0x180>
0826f60e +0x0e2:  mov    0xc(%ebp),%eax
0826f611 +0x0e5:  mov    %eax,(%esp)
0826f614 +0x0e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0826f619 +0x0ed:  mov    -0x71(%ebp),%edx
0826f61c +0x0f0:  mov    %edx,0x4(%esp)
0826f620 +0x0f4:  mov    -0x6d(%ebp),%edx
0826f623 +0x0f7:  mov    %edx,0x8(%esp)
0826f627 +0x0fb:  mov    -0x69(%ebp),%edx
0826f62a +0x0fe:  mov    %edx,0xc(%esp)
0826f62e +0x102:  mov    -0x65(%ebp),%edx
0826f631 +0x105:  mov    %edx,0x10(%esp)
0826f635 +0x109:  mov    -0x61(%ebp),%edx
0826f638 +0x10c:  mov    %edx,0x14(%esp)
0826f63c +0x110:  mov    -0x5d(%ebp),%edx
0826f63f +0x113:  mov    %edx,0x18(%esp)
0826f643 +0x117:  mov    -0x59(%ebp),%edx
0826f646 +0x11a:  mov    %edx,0x1c(%esp)
0826f64a +0x11e:  mov    -0x55(%ebp),%edx
0826f64d +0x121:  mov    %edx,0x20(%esp)
0826f651 +0x125:  mov    -0x51(%ebp),%edx
0826f654 +0x128:  mov    %edx,0x24(%esp)
0826f658 +0x12c:  mov    -0x4d(%ebp),%edx
0826f65b +0x12f:  mov    %edx,0x28(%esp)
0826f65f +0x133:  mov    -0x49(%ebp),%edx
0826f662 +0x136:  mov    %edx,0x2c(%esp)
0826f666 +0x13a:  mov    -0x45(%ebp),%edx
0826f669 +0x13d:  mov    %edx,0x30(%esp)
0826f66d +0x141:  mov    -0x41(%ebp),%edx
0826f670 +0x144:  mov    %edx,0x34(%esp)
0826f674 +0x148:  mov    -0x3d(%ebp),%edx
0826f677 +0x14b:  mov    %edx,0x38(%esp)
0826f67b +0x14f:  mov    -0x39(%ebp),%edx
0826f67e +0x152:  mov    %edx,0x3c(%esp)
0826f682 +0x156:  movzbl -0x35(%ebp),%edx
0826f686 +0x15a:  mov    %dl,0x40(%esp)
0826f68a +0x15e:  mov    %eax,(%esp)
0826f68d +0x161:  call   08501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>  ; CInventory::tryInsertItemIntoEquipment(Inven_Item) const
0826f692 +0x166:  shr    $0x1f,%eax
0826f695 +0x169:  test   %al,%al
0826f697 +0x16b:  je     0826f747 <+0x21b>
0826f69d +0x171:  mov    $0xcb,%ebx
0826f6a2 +0x176:  mov    $0x0,%esi
0826f6a7 +0x17b:  jmp    0826f769 <+0x23d>
0826f6ac +0x180:  mov    0xc(%ebp),%eax
0826f6af +0x183:  mov    %eax,(%esp)
0826f6b2 +0x186:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0826f6b7 +0x18b:  mov    -0x71(%ebp),%edx
0826f6ba +0x18e:  mov    %edx,0x4(%esp)
0826f6be +0x192:  mov    -0x6d(%ebp),%edx
0826f6c1 +0x195:  mov    %edx,0x8(%esp)
0826f6c5 +0x199:  mov    -0x69(%ebp),%edx
0826f6c8 +0x19c:  mov    %edx,0xc(%esp)
0826f6cc +0x1a0:  mov    -0x65(%ebp),%edx
0826f6cf +0x1a3:  mov    %edx,0x10(%esp)
0826f6d3 +0x1a7:  mov    -0x61(%ebp),%edx
0826f6d6 +0x1aa:  mov    %edx,0x14(%esp)
0826f6da +0x1ae:  mov    -0x5d(%ebp),%edx
0826f6dd +0x1b1:  mov    %edx,0x18(%esp)
0826f6e1 +0x1b5:  mov    -0x59(%ebp),%edx
0826f6e4 +0x1b8:  mov    %edx,0x1c(%esp)
0826f6e8 +0x1bc:  mov    -0x55(%ebp),%edx
0826f6eb +0x1bf:  mov    %edx,0x20(%esp)
0826f6ef +0x1c3:  mov    -0x51(%ebp),%edx
0826f6f2 +0x1c6:  mov    %edx,0x24(%esp)
0826f6f6 +0x1ca:  mov    -0x4d(%ebp),%edx
0826f6f9 +0x1cd:  mov    %edx,0x28(%esp)
0826f6fd +0x1d1:  mov    -0x49(%ebp),%edx
0826f700 +0x1d4:  mov    %edx,0x2c(%esp)
0826f704 +0x1d8:  mov    -0x45(%ebp),%edx
0826f707 +0x1db:  mov    %edx,0x30(%esp)
0826f70b +0x1df:  mov    -0x41(%ebp),%edx
0826f70e +0x1e2:  mov    %edx,0x34(%esp)
0826f712 +0x1e6:  mov    -0x3d(%ebp),%edx
0826f715 +0x1e9:  mov    %edx,0x38(%esp)
0826f719 +0x1ed:  mov    -0x39(%ebp),%edx
0826f71c +0x1f0:  mov    %edx,0x3c(%esp)
0826f720 +0x1f4:  movzbl -0x35(%ebp),%edx
0826f724 +0x1f8:  mov    %dl,0x40(%esp)
0826f728 +0x1fc:  mov    %eax,(%esp)
0826f72b +0x1ff:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
0826f730 +0x204:  shr    $0x1f,%eax
0826f733 +0x207:  test   %al,%al
0826f735 +0x209:  je     0826f743 <+0x217>
0826f737 +0x20b:  mov    $0xcb,%ebx
0826f73c +0x210:  mov    $0x0,%esi
0826f741 +0x215:  jmp    0826f769 <+0x23d>
0826f743 +0x217:  addl   $0x1,-0x14(%ebp)
0826f747 +0x21b:  mov    $0x1,%esi
0826f74c +0x220:  jmp    0826f769 <+0x23d>
0826f74e +0x222:  mov    %edx,%ebx
0826f750 +0x224:  mov    %eax,%esi
0826f752 +0x226:  lea    -0x34(%ebp),%eax
0826f755 +0x229:  mov    %eax,(%esp)
0826f758 +0x22c:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
0826f75d +0x231:  mov    %esi,%eax
0826f75f +0x233:  mov    %ebx,%edx
0826f761 +0x235:  mov    %eax,(%esp)
0826f764 +0x238:  call   08ae3750 <_Unwind_Resume>
0826f769 +0x23d:  lea    -0x34(%ebp),%eax
0826f76c +0x240:  mov    %eax,(%esp)
0826f76f +0x243:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
0826f774 +0x248:  test   %esi,%esi
0826f776 +0x24a:  je     0826f7d7 <+0x2ab>
0826f778 +0x24c:  lea    -0x1c(%ebp),%eax
0826f77b +0x24f:  mov    %eax,(%esp)
0826f77e +0x252:  call   0826fbce <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1d0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1d0
0826f783 +0x257:  mov    0x10(%ebp),%edx
0826f786 +0x25a:  lea    -0x18(%ebp),%eax
0826f789 +0x25d:  mov    %edx,0x4(%esp)
0826f78d +0x261:  mov    %eax,(%esp)
0826f790 +0x264:  call   0826fb76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x178>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x178
0826f795 +0x269:  sub    $0x4,%esp
0826f798 +0x26c:  lea    -0x18(%ebp),%eax
0826f79b +0x26f:  mov    %eax,0x4(%esp)
0826f79f +0x273:  lea    -0x1c(%ebp),%eax
0826f7a2 +0x276:  mov    %eax,(%esp)
0826f7a5 +0x279:  call   0826fba2 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1a4>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1a4
0826f7aa +0x27e:  test   %al,%al
0826f7ac +0x280:  jne    0826f558 <+0x2c>
0826f7b2 +0x286:  mov    -0x14(%ebp),%eax
0826f7b5 +0x289:  mov    %eax,0x4(%esp)
0826f7b9 +0x28d:  mov    0xc(%ebp),%eax
0826f7bc +0x290:  mov    %eax,(%esp)
0826f7bf +0x293:  call   08271062 <_ZN7pc_room33CheckInventoryEquipmentEmptyCountER5CUseri>  ; pc_room::CheckInventoryEquipmentEmptyCount(CUser&, int)
0826f7c4 +0x298:  xor    $0x1,%eax
0826f7c7 +0x29b:  test   %al,%al
0826f7c9 +0x29d:  je     0826f7d2 <+0x2a6>
0826f7cb +0x29f:  mov    $0xcb,%ebx
0826f7d0 +0x2a4:  jmp    0826f7d7 <+0x2ab>
0826f7d2 +0x2a6:  mov    $0x0,%ebx
0826f7d7 +0x2ab:  mov    %ebx,%eax
0826f7d9 +0x2ad:  lea    -0x8(%ebp),%esp
0826f7dc +0x2b0:  add    $0x0,%esp
0826f7df +0x2b3:  pop    %ebx
0826f7e0 +0x2b4:  pop    %esi
0826f7e1 +0x2b5:  pop    %ebp
0826f7e2 +0x2b6:  ret
0826f7e3 +0x2b7:  nop
```

## 反编译 C

```c
// RentalMachineDimension::CheckupAllRentalItems @ 0x826f52c

/* RentalMachineDimension::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&) */

undefined4 RentalMachineDimension::CheckupAllRentalItems(CUser *param_1,RentInput *param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  CInventory *pCVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  undefined2 local_75;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined2 uStack_6f;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined1 local_39;
  int local_38 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  int local_18;
  RentInElem *local_14;
  int *local_10;
  
  local_18 = 0;
  std::
  vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
  ::begin();
  do {
    std::
    vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
    if (!bVar1) {
      cVar2 = pc_room::CheckInventoryEquipmentEmptyCount((CUser *)param_2,local_18);
      if (cVar2 == '\x01') {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xcb;
      }
      return uVar5;
    }
    local_14 = (RentInElem *)
               __gnu_cxx::
               __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
               ::operator*(local_20);
    EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_38);
                    /* try { // try from 0826f58c to 0826f72f has its CatchHandler @ 0826f74e */
    cVar2 = GetRentItemInfo((RentalMachineDimension *)param_1,(CUser *)param_2,local_14,
                            (EventRewardItemInfo *)local_38);
    iVar4 = local_38[0];
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(this,iVar4);
      if (local_10 == (int *)0x0) {
        unaff_EBX = 1;
        bVar1 = false;
      }
      else {
        Inven_Item::Inven_Item((Inven_Item *)&local_75);
        uStack_73 = (undefined2)local_38[0];
        uStack_71 = (undefined2)((uint)local_38[0] >> 0x10);
        (**(code **)(*local_10 + 8))(local_10,&local_75);
        if (local_14[2] == (RentInElem)0x0) {
          uVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar5,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (-1 < iVar4) {
            local_18 = local_18 + 1;
            goto LAB_0826f747;
          }
          unaff_EBX = 0xcb;
          bVar1 = false;
        }
        else {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoEquipment
                            (pCVar3,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (iVar4 < 0) {
            unaff_EBX = 0xcb;
            bVar1 = false;
          }
          else {
LAB_0826f747:
            bVar1 = true;
          }
        }
      }
    }
    else {
      unaff_EBX = 1;
      bVar1 = false;
    }
    EventRewardItemInfo::~EventRewardItemInfo((EventRewardItemInfo *)local_38);
    if (!bVar1) {
      return unaff_EBX;
    }
    __gnu_cxx::
    __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
    ::operator++(local_20);
  } while( true );
}
```
