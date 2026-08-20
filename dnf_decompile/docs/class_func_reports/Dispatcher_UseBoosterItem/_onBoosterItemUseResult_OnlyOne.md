# _onBoosterItemUseResult_OnlyOne

`_ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi`

`Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseBoosterItem` | `0x08209a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08209a5e  _ZN25Dispatcher_UseBoosterItem31_onBoosterItemUseResult_OnlyOneEP5CUserRSt6vectorI10Inven_ItemSaIS3_EEi
#           Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne(CUser*, std::vector<Inven_Item, std::allocator<Inven_Item> >&, int)
# range [0x08209a5e, 0x08209b0d]
08209a5e +0x00:  push   %ebp
08209a5f +0x01:  mov    %esp,%ebp
08209a61 +0x03:  sub    $0x28,%esp
08209a64 +0x06:  mov    0x10(%ebp),%eax
08209a67 +0x09:  mov    %eax,(%esp)
08209a6a +0x0c:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08209a6f +0x11:  cmp    $0x1,%eax
08209a72 +0x14:  setne  %al
08209a75 +0x17:  test   %al,%al
08209a77 +0x19:  jne    08209b0a <+0xac>
08209a7d +0x1f:  lea    -0x10(%ebp),%eax
08209a80 +0x22:  mov    0x10(%ebp),%edx
08209a83 +0x25:  mov    %edx,0x4(%esp)
08209a87 +0x29:  mov    %eax,(%esp)
08209a8a +0x2c:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08209a8f +0x31:  sub    $0x4,%esp
08209a92 +0x34:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08209a97 +0x39:  movl   $0x64,0x4(%esp)
08209a9f +0x41:  mov    %eax,(%esp)
08209aa2 +0x44:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08209aa7 +0x49:  mov    (%eax),%edx
08209aa9 +0x4b:  add    $0x34,%edx
08209aac +0x4e:  mov    (%edx),%edx
08209aae +0x50:  movl   $0x0,0x4(%esp)
08209ab6 +0x58:  mov    %eax,(%esp)
08209ab9 +0x5b:  call   *%edx
08209abb +0x5d:  test   %al,%al
08209abd +0x5f:  je     08209b0b <+0xad>
08209abf +0x61:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08209ac4 +0x66:  movl   $0x64,0x4(%esp)
08209acc +0x6e:  mov    %eax,(%esp)
08209acf +0x71:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08209ad4 +0x76:  mov    %eax,-0xc(%ebp)
08209ad7 +0x79:  cmpl   $0x0,-0xc(%ebp)
08209adb +0x7d:  je     08209b0b <+0xad>
08209add +0x7f:  lea    -0x10(%ebp),%eax
08209ae0 +0x82:  mov    %eax,(%esp)
08209ae3 +0x85:  call   08237a86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd130>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd130
08209ae8 +0x8a:  mov    0x2(%eax),%eax
08209aeb +0x8d:  mov    %eax,0xc(%esp)
08209aef +0x91:  mov    0x14(%ebp),%eax
08209af2 +0x94:  mov    %eax,0x8(%esp)
08209af6 +0x98:  mov    0xc(%ebp),%eax
08209af9 +0x9b:  mov    %eax,0x4(%esp)
08209afd +0x9f:  mov    -0xc(%ebp),%eax
08209b00 +0xa2:  mov    %eax,(%esp)
08209b03 +0xa5:  call   080f73be <_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii>  ; GrowthEquipEvent::SelectGrowthWeapon(CUser&, int, int)
08209b08 +0xaa:  jmp    08209b0b <+0xad>
08209b0a +0xac:  nop
08209b0b +0xad:  leave
08209b0c +0xae:  ret
08209b0d +0xaf:  nop
```

## 反编译 C

```c
// Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne @ 0x8209a5e

/* Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne(CUser*, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&, int) */

void __thiscall
Dispatcher_UseBoosterItem::_onBoosterItemUseResult_OnlyOne
          (Dispatcher_UseBoosterItem *this,CUser *param_1,vector *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_14 [4];
  GrowthEquipEvent *local_10;
  
  iVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2);
  if (iVar2 == 1) {
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
    cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
    if (cVar1 != '\0') {
      local_10 = (GrowthEquipEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
      if (local_10 != (GrowthEquipEvent *)0x0) {
        iVar2 = __gnu_cxx::
                __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                operator->(local_14);
        GrowthEquipEvent::SelectGrowthWeapon(local_10,param_1,param_3,*(int *)(iVar2 + 2));
      }
    }
  }
  return;
}
```
