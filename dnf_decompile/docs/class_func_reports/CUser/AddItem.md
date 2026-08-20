# AddItem

`_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi`

`CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b6d4  _ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi
#           CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int)
# range [0x0867b6d4, 0x0867b8fd]
0867b6d4 +0x000:  push   %ebp
0867b6d5 +0x001:  mov    %esp,%ebp
0867b6d7 +0x003:  push   %edi
0867b6d8 +0x004:  push   %esi
0867b6d9 +0x005:  push   %ebx
0867b6da +0x006:  sub    $0xac,%esp
0867b6e0 +0x00c:  mov    0x8(%ebp),%eax
0867b6e3 +0x00f:  mov    %eax,(%esp)
0867b6e6 +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867b6eb +0x017:  test   %eax,%eax
0867b6ed +0x019:  sete   %al
0867b6f0 +0x01c:  test   %al,%al
0867b6f2 +0x01e:  je     0867b6fe <+0x2a>
0867b6f4 +0x020:  mov    $0xffffffff,%eax
0867b6f9 +0x025:  jmp    0867b8f2 <+0x21e>
0867b6fe +0x02a:  mov    0x8(%ebp),%eax
0867b701 +0x02d:  mov    %eax,(%esp)
0867b704 +0x030:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0867b709 +0x035:  test   %al,%al
0867b70b +0x037:  je     0867b717 <+0x43>
0867b70d +0x039:  mov    $0xffffffff,%eax
0867b712 +0x03e:  jmp    0867b8f2 <+0x21e>
0867b717 +0x043:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867b71c +0x048:  mov    0xc(%ebp),%edx
0867b71f +0x04b:  mov    %edx,0x4(%esp)
0867b723 +0x04f:  mov    %eax,(%esp)
0867b726 +0x052:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0867b72b +0x057:  mov    %eax,-0x20(%ebp)
0867b72e +0x05a:  cmpl   $0x0,-0x20(%ebp)
0867b732 +0x05e:  jne    0867b73e <+0x6a>
0867b734 +0x060:  mov    $0xffffffff,%eax
0867b739 +0x065:  jmp    0867b8f2 <+0x21e>
0867b73e +0x06a:  cmpl   $0x0,0x10(%ebp)
0867b742 +0x06e:  jns    0867b74e <+0x7a>
0867b744 +0x070:  mov    $0xffffffff,%eax
0867b749 +0x075:  jmp    0867b8f2 <+0x21e>
0867b74e +0x07a:  lea    -0x5d(%ebp),%eax
0867b751 +0x07d:  mov    %eax,(%esp)
0867b754 +0x080:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0867b759 +0x085:  mov    0xc(%ebp),%eax
0867b75c +0x088:  mov    %eax,-0x5b(%ebp)
0867b75f +0x08b:  mov    -0x20(%ebp),%eax
0867b762 +0x08e:  mov    (%eax),%eax
0867b764 +0x090:  add    $0x8,%eax
0867b767 +0x093:  mov    (%eax),%edx
0867b769 +0x095:  lea    -0x5d(%ebp),%eax
0867b76c +0x098:  mov    %eax,0x4(%esp)
0867b770 +0x09c:  mov    -0x20(%ebp),%eax
0867b773 +0x09f:  mov    %eax,(%esp)
0867b776 +0x0a2:  call   *%edx
0867b778 +0x0a4:  mov    -0x20(%ebp),%eax
0867b77b +0x0a7:  mov    %eax,(%esp)
0867b77e +0x0aa:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0867b783 +0x0af:  test   %al,%al
0867b785 +0x0b1:  je     0867b799 <+0xc5>
0867b787 +0x0b3:  mov    0x10(%ebp),%eax
0867b78a +0x0b6:  mov    %eax,0x4(%esp)
0867b78e +0x0ba:  lea    -0x5d(%ebp),%eax
0867b791 +0x0bd:  mov    %eax,(%esp)
0867b794 +0x0c0:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0867b799 +0x0c5:  mov    0x18(%ebp),%eax
0867b79c +0x0c8:  movl   $0x0,(%eax)
0867b7a2 +0x0ce:  lea    -0x5d(%ebp),%eax
0867b7a5 +0x0d1:  mov    %eax,(%esp)
0867b7a8 +0x0d4:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
0867b7ad +0x0d9:  test   %al,%al
0867b7af +0x0db:  je     0867b7ba <+0xe6>
0867b7b1 +0x0dd:  mov    0x18(%ebp),%eax
0867b7b4 +0x0e0:  movl   $0x7,(%eax)
0867b7ba +0x0e6:  cmpl   $0x0,0x1c(%ebp)
0867b7be +0x0ea:  jle    0867b7e3 <+0x10f>
0867b7c0 +0x0ec:  cmpl   $0x1f,0x1c(%ebp)
0867b7c4 +0x0f0:  jg     0867b7e3 <+0x10f>
0867b7c6 +0x0f2:  movzbl -0x5c(%ebp),%eax
0867b7ca +0x0f6:  cmp    $0x1,%al
0867b7cc +0x0f8:  jne    0867b7e3 <+0x10f>
0867b7ce +0x0fa:  mov    0x1c(%ebp),%eax
0867b7d1 +0x0fd:  movzbl %al,%eax
0867b7d4 +0x100:  mov    %eax,0x4(%esp)
0867b7d8 +0x104:  lea    -0x5d(%ebp),%eax
0867b7db +0x107:  mov    %eax,(%esp)
0867b7de +0x10a:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
0867b7e3 +0x10f:  mov    0x8(%ebp),%eax
0867b7e6 +0x112:  mov    %eax,(%esp)
0867b7e9 +0x115:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867b7ee +0x11a:  movl   $0x1,0x4c(%esp)
0867b7f6 +0x122:  movl   $0x1,0x48(%esp)
0867b7fe +0x12a:  mov    0x14(%ebp),%edx
0867b801 +0x12d:  mov    %edx,0x44(%esp)
0867b805 +0x131:  mov    -0x5d(%ebp),%edx
0867b808 +0x134:  mov    %edx,0x4(%esp)
0867b80c +0x138:  mov    -0x59(%ebp),%edx
0867b80f +0x13b:  mov    %edx,0x8(%esp)
0867b813 +0x13f:  mov    -0x55(%ebp),%edx
0867b816 +0x142:  mov    %edx,0xc(%esp)
0867b81a +0x146:  mov    -0x51(%ebp),%edx
0867b81d +0x149:  mov    %edx,0x10(%esp)
0867b821 +0x14d:  mov    -0x4d(%ebp),%edx
0867b824 +0x150:  mov    %edx,0x14(%esp)
0867b828 +0x154:  mov    -0x49(%ebp),%edx
0867b82b +0x157:  mov    %edx,0x18(%esp)
0867b82f +0x15b:  mov    -0x45(%ebp),%edx
0867b832 +0x15e:  mov    %edx,0x1c(%esp)
0867b836 +0x162:  mov    -0x41(%ebp),%edx
0867b839 +0x165:  mov    %edx,0x20(%esp)
0867b83d +0x169:  mov    -0x3d(%ebp),%edx
0867b840 +0x16c:  mov    %edx,0x24(%esp)
0867b844 +0x170:  mov    -0x39(%ebp),%edx
0867b847 +0x173:  mov    %edx,0x28(%esp)
0867b84b +0x177:  mov    -0x35(%ebp),%edx
0867b84e +0x17a:  mov    %edx,0x2c(%esp)
0867b852 +0x17e:  mov    -0x31(%ebp),%edx
0867b855 +0x181:  mov    %edx,0x30(%esp)
0867b859 +0x185:  mov    -0x2d(%ebp),%edx
0867b85c +0x188:  mov    %edx,0x34(%esp)
0867b860 +0x18c:  mov    -0x29(%ebp),%edx
0867b863 +0x18f:  mov    %edx,0x38(%esp)
0867b867 +0x193:  mov    -0x25(%ebp),%edx
0867b86a +0x196:  mov    %edx,0x3c(%esp)
0867b86e +0x19a:  movzbl -0x21(%ebp),%edx
0867b872 +0x19e:  mov    %dl,0x40(%esp)
0867b876 +0x1a2:  mov    %eax,(%esp)
0867b879 +0x1a5:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0867b87e +0x1aa:  mov    %eax,-0x1c(%ebp)
0867b881 +0x1ad:  cmpl   $0x0,-0x1c(%ebp)
0867b885 +0x1b1:  jns    0867b88e <+0x1ba>
0867b887 +0x1b3:  mov    $0xffffffff,%eax
0867b88c +0x1b8:  jmp    0867b8f2 <+0x21e>
0867b88e +0x1ba:  lea    -0x5d(%ebp),%eax
0867b891 +0x1bd:  mov    %eax,(%esp)
0867b894 +0x1c0:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
0867b899 +0x1c5:  test   %al,%al
0867b89b +0x1c7:  je     0867b8ef <+0x21b>
0867b89d +0x1c9:  mov    -0x20(%ebp),%eax
0867b8a0 +0x1cc:  mov    %eax,(%esp)
0867b8a3 +0x1cf:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0867b8a8 +0x1d4:  mov    %eax,%esi
0867b8aa +0x1d6:  mov    -0x20(%ebp),%eax
0867b8ad +0x1d9:  mov    %eax,(%esp)
0867b8b0 +0x1dc:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0867b8b5 +0x1e1:  mov    %eax,%ebx
0867b8b7 +0x1e3:  mov    0x14(%ebp),%edi
0867b8ba +0x1e6:  mov    0x8(%ebp),%eax
0867b8bd +0x1e9:  mov    %eax,(%esp)
0867b8c0 +0x1ec:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0867b8c5 +0x1f1:  mov    %eax,(%esp)
0867b8c8 +0x1f4:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0867b8cd +0x1f9:  mov    %esi,0x14(%esp)
0867b8d1 +0x1fd:  mov    %ebx,0x10(%esp)
0867b8d5 +0x201:  mov    %edi,0xc(%esp)
0867b8d9 +0x205:  mov    -0x1c(%ebp),%edx
0867b8dc +0x208:  mov    %edx,0x8(%esp)
0867b8e0 +0x20c:  lea    -0x5d(%ebp),%edx
0867b8e3 +0x20f:  mov    %edx,0x4(%esp)
0867b8e7 +0x213:  mov    %eax,(%esp)
0867b8ea +0x216:  call   0833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::InsertCreatureItem(Inven_Item*, int, int, int, int)
0867b8ef +0x21b:  mov    -0x1c(%ebp),%eax
0867b8f2 +0x21e:  add    $0xac,%esp
0867b8f8 +0x224:  pop    %ebx
0867b8f9 +0x225:  pop    %esi
0867b8fa +0x226:  pop    %edi
0867b8fb +0x227:  pop    %ebp
0867b8fc +0x228:  ret
0867b8fd +0x229:  nop
```

## 反编译 C

```c
// CUser::AddItem @ 0x867b6d4

/* CUser::AddItem(int, int, eItemAddReason, ENUM_ITEMSPACE&, int) */

int __thiscall
CUser::AddItem(CUser *this,int param_1,int param_2,int param_4,undefined4 *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  int iVar4;
  CInventory *this_01;
  CCreatureMgr *this_02;
  Inven_Item local_61;
  char cStack_60;
  undefined2 uStack_5f;
  undefined2 uStack_5d;
  undefined2 uStack_5b;
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
  undefined4 local_29;
  undefined1 local_25;
  CItem *local_24;
  int local_20;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    cVar1 = CheckInTrade(this);
    if (cVar1 == '\0') {
      this_00 = (CDataManager *)G_CDataManager();
      local_24 = (CItem *)CDataManager::find_item(this_00,param_1);
      if (local_24 == (CItem *)0x0) {
        local_20 = -1;
      }
      else if (param_2 < 0) {
        local_20 = -1;
      }
      else {
        Inven_Item::Inven_Item(&local_61);
        uStack_5f = (undefined2)param_1;
        uStack_5d = (undefined2)((uint)param_1 >> 0x10);
        (**(code **)(*(int *)local_24 + 8))(local_24,&local_61);
        cVar1 = CItem::is_stackable(local_24);
        if (cVar1 != '\0') {
          Inven_Item::set_add_info(&local_61,param_2);
        }
        *param_5 = 0;
        cVar1 = Inven_Item::IsCreatureItemType(&local_61);
        if (cVar1 != '\0') {
          *param_5 = 7;
        }
        if (((0 < param_6) && (param_6 < 0x20)) && (cStack_60 == '\x01')) {
          Inven_Item::SetUpgrade(&local_61,(uchar)param_6);
        }
        uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
        local_20 = CInventory::insertItemIntoInventory
                             (uVar3,CONCAT22(uStack_5f,CONCAT11(cStack_60,local_61)),
                              CONCAT22(uStack_5b,uStack_5d),local_59,local_55,local_51,local_4d,
                              local_49,local_45,local_41,local_3d,local_39,local_35,local_31,
                              local_2d,local_29,local_25,param_4,1,1);
        if (local_20 < 0) {
          local_20 = -1;
        }
        else {
          cVar1 = Inven_Item::IsCreatureItemType(&local_61);
          if (cVar1 != '\0') {
            iVar2 = CItem::getExpirationDate(local_24);
            iVar4 = CItem::getUsablePeriod(local_24);
            this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            this_02 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_01);
            user_creature::CCreatureMgr::InsertCreatureItem
                      (this_02,&local_61,local_20,param_4,iVar4,iVar2);
          }
        }
      }
    }
    else {
      local_20 = -1;
    }
  }
  return local_20;
}
```
