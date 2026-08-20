# testupdateOneADayItemList

`_ZN9CItemShop25testupdateOneADayItemListEv`

`CItemShop::testupdateOneADayItemList()`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08512f88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512f88  _ZN9CItemShop25testupdateOneADayItemListEv
#           CItemShop::testupdateOneADayItemList()
# range [0x08512f88, 0x08512f9b]
08512f88 +0x00:  push   %ebp
08512f89 +0x01:  mov    %esp,%ebp
08512f8b +0x03:  sub    $0x18,%esp
08512f8e +0x06:  mov    0x8(%ebp),%eax
08512f91 +0x09:  mov    %eax,(%esp)
08512f94 +0x0c:  call   08512e98 <_ZN9CItemShop21updateOneADayItemListEv>  ; CItemShop::updateOneADayItemList()
08512f99 +0x11:  leave
08512f9a +0x12:  ret
08512f9b +0x13:  nop
```

## 反编译 C

```c
// CItemShop::testupdateOneADayItemList @ 0x8512f88

/* CItemShop::testupdateOneADayItemList() */

void __thiscall CItemShop::testupdateOneADayItemList(CItemShop *this)

{
  updateOneADayItemList(this);
  return;
}
```
