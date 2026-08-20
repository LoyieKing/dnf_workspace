# front

`_ZNK10CharString5frontEv`

`CharString::front() const`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad6ece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad6ece  _ZNK10CharString5frontEv
#           CharString::front() const
# range [0x08ad6ece, 0x08ad6edb]
08ad6ece +0x00:  push   %ebp
08ad6ecf +0x01:  mov    %esp,%ebp
08ad6ed1 +0x03:  mov    0x8(%ebp),%eax
08ad6ed4 +0x06:  mov    (%eax),%eax
08ad6ed6 +0x08:  movzbl (%eax),%eax
08ad6ed9 +0x0b:  pop    %ebp
08ad6eda +0x0c:  ret
08ad6edb +0x0d:  nop
```

## 反编译 C

```c
// CharString::front @ 0x8ad6ece

/* DWARF original prototype: char front(CharString * this) */

char __thiscall CharString::front(CharString *this)

{
  return *this->buffer_;
}
```
