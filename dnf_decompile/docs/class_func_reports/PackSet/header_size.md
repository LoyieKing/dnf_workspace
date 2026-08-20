# header_size

`_ZN7PackSet11header_sizeEv`

`PackSet::header_size()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4930  _ZN7PackSet11header_sizeEv
#           PackSet::header_size()
# range [0x08ac4930, 0x08ac493b]
08ac4930 +0x00:  push   %ebp
08ac4931 +0x01:  mov    %esp,%ebp
08ac4933 +0x03:  mov    0x8(%ebp),%eax
08ac4936 +0x06:  mov    0x8(%eax),%eax
08ac4939 +0x09:  pop    %ebp
08ac493a +0x0a:  ret
08ac493b +0x0b:  nop
```

## 反编译 C

```c
// PackSet::header_size @ 0x8ac4930

/* DWARF original prototype: uint header_size(PackSet * this) */

uint __thiscall PackSet::header_size(PackSet *this)

{
  return this->header_size_;
}
```
