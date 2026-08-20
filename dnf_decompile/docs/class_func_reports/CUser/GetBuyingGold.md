# GetBuyingGold

`_ZN5CUser13GetBuyingGoldEv`

`CUser::GetBuyingGold()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692a24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692a24  _ZN5CUser13GetBuyingGoldEv
#           CUser::GetBuyingGold()
# range [0x08692a24, 0x08692a33]
08692a24 +0x00:  push   %ebp
08692a25 +0x01:  mov    %esp,%ebp
08692a27 +0x03:  mov    0x8(%ebp),%eax
08692a2a +0x06:  movzbl 0x8ead8(%eax),%eax
08692a31 +0x0d:  pop    %ebp
08692a32 +0x0e:  ret
08692a33 +0x0f:  nop
```

## 反编译 C

```c
// CUser::GetBuyingGold @ 0x8692a24

/* CUser::GetBuyingGold() */

CUser __thiscall CUser::GetBuyingGold(CUser *this)

{
  return this[0x8ead8];
}
```
