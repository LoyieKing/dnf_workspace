# sort

`_ZN7PackSet4sortEv`

`PackSet::sort()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac58ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac58ee  _ZN7PackSet4sortEv
#           PackSet::sort()
# range [0x08ac58ee, 0x08ac5a51]
08ac58ee +0x000:  push   %ebp
08ac58ef +0x001:  mov    %esp,%ebp
08ac58f1 +0x003:  sub    $0x48,%esp
08ac58f4 +0x006:  lea    -0x18(%ebp),%eax
08ac58f7 +0x009:  mov    %eax,(%esp)
08ac58fa +0x00c:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac58ff +0x011:  mov    0x8(%ebp),%eax
08ac5902 +0x014:  mov    0xc(%eax),%eax
08ac5905 +0x017:  test   %eax,%eax
08ac5907 +0x019:  je     08ac595d <+0x6f>
08ac5909 +0x01b:  mov    &stdout,%eax
08ac590e +0x020:  movl   $"PACK_LOAD_FULL needed",0x8(%esp)
08ac5916 +0x028:  movl   $"%s\n",0x4(%esp)
08ac591e +0x030:  mov    %eax,(%esp)
08ac5921 +0x033:  call   0807da90 <_init+0x388>
08ac5926 +0x038:  mov    &stdout,%eax
08ac592b +0x03d:  movl   $&_ZZN7PackSet4sortEvE12__FUNCTION__,0x10(%esp)
08ac5933 +0x045:  movl   $0x3b7,0xc(%esp)
08ac593b +0x04d:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5943 +0x055:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac594b +0x05d:  mov    %eax,(%esp)
08ac594e +0x060:  call   0807da90 <_init+0x388>
08ac5953 +0x065:  mov    $0x1,%eax
08ac5958 +0x06a:  jmp    08ac5a50 <+0x162>
08ac595d +0x06f:  mov    0x8(%ebp),%eax
08ac5960 +0x072:  add    $0x1c,%eax
08ac5963 +0x075:  mov    %eax,(%esp)
08ac5966 +0x078:  call   08ac796e <_ZN16IPackFileProcess15getCommonBufferEj+0x230>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x230
08ac596b +0x07d:  mov    0x8(%ebp),%edx
08ac596e +0x080:  add    $0x10,%edx
08ac5971 +0x083:  mov    %eax,0x4(%esp)
08ac5975 +0x087:  mov    %edx,(%esp)
08ac5978 +0x08a:  call   08ac7e78 <_ZN16IPackFileProcess15getCommonBufferEj+0x73a>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x73a
08ac597d +0x08f:  mov    0x8(%ebp),%eax
08ac5980 +0x092:  lea    0x1c(%eax),%edx
08ac5983 +0x095:  lea    -0x1c(%ebp),%eax
08ac5986 +0x098:  mov    %edx,0x4(%esp)
08ac598a +0x09c:  mov    %eax,(%esp)
08ac598d +0x09f:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac5992 +0x0a4:  sub    $0x4,%esp
08ac5995 +0x0a7:  mov    -0x1c(%ebp),%eax
08ac5998 +0x0aa:  mov    %eax,-0x18(%ebp)
08ac599b +0x0ad:  jmp    08ac59c5 <+0xd7>
08ac599d +0x0af:  lea    -0x18(%ebp),%eax
08ac59a0 +0x0b2:  mov    %eax,(%esp)
08ac59a3 +0x0b5:  call   08ac7f9c <_ZN16IPackFileProcess15getCommonBufferEj+0x85e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x85e
08ac59a8 +0x0ba:  mov    0x8(%ebp),%edx
08ac59ab +0x0bd:  add    $0x10,%edx
08ac59ae +0x0c0:  mov    %eax,0x4(%esp)
08ac59b2 +0x0c4:  mov    %edx,(%esp)
08ac59b5 +0x0c7:  call   08ac7e04 <_ZN16IPackFileProcess15getCommonBufferEj+0x6c6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x6c6
08ac59ba +0x0cc:  lea    -0x18(%ebp),%eax
08ac59bd +0x0cf:  mov    %eax,(%esp)
08ac59c0 +0x0d2:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac59c5 +0x0d7:  mov    0x8(%ebp),%eax
08ac59c8 +0x0da:  lea    0x1c(%eax),%edx
08ac59cb +0x0dd:  lea    -0x14(%ebp),%eax
08ac59ce +0x0e0:  mov    %edx,0x4(%esp)
08ac59d2 +0x0e4:  mov    %eax,(%esp)
08ac59d5 +0x0e7:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac59da +0x0ec:  sub    $0x4,%esp
08ac59dd +0x0ef:  lea    -0x14(%ebp),%eax
08ac59e0 +0x0f2:  mov    %eax,0x4(%esp)
08ac59e4 +0x0f6:  lea    -0x18(%ebp),%eax
08ac59e7 +0x0f9:  mov    %eax,(%esp)
08ac59ea +0x0fc:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac59ef +0x101:  test   %al,%al
08ac59f1 +0x103:  jne    08ac599d <+0xaf>
08ac59f3 +0x105:  mov    0x8(%ebp),%eax
08ac59f6 +0x108:  lea    0x10(%eax),%edx
08ac59f9 +0x10b:  lea    -0x10(%ebp),%eax
08ac59fc +0x10e:  mov    %edx,0x4(%esp)
08ac5a00 +0x112:  mov    %eax,(%esp)
08ac5a03 +0x115:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5a08 +0x11a:  sub    $0x4,%esp
08ac5a0b +0x11d:  mov    0x8(%ebp),%eax
08ac5a0e +0x120:  lea    0x10(%eax),%edx
08ac5a11 +0x123:  lea    -0xc(%ebp),%eax
08ac5a14 +0x126:  mov    %edx,0x4(%esp)
08ac5a18 +0x12a:  mov    %eax,(%esp)
08ac5a1b +0x12d:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac5a20 +0x132:  sub    $0x4,%esp
08ac5a23 +0x135:  movl   $&_ZL11_index_lessRKSt4pairIm10IndexEntryES3_,0x8(%esp)
08ac5a2b +0x13d:  mov    -0x10(%ebp),%eax
08ac5a2e +0x140:  mov    %eax,0x4(%esp)
08ac5a32 +0x144:  mov    -0xc(%ebp),%eax
08ac5a35 +0x147:  mov    %eax,(%esp)
08ac5a38 +0x14a:  call   08ac7fa6 <_ZN16IPackFileProcess15getCommonBufferEj+0x868>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x868
08ac5a3d +0x14f:  mov    0x8(%ebp),%eax
08ac5a40 +0x152:  add    $0x1c,%eax
08ac5a43 +0x155:  mov    %eax,(%esp)
08ac5a46 +0x158:  call   08ac7952 <_ZN16IPackFileProcess15getCommonBufferEj+0x214>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x214
08ac5a4b +0x15d:  mov    $0x0,%eax
08ac5a50 +0x162:  leave
08ac5a51 +0x163:  ret
```

## 反编译 C

```c
// PackSet::sort @ 0x8ac58ee

/* DWARF original prototype: pack_ret_t sort(PackSet * this) */

pack_ret_t __thiscall PackSet::sort(PackSet *this)

{
  bool bVar1;
  pack_ret_t pVar2;
  size_t __n;
  pair<long_unsigned_int,_IndexEntry> *__x;
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       *)(local_20 + 4));
  if (this->type_ == PACK_LOAD_FULL) {
    __n = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->addeds_);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::reserve(&this->indexes_,__n);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_20);
    local_20._4_4_ = local_20._0_4_;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_20 + 8));
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_20 + 4),
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_20 + 8));
      if (!bVar1) break;
      __x = __gnu_cxx::
            __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
            ::operator*((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         *)(local_20 + 4));
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::push_back(&this->indexes_,__x);
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)(local_20 + 4));
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_14);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_14 + 4));
    std::
    sort<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
              ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                )local_14._4_4_,
               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                )local_14._0_4_,_index_less);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::clear(&this->addeds_);
    pVar2 = PACK_OK;
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3b7,"sort");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}
```
