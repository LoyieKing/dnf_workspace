# startUseMaterial

`_ZN20CraneMinigameManager16startUseMaterialEP5CUseri`

`CraneMinigameManager::startUseMaterial(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebe06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebe06  _ZN20CraneMinigameManager16startUseMaterialEP5CUseri
#           CraneMinigameManager::startUseMaterial(CUser*, int)
# range [0x080ebe06, 0x080ebebb]
080ebe06 +0x00:  push   %ebp
080ebe07 +0x01:  mov    %esp,%ebp
080ebe09 +0x03:  push   %ebx
080ebe0a +0x04:  sub    $0x64,%esp
080ebe0d +0x07:  mov    0xc(%ebp),%eax
080ebe10 +0x0a:  mov    %eax,(%esp)
080ebe13 +0x0d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
080ebe18 +0x12:  lea    -0x45(%ebp),%edx
080ebe1b +0x15:  mov    0x10(%ebp),%ecx
080ebe1e +0x18:  mov    %ecx,0xc(%esp)
080ebe22 +0x1c:  movl   $0x1,0x8(%esp)
080ebe2a +0x24:  mov    %eax,0x4(%esp)
080ebe2e +0x28:  mov    %edx,(%esp)
080ebe31 +0x2b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
080ebe36 +0x30:  sub    $0x4,%esp
080ebe39 +0x33:  mov    -0x43(%ebp),%edx
080ebe3c +0x36:  mov    0x8(%ebp),%eax
080ebe3f +0x39:  mov    0x10(%eax),%eax
080ebe42 +0x3c:  cmp    %eax,%edx
080ebe44 +0x3e:  je     080ebe4d <+0x47>
080ebe46 +0x40:  mov    $0x11,%eax
080ebe4b +0x45:  jmp    080ebeb6 <+0xb0>
080ebe4d +0x47:  mov    -0x3e(%ebp),%edx
080ebe50 +0x4a:  mov    0x8(%ebp),%eax
080ebe53 +0x4d:  movzwl 0x14(%eax),%eax
080ebe57 +0x51:  cwtl
080ebe58 +0x52:  cmp    %eax,%edx
080ebe5a +0x54:  jge    080ebe63 <+0x5d>
080ebe5c +0x56:  mov    $0x16,%eax
080ebe61 +0x5b:  jmp    080ebeb6 <+0xb0>
080ebe63 +0x5d:  mov    0x8(%ebp),%eax
080ebe66 +0x60:  movzwl 0x14(%eax),%eax
080ebe6a +0x64:  movswl %ax,%ebx
080ebe6d +0x67:  mov    0xc(%ebp),%eax
080ebe70 +0x6a:  mov    %eax,(%esp)
080ebe73 +0x6d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
080ebe78 +0x72:  movl   $0x1,0x14(%esp)
080ebe80 +0x7a:  movl   $0x34,0x10(%esp)
080ebe88 +0x82:  mov    %ebx,0xc(%esp)
080ebe8c +0x86:  mov    0x10(%ebp),%edx
080ebe8f +0x89:  mov    %edx,0x8(%esp)
080ebe93 +0x8d:  movl   $0x1,0x4(%esp)
080ebe9b +0x95:  mov    %eax,(%esp)
080ebe9e +0x98:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
080ebea3 +0x9d:  xor    $0x1,%eax
080ebea6 +0xa0:  test   %al,%al
080ebea8 +0xa2:  je     080ebeb1 <+0xab>
080ebeaa +0xa4:  mov    $0x16,%eax
080ebeaf +0xa9:  jmp    080ebeb6 <+0xb0>
080ebeb1 +0xab:  mov    $0x0,%eax
080ebeb6 +0xb0:  mov    -0x4(%ebp),%ebx
080ebeb9 +0xb3:  leave
080ebeba +0xb4:  ret
080ebebb +0xb5:  nop
```

## 反编译 C

```c
// CraneMinigameManager::startUseMaterial @ 0x80ebe06

/* CraneMinigameManager::startUseMaterial(CUser*, int) */

undefined4 __thiscall
CraneMinigameManager::startUseMaterial(CraneMinigameManager *this,CUser *param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined1 local_49 [2];
  int local_47;
  int local_42;
  
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_49,iVar3);
  if (local_47 == *(int *)(this + 0x10)) {
    if (local_42 < *(short *)(this + 0x14)) {
      uVar4 = 0x16;
    }
    else {
      sVar1 = *(short *)(this + 0x14);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar5,1,param_2,(int)sVar1,0x34,1);
      if (cVar2 == '\x01') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x16;
      }
    }
  }
  else {
    uVar4 = 0x11;
  }
  return uVar4;
}
```
