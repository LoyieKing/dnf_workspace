# _reset

`_ZN11Redeem_Item11CRedeemItem6_resetEv`

`Redeem_Item::CRedeemItem::_reset()`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7b6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7b6e  _ZN11Redeem_Item11CRedeemItem6_resetEv
#           Redeem_Item::CRedeemItem::_reset()
# range [0x085f7b6e, 0x085f7b83]
085f7b6e +0x00:  push   %ebp
085f7b6f +0x01:  mov    %esp,%ebp
085f7b71 +0x03:  sub    $0x18,%esp
085f7b74 +0x06:  mov    0x8(%ebp),%eax
085f7b77 +0x09:  add    $0x8,%eax
085f7b7a +0x0c:  mov    %eax,(%esp)
085f7b7d +0x0f:  call   085f7f94 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x3d0>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x3d0
085f7b82 +0x14:  leave
085f7b83 +0x15:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::_reset @ 0x85f7b6e

/* Redeem_Item::CRedeemItem::_reset() */

void __thiscall Redeem_Item::CRedeemItem::_reset(CRedeemItem *this)

{
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::clear((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
           *)(this + 8));
  return;
}
```
