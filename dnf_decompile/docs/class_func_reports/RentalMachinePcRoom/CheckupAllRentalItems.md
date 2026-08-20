# CheckupAllRentalItems

`_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE`

`RentalMachinePcRoom::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x08270d1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270d1e  _ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE
#           RentalMachinePcRoom::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)
# range [0x08270d1e, 0x08270fe9]
08270d1e +0x000:  push   %ebp
08270d1f +0x001:  mov    %esp,%ebp
08270d21 +0x003:  push   %esi
08270d22 +0x004:  push   %ebx
08270d23 +0x005:  sub    $0xc0,%esp
08270d29 +0x00b:  movl   $0x0,-0x14(%ebp)
08270d30 +0x012:  mov    0x10(%ebp),%edx
08270d33 +0x015:  lea    -0x1c(%ebp),%eax
08270d36 +0x018:  mov    %edx,0x4(%esp)
08270d3a +0x01c:  mov    %eax,(%esp)
08270d3d +0x01f:  call   0826fb4a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x14c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x14c
08270d42 +0x024:  sub    $0x4,%esp
08270d45 +0x027:  jmp    08270f8a <+0x26c>
08270d4a +0x02c:  lea    -0x1c(%ebp),%eax
08270d4d +0x02f:  mov    %eax,(%esp)
08270d50 +0x032:  call   0826fbe4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1e6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1e6
08270d55 +0x037:  mov    %eax,-0x10(%ebp)
08270d58 +0x03a:  lea    -0x34(%ebp),%eax
08270d5b +0x03d:  mov    %eax,(%esp)
08270d5e +0x040:  call   0891548a <_ZN19EventRewardItemInfoC1Ev>  ; EventRewardItemInfo::EventRewardItemInfo()
08270d63 +0x045:  mov    -0x10(%ebp),%eax
08270d66 +0x048:  movzbl 0x1(%eax),%eax
08270d6a +0x04c:  movsbl %al,%edx
08270d6d +0x04f:  mov    -0x10(%ebp),%eax
08270d70 +0x052:  movzbl (%eax),%eax
08270d73 +0x055:  movsbl %al,%eax
08270d76 +0x058:  movl   $0x1,0x10(%esp)
08270d7e +0x060:  lea    -0x34(%ebp),%ecx
08270d81 +0x063:  mov    %ecx,0xc(%esp)
08270d85 +0x067:  mov    %edx,0x8(%esp)
08270d89 +0x06b:  mov    %eax,0x4(%esp)
08270d8d +0x06f:  mov    0xc(%ebp),%eax
08270d90 +0x072:  mov    %eax,(%esp)
08270d93 +0x075:  call   08271396 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi>  ; pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int)
08270d98 +0x07a:  xor    $0x1,%eax
08270d9b +0x07d:  test   %al,%al
08270d9d +0x07f:  je     08270dae <+0x90>
08270d9f +0x081:  mov    $0x1,%ebx
08270da4 +0x086:  mov    $0x0,%esi
08270da9 +0x08b:  jmp    08270f70 <+0x252>
08270dae +0x090:  mov    -0x34(%ebp),%eax
08270db1 +0x093:  mov    %eax,%esi
08270db3 +0x095:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08270db8 +0x09a:  mov    %esi,0x4(%esp)
08270dbc +0x09e:  mov    %eax,(%esp)
08270dbf +0x0a1:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08270dc4 +0x0a6:  mov    %eax,-0xc(%ebp)
08270dc7 +0x0a9:  cmpl   $0x0,-0xc(%ebp)
08270dcb +0x0ad:  jne    08270ddc <+0xbe>
08270dcd +0x0af:  mov    $0x1,%ebx
08270dd2 +0x0b4:  mov    $0x0,%esi
08270dd7 +0x0b9:  jmp    08270f70 <+0x252>
08270ddc +0x0be:  lea    -0x71(%ebp),%eax
08270ddf +0x0c1:  mov    %eax,(%esp)
08270de2 +0x0c4:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08270de7 +0x0c9:  mov    -0x34(%ebp),%eax
08270dea +0x0cc:  mov    %eax,-0x6f(%ebp)
08270ded +0x0cf:  mov    -0xc(%ebp),%eax
08270df0 +0x0d2:  mov    (%eax),%eax
08270df2 +0x0d4:  add    $0x8,%eax
08270df5 +0x0d7:  mov    (%eax),%edx
08270df7 +0x0d9:  lea    -0x71(%ebp),%eax
08270dfa +0x0dc:  mov    %eax,0x4(%esp)
08270dfe +0x0e0:  mov    -0xc(%ebp),%eax
08270e01 +0x0e3:  mov    %eax,(%esp)
08270e04 +0x0e6:  call   *%edx
08270e06 +0x0e8:  mov    -0x10(%ebp),%eax
08270e09 +0x0eb:  movzbl 0x2(%eax),%eax
08270e0d +0x0ef:  test   %al,%al
08270e0f +0x0f1:  je     08270eb3 <+0x195>
08270e15 +0x0f7:  mov    0xc(%ebp),%eax
08270e18 +0x0fa:  mov    %eax,(%esp)
08270e1b +0x0fd:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08270e20 +0x102:  mov    -0x71(%ebp),%edx
08270e23 +0x105:  mov    %edx,0x4(%esp)
08270e27 +0x109:  mov    -0x6d(%ebp),%edx
08270e2a +0x10c:  mov    %edx,0x8(%esp)
08270e2e +0x110:  mov    -0x69(%ebp),%edx
08270e31 +0x113:  mov    %edx,0xc(%esp)
08270e35 +0x117:  mov    -0x65(%ebp),%edx
08270e38 +0x11a:  mov    %edx,0x10(%esp)
08270e3c +0x11e:  mov    -0x61(%ebp),%edx
08270e3f +0x121:  mov    %edx,0x14(%esp)
08270e43 +0x125:  mov    -0x5d(%ebp),%edx
08270e46 +0x128:  mov    %edx,0x18(%esp)
08270e4a +0x12c:  mov    -0x59(%ebp),%edx
08270e4d +0x12f:  mov    %edx,0x1c(%esp)
08270e51 +0x133:  mov    -0x55(%ebp),%edx
08270e54 +0x136:  mov    %edx,0x20(%esp)
08270e58 +0x13a:  mov    -0x51(%ebp),%edx
08270e5b +0x13d:  mov    %edx,0x24(%esp)
08270e5f +0x141:  mov    -0x4d(%ebp),%edx
08270e62 +0x144:  mov    %edx,0x28(%esp)
08270e66 +0x148:  mov    -0x49(%ebp),%edx
08270e69 +0x14b:  mov    %edx,0x2c(%esp)
08270e6d +0x14f:  mov    -0x45(%ebp),%edx
08270e70 +0x152:  mov    %edx,0x30(%esp)
08270e74 +0x156:  mov    -0x41(%ebp),%edx
08270e77 +0x159:  mov    %edx,0x34(%esp)
08270e7b +0x15d:  mov    -0x3d(%ebp),%edx
08270e7e +0x160:  mov    %edx,0x38(%esp)
08270e82 +0x164:  mov    -0x39(%ebp),%edx
08270e85 +0x167:  mov    %edx,0x3c(%esp)
08270e89 +0x16b:  movzbl -0x35(%ebp),%edx
08270e8d +0x16f:  mov    %dl,0x40(%esp)
08270e91 +0x173:  mov    %eax,(%esp)
08270e94 +0x176:  call   08501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>  ; CInventory::tryInsertItemIntoEquipment(Inven_Item) const
08270e99 +0x17b:  shr    $0x1f,%eax
08270e9c +0x17e:  test   %al,%al
08270e9e +0x180:  je     08270f4e <+0x230>
08270ea4 +0x186:  mov    $0xcb,%ebx
08270ea9 +0x18b:  mov    $0x0,%esi
08270eae +0x190:  jmp    08270f70 <+0x252>
08270eb3 +0x195:  mov    0xc(%ebp),%eax
08270eb6 +0x198:  mov    %eax,(%esp)
08270eb9 +0x19b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08270ebe +0x1a0:  mov    -0x71(%ebp),%edx
08270ec1 +0x1a3:  mov    %edx,0x4(%esp)
08270ec5 +0x1a7:  mov    -0x6d(%ebp),%edx
08270ec8 +0x1aa:  mov    %edx,0x8(%esp)
08270ecc +0x1ae:  mov    -0x69(%ebp),%edx
08270ecf +0x1b1:  mov    %edx,0xc(%esp)
08270ed3 +0x1b5:  mov    -0x65(%ebp),%edx
08270ed6 +0x1b8:  mov    %edx,0x10(%esp)
08270eda +0x1bc:  mov    -0x61(%ebp),%edx
08270edd +0x1bf:  mov    %edx,0x14(%esp)
08270ee1 +0x1c3:  mov    -0x5d(%ebp),%edx
08270ee4 +0x1c6:  mov    %edx,0x18(%esp)
08270ee8 +0x1ca:  mov    -0x59(%ebp),%edx
08270eeb +0x1cd:  mov    %edx,0x1c(%esp)
08270eef +0x1d1:  mov    -0x55(%ebp),%edx
08270ef2 +0x1d4:  mov    %edx,0x20(%esp)
08270ef6 +0x1d8:  mov    -0x51(%ebp),%edx
08270ef9 +0x1db:  mov    %edx,0x24(%esp)
08270efd +0x1df:  mov    -0x4d(%ebp),%edx
08270f00 +0x1e2:  mov    %edx,0x28(%esp)
08270f04 +0x1e6:  mov    -0x49(%ebp),%edx
08270f07 +0x1e9:  mov    %edx,0x2c(%esp)
08270f0b +0x1ed:  mov    -0x45(%ebp),%edx
08270f0e +0x1f0:  mov    %edx,0x30(%esp)
08270f12 +0x1f4:  mov    -0x41(%ebp),%edx
08270f15 +0x1f7:  mov    %edx,0x34(%esp)
08270f19 +0x1fb:  mov    -0x3d(%ebp),%edx
08270f1c +0x1fe:  mov    %edx,0x38(%esp)
08270f20 +0x202:  mov    -0x39(%ebp),%edx
08270f23 +0x205:  mov    %edx,0x3c(%esp)
08270f27 +0x209:  movzbl -0x35(%ebp),%edx
08270f2b +0x20d:  mov    %dl,0x40(%esp)
08270f2f +0x211:  mov    %eax,(%esp)
08270f32 +0x214:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08270f37 +0x219:  shr    $0x1f,%eax
08270f3a +0x21c:  test   %al,%al
08270f3c +0x21e:  je     08270f4a <+0x22c>
08270f3e +0x220:  mov    $0xcb,%ebx
08270f43 +0x225:  mov    $0x0,%esi
08270f48 +0x22a:  jmp    08270f70 <+0x252>
08270f4a +0x22c:  addl   $0x1,-0x14(%ebp)
08270f4e +0x230:  mov    $0x1,%esi
08270f53 +0x235:  jmp    08270f70 <+0x252>
08270f55 +0x237:  mov    %edx,%ebx
08270f57 +0x239:  mov    %eax,%esi
08270f59 +0x23b:  lea    -0x34(%ebp),%eax
08270f5c +0x23e:  mov    %eax,(%esp)
08270f5f +0x241:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
08270f64 +0x246:  mov    %esi,%eax
08270f66 +0x248:  mov    %ebx,%edx
08270f68 +0x24a:  mov    %eax,(%esp)
08270f6b +0x24d:  call   08ae3750 <_Unwind_Resume>
08270f70 +0x252:  lea    -0x34(%ebp),%eax
08270f73 +0x255:  mov    %eax,(%esp)
08270f76 +0x258:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
08270f7b +0x25d:  test   %esi,%esi
08270f7d +0x25f:  je     08270fde <+0x2c0>
08270f7f +0x261:  lea    -0x1c(%ebp),%eax
08270f82 +0x264:  mov    %eax,(%esp)
08270f85 +0x267:  call   0826fbce <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1d0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1d0
08270f8a +0x26c:  mov    0x10(%ebp),%edx
08270f8d +0x26f:  lea    -0x18(%ebp),%eax
08270f90 +0x272:  mov    %edx,0x4(%esp)
08270f94 +0x276:  mov    %eax,(%esp)
08270f97 +0x279:  call   0826fb76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x178>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x178
08270f9c +0x27e:  sub    $0x4,%esp
08270f9f +0x281:  lea    -0x18(%ebp),%eax
08270fa2 +0x284:  mov    %eax,0x4(%esp)
08270fa6 +0x288:  lea    -0x1c(%ebp),%eax
08270fa9 +0x28b:  mov    %eax,(%esp)
08270fac +0x28e:  call   0826fba2 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1a4>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1a4
08270fb1 +0x293:  test   %al,%al
08270fb3 +0x295:  jne    08270d4a <+0x2c>
08270fb9 +0x29b:  mov    -0x14(%ebp),%eax
08270fbc +0x29e:  mov    %eax,0x4(%esp)
08270fc0 +0x2a2:  mov    0xc(%ebp),%eax
08270fc3 +0x2a5:  mov    %eax,(%esp)
08270fc6 +0x2a8:  call   0827108c <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri>  ; pc_room::CheckInventoryEmptyCount(CUser&, int)
08270fcb +0x2ad:  xor    $0x1,%eax
08270fce +0x2b0:  test   %al,%al
08270fd0 +0x2b2:  je     08270fd9 <+0x2bb>
08270fd2 +0x2b4:  mov    $0xcb,%ebx
08270fd7 +0x2b9:  jmp    08270fde <+0x2c0>
08270fd9 +0x2bb:  mov    $0x0,%ebx
08270fde +0x2c0:  mov    %ebx,%eax
08270fe0 +0x2c2:  lea    -0x8(%ebp),%esp
08270fe3 +0x2c5:  add    $0x0,%esp
08270fe6 +0x2c8:  pop    %ebx
08270fe7 +0x2c9:  pop    %esi
08270fe8 +0x2ca:  pop    %ebp
08270fe9 +0x2cb:  ret
```

## 反编译 C

```c
// RentalMachinePcRoom::CheckupAllRentalItems @ 0x8270d1e

/* RentalMachinePcRoom::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&) */

undefined4 RentalMachinePcRoom::CheckupAllRentalItems(CUser *param_1,RentInput *param_2)

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
  char *local_14;
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
      cVar2 = pc_room::CheckInventoryEmptyCount((CUser *)param_2,local_18);
      if (cVar2 == '\x01') {
        uVar5 = 0;
      }
      else {
        uVar5 = 0xcb;
      }
      return uVar5;
    }
    local_14 = (char *)__gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
                       ::operator*(local_20);
    EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_38);
                    /* try { // try from 08270d93 to 08270f36 has its CatchHandler @ 08270f55 */
    cVar2 = pc_room::GetRentItemInfo
                      ((CUser *)param_2,*local_14,local_14[1],(EventRewardItemInfo *)local_38,1);
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
        if (local_14[2] == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          iVar4 = CInventory::tryInsertItemIntoInventory
                            (uVar5,CONCAT22(uStack_73,local_75),CONCAT22(uStack_6f,uStack_71),
                             local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,local_51
                             ,local_4d,local_49,local_45,local_41,local_3d,local_39);
          if (-1 < iVar4) {
            local_18 = local_18 + 1;
            goto LAB_08270f4e;
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
LAB_08270f4e:
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
