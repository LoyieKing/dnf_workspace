# GetItemPtr

`_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs`

`CSecu_ProtectionField::GetItemPtr(CUser*, char, short)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x082884d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082884d6  _ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs
#           CSecu_ProtectionField::GetItemPtr(CUser*, char, short)
# range [0x082884d6, 0x082886ad]
082884d6 +0x000:  push   %ebp
082884d7 +0x001:  mov    %esp,%ebp
082884d9 +0x003:  push   %esi
082884da +0x004:  push   %ebx
082884db +0x005:  sub    $0xb0,%esp
082884e1 +0x00b:  mov    0x10(%ebp),%edx
082884e4 +0x00e:  mov    0x14(%ebp),%eax
082884e7 +0x011:  mov    %dl,-0x5c(%ebp)
082884ea +0x014:  mov    %ax,-0x60(%ebp)
082884ee +0x018:  lea    -0x49(%ebp),%eax
082884f1 +0x01b:  mov    %eax,(%esp)
082884f4 +0x01e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
082884f9 +0x023:  movsbl -0x5c(%ebp),%eax
082884fd +0x027:  cmp    $0x2,%eax
08288500 +0x02a:  je     082885e0 <+0x10a>
08288506 +0x030:  cmp    $0x2,%eax
08288509 +0x033:  jg     08288514 <+0x3e>
0828850b +0x035:  test   %eax,%eax
0828850d +0x037:  je     08288522 <+0x4c>
0828850f +0x039:  jmp    08288687 <+0x1b1>
08288514 +0x03e:  cmp    $0x3,%eax
08288517 +0x041:  je     08288522 <+0x4c>
08288519 +0x043:  cmp    $0x7,%eax
0828851c +0x046:  jne    08288687 <+0x1b1>
08288522 +0x04c:  movswl -0x60(%ebp),%esi
08288526 +0x050:  movsbl -0x5c(%ebp),%eax
0828852a +0x054:  mov    %eax,(%esp)
0828852d +0x057:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
08288532 +0x05c:  mov    %eax,%ebx
08288534 +0x05e:  mov    0xc(%ebp),%eax
08288537 +0x061:  mov    %eax,(%esp)
0828853a +0x064:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0828853f +0x069:  lea    -0xa8(%ebp),%edx
08288545 +0x06f:  mov    %esi,0xc(%esp)
08288549 +0x073:  mov    %ebx,0x8(%esp)
0828854d +0x077:  mov    %eax,0x4(%esp)
08288551 +0x07b:  mov    %edx,(%esp)
08288554 +0x07e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08288559 +0x083:  sub    $0x4,%esp
0828855c +0x086:  mov    -0xa8(%ebp),%eax
08288562 +0x08c:  mov    %eax,-0x49(%ebp)
08288565 +0x08f:  mov    -0xa4(%ebp),%eax
0828856b +0x095:  mov    %eax,-0x45(%ebp)
0828856e +0x098:  mov    -0xa0(%ebp),%eax
08288574 +0x09e:  mov    %eax,-0x41(%ebp)
08288577 +0x0a1:  mov    -0x9c(%ebp),%eax
0828857d +0x0a7:  mov    %eax,-0x3d(%ebp)
08288580 +0x0aa:  mov    -0x98(%ebp),%eax
08288586 +0x0b0:  mov    %eax,-0x39(%ebp)
08288589 +0x0b3:  mov    -0x94(%ebp),%eax
0828858f +0x0b9:  mov    %eax,-0x35(%ebp)
08288592 +0x0bc:  mov    -0x90(%ebp),%eax
08288598 +0x0c2:  mov    %eax,-0x31(%ebp)
0828859b +0x0c5:  mov    -0x8c(%ebp),%eax
082885a1 +0x0cb:  mov    %eax,-0x2d(%ebp)
082885a4 +0x0ce:  mov    -0x88(%ebp),%eax
082885aa +0x0d4:  mov    %eax,-0x29(%ebp)
082885ad +0x0d7:  mov    -0x84(%ebp),%eax
082885b3 +0x0dd:  mov    %eax,-0x25(%ebp)
082885b6 +0x0e0:  mov    -0x80(%ebp),%eax
082885b9 +0x0e3:  mov    %eax,-0x21(%ebp)
082885bc +0x0e6:  mov    -0x7c(%ebp),%eax
082885bf +0x0e9:  mov    %eax,-0x1d(%ebp)
082885c2 +0x0ec:  mov    -0x78(%ebp),%eax
082885c5 +0x0ef:  mov    %eax,-0x19(%ebp)
082885c8 +0x0f2:  mov    -0x74(%ebp),%eax
082885cb +0x0f5:  mov    %eax,-0x15(%ebp)
082885ce +0x0f8:  mov    -0x70(%ebp),%eax
082885d1 +0x0fb:  mov    %eax,-0x11(%ebp)
082885d4 +0x0fe:  movzbl -0x6c(%ebp),%eax
082885d8 +0x102:  mov    %al,-0xd(%ebp)
082885db +0x105:  jmp    08288687 <+0x1b1>
082885e0 +0x10a:  movswl -0x60(%ebp),%ebx
082885e4 +0x10e:  mov    0xc(%ebp),%eax
082885e7 +0x111:  mov    %eax,(%esp)
082885ea +0x114:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
082885ef +0x119:  lea    -0xa8(%ebp),%edx
082885f5 +0x11f:  mov    %ebx,0x8(%esp)
082885f9 +0x123:  mov    %eax,0x4(%esp)
082885fd +0x127:  mov    %edx,(%esp)
08288600 +0x12a:  call   0850b2b4 <_ZNK6CCargo14get_cargo_slotEi>  ; CCargo::get_cargo_slot(int) const
08288605 +0x12f:  sub    $0x4,%esp
08288608 +0x132:  mov    -0xa8(%ebp),%eax
0828860e +0x138:  mov    %eax,-0x49(%ebp)
08288611 +0x13b:  mov    -0xa4(%ebp),%eax
08288617 +0x141:  mov    %eax,-0x45(%ebp)
0828861a +0x144:  mov    -0xa0(%ebp),%eax
08288620 +0x14a:  mov    %eax,-0x41(%ebp)
08288623 +0x14d:  mov    -0x9c(%ebp),%eax
08288629 +0x153:  mov    %eax,-0x3d(%ebp)
0828862c +0x156:  mov    -0x98(%ebp),%eax
08288632 +0x15c:  mov    %eax,-0x39(%ebp)
08288635 +0x15f:  mov    -0x94(%ebp),%eax
0828863b +0x165:  mov    %eax,-0x35(%ebp)
0828863e +0x168:  mov    -0x90(%ebp),%eax
08288644 +0x16e:  mov    %eax,-0x31(%ebp)
08288647 +0x171:  mov    -0x8c(%ebp),%eax
0828864d +0x177:  mov    %eax,-0x2d(%ebp)
08288650 +0x17a:  mov    -0x88(%ebp),%eax
08288656 +0x180:  mov    %eax,-0x29(%ebp)
08288659 +0x183:  mov    -0x84(%ebp),%eax
0828865f +0x189:  mov    %eax,-0x25(%ebp)
08288662 +0x18c:  mov    -0x80(%ebp),%eax
08288665 +0x18f:  mov    %eax,-0x21(%ebp)
08288668 +0x192:  mov    -0x7c(%ebp),%eax
0828866b +0x195:  mov    %eax,-0x1d(%ebp)
0828866e +0x198:  mov    -0x78(%ebp),%eax
08288671 +0x19b:  mov    %eax,-0x19(%ebp)
08288674 +0x19e:  mov    -0x74(%ebp),%eax
08288677 +0x1a1:  mov    %eax,-0x15(%ebp)
0828867a +0x1a4:  mov    -0x70(%ebp),%eax
0828867d +0x1a7:  mov    %eax,-0x11(%ebp)
08288680 +0x1aa:  movzbl -0x6c(%ebp),%eax
08288684 +0x1ae:  mov    %al,-0xd(%ebp)
08288687 +0x1b1:  mov    -0x47(%ebp),%eax
0828868a +0x1b4:  mov    %eax,%ebx
0828868c +0x1b6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08288691 +0x1bb:  mov    %ebx,0x4(%esp)
08288695 +0x1bf:  mov    %eax,(%esp)
08288698 +0x1c2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0828869d +0x1c7:  mov    %eax,-0xc(%ebp)
082886a0 +0x1ca:  mov    -0xc(%ebp),%eax
082886a3 +0x1cd:  lea    -0x8(%ebp),%esp
082886a6 +0x1d0:  add    $0x0,%esp
082886a9 +0x1d3:  pop    %ebx
082886aa +0x1d4:  pop    %esi
082886ab +0x1d5:  pop    %ebp
082886ac +0x1d6:  ret
082886ad +0x1d7:  nop
```

## 反编译 C

```c
// CSecu_ProtectionField::GetItemPtr @ 0x82884d6

/* CSecu_ProtectionField::GetItemPtr(CUser*, char, short) */

undefined4 __thiscall
CSecu_ProtectionField::GetItemPtr
          (CSecu_ProtectionField *this,CUser *param_1,char param_2,short param_3)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  short local_64;
  char local_60;
  undefined2 local_4d;
  undefined2 uStack_4b;
  undefined2 uStack_49;
  undefined2 uStack_47;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  
  local_60 = param_2;
  local_64 = param_3;
  Inven_Item::Inven_Item((Inven_Item *)&local_4d);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_4d = (undefined2)local_ac._0_4_;
    uStack_4b = SUB42(local_ac._0_4_,2);
    uStack_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else {
    if (local_60 < '\x03') {
      if (local_60 != '\0') goto LAB_08288687;
    }
    else if ((local_60 != '\x03') && (local_60 != '\a')) goto LAB_08288687;
    GetInvenTypeFromItemSpace((int)local_60);
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = (undefined2)local_ac._0_4_;
    uStack_4b = SUB42(local_ac._0_4_,2);
    uStack_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
LAB_08288687:
  iVar1 = CONCAT22(uStack_49,uStack_4b);
  this_00 = (CDataManager *)G_CDataManager();
  uVar2 = CDataManager::find_item(this_00,iVar1);
  return uVar2;
}
```
