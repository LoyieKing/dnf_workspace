# getBuyUpgradeDataVec

`_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE`

`advancealtar::BuyShopData::getBuyUpgradeDataVec(advancealtar::AdvanceAltarShopType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyShopData` | `0x088a105c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a105c  _ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE
#           advancealtar::BuyShopData::getBuyUpgradeDataVec(advancealtar::AdvanceAltarShopType::T)
# range [0x088a105c, 0x088a108f]
088a105c +0x00:  push   %ebp
088a105d +0x01:  mov    %esp,%ebp
088a105f +0x03:  mov    0xc(%ebp),%eax
088a1062 +0x06:  cmp    $0x1,%eax
088a1065 +0x09:  je     088a1078 <+0x1c>
088a1067 +0x0b:  cmp    $0x2,%eax
088a106a +0x0e:  je     088a1080 <+0x24>
088a106c +0x10:  test   %eax,%eax
088a106e +0x12:  jne    088a1088 <+0x2c>
088a1070 +0x14:  mov    0x8(%ebp),%eax
088a1073 +0x17:  add    $0x4,%eax
088a1076 +0x1a:  jmp    088a108d <+0x31>
088a1078 +0x1c:  mov    0x8(%ebp),%eax
088a107b +0x1f:  add    $0x10,%eax
088a107e +0x22:  jmp    088a108d <+0x31>
088a1080 +0x24:  mov    0x8(%ebp),%eax
088a1083 +0x27:  add    $0x1c,%eax
088a1086 +0x2a:  jmp    088a108d <+0x31>
088a1088 +0x2c:  mov    $0x0,%eax
088a108d +0x31:  pop    %ebp
088a108e +0x32:  ret
088a108f +0x33:  nop
```

## 反编译 C

```c
// advancealtar::BuyShopData::getBuyUpgradeDataVec @ 0x88a105c

/* advancealtar::BuyShopData::getBuyUpgradeDataVec(advancealtar::AdvanceAltarShopType::T) */

BuyShopData * __thiscall
advancealtar::BuyShopData::getBuyUpgradeDataVec(BuyShopData *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 0x10;
  }
  else if (param_2 == 2) {
    this = this + 0x1c;
  }
  else if (param_2 == 0) {
    this = this + 4;
  }
  else {
    this = (BuyShopData *)0x0;
  }
  return this;
}
```
