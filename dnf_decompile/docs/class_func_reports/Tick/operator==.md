# operator==

`_ZNK4TickeqES_`

`Tick::operator==(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade98e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade98e  _ZNK4TickeqES_
#           Tick::operator==(Tick) const
# range [0x08ade98e, 0x08ade99f]
08ade98e +0x00:  push   %ebp
08ade98f +0x01:  mov    %esp,%ebp
08ade991 +0x03:  mov    0x8(%ebp),%eax
08ade994 +0x06:  mov    (%eax),%edx
08ade996 +0x08:  mov    0xc(%ebp),%eax
08ade999 +0x0b:  cmp    %eax,%edx
08ade99b +0x0d:  sete   %al
08ade99e +0x10:  pop    %ebp
08ade99f +0x11:  ret
```

## 反编译 C

```c
// Tick::operator== @ 0x8ade98e

/* DWARF original prototype: bool operator==(Tick * this, Tick tick) */

bool __thiscall Tick::operator==(Tick *this,Tick tick)

{
  return this->value_ == tick.value_;
}
```
