# is_dirty

`_ZNK7PackSet8is_dirtyEv`

`PackSet::is_dirty() const`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4970  _ZNK7PackSet8is_dirtyEv
#           PackSet::is_dirty() const
# range [0x08ac4970, 0x08ac498b]
08ac4970 +0x00:  push   %ebp
08ac4971 +0x01:  mov    %esp,%ebp
08ac4973 +0x03:  sub    $0x18,%esp
08ac4976 +0x06:  mov    0x8(%ebp),%eax
08ac4979 +0x09:  add    $0x1c,%eax
08ac497c +0x0c:  mov    %eax,(%esp)
08ac497f +0x0f:  call   08ac796e <_ZN16IPackFileProcess15getCommonBufferEj+0x230>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x230
08ac4984 +0x14:  test   %eax,%eax
08ac4986 +0x16:  setne  %al
08ac4989 +0x19:  leave
08ac498a +0x1a:  ret
08ac498b +0x1b:  nop
```

## 反编译 C

```c
// PackSet::is_dirty @ 0x8ac4970

/* DWARF original prototype: bool is_dirty(PackSet * this) */

bool __thiscall PackSet::is_dirty(PackSet *this)

{
  size_t sVar1;
  
  sVar1 = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->addeds_);
  return sVar1 != 0;
}
```
