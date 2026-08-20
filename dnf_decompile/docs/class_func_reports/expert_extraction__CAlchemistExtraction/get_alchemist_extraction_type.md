# get_alchemist_extraction_type

`_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem`

`expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type(CEquipItem const*)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CAlchemistExtraction` | `0x084a355c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a355c  _ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem
#           expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type(CEquipItem const*)
# range [0x084a355c, 0x084a3595]
084a355c +0x00:  push   %ebp
084a355d +0x01:  mov    %esp,%ebp
084a355f +0x03:  mov    0xc(%ebp),%eax
084a3562 +0x06:  mov    0x234(%eax),%eax
084a3568 +0x0c:  sub    $0xa,%eax
084a356b +0x0f:  cmp    $0xb,%eax
084a356e +0x12:  ja     084a358e <+0x32>
084a3570 +0x14:  mov    &data#17a1ac96(.rodata)(,%eax,4),%eax
084a3577 +0x1b:  jmp    *%eax
084a3579 +0x1d:  mov    $0x2,%eax
084a357e +0x22:  jmp    084a3593 <+0x37>
084a3580 +0x24:  mov    $0x0,%eax
084a3585 +0x29:  jmp    084a3593 <+0x37>
084a3587 +0x2b:  mov    $0x1,%eax
084a358c +0x30:  jmp    084a3593 <+0x37>
084a358e +0x32:  mov    $0x3,%eax
084a3593 +0x37:  pop    %ebp
084a3594 +0x38:  ret
084a3595 +0x39:  nop
```

## 反编译 C

```c
// expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type @ 0x84a355c

/* expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type(CEquipItem const*) */

undefined4 __thiscall
expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type
          (CAlchemistExtraction *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x234)) {
  case 10:
    uVar1 = 2;
    break;
  default:
    uVar1 = 3;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar1 = 0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    uVar1 = 1;
  }
  return uVar1;
}
```
