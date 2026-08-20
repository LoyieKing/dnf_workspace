# Tick

`_ZN4TickC1Ev`

`Tick::Tick()`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade828` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade828  _ZN4TickC1Ev
#           Tick::Tick()
# range [0x08ade828, 0x08ade835]
08ade828 +0x00:  push   %ebp
08ade829 +0x01:  mov    %esp,%ebp
08ade82b +0x03:  mov    0x8(%ebp),%eax
08ade82e +0x06:  movl   $0x0,(%eax)
08ade834 +0x0c:  pop    %ebp
08ade835 +0x0d:  ret
```

## 反编译 C

```c
// Tick::Tick @ 0x8ade828

/* DWARF original prototype: void Tick(Tick * this) */

void __thiscall Tick::Tick(Tick *this)

{
  this->value_ = 0;
  return;
}
```
