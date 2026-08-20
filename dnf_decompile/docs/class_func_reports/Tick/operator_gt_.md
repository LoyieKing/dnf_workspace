# operator>

`_ZNK4TickgtES_`

`Tick::operator>(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade9e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade9e0  _ZNK4TickgtES_
#           Tick::operator>(Tick) const
# range [0x08ade9e0, 0x08ade9f7]
08ade9e0 +0x00:  push   %ebp
08ade9e1 +0x01:  mov    %esp,%ebp
08ade9e3 +0x03:  mov    0x8(%ebp),%eax
08ade9e6 +0x06:  mov    (%eax),%edx
08ade9e8 +0x08:  mov    0xc(%ebp),%eax
08ade9eb +0x0b:  mov    %edx,%ecx
08ade9ed +0x0d:  sub    %eax,%ecx
08ade9ef +0x0f:  mov    %ecx,%eax
08ade9f1 +0x11:  test   %eax,%eax
08ade9f3 +0x13:  setg   %al
08ade9f6 +0x16:  pop    %ebp
08ade9f7 +0x17:  ret
```

## 反编译 C

```c
// Tick::operator> @ 0x8ade9e0

/* DWARF original prototype: bool operator>(Tick * this, Tick tick) */

bool __thiscall Tick::operator>(Tick *this,Tick tick)

{
  return this->value_ != tick.value_ && -1 < (int)(this->value_ - tick.value_);
}
```
