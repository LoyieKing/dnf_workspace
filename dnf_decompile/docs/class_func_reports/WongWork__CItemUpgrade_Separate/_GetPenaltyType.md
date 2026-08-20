# _GetPenaltyType

`_ZN8WongWork21CItemUpgrade_Separate15_GetPenaltyTypeEh11ENUM_RARITYRK25GenuineDamageUpgradeTablePK24GenuineDamageUpgradeInfo`

`WongWork::CItemUpgrade_Separate::_GetPenaltyType(unsigned char, ENUM_RARITY, GenuineDamageUpgradeTable const&, GenuineDamageUpgradeInfo const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e2ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e2ce  _ZN8WongWork21CItemUpgrade_Separate15_GetPenaltyTypeEh11ENUM_RARITYRK25GenuineDamageUpgradeTablePK24GenuineDamageUpgradeInfo
#           WongWork::CItemUpgrade_Separate::_GetPenaltyType(unsigned char, ENUM_RARITY, GenuineDamageUpgradeTable const&, GenuineDamageUpgradeInfo const*)
# range [0x0811e2ce, 0x0811e2e1]
0811e2ce +0x00:  push   %ebp
0811e2cf +0x01:  mov    %esp,%ebp
0811e2d1 +0x03:  sub    $0x4,%esp
0811e2d4 +0x06:  mov    0xc(%ebp),%eax
0811e2d7 +0x09:  mov    %al,-0x4(%ebp)
0811e2da +0x0c:  mov    $0x1,%eax
0811e2df +0x11:  leave
0811e2e0 +0x12:  ret
0811e2e1 +0x13:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::_GetPenaltyType @ 0x811e2ce

/* WongWork::CItemUpgrade_Separate::_GetPenaltyType(unsigned char, ENUM_RARITY,
   GenuineDamageUpgradeTable const&, GenuineDamageUpgradeInfo const*) */

undefined4 WongWork::CItemUpgrade_Separate::_GetPenaltyType(void)

{
  return 1;
}
```
