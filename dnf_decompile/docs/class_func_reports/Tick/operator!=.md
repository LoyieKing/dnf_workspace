# operator!=

`_ZNK4TickneES_`

`Tick::operator!=(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade9a0  _ZNK4TickneES_
#           Tick::operator!=(Tick) const
# range [0x08ade9a0, 0x08ade9b1]
08ade9a0 +0x00:  push   %ebp
08ade9a1 +0x01:  mov    %esp,%ebp
08ade9a3 +0x03:  mov    0x8(%ebp),%eax
08ade9a6 +0x06:  mov    (%eax),%edx
08ade9a8 +0x08:  mov    0xc(%ebp),%eax
08ade9ab +0x0b:  cmp    %eax,%edx
08ade9ad +0x0d:  setne  %al
08ade9b0 +0x10:  pop    %ebp
08ade9b1 +0x11:  ret
```

## 反编译 C

```c
// Tick::operator!= @ 0x8ade9a0

/* DWARF original prototype: bool operator!=(Tick * this, Tick tick) */

bool __thiscall Tick::operator!=(Tick *this,Tick tick)

{
  return this->value_ != tick.value_;
}
```
