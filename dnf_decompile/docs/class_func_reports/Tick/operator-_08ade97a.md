# operator-

`_ZNK4TickmiES_`

`Tick::operator-(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade97a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade97a  _ZNK4TickmiES_
#           Tick::operator-(Tick) const
# range [0x08ade97a, 0x08ade98d]
08ade97a +0x00:  push   %ebp
08ade97b +0x01:  mov    %esp,%ebp
08ade97d +0x03:  mov    0x8(%ebp),%eax
08ade980 +0x06:  mov    (%eax),%edx
08ade982 +0x08:  mov    0xc(%ebp),%eax
08ade985 +0x0b:  mov    %edx,%ecx
08ade987 +0x0d:  sub    %eax,%ecx
08ade989 +0x0f:  mov    %ecx,%eax
08ade98b +0x11:  pop    %ebp
08ade98c +0x12:  ret
08ade98d +0x13:  nop
```

## 反编译 C

```c
// Tick::operator- @ 0x8ade97a

/* DWARF original prototype: int32 operator-(Tick * this, Tick tick) */

int32 __thiscall Tick::operator-(Tick *this,Tick tick)

{
  return this->value_ - tick.value_;
}
```
