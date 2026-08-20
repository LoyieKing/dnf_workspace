# getInternalValue

`_ZNK4Tick16getInternalValueEv`

`Tick::getInternalValue() const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade8c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade8c8  _ZNK4Tick16getInternalValueEv
#           Tick::getInternalValue() const
# range [0x08ade8c8, 0x08ade8d1]
08ade8c8 +0x00:  push   %ebp
08ade8c9 +0x01:  mov    %esp,%ebp
08ade8cb +0x03:  mov    0x8(%ebp),%eax
08ade8ce +0x06:  mov    (%eax),%eax
08ade8d0 +0x08:  pop    %ebp
08ade8d1 +0x09:  ret
```

## 反编译 C

```c
// Tick::getInternalValue @ 0x8ade8c8

/* DWARF original prototype: uint32 getInternalValue(Tick * this) */

uint32 __thiscall Tick::getInternalValue(Tick *this)

{
  return this->value_;
}
```
