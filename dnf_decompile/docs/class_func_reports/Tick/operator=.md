# operator=

`_ZN4TickaSES_`

`Tick::operator=(Tick)`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade8e0  _ZN4TickaSES_
#           Tick::operator=(Tick)
# range [0x08ade8e0, 0x08ade8ef]
08ade8e0 +0x00:  push   %ebp
08ade8e1 +0x01:  mov    %esp,%ebp
08ade8e3 +0x03:  mov    0xc(%ebp),%edx
08ade8e6 +0x06:  mov    0x8(%ebp),%eax
08ade8e9 +0x09:  mov    %edx,(%eax)
08ade8eb +0x0b:  mov    0x8(%ebp),%eax
08ade8ee +0x0e:  pop    %ebp
08ade8ef +0x0f:  ret
```

## 反编译 C

```c
// Tick::operator= @ 0x8ade8e0

/* DWARF original prototype: Tick * operator=(Tick * this, Tick tick) */

Tick * __thiscall Tick::operator=(Tick *this,Tick tick)

{
  this->value_ = (uint32)tick;
  return this;
}
```
