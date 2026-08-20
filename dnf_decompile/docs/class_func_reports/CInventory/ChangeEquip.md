# ChangeEquip

`_ZN10CInventory11ChangeEquipE10INVEN_TYPEii`

`CInventory::ChangeEquip(INVEN_TYPE, int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fc37e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fc37e  _ZN10CInventory11ChangeEquipE10INVEN_TYPEii
#           CInventory::ChangeEquip(INVEN_TYPE, int, int)
# range [0x084fc37e, 0x084fc540]
084fc37e +0x000:  push   %ebp
084fc37f +0x001:  mov    %esp,%ebp
084fc381 +0x003:  sub    $0xb8,%esp
084fc387 +0x009:  mov    0xc(%ebp),%eax
084fc38a +0x00c:  mov    0x10(%ebp),%edx
084fc38d +0x00f:  mov    %edx,0x8(%esp)
084fc391 +0x013:  mov    %eax,0x4(%esp)
084fc395 +0x017:  mov    0x8(%ebp),%eax
084fc398 +0x01a:  mov    %eax,(%esp)
084fc39b +0x01d:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fc3a0 +0x022:  xor    $0x1,%eax
084fc3a3 +0x025:  test   %al,%al
084fc3a5 +0x027:  je     084fc3b1 <+0x33>
084fc3a7 +0x029:  mov    $0x1,%eax
084fc3ac +0x02e:  jmp    084fc53f <+0x1c1>
084fc3b1 +0x033:  mov    0xc(%ebp),%eax
084fc3b4 +0x036:  cmp    $0x1,%eax
084fc3b7 +0x039:  je     084fc3c7 <+0x49>
084fc3b9 +0x03b:  cmp    $0x2,%eax
084fc3bc +0x03e:  je     084fc4e9 <+0x16b>
084fc3c2 +0x044:  jmp    084fc53a <+0x1bc>
084fc3c7 +0x049:  cmpl   $0x9,0x14(%ebp)
084fc3cb +0x04d:  jg     084fc3d7 <+0x59>
084fc3cd +0x04f:  mov    $0x15,%eax
084fc3d2 +0x054:  jmp    084fc53f <+0x1c1>
084fc3d7 +0x059:  lea    -0x8e(%ebp),%eax
084fc3dd +0x05f:  mov    0x10(%ebp),%edx
084fc3e0 +0x062:  mov    %edx,0xc(%esp)
084fc3e4 +0x066:  movl   $0x1,0x8(%esp)
084fc3ec +0x06e:  mov    0x8(%ebp),%edx
084fc3ef +0x071:  mov    %edx,0x4(%esp)
084fc3f3 +0x075:  mov    %eax,(%esp)
084fc3f6 +0x078:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084fc3fb +0x07d:  sub    $0x4,%esp
084fc3fe +0x080:  movzbl -0x8e(%ebp),%eax
084fc405 +0x087:  test   %al,%al
084fc407 +0x089:  je     084fc438 <+0xba>
084fc409 +0x08b:  mov    0x8(%ebp),%eax
084fc40c +0x08e:  mov    (%eax),%edx
084fc40e +0x090:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
084fc413 +0x095:  movl   $0x16,0x8(%esp)
084fc41b +0x09d:  mov    %edx,0x4(%esp)
084fc41f +0x0a1:  mov    %eax,(%esp)
084fc422 +0x0a4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
084fc427 +0x0a9:  mov    %eax,-0x10(%ebp)
084fc42a +0x0ac:  cmpl   $0x0,-0x10(%ebp)
084fc42e +0x0b0:  je     084fc438 <+0xba>
084fc430 +0x0b2:  mov    -0x10(%ebp),%eax
084fc433 +0x0b5:  jmp    084fc53f <+0x1c1>
084fc438 +0x0ba:  mov    0x8(%ebp),%eax
084fc43b +0x0bd:  mov    (%eax),%eax
084fc43d +0x0bf:  test   %eax,%eax
084fc43f +0x0c1:  je     084fc4a6 <+0x128>
084fc441 +0x0c3:  mov    0xc(%ebp),%edx
084fc444 +0x0c6:  mov    0x8(%ebp),%eax
084fc447 +0x0c9:  mov    (%eax),%eax
084fc449 +0x0cb:  mov    0x10(%ebp),%ecx
084fc44c +0x0ce:  mov    %ecx,0x8(%esp)
084fc450 +0x0d2:  mov    %edx,0x4(%esp)
084fc454 +0x0d6:  mov    %eax,(%esp)
084fc457 +0x0d9:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
084fc45c +0x0de:  test   %al,%al
084fc45e +0x0e0:  je     084fc493 <+0x115>
084fc460 +0x0e2:  lea    -0x51(%ebp),%eax
084fc463 +0x0e5:  mov    0x10(%ebp),%edx
084fc466 +0x0e8:  mov    %edx,0xc(%esp)
084fc46a +0x0ec:  movl   $0x1,0x8(%esp)
084fc472 +0x0f4:  mov    0x8(%ebp),%edx
084fc475 +0x0f7:  mov    %edx,0x4(%esp)
084fc479 +0x0fb:  mov    %eax,(%esp)
084fc47c +0x0fe:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084fc481 +0x103:  sub    $0x4,%esp
084fc484 +0x106:  movzbl -0x51(%ebp),%eax
084fc488 +0x10a:  test   %al,%al
084fc48a +0x10c:  je     084fc493 <+0x115>
084fc48c +0x10e:  mov    $0x1,%eax
084fc491 +0x113:  jmp    084fc498 <+0x11a>
084fc493 +0x115:  mov    $0x0,%eax
084fc498 +0x11a:  test   %al,%al
084fc49a +0x11c:  je     084fc4a6 <+0x128>
084fc49c +0x11e:  mov    $0xd5,%eax
084fc4a1 +0x123:  jmp    084fc53f <+0x1c1>
084fc4a6 +0x128:  movl   $0x0,-0x14(%ebp)
084fc4ad +0x12f:  mov    0x10(%ebp),%eax
084fc4b0 +0x132:  mov    %eax,0x10(%esp)
084fc4b4 +0x136:  movl   $0x1,0xc(%esp)
084fc4bc +0x13e:  mov    0x14(%ebp),%eax
084fc4bf +0x141:  mov    %eax,0x8(%esp)
084fc4c3 +0x145:  movl   $0x0,0x4(%esp)
084fc4cb +0x14d:  mov    0x8(%ebp),%eax
084fc4ce +0x150:  mov    %eax,(%esp)
084fc4d1 +0x153:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
084fc4d6 +0x158:  mov    %eax,-0x14(%ebp)
084fc4d9 +0x15b:  cmpl   $0x0,-0x14(%ebp)
084fc4dd +0x15f:  setne  %al
084fc4e0 +0x162:  test   %al,%al
084fc4e2 +0x164:  je     084fc539 <+0x1bb>
084fc4e4 +0x166:  mov    -0x14(%ebp),%eax
084fc4e7 +0x169:  jmp    084fc53f <+0x1c1>
084fc4e9 +0x16b:  cmpl   $0x9,0x14(%ebp)
084fc4ed +0x16f:  jle    084fc4f6 <+0x178>
084fc4ef +0x171:  mov    $0x15,%eax
084fc4f4 +0x176:  jmp    084fc53f <+0x1c1>
084fc4f6 +0x178:  movl   $0x0,-0xc(%ebp)
084fc4fd +0x17f:  mov    0x10(%ebp),%eax
084fc500 +0x182:  mov    %eax,0x10(%esp)
084fc504 +0x186:  movl   $0x2,0xc(%esp)
084fc50c +0x18e:  mov    0x14(%ebp),%eax
084fc50f +0x191:  mov    %eax,0x8(%esp)
084fc513 +0x195:  movl   $0x0,0x4(%esp)
084fc51b +0x19d:  mov    0x8(%ebp),%eax
084fc51e +0x1a0:  mov    %eax,(%esp)
084fc521 +0x1a3:  call   08500688 <_ZN10CInventory9move_itemE10INVEN_TYPEiS0_i>  ; CInventory::move_item(INVEN_TYPE, int, INVEN_TYPE, int)
084fc526 +0x1a8:  mov    %eax,-0xc(%ebp)
084fc529 +0x1ab:  cmpl   $0x0,-0xc(%ebp)
084fc52d +0x1af:  setne  %al
084fc530 +0x1b2:  test   %al,%al
084fc532 +0x1b4:  je     084fc53a <+0x1bc>
084fc534 +0x1b6:  mov    -0xc(%ebp),%eax
084fc537 +0x1b9:  jmp    084fc53f <+0x1c1>
084fc539 +0x1bb:  nop
084fc53a +0x1bc:  mov    $0x0,%eax
084fc53f +0x1c1:  leave
084fc540 +0x1c2:  ret
```

## 反编译 C

```c
// CInventory::ChangeEquip @ 0x84fc37e

/* CInventory::ChangeEquip(INVEN_TYPE, int, int) */

int __thiscall CInventory::ChangeEquip(CInventory *this,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char local_92 [61];
  char local_55 [61];
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  cVar2 = CheckValidSlot(this,param_2,param_3);
  if (cVar2 != '\x01') {
    return 1;
  }
  if (param_2 == 1) {
    if (param_4 < 10) {
      return 0x15;
    }
    iVar3 = param_3;
    GetInvenSlot((int)local_92,(int)this);
    if ((local_92[0] != '\0') &&
       (local_14 = CSecu_ProtectionField::Check
                             (GlobalData::s_pSecuProtectionField,*(undefined4 *)this,0x16,iVar3),
       local_14 != 0)) {
      return local_14;
    }
    if (*(int *)this != 0) {
      cVar2 = CUser::CheckItemLock(*(CUser **)this,1,param_3);
      if ((cVar2 == '\0') || (GetInvenSlot((int)local_55,(int)this), local_55[0] == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return 0xd5;
      }
    }
    local_18 = 0;
    iVar3 = move_item(this,0,param_4,1,param_3);
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    if (9 < param_4) {
      return 0x15;
    }
    local_10 = 0;
    iVar3 = move_item(this,0,param_4,2,param_3);
  }
  if (iVar3 == 0) {
    return 0;
  }
  return iVar3;
}
```
