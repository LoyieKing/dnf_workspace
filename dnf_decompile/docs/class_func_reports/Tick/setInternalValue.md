# setInternalValue

`_ZN4Tick16setInternalValueEj`

`Tick::setInternalValue(unsigned int)`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade8d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade8d2  _ZN4Tick16setInternalValueEj
#           Tick::setInternalValue(unsigned int)
# range [0x08ade8d2, 0x08ade8df]
08ade8d2 +0x00:  push   %ebp
08ade8d3 +0x01:  mov    %esp,%ebp
08ade8d5 +0x03:  mov    0x8(%ebp),%eax
08ade8d8 +0x06:  mov    0xc(%ebp),%edx
08ade8db +0x09:  mov    %edx,(%eax)
08ade8dd +0x0b:  pop    %ebp
08ade8de +0x0c:  ret
08ade8df +0x0d:  nop
```

## 反编译 C

```c
// Tick::setInternalValue @ 0x8ade8d2

/* DWARF original prototype: void setInternalValue(Tick * this, uint32 value) */

void __thiscall Tick::setInternalValue(Tick *this,uint32 value)

{
  this->value_ = value;
  return;
}
```
