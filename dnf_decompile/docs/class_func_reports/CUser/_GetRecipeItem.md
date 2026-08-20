# _GetRecipeItem

`_ZN5CUser14_GetRecipeItemEmbRi`

`CUser::_GetRecipeItem(unsigned long, bool, int&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08670e38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08670e38  _ZN5CUser14_GetRecipeItemEmbRi
#           CUser::_GetRecipeItem(unsigned long, bool, int&)
# range [0x08670e38, 0x08670f1d]
08670e38 +0x00:  push   %ebp
08670e39 +0x01:  mov    %esp,%ebp
08670e3b +0x03:  push   %ebx
08670e3c +0x04:  sub    $0x74,%esp
08670e3f +0x07:  mov    0x10(%ebp),%eax
08670e42 +0x0a:  mov    %al,-0x5c(%ebp)
08670e45 +0x0d:  cmpb   $0x0,-0x5c(%ebp)
08670e49 +0x11:  je     08670e72 <+0x3a>
08670e4b +0x13:  mov    0xc(%ebp),%ebx
08670e4e +0x16:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08670e53 +0x1b:  mov    %ebx,0x4(%esp)
08670e57 +0x1f:  mov    %eax,(%esp)
08670e5a +0x22:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08670e5f +0x27:  mov    %eax,-0x10(%ebp)
08670e62 +0x2a:  cmpl   $0x0,-0x10(%ebp)
08670e66 +0x2e:  jne    08670ee2 <+0xaa>
08670e68 +0x30:  mov    $0x0,%eax
08670e6d +0x35:  jmp    08670f19 <+0xe1>
08670e72 +0x3a:  mov    0xc(%ebp),%ebx
08670e75 +0x3d:  mov    0x8(%ebp),%eax
08670e78 +0x40:  mov    %eax,(%esp)
08670e7b +0x43:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08670e80 +0x48:  lea    -0x4d(%ebp),%edx
08670e83 +0x4b:  mov    %ebx,0xc(%esp)
08670e87 +0x4f:  movl   $0x1,0x8(%esp)
08670e8f +0x57:  mov    %eax,0x4(%esp)
08670e93 +0x5b:  mov    %edx,(%esp)
08670e96 +0x5e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08670e9b +0x63:  sub    $0x4,%esp
08670e9e +0x66:  mov    -0x4b(%ebp),%eax
08670ea1 +0x69:  test   %eax,%eax
08670ea3 +0x6b:  jne    08670eac <+0x74>
08670ea5 +0x6d:  mov    $0x0,%eax
08670eaa +0x72:  jmp    08670f19 <+0xe1>
08670eac +0x74:  lea    -0x4d(%ebp),%eax
08670eaf +0x77:  mov    %eax,(%esp)
08670eb2 +0x7a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08670eb7 +0x7f:  mov    0x14(%ebp),%edx
08670eba +0x82:  mov    %eax,(%edx)
08670ebc +0x84:  mov    -0x4b(%ebp),%eax
08670ebf +0x87:  mov    %eax,%ebx
08670ec1 +0x89:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08670ec6 +0x8e:  mov    %ebx,0x4(%esp)
08670eca +0x92:  mov    %eax,(%esp)
08670ecd +0x95:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08670ed2 +0x9a:  mov    %eax,-0x10(%ebp)
08670ed5 +0x9d:  cmpl   $0x0,-0x10(%ebp)
08670ed9 +0xa1:  jne    08670ee2 <+0xaa>
08670edb +0xa3:  mov    $0x0,%eax
08670ee0 +0xa8:  jmp    08670f19 <+0xe1>
08670ee2 +0xaa:  mov    -0x10(%ebp),%eax
08670ee5 +0xad:  mov    %eax,(%esp)
08670ee8 +0xb0:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08670eed +0xb5:  xor    $0x1,%eax
08670ef0 +0xb8:  test   %al,%al
08670ef2 +0xba:  je     08670efb <+0xc3>
08670ef4 +0xbc:  mov    $0x0,%eax
08670ef9 +0xc1:  jmp    08670f19 <+0xe1>
08670efb +0xc3:  mov    -0x10(%ebp),%eax
08670efe +0xc6:  mov    %eax,-0xc(%ebp)
08670f01 +0xc9:  mov    -0xc(%ebp),%eax
08670f04 +0xcc:  mov    0x2b0(%eax),%eax
08670f0a +0xd2:  cmp    $0x3,%eax
08670f0d +0xd5:  je     08670f16 <+0xde>
08670f0f +0xd7:  mov    $0x0,%eax
08670f14 +0xdc:  jmp    08670f19 <+0xe1>
08670f16 +0xde:  mov    -0xc(%ebp),%eax
08670f19 +0xe1:  mov    -0x4(%ebp),%ebx
08670f1c +0xe4:  leave
08670f1d +0xe5:  ret
```

## 反编译 C

```c
// CUser::_GetRecipeItem @ 0x8670e38

/* CUser::_GetRecipeItem(unsigned long, bool, int&) */

CItem * __thiscall CUser::_GetRecipeItem(CUser *this,ulong param_1,bool param_2,int *param_3)

{
  char cVar1;
  CDataManager *pCVar2;
  int iVar3;
  Inven_Item local_51 [2];
  int local_4f;
  CItem *local_14;
  
  if (param_2) {
    pCVar2 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(pCVar2,param_1);
    if (local_14 == (CItem *)0x0) {
      return (CItem *)0x0;
    }
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    CInventory::GetInvenSlot((int)local_51,iVar3);
    if (local_4f == 0) {
      return (CItem *)0x0;
    }
    iVar3 = Inven_Item::get_add_info(local_51);
    *param_3 = iVar3;
    pCVar2 = (CDataManager *)G_CDataManager();
    local_14 = (CItem *)CDataManager::find_item(pCVar2,local_4f);
    if (local_14 == (CItem *)0x0) {
      return (CItem *)0x0;
    }
  }
  cVar1 = CItem::is_stackable(local_14);
  if (cVar1 == '\x01') {
    if (*(int *)(local_14 + 0x2b0) != 3) {
      local_14 = (CItem *)0x0;
    }
  }
  else {
    local_14 = (CItem *)0x0;
  }
  return local_14;
}
```
