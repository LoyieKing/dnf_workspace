# get_aura_avatar_option_value

`_ZN10CEquipItem28get_aura_avatar_option_valueEv`

`CEquipItem::get_aura_avatar_option_value()`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x08510c0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510c0c  _ZN10CEquipItem28get_aura_avatar_option_valueEv
#           CEquipItem::get_aura_avatar_option_value()
# range [0x08510c0c, 0x08510c19]
08510c0c +0x00:  push   %ebp
08510c0d +0x01:  mov    %esp,%ebp
08510c0f +0x03:  mov    0x8(%ebp),%eax
08510c12 +0x06:  mov    0x1dc(%eax),%eax
08510c18 +0x0c:  pop    %ebp
08510c19 +0x0d:  ret
```

## 反编译 C

```c
// CEquipItem::get_aura_avatar_option_value @ 0x8510c0c

/* CEquipItem::get_aura_avatar_option_value() */

undefined4 __thiscall CEquipItem::get_aura_avatar_option_value(CEquipItem *this)

{
  return *(undefined4 *)(this + 0x1dc);
}
```
