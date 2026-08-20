# ProcessInsertItem

`_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi`

`pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271666` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271666  _ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi
#           pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
# range [0x08271666, 0x08271806]
08271666 +0x000:  push   %ebp
08271667 +0x001:  mov    %esp,%ebp
08271669 +0x003:  push   %ebx
0827166a +0x004:  sub    $0xb4,%esp
08271670 +0x00a:  mov    0x10(%ebp),%eax
08271673 +0x00d:  mov    (%eax),%eax
08271675 +0x00f:  mov    %eax,%ebx
08271677 +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827167c +0x016:  mov    %ebx,0x4(%esp)
08271680 +0x01a:  mov    %eax,(%esp)
08271683 +0x01d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08271688 +0x022:  mov    %eax,-0xc(%ebp)
0827168b +0x025:  cmpl   $0x0,-0xc(%ebp)
0827168f +0x029:  jne    0827169b <+0x35>
08271691 +0x02b:  mov    $0x1,%eax
08271696 +0x030:  jmp    082717fe <+0x198>
0827169b +0x035:  lea    -0x59(%ebp),%eax
0827169e +0x038:  mov    %eax,(%esp)
082716a1 +0x03b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
082716a6 +0x040:  mov    0x10(%ebp),%eax
082716a9 +0x043:  mov    (%eax),%eax
082716ab +0x045:  mov    %eax,-0x57(%ebp)
082716ae +0x048:  mov    -0xc(%ebp),%eax
082716b1 +0x04b:  mov    (%eax),%eax
082716b3 +0x04d:  add    $0x8,%eax
082716b6 +0x050:  mov    (%eax),%edx
082716b8 +0x052:  lea    -0x59(%ebp),%eax
082716bb +0x055:  mov    %eax,0x4(%esp)
082716bf +0x059:  mov    -0xc(%ebp),%eax
082716c2 +0x05c:  mov    %eax,(%esp)
082716c5 +0x05f:  call   *%edx
082716c7 +0x061:  mov    0x10(%ebp),%eax
082716ca +0x064:  movzwl 0x8(%eax),%eax
082716ce +0x068:  movzbl %al,%eax
082716d1 +0x06b:  mov    %eax,0x4(%esp)
082716d5 +0x06f:  lea    -0x59(%ebp),%eax
082716d8 +0x072:  mov    %eax,(%esp)
082716db +0x075:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
082716e0 +0x07a:  mov    0xc(%ebp),%eax
082716e3 +0x07d:  mov    0x4(%eax),%eax
082716e6 +0x080:  cmp    $0xffffffff,%eax
082716e9 +0x083:  je     082716f4 <+0x8e>
082716eb +0x085:  mov    0xc(%ebp),%eax
082716ee +0x088:  mov    0x4(%eax),%eax
082716f1 +0x08b:  mov    %eax,-0x52(%ebp)
082716f4 +0x08e:  lea    -0x1c(%ebp),%eax
082716f7 +0x091:  mov    %eax,(%esp)
082716fa +0x094:  call   082719f6 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1c
082716ff +0x099:  mov    0x18(%ebp),%ebx
08271702 +0x09c:  mov    0x8(%ebp),%eax
08271705 +0x09f:  mov    %eax,(%esp)
08271708 +0x0a2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0827170d +0x0a7:  movl   $0x0,0x4c(%esp)
08271715 +0x0af:  movl   $0x1,0x48(%esp)
0827171d +0x0b7:  mov    %ebx,0x44(%esp)
08271721 +0x0bb:  mov    -0x59(%ebp),%edx
08271724 +0x0be:  mov    %edx,0x4(%esp)
08271728 +0x0c2:  mov    -0x55(%ebp),%edx
0827172b +0x0c5:  mov    %edx,0x8(%esp)
0827172f +0x0c9:  mov    -0x51(%ebp),%edx
08271732 +0x0cc:  mov    %edx,0xc(%esp)
08271736 +0x0d0:  mov    -0x4d(%ebp),%edx
08271739 +0x0d3:  mov    %edx,0x10(%esp)
0827173d +0x0d7:  mov    -0x49(%ebp),%edx
08271740 +0x0da:  mov    %edx,0x14(%esp)
08271744 +0x0de:  mov    -0x45(%ebp),%edx
08271747 +0x0e1:  mov    %edx,0x18(%esp)
0827174b +0x0e5:  mov    -0x41(%ebp),%edx
0827174e +0x0e8:  mov    %edx,0x1c(%esp)
08271752 +0x0ec:  mov    -0x3d(%ebp),%edx
08271755 +0x0ef:  mov    %edx,0x20(%esp)
08271759 +0x0f3:  mov    -0x39(%ebp),%edx
0827175c +0x0f6:  mov    %edx,0x24(%esp)
08271760 +0x0fa:  mov    -0x35(%ebp),%edx
08271763 +0x0fd:  mov    %edx,0x28(%esp)
08271767 +0x101:  mov    -0x31(%ebp),%edx
0827176a +0x104:  mov    %edx,0x2c(%esp)
0827176e +0x108:  mov    -0x2d(%ebp),%edx
08271771 +0x10b:  mov    %edx,0x30(%esp)
08271775 +0x10f:  mov    -0x29(%ebp),%edx
08271778 +0x112:  mov    %edx,0x34(%esp)
0827177c +0x116:  mov    -0x25(%ebp),%edx
0827177f +0x119:  mov    %edx,0x38(%esp)
08271783 +0x11d:  mov    -0x21(%ebp),%edx
08271786 +0x120:  mov    %edx,0x3c(%esp)
0827178a +0x124:  movzbl -0x1d(%ebp),%edx
0827178e +0x128:  mov    %dl,0x40(%esp)
08271792 +0x12c:  mov    %eax,(%esp)
08271795 +0x12f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0827179a +0x134:  mov    %ax,-0x1a(%ebp)
0827179e +0x138:  mov    0x10(%ebp),%eax
082717a1 +0x13b:  mov    (%eax),%eax
082717a3 +0x13d:  mov    %eax,-0x18(%ebp)
082717a6 +0x140:  movb   $0x0,-0x1c(%ebp)
082717aa +0x144:  movb   $0x0,-0x12(%ebp)
082717ae +0x148:  mov    0xc(%ebp),%eax
082717b1 +0x14b:  movzbl (%eax),%eax
082717b4 +0x14e:  mov    %al,-0x14(%ebp)
082717b7 +0x151:  mov    0xc(%ebp),%eax
082717ba +0x154:  movzbl 0x1(%eax),%eax
082717be +0x158:  mov    %al,-0x13(%ebp)
082717c1 +0x15b:  mov    0xc(%ebp),%eax
082717c4 +0x15e:  movzbl 0x3(%eax),%eax
082717c8 +0x162:  mov    %al,-0x11(%ebp)
082717cb +0x165:  mov    0xc(%ebp),%eax
082717ce +0x168:  mov    0x4(%eax),%eax
082717d1 +0x16b:  cmp    $0xffffffff,%eax
082717d4 +0x16e:  je     082717e1 <+0x17b>
082717d6 +0x170:  mov    0xc(%ebp),%eax
082717d9 +0x173:  mov    0x4(%eax),%eax
082717dc +0x176:  mov    %eax,-0x10(%ebp)
082717df +0x179:  jmp    082717e7 <+0x181>
082717e1 +0x17b:  mov    -0x52(%ebp),%eax
082717e4 +0x17e:  mov    %eax,-0x10(%ebp)
082717e7 +0x181:  mov    0x14(%ebp),%eax
082717ea +0x184:  lea    -0x1c(%ebp),%edx
082717ed +0x187:  mov    %edx,0x4(%esp)
082717f1 +0x18b:  mov    %eax,(%esp)
082717f4 +0x18e:  call   08271d98 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3be>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3be
082717f9 +0x193:  mov    $0x0,%eax
082717fe +0x198:  add    $0xb4,%esp
08271804 +0x19e:  pop    %ebx
08271805 +0x19f:  pop    %ebp
08271806 +0x1a0:  ret
```

## 反编译 C

```c
// pc_room::ProcessInsertItem @ 0x8271666

/* pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&,
   EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int) */

undefined4
pc_room::ProcessInsertItem
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
    Inven_Item::SetUpgrade((Inven_Item *)&local_5d,(uchar)*(undefined2 *)(param_3 + 8));
    if (*(int *)(param_2 + 4) != -1) {
      uStack_56 = *(undefined4 *)(param_2 + 4);
    }
    InstanceRentalSystem::RentalInfo::RentalInfo(local_20);
    uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_1e = CInventory::insertItemIntoInventory
                         (uVar2,CONCAT22(uStack_5b,local_5d),
                          CONCAT13((undefined1)uStack_56,CONCAT12(uStack_57,uStack_59)),
                          CONCAT13(uStack_52,uStack_56._1_3_),local_51,local_4d,local_49,local_45,
                          local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25,
                          local_21,param_5,1,0);
    local_1c = *(undefined4 *)param_3;
    local_20[0] = (RentalInfo)0x0;
    local_16 = 0;
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
