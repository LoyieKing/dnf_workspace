# isUpgradableLevel

`_ZN17STEquipmentScript17isUpgradableLevelEN15ItemUpgradeType1TEi`

`STEquipmentScript::isUpgradableLevel(ItemUpgradeType::T, int)`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898efc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898efc8  _ZN17STEquipmentScript17isUpgradableLevelEN15ItemUpgradeType1TEi
#           STEquipmentScript::isUpgradableLevel(ItemUpgradeType::T, int)
# range [0x0898efc8, 0x0898f065]
0898efc8 +0x00:  push   %ebp
0898efc9 +0x01:  mov    %esp,%ebp
0898efcb +0x03:  sub    $0x28,%esp
0898efce +0x06:  mov    0x8(%ebp),%eax
0898efd1 +0x09:  lea    0x6fc(%eax),%ecx
0898efd7 +0x0f:  lea    -0x10(%ebp),%eax
0898efda +0x12:  lea    0xc(%ebp),%edx
0898efdd +0x15:  mov    %edx,0x8(%esp)
0898efe1 +0x19:  mov    %ecx,0x4(%esp)
0898efe5 +0x1d:  mov    %eax,(%esp)
0898efe8 +0x20:  call   0851919c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57d1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57d1
0898efed +0x25:  sub    $0x4,%esp
0898eff0 +0x28:  mov    0x8(%ebp),%eax
0898eff3 +0x2b:  lea    0x6fc(%eax),%edx
0898eff9 +0x31:  lea    -0xc(%ebp),%eax
0898effc +0x34:  mov    %edx,0x4(%esp)
0898f000 +0x38:  mov    %eax,(%esp)
0898f003 +0x3b:  call   085191c8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57fd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57fd
0898f008 +0x40:  sub    $0x4,%esp
0898f00b +0x43:  lea    -0xc(%ebp),%eax
0898f00e +0x46:  mov    %eax,0x4(%esp)
0898f012 +0x4a:  lea    -0x10(%ebp),%eax
0898f015 +0x4d:  mov    %eax,(%esp)
0898f018 +0x50:  call   085191ee <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5823>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5823
0898f01d +0x55:  test   %al,%al
0898f01f +0x57:  je     0898f05e <+0x96>
0898f021 +0x59:  lea    -0x10(%ebp),%eax
0898f024 +0x5c:  mov    %eax,(%esp)
0898f027 +0x5f:  call   08519202 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5837>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5837
0898f02c +0x64:  mov    0x4(%eax),%eax
0898f02f +0x67:  cmp    0x10(%ebp),%eax
0898f032 +0x6a:  jg     0898f047 <+0x7f>
0898f034 +0x6c:  lea    -0x10(%ebp),%eax
0898f037 +0x6f:  mov    %eax,(%esp)
0898f03a +0x72:  call   08519202 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5837>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5837
0898f03f +0x77:  mov    0x8(%eax),%eax
0898f042 +0x7a:  cmp    0x10(%ebp),%eax
0898f045 +0x7d:  jge    0898f04e <+0x86>
0898f047 +0x7f:  mov    $0x1,%eax
0898f04c +0x84:  jmp    0898f053 <+0x8b>
0898f04e +0x86:  mov    $0x0,%eax
0898f053 +0x8b:  test   %al,%al
0898f055 +0x8d:  je     0898f05e <+0x96>
0898f057 +0x8f:  mov    $0x0,%eax
0898f05c +0x94:  jmp    0898f063 <+0x9b>
0898f05e +0x96:  mov    $0x1,%eax
0898f063 +0x9b:  leave
0898f064 +0x9c:  ret
0898f065 +0x9d:  nop
```

## 反编译 C

```c
// STEquipmentScript::isUpgradableLevel @ 0x898efc8

/* STEquipmentScript::isUpgradableLevel(ItemUpgradeType::T, int) */

undefined4 __thiscall
STEquipmentScript::isUpgradableLevel(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>> local_14 [4];
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  local_10 [12];
  
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::find(local_14);
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::
            operator->(local_14);
    if ((param_3 < *(int *)(iVar3 + 4)) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>::
                operator->(local_14), *(int *)(iVar3 + 8) < param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}
```
