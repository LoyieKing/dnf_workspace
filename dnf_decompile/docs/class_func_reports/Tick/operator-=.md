# operator-=

`_ZN4TickmIEi`

`Tick::operator-=(int)`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade908` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade908  _ZN4TickmIEi
#           Tick::operator-=(int)
# range [0x08ade908, 0x08ade91f]
08ade908 +0x00:  push   %ebp
08ade909 +0x01:  mov    %esp,%ebp
08ade90b +0x03:  mov    0x8(%ebp),%eax
08ade90e +0x06:  mov    (%eax),%edx
08ade910 +0x08:  mov    0xc(%ebp),%eax
08ade913 +0x0b:  sub    %eax,%edx
08ade915 +0x0d:  mov    0x8(%ebp),%eax
08ade918 +0x10:  mov    %edx,(%eax)
08ade91a +0x12:  mov    0x8(%ebp),%eax
08ade91d +0x15:  pop    %ebp
08ade91e +0x16:  ret
08ade91f +0x17:  nop
```

## 反编译 C

```c
// Tick::operator-= @ 0x8ade908

/* DWARF original prototype: Tick * operator-=(Tick * this, int32 span) */

Tick * __thiscall Tick::operator-=(Tick *this,int32 span)

{
  this->value_ = this->value_ - span;
  return this;
}
```
