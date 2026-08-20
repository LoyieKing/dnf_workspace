# CheckUnusableEquipmentInUser

`_ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser`

`fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562cfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562cfe  _ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser
#           fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*)
# range [0x08562cfe, 0x08562d07]
08562cfe +0x00:  push   %ebp
08562cff +0x01:  mov    %esp,%ebp
08562d01 +0x03:  mov    $0x1,%eax
08562d06 +0x08:  pop    %ebp
08562d07 +0x09:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckUnusableEquipmentInUser @ 0x8562cfe

/* fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*) */

undefined4 fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser *param_1)

{
  return 1;
}
```
