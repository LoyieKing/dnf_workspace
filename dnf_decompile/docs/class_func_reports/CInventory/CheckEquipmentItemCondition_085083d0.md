# CheckEquipmentItemCondition

`_ZNK10CInventory27CheckEquipmentItemConditionE10INVEN_TYPEsR28stEquipConditionForChronicle`

`CInventory::CheckEquipmentItemCondition(INVEN_TYPE, short, stEquipConditionForChronicle&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085083d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085083d0  _ZNK10CInventory27CheckEquipmentItemConditionE10INVEN_TYPEsR28stEquipConditionForChronicle
#           CInventory::CheckEquipmentItemCondition(INVEN_TYPE, short, stEquipConditionForChronicle&) const
# range [0x085083d0, 0x08508535]
085083d0 +0x000:  push   %ebp
085083d1 +0x001:  mov    %esp,%ebp
085083d3 +0x003:  push   %ebx
085083d4 +0x004:  sub    $0x74,%esp
085083d7 +0x007:  mov    0x10(%ebp),%eax
085083da +0x00a:  mov    %ax,-0x5c(%ebp)
085083de +0x00e:  movswl -0x5c(%ebp),%ecx
085083e2 +0x012:  mov    0xc(%ebp),%edx
085083e5 +0x015:  lea    -0x55(%ebp),%eax
085083e8 +0x018:  mov    %ecx,0xc(%esp)
085083ec +0x01c:  mov    %edx,0x8(%esp)
085083f0 +0x020:  mov    0x8(%ebp),%edx
085083f3 +0x023:  mov    %edx,0x4(%esp)
085083f7 +0x027:  mov    %eax,(%esp)
085083fa +0x02a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085083ff +0x02f:  sub    $0x4,%esp
08508402 +0x032:  mov    -0x53(%ebp),%eax
08508405 +0x035:  mov    %eax,0x4(%esp)
08508409 +0x039:  mov    0x8(%ebp),%eax
0850840c +0x03c:  mov    %eax,(%esp)
0850840f +0x03f:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08508414 +0x044:  mov    %eax,-0x18(%ebp)
08508417 +0x047:  cmpl   $0x1,-0x18(%ebp)
0850841b +0x04b:  je     08508427 <+0x57>
0850841d +0x04d:  mov    $0x11,%eax
08508422 +0x052:  jmp    08508530 <+0x160>
08508427 +0x057:  mov    -0x53(%ebp),%eax
0850842a +0x05a:  mov    %eax,%ebx
0850842c +0x05c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08508431 +0x061:  mov    %ebx,0x4(%esp)
08508435 +0x065:  mov    %eax,(%esp)
08508438 +0x068:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850843d +0x06d:  mov    %eax,-0x14(%ebp)
08508440 +0x070:  cmpl   $0x0,-0x14(%ebp)
08508444 +0x074:  jne    08508450 <+0x80>
08508446 +0x076:  mov    $0x11,%eax
0850844b +0x07b:  jmp    08508530 <+0x160>
08508450 +0x080:  lea    -0x55(%ebp),%eax
08508453 +0x083:  add    $0x11,%eax
08508456 +0x086:  mov    %eax,(%esp)
08508459 +0x089:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0850845e +0x08e:  mov    %al,-0xd(%ebp)
08508461 +0x091:  lea    -0x55(%ebp),%eax
08508464 +0x094:  add    $0x11,%eax
08508467 +0x097:  mov    %eax,(%esp)
0850846a +0x09a:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0850846f +0x09f:  xor    $0x1,%eax
08508472 +0x0a2:  test   %al,%al
08508474 +0x0a4:  je     08508480 <+0xb0>
08508476 +0x0a6:  mov    $0x13,%eax
0850847b +0x0ab:  jmp    08508530 <+0x160>
08508480 +0x0b0:  mov    -0x14(%ebp),%eax
08508483 +0x0b3:  mov    %eax,(%esp)
08508486 +0x0b6:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
0850848b +0x0bb:  mov    %eax,-0xc(%ebp)
0850848e +0x0be:  movzwl -0x4a(%ebp),%eax
08508492 +0x0c2:  movzwl %ax,%eax
08508495 +0x0c5:  cmp    -0xc(%ebp),%eax
08508498 +0x0c8:  je     085084a4 <+0xd4>
0850849a +0x0ca:  mov    $0xd8,%eax
0850849f +0x0cf:  jmp    08508530 <+0x160>
085084a4 +0x0d4:  lea    -0x55(%ebp),%eax
085084a7 +0x0d7:  mov    %eax,(%esp)
085084aa +0x0da:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085084af +0x0df:  mov    0x14(%ebp),%edx
085084b2 +0x0e2:  mov    %al,(%edx)
085084b4 +0x0e4:  cmpb   $0x0,-0xd(%ebp)
085084b8 +0x0e8:  jne    085084d3 <+0x103>
085084ba +0x0ea:  mov    0x14(%ebp),%eax
085084bd +0x0ed:  movb   $0x0,0x1(%eax)
085084c1 +0x0f1:  mov    0x14(%ebp),%eax
085084c4 +0x0f4:  movb   $0x0,0x2(%eax)
085084c8 +0x0f8:  mov    0x14(%ebp),%eax
085084cb +0x0fb:  movw   $0x0,0x4(%eax)
085084d1 +0x101:  jmp    085084f9 <+0x129>
085084d3 +0x103:  mov    0x14(%ebp),%eax
085084d6 +0x106:  movb   $0x1,0x1(%eax)
085084da +0x10a:  mov    0x14(%ebp),%eax
085084dd +0x10d:  movzbl -0xd(%ebp),%edx
085084e1 +0x111:  mov    %dl,0x2(%eax)
085084e4 +0x114:  lea    -0x55(%ebp),%eax
085084e7 +0x117:  add    $0x11,%eax
085084ea +0x11a:  mov    %eax,(%esp)
085084ed +0x11d:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085084f2 +0x122:  mov    0x14(%ebp),%edx
085084f5 +0x125:  mov    %ax,0x4(%edx)
085084f9 +0x129:  movzbl -0x55(%ebp),%eax
085084fd +0x12d:  test   %al,%al
085084ff +0x12f:  je     0850850a <+0x13a>
08508501 +0x131:  mov    0x14(%ebp),%eax
08508504 +0x134:  movb   $0x1,0x6(%eax)
08508508 +0x138:  jmp    08508511 <+0x141>
0850850a +0x13a:  mov    0x14(%ebp),%eax
0850850d +0x13d:  movb   $0x0,0x6(%eax)
08508511 +0x141:  lea    -0x55(%ebp),%eax
08508514 +0x144:  mov    %eax,(%esp)
08508517 +0x147:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
0850851c +0x14c:  mov    0x14(%ebp),%edx
0850851f +0x14f:  mov    %al,0x7(%edx)
08508522 +0x152:  mov    -0x48(%ebp),%edx
08508525 +0x155:  mov    0x14(%ebp),%eax
08508528 +0x158:  mov    %edx,0x8(%eax)
0850852b +0x15b:  mov    $0x0,%eax
08508530 +0x160:  mov    -0x4(%ebp),%ebx
08508533 +0x163:  leave
08508534 +0x164:  ret
08508535 +0x165:  nop
```

## 反编译 C

```c
// CInventory::CheckEquipmentItemCondition @ 0x85083d0

/* CInventory::CheckEquipmentItemCondition(INVEN_TYPE, short, stEquipConditionForChronicle&) const
    */

undefined4 __thiscall
CInventory::CheckEquipmentItemCondition
          (CInventory *this,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  Inven_Item local_59 [2];
  int local_57;
  ushort local_4e;
  undefined4 local_4c;
  stAmplifyOption_t asStack_48 [44];
  int local_1c;
  CEquipItem *local_18;
  char local_11;
  uint local_10;
  
  GetInvenSlot((int)local_59,(int)this);
  local_1c = GetItemType(this,local_57);
  if (local_1c == 1) {
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CEquipItem *)CDataManager::find_item(this_00,local_57);
    if (local_18 == (CEquipItem *)0x0) {
      uVar4 = 0x11;
    }
    else {
      local_11 = stAmplifyOption_t::getAbilityType(asStack_48);
      cVar1 = stAmplifyOption_t::isIdentified(asStack_48);
      if (cVar1 == '\x01') {
        local_10 = CEquipItem::get_endurance(local_18);
        if (local_4e == local_10) {
          uVar2 = Inven_Item::GetUpgrade(local_59);
          *param_4 = uVar2;
          if (local_11 == '\0') {
            param_4[1] = 0;
            param_4[2] = 0;
            *(undefined2 *)(param_4 + 4) = 0;
          }
          else {
            param_4[1] = 1;
            param_4[2] = local_11;
            uVar3 = stAmplifyOption_t::getAbilityValue(asStack_48);
            *(undefined2 *)(param_4 + 4) = uVar3;
          }
          if (local_59[0] == (Inven_Item)0x0) {
            param_4[6] = 0;
          }
          else {
            param_4[6] = 1;
          }
          uVar2 = Inven_Item::GetReSealCount(local_59);
          param_4[7] = uVar2;
          *(undefined4 *)(param_4 + 8) = local_4c;
          uVar4 = 0;
        }
        else {
          uVar4 = 0xd8;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
  }
  else {
    uVar4 = 0x11;
  }
  return uVar4;
}
```
