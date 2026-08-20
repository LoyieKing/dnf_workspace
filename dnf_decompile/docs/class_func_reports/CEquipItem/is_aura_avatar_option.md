# is_aura_avatar_option

`_ZN10CEquipItem21is_aura_avatar_optionEc`

`CEquipItem::is_aura_avatar_option(char)`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x08510bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510bdc  _ZN10CEquipItem21is_aura_avatar_optionEc
#           CEquipItem::is_aura_avatar_option(char)
# range [0x08510bdc, 0x08510c0b]
08510bdc +0x00:  push   %ebp
08510bdd +0x01:  mov    %esp,%ebp
08510bdf +0x03:  sub    $0x4,%esp
08510be2 +0x06:  mov    0xc(%ebp),%eax
08510be5 +0x09:  mov    %al,-0x4(%ebp)
08510be8 +0x0c:  mov    0x8(%ebp),%eax
08510beb +0x0f:  movzbl 0x1d8(%eax),%eax
08510bf2 +0x16:  movzbl %al,%edx
08510bf5 +0x19:  movsbl -0x4(%ebp),%eax
08510bf9 +0x1d:  cmp    %eax,%edx
08510bfb +0x1f:  jne    08510c04 <+0x28>
08510bfd +0x21:  mov    $0x1,%eax
08510c02 +0x26:  jmp    08510c09 <+0x2d>
08510c04 +0x28:  mov    $0x0,%eax
08510c09 +0x2d:  leave
08510c0a +0x2e:  ret
08510c0b +0x2f:  nop
```

## 反编译 C

```c
// CEquipItem::is_aura_avatar_option @ 0x8510bdc

/* CEquipItem::is_aura_avatar_option(char) */

bool __thiscall CEquipItem::is_aura_avatar_option(CEquipItem *this,char param_1)

{
  return (uint)(byte)this[0x1d8] == (int)param_1;
}
```
