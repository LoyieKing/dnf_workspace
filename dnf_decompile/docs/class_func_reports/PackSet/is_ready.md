# is_ready

`_ZNK7PackSet8is_readyEv`

`PackSet::is_ready() const`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4954  _ZNK7PackSet8is_readyEv
#           PackSet::is_ready() const
# range [0x08ac4954, 0x08ac496f]
08ac4954 +0x00:  push   %ebp
08ac4955 +0x01:  mov    %esp,%ebp
08ac4957 +0x03:  sub    $0x18,%esp
08ac495a +0x06:  mov    0x8(%ebp),%eax
08ac495d +0x09:  add    $0x10,%eax
08ac4960 +0x0c:  mov    %eax,(%esp)
08ac4963 +0x0f:  call   08ac796e <_ZN16IPackFileProcess15getCommonBufferEj+0x230>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x230
08ac4968 +0x14:  test   %eax,%eax
08ac496a +0x16:  setne  %al
08ac496d +0x19:  leave
08ac496e +0x1a:  ret
08ac496f +0x1b:  nop
```

## 反编译 C

```c
// PackSet::is_ready @ 0x8ac4954

/* DWARF original prototype: bool is_ready(PackSet * this) */

bool __thiscall PackSet::is_ready(PackSet *this)

{
  size_t sVar1;
  
  sVar1 = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->indexes_);
  return sVar1 != 0;
}
```
