# process_use_locked_multibox

`_ZN5CUser27process_use_locked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE`

`CUser::process_use_locked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08675ac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08675ac6  _ZN5CUser27process_use_locked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE
#           CUser::process_use_locked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
# range [0x08675ac6, 0x08675d0b]
08675ac6 +0x000:  push   %ebp
08675ac7 +0x001:  mov    %esp,%ebp
08675ac9 +0x003:  push   %esi
08675aca +0x004:  push   %ebx
08675acb +0x005:  sub    $0xc0,%esp
08675ad1 +0x00b:  lea    -0x61(%ebp),%eax
08675ad4 +0x00e:  mov    %eax,(%esp)
08675ad7 +0x011:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08675adc +0x016:  mov    0x8(%ebp),%eax
08675adf +0x019:  mov    %eax,(%esp)
08675ae2 +0x01c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08675ae7 +0x021:  lea    -0xa8(%ebp),%edx
08675aed +0x027:  mov    0xc(%ebp),%ecx
08675af0 +0x02a:  mov    %ecx,0xc(%esp)
08675af4 +0x02e:  movl   $0x1,0x8(%esp)
08675afc +0x036:  mov    %eax,0x4(%esp)
08675b00 +0x03a:  mov    %edx,(%esp)
08675b03 +0x03d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08675b08 +0x042:  sub    $0x4,%esp
08675b0b +0x045:  mov    -0xa8(%ebp),%eax
08675b11 +0x04b:  mov    %eax,-0x61(%ebp)
08675b14 +0x04e:  mov    -0xa4(%ebp),%eax
08675b1a +0x054:  mov    %eax,-0x5d(%ebp)
08675b1d +0x057:  mov    -0xa0(%ebp),%eax
08675b23 +0x05d:  mov    %eax,-0x59(%ebp)
08675b26 +0x060:  mov    -0x9c(%ebp),%eax
08675b2c +0x066:  mov    %eax,-0x55(%ebp)
08675b2f +0x069:  mov    -0x98(%ebp),%eax
08675b35 +0x06f:  mov    %eax,-0x51(%ebp)
08675b38 +0x072:  mov    -0x94(%ebp),%eax
08675b3e +0x078:  mov    %eax,-0x4d(%ebp)
08675b41 +0x07b:  mov    -0x90(%ebp),%eax
08675b47 +0x081:  mov    %eax,-0x49(%ebp)
08675b4a +0x084:  mov    -0x8c(%ebp),%eax
08675b50 +0x08a:  mov    %eax,-0x45(%ebp)
08675b53 +0x08d:  mov    -0x88(%ebp),%eax
08675b59 +0x093:  mov    %eax,-0x41(%ebp)
08675b5c +0x096:  mov    -0x84(%ebp),%eax
08675b62 +0x09c:  mov    %eax,-0x3d(%ebp)
08675b65 +0x09f:  mov    -0x80(%ebp),%eax
08675b68 +0x0a2:  mov    %eax,-0x39(%ebp)
08675b6b +0x0a5:  mov    -0x7c(%ebp),%eax
08675b6e +0x0a8:  mov    %eax,-0x35(%ebp)
08675b71 +0x0ab:  mov    -0x78(%ebp),%eax
08675b74 +0x0ae:  mov    %eax,-0x31(%ebp)
08675b77 +0x0b1:  mov    -0x74(%ebp),%eax
08675b7a +0x0b4:  mov    %eax,-0x2d(%ebp)
08675b7d +0x0b7:  mov    -0x70(%ebp),%eax
08675b80 +0x0ba:  mov    %eax,-0x29(%ebp)
08675b83 +0x0bd:  movzbl -0x6c(%ebp),%eax
08675b87 +0x0c1:  mov    %al,-0x25(%ebp)
08675b8a +0x0c4:  mov    -0x5f(%ebp),%eax
08675b8d +0x0c7:  mov    %eax,%ebx
08675b8f +0x0c9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08675b94 +0x0ce:  mov    %ebx,0x4(%esp)
08675b98 +0x0d2:  mov    %eax,(%esp)
08675b9b +0x0d5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08675ba0 +0x0da:  mov    %eax,-0x18(%ebp)
08675ba3 +0x0dd:  mov    -0x5f(%ebp),%ebx
08675ba6 +0x0e0:  movl   $0x11,0x4(%esp)
08675bae +0x0e8:  mov    0x8(%ebp),%eax
08675bb1 +0x0eb:  mov    %eax,(%esp)
08675bb4 +0x0ee:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08675bb9 +0x0f3:  mov    %ebx,0x4(%esp)
08675bbd +0x0f7:  mov    %eax,(%esp)
08675bc0 +0x0fa:  call   080dd0da <_ZN12CBoosterGage22check_max_booster_gageEm>  ; CBoosterGage::check_max_booster_gage(unsigned long)
08675bc5 +0x0ff:  mov    %al,-0x11(%ebp)
08675bc8 +0x102:  movzbl -0x11(%ebp),%eax
08675bcc +0x106:  mov    %eax,0xc(%esp)
08675bd0 +0x10a:  mov    0x10(%ebp),%eax
08675bd3 +0x10d:  mov    %eax,0x8(%esp)
08675bd7 +0x111:  mov    -0x18(%ebp),%eax
08675bda +0x114:  mov    %eax,0x4(%esp)
08675bde +0x118:  mov    0x8(%ebp),%eax
08675be1 +0x11b:  mov    %eax,(%esp)
08675be4 +0x11e:  call   08675fd2 <_ZN5CUser27check_locked_multibox_errorEPK5CItemib>  ; CUser::check_locked_multibox_error(CItem const*, int, bool)
08675be9 +0x123:  mov    %eax,-0x10(%ebp)
08675bec +0x126:  cmpl   $0x0,-0x10(%ebp)
08675bf0 +0x12a:  je     08675bfa <+0x134>
08675bf2 +0x12c:  mov    -0x10(%ebp),%ebx
08675bf5 +0x12f:  jmp    08675cff <+0x239>
08675bfa +0x134:  lea    -0x24(%ebp),%eax
08675bfd +0x137:  mov    %eax,(%esp)
08675c00 +0x13a:  call   084b4a3c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xaef>  ; global constructors keyed to game_master::CMacro::Reset()+0xaef
08675c05 +0x13f:  lea    -0x24(%ebp),%eax
08675c08 +0x142:  mov    %eax,(%esp)
08675c0b +0x145:  call   084b4aae <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb61>  ; global constructors keyed to game_master::CMacro::Reset()+0xb61
08675c10 +0x14a:  mov    -0x18(%ebp),%eax
08675c13 +0x14d:  lea    -0x24(%ebp),%edx
08675c16 +0x150:  mov    %edx,0x4(%esp)
08675c1a +0x154:  mov    %eax,(%esp)
08675c1d +0x157:  call   0850edda <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
08675c22 +0x15c:  mov    0x14(%ebp),%eax
08675c25 +0x15f:  mov    %eax,0xc(%esp)
08675c29 +0x163:  lea    -0x24(%ebp),%eax
08675c2c +0x166:  mov    %eax,0x8(%esp)
08675c30 +0x16a:  mov    -0x18(%ebp),%eax
08675c33 +0x16d:  mov    %eax,0x4(%esp)
08675c37 +0x171:  mov    0x8(%ebp),%eax
08675c3a +0x174:  mov    %eax,(%esp)
08675c3d +0x177:  call   08676296 <_ZN5CUser27check_insert_lottery_rewardEPK5CItemRSt6vectorISt4pairI10Inven_ItembESaIS6_EES9_>  ; CUser::check_insert_lottery_reward(CItem const*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
08675c42 +0x17c:  mov    %eax,-0x10(%ebp)
08675c45 +0x17f:  cmpl   $0x0,-0x10(%ebp)
08675c49 +0x183:  je     08675c53 <+0x18d>
08675c4b +0x185:  mov    -0x10(%ebp),%ebx
08675c4e +0x188:  jmp    08675cf4 <+0x22e>
08675c53 +0x18d:  mov    -0x18(%ebp),%eax
08675c56 +0x190:  mov    0x1f0(%eax),%eax
08675c5c +0x196:  mov    %eax,-0xc(%ebp)
08675c5f +0x199:  mov    0x8(%ebp),%eax
08675c62 +0x19c:  mov    %eax,(%esp)
08675c65 +0x19f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675c6a +0x1a4:  movl   $0x1,0x14(%esp)
08675c72 +0x1ac:  movl   $0x3,0x10(%esp)
08675c7a +0x1b4:  movl   $0x1,0xc(%esp)
08675c82 +0x1bc:  mov    0xc(%ebp),%edx
08675c85 +0x1bf:  mov    %edx,0x8(%esp)
08675c89 +0x1c3:  movl   $0x1,0x4(%esp)
08675c91 +0x1cb:  mov    %eax,(%esp)
08675c94 +0x1ce:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08675c99 +0x1d3:  mov    0x8(%ebp),%eax
08675c9c +0x1d6:  mov    %eax,(%esp)
08675c9f +0x1d9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675ca4 +0x1de:  movl   $0x1,0x14(%esp)
08675cac +0x1e6:  movl   $0x3,0x10(%esp)
08675cb4 +0x1ee:  mov    -0xc(%ebp),%edx
08675cb7 +0x1f1:  mov    %edx,0xc(%esp)
08675cbb +0x1f5:  mov    0x10(%ebp),%edx
08675cbe +0x1f8:  mov    %edx,0x8(%esp)
08675cc2 +0x1fc:  movl   $0x1,0x4(%esp)
08675cca +0x204:  mov    %eax,(%esp)
08675ccd +0x207:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08675cd2 +0x20c:  mov    $0x0,%ebx
08675cd7 +0x211:  jmp    08675cf4 <+0x22e>
08675cd9 +0x213:  mov    %edx,%ebx
08675cdb +0x215:  mov    %eax,%esi
08675cdd +0x217:  lea    -0x24(%ebp),%eax
08675ce0 +0x21a:  mov    %eax,(%esp)
08675ce3 +0x21d:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675ce8 +0x222:  mov    %esi,%eax
08675cea +0x224:  mov    %ebx,%edx
08675cec +0x226:  mov    %eax,(%esp)
08675cef +0x229:  call   08ae3750 <_Unwind_Resume>
08675cf4 +0x22e:  lea    -0x24(%ebp),%eax
08675cf7 +0x231:  mov    %eax,(%esp)
08675cfa +0x234:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675cff +0x239:  mov    %ebx,%eax
08675d01 +0x23b:  lea    -0x8(%ebp),%esp
08675d04 +0x23e:  add    $0x0,%esp
08675d07 +0x241:  pop    %ebx
08675d08 +0x242:  pop    %esi
08675d09 +0x243:  pop    %ebp
08675d0a +0x244:  ret
08675d0b +0x245:  nop
```

## 反编译 C

```c
// CUser::process_use_locked_multibox @ 0x8675ac6

/* CUser::process_use_locked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >&) */

int __thiscall
CUser::process_use_locked_multibox(CUser *this,int param_1,int param_2,vector *param_3)

{
  ulong uVar1;
  int iVar2;
  CDataManager *this_00;
  CBoosterGage *this_01;
  CInventory *pCVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
  undefined4 local_59;
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
  undefined1 local_29;
  vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> local_28 [12];
  CItem *local_1c;
  undefined1 local_15;
  int local_14;
  undefined4 local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_65);
  iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar4 = 1;
  iVar5 = param_1;
  CInventory::GetInvenSlot((int)local_ac,iVar2);
  local_65 = (undefined2)local_ac._0_4_;
  uStack_63 = SUB42(local_ac._0_4_,2);
  local_61 = (undefined2)local_ac._4_4_;
  uStack_5f = SUB42(local_ac._4_4_,2);
  local_5d = local_a4;
  local_59 = local_a0;
  local_55 = local_9c;
  local_51 = local_98;
  local_4d = local_94;
  local_49 = local_90;
  local_45 = local_8c;
  local_41 = local_88;
  local_3d = local_84;
  local_39 = local_80;
  local_35 = local_7c;
  local_31 = local_78;
  local_2d = local_74;
  local_29 = local_70;
  iVar2 = CONCAT22(local_61,uStack_63);
  this_00 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(this_00,iVar2);
  uVar1 = CONCAT22(local_61,uStack_63);
  this_01 = (CBoosterGage *)GetCharacExpandData(this,0x11,uVar4,iVar5);
  local_15 = CBoosterGage::check_max_booster_gage(this_01,uVar1);
  iVar2 = check_locked_multibox_error(this,local_1c,param_2,(bool)local_15);
  if (iVar2 == 0) {
    local_14 = iVar2;
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::vector
              (local_28);
                    /* try { // try from 08675c0b to 08675cd1 has its CatchHandler @ 08675cd9 */
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::clear
              (local_28);
    CStackableItem::get_multibox_lottery_item((CStackableItem *)local_1c,(vector *)local_28);
    iVar2 = check_insert_lottery_reward(this,local_1c,(vector *)local_28,param_3);
    local_14 = iVar2;
    if (iVar2 == 0) {
      local_10 = *(undefined4 *)(local_1c + 0x1f0);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar3,1,param_1,1,3,1);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar3,1,param_2,local_10,3,1);
      iVar2 = 0;
    }
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::~vector
              (local_28);
  }
  return iVar2;
}
```
