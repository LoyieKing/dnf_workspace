# giveDimensionItems

`_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE`

`Dispatcher_PcRoomRentItem::giveDimensionItems(CUser*, InstanceRentalSystem::RentInput&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomRentItem` | `0x081e583e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e583e  _ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE
#           Dispatcher_PcRoomRentItem::giveDimensionItems(CUser*, InstanceRentalSystem::RentInput&)
# range [0x081e583e, 0x081e5933]
081e583e +0x00:  push   %ebp
081e583f +0x01:  mov    %esp,%ebp
081e5841 +0x03:  push   %edi
081e5842 +0x04:  push   %esi
081e5843 +0x05:  push   %ebx
081e5844 +0x06:  sub    $0x3c,%esp
081e5847 +0x09:  cmpl   $0x0,0xc(%ebp)
081e584b +0x0d:  je     081e5922 <+0xe4>
081e5851 +0x13:  mov    0x10(%ebp),%eax
081e5854 +0x16:  mov    0xc(%eax),%eax
081e5857 +0x19:  cmp    $0x2,%eax
081e585a +0x1c:  jne    081e5925 <+0xe7>
081e5860 +0x22:  movl   $0x0,-0x24(%ebp)
081e5867 +0x29:  movl   $0x2,0x8(%esp)
081e586f +0x31:  lea    -0x24(%ebp),%eax
081e5872 +0x34:  mov    %eax,0x4(%esp)
081e5876 +0x38:  mov    0xc(%ebp),%eax
081e5879 +0x3b:  mov    %eax,(%esp)
081e587c +0x3e:  call   082711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>  ; pc_room::GetSelectionIndex(CUser&, int&, int)
081e5881 +0x43:  xor    $0x1,%eax
081e5884 +0x46:  test   %al,%al
081e5886 +0x48:  jne    081e5928 <+0xea>
081e588c +0x4e:  mov    0xc(%ebp),%eax
081e588f +0x51:  mov    %eax,(%esp)
081e5892 +0x54:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081e5897 +0x59:  movsbl %al,%edi
081e589a +0x5c:  mov    0xc(%ebp),%eax
081e589d +0x5f:  mov    %eax,(%esp)
081e58a0 +0x62:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081e58a5 +0x67:  mov    %eax,%ebx
081e58a7 +0x69:  mov    -0x24(%ebp),%esi
081e58aa +0x6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e58af +0x71:  add    $0x4b34,%eax
081e58b4 +0x76:  mov    %edi,0xc(%esp)
081e58b8 +0x7a:  mov    %ebx,0x8(%esp)
081e58bc +0x7e:  mov    %esi,0x4(%esp)
081e58c0 +0x82:  mov    %eax,(%esp)
081e58c3 +0x85:  call   08915f9a <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii>  ; DimensionActivationRewardData::getRewardGiveItems(int, int, int)
081e58c8 +0x8a:  mov    %eax,-0x20(%ebp)
081e58cb +0x8d:  cmpl   $0x0,-0x20(%ebp)
081e58cf +0x91:  je     081e592b <+0xed>
081e58d1 +0x93:  movl   $0x0,-0x1c(%ebp)
081e58d8 +0x9a:  jmp    081e590b <+0xcd>
081e58da +0x9c:  lea    -0x2c(%ebp),%eax
081e58dd +0x9f:  mov    %eax,(%esp)
081e58e0 +0xa2:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
081e58e5 +0xa7:  mov    -0x24(%ebp),%eax
081e58e8 +0xaa:  mov    %al,-0x2c(%ebp)
081e58eb +0xad:  mov    -0x1c(%ebp),%eax
081e58ee +0xb0:  mov    %al,-0x2b(%ebp)
081e58f1 +0xb3:  movb   $0x1,-0x29(%ebp)
081e58f5 +0xb7:  mov    0x10(%ebp),%eax
081e58f8 +0xba:  lea    -0x2c(%ebp),%edx
081e58fb +0xbd:  mov    %edx,0x4(%esp)
081e58ff +0xc1:  mov    %eax,(%esp)
081e5902 +0xc4:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
081e5907 +0xc9:  addl   $0x1,-0x1c(%ebp)
081e590b +0xcd:  mov    -0x20(%ebp),%eax
081e590e +0xd0:  mov    %eax,(%esp)
081e5911 +0xd3:  call   08237656 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd00
081e5916 +0xd8:  cmp    -0x1c(%ebp),%eax
081e5919 +0xdb:  setg   %al
081e591c +0xde:  test   %al,%al
081e591e +0xe0:  jne    081e58da <+0x9c>
081e5920 +0xe2:  jmp    081e592c <+0xee>
081e5922 +0xe4:  nop
081e5923 +0xe5:  jmp    081e592c <+0xee>
081e5925 +0xe7:  nop
081e5926 +0xe8:  jmp    081e592c <+0xee>
081e5928 +0xea:  nop
081e5929 +0xeb:  jmp    081e592c <+0xee>
081e592b +0xed:  nop
081e592c +0xee:  add    $0x3c,%esp
081e592f +0xf1:  pop    %ebx
081e5930 +0xf2:  pop    %esi
081e5931 +0xf3:  pop    %edi
081e5932 +0xf4:  pop    %ebp
081e5933 +0xf5:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomRentItem::giveDimensionItems @ 0x81e583e

/* Dispatcher_PcRoomRentItem::giveDimensionItems(CUser*, InstanceRentalSystem::RentInput&) */

void __thiscall
Dispatcher_PcRoomRentItem::giveDimensionItems
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,RentInput *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RentInElem local_30;
  undefined1 local_2f;
  undefined1 local_2d;
  int local_28;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_24;
  int local_20;
  
  if ((param_1 != (CUser *)0x0) && (*(int *)(param_2 + 0xc) == 2)) {
    local_28 = 0;
    cVar1 = pc_room::GetSelectionIndex(param_1,&local_28,2);
    if (cVar1 == '\x01') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar4 = local_28;
      iVar3 = G_CDataManager();
      local_24 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                 DimensionActivationRewardData::getRewardGiveItems
                           ((DimensionActivationRewardData *)(iVar3 + 0x4b34),iVar4,iVar2,(int)cVar1
                           );
      if (local_24 != (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)0x0) {
        local_20 = 0;
        while (iVar4 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                                 (local_24), local_20 < iVar4) {
          InstanceRentalSystem::RentInput::RentInElem::RentInElem(&local_30);
          local_30 = SUB41(local_28,0);
          local_2f = (undefined1)local_20;
          local_2d = 1;
          std::
          vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
          ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                       *)param_2,&local_30);
          local_20 = local_20 + 1;
        }
      }
    }
  }
  return;
}
```
