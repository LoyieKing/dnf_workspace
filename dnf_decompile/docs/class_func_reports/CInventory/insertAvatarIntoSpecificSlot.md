# insertAvatarIntoSpecificSlot

`_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb`

`CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085037d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085037d8  _ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb
#           CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool)
# range [0x085037d8, 0x085039e7]
085037d8 +0x000:  push   %ebp
085037d9 +0x001:  mov    %esp,%ebp
085037db +0x003:  push   %esi
085037dc +0x004:  push   %ebx
085037dd +0x005:  sub    $0x40,%esp
085037e0 +0x008:  mov    0x54(%ebp),%eax
085037e3 +0x00b:  mov    %al,-0x1c(%ebp)
085037e6 +0x00e:  cmpl   $0x68,0x4c(%ebp)
085037ea +0x012:  jle    085037f6 <+0x1e>
085037ec +0x014:  mov    $0xffffffff,%eax
085037f1 +0x019:  jmp    085039e1 <+0x209>
085037f6 +0x01e:  movl   $0xffffffff,-0x14(%ebp)
085037fd +0x025:  mov    0x8(%ebp),%eax
08503800 +0x028:  mov    0x654(%eax),%edx
08503806 +0x02e:  mov    0x4c(%ebp),%eax
08503809 +0x031:  imul   $0x3d,%eax,%eax
0850380c +0x034:  lea    (%edx,%eax,1),%eax
0850380f +0x037:  mov    0x2(%eax),%eax
08503812 +0x03a:  test   %eax,%eax
08503814 +0x03c:  jne    08503893 <+0xbb>
08503816 +0x03e:  mov    0x8(%ebp),%eax
08503819 +0x041:  mov    0x654(%eax),%edx
0850381f +0x047:  mov    0x4c(%ebp),%eax
08503822 +0x04a:  imul   $0x3d,%eax,%eax
08503825 +0x04d:  lea    (%edx,%eax,1),%eax
08503828 +0x050:  mov    0xc(%ebp),%edx
0850382b +0x053:  mov    %edx,(%eax)
0850382d +0x055:  mov    0x10(%ebp),%edx
08503830 +0x058:  mov    %edx,0x4(%eax)
08503833 +0x05b:  mov    0x14(%ebp),%edx
08503836 +0x05e:  mov    %edx,0x8(%eax)
08503839 +0x061:  mov    0x18(%ebp),%edx
0850383c +0x064:  mov    %edx,0xc(%eax)
0850383f +0x067:  mov    0x1c(%ebp),%edx
08503842 +0x06a:  mov    %edx,0x10(%eax)
08503845 +0x06d:  mov    0x20(%ebp),%edx
08503848 +0x070:  mov    %edx,0x14(%eax)
0850384b +0x073:  mov    0x24(%ebp),%edx
0850384e +0x076:  mov    %edx,0x18(%eax)
08503851 +0x079:  mov    0x28(%ebp),%edx
08503854 +0x07c:  mov    %edx,0x1c(%eax)
08503857 +0x07f:  mov    0x2c(%ebp),%edx
0850385a +0x082:  mov    %edx,0x20(%eax)
0850385d +0x085:  mov    0x30(%ebp),%edx
08503860 +0x088:  mov    %edx,0x24(%eax)
08503863 +0x08b:  mov    0x34(%ebp),%edx
08503866 +0x08e:  mov    %edx,0x28(%eax)
08503869 +0x091:  mov    0x38(%ebp),%edx
0850386c +0x094:  mov    %edx,0x2c(%eax)
0850386f +0x097:  mov    0x3c(%ebp),%edx
08503872 +0x09a:  mov    %edx,0x30(%eax)
08503875 +0x09d:  mov    0x40(%ebp),%edx
08503878 +0x0a0:  mov    %edx,0x34(%eax)
0850387b +0x0a3:  mov    0x44(%ebp),%edx
0850387e +0x0a6:  mov    %edx,0x38(%eax)
08503881 +0x0a9:  movzbl 0x48(%ebp),%edx
08503885 +0x0ad:  mov    %dl,0x3c(%eax)
08503888 +0x0b0:  mov    0x4c(%ebp),%eax
0850388b +0x0b3:  mov    %eax,-0x14(%ebp)
0850388e +0x0b6:  jmp    08503945 <+0x16d>
08503893 +0x0bb:  movl   $0x0,-0x10(%ebp)
0850389a +0x0c2:  jmp    08503936 <+0x15e>
0850389f +0x0c7:  mov    0x8(%ebp),%eax
085038a2 +0x0ca:  mov    0x654(%eax),%edx
085038a8 +0x0d0:  mov    -0x10(%ebp),%eax
085038ab +0x0d3:  imul   $0x3d,%eax,%eax
085038ae +0x0d6:  lea    (%edx,%eax,1),%eax
085038b1 +0x0d9:  mov    0x2(%eax),%eax
085038b4 +0x0dc:  test   %eax,%eax
085038b6 +0x0de:  jne    08503932 <+0x15a>
085038b8 +0x0e0:  mov    0x8(%ebp),%eax
085038bb +0x0e3:  mov    0x654(%eax),%edx
085038c1 +0x0e9:  mov    -0x10(%ebp),%eax
085038c4 +0x0ec:  imul   $0x3d,%eax,%eax
085038c7 +0x0ef:  lea    (%edx,%eax,1),%eax
085038ca +0x0f2:  mov    0xc(%ebp),%edx
085038cd +0x0f5:  mov    %edx,(%eax)
085038cf +0x0f7:  mov    0x10(%ebp),%edx
085038d2 +0x0fa:  mov    %edx,0x4(%eax)
085038d5 +0x0fd:  mov    0x14(%ebp),%edx
085038d8 +0x100:  mov    %edx,0x8(%eax)
085038db +0x103:  mov    0x18(%ebp),%edx
085038de +0x106:  mov    %edx,0xc(%eax)
085038e1 +0x109:  mov    0x1c(%ebp),%edx
085038e4 +0x10c:  mov    %edx,0x10(%eax)
085038e7 +0x10f:  mov    0x20(%ebp),%edx
085038ea +0x112:  mov    %edx,0x14(%eax)
085038ed +0x115:  mov    0x24(%ebp),%edx
085038f0 +0x118:  mov    %edx,0x18(%eax)
085038f3 +0x11b:  mov    0x28(%ebp),%edx
085038f6 +0x11e:  mov    %edx,0x1c(%eax)
085038f9 +0x121:  mov    0x2c(%ebp),%edx
085038fc +0x124:  mov    %edx,0x20(%eax)
085038ff +0x127:  mov    0x30(%ebp),%edx
08503902 +0x12a:  mov    %edx,0x24(%eax)
08503905 +0x12d:  mov    0x34(%ebp),%edx
08503908 +0x130:  mov    %edx,0x28(%eax)
0850390b +0x133:  mov    0x38(%ebp),%edx
0850390e +0x136:  mov    %edx,0x2c(%eax)
08503911 +0x139:  mov    0x3c(%ebp),%edx
08503914 +0x13c:  mov    %edx,0x30(%eax)
08503917 +0x13f:  mov    0x40(%ebp),%edx
0850391a +0x142:  mov    %edx,0x34(%eax)
0850391d +0x145:  mov    0x44(%ebp),%edx
08503920 +0x148:  mov    %edx,0x38(%eax)
08503923 +0x14b:  movzbl 0x48(%ebp),%edx
08503927 +0x14f:  mov    %dl,0x3c(%eax)
0850392a +0x152:  mov    -0x10(%ebp),%eax
0850392d +0x155:  mov    %eax,-0x14(%ebp)
08503930 +0x158:  jmp    08503945 <+0x16d>
08503932 +0x15a:  addl   $0x1,-0x10(%ebp)
08503936 +0x15e:  cmpl   $0x68,-0x10(%ebp)
0850393a +0x162:  setle  %al
0850393d +0x165:  test   %al,%al
0850393f +0x167:  jne    0850389f <+0xc7>
08503945 +0x16d:  cmpl   $0x0,-0x14(%ebp)
08503949 +0x171:  js     085039de <+0x206>
0850394f +0x177:  cmpb   $0x0,-0x1c(%ebp)
08503953 +0x17b:  je     085039de <+0x206>
08503959 +0x181:  mov    0x8(%ebp),%eax
0850395c +0x184:  mov    0x654(%eax),%edx
08503962 +0x18a:  mov    -0x14(%ebp),%eax
08503965 +0x18d:  imul   $0x3d,%eax,%eax
08503968 +0x190:  lea    (%edx,%eax,1),%eax
0850396b +0x193:  mov    %eax,(%esp)
0850396e +0x196:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08503973 +0x19b:  mov    0x8(%ebp),%edx
08503976 +0x19e:  add    $0x734,%edx
0850397c +0x1a4:  mov    %eax,0x4(%esp)
08503980 +0x1a8:  mov    %edx,(%esp)
08503983 +0x1ab:  call   082f98c2 <_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi>  ; WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const
08503988 +0x1b0:  mov    %eax,-0xc(%ebp)
0850398b +0x1b3:  cmpl   $0x0,-0xc(%ebp)
0850398f +0x1b7:  je     08503996 <+0x1be>
08503991 +0x1b9:  mov    -0xc(%ebp),%ebx
08503994 +0x1bc:  jmp    0850399b <+0x1c3>
08503996 +0x1be:  mov    $"",%ebx
0850399b +0x1c3:  mov    0x8(%ebp),%eax
0850399e +0x1c6:  mov    0x654(%eax),%edx
085039a4 +0x1cc:  mov    -0x14(%ebp),%eax
085039a7 +0x1cf:  imul   $0x3d,%eax,%eax
085039aa +0x1d2:  lea    (%edx,%eax,1),%eax
085039ad +0x1d5:  mov    %eax,(%esp)
085039b0 +0x1d8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085039b5 +0x1dd:  mov    0xe(%ebp),%edx
085039b8 +0x1e0:  mov    0x8(%ebp),%ecx
085039bb +0x1e3:  mov    (%ecx),%ecx
085039bd +0x1e5:  lea    0x79700(%ecx),%esi
085039c3 +0x1eb:  mov    0x50(%ebp),%ecx
085039c6 +0x1ee:  mov    %ecx,0x10(%esp)
085039ca +0x1f2:  mov    %ebx,0xc(%esp)
085039ce +0x1f6:  mov    %eax,0x8(%esp)
085039d2 +0x1fa:  mov    %edx,0x4(%esp)
085039d6 +0x1fe:  mov    %esi,(%esp)
085039d9 +0x201:  call   08684652 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason>  ; cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)
085039de +0x206:  mov    -0x14(%ebp),%eax
085039e1 +0x209:  add    $0x40,%esp
085039e4 +0x20c:  pop    %ebx
085039e5 +0x20d:  pop    %esi
085039e6 +0x20e:  pop    %ebp
085039e7 +0x20f:  ret
```

## 反编译 C

```c
// CInventory::insertAvatarIntoSpecificSlot @ 0x85037d8

/* CInventory::insertAvatarIntoSpecificSlot(Inven_Item, int, eAvatarItemAddReason, bool) */

int CInventory::insertAvatarIntoSpecificSlot
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined1 param_17,int param_18,undefined4 param_19,char param_20)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  if (param_18 < 0x69) {
    local_18 = -1;
    if (*(int *)(param_1[0x195] + param_18 * 0x3d + 2) == 0) {
      puVar1 = (undefined4 *)(param_1[0x195] + param_18 * 0x3d);
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
      local_18 = param_18;
    }
    else {
      for (local_14 = 0; local_14 < 0x69; local_14 = local_14 + 1) {
        if (*(int *)(param_1[0x195] + local_14 * 0x3d + 2) == 0) {
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
          local_18 = local_14;
          break;
        }
      }
    }
    if ((-1 < local_18) && (param_20 != '\0')) {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x195] + local_18 * 0x3d));
      puVar3 = (undefined *)
               WongWork::CAvatarItemMgr::GetIPGAgencyNo((CAvatarItemMgr *)(param_1 + 0x1cd),iVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &DAT_08c939c0;
      }
      uVar4 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x195] + local_18 * 0x3d));
      cUserHistoryLog::AvatarItemAdd
                ((cUserHistoryLog *)(*param_1 + 0x79700),CONCAT22((undefined2)param_3,param_2._2_2_)
                 ,uVar4,puVar3,param_19);
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}
```
