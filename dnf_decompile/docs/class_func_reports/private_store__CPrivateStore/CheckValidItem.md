# CheckValidItem

`_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii`

`private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c9bb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c9bb8  _ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii
#           private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int)
# range [0x085c9bb8, 0x085c9cc1]
085c9bb8 +0x000:  push   %ebp
085c9bb9 +0x001:  mov    %esp,%ebp
085c9bbb +0x003:  push   %ebx
085c9bbc +0x004:  sub    $0x64,%esp
085c9bbf +0x007:  mov    0x8(%ebp),%eax
085c9bc2 +0x00a:  mov    0x2c(%eax),%eax
085c9bc5 +0x00d:  mov    %eax,(%esp)
085c9bc8 +0x010:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c9bcd +0x015:  mov    %eax,-0xc(%ebp)
085c9bd0 +0x018:  mov    0xc(%ebp),%eax
085c9bd3 +0x01b:  mov    0x10(%ebp),%edx
085c9bd6 +0x01e:  mov    %edx,0x8(%esp)
085c9bda +0x022:  mov    %eax,0x4(%esp)
085c9bde +0x026:  mov    -0xc(%ebp),%eax
085c9be1 +0x029:  mov    %eax,(%esp)
085c9be4 +0x02c:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
085c9be9 +0x031:  xor    $0x1,%eax
085c9bec +0x034:  test   %al,%al
085c9bee +0x036:  je     085c9bfa <+0x42>
085c9bf0 +0x038:  mov    $0x0,%eax
085c9bf5 +0x03d:  jmp    085c9cbc <+0x104>
085c9bfa +0x042:  mov    0xc(%ebp),%edx
085c9bfd +0x045:  lea    -0x49(%ebp),%eax
085c9c00 +0x048:  mov    0x10(%ebp),%ecx
085c9c03 +0x04b:  mov    %ecx,0xc(%esp)
085c9c07 +0x04f:  mov    %edx,0x8(%esp)
085c9c0b +0x053:  mov    -0xc(%ebp),%edx
085c9c0e +0x056:  mov    %edx,0x4(%esp)
085c9c12 +0x05a:  mov    %eax,(%esp)
085c9c15 +0x05d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085c9c1a +0x062:  sub    $0x4,%esp
085c9c1d +0x065:  mov    -0x47(%ebp),%eax
085c9c20 +0x068:  test   %eax,%eax
085c9c22 +0x06a:  jne    085c9c2e <+0x76>
085c9c24 +0x06c:  mov    $0x0,%eax
085c9c29 +0x071:  jmp    085c9cbc <+0x104>
085c9c2e +0x076:  cmpl   $0x1,0xc(%ebp)
085c9c32 +0x07a:  jne    085c9c57 <+0x9f>
085c9c34 +0x07c:  lea    -0x49(%ebp),%eax
085c9c37 +0x07f:  mov    %eax,(%esp)
085c9c3a +0x082:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085c9c3f +0x087:  xor    $0x1,%eax
085c9c42 +0x08a:  test   %al,%al
085c9c44 +0x08c:  je     085c9cb7 <+0xff>
085c9c46 +0x08e:  mov    -0x42(%ebp),%eax
085c9c49 +0x091:  sub    0x14(%ebp),%eax
085c9c4c +0x094:  test   %eax,%eax
085c9c4e +0x096:  jns    085c9cb7 <+0xff>
085c9c50 +0x098:  mov    $0x0,%eax
085c9c55 +0x09d:  jmp    085c9cbc <+0x104>
085c9c57 +0x09f:  cmpl   $0x2,0xc(%ebp)
085c9c5b +0x0a3:  jne    085c9cb7 <+0xff>
085c9c5d +0x0a5:  movzbl -0x48(%ebp),%eax
085c9c61 +0x0a9:  cmp    $0x8,%al
085c9c63 +0x0ab:  je     085c9c6c <+0xb4>
085c9c65 +0x0ad:  mov    $0x0,%eax
085c9c6a +0x0b2:  jmp    085c9cbc <+0x104>
085c9c6c +0x0b4:  mov    -0xc(%ebp),%eax
085c9c6f +0x0b7:  mov    %eax,(%esp)
085c9c72 +0x0ba:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c9c77 +0x0bf:  mov    -0x42(%ebp),%eax
085c9c7a +0x0c2:  mov    %eax,(%esp)
085c9c7d +0x0c5:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
085c9c82 +0x0ca:  test   %al,%al
085c9c84 +0x0cc:  je     085c9c8d <+0xd5>
085c9c86 +0x0ce:  mov    $0x0,%eax
085c9c8b +0x0d3:  jmp    085c9cbc <+0x104>
085c9c8d +0x0d5:  mov    -0x42(%ebp),%ebx
085c9c90 +0x0d8:  mov    -0xc(%ebp),%eax
085c9c93 +0x0db:  mov    %eax,(%esp)
085c9c96 +0x0de:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
085c9c9b +0x0e3:  mov    %ebx,0x4(%esp)
085c9c9f +0x0e7:  mov    %eax,(%esp)
085c9ca2 +0x0ea:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
085c9ca7 +0x0ef:  test   %eax,%eax
085c9ca9 +0x0f1:  setne  %al
085c9cac +0x0f4:  test   %al,%al
085c9cae +0x0f6:  je     085c9cb7 <+0xff>
085c9cb0 +0x0f8:  mov    $0x0,%eax
085c9cb5 +0x0fd:  jmp    085c9cbc <+0x104>
085c9cb7 +0x0ff:  mov    $0x1,%eax
085c9cbc +0x104:  mov    -0x4(%ebp),%ebx
085c9cbf +0x107:  leave
085c9cc0 +0x108:  ret
085c9cc1 +0x109:  nop
```

## 反编译 C

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9bb8

/* private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem
          (CPrivateStore *this,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  CAvatarItemMgr *this_00;
  int iVar3;
  Inven_Item local_4d;
  char local_4c;
  int local_4b;
  int local_46;
  CInventory *local_10;
  
  local_10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
  cVar1 = CInventory::CheckValidSlot(local_10,param_2,param_3);
  if (cVar1 == '\x01') {
    CInventory::GetInvenSlot((int)&local_4d,(int)local_10);
    if (local_4b == 0) {
      uVar2 = 0;
    }
    else {
      if (param_2 == 1) {
        cVar1 = Inven_Item::isEquipableItemType(&local_4d);
        if ((cVar1 != '\x01') && (local_46 - param_4 < 0)) {
          return 0;
        }
      }
      else if (param_2 == 2) {
        if (local_4c != '\b') {
          return 0;
        }
        CInventory::GetAvatarItemMgrR(local_10);
        cVar1 = WongWork::CAvatarItemMgr::IsTempKey(local_46);
        if (cVar1 != '\0') {
          return 0;
        }
        this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_10);
        iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(this_00,local_46);
        if (iVar3 != 0) {
          return 0;
        }
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
