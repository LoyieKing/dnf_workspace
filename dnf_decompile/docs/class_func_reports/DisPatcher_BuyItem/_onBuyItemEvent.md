# _onBuyItemEvent

`_ZN18DisPatcher_BuyItem15_onBuyItemEventERK12BuyItemParamP5CUser`

`DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam const&, CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuyItem` | `0x081bed44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bed44  _ZN18DisPatcher_BuyItem15_onBuyItemEventERK12BuyItemParamP5CUser
#           DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam const&, CUser*)
# range [0x081bed44, 0x081bed49]
081bed44 +0x00:  push   %ebp
081bed45 +0x01:  mov    %esp,%ebp
081bed47 +0x03:  pop    %ebp
081bed48 +0x04:  ret
081bed49 +0x05:  nop
```

## 反编译 C

```c
// DisPatcher_BuyItem::_onBuyItemEvent @ 0x81bed44

/* DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam const&, CUser*) */

void DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam *param_1,CUser *param_2)

{
  return;
}
```
