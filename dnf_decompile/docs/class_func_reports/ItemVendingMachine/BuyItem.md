# BuyItem

`_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM`

`ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x0854c4d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c4d0  _ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM
#           ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)
# range [0x0854c4d0, 0x0854c4f5]
0854c4d0 +0x00:  push   %ebp
0854c4d1 +0x01:  mov    %esp,%ebp
0854c4d3 +0x03:  sub    $0x18,%esp
0854c4d6 +0x06:  mov    0x10(%ebp),%eax
0854c4d9 +0x09:  mov    %eax,0x8(%esp)
0854c4dd +0x0d:  mov    0xc(%ebp),%eax
0854c4e0 +0x10:  mov    %eax,0x4(%esp)
0854c4e4 +0x14:  mov    0x8(%ebp),%eax
0854c4e7 +0x17:  mov    %eax,(%esp)
0854c4ea +0x1a:  call   081769f6 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; ItemVendingMachine::ProcessBuyRequestEx(CUser*, MSG_BUY_CERASHOP_ITEM const&)
0854c4ef +0x1f:  mov    $0x1,%eax
0854c4f4 +0x24:  leave
0854c4f5 +0x25:  ret
```

## 反编译 C

```c
// ItemVendingMachine::BuyItem @ 0x854c4d0

/* ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
ItemVendingMachine::BuyItem(ItemVendingMachine *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  ProcessBuyRequestEx(this,param_1,param_2);
  return 1;
}
```
