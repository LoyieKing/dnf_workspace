# clear

`_ZN7PackSet5clearEv`

`PackSet::clear()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac48d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac48d2  _ZN7PackSet5clearEv
#           PackSet::clear()
# range [0x08ac48d2, 0x08ac4923]
08ac48d2 +0x00:  push   %ebp
08ac48d3 +0x01:  mov    %esp,%ebp
08ac48d5 +0x03:  sub    $0x18,%esp
08ac48d8 +0x06:  mov    0x8(%ebp),%eax
08ac48db +0x09:  movl   $0x0,(%eax)
08ac48e1 +0x0f:  mov    0x8(%ebp),%eax
08ac48e4 +0x12:  movl   $0x0,0x4(%eax)
08ac48eb +0x19:  mov    0x8(%ebp),%eax
08ac48ee +0x1c:  movl   $0x0,0x8(%eax)
08ac48f5 +0x23:  mov    0x8(%ebp),%eax
08ac48f8 +0x26:  movl   $0x0,0xc(%eax)
08ac48ff +0x2d:  mov    0x8(%ebp),%eax
08ac4902 +0x30:  add    $0x10,%eax
08ac4905 +0x33:  mov    %eax,(%esp)
08ac4908 +0x36:  call   08ac7952 <_ZN16IPackFileProcess15getCommonBufferEj+0x214>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x214
08ac490d +0x3b:  mov    0x8(%ebp),%eax
08ac4910 +0x3e:  add    $0x1c,%eax
08ac4913 +0x41:  mov    %eax,(%esp)
08ac4916 +0x44:  call   08ac7952 <_ZN16IPackFileProcess15getCommonBufferEj+0x214>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x214
08ac491b +0x49:  mov    0x8(%ebp),%eax
08ac491e +0x4c:  movb   $0x0,0x28(%eax)
08ac4922 +0x50:  leave
08ac4923 +0x51:  ret
```

## 反编译 C

```c
// PackSet::clear @ 0x8ac48d2

/* DWARF original prototype: void clear(PackSet * this) */

void __thiscall PackSet::clear(PackSet *this)

{
  this->pack_file_ = (FILE *)0x0;
  this->revision_ = 0;
  this->header_size_ = 0;
  this->type_ = PACK_LOAD_FULL;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::clear(&this->indexes_);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::clear(&this->addeds_);
  this->m_bUseEncryptedFile = false;
  return;
}
```
