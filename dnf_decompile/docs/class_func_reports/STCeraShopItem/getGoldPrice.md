# getGoldPrice

`_ZN14STCeraShopItem12getGoldPriceEv`

`STCeraShopItem::getGoldPrice()`

| 类 | 地址 |
|---|---|
| `STCeraShopItem` | `0x088fdb5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fdb5e  _ZN14STCeraShopItem12getGoldPriceEv
#           STCeraShopItem::getGoldPrice()
# range [0x088fdb5e, 0x088fdb68]
088fdb5e +0x00:  push   %ebp
088fdb5f +0x01:  mov    %esp,%ebp
088fdb61 +0x03:  mov    0x8(%ebp),%eax
088fdb64 +0x06:  mov    0x2c(%eax),%eax
088fdb67 +0x09:  pop    %ebp
088fdb68 +0x0a:  ret
```

## 反编译 C

```c
// STCeraShopItem::getGoldPrice @ 0x88fdb5e

/* STCeraShopItem::getGoldPrice() */

undefined4 __thiscall STCeraShopItem::getGoldPrice(STCeraShopItem *this)

{
  return *(undefined4 *)(this + 0x2c);
}
```
