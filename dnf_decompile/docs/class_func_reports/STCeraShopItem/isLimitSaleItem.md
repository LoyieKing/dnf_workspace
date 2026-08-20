# isLimitSaleItem

`_ZN14STCeraShopItem15isLimitSaleItemEv`

`STCeraShopItem::isLimitSaleItem()`

| 类 | 地址 |
|---|---|
| `STCeraShopItem` | `0x088fdb36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fdb36  _ZN14STCeraShopItem15isLimitSaleItemEv
#           STCeraShopItem::isLimitSaleItem()
# range [0x088fdb36, 0x088fdb51]
088fdb36 +0x00:  push   %ebp
088fdb37 +0x01:  mov    %esp,%ebp
088fdb39 +0x03:  mov    0x8(%ebp),%eax
088fdb3c +0x06:  mov    0x54(%eax),%eax
088fdb3f +0x09:  cmp    $0xfffffffe,%eax
088fdb42 +0x0c:  jne    088fdb4b <+0x15>
088fdb44 +0x0e:  mov    $0x0,%eax
088fdb49 +0x13:  jmp    088fdb50 <+0x1a>
088fdb4b +0x15:  mov    $0x1,%eax
088fdb50 +0x1a:  pop    %ebp
088fdb51 +0x1b:  ret
```

## 反编译 C

```c
// STCeraShopItem::isLimitSaleItem @ 0x88fdb36

/* STCeraShopItem::isLimitSaleItem() */

bool __thiscall STCeraShopItem::isLimitSaleItem(STCeraShopItem *this)

{
  return *(int *)(this + 0x54) != -2;
}
```
