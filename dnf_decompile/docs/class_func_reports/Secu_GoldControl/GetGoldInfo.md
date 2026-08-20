# GetGoldInfo

`_ZN16Secu_GoldControl11GetGoldInfoEv`

`Secu_GoldControl::GetGoldInfo()`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x082872be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082872be  _ZN16Secu_GoldControl11GetGoldInfoEv
#           Secu_GoldControl::GetGoldInfo()
# range [0x082872be, 0x082872c9]
082872be +0x00:  push   %ebp
082872bf +0x01:  mov    %esp,%ebp
082872c1 +0x03:  mov    0x8(%ebp),%eax
082872c4 +0x06:  add    $0x4,%eax
082872c7 +0x09:  pop    %ebp
082872c8 +0x0a:  ret
082872c9 +0x0b:  nop
```

## 反编译 C

```c
// Secu_GoldControl::GetGoldInfo @ 0x82872be

/* Secu_GoldControl::GetGoldInfo() */

Secu_GoldControl * __thiscall Secu_GoldControl::GetGoldInfo(Secu_GoldControl *this)

{
  return this + 4;
}
```
