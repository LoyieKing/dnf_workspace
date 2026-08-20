# find

`_ZN7PackSet4findEPKc`

`PackSet::find(char const*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac4e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4e00  _ZN7PackSet4findEPKc
#           PackSet::find(char const*)
# range [0x08ac4e00, 0x08ac505f]
08ac4e00 +0x000:  push   %ebp
08ac4e01 +0x001:  mov    %esp,%ebp
08ac4e03 +0x003:  push   %esi
08ac4e04 +0x004:  push   %ebx
08ac4e05 +0x005:  sub    $0x190,%esp
08ac4e0b +0x00b:  mov    0x8(%ebp),%ebx
08ac4e0e +0x00e:  lea    -0x5c(%ebp),%eax
08ac4e11 +0x011:  mov    %eax,(%esp)
08ac4e14 +0x014:  call   08ac3de2 <_ZN10IndexEntryC1Ev>  ; IndexEntry::IndexEntry()
08ac4e19 +0x019:  lea    -0x64(%ebp),%eax
08ac4e1c +0x01c:  mov    %eax,(%esp)
08ac4e1f +0x01f:  call   08ac7a2e <_ZN16IPackFileProcess15getCommonBufferEj+0x2f0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2f0
08ac4e24 +0x024:  movl   $0x0,0x10(%esp)
08ac4e2c +0x02c:  movl   $0x0,0xc(%esp)
08ac4e34 +0x034:  movl   $0x104,0x8(%esp)
08ac4e3c +0x03c:  lea    -0x16c(%ebp),%eax
08ac4e42 +0x042:  mov    %eax,0x4(%esp)
08ac4e46 +0x046:  mov    0x10(%ebp),%eax
08ac4e49 +0x049:  mov    %eax,(%esp)
08ac4e4c +0x04c:  call   08ac3b9a <_Z17_correct_filenamePKcPcjS1_j>  ; _correct_filename(char const*, char*, unsigned int, char*, unsigned int)
08ac4e51 +0x051:  lea    -0x16c(%ebp),%eax
08ac4e57 +0x057:  mov    %eax,(%esp)
08ac4e5a +0x05a:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08ac4e5f +0x05f:  mov    %eax,(%esp)
08ac4e62 +0x062:  call   08ac3b04 <_ZL5_hashPKc>  ; _hash(char const*)
08ac4e67 +0x067:  mov    %eax,-0x40(%ebp)
08ac4e6a +0x06a:  lea    -0x5c(%ebp),%eax
08ac4e6d +0x06d:  mov    %eax,0x8(%esp)
08ac4e71 +0x071:  lea    -0x40(%ebp),%eax
08ac4e74 +0x074:  mov    %eax,0x4(%esp)
08ac4e78 +0x078:  lea    -0x34(%ebp),%eax
08ac4e7b +0x07b:  mov    %eax,(%esp)
08ac4e7e +0x07e:  call   08ac7ab6 <_ZN16IPackFileProcess15getCommonBufferEj+0x378>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x378
08ac4e83 +0x083:  mov    0xc(%ebp),%eax
08ac4e86 +0x086:  lea    0x10(%eax),%edx
08ac4e89 +0x089:  lea    -0x14(%ebp),%eax
08ac4e8c +0x08c:  mov    %edx,0x4(%esp)
08ac4e90 +0x090:  mov    %eax,(%esp)
08ac4e93 +0x093:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4e98 +0x098:  sub    $0x4,%esp
08ac4e9b +0x09b:  mov    0xc(%ebp),%eax
08ac4e9e +0x09e:  lea    0x10(%eax),%edx
08ac4ea1 +0x0a1:  lea    -0x10(%ebp),%eax
08ac4ea4 +0x0a4:  mov    %edx,0x4(%esp)
08ac4ea8 +0x0a8:  mov    %eax,(%esp)
08ac4eab +0x0ab:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac4eb0 +0x0b0:  sub    $0x4,%esp
08ac4eb3 +0x0b3:  lea    -0x3c(%ebp),%eax
08ac4eb6 +0x0b6:  movl   $&_ZL11_index_lessRKSt4pairIm10IndexEntryES3_,0x10(%esp)
08ac4ebe +0x0be:  lea    -0x34(%ebp),%edx
08ac4ec1 +0x0c1:  mov    %edx,0xc(%esp)
08ac4ec5 +0x0c5:  mov    -0x14(%ebp),%edx
08ac4ec8 +0x0c8:  mov    %edx,0x8(%esp)
08ac4ecc +0x0cc:  mov    -0x10(%ebp),%edx
08ac4ecf +0x0cf:  mov    %edx,0x4(%esp)
08ac4ed3 +0x0d3:  mov    %eax,(%esp)
08ac4ed6 +0x0d6:  call   08ac7aed <_ZN16IPackFileProcess15getCommonBufferEj+0x3af>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x3af
08ac4edb +0x0db:  sub    $0x4,%esp
08ac4ede +0x0de:  lea    -0x3c(%ebp),%eax
08ac4ee1 +0x0e1:  mov    %eax,0x4(%esp)
08ac4ee5 +0x0e5:  lea    -0x64(%ebp),%eax
08ac4ee8 +0x0e8:  mov    %eax,(%esp)
08ac4eeb +0x0eb:  call   08ac7c84 <_ZN16IPackFileProcess15getCommonBufferEj+0x546>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x546
08ac4ef0 +0x0f0:  jmp    08ac4f0a <+0x10a>
08ac4ef2 +0x0f2:  mov    %edx,%ebx
08ac4ef4 +0x0f4:  mov    %eax,%esi
08ac4ef6 +0x0f6:  lea    -0x34(%ebp),%eax
08ac4ef9 +0x0f9:  mov    %eax,(%esp)
08ac4efc +0x0fc:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac4f01 +0x101:  mov    %esi,%eax
08ac4f03 +0x103:  mov    %ebx,%edx
08ac4f05 +0x105:  jmp    08ac502b <+0x22b>
08ac4f0a +0x10a:  lea    -0x34(%ebp),%eax
08ac4f0d +0x10d:  mov    %eax,(%esp)
08ac4f10 +0x110:  call   08ac77b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x72>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x72
08ac4f15 +0x115:  mov    0xc(%ebp),%eax
08ac4f18 +0x118:  lea    0x10(%eax),%edx
08ac4f1b +0x11b:  lea    -0xc(%ebp),%eax
08ac4f1e +0x11e:  mov    %edx,0x4(%esp)
08ac4f22 +0x122:  mov    %eax,(%esp)
08ac4f25 +0x125:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4f2a +0x12a:  sub    $0x4,%esp
08ac4f2d +0x12d:  lea    -0xc(%ebp),%eax
08ac4f30 +0x130:  mov    %eax,0x4(%esp)
08ac4f34 +0x134:  lea    -0x64(%ebp),%eax
08ac4f37 +0x137:  mov    %eax,(%esp)
08ac4f3a +0x13a:  call   08ac7cb7 <_ZN16IPackFileProcess15getCommonBufferEj+0x579>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x579
08ac4f3f +0x13f:  test   %al,%al
08ac4f41 +0x141:  jne    08ac4f57 <+0x157>
08ac4f43 +0x143:  lea    -0x64(%ebp),%eax
08ac4f46 +0x146:  mov    %eax,(%esp)
08ac4f49 +0x149:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4f4e +0x14e:  mov    (%eax),%edx
08ac4f50 +0x150:  mov    -0x40(%ebp),%eax
08ac4f53 +0x153:  cmp    %eax,%edx
08ac4f55 +0x155:  je     08ac4f5e <+0x15e>
08ac4f57 +0x157:  mov    $0x1,%eax
08ac4f5c +0x15c:  jmp    08ac4f63 <+0x163>
08ac4f5e +0x15e:  mov    $0x0,%eax
08ac4f63 +0x163:  test   %al,%al
08ac4f65 +0x165:  je     08ac4f81 <+0x181>
08ac4f67 +0x167:  mov    0xc(%ebp),%eax
08ac4f6a +0x16a:  add    $0x10,%eax
08ac4f6d +0x16d:  mov    %eax,0x4(%esp)
08ac4f71 +0x171:  mov    %ebx,(%esp)
08ac4f74 +0x174:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4f79 +0x179:  sub    $0x4,%esp
08ac4f7c +0x17c:  jmp    08ac5046 <+0x246>
08ac4f81 +0x181:  lea    -0x68(%ebp),%eax
08ac4f84 +0x184:  mov    %eax,(%esp)
08ac4f87 +0x187:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac4f8c +0x18c:  mov    -0x64(%ebp),%eax
08ac4f8f +0x18f:  mov    %eax,-0x68(%ebp)
08ac4f92 +0x192:  jmp    08ac4fd7 <+0x1d7>
08ac4f94 +0x194:  lea    -0x68(%ebp),%eax
08ac4f97 +0x197:  mov    %eax,(%esp)
08ac4f9a +0x19a:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4f9f +0x19f:  add    $0x8,%eax
08ac4fa2 +0x1a2:  mov    %eax,(%esp)
08ac4fa5 +0x1a5:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ac4faa +0x1aa:  lea    -0x16c(%ebp),%edx
08ac4fb0 +0x1b0:  mov    %edx,0x4(%esp)
08ac4fb4 +0x1b4:  mov    %eax,(%esp)
08ac4fb7 +0x1b7:  call   0807e4e0 <_init+0xdd8>
08ac4fbc +0x1bc:  test   %eax,%eax
08ac4fbe +0x1be:  sete   %al
08ac4fc1 +0x1c1:  test   %al,%al
08ac4fc3 +0x1c3:  je     08ac4fcc <+0x1cc>
08ac4fc5 +0x1c5:  mov    -0x68(%ebp),%eax
08ac4fc8 +0x1c8:  mov    %eax,(%ebx)
08ac4fca +0x1ca:  jmp    08ac5046 <+0x246>
08ac4fcc +0x1cc:  lea    -0x68(%ebp),%eax
08ac4fcf +0x1cf:  mov    %eax,(%esp)
08ac4fd2 +0x1d2:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac4fd7 +0x1d7:  lea    -0x68(%ebp),%eax
08ac4fda +0x1da:  mov    %eax,(%esp)
08ac4fdd +0x1dd:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4fe2 +0x1e2:  mov    (%eax),%edx
08ac4fe4 +0x1e4:  mov    -0x40(%ebp),%eax
08ac4fe7 +0x1e7:  cmp    %eax,%edx
08ac4fe9 +0x1e9:  jne    08ac500b <+0x20b>
08ac4feb +0x1eb:  lea    -0x64(%ebp),%eax
08ac4fee +0x1ee:  add    $0x4,%eax
08ac4ff1 +0x1f1:  mov    %eax,0x4(%esp)
08ac4ff5 +0x1f5:  lea    -0x68(%ebp),%eax
08ac4ff8 +0x1f8:  mov    %eax,(%esp)
08ac4ffb +0x1fb:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac5000 +0x200:  test   %al,%al
08ac5002 +0x202:  je     08ac500b <+0x20b>
08ac5004 +0x204:  mov    $0x1,%eax
08ac5009 +0x209:  jmp    08ac5010 <+0x210>
08ac500b +0x20b:  mov    $0x0,%eax
08ac5010 +0x210:  test   %al,%al
08ac5012 +0x212:  jne    08ac4f94 <+0x194>
08ac5014 +0x214:  mov    0xc(%ebp),%eax
08ac5017 +0x217:  add    $0x10,%eax
08ac501a +0x21a:  mov    %eax,0x4(%esp)
08ac501e +0x21e:  mov    %ebx,(%esp)
08ac5021 +0x221:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5026 +0x226:  sub    $0x4,%esp
08ac5029 +0x229:  jmp    08ac5046 <+0x246>
08ac502b +0x22b:  mov    %edx,%ebx
08ac502d +0x22d:  mov    %eax,%esi
08ac502f +0x22f:  lea    -0x5c(%ebp),%eax
08ac5032 +0x232:  mov    %eax,(%esp)
08ac5035 +0x235:  call   08ac3e04 <_ZN10IndexEntryD1Ev>  ; IndexEntry::~IndexEntry()
08ac503a +0x23a:  mov    %esi,%eax
08ac503c +0x23c:  mov    %ebx,%edx
08ac503e +0x23e:  mov    %eax,(%esp)
08ac5041 +0x241:  call   08ae3750 <_Unwind_Resume>
08ac5046 +0x246:  lea    -0x5c(%ebp),%eax
08ac5049 +0x249:  mov    %eax,(%esp)
08ac504c +0x24c:  call   08ac3e04 <_ZN10IndexEntryD1Ev>  ; IndexEntry::~IndexEntry()
08ac5051 +0x251:  mov    %ebx,%eax
08ac5053 +0x253:  lea    -0x8(%ebp),%esp
08ac5056 +0x256:  add    $0x0,%esp
08ac5059 +0x259:  pop    %ebx
08ac505a +0x25a:  pop    %esi
08ac505b +0x25b:  pop    %ebp
08ac505c +0x25c:  ret    $0x4
08ac505f +0x25f:  nop
```

## 反编译 C

```c
// PackSet::find @ 0x8ac4e00

/* DWARF original prototype: index_vector_it find(PackSet * this, NCHAR * name) */

index_vector_it __thiscall PackSet::find(PackSet *this,NCHAR *name)

{
  bool bVar1;
  char *pcVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  char *__s1;
  int iVar4;
  NCHAR *in_stack_0000000c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  *__p;
  NCHAR local_170 [260];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_6c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_68;
  IndexEntry local_60;
  hash_t local_44;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_40;
  pair<long_unsigned_int,_IndexEntry> local_38;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_18;
  
                    /* Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: ulong code@[???]
                       Unresolved local var: IndexEntry dummy@[???]
                       Unresolved local var:
                       pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
                       it@[???] */
  IndexEntry::IndexEntry(&local_60);
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::pair(&local_68);
                    /* try { // try from 08ac4e4c to 08ac4e82 has its CatchHandler @ 08ac502b */
  _correct_filename(in_stack_0000000c,local_170,0x104,(NCHAR *)0x0,0);
  pcVar2 = toMbcs(local_170);
  local_44 = _hash(pcVar2);
  std::pair<long_unsigned_int,_IndexEntry>::pair<long_unsigned_int&,_IndexEntry&>
            (&local_38,&local_44,&local_60);
                    /* try { // try from 08ac4e93 to 08ac4eef has its CatchHandler @ 08ac4ef2 */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_18);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)&local_18.
              super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
              ._M_impl._M_finish);
  std::
  equal_range<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_PackSet::index_pair_t,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
            (&local_40,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_finish,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_start,&local_38,_index_less);
  __p = &local_40;
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::operator=(&local_68,__p);
                    /* try { // try from 08ac4f10 to 08ac5025 has its CatchHandler @ 08ac502b */
  std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_38,(int)__p);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)&local_18.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage);
  bVar1 = __gnu_cxx::
          operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_68.first,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_18.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_end_of_storage);
  if (bVar1) {
LAB_08ac4f57:
    bVar1 = true;
  }
  else {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_68.first);
    if (ppVar3->first != local_44) goto LAB_08ac4f57;
    bVar1 = false;
  }
  if (!bVar1) {
                    /* Unresolved local var: index_vector_it it2@[???] */
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_6c);
    local_6c._M_current = local_68.first._M_current;
    do {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_6c);
      if (ppVar3->first == local_44) {
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_6c,&local_68.second);
        if (!bVar1) goto LAB_08ac500b;
        bVar1 = true;
      }
      else {
LAB_08ac500b:
        bVar1 = false;
      }
      if (!bVar1) {
        pcVar2 = name + 0x10;
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)this);
        goto LAB_08ac5046;
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_6c);
      __s1 = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
      pcVar2 = local_170;
      iVar4 = strcmp(__s1,pcVar2);
      if (iVar4 == 0) goto code_r0x08ac4fc5;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_6c);
    } while( true );
  }
  pcVar2 = name + 0x10;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)this);
LAB_08ac5046:
  IndexEntry::~IndexEntry(&local_60,(int)pcVar2);
  return (index_vector_it)(pair<long_unsigned_int,_IndexEntry> *)this;
code_r0x08ac4fc5:
  this->pack_file_ = (FILE *)local_6c._M_current;
  goto LAB_08ac5046;
}
```
