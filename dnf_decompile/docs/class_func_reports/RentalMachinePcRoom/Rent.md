# Rent

`_ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE`

`RentalMachinePcRoom::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x082704e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082704e6  _ZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE
#           RentalMachinePcRoom::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
# range [0x082704e6, 0x0827073d]
082704e6 +0x000:  push   %ebp
082704e7 +0x001:  mov    %esp,%ebp
082704e9 +0x003:  push   %esi
082704ea +0x004:  push   %ebx
082704eb +0x005:  sub    $0x50,%esp
082704ee +0x008:  mov    0xc(%ebp),%eax
082704f1 +0x00b:  mov    %eax,(%esp)
082704f4 +0x00e:  call   08270fea <_ZN7pc_room12IsPcRoomUserER5CUser>  ; pc_room::IsPcRoomUser(CUser&)
082704f9 +0x013:  xor    $0x1,%eax
082704fc +0x016:  test   %al,%al
082704fe +0x018:  je     08270518 <+0x32>
08270500 +0x01a:  mov    0x10(%ebp),%eax
08270503 +0x01d:  movzbl 0x11(%eax),%eax
08270507 +0x021:  xor    $0x1,%eax
0827050a +0x024:  test   %al,%al
0827050c +0x026:  je     08270518 <+0x32>
0827050e +0x028:  mov    $0x7,%ebx
08270513 +0x02d:  jmp    08270731 <+0x24b>
08270518 +0x032:  mov    0xc(%ebp),%eax
0827051b +0x035:  mov    %eax,(%esp)
0827051e +0x038:  call   08271002 <_ZN7pc_room24CheckRentableEnvironmentER5CUser>  ; pc_room::CheckRentableEnvironment(CUser&)
08270523 +0x03d:  xor    $0x1,%eax
08270526 +0x040:  test   %al,%al
08270528 +0x042:  je     08270534 <+0x4e>
0827052a +0x044:  mov    $0x7,%ebx
0827052f +0x049:  jmp    08270731 <+0x24b>
08270534 +0x04e:  mov    0x10(%ebp),%eax
08270537 +0x051:  mov    %eax,0x8(%esp)
0827053b +0x055:  mov    0xc(%ebp),%eax
0827053e +0x058:  mov    %eax,0x4(%esp)
08270542 +0x05c:  mov    0x8(%ebp),%eax
08270545 +0x05f:  mov    %eax,(%esp)
08270548 +0x062:  call   08270d1e <_ZN19RentalMachinePcRoom21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE>  ; RentalMachinePcRoom::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)
0827054d +0x067:  mov    %eax,-0x10(%ebp)
08270550 +0x06a:  cmpl   $0x0,-0x10(%ebp)
08270554 +0x06e:  je     0827055e <+0x78>
08270556 +0x070:  mov    -0x10(%ebp),%ebx
08270559 +0x073:  jmp    08270731 <+0x24b>
0827055e +0x078:  mov    0x14(%ebp),%eax
08270561 +0x07b:  add    $0xc,%eax
08270564 +0x07e:  movl   $0x1,0x8(%esp)
0827056c +0x086:  mov    %eax,0x4(%esp)
08270570 +0x08a:  mov    0xc(%ebp),%eax
08270573 +0x08d:  mov    %eax,(%esp)
08270576 +0x090:  call   08271807 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi>  ; pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&, std::vector<InstanceRentalSystem::DeletedRentItem, std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int)
0827057b +0x095:  mov    0x10(%ebp),%edx
0827057e +0x098:  lea    -0x18(%ebp),%eax
08270581 +0x09b:  mov    %edx,0x4(%esp)
08270585 +0x09f:  mov    %eax,(%esp)
08270588 +0x0a2:  call   0826fb4a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x14c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x14c
0827058d +0x0a7:  sub    $0x4,%esp
08270590 +0x0aa:  jmp    082706fd <+0x217>
08270595 +0x0af:  lea    -0x18(%ebp),%eax
08270598 +0x0b2:  mov    %eax,(%esp)
0827059b +0x0b5:  call   0826fbe4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1e6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1e6
082705a0 +0x0ba:  mov    %eax,-0xc(%ebp)
082705a3 +0x0bd:  lea    -0x30(%ebp),%eax
082705a6 +0x0c0:  mov    %eax,(%esp)
082705a9 +0x0c3:  call   0891548a <_ZN19EventRewardItemInfoC1Ev>  ; EventRewardItemInfo::EventRewardItemInfo()
082705ae +0x0c8:  mov    -0xc(%ebp),%eax
082705b1 +0x0cb:  movzbl 0x1(%eax),%eax
082705b5 +0x0cf:  movsbl %al,%edx
082705b8 +0x0d2:  mov    -0xc(%ebp),%eax
082705bb +0x0d5:  movzbl (%eax),%eax
082705be +0x0d8:  movsbl %al,%eax
082705c1 +0x0db:  movl   $0x1,0x10(%esp)
082705c9 +0x0e3:  lea    -0x30(%ebp),%ecx
082705cc +0x0e6:  mov    %ecx,0xc(%esp)
082705d0 +0x0ea:  mov    %edx,0x8(%esp)
082705d4 +0x0ee:  mov    %eax,0x4(%esp)
082705d8 +0x0f2:  mov    0xc(%ebp),%eax
082705db +0x0f5:  mov    %eax,(%esp)
082705de +0x0f8:  call   08271396 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi>  ; pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int)
082705e3 +0x0fd:  xor    $0x1,%eax
082705e6 +0x100:  test   %al,%al
082705e8 +0x102:  je     08270640 <+0x15a>
082705ea +0x104:  mov    -0xc(%ebp),%eax
082705ed +0x107:  movzbl 0x1(%eax),%eax
082705f1 +0x10b:  movsbl %al,%edx
082705f4 +0x10e:  mov    -0xc(%ebp),%eax
082705f7 +0x111:  movzbl (%eax),%eax
082705fa +0x114:  movsbl %al,%eax
082705fd +0x117:  mov    %edx,0x18(%esp)
08270601 +0x11b:  mov    %eax,0x14(%esp)
08270605 +0x11f:  movl   $"Rent error. GetRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)",0x10(%esp)
0827060d +0x127:  movl   $0xf8,0xc(%esp)
08270615 +0x12f:  movl   $&_ZZN19RentalMachinePcRoom4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputEE19__PRETTY_FUNCTION__,0x8(%esp)
0827061d +0x137:  movl   $"RentalSystem.cpp",0x4(%esp)
08270625 +0x13f:  movl   $0x1,(%esp)
0827062c +0x146:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08270631 +0x14b:  mov    $0x1,%ebx
08270636 +0x150:  mov    $0x0,%esi
0827063b +0x155:  jmp    082706e3 <+0x1fd>
08270640 +0x15a:  mov    -0xc(%ebp),%eax
08270643 +0x15d:  movzbl 0x2(%eax),%eax
08270647 +0x161:  test   %al,%al
08270649 +0x163:  je     08270675 <+0x18f>
0827064b +0x165:  movl   $0x3d,0x10(%esp)
08270653 +0x16d:  mov    0x14(%ebp),%eax
08270656 +0x170:  mov    %eax,0xc(%esp)
0827065a +0x174:  lea    -0x30(%ebp),%eax
0827065d +0x177:  mov    %eax,0x8(%esp)
08270661 +0x17b:  mov    -0xc(%ebp),%eax
08270664 +0x17e:  mov    %eax,0x4(%esp)
08270668 +0x182:  mov    0xc(%ebp),%eax
0827066b +0x185:  mov    %eax,(%esp)
0827066e +0x188:  call   082714c5 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>  ; pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
08270673 +0x18d:  jmp    0827069d <+0x1b7>
08270675 +0x18f:  movl   $0x3d,0x10(%esp)
0827067d +0x197:  mov    0x14(%ebp),%eax
08270680 +0x19a:  mov    %eax,0xc(%esp)
08270684 +0x19e:  lea    -0x30(%ebp),%eax
08270687 +0x1a1:  mov    %eax,0x8(%esp)
0827068b +0x1a5:  mov    -0xc(%ebp),%eax
0827068e +0x1a8:  mov    %eax,0x4(%esp)
08270692 +0x1ac:  mov    0xc(%ebp),%eax
08270695 +0x1af:  mov    %eax,(%esp)
08270698 +0x1b2:  call   08271666 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>  ; pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
0827069d +0x1b7:  mov    0x10(%ebp),%eax
082706a0 +0x1ba:  movzbl 0x10(%eax),%eax
082706a4 +0x1be:  test   %al,%al
082706a6 +0x1c0:  je     082706c1 <+0x1db>
082706a8 +0x1c2:  mov    -0x30(%ebp),%eax
082706ab +0x1c5:  mov    %eax,0x8(%esp)
082706af +0x1c9:  mov    0xc(%ebp),%eax
082706b2 +0x1cc:  mov    %eax,0x4(%esp)
082706b6 +0x1d0:  mov    0x8(%ebp),%eax
082706b9 +0x1d3:  mov    %eax,(%esp)
082706bc +0x1d6:  call   082707c0 <_ZN19RentalMachinePcRoom3logER5CUseri>  ; RentalMachinePcRoom::log(CUser&, int)
082706c1 +0x1db:  mov    $0x1,%esi
082706c6 +0x1e0:  jmp    082706e3 <+0x1fd>
082706c8 +0x1e2:  mov    %edx,%ebx
082706ca +0x1e4:  mov    %eax,%esi
082706cc +0x1e6:  lea    -0x30(%ebp),%eax
082706cf +0x1e9:  mov    %eax,(%esp)
082706d2 +0x1ec:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
082706d7 +0x1f1:  mov    %esi,%eax
082706d9 +0x1f3:  mov    %ebx,%edx
082706db +0x1f5:  mov    %eax,(%esp)
082706de +0x1f8:  call   08ae3750 <_Unwind_Resume>
082706e3 +0x1fd:  lea    -0x30(%ebp),%eax
082706e6 +0x200:  mov    %eax,(%esp)
082706e9 +0x203:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
082706ee +0x208:  test   %esi,%esi
082706f0 +0x20a:  je     08270731 <+0x24b>
082706f2 +0x20c:  lea    -0x18(%ebp),%eax
082706f5 +0x20f:  mov    %eax,(%esp)
082706f8 +0x212:  call   0826fbce <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1d0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1d0
082706fd +0x217:  mov    0x10(%ebp),%edx
08270700 +0x21a:  lea    -0x14(%ebp),%eax
08270703 +0x21d:  mov    %edx,0x4(%esp)
08270707 +0x221:  mov    %eax,(%esp)
0827070a +0x224:  call   0826fb76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x178>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x178
0827070f +0x229:  sub    $0x4,%esp
08270712 +0x22c:  lea    -0x14(%ebp),%eax
08270715 +0x22f:  mov    %eax,0x4(%esp)
08270719 +0x233:  lea    -0x18(%ebp),%eax
0827071c +0x236:  mov    %eax,(%esp)
0827071f +0x239:  call   0826fba2 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1a4>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1a4
08270724 +0x23e:  test   %al,%al
08270726 +0x240:  jne    08270595 <+0xaf>
0827072c +0x246:  mov    $0x0,%ebx
08270731 +0x24b:  mov    %ebx,%eax
08270733 +0x24d:  lea    -0x8(%ebp),%esp
08270736 +0x250:  add    $0x0,%esp
08270739 +0x253:  pop    %ebx
0827073a +0x254:  pop    %esi
0827073b +0x255:  pop    %ebp
0827073c +0x256:  ret
0827073d +0x257:  nop
```

## 反编译 C

```c
// RentalMachinePcRoom::Rent @ 0x82704e6

/* RentalMachinePcRoom::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

int __thiscall
RentalMachinePcRoom::Rent
          (RentalMachinePcRoom *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  char cVar1;
  bool bVar2;
  int unaff_EBX;
  int local_34 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  RentInElem *local_10;
  
  cVar1 = pc_room::IsPcRoomUser(param_1);
  if ((cVar1 == '\x01') || (param_2[0x11] == (RentInput)0x1)) {
    cVar1 = pc_room::CheckRentableEnvironment(param_1);
    if (cVar1 == '\x01') {
      local_14 = CheckupAllRentalItems((CUser *)this,(RentInput *)param_1);
      if (local_14 == 0) {
        pc_room::DeleteAllRentalItemInSameSectionForNewRent(param_1,(vector *)(param_3 + 0xc),1);
        std::
        vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
        ::begin();
        while( true ) {
          std::
          vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
          ::end();
          bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
          if (!bVar2) break;
          local_10 = (RentInElem *)
                     __gnu_cxx::
                     __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
                     ::operator*(local_1c);
          EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_34);
                    /* try { // try from 082705de to 082706c0 has its CatchHandler @ 082706c8 */
          cVar1 = pc_room::GetRentItemInfo
                            (param_1,(char)*local_10,(char)local_10[1],
                             (EventRewardItemInfo *)local_34,1);
          if (cVar1 == '\x01') {
            if (local_10[2] == (RentInElem)0x0) {
              pc_room::ProcessInsertItem
                        (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3d);
            }
            else {
              pc_room::ProcessEquipItem
                        (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3d);
            }
            if (param_2[0x10] != (RentInput)0x0) {
              log(this,param_1,local_34[0]);
            }
            bVar2 = true;
          }
          else {
            LogManager::logFormat
                      (1,"RentalSystem.cpp",
                       "virtual ENUM_ERROR RentalMachinePcRoom::Rent(CUser&, const InstanceRentalSystem::RentInput&, InstanceRentalSystem::RentOutput&)"
                       ,0xf8,
                       "Rent error. GetRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)"
                       ,(int)(char)*local_10,(int)(char)local_10[1]);
            unaff_EBX = 1;
            bVar2 = false;
          }
          EventRewardItemInfo::~EventRewardItemInfo((EventRewardItemInfo *)local_34);
          if (!bVar2) {
            return unaff_EBX;
          }
          __gnu_cxx::
          __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
          ::operator++(local_1c);
        }
        local_14 = 0;
      }
    }
    else {
      local_14 = 7;
    }
  }
  else {
    local_14 = 7;
  }
  return local_14;
}
```
