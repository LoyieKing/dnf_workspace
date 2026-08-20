# indexes

`_ZNK7PackSet7indexesEv`

`PackSet::indexes() const`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac493c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac493c  _ZNK7PackSet7indexesEv
#           PackSet::indexes() const
# range [0x08ac493c, 0x08ac4947]
08ac493c +0x00:  push   %ebp
08ac493d +0x01:  mov    %esp,%ebp
08ac493f +0x03:  mov    0x8(%ebp),%eax
08ac4942 +0x06:  add    $0x10,%eax
08ac4945 +0x09:  pop    %ebp
08ac4946 +0x0a:  ret
08ac4947 +0x0b:  nop
```

## 反编译 C

```c
// PackSet::indexes @ 0x8ac493c

/* DWARF original prototype: index_vector_t * indexes(PackSet * this) */

index_vector_t * __thiscall PackSet::indexes(PackSet *this)

{
  return &this->indexes_;
}
```
