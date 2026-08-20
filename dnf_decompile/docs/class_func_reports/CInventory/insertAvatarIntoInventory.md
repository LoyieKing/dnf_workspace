# insertAvatarIntoInventory

`_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb`

`CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850367c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850367c  _ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb
#           CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
# range [0x0850367c, 0x085037d7]
0850367c +0x000:  push   %ebp
0850367d +0x001:  mov    %esp,%ebp
0850367f +0x003:  push   %esi
08503680 +0x004:  push   %ebx
08503681 +0x005:  sub    $0x40,%esp
08503684 +0x008:  mov    0x50(%ebp),%eax
08503687 +0x00b:  mov    %al,-0x1c(%ebp)
0850368a +0x00e:  movl   $0x0,-0x10(%ebp)
08503691 +0x015:  jmp    085037bd <+0x141>
08503696 +0x01a:  mov    0x8(%ebp),%eax
08503699 +0x01d:  mov    0x654(%eax),%edx
0850369f +0x023:  mov    -0x10(%ebp),%eax
085036a2 +0x026:  imul   $0x3d,%eax,%eax
085036a5 +0x029:  lea    (%edx,%eax,1),%eax
085036a8 +0x02c:  mov    0x2(%eax),%eax
085036ab +0x02f:  test   %eax,%eax
085036ad +0x031:  jne    085037b9 <+0x13d>
085036b3 +0x037:  mov    0x8(%ebp),%eax
085036b6 +0x03a:  mov    0x654(%eax),%edx
085036bc +0x040:  mov    -0x10(%ebp),%eax
085036bf +0x043:  imul   $0x3d,%eax,%eax
085036c2 +0x046:  lea    (%edx,%eax,1),%eax
085036c5 +0x049:  mov    0xc(%ebp),%edx
085036c8 +0x04c:  mov    %edx,(%eax)
085036ca +0x04e:  mov    0x10(%ebp),%edx
085036cd +0x051:  mov    %edx,0x4(%eax)
085036d0 +0x054:  mov    0x14(%ebp),%edx
085036d3 +0x057:  mov    %edx,0x8(%eax)
085036d6 +0x05a:  mov    0x18(%ebp),%edx
085036d9 +0x05d:  mov    %edx,0xc(%eax)
085036dc +0x060:  mov    0x1c(%ebp),%edx
085036df +0x063:  mov    %edx,0x10(%eax)
085036e2 +0x066:  mov    0x20(%ebp),%edx
085036e5 +0x069:  mov    %edx,0x14(%eax)
085036e8 +0x06c:  mov    0x24(%ebp),%edx
085036eb +0x06f:  mov    %edx,0x18(%eax)
085036ee +0x072:  mov    0x28(%ebp),%edx
085036f1 +0x075:  mov    %edx,0x1c(%eax)
085036f4 +0x078:  mov    0x2c(%ebp),%edx
085036f7 +0x07b:  mov    %edx,0x20(%eax)
085036fa +0x07e:  mov    0x30(%ebp),%edx
085036fd +0x081:  mov    %edx,0x24(%eax)
08503700 +0x084:  mov    0x34(%ebp),%edx
08503703 +0x087:  mov    %edx,0x28(%eax)
08503706 +0x08a:  mov    0x38(%ebp),%edx
08503709 +0x08d:  mov    %edx,0x2c(%eax)
0850370c +0x090:  mov    0x3c(%ebp),%edx
0850370f +0x093:  mov    %edx,0x30(%eax)
08503712 +0x096:  mov    0x40(%ebp),%edx
08503715 +0x099:  mov    %edx,0x34(%eax)
08503718 +0x09c:  mov    0x44(%ebp),%edx
0850371b +0x09f:  mov    %edx,0x38(%eax)
0850371e +0x0a2:  movzbl 0x48(%ebp),%edx
08503722 +0x0a6:  mov    %dl,0x3c(%eax)
08503725 +0x0a9:  cmpb   $0x0,-0x1c(%ebp)
08503729 +0x0ad:  je     085037b4 <+0x138>
0850372f +0x0b3:  mov    0x8(%ebp),%eax
08503732 +0x0b6:  mov    0x654(%eax),%edx
08503738 +0x0bc:  mov    -0x10(%ebp),%eax
0850373b +0x0bf:  imul   $0x3d,%eax,%eax
0850373e +0x0c2:  lea    (%edx,%eax,1),%eax
08503741 +0x0c5:  mov    %eax,(%esp)
08503744 +0x0c8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503749 +0x0cd:  mov    0x8(%ebp),%edx
0850374c +0x0d0:  add    $0x734,%edx
08503752 +0x0d6:  mov    %eax,0x4(%esp)
08503756 +0x0da:  mov    %edx,(%esp)
08503759 +0x0dd:  call   082f98c2 <_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi>  ; WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const
0850375e +0x0e2:  mov    %eax,-0xc(%ebp)
08503761 +0x0e5:  cmpl   $0x0,-0xc(%ebp)
08503765 +0x0e9:  je     0850376c <+0xf0>
08503767 +0x0eb:  mov    -0xc(%ebp),%ebx
0850376a +0x0ee:  jmp    08503771 <+0xf5>
0850376c +0x0f0:  mov    $"",%ebx
08503771 +0x0f5:  mov    0x8(%ebp),%eax
08503774 +0x0f8:  mov    0x654(%eax),%edx
0850377a +0x0fe:  mov    -0x10(%ebp),%eax
0850377d +0x101:  imul   $0x3d,%eax,%eax
08503780 +0x104:  lea    (%edx,%eax,1),%eax
08503783 +0x107:  mov    %eax,(%esp)
08503786 +0x10a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850378b +0x10f:  mov    0xe(%ebp),%edx
0850378e +0x112:  mov    0x8(%ebp),%ecx
08503791 +0x115:  mov    (%ecx),%ecx
08503793 +0x117:  lea    0x79700(%ecx),%esi
08503799 +0x11d:  mov    0x4c(%ebp),%ecx
0850379c +0x120:  mov    %ecx,0x10(%esp)
085037a0 +0x124:  mov    %ebx,0xc(%esp)
085037a4 +0x128:  mov    %eax,0x8(%esp)
085037a8 +0x12c:  mov    %edx,0x4(%esp)
085037ac +0x130:  mov    %esi,(%esp)
085037af +0x133:  call   08684652 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason>  ; cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)
085037b4 +0x138:  mov    -0x10(%ebp),%eax
085037b7 +0x13b:  jmp    085037d1 <+0x155>
085037b9 +0x13d:  addl   $0x1,-0x10(%ebp)
085037bd +0x141:  cmpl   $0x68,-0x10(%ebp)
085037c1 +0x145:  setle  %al
085037c4 +0x148:  test   %al,%al
085037c6 +0x14a:  jne    08503696 <+0x1a>
085037cc +0x150:  mov    $0xffffffff,%eax
085037d1 +0x155:  add    $0x40,%esp
085037d4 +0x158:  pop    %ebx
085037d5 +0x159:  pop    %esi
085037d6 +0x15a:  pop    %ebp
085037d7 +0x15b:  ret
```

## 反编译 C

```c
// CInventory::insertAvatarIntoInventory @ 0x850367c

/* CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool) */

int CInventory::insertAvatarIntoInventory
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined1 param_17,undefined4 param_18,char param_19)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x68 < local_14) {
      return -1;
    }
    if (*(int *)(param_1[0x195] + local_14 * 0x3d + 2) == 0) break;
    local_14 = local_14 + 1;
  }
  puVar1 = (undefined4 *)(param_1[0x195] + local_14 * 0x3d);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  puVar1[4] = param_6;
  puVar1[5] = param_7;
  puVar1[6] = param_8;
  puVar1[7] = param_9;
  puVar1[8] = param_10;
  puVar1[9] = param_11;
  puVar1[10] = param_12;
  puVar1[0xb] = param_13;
  puVar1[0xc] = param_14;
  puVar1[0xd] = param_15;
  puVar1[0xe] = param_16;
  *(undefined1 *)(puVar1 + 0xf) = param_17;
  if (param_19 == '\0') {
    return local_14;
  }
  iVar2 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x195] + local_14 * 0x3d));
  puVar3 = (undefined *)
           WongWork::CAvatarItemMgr::GetIPGAgencyNo((CAvatarItemMgr *)(param_1 + 0x1cd),iVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_08c939c0;
  }
  uVar4 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x195] + local_14 * 0x3d));
  cUserHistoryLog::AvatarItemAdd
            ((cUserHistoryLog *)(*param_1 + 0x79700),CONCAT22((undefined2)param_3,param_2._2_2_),
             uVar4,puVar3,param_18);
  return local_14;
}
```
