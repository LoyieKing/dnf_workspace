# getItem

`_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item`

`Dispatcher_UseRenameCard::getItem(CUser const&, int, short, Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRenameCard` | `0x081e756c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e756c  _ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item
#           Dispatcher_UseRenameCard::getItem(CUser const&, int, short, Inven_Item&) const
# range [0x081e756c, 0x081e7651]
081e756c +0x00:  push   %ebp
081e756d +0x01:  mov    %esp,%ebp
081e756f +0x03:  push   %esi
081e7570 +0x04:  push   %ebx
081e7571 +0x05:  sub    $0x60,%esp
081e7574 +0x08:  mov    0x14(%ebp),%eax
081e7577 +0x0b:  mov    %ax,-0xc(%ebp)
081e757b +0x0f:  movswl -0xc(%ebp),%eax
081e757f +0x13:  mov    %eax,0x8(%esp)
081e7583 +0x17:  mov    0x10(%ebp),%eax
081e7586 +0x1a:  mov    %eax,0x4(%esp)
081e758a +0x1e:  mov    0xc(%ebp),%eax
081e758d +0x21:  mov    %eax,(%esp)
081e7590 +0x24:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081e7595 +0x29:  test   %al,%al
081e7597 +0x2b:  je     081e75a3 <+0x37>
081e7599 +0x2d:  mov    $0x1,%eax
081e759e +0x32:  jmp    081e7648 <+0xdc>
081e75a3 +0x37:  movswl -0xc(%ebp),%esi
081e75a7 +0x3b:  mov    0xc(%ebp),%eax
081e75aa +0x3e:  mov    %eax,(%esp)
081e75ad +0x41:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e75b2 +0x46:  mov    0x18(%ebp),%ebx
081e75b5 +0x49:  lea    -0x58(%ebp),%edx
081e75b8 +0x4c:  mov    %esi,0xc(%esp)
081e75bc +0x50:  mov    0x10(%ebp),%ecx
081e75bf +0x53:  mov    %ecx,0x8(%esp)
081e75c3 +0x57:  mov    %eax,0x4(%esp)
081e75c7 +0x5b:  mov    %edx,(%esp)
081e75ca +0x5e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e75cf +0x63:  sub    $0x4,%esp
081e75d2 +0x66:  mov    -0x58(%ebp),%eax
081e75d5 +0x69:  mov    %eax,(%ebx)
081e75d7 +0x6b:  mov    -0x54(%ebp),%eax
081e75da +0x6e:  mov    %eax,0x4(%ebx)
081e75dd +0x71:  mov    -0x50(%ebp),%eax
081e75e0 +0x74:  mov    %eax,0x8(%ebx)
081e75e3 +0x77:  mov    -0x4c(%ebp),%eax
081e75e6 +0x7a:  mov    %eax,0xc(%ebx)
081e75e9 +0x7d:  mov    -0x48(%ebp),%eax
081e75ec +0x80:  mov    %eax,0x10(%ebx)
081e75ef +0x83:  mov    -0x44(%ebp),%eax
081e75f2 +0x86:  mov    %eax,0x14(%ebx)
081e75f5 +0x89:  mov    -0x40(%ebp),%eax
081e75f8 +0x8c:  mov    %eax,0x18(%ebx)
081e75fb +0x8f:  mov    -0x3c(%ebp),%eax
081e75fe +0x92:  mov    %eax,0x1c(%ebx)
081e7601 +0x95:  mov    -0x38(%ebp),%eax
081e7604 +0x98:  mov    %eax,0x20(%ebx)
081e7607 +0x9b:  mov    -0x34(%ebp),%eax
081e760a +0x9e:  mov    %eax,0x24(%ebx)
081e760d +0xa1:  mov    -0x30(%ebp),%eax
081e7610 +0xa4:  mov    %eax,0x28(%ebx)
081e7613 +0xa7:  mov    -0x2c(%ebp),%eax
081e7616 +0xaa:  mov    %eax,0x2c(%ebx)
081e7619 +0xad:  mov    -0x28(%ebp),%eax
081e761c +0xb0:  mov    %eax,0x30(%ebx)
081e761f +0xb3:  mov    -0x24(%ebp),%eax
081e7622 +0xb6:  mov    %eax,0x34(%ebx)
081e7625 +0xb9:  mov    -0x20(%ebp),%eax
081e7628 +0xbc:  mov    %eax,0x38(%ebx)
081e762b +0xbf:  movzbl -0x1c(%ebp),%eax
081e762f +0xc3:  mov    %al,0x3c(%ebx)
081e7632 +0xc6:  mov    0x18(%ebp),%eax
081e7635 +0xc9:  mov    0x2(%eax),%eax
081e7638 +0xcc:  test   %eax,%eax
081e763a +0xce:  jne    081e7643 <+0xd7>
081e763c +0xd0:  mov    $0x1,%eax
081e7641 +0xd5:  jmp    081e7648 <+0xdc>
081e7643 +0xd7:  mov    $0x0,%eax
081e7648 +0xdc:  lea    -0x8(%ebp),%esp
081e764b +0xdf:  add    $0x0,%esp
081e764e +0xe2:  pop    %ebx
081e764f +0xe3:  pop    %esi
081e7650 +0xe4:  pop    %ebp
081e7651 +0xe5:  ret
```

## 反编译 C

```c
// Dispatcher_UseRenameCard::getItem @ 0x81e756c

/* Dispatcher_UseRenameCard::getItem(CUser const&, int, short, Inven_Item&) const */

undefined4 __thiscall
Dispatcher_UseRenameCard::getItem
          (Dispatcher_UseRenameCard *this,CUser *param_1,int param_2,short param_3,
          Inven_Item *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  short local_10;
  
  local_10 = param_3;
  cVar1 = CUser::CheckItemLock(param_1,param_2,(int)param_3);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_5c,iVar3);
    *(undefined4 *)param_4 = local_5c;
    *(undefined4 *)(param_4 + 4) = local_58;
    *(undefined4 *)(param_4 + 8) = local_54;
    *(undefined4 *)(param_4 + 0xc) = local_50;
    *(undefined4 *)(param_4 + 0x10) = local_4c;
    *(undefined4 *)(param_4 + 0x14) = local_48;
    *(undefined4 *)(param_4 + 0x18) = local_44;
    *(undefined4 *)(param_4 + 0x1c) = local_40;
    *(undefined4 *)(param_4 + 0x20) = local_3c;
    *(undefined4 *)(param_4 + 0x24) = local_38;
    *(undefined4 *)(param_4 + 0x28) = local_34;
    *(undefined4 *)(param_4 + 0x2c) = local_30;
    *(undefined4 *)(param_4 + 0x30) = local_2c;
    *(undefined4 *)(param_4 + 0x34) = local_28;
    *(undefined4 *)(param_4 + 0x38) = local_24;
    param_4[0x3c] = local_20;
    if (*(int *)(param_4 + 2) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
