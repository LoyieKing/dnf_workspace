# operator<=

`_ZNK4TickleES_`

`Tick::operator<=(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade9c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade9c8  _ZNK4TickleES_
#           Tick::operator<=(Tick) const
# range [0x08ade9c8, 0x08ade9df]
08ade9c8 +0x00:  push   %ebp
08ade9c9 +0x01:  mov    %esp,%ebp
08ade9cb +0x03:  mov    0x8(%ebp),%eax
08ade9ce +0x06:  mov    (%eax),%edx
08ade9d0 +0x08:  mov    0xc(%ebp),%eax
08ade9d3 +0x0b:  mov    %edx,%ecx
08ade9d5 +0x0d:  sub    %eax,%ecx
08ade9d7 +0x0f:  mov    %ecx,%eax
08ade9d9 +0x11:  test   %eax,%eax
08ade9db +0x13:  setle  %al
08ade9de +0x16:  pop    %ebp
08ade9df +0x17:  ret
```

## 反编译 C

```c
// Tick::operator<= @ 0x8ade9c8

/* DWARF original prototype: bool operator<=(Tick * this, Tick tick) */

bool __thiscall Tick::operator<=(Tick *this,Tick tick)

{
  return this->value_ == tick.value_ || (int)(this->value_ - tick.value_) < 0;
}
```
