# getGrowthRepairCost

`_ZNK10CEquipItem19getGrowthRepairCostEi`

`CEquipItem::getGrowthRepairCost(int) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0851381c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851381c  _ZNK10CEquipItem19getGrowthRepairCostEi
#           CEquipItem::getGrowthRepairCost(int) const
# range [0x0851381c, 0x08513883]
0851381c +0x00:  push   %ebp
0851381d +0x01:  mov    %esp,%ebp
0851381f +0x03:  push   %esi
08513820 +0x04:  push   %ebx
08513821 +0x05:  sub    $0x20,%esp
08513824 +0x08:  mov    0x8(%ebp),%eax
08513827 +0x0b:  movzbl 0x21a(%eax),%eax
0851382e +0x12:  test   %al,%al
08513830 +0x14:  je     08513873 <+0x57>
08513832 +0x16:  mov    0x8(%ebp),%eax
08513835 +0x19:  mov    0x230(%eax),%ebx
0851383b +0x1f:  mov    0x8(%ebp),%eax
0851383e +0x22:  mov    0x22c(%eax),%ecx
08513844 +0x28:  mov    0x8(%ebp),%eax
08513847 +0x2b:  mov    0x220(%eax),%edx
0851384d +0x31:  mov    0x8(%ebp),%eax
08513850 +0x34:  mov    0x21c(%eax),%eax
08513856 +0x3a:  mov    0xc(%ebp),%esi
08513859 +0x3d:  mov    %esi,0x10(%esp)
0851385d +0x41:  mov    %ebx,0xc(%esp)
08513861 +0x45:  mov    %ecx,0x8(%esp)
08513865 +0x49:  mov    %edx,0x4(%esp)
08513869 +0x4d:  mov    %eax,(%esp)
0851386c +0x50:  call   0898c79d <_Z21getLevelLinearAbilityiiiii>  ; getLevelLinearAbility(int, int, int, int, int)
08513871 +0x55:  jmp    0851387c <+0x60>
08513873 +0x57:  mov    0x8(%ebp),%eax
08513876 +0x5a:  mov    0x190(%eax),%eax
0851387c +0x60:  add    $0x20,%esp
0851387f +0x63:  pop    %ebx
08513880 +0x64:  pop    %esi
08513881 +0x65:  pop    %ebp
08513882 +0x66:  ret
08513883 +0x67:  nop
```

## 反编译 C

```c
// CEquipItem::getGrowthRepairCost @ 0x851381c

/* CEquipItem::getGrowthRepairCost(int) const */

undefined4 __thiscall CEquipItem::getGrowthRepairCost(CEquipItem *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[0x21a] == (CEquipItem)0x0) {
    uVar1 = *(undefined4 *)(this + 400);
  }
  else {
    uVar1 = getLevelLinearAbility
                      (*(int *)(this + 0x21c),*(int *)(this + 0x220),*(int *)(this + 0x22c),
                       *(int *)(this + 0x230),param_1);
  }
  return uVar1;
}
```
