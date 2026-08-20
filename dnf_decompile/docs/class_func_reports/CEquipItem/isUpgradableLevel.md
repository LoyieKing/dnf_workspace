# isUpgradableLevel

`_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi`

`CEquipItem::isUpgradableLevel(ItemUpgradeType::T, int)`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085136ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085136ec  _ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi
#           CEquipItem::isUpgradableLevel(ItemUpgradeType::T, int)
# range [0x085136ec, 0x08513789]
085136ec +0x00:  push   %ebp
085136ed +0x01:  mov    %esp,%ebp
085136ef +0x03:  sub    $0x28,%esp
085136f2 +0x06:  mov    0x8(%ebp),%eax
085136f5 +0x09:  lea    0x200(%eax),%ecx
085136fb +0x0f:  lea    -0x10(%ebp),%eax
085136fe +0x12:  lea    0xc(%ebp),%edx
08513701 +0x15:  mov    %edx,0x8(%esp)
08513705 +0x19:  mov    %ecx,0x4(%esp)
08513709 +0x1d:  mov    %eax,(%esp)
0851370c +0x20:  call   0851919c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57d1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57d1
08513711 +0x25:  sub    $0x4,%esp
08513714 +0x28:  mov    0x8(%ebp),%eax
08513717 +0x2b:  lea    0x200(%eax),%edx
0851371d +0x31:  lea    -0xc(%ebp),%eax
08513720 +0x34:  mov    %edx,0x4(%esp)
08513724 +0x38:  mov    %eax,(%esp)
08513727 +0x3b:  call   085191c8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57fd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57fd
0851372c +0x40:  sub    $0x4,%esp
0851372f +0x43:  lea    -0xc(%ebp),%eax
08513732 +0x46:  mov    %eax,0x4(%esp)
08513736 +0x4a:  lea    -0x10(%ebp),%eax
08513739 +0x4d:  mov    %eax,(%esp)
0851373c +0x50:  call   085191ee <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5823>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5823
08513741 +0x55:  test   %al,%al
08513743 +0x57:  je     08513782 <+0x96>
08513745 +0x59:  lea    -0x10(%ebp),%eax
08513748 +0x5c:  mov    %eax,(%esp)
0851374b +0x5f:  call   08519202 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5837>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5837
08513750 +0x64:  mov    0x4(%eax),%eax
08513753 +0x67:  cmp    0x10(%ebp),%eax
08513756 +0x6a:  jg     0851376b <+0x7f>
08513758 +0x6c:  lea    -0x10(%ebp),%eax
0851375b +0x6f:  mov    %eax,(%esp)
0851375e +0x72:  call   08519202 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5837>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5837
08513763 +0x77:  mov    0x8(%eax),%eax
08513766 +0x7a:  cmp    0x10(%ebp),%eax
08513769 +0x7d:  jge    08513772 <+0x86>
0851376b +0x7f:  mov    $0x1,%eax
08513770 +0x84:  jmp    08513777 <+0x8b>
08513772 +0x86:  mov    $0x0,%eax
08513777 +0x8b:  test   %al,%al
08513779 +0x8d:  je     08513782 <+0x96>
0851377b +0x8f:  mov    $0x0,%eax
08513780 +0x94:  jmp    08513787 <+0x9b>
08513782 +0x96:  mov    $0x1,%eax
08513787 +0x9b:  leave
08513788 +0x9c:  ret
08513789 +0x9d:  nop
```

## 反编译 C

```c
// CEquipItem::isUpgradableLevel @ 0x85136ec

/* CEquipItem::isUpgradableLevel(ItemUpgradeType::T, int) */

undefined4 __thiscall CEquipItem::isUpgradableLevel(undefined4 this,undefined4 param_2,int param_3)

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
