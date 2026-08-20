# max

`_ZNK8XorRand43maxEv`

`XorRand4::max() const`

| 类 | 地址 |
|---|---|
| `XorRand4` | `0x08adfb5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adfb5a  _ZNK8XorRand43maxEv
#           XorRand4::max() const
# range [0x08adfb5a, 0x08adfb63]
08adfb5a +0x00:  push   %ebp
08adfb5b +0x01:  mov    %esp,%ebp
08adfb5d +0x03:  mov    $0xffffffff,%eax
08adfb62 +0x08:  pop    %ebp
08adfb63 +0x09:  ret
```

## 反编译 C

```c
// XorRand4::max @ 0x8adfb5a

/* DWARF original prototype: uint32 max(XorRand4 * this) */

uint32 __thiscall XorRand4::max(XorRand4 *this)

{
  return 0xffffffff;
}
```
