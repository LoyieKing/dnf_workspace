# is_exist

`_ZN7PackSet8is_existEPKc`

`PackSet::is_exist(char const*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac498c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac498c  _ZN7PackSet8is_existEPKc
#           PackSet::is_exist(char const*)
# range [0x08ac498c, 0x08ac49d9]
08ac498c +0x00:  push   %ebp
08ac498d +0x01:  mov    %esp,%ebp
08ac498f +0x03:  sub    $0x28,%esp
08ac4992 +0x06:  lea    -0x10(%ebp),%eax
08ac4995 +0x09:  mov    0xc(%ebp),%edx
08ac4998 +0x0c:  mov    %edx,0x8(%esp)
08ac499c +0x10:  mov    0x8(%ebp),%edx
08ac499f +0x13:  mov    %edx,0x4(%esp)
08ac49a3 +0x17:  mov    %eax,(%esp)
08ac49a6 +0x1a:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac49ab +0x1f:  sub    $0x4,%esp
08ac49ae +0x22:  mov    0x8(%ebp),%eax
08ac49b1 +0x25:  lea    0x10(%eax),%edx
08ac49b4 +0x28:  lea    -0xc(%ebp),%eax
08ac49b7 +0x2b:  mov    %edx,0x4(%esp)
08ac49bb +0x2f:  mov    %eax,(%esp)
08ac49be +0x32:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac49c3 +0x37:  sub    $0x4,%esp
08ac49c6 +0x3a:  lea    -0xc(%ebp),%eax
08ac49c9 +0x3d:  mov    %eax,0x4(%esp)
08ac49cd +0x41:  lea    -0x10(%ebp),%eax
08ac49d0 +0x44:  mov    %eax,(%esp)
08ac49d3 +0x47:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac49d8 +0x4c:  leave
08ac49d9 +0x4d:  ret
```

## 反编译 C

```c
// PackSet::is_exist @ 0x8ac498c

/* DWARF original prototype: bool is_exist(PackSet * this, NCHAR * name) */

bool __thiscall PackSet::is_exist(PackSet *this,NCHAR *name)

{
  bool bVar1;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_10;
  
                    /* Unresolved local var: index_vector_it rval@[???] */
  find((PackSet *)&local_14,(NCHAR *)this);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_10);
  bVar1 = __gnu_cxx::
          operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_14,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_10);
  return bVar1;
}
```
