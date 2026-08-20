# reset

`_ZN25Inter_NpcLimitBuyItemInfo5resetEv`

`Inter_NpcLimitBuyItemInfo::reset()`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6e1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6e1a  _ZN25Inter_NpcLimitBuyItemInfo5resetEv
#           Inter_NpcLimitBuyItemInfo::reset()
# range [0x084e6e1a, 0x084e6e81]
084e6e1a +0x00:  push   %ebp
084e6e1b +0x01:  mov    %esp,%ebp
084e6e1d +0x03:  sub    $0x18,%esp
084e6e20 +0x06:  mov    0x8(%ebp),%eax
084e6e23 +0x09:  movl   $0x0,0x4(%eax)
084e6e2a +0x10:  mov    0x8(%ebp),%eax
084e6e2d +0x13:  movl   $0x0,0x8(%eax)
084e6e34 +0x1a:  mov    0x8(%ebp),%eax
084e6e37 +0x1d:  movl   $0x0,0xc(%eax)
084e6e3e +0x24:  mov    0x8(%ebp),%eax
084e6e41 +0x27:  movl   $0xffffffff,0x10(%eax)
084e6e48 +0x2e:  mov    0x8(%ebp),%eax
084e6e4b +0x31:  movl   $0xffffffff,0x14(%eax)
084e6e52 +0x38:  mov    0x8(%ebp),%eax
084e6e55 +0x3b:  movl   $0x0,0x18(%eax)
084e6e5c +0x42:  mov    0x8(%ebp),%eax
084e6e5f +0x45:  movb   $0x0,0x1c(%eax)
084e6e63 +0x49:  mov    0x8(%ebp),%eax
084e6e66 +0x4c:  add    $0x1d,%eax
084e6e69 +0x4f:  mov    %eax,(%esp)
084e6e6c +0x52:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084e6e71 +0x57:  mov    0x8(%ebp),%eax
084e6e74 +0x5a:  add    $0x5a,%eax
084e6e77 +0x5d:  mov    %eax,(%esp)
084e6e7a +0x60:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084e6e7f +0x65:  leave
084e6e80 +0x66:  ret
084e6e81 +0x67:  nop
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::reset @ 0x84e6e1a

/* Inter_NpcLimitBuyItemInfo::reset() */

void __thiscall Inter_NpcLimitBuyItemInfo::reset(Inter_NpcLimitBuyItemInfo *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (Inter_NpcLimitBuyItemInfo)0x0;
  Inven_Item::reset((Inven_Item *)(this + 0x1d));
  Inven_Item::reset((Inven_Item *)(this + 0x5a));
  return;
}
```
