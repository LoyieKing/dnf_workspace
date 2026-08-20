# operator+=

`_ZN4TickpLEi`

`Tick::operator+=(int)`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade8f0  _ZN4TickpLEi
#           Tick::operator+=(int)
# range [0x08ade8f0, 0x08ade907]
08ade8f0 +0x00:  push   %ebp
08ade8f1 +0x01:  mov    %esp,%ebp
08ade8f3 +0x03:  mov    0x8(%ebp),%eax
08ade8f6 +0x06:  mov    (%eax),%edx
08ade8f8 +0x08:  mov    0xc(%ebp),%eax
08ade8fb +0x0b:  add    %eax,%edx
08ade8fd +0x0d:  mov    0x8(%ebp),%eax
08ade900 +0x10:  mov    %edx,(%eax)
08ade902 +0x12:  mov    0x8(%ebp),%eax
08ade905 +0x15:  pop    %ebp
08ade906 +0x16:  ret
08ade907 +0x17:  nop
```

## 反编译 C

```c
// Tick::operator+= @ 0x8ade8f0

/* DWARF original prototype: Tick * operator+=(Tick * this, int32 span) */

Tick * __thiscall Tick::operator+=(Tick *this,int32 span)

{
  this->value_ = this->value_ + span;
  return this;
}
```
