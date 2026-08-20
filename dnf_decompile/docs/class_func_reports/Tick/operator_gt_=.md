# operator>=

`_ZNK4TickgeES_`

`Tick::operator>=(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade9f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade9f8  _ZNK4TickgeES_
#           Tick::operator>=(Tick) const
# range [0x08ade9f8, 0x08adea0f]
08ade9f8 +0x00:  push   %ebp
08ade9f9 +0x01:  mov    %esp,%ebp
08ade9fb +0x03:  mov    0x8(%ebp),%eax
08ade9fe +0x06:  mov    (%eax),%edx
08adea00 +0x08:  mov    0xc(%ebp),%eax
08adea03 +0x0b:  mov    %edx,%ecx
08adea05 +0x0d:  sub    %eax,%ecx
08adea07 +0x0f:  mov    %ecx,%eax
08adea09 +0x11:  not    %eax
08adea0b +0x13:  shr    $0x1f,%eax
08adea0e +0x16:  pop    %ebp
08adea0f +0x17:  ret
```

## 反编译 C

```c
// Tick::operator>= @ 0x8ade9f8

/* DWARF original prototype: bool operator>=(Tick * this, Tick tick) */

bool __thiscall Tick::operator>=(Tick *this,Tick tick)

{
  return (bool)((byte)~(byte)(this->value_ - tick.value_ >> 0x18) >> 7);
}
```
