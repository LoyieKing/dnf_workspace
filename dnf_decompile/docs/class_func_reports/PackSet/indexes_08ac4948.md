# indexes

`_ZN7PackSet7indexesEv`

`PackSet::indexes()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4948  _ZN7PackSet7indexesEv
#           PackSet::indexes()
# range [0x08ac4948, 0x08ac4953]
08ac4948 +0x00:  push   %ebp
08ac4949 +0x01:  mov    %esp,%ebp
08ac494b +0x03:  mov    0x8(%ebp),%eax
08ac494e +0x06:  add    $0x10,%eax
08ac4951 +0x09:  pop    %ebp
08ac4952 +0x0a:  ret
08ac4953 +0x0b:  nop
```

## 反编译 C

```c
// PackSet::indexes @ 0x8ac4948

/* DWARF original prototype: index_vector_t * indexes(PackSet * this) */

index_vector_t * __thiscall PackSet::indexes(PackSet *this)

{
  return &this->indexes_;
}
```
