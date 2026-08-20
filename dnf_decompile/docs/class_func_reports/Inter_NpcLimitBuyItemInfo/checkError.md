# checkError

`_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo`

`Inter_NpcLimitBuyItemInfo::checkError(CUser*, LimitNpcBuyItemInfo*)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6acc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6acc  _ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo
#           Inter_NpcLimitBuyItemInfo::checkError(CUser*, LimitNpcBuyItemInfo*)
# range [0x084e6acc, 0x084e6c41]
084e6acc +0x000:  push   %ebp
084e6acd +0x001:  mov    %esp,%ebp
084e6acf +0x003:  push   %esi
084e6ad0 +0x004:  push   %ebx
084e6ad1 +0x005:  sub    $0x10,%esp
084e6ad4 +0x008:  cmpl   $0x0,0xc(%ebp)
084e6ad8 +0x00c:  jne    084e6ae4 <+0x18>
084e6ada +0x00e:  mov    $0x3,%eax
084e6adf +0x013:  jmp    084e6c3b <+0x16f>
084e6ae4 +0x018:  mov    0xc(%ebp),%eax
084e6ae7 +0x01b:  mov    %eax,(%esp)
084e6aea +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e6aef +0x023:  cmp    $0x2,%eax
084e6af2 +0x026:  setle  %al
084e6af5 +0x029:  test   %al,%al
084e6af7 +0x02b:  je     084e6b03 <+0x37>
084e6af9 +0x02d:  mov    $0x3,%eax
084e6afe +0x032:  jmp    084e6c3b <+0x16f>
084e6b03 +0x037:  movl   $0xffffffff,0x4(%esp)
084e6b0b +0x03f:  mov    0xc(%ebp),%eax
084e6b0e +0x042:  mov    %eax,(%esp)
084e6b11 +0x045:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e6b16 +0x04a:  mov    %eax,%edx
084e6b18 +0x04c:  mov    0x10(%ebp),%eax
084e6b1b +0x04f:  mov    0x12(%eax),%eax
084e6b1e +0x052:  cmp    %eax,%edx
084e6b20 +0x054:  setne  %al
084e6b23 +0x057:  test   %al,%al
084e6b25 +0x059:  je     084e6b31 <+0x65>
084e6b27 +0x05b:  mov    $0x3,%eax
084e6b2c +0x060:  jmp    084e6c3b <+0x16f>
084e6b31 +0x065:  mov    0x10(%ebp),%eax
084e6b34 +0x068:  mov    0x16(%eax),%edx
084e6b37 +0x06b:  mov    0x8(%ebp),%eax
084e6b3a +0x06e:  mov    %edx,0x4(%eax)
084e6b3d +0x071:  mov    0x8(%ebp),%eax
084e6b40 +0x074:  mov    0x4(%eax),%eax
084e6b43 +0x077:  test   %eax,%eax
084e6b45 +0x079:  jne    084e6b51 <+0x85>
084e6b47 +0x07b:  mov    $0x11,%eax
084e6b4c +0x080:  jmp    084e6c3b <+0x16f>
084e6b51 +0x085:  mov    0x8(%ebp),%eax
084e6b54 +0x088:  mov    0x4(%eax),%eax
084e6b57 +0x08b:  mov    %eax,%ebx
084e6b59 +0x08d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e6b5e +0x092:  mov    %ebx,0x4(%esp)
084e6b62 +0x096:  mov    %eax,(%esp)
084e6b65 +0x099:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084e6b6a +0x09e:  mov    0x8(%ebp),%edx
084e6b6d +0x0a1:  mov    %eax,0x18(%edx)
084e6b70 +0x0a4:  mov    0x8(%ebp),%eax
084e6b73 +0x0a7:  mov    0x18(%eax),%eax
084e6b76 +0x0aa:  test   %eax,%eax
084e6b78 +0x0ac:  jne    084e6b84 <+0xb8>
084e6b7a +0x0ae:  mov    $0x11,%eax
084e6b7f +0x0b3:  jmp    084e6c3b <+0x16f>
084e6b84 +0x0b8:  mov    0x8(%ebp),%eax
084e6b87 +0x0bb:  mov    0x18(%eax),%eax
084e6b8a +0x0be:  mov    %eax,(%esp)
084e6b8d +0x0c1:  call   0850d6f4 <_ZNK5CItem15GetNeedMaterialEv>  ; CItem::GetNeedMaterial() const
084e6b92 +0x0c6:  mov    0x8(%ebp),%ecx
084e6b95 +0x0c9:  mov    0x4(%eax),%edx
084e6b98 +0x0cc:  mov    (%eax),%eax
084e6b9a +0x0ce:  mov    %eax,0x8(%ecx)
084e6b9d +0x0d1:  mov    %edx,0xc(%ecx)
084e6ba0 +0x0d4:  mov    0x8(%ebp),%eax
084e6ba3 +0x0d7:  mov    0x8(%eax),%eax
084e6ba6 +0x0da:  test   %eax,%eax
084e6ba8 +0x0dc:  je     084e6bb5 <+0xe9>
084e6baa +0x0de:  mov    0x8(%ebp),%eax
084e6bad +0x0e1:  mov    0x8(%eax),%eax
084e6bb0 +0x0e4:  cmp    $0xffffffff,%eax
084e6bb3 +0x0e7:  jne    084e6bbc <+0xf0>
084e6bb5 +0x0e9:  mov    $0x17,%eax
084e6bba +0x0ee:  jmp    084e6c3b <+0x16f>
084e6bbc +0x0f0:  mov    0x8(%ebp),%eax
084e6bbf +0x0f3:  lea    0x5a(%eax),%esi
084e6bc2 +0x0f6:  mov    0x8(%ebp),%eax
084e6bc5 +0x0f9:  mov    0x8(%eax),%ebx
084e6bc8 +0x0fc:  mov    0xc(%ebp),%eax
084e6bcb +0x0ff:  mov    %eax,(%esp)
084e6bce +0x102:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
084e6bd3 +0x107:  mov    %esi,0x8(%esp)
084e6bd7 +0x10b:  mov    %ebx,0x4(%esp)
084e6bdb +0x10f:  mov    %eax,(%esp)
084e6bde +0x112:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
084e6be3 +0x117:  mov    0x8(%ebp),%edx
084e6be6 +0x11a:  mov    %eax,0x14(%edx)
084e6be9 +0x11d:  mov    0x8(%ebp),%eax
084e6bec +0x120:  mov    0x14(%eax),%eax
084e6bef +0x123:  shr    $0x1f,%eax
084e6bf2 +0x126:  test   %al,%al
084e6bf4 +0x128:  je     084e6bfd <+0x131>
084e6bf6 +0x12a:  mov    $0x15,%eax
084e6bfb +0x12f:  jmp    084e6c3b <+0x16f>
084e6bfd +0x131:  mov    0x8(%ebp),%eax
084e6c00 +0x134:  mov    0xc(%eax),%eax
084e6c03 +0x137:  test   %eax,%eax
084e6c05 +0x139:  jle    084e6c1f <+0x153>
084e6c07 +0x13b:  mov    0x8(%ebp),%eax
084e6c0a +0x13e:  mov    0xc(%eax),%ebx
084e6c0d +0x141:  mov    0x8(%ebp),%eax
084e6c10 +0x144:  add    $0x5a,%eax
084e6c13 +0x147:  mov    %eax,(%esp)
084e6c16 +0x14a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084e6c1b +0x14f:  cmp    %eax,%ebx
084e6c1d +0x151:  jle    084e6c26 <+0x15a>
084e6c1f +0x153:  mov    $0x1,%eax
084e6c24 +0x158:  jmp    084e6c2b <+0x15f>
084e6c26 +0x15a:  mov    $0x0,%eax
084e6c2b +0x15f:  test   %al,%al
084e6c2d +0x161:  je     084e6c36 <+0x16a>
084e6c2f +0x163:  mov    $0x16,%eax
084e6c34 +0x168:  jmp    084e6c3b <+0x16f>
084e6c36 +0x16a:  mov    $0x0,%eax
084e6c3b +0x16f:  add    $0x10,%esp
084e6c3e +0x172:  pop    %ebx
084e6c3f +0x173:  pop    %esi
084e6c40 +0x174:  pop    %ebp
084e6c41 +0x175:  ret
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::checkError @ 0x84e6acc

/* Inter_NpcLimitBuyItemInfo::checkError(CUser*, LimitNpcBuyItemInfo*) */

undefined4 __thiscall
Inter_NpcLimitBuyItemInfo::checkError
          (Inter_NpcLimitBuyItemInfo *this,CUser *param_1,LimitNpcBuyItemInfo *param_2)

{
  bool bVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  CInventory *this_01;
  int iVar5;
  
  if (param_1 == (CUser *)0x0) {
    return 3;
  }
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    return 3;
  }
  iVar2 = CUser::get_charac_no(param_1,-1);
  if (iVar2 != *(int *)(param_2 + 0x12)) {
    return 3;
  }
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_2 + 0x16);
  if (*(int *)(this + 4) != 0) {
    iVar2 = *(int *)(this + 4);
    this_00 = (CDataManager *)G_CDataManager();
    uVar3 = CDataManager::find_item(this_00,iVar2);
    *(undefined4 *)(this + 0x18) = uVar3;
    if (*(int *)(this + 0x18) == 0) {
      return 0x11;
    }
    puVar4 = (undefined4 *)CItem::GetNeedMaterial(*(CItem **)(this + 0x18));
    uVar3 = puVar4[1];
    *(undefined4 *)(this + 8) = *puVar4;
    *(undefined4 *)(this + 0xc) = uVar3;
    if ((*(int *)(this + 8) != 0) && (*(int *)(this + 8) != -1)) {
      iVar2 = *(int *)(this + 8);
      this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      uVar3 = CInventory::GetInvenData(this_01,iVar2,(Inven_Item *)(this + 0x5a));
      *(undefined4 *)(this + 0x14) = uVar3;
      if (-1 < *(int *)(this + 0x14)) {
        if ((*(int *)(this + 0xc) < 1) ||
           (iVar2 = *(int *)(this + 0xc),
           iVar5 = Inven_Item::get_add_info((Inven_Item *)(this + 0x5a)), iVar5 < iVar2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar3 = 0x16;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      return 0x15;
    }
    return 0x17;
  }
  return 0x11;
}
```
