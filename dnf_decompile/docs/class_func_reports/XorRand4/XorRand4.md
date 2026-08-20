# XorRand4

`_ZN8XorRand4C1Ev`

`XorRand4::XorRand4()`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfa90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfa90  _ZN8XorRand4C1Ev
#           XorRand4::XorRand4()
# range [0x08adfa90, 0x08adfa9d]
08adfa90 +0x00:  push   %ebp
08adfa91 +0x01:  mov    %esp,%ebp
08adfa93 +0x03:  mov    0x8(%ebp),%eax
08adfa96 +0x06:  movl   $0x0,(%eax)
08adfa9c +0x0c:  pop    %ebp
08adfa9d +0x0d:  ret
```

## 反编译 C

```c
// XorRand4::XorRand4 @ 0x8adfa90

/* DWARF original prototype: void XorRand4(XorRand4 * this) */

void __thiscall XorRand4::XorRand4(XorRand4 *this)

{
  this->m_counter = 0;
  return;
}
```
