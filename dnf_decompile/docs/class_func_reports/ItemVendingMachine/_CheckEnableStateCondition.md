# _CheckEnableStateCondition

`_ZN18ItemVendingMachine26_CheckEnableStateConditionEPK14CCeraShopGoodsP5CUser`

`ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods const*, CUser*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081768b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081768b0  _ZN18ItemVendingMachine26_CheckEnableStateConditionEPK14CCeraShopGoodsP5CUser
#           ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods const*, CUser*)
# range [0x081768b0, 0x081768b9]
081768b0 +0x00:  push   %ebp
081768b1 +0x01:  mov    %esp,%ebp
081768b3 +0x03:  mov    $0x1,%eax
081768b8 +0x08:  pop    %ebp
081768b9 +0x09:  ret
```

## 反编译 C

```c
// ItemVendingMachine::_CheckEnableStateCondition @ 0x81768b0

/* ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods const*, CUser*) */

undefined4 ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods *param_1,CUser *param_2)

{
  return 1;
}
```
