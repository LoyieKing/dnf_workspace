# getGrowthGrade

`_ZNK10CEquipItem14getGrowthGradeEi`

`CEquipItem::getGrowthGrade(int) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085137b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085137b8  _ZNK10CEquipItem14getGrowthGradeEi
#           CEquipItem::getGrowthGrade(int) const
# range [0x085137b8, 0x0851381b]
085137b8 +0x00:  push   %ebp
085137b9 +0x01:  mov    %esp,%ebp
085137bb +0x03:  push   %esi
085137bc +0x04:  push   %ebx
085137bd +0x05:  sub    $0x20,%esp
085137c0 +0x08:  mov    0x8(%ebp),%eax
085137c3 +0x0b:  movzbl 0x21a(%eax),%eax
085137ca +0x12:  test   %al,%al
085137cc +0x14:  je     0851380f <+0x57>
085137ce +0x16:  mov    0x8(%ebp),%eax
085137d1 +0x19:  mov    0x228(%eax),%ebx
085137d7 +0x1f:  mov    0x8(%ebp),%eax
085137da +0x22:  mov    0x224(%eax),%ecx
085137e0 +0x28:  mov    0x8(%ebp),%eax
085137e3 +0x2b:  mov    0x220(%eax),%edx
085137e9 +0x31:  mov    0x8(%ebp),%eax
085137ec +0x34:  mov    0x21c(%eax),%eax
085137f2 +0x3a:  mov    0xc(%ebp),%esi
085137f5 +0x3d:  mov    %esi,0x10(%esp)
085137f9 +0x41:  mov    %ebx,0xc(%esp)
085137fd +0x45:  mov    %ecx,0x8(%esp)
08513801 +0x49:  mov    %edx,0x4(%esp)
08513805 +0x4d:  mov    %eax,(%esp)
08513808 +0x50:  call   0898c79d <_Z21getLevelLinearAbilityiiiii>  ; getLevelLinearAbility(int, int, int, int, int)
0851380d +0x55:  jmp    08513815 <+0x5d>
0851380f +0x57:  mov    0x8(%ebp),%eax
08513812 +0x5a:  mov    0x8(%eax),%eax
08513815 +0x5d:  add    $0x20,%esp
08513818 +0x60:  pop    %ebx
08513819 +0x61:  pop    %esi
0851381a +0x62:  pop    %ebp
0851381b +0x63:  ret
```

## 反编译 C

```c
// CEquipItem::getGrowthGrade @ 0x85137b8

/* CEquipItem::getGrowthGrade(int) const */

undefined4 __thiscall CEquipItem::getGrowthGrade(CEquipItem *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[0x21a] == (CEquipItem)0x0) {
    uVar1 = *(undefined4 *)(this + 8);
  }
  else {
    uVar1 = getLevelLinearAbility
                      (*(int *)(this + 0x21c),*(int *)(this + 0x220),*(int *)(this + 0x224),
                       *(int *)(this + 0x228),param_1);
  }
  return uVar1;
}
```
