# GetItemInfo

`_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE`

`private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c9f22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c9f22  _ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE
#           private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&)
# range [0x085c9f22, 0x085ca115]
085c9f22 +0x000:  push   %ebp
085c9f23 +0x001:  mov    %esp,%ebp
085c9f25 +0x003:  push   %ebx
085c9f26 +0x004:  sub    $0x154,%esp
085c9f2c +0x00a:  mov    0x10(%ebp),%eax
085c9f2f +0x00d:  mov    0x7(%eax),%eax
085c9f32 +0x010:  mov    %eax,-0xc(%ebp)
085c9f35 +0x013:  mov    0x10(%ebp),%eax
085c9f38 +0x016:  movzbl 0x46(%eax),%eax
085c9f3c +0x01a:  movsbl %al,%eax
085c9f3f +0x01d:  cmp    $0x7,%eax
085c9f42 +0x020:  ja     085ca0cd <+0x1ab>
085c9f48 +0x026:  mov    &data#5d4a0269(.rodata)(,%eax,4),%eax
085c9f4f +0x02d:  jmp    *%eax
085c9f51 +0x02f:  mov    0x10(%ebp),%eax
085c9f54 +0x032:  movzwl 0x48(%eax),%eax
085c9f58 +0x036:  movswl %ax,%ebx
085c9f5b +0x039:  mov    0xc(%ebp),%eax
085c9f5e +0x03c:  mov    %eax,(%esp)
085c9f61 +0x03f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c9f66 +0x044:  lea    -0x13d(%ebp),%edx
085c9f6c +0x04a:  mov    %ebx,0xc(%esp)
085c9f70 +0x04e:  movl   $0x1,0x8(%esp)
085c9f78 +0x056:  mov    %eax,0x4(%esp)
085c9f7c +0x05a:  mov    %edx,(%esp)
085c9f7f +0x05d:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085c9f84 +0x062:  sub    $0x4,%esp
085c9f87 +0x065:  mov    0x10(%ebp),%eax
085c9f8a +0x068:  lea    -0x13d(%ebp),%edx
085c9f90 +0x06e:  mov    %edx,0x4(%esp)
085c9f94 +0x072:  mov    %eax,(%esp)
085c9f97 +0x075:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085c9f9c +0x07a:  jmp    085ca0d4 <+0x1b2>
085c9fa1 +0x07f:  mov    0x10(%ebp),%eax
085c9fa4 +0x082:  movzwl 0x48(%eax),%eax
085c9fa8 +0x086:  movswl %ax,%ebx
085c9fab +0x089:  mov    0xc(%ebp),%eax
085c9fae +0x08c:  mov    %eax,(%esp)
085c9fb1 +0x08f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
085c9fb6 +0x094:  lea    -0x100(%ebp),%edx
085c9fbc +0x09a:  mov    %ebx,0x8(%esp)
085c9fc0 +0x09e:  mov    %eax,0x4(%esp)
085c9fc4 +0x0a2:  mov    %edx,(%esp)
085c9fc7 +0x0a5:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
085c9fcc +0x0aa:  sub    $0x4,%esp
085c9fcf +0x0ad:  mov    0x10(%ebp),%eax
085c9fd2 +0x0b0:  lea    -0x100(%ebp),%edx
085c9fd8 +0x0b6:  mov    %edx,0x4(%esp)
085c9fdc +0x0ba:  mov    %eax,(%esp)
085c9fdf +0x0bd:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085c9fe4 +0x0c2:  jmp    085ca0d4 <+0x1b2>
085c9fe9 +0x0c7:  mov    0x10(%ebp),%eax
085c9fec +0x0ca:  movzwl 0x48(%eax),%eax
085c9ff0 +0x0ce:  movswl %ax,%ebx
085c9ff3 +0x0d1:  mov    0xc(%ebp),%eax
085c9ff6 +0x0d4:  mov    %eax,(%esp)
085c9ff9 +0x0d7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c9ffe +0x0dc:  lea    -0xc3(%ebp),%edx
085ca004 +0x0e2:  mov    %ebx,0xc(%esp)
085ca008 +0x0e6:  movl   $0x0,0x8(%esp)
085ca010 +0x0ee:  mov    %eax,0x4(%esp)
085ca014 +0x0f2:  mov    %edx,(%esp)
085ca017 +0x0f5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085ca01c +0x0fa:  sub    $0x4,%esp
085ca01f +0x0fd:  mov    0x10(%ebp),%eax
085ca022 +0x100:  lea    -0xc3(%ebp),%edx
085ca028 +0x106:  mov    %edx,0x4(%esp)
085ca02c +0x10a:  mov    %eax,(%esp)
085ca02f +0x10d:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085ca034 +0x112:  jmp    085ca0d4 <+0x1b2>
085ca039 +0x117:  mov    0x10(%ebp),%eax
085ca03c +0x11a:  movzwl 0x48(%eax),%eax
085ca040 +0x11e:  movswl %ax,%ebx
085ca043 +0x121:  mov    0xc(%ebp),%eax
085ca046 +0x124:  mov    %eax,(%esp)
085ca049 +0x127:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ca04e +0x12c:  lea    -0x86(%ebp),%edx
085ca054 +0x132:  mov    %ebx,0xc(%esp)
085ca058 +0x136:  movl   $0x2,0x8(%esp)
085ca060 +0x13e:  mov    %eax,0x4(%esp)
085ca064 +0x142:  mov    %edx,(%esp)
085ca067 +0x145:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085ca06c +0x14a:  sub    $0x4,%esp
085ca06f +0x14d:  mov    0x10(%ebp),%eax
085ca072 +0x150:  lea    -0x86(%ebp),%edx
085ca078 +0x156:  mov    %edx,0x4(%esp)
085ca07c +0x15a:  mov    %eax,(%esp)
085ca07f +0x15d:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085ca084 +0x162:  jmp    085ca0d4 <+0x1b2>
085ca086 +0x164:  mov    0x10(%ebp),%eax
085ca089 +0x167:  movzwl 0x48(%eax),%eax
085ca08d +0x16b:  movswl %ax,%ebx
085ca090 +0x16e:  mov    0xc(%ebp),%eax
085ca093 +0x171:  mov    %eax,(%esp)
085ca096 +0x174:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085ca09b +0x179:  lea    -0x49(%ebp),%edx
085ca09e +0x17c:  mov    %ebx,0xc(%esp)
085ca0a2 +0x180:  movl   $0x3,0x8(%esp)
085ca0aa +0x188:  mov    %eax,0x4(%esp)
085ca0ae +0x18c:  mov    %edx,(%esp)
085ca0b1 +0x18f:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085ca0b6 +0x194:  sub    $0x4,%esp
085ca0b9 +0x197:  mov    0x10(%ebp),%eax
085ca0bc +0x19a:  lea    -0x49(%ebp),%edx
085ca0bf +0x19d:  mov    %edx,0x4(%esp)
085ca0c3 +0x1a1:  mov    %eax,(%esp)
085ca0c6 +0x1a4:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
085ca0cb +0x1a9:  jmp    085ca0d4 <+0x1b2>
085ca0cd +0x1ab:  mov    $0x0,%eax
085ca0d2 +0x1b0:  jmp    085ca111 <+0x1ef>
085ca0d4 +0x1b2:  mov    0x10(%ebp),%eax
085ca0d7 +0x1b5:  mov    0x2(%eax),%eax
085ca0da +0x1b8:  test   %eax,%eax
085ca0dc +0x1ba:  jne    085ca0e5 <+0x1c3>
085ca0de +0x1bc:  mov    $0x0,%eax
085ca0e3 +0x1c1:  jmp    085ca111 <+0x1ef>
085ca0e5 +0x1c3:  mov    -0xc(%ebp),%eax
085ca0e8 +0x1c6:  mov    %eax,0x8(%esp)
085ca0ec +0x1ca:  mov    0x10(%ebp),%eax
085ca0ef +0x1cd:  mov    %eax,0x4(%esp)
085ca0f3 +0x1d1:  mov    0x8(%ebp),%eax
085ca0f6 +0x1d4:  mov    %eax,(%esp)
085ca0f9 +0x1d7:  call   085c9d4e <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi>  ; private_store::CPrivateStore::CheckValidItem(private_store::PrivateStoreItem&, int)
085ca0fe +0x1dc:  xor    $0x1,%eax
085ca101 +0x1df:  test   %al,%al
085ca103 +0x1e1:  je     085ca10c <+0x1ea>
085ca105 +0x1e3:  mov    $0x0,%eax
085ca10a +0x1e8:  jmp    085ca111 <+0x1ef>
085ca10c +0x1ea:  mov    $0x1,%eax
085ca111 +0x1ef:  mov    -0x4(%ebp),%ebx
085ca114 +0x1f2:  leave
085ca115 +0x1f3:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::GetItemInfo @ 0x85c9f22

/* private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&) */

undefined4 __thiscall
private_store::CPrivateStore::GetItemInfo
          (CPrivateStore *this,CUser *param_1,PrivateStoreItem *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Inven_Item local_141 [61];
  Inven_Item local_104 [61];
  Inven_Item local_c7 [61];
  Inven_Item local_8a [61];
  Inven_Item local_4d [61];
  int local_10;
  
  local_10 = *(int *)(param_2 + 7);
  switch(param_2[0x46]) {
  case (PrivateStoreItem)0x0:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_141,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_141);
    break;
  case (PrivateStoreItem)0x1:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_8a,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_8a);
    break;
  case (PrivateStoreItem)0x2:
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_104);
    Inven_Item::setCopy((Inven_Item *)param_2,local_104);
    break;
  case (PrivateStoreItem)0x3:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_c7,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_c7);
    break;
  default:
    return 0;
  case (PrivateStoreItem)0x7:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_4d,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_4d);
  }
  if (*(int *)(param_2 + 2) == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CheckValidItem(this,param_2,local_10);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
