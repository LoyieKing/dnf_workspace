# getCeraPrice

`_ZN14STCeraShopItem12getCeraPriceEv`

`STCeraShopItem::getCeraPrice()`

| 类 | 地址 |
|---|---|
| `STCeraShopItem` | `0x088fdb52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fdb52  _ZN14STCeraShopItem12getCeraPriceEv
#           STCeraShopItem::getCeraPrice()
# range [0x088fdb52, 0x088fdb5d]
088fdb52 +0x00:  push   %ebp
088fdb53 +0x01:  mov    %esp,%ebp
088fdb55 +0x03:  mov    0x8(%ebp),%eax
088fdb58 +0x06:  mov    0x38(%eax),%eax
088fdb5b +0x09:  pop    %ebp
088fdb5c +0x0a:  ret
088fdb5d +0x0b:  nop
```

## 反编译 C

```c
// STCeraShopItem::getCeraPrice @ 0x88fdb52

/* STCeraShopItem::getCeraPrice() */

undefined4 __thiscall STCeraShopItem::getCeraPrice(STCeraShopItem *this)

{
  return *(undefined4 *)(this + 0x38);
}
```
