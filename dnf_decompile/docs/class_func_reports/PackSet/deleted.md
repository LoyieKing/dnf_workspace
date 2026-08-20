# deleted

`_ZN7PackSet7deletedEPKc`

`PackSet::deleted(char const*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac5332` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac5332  _ZN7PackSet7deletedEPKc
#           PackSet::deleted(char const*)
# range [0x08ac5332, 0x08ac5447]
08ac5332 +0x000:  push   %ebp
08ac5333 +0x001:  mov    %esp,%ebp
08ac5335 +0x003:  sub    $0x48,%esp
08ac5338 +0x006:  lea    -0x14(%ebp),%eax
08ac533b +0x009:  mov    %eax,(%esp)
08ac533e +0x00c:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac5343 +0x011:  mov    0x8(%ebp),%eax
08ac5346 +0x014:  mov    0xc(%eax),%eax
08ac5349 +0x017:  test   %eax,%eax
08ac534b +0x019:  je     08ac53a1 <+0x6f>
08ac534d +0x01b:  mov    &stdout,%eax
08ac5352 +0x020:  movl   $"PACK_LOAD_FULL needed",0x8(%esp)
08ac535a +0x028:  movl   $"%s\n",0x4(%esp)
08ac5362 +0x030:  mov    %eax,(%esp)
08ac5365 +0x033:  call   0807da90 <_init+0x388>
08ac536a +0x038:  mov    &stdout,%eax
08ac536f +0x03d:  movl   $&_ZZN7PackSet7deletedEPKcE12__FUNCTION__,0x10(%esp)
08ac5377 +0x045:  movl   $0x346,0xc(%esp)
08ac537f +0x04d:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5387 +0x055:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac538f +0x05d:  mov    %eax,(%esp)
08ac5392 +0x060:  call   0807da90 <_init+0x388>
08ac5397 +0x065:  mov    $0x1,%eax
08ac539c +0x06a:  jmp    08ac5446 <+0x114>
08ac53a1 +0x06f:  lea    -0x1c(%ebp),%eax
08ac53a4 +0x072:  mov    0xc(%ebp),%edx
08ac53a7 +0x075:  mov    %edx,0x8(%esp)
08ac53ab +0x079:  mov    0x8(%ebp),%edx
08ac53ae +0x07c:  mov    %edx,0x4(%esp)
08ac53b2 +0x080:  mov    %eax,(%esp)
08ac53b5 +0x083:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac53ba +0x088:  sub    $0x4,%esp
08ac53bd +0x08b:  mov    -0x1c(%ebp),%eax
08ac53c0 +0x08e:  mov    %eax,-0x14(%ebp)
08ac53c3 +0x091:  mov    0x8(%ebp),%eax
08ac53c6 +0x094:  lea    0x10(%eax),%edx
08ac53c9 +0x097:  lea    -0x10(%ebp),%eax
08ac53cc +0x09a:  mov    %edx,0x4(%esp)
08ac53d0 +0x09e:  mov    %eax,(%esp)
08ac53d3 +0x0a1:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac53d8 +0x0a6:  sub    $0x4,%esp
08ac53db +0x0a9:  lea    -0x10(%ebp),%eax
08ac53de +0x0ac:  mov    %eax,0x4(%esp)
08ac53e2 +0x0b0:  lea    -0x14(%ebp),%eax
08ac53e5 +0x0b3:  mov    %eax,(%esp)
08ac53e8 +0x0b6:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac53ed +0x0bb:  test   %al,%al
08ac53ef +0x0bd:  je     08ac5441 <+0x10f>
08ac53f1 +0x0bf:  lea    -0x14(%ebp),%eax
08ac53f4 +0x0c2:  mov    %eax,(%esp)
08ac53f7 +0x0c5:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac53fc +0x0ca:  mov    0x1c(%eax),%eax
08ac53ff +0x0cd:  test   %eax,%eax
08ac5401 +0x0cf:  setne  %al
08ac5404 +0x0d2:  test   %al,%al
08ac5406 +0x0d4:  je     08ac5422 <+0xf0>
08ac5408 +0x0d6:  lea    -0x14(%ebp),%eax
08ac540b +0x0d9:  mov    %eax,(%esp)
08ac540e +0x0dc:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac5413 +0x0e1:  mov    0x1c(%eax),%eax
08ac5416 +0x0e4:  test   %eax,%eax
08ac5418 +0x0e6:  je     08ac5422 <+0xf0>
08ac541a +0x0e8:  mov    %eax,(%esp)
08ac541d +0x0eb:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac5422 +0x0f0:  mov    0x8(%ebp),%eax
08ac5425 +0x0f3:  lea    0x10(%eax),%ecx
08ac5428 +0x0f6:  lea    -0xc(%ebp),%eax
08ac542b +0x0f9:  mov    -0x14(%ebp),%edx
08ac542e +0x0fc:  mov    %edx,0x8(%esp)
08ac5432 +0x100:  mov    %ecx,0x4(%esp)
08ac5436 +0x104:  mov    %eax,(%esp)
08ac5439 +0x107:  call   08ac7cfe <_ZN16IPackFileProcess15getCommonBufferEj+0x5c0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x5c0
08ac543e +0x10c:  sub    $0x4,%esp
08ac5441 +0x10f:  mov    $0x0,%eax
08ac5446 +0x114:  leave
08ac5447 +0x115:  ret
```

## 反编译 C

```c
// PackSet::deleted @ 0x8ac5332

/* DWARF original prototype: pack_ret_t deleted(PackSet * this, NCHAR * name) */

pack_ret_t __thiscall PackSet::deleted(PackSet *this,NCHAR *name)

{
  uchar *puVar1;
  bool bVar2;
  pack_ret_t pVar3;
  pair<long_unsigned_int,_IndexEntry> *ppVar4;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_18;
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_18);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_18._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_14);
    bVar2 = __gnu_cxx::
            operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_18,
                       (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        *)local_14);
    if (bVar2) {
      ppVar4 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_18);
      if ((ppVar4->second).content_ != (uchar *)0x0) {
        ppVar4 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_18);
        puVar1 = (ppVar4->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
      }
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::erase((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)(local_14 + 4),
              (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               )&this->indexes_);
    }
    pVar3 = PACK_OK;
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x346,"deleted");
    pVar3 = PACK_ERROR;
  }
  return pVar3;
}
```
