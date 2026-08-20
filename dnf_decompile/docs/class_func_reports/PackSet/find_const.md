# find_const

`_ZN7PackSet10find_constEPKc`

`PackSet::find_const(char const*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4b6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4b6c  _ZN7PackSet10find_constEPKc
#           PackSet::find_const(char const*)
# range [0x08ac4b6c, 0x08ac4dfd]
08ac4b6c +0x000:  push   %ebp
08ac4b6d +0x001:  mov    %esp,%ebp
08ac4b6f +0x003:  push   %esi
08ac4b70 +0x004:  push   %ebx
08ac4b71 +0x005:  sub    $0x190,%esp
08ac4b77 +0x00b:  mov    0x8(%ebp),%ebx
08ac4b7a +0x00e:  lea    -0x64(%ebp),%eax
08ac4b7d +0x011:  mov    %eax,(%esp)
08ac4b80 +0x014:  call   08ac3de2 <_ZN10IndexEntryC1Ev>  ; IndexEntry::IndexEntry()
08ac4b85 +0x019:  lea    -0x6c(%ebp),%eax
08ac4b88 +0x01c:  mov    %eax,(%esp)
08ac4b8b +0x01f:  call   08ac7a2e <_ZN16IPackFileProcess15getCommonBufferEj+0x2f0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2f0
08ac4b90 +0x024:  movl   $0x0,0x10(%esp)
08ac4b98 +0x02c:  movl   $0x0,0xc(%esp)
08ac4ba0 +0x034:  movl   $0x104,0x8(%esp)
08ac4ba8 +0x03c:  lea    -0x174(%ebp),%eax
08ac4bae +0x042:  mov    %eax,0x4(%esp)
08ac4bb2 +0x046:  mov    0x10(%ebp),%eax
08ac4bb5 +0x049:  mov    %eax,(%esp)
08ac4bb8 +0x04c:  call   08ac3b9a <_Z17_correct_filenamePKcPcjS1_j>  ; _correct_filename(char const*, char*, unsigned int, char*, unsigned int)
08ac4bbd +0x051:  lea    -0x174(%ebp),%eax
08ac4bc3 +0x057:  mov    %eax,(%esp)
08ac4bc6 +0x05a:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08ac4bcb +0x05f:  mov    %eax,(%esp)
08ac4bce +0x062:  call   08ac3b04 <_ZL5_hashPKc>  ; _hash(char const*)
08ac4bd3 +0x067:  mov    %eax,-0x48(%ebp)
08ac4bd6 +0x06a:  lea    -0x64(%ebp),%eax
08ac4bd9 +0x06d:  mov    %eax,0x8(%esp)
08ac4bdd +0x071:  lea    -0x48(%ebp),%eax
08ac4be0 +0x074:  mov    %eax,0x4(%esp)
08ac4be4 +0x078:  lea    -0x3c(%ebp),%eax
08ac4be7 +0x07b:  mov    %eax,(%esp)
08ac4bea +0x07e:  call   08ac7ab6 <_ZN16IPackFileProcess15getCommonBufferEj+0x378>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x378
08ac4bef +0x083:  mov    0xc(%ebp),%eax
08ac4bf2 +0x086:  lea    0x10(%eax),%edx
08ac4bf5 +0x089:  lea    -0x1c(%ebp),%eax
08ac4bf8 +0x08c:  mov    %edx,0x4(%esp)
08ac4bfc +0x090:  mov    %eax,(%esp)
08ac4bff +0x093:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4c04 +0x098:  sub    $0x4,%esp
08ac4c07 +0x09b:  mov    0xc(%ebp),%eax
08ac4c0a +0x09e:  lea    0x10(%eax),%edx
08ac4c0d +0x0a1:  lea    -0x18(%ebp),%eax
08ac4c10 +0x0a4:  mov    %edx,0x4(%esp)
08ac4c14 +0x0a8:  mov    %eax,(%esp)
08ac4c17 +0x0ab:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac4c1c +0x0b0:  sub    $0x4,%esp
08ac4c1f +0x0b3:  lea    -0x44(%ebp),%eax
08ac4c22 +0x0b6:  movl   $&_ZL11_index_lessRKSt4pairIm10IndexEntryES3_,0x10(%esp)
08ac4c2a +0x0be:  lea    -0x3c(%ebp),%edx
08ac4c2d +0x0c1:  mov    %edx,0xc(%esp)
08ac4c31 +0x0c5:  mov    -0x1c(%ebp),%edx
08ac4c34 +0x0c8:  mov    %edx,0x8(%esp)
08ac4c38 +0x0cc:  mov    -0x18(%ebp),%edx
08ac4c3b +0x0cf:  mov    %edx,0x4(%esp)
08ac4c3f +0x0d3:  mov    %eax,(%esp)
08ac4c42 +0x0d6:  call   08ac7aed <_ZN16IPackFileProcess15getCommonBufferEj+0x3af>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x3af
08ac4c47 +0x0db:  sub    $0x4,%esp
08ac4c4a +0x0de:  lea    -0x44(%ebp),%eax
08ac4c4d +0x0e1:  mov    %eax,0x4(%esp)
08ac4c51 +0x0e5:  lea    -0x6c(%ebp),%eax
08ac4c54 +0x0e8:  mov    %eax,(%esp)
08ac4c57 +0x0eb:  call   08ac7c84 <_ZN16IPackFileProcess15getCommonBufferEj+0x546>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x546
08ac4c5c +0x0f0:  jmp    08ac4c76 <+0x10a>
08ac4c5e +0x0f2:  mov    %edx,%ebx
08ac4c60 +0x0f4:  mov    %eax,%esi
08ac4c62 +0x0f6:  lea    -0x3c(%ebp),%eax
08ac4c65 +0x0f9:  mov    %eax,(%esp)
08ac4c68 +0x0fc:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac4c6d +0x101:  mov    %esi,%eax
08ac4c6f +0x103:  mov    %ebx,%edx
08ac4c71 +0x105:  jmp    08ac4dcc <+0x260>
08ac4c76 +0x10a:  lea    -0x3c(%ebp),%eax
08ac4c79 +0x10d:  mov    %eax,(%esp)
08ac4c7c +0x110:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac4c81 +0x115:  mov    0xc(%ebp),%eax
08ac4c84 +0x118:  lea    0x10(%eax),%edx
08ac4c87 +0x11b:  lea    -0x14(%ebp),%eax
08ac4c8a +0x11e:  mov    %edx,0x4(%esp)
08ac4c8e +0x122:  mov    %eax,(%esp)
08ac4c91 +0x125:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4c96 +0x12a:  sub    $0x4,%esp
08ac4c99 +0x12d:  lea    -0x14(%ebp),%eax
08ac4c9c +0x130:  mov    %eax,0x4(%esp)
08ac4ca0 +0x134:  lea    -0x6c(%ebp),%eax
08ac4ca3 +0x137:  mov    %eax,(%esp)
08ac4ca6 +0x13a:  call   08ac7cb7 <_ZN16IPackFileProcess15getCommonBufferEj+0x579>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x579
08ac4cab +0x13f:  test   %al,%al
08ac4cad +0x141:  jne    08ac4cc3 <+0x157>
08ac4caf +0x143:  lea    -0x6c(%ebp),%eax
08ac4cb2 +0x146:  mov    %eax,(%esp)
08ac4cb5 +0x149:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4cba +0x14e:  mov    (%eax),%edx
08ac4cbc +0x150:  mov    -0x48(%ebp),%eax
08ac4cbf +0x153:  cmp    %eax,%edx
08ac4cc1 +0x155:  je     08ac4cca <+0x15e>
08ac4cc3 +0x157:  mov    $0x1,%eax
08ac4cc8 +0x15c:  jmp    08ac4ccf <+0x163>
08ac4cca +0x15e:  mov    $0x0,%eax
08ac4ccf +0x163:  test   %al,%al
08ac4cd1 +0x165:  je     08ac4cff <+0x193>
08ac4cd3 +0x167:  mov    0xc(%ebp),%eax
08ac4cd6 +0x16a:  lea    0x10(%eax),%edx
08ac4cd9 +0x16d:  lea    -0x10(%ebp),%eax
08ac4cdc +0x170:  mov    %edx,0x4(%esp)
08ac4ce0 +0x174:  mov    %eax,(%esp)
08ac4ce3 +0x177:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4ce8 +0x17c:  sub    $0x4,%esp
08ac4ceb +0x17f:  lea    -0x10(%ebp),%eax
08ac4cee +0x182:  mov    %eax,0x4(%esp)
08ac4cf2 +0x186:  mov    %ebx,(%esp)
08ac4cf5 +0x189:  call   08ac7ce4 <_ZN16IPackFileProcess15getCommonBufferEj+0x5a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x5a6
08ac4cfa +0x18e:  jmp    08ac4de7 <+0x27b>
08ac4cff +0x193:  lea    -0x70(%ebp),%eax
08ac4d02 +0x196:  mov    %eax,(%esp)
08ac4d05 +0x199:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac4d0a +0x19e:  mov    -0x6c(%ebp),%eax
08ac4d0d +0x1a1:  mov    %eax,-0x70(%ebp)
08ac4d10 +0x1a4:  jmp    08ac4d62 <+0x1f6>
08ac4d12 +0x1a6:  lea    -0x70(%ebp),%eax
08ac4d15 +0x1a9:  mov    %eax,(%esp)
08ac4d18 +0x1ac:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4d1d +0x1b1:  add    $0x8,%eax
08ac4d20 +0x1b4:  mov    %eax,(%esp)
08ac4d23 +0x1b7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac4d28 +0x1bc:  lea    -0x174(%ebp),%edx
08ac4d2e +0x1c2:  mov    %edx,0x4(%esp)
08ac4d32 +0x1c6:  mov    %eax,(%esp)
08ac4d35 +0x1c9:  call   0807e4e0 <_init+0xdd8>
08ac4d3a +0x1ce:  test   %eax,%eax
08ac4d3c +0x1d0:  sete   %al
08ac4d3f +0x1d3:  test   %al,%al
08ac4d41 +0x1d5:  je     08ac4d57 <+0x1eb>
08ac4d43 +0x1d7:  lea    -0x70(%ebp),%eax
08ac4d46 +0x1da:  mov    %eax,0x4(%esp)
08ac4d4a +0x1de:  mov    %ebx,(%esp)
08ac4d4d +0x1e1:  call   08ac7ce4 <_ZN16IPackFileProcess15getCommonBufferEj+0x5a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x5a6
08ac4d52 +0x1e6:  jmp    08ac4de7 <+0x27b>
08ac4d57 +0x1eb:  lea    -0x70(%ebp),%eax
08ac4d5a +0x1ee:  mov    %eax,(%esp)
08ac4d5d +0x1f1:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac4d62 +0x1f6:  lea    -0x70(%ebp),%eax
08ac4d65 +0x1f9:  mov    %eax,(%esp)
08ac4d68 +0x1fc:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4d6d +0x201:  mov    (%eax),%edx
08ac4d6f +0x203:  mov    -0x48(%ebp),%eax
08ac4d72 +0x206:  cmp    %eax,%edx
08ac4d74 +0x208:  jne    08ac4d96 <+0x22a>
08ac4d76 +0x20a:  lea    -0x6c(%ebp),%eax
08ac4d79 +0x20d:  add    $0x4,%eax
08ac4d7c +0x210:  mov    %eax,0x4(%esp)
08ac4d80 +0x214:  lea    -0x70(%ebp),%eax
08ac4d83 +0x217:  mov    %eax,(%esp)
08ac4d86 +0x21a:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac4d8b +0x21f:  test   %al,%al
08ac4d8d +0x221:  je     08ac4d96 <+0x22a>
08ac4d8f +0x223:  mov    $0x1,%eax
08ac4d94 +0x228:  jmp    08ac4d9b <+0x22f>
08ac4d96 +0x22a:  mov    $0x0,%eax
08ac4d9b +0x22f:  test   %al,%al
08ac4d9d +0x231:  jne    08ac4d12 <+0x1a6>
08ac4da3 +0x237:  mov    0xc(%ebp),%eax
08ac4da6 +0x23a:  lea    0x10(%eax),%edx
08ac4da9 +0x23d:  lea    -0xc(%ebp),%eax
08ac4dac +0x240:  mov    %edx,0x4(%esp)
08ac4db0 +0x244:  mov    %eax,(%esp)
08ac4db3 +0x247:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4db8 +0x24c:  sub    $0x4,%esp
08ac4dbb +0x24f:  lea    -0xc(%ebp),%eax
08ac4dbe +0x252:  mov    %eax,0x4(%esp)
08ac4dc2 +0x256:  mov    %ebx,(%esp)
08ac4dc5 +0x259:  call   08ac7ce4 <_ZN16IPackFileProcess15getCommonBufferEj+0x5a6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x5a6
08ac4dca +0x25e:  jmp    08ac4de7 <+0x27b>
08ac4dcc +0x260:  mov    %edx,%ebx
08ac4dce +0x262:  mov    %eax,%esi
08ac4dd0 +0x264:  lea    -0x64(%ebp),%eax
08ac4dd3 +0x267:  mov    %eax,(%esp)
08ac4dd6 +0x26a:  call   08ac3e04 <_ZN10IndexEntryD1Ev>  ; IndexEntry::~IndexEntry()
08ac4ddb +0x26f:  mov    %esi,%eax
08ac4ddd +0x271:  mov    %ebx,%edx
08ac4ddf +0x273:  mov    %eax,(%esp)
08ac4de2 +0x276:  call   08ae3750 <_Unwind_Resume>
08ac4de7 +0x27b:  lea    -0x64(%ebp),%eax
08ac4dea +0x27e:  mov    %eax,(%esp)
08ac4ded +0x281:  call   08ac3e04 <_ZN10IndexEntryD1Ev>  ; IndexEntry::~IndexEntry()
08ac4df2 +0x286:  mov    %ebx,%eax
08ac4df4 +0x288:  lea    -0x8(%ebp),%esp
08ac4df7 +0x28b:  add    $0x0,%esp
08ac4dfa +0x28e:  pop    %ebx
08ac4dfb +0x28f:  pop    %esi
08ac4dfc +0x290:  pop    %ebp
08ac4dfd +0x291:  ret    $0x4
```

## 反编译 C

```c
// PackSet::find_const @ 0x8ac4b6c

/* DWARF original prototype: index_vector_const_it find_const(PackSet * this, NCHAR * name) */

index_vector_const_it __thiscall PackSet::find_const(PackSet *this,NCHAR *name)

{
  bool bVar1;
  char *pcVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  int iVar4;
  NCHAR *in_stack_0000000c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  *__p;
  pair<long_unsigned_int,_IndexEntry> **__i;
  NCHAR local_178 [260];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_74;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_70;
  IndexEntry local_68;
  hash_t local_4c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_48;
  pair<long_unsigned_int,_IndexEntry> local_40;
  undefined1 local_20 [8];
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_18;
  
                    /* Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: ulong code@[???]
                       Unresolved local var: IndexEntry dummy@[???]
                       Unresolved local var:
                       pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
                       it@[???] */
  IndexEntry::IndexEntry(&local_68);
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::pair(&local_70);
                    /* try { // try from 08ac4bb8 to 08ac4bee has its CatchHandler @ 08ac4dcc */
  _correct_filename(in_stack_0000000c,local_178,0x104,(NCHAR *)0x0,0);
  pcVar2 = toMbcs(local_178);
  local_4c = _hash(pcVar2);
  std::pair<long_unsigned_int,_IndexEntry>::pair<long_unsigned_int&,_IndexEntry&>
            (&local_40,&local_4c,&local_68);
                    /* try { // try from 08ac4bff to 08ac4c5b has its CatchHandler @ 08ac4c5e */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)local_20);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)(local_20 + 4));
  std::
  equal_range<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_PackSet::index_pair_t,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
            (&local_48,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_20._4_4_,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_20._0_4_,&local_40,_index_less);
  __p = &local_48;
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::operator=(&local_70,__p);
                    /* try { // try from 08ac4c7c to 08ac4dc9 has its CatchHandler @ 08ac4dcc */
  std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_40,(int)__p);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_18);
  bVar1 = __gnu_cxx::
          operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_70.first,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_18);
  if (bVar1) {
LAB_08ac4cc3:
    bVar1 = true;
  }
  else {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_70.first);
    if (ppVar3->first != local_4c) goto LAB_08ac4cc3;
    bVar1 = false;
  }
  if (!bVar1) {
                    /* Unresolved local var: index_vector_it it2@[???] */
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_74);
    local_74._M_current = local_70.first._M_current;
    do {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_74);
      if (ppVar3->first == local_4c) {
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,&local_70.second);
        if (!bVar1) goto LAB_08ac4d96;
        bVar1 = true;
      }
      else {
LAB_08ac4d96:
        bVar1 = false;
      }
      if (!bVar1) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)&local_18.
                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                  ._M_impl._M_end_of_storage);
        __i = &local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_end_of_storage;
        __gnu_cxx::
        __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
                  ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)__i);
        goto LAB_08ac4de7;
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_74);
      pcVar2 = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
      iVar4 = strcmp(pcVar2,local_178);
      if (iVar4 == 0) goto code_r0x08ac4d43;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_74);
    } while( true );
  }
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)&local_18.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_finish);
  __i = &local_18.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_finish;
  __gnu_cxx::
  __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
            ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)__i);
LAB_08ac4de7:
  IndexEntry::~IndexEntry(&local_68,(int)__i);
  return (index_vector_const_it)(pair<long_unsigned_int,_IndexEntry> *)this;
code_r0x08ac4d43:
  __i = &local_74._M_current;
  __gnu_cxx::
  __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
            ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)__i);
  goto LAB_08ac4de7;
}
```
