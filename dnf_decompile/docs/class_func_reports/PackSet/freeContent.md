# freeContent

`_ZN7PackSet11freeContentEPKc`

`PackSet::freeContent(char const*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac5448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac5448  _ZN7PackSet11freeContentEPKc
#           PackSet::freeContent(char const*)
# range [0x08ac5448, 0x08ac54ed]
08ac5448 +0x00:  push   %ebp
08ac5449 +0x01:  mov    %esp,%ebp
08ac544b +0x03:  sub    $0x38,%esp
08ac544e +0x06:  lea    -0x10(%ebp),%eax
08ac5451 +0x09:  mov    %eax,(%esp)
08ac5454 +0x0c:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac5459 +0x11:  lea    -0x1c(%ebp),%eax
08ac545c +0x14:  mov    0xc(%ebp),%edx
08ac545f +0x17:  mov    %edx,0x8(%esp)
08ac5463 +0x1b:  mov    0x8(%ebp),%edx
08ac5466 +0x1e:  mov    %edx,0x4(%esp)
08ac546a +0x22:  mov    %eax,(%esp)
08ac546d +0x25:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac5472 +0x2a:  sub    $0x4,%esp
08ac5475 +0x2d:  mov    -0x1c(%ebp),%eax
08ac5478 +0x30:  mov    %eax,-0x10(%ebp)
08ac547b +0x33:  mov    0x8(%ebp),%eax
08ac547e +0x36:  lea    0x10(%eax),%edx
08ac5481 +0x39:  lea    -0xc(%ebp),%eax
08ac5484 +0x3c:  mov    %edx,0x4(%esp)
08ac5488 +0x40:  mov    %eax,(%esp)
08ac548b +0x43:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5490 +0x48:  sub    $0x4,%esp
08ac5493 +0x4b:  lea    -0xc(%ebp),%eax
08ac5496 +0x4e:  mov    %eax,0x4(%esp)
08ac549a +0x52:  lea    -0x10(%ebp),%eax
08ac549d +0x55:  mov    %eax,(%esp)
08ac54a0 +0x58:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac54a5 +0x5d:  test   %al,%al
08ac54a7 +0x5f:  je     08ac54ec <+0xa4>
08ac54a9 +0x61:  lea    -0x10(%ebp),%eax
08ac54ac +0x64:  mov    %eax,(%esp)
08ac54af +0x67:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac54b4 +0x6c:  mov    0x1c(%eax),%eax
08ac54b7 +0x6f:  test   %eax,%eax
08ac54b9 +0x71:  setne  %al
08ac54bc +0x74:  test   %al,%al
08ac54be +0x76:  je     08ac54ec <+0xa4>
08ac54c0 +0x78:  lea    -0x10(%ebp),%eax
08ac54c3 +0x7b:  mov    %eax,(%esp)
08ac54c6 +0x7e:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac54cb +0x83:  mov    0x1c(%eax),%eax
08ac54ce +0x86:  test   %eax,%eax
08ac54d0 +0x88:  je     08ac54da <+0x92>
08ac54d2 +0x8a:  mov    %eax,(%esp)
08ac54d5 +0x8d:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac54da +0x92:  lea    -0x10(%ebp),%eax
08ac54dd +0x95:  mov    %eax,(%esp)
08ac54e0 +0x98:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac54e5 +0x9d:  movl   $0x0,0x1c(%eax)
08ac54ec +0xa4:  leave
08ac54ed +0xa5:  ret
```

## 反编译 C

```c
// PackSet::freeContent @ 0x8ac5448

/* DWARF original prototype: void freeContent(PackSet * this, NCHAR * name) */

void __thiscall PackSet::freeContent(PackSet *this,NCHAR *name)

{
  uchar *puVar1;
  bool bVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_10;
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_14);
  find((PackSet *)&local_20,(NCHAR *)this);
  local_14._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_10);
  bVar2 = __gnu_cxx::
          operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_14,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_10);
  if (bVar2) {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_14);
    if ((ppVar3->second).content_ != (uchar *)0x0) {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      puVar1 = (ppVar3->second).content_;
      if (puVar1 != (uchar *)0x0) {
        operator_delete__(puVar1);
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      (ppVar3->second).content_ = (uchar *)0x0;
    }
  }
  return;
}
```
