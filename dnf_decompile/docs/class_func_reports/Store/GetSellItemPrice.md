# GetSellItemPrice

`_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi`

`Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)`

| 类 | 地址 |
|---|---|
| `Store` | `0x08618ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08618ea0  _ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi
#           Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
# range [0x08618ea0, 0x08619007]
08618ea0 +0x000:  push   %ebp
08618ea1 +0x001:  mov    %esp,%ebp
08618ea3 +0x003:  push   %edi
08618ea4 +0x004:  push   %esi
08618ea5 +0x005:  push   %ebx
08618ea6 +0x006:  sub    $0x3c,%esp
08618ea9 +0x009:  mov    0x14(%ebp),%edx
08618eac +0x00c:  mov    0x18(%ebp),%eax
08618eaf +0x00f:  mov    %dx,-0x2c(%ebp)
08618eb3 +0x013:  mov    %al,-0x30(%ebp)
08618eb6 +0x016:  mov    0xc(%ebp),%eax
08618eb9 +0x019:  mov    %eax,(%esp)
08618ebc +0x01c:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08618ec1 +0x021:  xor    $0x1,%eax
08618ec4 +0x024:  test   %al,%al
08618ec6 +0x026:  je     08618f4d <+0xad>
08618ecc +0x02c:  mov    0xc(%ebp),%eax
08618ecf +0x02f:  mov    %eax,(%esp)
08618ed2 +0x032:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08618ed7 +0x037:  movswl -0x2c(%ebp),%edx
08618edb +0x03b:  cmp    %edx,%eax
08618edd +0x03d:  jl     08618ee6 <+0x46>
08618edf +0x03f:  cmpw   $0x0,-0x2c(%ebp)
08618ee4 +0x044:  jg     08618eed <+0x4d>
08618ee6 +0x046:  mov    $0x1,%eax
08618eeb +0x04b:  jmp    08618ef2 <+0x52>
08618eed +0x04d:  mov    $0x0,%eax
08618ef2 +0x052:  test   %al,%al
08618ef4 +0x054:  je     08618f00 <+0x60>
08618ef6 +0x056:  mov    $0x11,%eax
08618efb +0x05b:  jmp    08619000 <+0x160>
08618f00 +0x060:  mov    0x10(%ebp),%eax
08618f03 +0x063:  mov    (%eax),%eax
08618f05 +0x065:  add    $0x4c,%eax
08618f08 +0x068:  mov    (%eax),%edx
08618f0a +0x06a:  mov    0x10(%ebp),%eax
08618f0d +0x06d:  mov    %eax,(%esp)
08618f10 +0x070:  call   *%edx
08618f12 +0x072:  movzbl %al,%ebx
08618f15 +0x075:  mov    0x10(%ebp),%eax
08618f18 +0x078:  mov    %eax,(%esp)
08618f1b +0x07b:  call   08473612 <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x5d>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x5d
08618f20 +0x080:  mov    %ebx,0xc(%esp)
08618f24 +0x084:  movl   $0x0,0x8(%esp)
08618f2c +0x08c:  movl   $0x0,0x4(%esp)
08618f34 +0x094:  mov    %eax,(%esp)
08618f37 +0x097:  call   0898c86e <_Z16getItemSellPriceiiib>  ; getItemSellPrice(int, int, int, bool)
08618f3c +0x09c:  movswl -0x2c(%ebp),%edx
08618f40 +0x0a0:  imul   %eax,%edx
08618f43 +0x0a3:  mov    0x1c(%ebp),%eax
08618f46 +0x0a6:  mov    %edx,(%eax)
08618f48 +0x0a8:  jmp    08618ffb <+0x15b>
08618f4d +0x0ad:  mov    0x10(%ebp),%eax
08618f50 +0x0b0:  mov    %eax,-0x1c(%ebp)
08618f53 +0x0b3:  mov    -0x1c(%ebp),%eax
08618f56 +0x0b6:  mov    0x234(%eax),%eax
08618f5c +0x0bc:  cmp    $0xb,%eax
08618f5f +0x0bf:  je     08618f6f <+0xcf>
08618f61 +0x0c1:  mov    -0x1c(%ebp),%eax
08618f64 +0x0c4:  mov    0x234(%eax),%eax
08618f6a +0x0ca:  cmp    $0x9,%eax
08618f6d +0x0cd:  jg     08618f79 <+0xd9>
08618f6f +0x0cf:  mov    $0x17,%eax
08618f74 +0x0d4:  jmp    08619000 <+0x160>
08618f79 +0x0d9:  mov    0xc(%ebp),%eax
08618f7c +0x0dc:  movzwl 0xb(%eax),%eax
08618f80 +0x0e0:  movzwl %ax,%ebx
08618f83 +0x0e3:  mov    -0x1c(%ebp),%eax
08618f86 +0x0e6:  mov    %eax,(%esp)
08618f89 +0x0e9:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08618f8e +0x0ee:  cmp    %eax,%ebx
08618f90 +0x0f0:  setg   %al
08618f93 +0x0f3:  test   %al,%al
08618f95 +0x0f5:  je     08618fab <+0x10b>
08618f97 +0x0f7:  mov    -0x1c(%ebp),%eax
08618f9a +0x0fa:  mov    %eax,(%esp)
08618f9d +0x0fd:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08618fa2 +0x102:  mov    %eax,%edx
08618fa4 +0x104:  mov    0xc(%ebp),%eax
08618fa7 +0x107:  mov    %dx,0xb(%eax)
08618fab +0x10b:  mov    0x10(%ebp),%eax
08618fae +0x10e:  mov    (%eax),%eax
08618fb0 +0x110:  add    $0x4c,%eax
08618fb3 +0x113:  mov    (%eax),%edx
08618fb5 +0x115:  mov    0x10(%ebp),%eax
08618fb8 +0x118:  mov    %eax,(%esp)
08618fbb +0x11b:  call   *%edx
08618fbd +0x11d:  movzbl %al,%edi
08618fc0 +0x120:  mov    -0x1c(%ebp),%eax
08618fc3 +0x123:  mov    %eax,(%esp)
08618fc6 +0x126:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08618fcb +0x12b:  mov    %eax,%ebx
08618fcd +0x12d:  mov    0xc(%ebp),%eax
08618fd0 +0x130:  movzwl 0xb(%eax),%eax
08618fd4 +0x134:  movzwl %ax,%esi
08618fd7 +0x137:  mov    0x10(%ebp),%eax
08618fda +0x13a:  mov    %eax,(%esp)
08618fdd +0x13d:  call   08473612 <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x5d>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x5d
08618fe2 +0x142:  mov    %edi,0xc(%esp)
08618fe6 +0x146:  mov    %ebx,0x8(%esp)
08618fea +0x14a:  mov    %esi,0x4(%esp)
08618fee +0x14e:  mov    %eax,(%esp)
08618ff1 +0x151:  call   0898c86e <_Z16getItemSellPriceiiib>  ; getItemSellPrice(int, int, int, bool)
08618ff6 +0x156:  mov    0x1c(%ebp),%edx
08618ff9 +0x159:  mov    %eax,(%edx)
08618ffb +0x15b:  mov    $0x0,%eax
08619000 +0x160:  add    $0x3c,%esp
08619003 +0x163:  pop    %ebx
08619004 +0x164:  pop    %esi
08619005 +0x165:  pop    %edi
08619006 +0x166:  pop    %ebp
08619007 +0x167:  ret
```

## 反编译 C

```c
// Store::GetSellItemPrice @ 0x8618ea0

/* Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&) */

undefined4 __thiscall
Store::GetSellItemPrice
          (Store *this,Inven_Item *param_1,CItem *param_2,short param_3,bool param_4,int *param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  cVar2 = Inven_Item::isEquipableItemType(param_1);
  if (cVar2 == '\x01') {
    if ((*(int *)(param_2 + 0x234) == 0xb) || (*(int *)(param_2 + 0x234) < 10)) {
      return 0x17;
    }
    uVar1 = *(ushort *)(param_1 + 0xb);
    iVar5 = CEquipItem::get_endurance((CEquipItem *)param_2);
    if (iVar5 < (int)(uint)uVar1) {
      uVar4 = CEquipItem::get_endurance((CEquipItem *)param_2);
      *(undefined2 *)(param_1 + 0xb) = uVar4;
    }
    bVar3 = (bool)(**(code **)(*(int *)param_2 + 0x4c))(param_2);
    iVar5 = CEquipItem::get_endurance((CEquipItem *)param_2);
    uVar1 = *(ushort *)(param_1 + 0xb);
    iVar6 = CItem::GetSellPrice(param_2);
    iVar5 = getItemSellPrice(iVar6,(uint)uVar1,iVar5,bVar3);
    *param_5 = iVar5;
  }
  else {
    iVar5 = Inven_Item::get_add_info(param_1);
    if ((iVar5 < param_3) || (param_3 < 1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      return 0x11;
    }
    bVar3 = (bool)(**(code **)(*(int *)param_2 + 0x4c))(param_2);
    iVar5 = CItem::GetSellPrice(param_2);
    iVar5 = getItemSellPrice(iVar5,0,0,bVar3);
    *param_5 = param_3 * iVar5;
  }
  return 0;
}
```
