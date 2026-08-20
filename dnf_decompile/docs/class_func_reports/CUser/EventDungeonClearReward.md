# EventDungeonClearReward

`_ZN5CUser23EventDungeonClearRewardERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::EventDungeonClearReward(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689576` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689576  _ZN5CUser23EventDungeonClearRewardERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::EventDungeonClearReward(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x08689576, 0x08689807]
08689576 +0x000:  push   %ebp
08689577 +0x001:  mov    %esp,%ebp
08689579 +0x003:  sub    $0xb8,%esp
0868957f +0x009:  mov    0xc(%ebp),%eax
08689582 +0x00c:  mov    %eax,(%esp)
08689585 +0x00f:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0868958a +0x014:  mov    %eax,-0x20(%ebp)
0868958d +0x017:  movl   $0x0,-0x1c(%ebp)
08689594 +0x01e:  jmp    086897f1 <+0x27b>
08689599 +0x023:  mov    -0x1c(%ebp),%eax
0868959c +0x026:  mov    %eax,0x4(%esp)
086895a0 +0x02a:  mov    0xc(%ebp),%eax
086895a3 +0x02d:  mov    %eax,(%esp)
086895a6 +0x030:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
086895ab +0x035:  mov    (%eax),%eax
086895ad +0x037:  mov    %eax,-0x18(%ebp)
086895b0 +0x03a:  mov    -0x1c(%ebp),%eax
086895b3 +0x03d:  mov    %eax,0x4(%esp)
086895b7 +0x041:  mov    0xc(%ebp),%eax
086895ba +0x044:  mov    %eax,(%esp)
086895bd +0x047:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
086895c2 +0x04c:  mov    0x4(%eax),%eax
086895c5 +0x04f:  mov    %eax,-0x14(%ebp)
086895c8 +0x052:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086895cd +0x057:  mov    -0x18(%ebp),%edx
086895d0 +0x05a:  mov    %edx,0x4(%esp)
086895d4 +0x05e:  mov    %eax,(%esp)
086895d7 +0x061:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
086895dc +0x066:  mov    %eax,-0x10(%ebp)
086895df +0x069:  cmpl   $0x0,-0x10(%ebp)
086895e3 +0x06d:  je     08689804 <+0x28e>
086895e9 +0x073:  lea    -0x5d(%ebp),%eax
086895ec +0x076:  mov    %eax,(%esp)
086895ef +0x079:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
086895f4 +0x07e:  mov    0x8(%ebp),%eax
086895f7 +0x081:  mov    %eax,(%esp)
086895fa +0x084:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086895ff +0x089:  lea    -0x5d(%ebp),%edx
08689602 +0x08c:  mov    %edx,0x8(%esp)
08689606 +0x090:  mov    -0x18(%ebp),%edx
08689609 +0x093:  mov    %edx,0x4(%esp)
0868960d +0x097:  mov    %eax,(%esp)
08689610 +0x09a:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
08689615 +0x09f:  mov    %eax,-0xc(%ebp)
08689618 +0x0a2:  cmpl   $0x0,-0xc(%ebp)
0868961c +0x0a6:  jns    086896eb <+0x175>
08689622 +0x0ac:  mov    -0x10(%ebp),%eax
08689625 +0x0af:  mov    (%eax),%eax
08689627 +0x0b1:  add    $0x8,%eax
0868962a +0x0b4:  mov    (%eax),%edx
0868962c +0x0b6:  lea    -0x5d(%ebp),%eax
0868962f +0x0b9:  mov    %eax,0x4(%esp)
08689633 +0x0bd:  mov    -0x10(%ebp),%eax
08689636 +0x0c0:  mov    %eax,(%esp)
08689639 +0x0c3:  call   *%edx
0868963b +0x0c5:  mov    -0x14(%ebp),%eax
0868963e +0x0c8:  mov    %eax,-0x56(%ebp)
08689641 +0x0cb:  mov    -0x18(%ebp),%eax
08689644 +0x0ce:  mov    %eax,-0x5b(%ebp)
08689647 +0x0d1:  mov    0x8(%ebp),%eax
0868964a +0x0d4:  mov    %eax,(%esp)
0868964d +0x0d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08689652 +0x0dc:  movl   $0x0,0x4c(%esp)
0868965a +0x0e4:  movl   $0x1,0x48(%esp)
08689662 +0x0ec:  movl   $0xd,0x44(%esp)
0868966a +0x0f4:  mov    -0x5d(%ebp),%edx
0868966d +0x0f7:  mov    %edx,0x4(%esp)
08689671 +0x0fb:  mov    -0x59(%ebp),%edx
08689674 +0x0fe:  mov    %edx,0x8(%esp)
08689678 +0x102:  mov    -0x55(%ebp),%edx
0868967b +0x105:  mov    %edx,0xc(%esp)
0868967f +0x109:  mov    -0x51(%ebp),%edx
08689682 +0x10c:  mov    %edx,0x10(%esp)
08689686 +0x110:  mov    -0x4d(%ebp),%edx
08689689 +0x113:  mov    %edx,0x14(%esp)
0868968d +0x117:  mov    -0x49(%ebp),%edx
08689690 +0x11a:  mov    %edx,0x18(%esp)
08689694 +0x11e:  mov    -0x45(%ebp),%edx
08689697 +0x121:  mov    %edx,0x1c(%esp)
0868969b +0x125:  mov    -0x41(%ebp),%edx
0868969e +0x128:  mov    %edx,0x20(%esp)
086896a2 +0x12c:  mov    -0x3d(%ebp),%edx
086896a5 +0x12f:  mov    %edx,0x24(%esp)
086896a9 +0x133:  mov    -0x39(%ebp),%edx
086896ac +0x136:  mov    %edx,0x28(%esp)
086896b0 +0x13a:  mov    -0x35(%ebp),%edx
086896b3 +0x13d:  mov    %edx,0x2c(%esp)
086896b7 +0x141:  mov    -0x31(%ebp),%edx
086896ba +0x144:  mov    %edx,0x30(%esp)
086896be +0x148:  mov    -0x2d(%ebp),%edx
086896c1 +0x14b:  mov    %edx,0x34(%esp)
086896c5 +0x14f:  mov    -0x29(%ebp),%edx
086896c8 +0x152:  mov    %edx,0x38(%esp)
086896cc +0x156:  mov    -0x25(%ebp),%edx
086896cf +0x159:  mov    %edx,0x3c(%esp)
086896d3 +0x15d:  movzbl -0x21(%ebp),%edx
086896d7 +0x161:  mov    %dl,0x40(%esp)
086896db +0x165:  mov    %eax,(%esp)
086896de +0x168:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
086896e3 +0x16d:  mov    %eax,-0xc(%ebp)
086896e6 +0x170:  jmp    086897c5 <+0x24f>
086896eb +0x175:  lea    -0x5d(%ebp),%eax
086896ee +0x178:  mov    %eax,(%esp)
086896f1 +0x17b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
086896f6 +0x180:  mov    0x8(%ebp),%edx
086896f9 +0x183:  lea    0x79700(%edx),%ecx
086896ff +0x189:  movl   $0xd,0x14(%esp)
08689707 +0x191:  lea    -0x5d(%ebp),%edx
0868970a +0x194:  mov    %edx,0x10(%esp)
0868970e +0x198:  mov    %eax,0xc(%esp)
08689712 +0x19c:  mov    -0x14(%ebp),%eax
08689715 +0x19f:  mov    %eax,0x8(%esp)
08689719 +0x1a3:  movl   $0x1,0x4(%esp)
08689721 +0x1ab:  mov    %ecx,(%esp)
08689724 +0x1ae:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
08689729 +0x1b3:  mov    -0x56(%ebp),%eax
0868972c +0x1b6:  add    -0x14(%ebp),%eax
0868972f +0x1b9:  mov    %eax,-0x56(%ebp)
08689732 +0x1bc:  mov    0x8(%ebp),%eax
08689735 +0x1bf:  mov    %eax,(%esp)
08689738 +0x1c2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0868973d +0x1c7:  mov    -0x5d(%ebp),%edx
08689740 +0x1ca:  mov    %edx,0xc(%esp)
08689744 +0x1ce:  mov    -0x59(%ebp),%edx
08689747 +0x1d1:  mov    %edx,0x10(%esp)
0868974b +0x1d5:  mov    -0x55(%ebp),%edx
0868974e +0x1d8:  mov    %edx,0x14(%esp)
08689752 +0x1dc:  mov    -0x51(%ebp),%edx
08689755 +0x1df:  mov    %edx,0x18(%esp)
08689759 +0x1e3:  mov    -0x4d(%ebp),%edx
0868975c +0x1e6:  mov    %edx,0x1c(%esp)
08689760 +0x1ea:  mov    -0x49(%ebp),%edx
08689763 +0x1ed:  mov    %edx,0x20(%esp)
08689767 +0x1f1:  mov    -0x45(%ebp),%edx
0868976a +0x1f4:  mov    %edx,0x24(%esp)
0868976e +0x1f8:  mov    -0x41(%ebp),%edx
08689771 +0x1fb:  mov    %edx,0x28(%esp)
08689775 +0x1ff:  mov    -0x3d(%ebp),%edx
08689778 +0x202:  mov    %edx,0x2c(%esp)
0868977c +0x206:  mov    -0x39(%ebp),%edx
0868977f +0x209:  mov    %edx,0x30(%esp)
08689783 +0x20d:  mov    -0x35(%ebp),%edx
08689786 +0x210:  mov    %edx,0x34(%esp)
0868978a +0x214:  mov    -0x31(%ebp),%edx
0868978d +0x217:  mov    %edx,0x38(%esp)
08689791 +0x21b:  mov    -0x2d(%ebp),%edx
08689794 +0x21e:  mov    %edx,0x3c(%esp)
08689798 +0x222:  mov    -0x29(%ebp),%edx
0868979b +0x225:  mov    %edx,0x40(%esp)
0868979f +0x229:  mov    -0x25(%ebp),%edx
086897a2 +0x22c:  mov    %edx,0x44(%esp)
086897a6 +0x230:  movzbl -0x21(%ebp),%edx
086897aa +0x234:  mov    %dl,0x48(%esp)
086897ae +0x238:  mov    -0xc(%ebp),%edx
086897b1 +0x23b:  mov    %edx,0x8(%esp)
086897b5 +0x23f:  movl   $0x1,0x4(%esp)
086897bd +0x247:  mov    %eax,(%esp)
086897c0 +0x24a:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
086897c5 +0x24f:  cmpl   $0x0,-0xc(%ebp)
086897c9 +0x253:  js     086897ed <+0x277>
086897cb +0x255:  mov    -0xc(%ebp),%eax
086897ce +0x258:  mov    %eax,0xc(%esp)
086897d2 +0x25c:  movl   $0x0,0x8(%esp)
086897da +0x264:  movl   $0x1,0x4(%esp)
086897e2 +0x26c:  mov    0x8(%ebp),%eax
086897e5 +0x26f:  mov    %eax,(%esp)
086897e8 +0x272:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
086897ed +0x277:  addl   $0x1,-0x1c(%ebp)
086897f1 +0x27b:  mov    -0x1c(%ebp),%eax
086897f4 +0x27e:  cmp    -0x20(%ebp),%eax
086897f7 +0x281:  setl   %al
086897fa +0x284:  test   %al,%al
086897fc +0x286:  jne    08689599 <+0x23>
08689802 +0x28c:  jmp    08689805 <+0x28f>
08689804 +0x28e:  nop
08689805 +0x28f:  leave
08689806 +0x290:  ret
08689807 +0x291:  nop
```

## 反编译 C

```c
// CUser::EventDungeonClearReward @ 0x8689576

/* CUser::EventDungeonClearReward(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

void __thiscall CUser::EventDungeonClearReward(CUser *this,vector *param_1)

{
  int *piVar1;
  int iVar2;
  CDataManager *this_00;
  CInventory *this_01;
  undefined4 uVar3;
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined2 uStack_5d;
  undefined1 uStack_5b;
  int iStack_5a;
  undefined1 uStack_56;
  undefined4 local_55;
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
  undefined1 local_25;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  local_24 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  local_20 = 0;
  while( true ) {
    if (local_24 <= (int)local_20) {
      return;
    }
    piVar1 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               param_1,local_20);
    local_1c = *piVar1;
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                       local_20);
    local_18 = *(int *)(iVar2 + 4);
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(this_00,local_1c);
    if (local_14 == (int *)0x0) break;
    Inven_Item::Inven_Item((Inven_Item *)&local_61);
    this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    local_10 = CInventory::GetInvenData(this_01,local_1c,(Inven_Item *)&local_61);
    if (local_10 < 0) {
      (**(code **)(*local_14 + 8))(local_14,&local_61);
      iStack_5a = local_18;
      uStack_5f = (undefined2)local_1c;
      uStack_5d = (undefined2)((uint)local_1c >> 0x10);
      uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar3,CONCAT22(uStack_5f,local_61),
                            CONCAT13((undefined1)iStack_5a,CONCAT12(uStack_5b,uStack_5d)),
                            CONCAT13(uStack_56,iStack_5a._1_3_),local_55,local_51,local_4d,local_49,
                            local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,
                            local_25,0xd,1,0);
    }
    else {
      uVar3 = Inven_Item::get_add_info((Inven_Item *)&local_61);
      cUserHistoryLog::ItemAdd((cUserHistoryLog *)(this + 0x79700),1,local_18,uVar3,&local_61,0xd);
      iStack_5a = iStack_5a + local_18;
      uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::update_item
                (uVar3,1,local_10,CONCAT22(uStack_5f,local_61),
                 CONCAT13((undefined1)iStack_5a,CONCAT12(uStack_5b,uStack_5d)),
                 CONCAT13(uStack_56,iStack_5a._1_3_),local_55,local_51,local_4d,local_49,local_45,
                 local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25);
    }
    if (-1 < local_10) {
      SendUpdateItemList(this,1,0,local_10);
    }
    local_20 = local_20 + 1;
  }
  return;
}
```
