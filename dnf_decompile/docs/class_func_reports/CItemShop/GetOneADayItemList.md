# GetOneADayItemList

`_ZNK9CItemShop18GetOneADayItemListEv`

`CItemShop::GetOneADayItemList() const`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08513076` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513076  _ZNK9CItemShop18GetOneADayItemListEv
#           CItemShop::GetOneADayItemList() const
# range [0x08513076, 0x08513081]
08513076 +0x00:  push   %ebp
08513077 +0x01:  mov    %esp,%ebp
08513079 +0x03:  mov    0x8(%ebp),%eax
0851307c +0x06:  add    $0x18,%eax
0851307f +0x09:  pop    %ebp
08513080 +0x0a:  ret
08513081 +0x0b:  nop
```

## 反编译 C

```c
// CItemShop::GetOneADayItemList @ 0x8513076

/* CItemShop::GetOneADayItemList() const */

CItemShop * __thiscall CItemShop::GetOneADayItemList(CItemShop *this)

{
  return this + 0x18;
}
```
