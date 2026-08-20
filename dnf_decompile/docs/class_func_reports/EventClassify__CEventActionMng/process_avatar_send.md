# process_avatar_send

`_ZN13EventClassify15CEventActionMng19process_avatar_sendEP5CUserR10Inven_ItemPK5CItem`

`EventClassify::CEventActionMng::process_avatar_send(CUser*, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventActionMng` | `0x0810d70c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810d70c  _ZN13EventClassify15CEventActionMng19process_avatar_sendEP5CUserR10Inven_ItemPK5CItem
#           EventClassify::CEventActionMng::process_avatar_send(CUser*, Inven_Item&, CItem const*)
# range [0x0810d70c, 0x0810d83b]
0810d70c +0x000:  push   %ebp
0810d70d +0x001:  mov    %esp,%ebp
0810d70f +0x003:  push   %edi
0810d710 +0x004:  push   %esi
0810d711 +0x005:  push   %ebx
0810d712 +0x006:  sub    $0x9c,%esp
0810d718 +0x00c:  movl   $0xffffffff,-0x20(%ebp)
0810d71f +0x013:  mov    0xc(%ebp),%eax
0810d722 +0x016:  mov    %eax,(%esp)
0810d725 +0x019:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810d72a +0x01e:  lea    -0x75(%ebp),%edx
0810d72d +0x021:  mov    %edx,0x8(%esp)
0810d731 +0x025:  mov    %eax,0x4(%esp)
0810d735 +0x029:  movl   $0x7,(%esp)
0810d73c +0x030:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0810d741 +0x035:  mov    %eax,%esi
0810d743 +0x037:  mov    0x14(%ebp),%eax
0810d746 +0x03a:  mov    %eax,(%esp)
0810d749 +0x03d:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0810d74e +0x042:  mov    %eax,%ebx
0810d750 +0x044:  mov    0x10(%ebp),%eax
0810d753 +0x047:  mov    0x2(%eax),%eax
0810d756 +0x04a:  mov    %eax,%edi
0810d758 +0x04c:  mov    0xc(%ebp),%eax
0810d75b +0x04f:  mov    %eax,(%esp)
0810d75e +0x052:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810d763 +0x057:  movl   $0x0,0x24(%esp)
0810d76b +0x05f:  movl   $0x0,0x20(%esp)
0810d773 +0x067:  movl   $0x2,0x1c(%esp)
0810d77b +0x06f:  mov    %esi,0x18(%esp)
0810d77f +0x073:  movl   $0xffffffff,0x14(%esp)
0810d787 +0x07b:  movl   $0x0,0x10(%esp)
0810d78f +0x083:  movl   $0x0,0xc(%esp)
0810d797 +0x08b:  mov    %ebx,0x8(%esp)
0810d79b +0x08f:  mov    %edi,0x4(%esp)
0810d79f +0x093:  mov    %eax,(%esp)
0810d7a2 +0x096:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
0810d7a7 +0x09b:  mov    %eax,-0x20(%ebp)
0810d7aa +0x09e:  cmpl   $0xffffffff,-0x20(%ebp)
0810d7ae +0x0a2:  je     0810d82d <+0x121>
0810d7b0 +0x0a4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0810d7b7 +0x0ab:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0810d7bc +0x0b0:  mov    %eax,-0x1c(%ebp)
0810d7bf +0x0b3:  mov    0xc(%ebp),%eax
0810d7c2 +0x0b6:  mov    %eax,(%esp)
0810d7c5 +0x0b9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d7ca +0x0be:  lea    -0x5d(%ebp),%edx
0810d7cd +0x0c1:  mov    -0x20(%ebp),%ecx
0810d7d0 +0x0c4:  mov    %ecx,0xc(%esp)
0810d7d4 +0x0c8:  movl   $0x2,0x8(%esp)
0810d7dc +0x0d0:  mov    %eax,0x4(%esp)
0810d7e0 +0x0d4:  mov    %edx,(%esp)
0810d7e3 +0x0d7:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0810d7e8 +0x0dc:  sub    $0x4,%esp
0810d7eb +0x0df:  mov    -0x56(%ebp),%ebx
0810d7ee +0x0e2:  mov    0xc(%ebp),%eax
0810d7f1 +0x0e5:  mov    %eax,(%esp)
0810d7f4 +0x0e8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0810d7f9 +0x0ed:  mov    %eax,(%esp)
0810d7fc +0x0f0:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0810d801 +0x0f5:  mov    -0x1c(%ebp),%edx
0810d804 +0x0f8:  mov    %edx,0x8(%esp)
0810d808 +0x0fc:  mov    %ebx,0x4(%esp)
0810d80c +0x100:  mov    %eax,(%esp)
0810d80f +0x103:  call   082f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>  ; WongWork::CAvatarItemMgr::GetRemainDate(int, int) const
0810d814 +0x108:  mov    0x10(%ebp),%edx
0810d817 +0x10b:  mov    %eax,0x7(%edx)
0810d81a +0x10e:  movl   $0x0,0x4(%esp)
0810d822 +0x116:  mov    0x10(%ebp),%eax
0810d825 +0x119:  mov    %eax,(%esp)
0810d828 +0x11c:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
0810d82d +0x121:  mov    -0x20(%ebp),%eax
0810d830 +0x124:  lea    -0xc(%ebp),%esp
0810d833 +0x127:  add    $0x0,%esp
0810d836 +0x12a:  pop    %ebx
0810d837 +0x12b:  pop    %esi
0810d838 +0x12c:  pop    %edi
0810d839 +0x12d:  pop    %ebp
0810d83a +0x12e:  ret
0810d83b +0x12f:  nop
```

## 反编译 C

```c
// EventClassify::CEventActionMng::process_avatar_send @ 0x810d70c

/* EventClassify::CEventActionMng::process_avatar_send(CUser*, Inven_Item&, CItem const*) */

int __thiscall
EventClassify::CEventActionMng::process_avatar_send
          (CEventActionMng *this,CUser *param_1,Inven_Item *param_2,CItem *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int iVar5;
  CAvatarItemMgr *this_00;
  undefined1 local_79 [24];
  undefined1 local_61 [7];
  int local_5a;
  int local_24;
  int local_20;
  
  local_24 = 0xffffffff;
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar2 = WongWork::CGenUniqueNo::genIPGNo(7,uVar1,local_79);
  uVar3 = CItem::getUsablePeriod(param_3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_24 = CInventory::AddAvatarItem(pCVar4,uVar1,uVar3,0,0,0xffffffff,uVar2,2,0,0);
  if (local_24 != -1) {
    local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_61,iVar5);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
    uVar1 = WongWork::CAvatarItemMgr::GetRemainDate(this_00,local_5a,local_20);
    *(undefined4 *)(param_2 + 7) = uVar1;
    Inven_Item::SetUpgrade(param_2,'\0');
  }
  return local_24;
}
```
