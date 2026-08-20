# checkBonusPoint

`_ZN15CUserCharacInfo15checkBonusPointEv`

`CUserCharacInfo::checkBonusPoint()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ec5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ec5c  _ZN15CUserCharacInfo15checkBonusPointEv
#           CUserCharacInfo::checkBonusPoint()
# range [0x0868ec5c, 0x0868ee25]
0868ec5c +0x000:  push   %ebp
0868ec5d +0x001:  mov    %esp,%ebp
0868ec5f +0x003:  push   %esi
0868ec60 +0x004:  push   %ebx
0868ec61 +0x005:  sub    $0x20,%esp
0868ec64 +0x008:  mov    0x8(%ebp),%eax
0868ec67 +0x00b:  mov    0x10(%eax),%eax
0868ec6a +0x00e:  test   %eax,%eax
0868ec6c +0x010:  je     0868ee1e <+0x1c2>
0868ec72 +0x016:  mov    0x8(%ebp),%eax
0868ec75 +0x019:  mov    %eax,(%esp)
0868ec78 +0x01c:  call   0868ee7a <_ZN15CUserCharacInfo15resetBonusPointEv>  ; CUserCharacInfo::resetBonusPoint()
0868ec7d +0x021:  movl   $0x0,-0x18(%ebp)
0868ec84 +0x028:  movl   $0xa,-0x14(%ebp)
0868ec8b +0x02f:  jmp    0868ee0d <+0x1b1>
0868ec90 +0x034:  mov    0x8(%ebp),%eax
0868ec93 +0x037:  mov    %eax,(%esp)
0868ec96 +0x03a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0868ec9b +0x03f:  mov    -0x14(%ebp),%edx
0868ec9e +0x042:  mov    %edx,0x8(%esp)
0868eca2 +0x046:  movl   $0x0,0x4(%esp)
0868ecaa +0x04e:  mov    %eax,(%esp)
0868ecad +0x051:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
0868ecb2 +0x056:  mov    %eax,-0x18(%ebp)
0868ecb5 +0x059:  cmpl   $0x0,-0x18(%ebp)
0868ecb9 +0x05d:  sete   %al
0868ecbc +0x060:  test   %al,%al
0868ecbe +0x062:  jne    0868ee02 <+0x1a6>
0868ecc4 +0x068:  mov    -0x18(%ebp),%eax
0868ecc7 +0x06b:  mov    0x2(%eax),%eax
0868ecca +0x06e:  test   %eax,%eax
0868eccc +0x070:  je     0868ee05 <+0x1a9>
0868ecd2 +0x076:  mov    -0x18(%ebp),%eax
0868ecd5 +0x079:  mov    0x2(%eax),%eax
0868ecd8 +0x07c:  mov    %eax,%ebx
0868ecda +0x07e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868ecdf +0x083:  mov    %ebx,0x4(%esp)
0868ece3 +0x087:  mov    %eax,(%esp)
0868ece6 +0x08a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868eceb +0x08f:  mov    %eax,-0x10(%ebp)
0868ecee +0x092:  cmpl   $0x0,-0x10(%ebp)
0868ecf2 +0x096:  je     0868ee08 <+0x1ac>
0868ecf8 +0x09c:  mov    -0x10(%ebp),%eax
0868ecfb +0x09f:  mov    %eax,-0xc(%ebp)
0868ecfe +0x0a2:  mov    -0xc(%ebp),%eax
0868ed01 +0x0a5:  mov    %eax,(%esp)
0868ed04 +0x0a8:  call   08513522 <_ZNK10CEquipItem15getWpBonusPointEv>  ; CEquipItem::getWpBonusPoint() const
0868ed09 +0x0ad:  mov    (%eax),%eax
0868ed0b +0x0af:  test   %eax,%eax
0868ed0d +0x0b1:  sete   %al
0868ed10 +0x0b4:  test   %al,%al
0868ed12 +0x0b6:  je     0868ed3f <+0xe3>
0868ed14 +0x0b8:  mov    0x8(%ebp),%eax
0868ed17 +0x0bb:  mov    0x10(%eax),%ebx
0868ed1a +0x0be:  mov    0x8(%ebp),%eax
0868ed1d +0x0c1:  mov    0x10(%eax),%eax
0868ed20 +0x0c4:  mov    0x129d(%eax),%esi
0868ed26 +0x0ca:  mov    -0xc(%ebp),%eax
0868ed29 +0x0cd:  mov    %eax,(%esp)
0868ed2c +0x0d0:  call   08513522 <_ZNK10CEquipItem15getWpBonusPointEv>  ; CEquipItem::getWpBonusPoint() const
0868ed31 +0x0d5:  mov    0x4(%eax),%eax
0868ed34 +0x0d8:  lea    (%esi,%eax,1),%eax
0868ed37 +0x0db:  mov    %eax,0x129d(%ebx)
0868ed3d +0x0e1:  jmp    0868ed7f <+0x123>
0868ed3f +0x0e3:  mov    -0xc(%ebp),%eax
0868ed42 +0x0e6:  mov    %eax,(%esp)
0868ed45 +0x0e9:  call   08513522 <_ZNK10CEquipItem15getWpBonusPointEv>  ; CEquipItem::getWpBonusPoint() const
0868ed4a +0x0ee:  mov    (%eax),%eax
0868ed4c +0x0f0:  cmp    $0x1,%eax
0868ed4f +0x0f3:  sete   %al
0868ed52 +0x0f6:  test   %al,%al
0868ed54 +0x0f8:  je     0868ed7f <+0x123>
0868ed56 +0x0fa:  mov    0x8(%ebp),%eax
0868ed59 +0x0fd:  mov    0x10(%eax),%ebx
0868ed5c +0x100:  mov    0x8(%ebp),%eax
0868ed5f +0x103:  mov    0x10(%eax),%eax
0868ed62 +0x106:  mov    0x12a1(%eax),%esi
0868ed68 +0x10c:  mov    -0xc(%ebp),%eax
0868ed6b +0x10f:  mov    %eax,(%esp)
0868ed6e +0x112:  call   08513522 <_ZNK10CEquipItem15getWpBonusPointEv>  ; CEquipItem::getWpBonusPoint() const
0868ed73 +0x117:  mov    0x4(%eax),%eax
0868ed76 +0x11a:  lea    (%esi,%eax,1),%eax
0868ed79 +0x11d:  mov    %eax,0x12a1(%ebx)
0868ed7f +0x123:  mov    -0xc(%ebp),%eax
0868ed82 +0x126:  mov    %eax,(%esp)
0868ed85 +0x129:  call   08513530 <_ZNK10CEquipItem16getExpBonusPointEv>  ; CEquipItem::getExpBonusPoint() const
0868ed8a +0x12e:  mov    (%eax),%eax
0868ed8c +0x130:  test   %eax,%eax
0868ed8e +0x132:  sete   %al
0868ed91 +0x135:  test   %al,%al
0868ed93 +0x137:  je     0868edc0 <+0x164>
0868ed95 +0x139:  mov    0x8(%ebp),%eax
0868ed98 +0x13c:  mov    0x10(%eax),%ebx
0868ed9b +0x13f:  mov    0x8(%ebp),%eax
0868ed9e +0x142:  mov    0x10(%eax),%eax
0868eda1 +0x145:  mov    0x12a5(%eax),%esi
0868eda7 +0x14b:  mov    -0xc(%ebp),%eax
0868edaa +0x14e:  mov    %eax,(%esp)
0868edad +0x151:  call   08513530 <_ZNK10CEquipItem16getExpBonusPointEv>  ; CEquipItem::getExpBonusPoint() const
0868edb2 +0x156:  mov    0x4(%eax),%eax
0868edb5 +0x159:  lea    (%esi,%eax,1),%eax
0868edb8 +0x15c:  mov    %eax,0x12a5(%ebx)
0868edbe +0x162:  jmp    0868ee09 <+0x1ad>
0868edc0 +0x164:  mov    -0xc(%ebp),%eax
0868edc3 +0x167:  mov    %eax,(%esp)
0868edc6 +0x16a:  call   08513530 <_ZNK10CEquipItem16getExpBonusPointEv>  ; CEquipItem::getExpBonusPoint() const
0868edcb +0x16f:  mov    (%eax),%eax
0868edcd +0x171:  cmp    $0x1,%eax
0868edd0 +0x174:  sete   %al
0868edd3 +0x177:  test   %al,%al
0868edd5 +0x179:  je     0868ee09 <+0x1ad>
0868edd7 +0x17b:  mov    0x8(%ebp),%eax
0868edda +0x17e:  mov    0x10(%eax),%ebx
0868eddd +0x181:  mov    0x8(%ebp),%eax
0868ede0 +0x184:  mov    0x10(%eax),%eax
0868ede3 +0x187:  mov    0x12a9(%eax),%esi
0868ede9 +0x18d:  mov    -0xc(%ebp),%eax
0868edec +0x190:  mov    %eax,(%esp)
0868edef +0x193:  call   08513530 <_ZNK10CEquipItem16getExpBonusPointEv>  ; CEquipItem::getExpBonusPoint() const
0868edf4 +0x198:  mov    0x4(%eax),%eax
0868edf7 +0x19b:  lea    (%esi,%eax,1),%eax
0868edfa +0x19e:  mov    %eax,0x12a9(%ebx)
0868ee00 +0x1a4:  jmp    0868ee09 <+0x1ad>
0868ee02 +0x1a6:  nop
0868ee03 +0x1a7:  jmp    0868ee09 <+0x1ad>
0868ee05 +0x1a9:  nop
0868ee06 +0x1aa:  jmp    0868ee09 <+0x1ad>
0868ee08 +0x1ac:  nop
0868ee09 +0x1ad:  addl   $0x1,-0x14(%ebp)
0868ee0d +0x1b1:  cmpl   $0x15,-0x14(%ebp)
0868ee11 +0x1b5:  setle  %al
0868ee14 +0x1b8:  test   %al,%al
0868ee16 +0x1ba:  jne    0868ec90 <+0x34>
0868ee1c +0x1c0:  jmp    0868ee1f <+0x1c3>
0868ee1e +0x1c2:  nop
0868ee1f +0x1c3:  add    $0x20,%esp
0868ee22 +0x1c6:  pop    %ebx
0868ee23 +0x1c7:  pop    %esi
0868ee24 +0x1c8:  pop    %ebp
0868ee25 +0x1c9:  ret
```

## 反编译 C

```c
// CUserCharacInfo::checkBonusPoint @ 0x868ec5c

/* CUserCharacInfo::checkBonusPoint() */

void __thiscall CUserCharacInfo::checkBonusPoint(CUserCharacInfo *this)

{
  int iVar1;
  CInventory *this_00;
  int iVar2;
  CDataManager *this_01;
  CEquipItem *this_02;
  int *piVar3;
  int iVar4;
  int local_18;
  
  if (*(int *)(this + 0x10) != 0) {
    resetBonusPoint(this);
    for (local_18 = 10; local_18 < 0x16; local_18 = local_18 + 1) {
      this_00 = (CInventory *)getCurCharacInvenR(this);
      iVar2 = CInventory::GetInvenRef(this_00,0,local_18);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) {
        iVar2 = *(int *)(iVar2 + 2);
        this_01 = (CDataManager *)G_CDataManager();
        this_02 = (CEquipItem *)CDataManager::find_item(this_01,iVar2);
        if (this_02 != (CEquipItem *)0x0) {
          piVar3 = (int *)CEquipItem::getWpBonusPoint(this_02);
          if (*piVar3 == 0) {
            iVar2 = *(int *)(this + 0x10);
            iVar1 = *(int *)(*(int *)(this + 0x10) + 0x129d);
            iVar4 = CEquipItem::getWpBonusPoint(this_02);
            *(int *)(iVar2 + 0x129d) = iVar1 + *(int *)(iVar4 + 4);
          }
          else {
            piVar3 = (int *)CEquipItem::getWpBonusPoint(this_02);
            if (*piVar3 == 1) {
              iVar2 = *(int *)(this + 0x10);
              iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a1);
              iVar4 = CEquipItem::getWpBonusPoint(this_02);
              *(int *)(iVar2 + 0x12a1) = iVar1 + *(int *)(iVar4 + 4);
            }
          }
          piVar3 = (int *)CEquipItem::getExpBonusPoint(this_02);
          if (*piVar3 == 0) {
            iVar2 = *(int *)(this + 0x10);
            iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a5);
            iVar4 = CEquipItem::getExpBonusPoint(this_02);
            *(int *)(iVar2 + 0x12a5) = iVar1 + *(int *)(iVar4 + 4);
          }
          else {
            piVar3 = (int *)CEquipItem::getExpBonusPoint(this_02);
            if (*piVar3 == 1) {
              iVar2 = *(int *)(this + 0x10);
              iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a9);
              iVar4 = CEquipItem::getExpBonusPoint(this_02);
              *(int *)(iVar2 + 0x12a9) = iVar1 + *(int *)(iVar4 + 4);
            }
          }
        }
      }
    }
  }
  return;
}
```
