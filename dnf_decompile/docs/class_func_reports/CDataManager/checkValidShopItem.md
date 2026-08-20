# checkValidShopItem

`_ZN12CDataManager18checkValidShopItemEjm`

`CDataManager::checkValidShopItem(unsigned int, unsigned long)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08362be6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08362be6  _ZN12CDataManager18checkValidShopItemEjm
#           CDataManager::checkValidShopItem(unsigned int, unsigned long)
# range [0x08362be6, 0x08362c0d]
08362be6 +0x00:  push   %ebp
08362be7 +0x01:  mov    %esp,%ebp
08362be9 +0x03:  sub    $0x18,%esp
08362bec +0x06:  mov    0x8(%ebp),%eax
08362bef +0x09:  mov    0x8cbc(%eax),%eax
08362bf5 +0x0f:  mov    0x10(%ebp),%edx
08362bf8 +0x12:  mov    %edx,0x8(%esp)
08362bfc +0x16:  mov    0xc(%ebp),%edx
08362bff +0x19:  mov    %edx,0x4(%esp)
08362c03 +0x1d:  mov    %eax,(%esp)
08362c06 +0x20:  call   08512cda <_ZN9CItemShop18checkValidShopItemEjm>  ; CItemShop::checkValidShopItem(unsigned int, unsigned long)
08362c0b +0x25:  leave
08362c0c +0x26:  ret
08362c0d +0x27:  nop
```

## 反编译 C

```c
// CDataManager::checkValidShopItem @ 0x8362be6

/* CDataManager::checkValidShopItem(unsigned int, unsigned long) */

void __thiscall CDataManager::checkValidShopItem(CDataManager *this,uint param_1,ulong param_2)

{
  CItemShop::checkValidShopItem(*(CItemShop **)(this + 0x8cbc),param_1,param_2);
  return;
}
```
