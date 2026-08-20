# isAddableFilter

`_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item`

`Redeem_Item::CRedeemItem::isAddableFilter(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f76f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f76f0  _ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item
#           Redeem_Item::CRedeemItem::isAddableFilter(Inven_Item const&)
# range [0x085f76f0, 0x085f782f]
085f76f0 +0x000:  push   %ebp
085f76f1 +0x001:  mov    %esp,%ebp
085f76f3 +0x003:  push   %ebx
085f76f4 +0x004:  sub    $0x24,%esp
085f76f7 +0x007:  mov    0xc(%ebp),%eax
085f76fa +0x00a:  mov    %eax,(%esp)
085f76fd +0x00d:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
085f7702 +0x012:  test   %al,%al
085f7704 +0x014:  je     085f7710 <+0x20>
085f7706 +0x016:  mov    $0x0,%eax
085f770b +0x01b:  jmp    085f7829 <+0x139>
085f7710 +0x020:  mov    0xc(%ebp),%eax
085f7713 +0x023:  mov    %eax,0x4(%esp)
085f7717 +0x027:  mov    0x8(%ebp),%eax
085f771a +0x02a:  mov    %eax,(%esp)
085f771d +0x02d:  call   085f7c04 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x40>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x40
085f7722 +0x032:  test   %al,%al
085f7724 +0x034:  je     085f7730 <+0x40>
085f7726 +0x036:  mov    $0x0,%eax
085f772b +0x03b:  jmp    085f7829 <+0x139>
085f7730 +0x040:  mov    0xc(%ebp),%eax
085f7733 +0x043:  mov    0x2(%eax),%eax
085f7736 +0x046:  cmp    $0x114c,%eax
085f773b +0x04b:  je     085f7797 <+0xa7>
085f773d +0x04d:  cmp    $0x114c,%eax
085f7742 +0x052:  ja     085f776b <+0x7b>
085f7744 +0x054:  cmp    $0xcf1,%eax
085f7749 +0x059:  je     085f7797 <+0xa7>
085f774b +0x05b:  cmp    $0xcf1,%eax
085f7750 +0x060:  ja     085f775b <+0x6b>
085f7752 +0x062:  cmp    $0xbdd,%eax
085f7757 +0x067:  je     085f7797 <+0xa7>
085f7759 +0x069:  jmp    085f77a1 <+0xb1>
085f775b +0x06b:  cmp    $0x1057,%eax
085f7760 +0x070:  je     085f7797 <+0xa7>
085f7762 +0x072:  cmp    $0x10fe,%eax
085f7767 +0x077:  je     085f7797 <+0xa7>
085f7769 +0x079:  jmp    085f77a1 <+0xb1>
085f776b +0x07b:  cmp    $0x1973,%eax
085f7770 +0x080:  je     085f7797 <+0xa7>
085f7772 +0x082:  cmp    $0x1973,%eax
085f7777 +0x087:  ja     085f7789 <+0x99>
085f7779 +0x089:  cmp    $0x1157,%eax
085f777e +0x08e:  je     085f7797 <+0xa7>
085f7780 +0x090:  cmp    $0x1159,%eax
085f7785 +0x095:  je     085f7797 <+0xa7>
085f7787 +0x097:  jmp    085f77a1 <+0xb1>
085f7789 +0x099:  cmp    $0x1ee1,%eax
085f778e +0x09e:  je     085f7797 <+0xa7>
085f7790 +0x0a0:  cmp    $0x28e770,%eax
085f7795 +0x0a5:  jne    085f77a1 <+0xb1>
085f7797 +0x0a7:  mov    $0x0,%eax
085f779c +0x0ac:  jmp    085f7829 <+0x139>
085f77a1 +0x0b1:  mov    0xc(%ebp),%eax
085f77a4 +0x0b4:  mov    0x2(%eax),%eax
085f77a7 +0x0b7:  mov    %eax,%ebx
085f77a9 +0x0b9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085f77ae +0x0be:  mov    %ebx,0x4(%esp)
085f77b2 +0x0c2:  mov    %eax,(%esp)
085f77b5 +0x0c5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085f77ba +0x0ca:  mov    %eax,-0xc(%ebp)
085f77bd +0x0cd:  cmpl   $0x0,-0xc(%ebp)
085f77c1 +0x0d1:  jne    085f77ca <+0xda>
085f77c3 +0x0d3:  mov    $0x0,%eax
085f77c8 +0x0d8:  jmp    085f7829 <+0x139>
085f77ca +0x0da:  mov    0xc(%ebp),%eax
085f77cd +0x0dd:  mov    %eax,(%esp)
085f77d0 +0x0e0:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
085f77d5 +0x0e5:  test   %al,%al
085f77d7 +0x0e7:  je     085f77fe <+0x10e>
085f77d9 +0x0e9:  mov    -0xc(%ebp),%eax
085f77dc +0x0ec:  mov    %eax,(%esp)
085f77df +0x0ef:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085f77e4 +0x0f4:  test   %eax,%eax
085f77e6 +0x0f6:  jne    085f77fe <+0x10e>
085f77e8 +0x0f8:  mov    0xc(%ebp),%eax
085f77eb +0x0fb:  mov    %eax,(%esp)
085f77ee +0x0fe:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085f77f3 +0x103:  test   %al,%al
085f77f5 +0x105:  jne    085f77fe <+0x10e>
085f77f7 +0x107:  mov    $0x1,%eax
085f77fc +0x10c:  jmp    085f7803 <+0x113>
085f77fe +0x10e:  mov    $0x0,%eax
085f7803 +0x113:  test   %al,%al
085f7805 +0x115:  je     085f780e <+0x11e>
085f7807 +0x117:  mov    $0x0,%eax
085f780c +0x11c:  jmp    085f7829 <+0x139>
085f780e +0x11e:  mov    -0xc(%ebp),%eax
085f7811 +0x121:  mov    %eax,(%esp)
085f7814 +0x124:  call   085f7be0 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x1c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x1c
085f7819 +0x129:  test   %al,%al
085f781b +0x12b:  je     085f7824 <+0x134>
085f781d +0x12d:  mov    $0x0,%eax
085f7822 +0x132:  jmp    085f7829 <+0x139>
085f7824 +0x134:  mov    $0x1,%eax
085f7829 +0x139:  add    $0x24,%esp
085f782c +0x13c:  pop    %ebx
085f782d +0x13d:  pop    %ebp
085f782e +0x13e:  ret
085f782f +0x13f:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::isAddableFilter @ 0x85f76f0

/* Redeem_Item::CRedeemItem::isAddableFilter(Inven_Item const&) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::isAddableFilter(CRedeemItem *this,Inven_Item *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *this_00;
  CItem *this_01;
  int iVar4;
  
  cVar3 = Inven_Item::isEmpty(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = _isFPItem(this,param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 != 0x114c) {
    if (uVar1 < 0x114d) {
      if (uVar1 != 0xcf1) {
        if (uVar1 < 0xcf2) {
          if (uVar1 != 0xbdd) {
LAB_085f77a1:
            iVar4 = *(int *)(param_1 + 2);
            this_00 = (CDataManager *)G_CDataManager();
            this_01 = (CItem *)CDataManager::find_item(this_00,iVar4);
            if (this_01 == (CItem *)0x0) {
              return 0;
            }
            cVar3 = Inven_Item::isEquipableItemType(param_1);
            if (((cVar3 == '\0') || (iVar4 = CItem::get_rarity(this_01), iVar4 != 0)) ||
               (cVar3 = Inven_Item::GetUpgrade(param_1), cVar3 != '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return 0;
            }
            cVar3 = CItem::IsBanRedeemItem(this_01);
            if (cVar3 != '\0') {
              return 0;
            }
            return 1;
          }
        }
        else if ((uVar1 != 0x1057) && (uVar1 != 0x10fe)) goto LAB_085f77a1;
      }
    }
    else if (uVar1 != 0x1973) {
      if (uVar1 < 0x1974) {
        if ((uVar1 != 0x1157) && (uVar1 != 0x1159)) goto LAB_085f77a1;
      }
      else if ((uVar1 != 0x1ee1) && (uVar1 != 0x28e770)) goto LAB_085f77a1;
    }
  }
  return 0;
}
```
