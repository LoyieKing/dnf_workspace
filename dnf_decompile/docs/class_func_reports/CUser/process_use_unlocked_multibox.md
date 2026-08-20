# process_use_unlocked_multibox

`_ZN5CUser29process_use_unlocked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE`

`CUser::process_use_unlocked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08675d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08675d0c  _ZN5CUser29process_use_unlocked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE
#           CUser::process_use_unlocked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
# range [0x08675d0c, 0x08675edb]
08675d0c +0x000:  push   %ebp
08675d0d +0x001:  mov    %esp,%ebp
08675d0f +0x003:  push   %esi
08675d10 +0x004:  push   %ebx
08675d11 +0x005:  sub    $0xc0,%esp
08675d17 +0x00b:  lea    -0x59(%ebp),%eax
08675d1a +0x00e:  mov    %eax,(%esp)
08675d1d +0x011:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08675d22 +0x016:  mov    0x8(%ebp),%eax
08675d25 +0x019:  mov    %eax,(%esp)
08675d28 +0x01c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08675d2d +0x021:  lea    -0xa8(%ebp),%edx
08675d33 +0x027:  mov    0xc(%ebp),%ecx
08675d36 +0x02a:  mov    %ecx,0xc(%esp)
08675d3a +0x02e:  movl   $0x1,0x8(%esp)
08675d42 +0x036:  mov    %eax,0x4(%esp)
08675d46 +0x03a:  mov    %edx,(%esp)
08675d49 +0x03d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08675d4e +0x042:  sub    $0x4,%esp
08675d51 +0x045:  mov    -0xa8(%ebp),%eax
08675d57 +0x04b:  mov    %eax,-0x59(%ebp)
08675d5a +0x04e:  mov    -0xa4(%ebp),%eax
08675d60 +0x054:  mov    %eax,-0x55(%ebp)
08675d63 +0x057:  mov    -0xa0(%ebp),%eax
08675d69 +0x05d:  mov    %eax,-0x51(%ebp)
08675d6c +0x060:  mov    -0x9c(%ebp),%eax
08675d72 +0x066:  mov    %eax,-0x4d(%ebp)
08675d75 +0x069:  mov    -0x98(%ebp),%eax
08675d7b +0x06f:  mov    %eax,-0x49(%ebp)
08675d7e +0x072:  mov    -0x94(%ebp),%eax
08675d84 +0x078:  mov    %eax,-0x45(%ebp)
08675d87 +0x07b:  mov    -0x90(%ebp),%eax
08675d8d +0x081:  mov    %eax,-0x41(%ebp)
08675d90 +0x084:  mov    -0x8c(%ebp),%eax
08675d96 +0x08a:  mov    %eax,-0x3d(%ebp)
08675d99 +0x08d:  mov    -0x88(%ebp),%eax
08675d9f +0x093:  mov    %eax,-0x39(%ebp)
08675da2 +0x096:  mov    -0x84(%ebp),%eax
08675da8 +0x09c:  mov    %eax,-0x35(%ebp)
08675dab +0x09f:  mov    -0x80(%ebp),%eax
08675dae +0x0a2:  mov    %eax,-0x31(%ebp)
08675db1 +0x0a5:  mov    -0x7c(%ebp),%eax
08675db4 +0x0a8:  mov    %eax,-0x2d(%ebp)
08675db7 +0x0ab:  mov    -0x78(%ebp),%eax
08675dba +0x0ae:  mov    %eax,-0x29(%ebp)
08675dbd +0x0b1:  mov    -0x74(%ebp),%eax
08675dc0 +0x0b4:  mov    %eax,-0x25(%ebp)
08675dc3 +0x0b7:  mov    -0x70(%ebp),%eax
08675dc6 +0x0ba:  mov    %eax,-0x21(%ebp)
08675dc9 +0x0bd:  movzbl -0x6c(%ebp),%eax
08675dcd +0x0c1:  mov    %al,-0x1d(%ebp)
08675dd0 +0x0c4:  mov    -0x57(%ebp),%eax
08675dd3 +0x0c7:  mov    %eax,%ebx
08675dd5 +0x0c9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08675dda +0x0ce:  mov    %ebx,0x4(%esp)
08675dde +0x0d2:  mov    %eax,(%esp)
08675de1 +0x0d5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08675de6 +0x0da:  mov    %eax,-0x10(%ebp)
08675de9 +0x0dd:  mov    0x10(%ebp),%eax
08675dec +0x0e0:  mov    %eax,0x8(%esp)
08675df0 +0x0e4:  mov    -0x10(%ebp),%eax
08675df3 +0x0e7:  mov    %eax,0x4(%esp)
08675df7 +0x0eb:  mov    0x8(%ebp),%eax
08675dfa +0x0ee:  mov    %eax,(%esp)
08675dfd +0x0f1:  call   086761e0 <_ZN5CUser29check_unlocked_multibox_errorEPK5CItemi>  ; CUser::check_unlocked_multibox_error(CItem const*, int)
08675e02 +0x0f6:  mov    %eax,-0xc(%ebp)
08675e05 +0x0f9:  cmpl   $0x0,-0xc(%ebp)
08675e09 +0x0fd:  je     08675e13 <+0x107>
08675e0b +0x0ff:  mov    -0xc(%ebp),%ebx
08675e0e +0x102:  jmp    08675ed0 <+0x1c4>
08675e13 +0x107:  lea    -0x1c(%ebp),%eax
08675e16 +0x10a:  mov    %eax,(%esp)
08675e19 +0x10d:  call   084b4a3c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xaef>  ; global constructors keyed to game_master::CMacro::Reset()+0xaef
08675e1e +0x112:  lea    -0x1c(%ebp),%eax
08675e21 +0x115:  mov    %eax,(%esp)
08675e24 +0x118:  call   084b4aae <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb61>  ; global constructors keyed to game_master::CMacro::Reset()+0xb61
08675e29 +0x11d:  mov    -0x10(%ebp),%eax
08675e2c +0x120:  lea    -0x1c(%ebp),%edx
08675e2f +0x123:  mov    %edx,0x4(%esp)
08675e33 +0x127:  mov    %eax,(%esp)
08675e36 +0x12a:  call   0850edda <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CStackableItem::get_multibox_lottery_item(std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >*)
08675e3b +0x12f:  mov    0x14(%ebp),%eax
08675e3e +0x132:  mov    %eax,0xc(%esp)
08675e42 +0x136:  lea    -0x1c(%ebp),%eax
08675e45 +0x139:  mov    %eax,0x8(%esp)
08675e49 +0x13d:  mov    -0x10(%ebp),%eax
08675e4c +0x140:  mov    %eax,0x4(%esp)
08675e50 +0x144:  mov    0x8(%ebp),%eax
08675e53 +0x147:  mov    %eax,(%esp)
08675e56 +0x14a:  call   08676296 <_ZN5CUser27check_insert_lottery_rewardEPK5CItemRSt6vectorISt4pairI10Inven_ItembESaIS6_EES9_>  ; CUser::check_insert_lottery_reward(CItem const*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
08675e5b +0x14f:  mov    %eax,-0xc(%ebp)
08675e5e +0x152:  cmpl   $0x0,-0xc(%ebp)
08675e62 +0x156:  je     08675e69 <+0x15d>
08675e64 +0x158:  mov    -0xc(%ebp),%ebx
08675e67 +0x15b:  jmp    08675ec5 <+0x1b9>
08675e69 +0x15d:  mov    0x8(%ebp),%eax
08675e6c +0x160:  mov    %eax,(%esp)
08675e6f +0x163:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08675e74 +0x168:  movl   $0x1,0x14(%esp)
08675e7c +0x170:  movl   $0x3,0x10(%esp)
08675e84 +0x178:  movl   $0x1,0xc(%esp)
08675e8c +0x180:  mov    0xc(%ebp),%edx
08675e8f +0x183:  mov    %edx,0x8(%esp)
08675e93 +0x187:  movl   $0x1,0x4(%esp)
08675e9b +0x18f:  mov    %eax,(%esp)
08675e9e +0x192:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08675ea3 +0x197:  mov    $0x0,%ebx
08675ea8 +0x19c:  jmp    08675ec5 <+0x1b9>
08675eaa +0x19e:  mov    %edx,%ebx
08675eac +0x1a0:  mov    %eax,%esi
08675eae +0x1a2:  lea    -0x1c(%ebp),%eax
08675eb1 +0x1a5:  mov    %eax,(%esp)
08675eb4 +0x1a8:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675eb9 +0x1ad:  mov    %esi,%eax
08675ebb +0x1af:  mov    %ebx,%edx
08675ebd +0x1b1:  mov    %eax,(%esp)
08675ec0 +0x1b4:  call   08ae3750 <_Unwind_Resume>
08675ec5 +0x1b9:  lea    -0x1c(%ebp),%eax
08675ec8 +0x1bc:  mov    %eax,(%esp)
08675ecb +0x1bf:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675ed0 +0x1c4:  mov    %ebx,%eax
08675ed2 +0x1c6:  lea    -0x8(%ebp),%esp
08675ed5 +0x1c9:  add    $0x0,%esp
08675ed8 +0x1cc:  pop    %ebx
08675ed9 +0x1cd:  pop    %esi
08675eda +0x1ce:  pop    %ebp
08675edb +0x1cf:  ret
```

## 反编译 C

```c
// CUser::process_use_unlocked_multibox @ 0x8675d0c

/* CUser::process_use_unlocked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > >&) */

int __thiscall
CUser::process_use_unlocked_multibox(CUser *this,int param_1,int param_2,vector *param_3)

{
  int iVar1;
  CDataManager *this_00;
  CInventory *pCVar2;
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
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined2 local_59;
  undefined2 uStack_57;
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
  undefined4 local_25;
  undefined1 local_21;
  vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> local_20 [12];
  CItem *local_14;
  int local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_5d);
  iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenSlot((int)local_ac,iVar1);
  local_5d = (undefined2)local_ac._0_4_;
  uStack_5b = SUB42(local_ac._0_4_,2);
  local_59 = (undefined2)local_ac._4_4_;
  uStack_57 = SUB42(local_ac._4_4_,2);
  local_55 = local_a4;
  local_51 = local_a0;
  local_4d = local_9c;
  local_49 = local_98;
  local_45 = local_94;
  local_41 = local_90;
  local_3d = local_8c;
  local_39 = local_88;
  local_35 = local_84;
  local_31 = local_80;
  local_2d = local_7c;
  local_29 = local_78;
  local_25 = local_74;
  local_21 = local_70;
  iVar1 = CONCAT22(local_59,uStack_5b);
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (CItem *)CDataManager::find_item(this_00,iVar1);
  iVar1 = check_unlocked_multibox_error(this,local_14,param_2);
  if (iVar1 == 0) {
    local_10 = iVar1;
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::vector
              (local_20);
                    /* try { // try from 08675e24 to 08675ea2 has its CatchHandler @ 08675eaa */
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::clear
              (local_20);
    CStackableItem::get_multibox_lottery_item((CStackableItem *)local_14,(vector *)local_20);
    iVar1 = check_insert_lottery_reward(this,local_14,(vector *)local_20,param_3);
    local_10 = iVar1;
    if (iVar1 == 0) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar2,1,param_1,1,3,1);
      iVar1 = 0;
    }
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::~vector
              (local_20);
  }
  return iVar1;
}
```
