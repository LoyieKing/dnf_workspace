# ProcessEquipItem

`_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi`

`pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x082714c5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082714c5  _ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi
#           pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
# range [0x082714c5, 0x08271665]
082714c5 +0x000:  push   %ebp
082714c6 +0x001:  mov    %esp,%ebp
082714c8 +0x003:  push   %ebx
082714c9 +0x004:  sub    $0xb4,%esp
082714cf +0x00a:  mov    0x10(%ebp),%eax
082714d2 +0x00d:  mov    (%eax),%eax
082714d4 +0x00f:  mov    %eax,%ebx
082714d6 +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082714db +0x016:  mov    %ebx,0x4(%esp)
082714df +0x01a:  mov    %eax,(%esp)
082714e2 +0x01d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082714e7 +0x022:  mov    %eax,-0xc(%ebp)
082714ea +0x025:  cmpl   $0x0,-0xc(%ebp)
082714ee +0x029:  jne    082714fa <+0x35>
082714f0 +0x02b:  mov    $0x1,%eax
082714f5 +0x030:  jmp    0827165d <+0x198>
082714fa +0x035:  lea    -0x59(%ebp),%eax
082714fd +0x038:  mov    %eax,(%esp)
08271500 +0x03b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08271505 +0x040:  mov    0x10(%ebp),%eax
08271508 +0x043:  mov    (%eax),%eax
0827150a +0x045:  mov    %eax,-0x57(%ebp)
0827150d +0x048:  mov    -0xc(%ebp),%eax
08271510 +0x04b:  mov    (%eax),%eax
08271512 +0x04d:  add    $0x8,%eax
08271515 +0x050:  mov    (%eax),%edx
08271517 +0x052:  lea    -0x59(%ebp),%eax
0827151a +0x055:  mov    %eax,0x4(%esp)
0827151e +0x059:  mov    -0xc(%ebp),%eax
08271521 +0x05c:  mov    %eax,(%esp)
08271524 +0x05f:  call   *%edx
08271526 +0x061:  mov    0xc(%ebp),%eax
08271529 +0x064:  mov    0x4(%eax),%eax
0827152c +0x067:  cmp    $0xffffffff,%eax
0827152f +0x06a:  je     0827153a <+0x75>
08271531 +0x06c:  mov    0xc(%ebp),%eax
08271534 +0x06f:  mov    0x4(%eax),%eax
08271537 +0x072:  mov    %eax,-0x52(%ebp)
0827153a +0x075:  mov    0x10(%ebp),%eax
0827153d +0x078:  movzwl 0x8(%eax),%eax
08271541 +0x07c:  movzbl %al,%eax
08271544 +0x07f:  mov    %eax,0x4(%esp)
08271548 +0x083:  lea    -0x59(%ebp),%eax
0827154b +0x086:  mov    %eax,(%esp)
0827154e +0x089:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08271553 +0x08e:  lea    -0x1c(%ebp),%eax
08271556 +0x091:  mov    %eax,(%esp)
08271559 +0x094:  call   082719f6 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1c
0827155e +0x099:  mov    0x18(%ebp),%ebx
08271561 +0x09c:  mov    0x8(%ebp),%eax
08271564 +0x09f:  mov    %eax,(%esp)
08271567 +0x0a2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0827156c +0x0a7:  movl   $0x0,0x4c(%esp)
08271574 +0x0af:  movl   $0x1,0x48(%esp)
0827157c +0x0b7:  mov    %ebx,0x44(%esp)
08271580 +0x0bb:  mov    -0x59(%ebp),%edx
08271583 +0x0be:  mov    %edx,0x4(%esp)
08271587 +0x0c2:  mov    -0x55(%ebp),%edx
0827158a +0x0c5:  mov    %edx,0x8(%esp)
0827158e +0x0c9:  mov    -0x51(%ebp),%edx
08271591 +0x0cc:  mov    %edx,0xc(%esp)
08271595 +0x0d0:  mov    -0x4d(%ebp),%edx
08271598 +0x0d3:  mov    %edx,0x10(%esp)
0827159c +0x0d7:  mov    -0x49(%ebp),%edx
0827159f +0x0da:  mov    %edx,0x14(%esp)
082715a3 +0x0de:  mov    -0x45(%ebp),%edx
082715a6 +0x0e1:  mov    %edx,0x18(%esp)
082715aa +0x0e5:  mov    -0x41(%ebp),%edx
082715ad +0x0e8:  mov    %edx,0x1c(%esp)
082715b1 +0x0ec:  mov    -0x3d(%ebp),%edx
082715b4 +0x0ef:  mov    %edx,0x20(%esp)
082715b8 +0x0f3:  mov    -0x39(%ebp),%edx
082715bb +0x0f6:  mov    %edx,0x24(%esp)
082715bf +0x0fa:  mov    -0x35(%ebp),%edx
082715c2 +0x0fd:  mov    %edx,0x28(%esp)
082715c6 +0x101:  mov    -0x31(%ebp),%edx
082715c9 +0x104:  mov    %edx,0x2c(%esp)
082715cd +0x108:  mov    -0x2d(%ebp),%edx
082715d0 +0x10b:  mov    %edx,0x30(%esp)
082715d4 +0x10f:  mov    -0x29(%ebp),%edx
082715d7 +0x112:  mov    %edx,0x34(%esp)
082715db +0x116:  mov    -0x25(%ebp),%edx
082715de +0x119:  mov    %edx,0x38(%esp)
082715e2 +0x11d:  mov    -0x21(%ebp),%edx
082715e5 +0x120:  mov    %edx,0x3c(%esp)
082715e9 +0x124:  movzbl -0x1d(%ebp),%edx
082715ed +0x128:  mov    %dl,0x40(%esp)
082715f1 +0x12c:  mov    %eax,(%esp)
082715f4 +0x12f:  call   08502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoEquipment(Inven_Item, eItemAddReason, bool, bool)
082715f9 +0x134:  mov    %ax,-0x1a(%ebp)
082715fd +0x138:  mov    0x10(%ebp),%eax
08271600 +0x13b:  mov    (%eax),%eax
08271602 +0x13d:  mov    %eax,-0x18(%ebp)
08271605 +0x140:  movb   $0x3,-0x1c(%ebp)
08271609 +0x144:  movb   $0x1,-0x12(%ebp)
0827160d +0x148:  mov    0xc(%ebp),%eax
08271610 +0x14b:  movzbl (%eax),%eax
08271613 +0x14e:  mov    %al,-0x14(%ebp)
08271616 +0x151:  mov    0xc(%ebp),%eax
08271619 +0x154:  movzbl 0x1(%eax),%eax
0827161d +0x158:  mov    %al,-0x13(%ebp)
08271620 +0x15b:  mov    0xc(%ebp),%eax
08271623 +0x15e:  movzbl 0x3(%eax),%eax
08271627 +0x162:  mov    %al,-0x11(%ebp)
0827162a +0x165:  mov    0xc(%ebp),%eax
0827162d +0x168:  mov    0x4(%eax),%eax
08271630 +0x16b:  cmp    $0xffffffff,%eax
08271633 +0x16e:  je     08271640 <+0x17b>
08271635 +0x170:  mov    0xc(%ebp),%eax
08271638 +0x173:  mov    0x4(%eax),%eax
0827163b +0x176:  mov    %eax,-0x10(%ebp)
0827163e +0x179:  jmp    08271646 <+0x181>
08271640 +0x17b:  mov    -0x52(%ebp),%eax
08271643 +0x17e:  mov    %eax,-0x10(%ebp)
08271646 +0x181:  mov    0x14(%ebp),%eax
08271649 +0x184:  lea    -0x1c(%ebp),%edx
0827164c +0x187:  mov    %edx,0x4(%esp)
08271650 +0x18b:  mov    %eax,(%esp)
08271653 +0x18e:  call   08271d98 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3be>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3be
08271658 +0x193:  mov    $0x0,%eax
0827165d +0x198:  add    $0xb4,%esp
08271663 +0x19e:  pop    %ebx
08271664 +0x19f:  pop    %ebp
08271665 +0x1a0:  ret
```

## 反编译 C

```c
// pc_room::ProcessEquipItem @ 0x82714c5

/* pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&,
   EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int) */

undefined4
pc_room::ProcessEquipItem
          (CUser *param_1,RentInElem *param_2,EventRewardItemInfo *param_3,RentOutput *param_4,
          int param_5)

{
  int iVar1;
  CDataManager *this;
  undefined4 uVar2;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined1 uStack_52;
  undefined4 local_51;
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
  undefined1 local_21;
  RentalInfo local_20 [2];
  undefined2 local_1e;
  undefined4 local_1c;
  RentInElem local_18;
  RentInElem local_17;
  undefined1 local_16;
  RentInElem local_15;
  undefined4 local_14;
  int *local_10;
  
  iVar1 = *(int *)param_3;
  this = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this,iVar1);
  if (local_10 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_5d);
    uStack_5b = (undefined2)*(undefined4 *)param_3;
    uStack_59 = (undefined2)((uint)*(undefined4 *)param_3 >> 0x10);
    (**(code **)(*local_10 + 8))(local_10,&local_5d);
    if (*(int *)(param_2 + 4) != -1) {
      uStack_56 = *(undefined4 *)(param_2 + 4);
    }
    Inven_Item::SetUpgrade((Inven_Item *)&local_5d,(uchar)*(undefined2 *)(param_3 + 8));
    InstanceRentalSystem::RentalInfo::RentalInfo(local_20);
    uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_1e = CInventory::insertItemIntoEquipment
                         (uVar2,CONCAT22(uStack_5b,local_5d),
                          CONCAT13((undefined1)uStack_56,CONCAT12(uStack_57,uStack_59)),
                          CONCAT13(uStack_52,uStack_56._1_3_),local_51,local_4d,local_49,local_45,
                          local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25,
                          local_21,param_5,1,0);
    local_1c = *(undefined4 *)param_3;
    local_20[0] = (RentalInfo)0x3;
    local_16 = 1;
    local_18 = *param_2;
    local_17 = param_2[1];
    local_15 = param_2[3];
    if (*(int *)(param_2 + 4) == -1) {
      local_14 = uStack_56;
    }
    else {
      local_14 = *(undefined4 *)(param_2 + 4);
    }
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    push_back((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
               *)param_4,local_20);
    uVar2 = 0;
  }
  return uVar2;
}
```
