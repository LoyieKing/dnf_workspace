# Tick

`_ZN4TickC1Ej`

`Tick::Tick(unsigned int)`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade836` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade836  _ZN4TickC1Ej
#           Tick::Tick(unsigned int)
# range [0x08ade836, 0x08ade843]
08ade836 +0x00:  push   %ebp
08ade837 +0x01:  mov    %esp,%ebp
08ade839 +0x03:  mov    0x8(%ebp),%eax
08ade83c +0x06:  mov    0xc(%ebp),%edx
08ade83f +0x09:  mov    %edx,(%eax)
08ade841 +0x0b:  pop    %ebp
08ade842 +0x0c:  ret
08ade843 +0x0d:  nop
```

## 反编译 C

```c
// Tick::Tick @ 0x8ade836

/* DWARF original prototype: void Tick(Tick * this, uint32 value) */

void __thiscall Tick::Tick(Tick *this,uint32 value)

{
  this->value_ = value;
  return;
}
```
