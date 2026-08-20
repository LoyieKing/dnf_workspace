# output_file_list

`_ZNK7PackSet16output_file_listEPKc`

`PackSet::output_file_list(char const*) const`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac6988` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac6988  _ZNK7PackSet16output_file_listEPKc
#           PackSet::output_file_list(char const*) const
# range [0x08ac6988, 0x08ac6c89]
08ac6988 +0x000:  push   %ebp
08ac6989 +0x001:  mov    %esp,%ebp
08ac698b +0x003:  sub    $0x38,%esp
08ac698e +0x006:  mov    0x8(%ebp),%eax
08ac6991 +0x009:  mov    %eax,(%esp)
08ac6994 +0x00c:  call   08ac4954 <_ZNK7PackSet8is_readyEv>  ; PackSet::is_ready() const
08ac6999 +0x011:  xor    $0x1,%eax
08ac699c +0x014:  test   %al,%al
08ac699e +0x016:  je     08ac69f4 <+0x6c>
08ac69a0 +0x018:  mov    &stdout,%eax
08ac69a5 +0x01d:  movl   $"Not yet opened",0x8(%esp)
08ac69ad +0x025:  movl   $"%s\n",0x4(%esp)
08ac69b5 +0x02d:  mov    %eax,(%esp)
08ac69b8 +0x030:  call   0807da90 <_init+0x388>
08ac69bd +0x035:  mov    &stdout,%eax
08ac69c2 +0x03a:  movl   $&_ZZNK7PackSet16output_file_listEPKcE12__FUNCTION__,0x10(%esp)
08ac69ca +0x042:  movl   $0x573,0xc(%esp)
08ac69d2 +0x04a:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac69da +0x052:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac69e2 +0x05a:  mov    %eax,(%esp)
08ac69e5 +0x05d:  call   0807da90 <_init+0x388>
08ac69ea +0x062:  mov    $0x1,%eax
08ac69ef +0x067:  jmp    08ac6c88 <+0x300>
08ac69f4 +0x06c:  mov    0xc(%ebp),%eax
08ac69f7 +0x06f:  mov    %eax,(%esp)
08ac69fa +0x072:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08ac69ff +0x077:  movl   $"wt",0x4(%esp)
08ac6a07 +0x07f:  mov    %eax,(%esp)
08ac6a0a +0x082:  call   0807e770 <_init+0x1068>
08ac6a0f +0x087:  mov    %eax,-0xc(%ebp)
08ac6a12 +0x08a:  cmpl   $0x0,-0xc(%ebp)
08ac6a16 +0x08e:  jne    08ac6a6c <+0xe4>
08ac6a18 +0x090:  mov    &stdout,%eax
08ac6a1d +0x095:  movl   $"Failed to output file open.",0x8(%esp)
08ac6a25 +0x09d:  movl   $"%s\n",0x4(%esp)
08ac6a2d +0x0a5:  mov    %eax,(%esp)
08ac6a30 +0x0a8:  call   0807da90 <_init+0x388>
08ac6a35 +0x0ad:  mov    &stdout,%eax
08ac6a3a +0x0b2:  movl   $&_ZZNK7PackSet16output_file_listEPKcE12__FUNCTION__,0x10(%esp)
08ac6a42 +0x0ba:  movl   $0x57a,0xc(%esp)
08ac6a4a +0x0c2:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac6a52 +0x0ca:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac6a5a +0x0d2:  mov    %eax,(%esp)
08ac6a5d +0x0d5:  call   0807da90 <_init+0x388>
08ac6a62 +0x0da:  mov    $0x1,%eax
08ac6a67 +0x0df:  jmp    08ac6c88 <+0x300>
08ac6a6c +0x0e4:  mov    -0xc(%ebp),%eax
08ac6a6f +0x0e7:  mov    %eax,0xc(%esp)
08ac6a73 +0x0eb:  movl   $0x2c,0x8(%esp)
08ac6a7b +0x0f3:  movl   $0x1,0x4(%esp)
08ac6a83 +0x0fb:  movl   $"hash,type,name,size,aligned size,crc,offset\n",(%esp)
08ac6a8a +0x102:  call   0807e320 <_init+0xc18>
08ac6a8f +0x107:  mov    0x8(%ebp),%eax
08ac6a92 +0x10a:  lea    0x10(%eax),%edx
08ac6a95 +0x10d:  lea    -0x14(%ebp),%eax
08ac6a98 +0x110:  mov    %edx,0x4(%esp)
08ac6a9c +0x114:  mov    %eax,(%esp)
08ac6a9f +0x117:  call   08ac82ea <_ZN16IPackFileProcess15getCommonBufferEj+0xbac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xbac
08ac6aa4 +0x11c:  sub    $0x4,%esp
08ac6aa7 +0x11f:  jmp    08ac6c46 <+0x2be>
08ac6aac +0x124:  lea    -0x14(%ebp),%eax
08ac6aaf +0x127:  mov    %eax,(%esp)
08ac6ab2 +0x12a:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6ab7 +0x12f:  mov    (%eax),%eax
08ac6ab9 +0x131:  mov    %eax,0x8(%esp)
08ac6abd +0x135:  movl   $"\"%d\"",0x4(%esp)
08ac6ac5 +0x13d:  mov    -0xc(%ebp),%eax
08ac6ac8 +0x140:  mov    %eax,(%esp)
08ac6acb +0x143:  call   0807da90 <_init+0x388>
08ac6ad0 +0x148:  mov    -0xc(%ebp),%eax
08ac6ad3 +0x14b:  mov    %eax,0x4(%esp)
08ac6ad7 +0x14f:  movl   $0x2c,(%esp)
08ac6ade +0x156:  call   0807e4c0 <_init+0xdb8>
08ac6ae3 +0x15b:  lea    -0x14(%ebp),%eax
08ac6ae6 +0x15e:  mov    %eax,(%esp)
08ac6ae9 +0x161:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6aee +0x166:  mov    0x4(%eax),%eax
08ac6af1 +0x169:  mov    %eax,0x8(%esp)
08ac6af5 +0x16d:  movl   $"\"%d\"",0x4(%esp)
08ac6afd +0x175:  mov    -0xc(%ebp),%eax
08ac6b00 +0x178:  mov    %eax,(%esp)
08ac6b03 +0x17b:  call   0807da90 <_init+0x388>
08ac6b08 +0x180:  mov    -0xc(%ebp),%eax
08ac6b0b +0x183:  mov    %eax,0x4(%esp)
08ac6b0f +0x187:  movl   $0x2c,(%esp)
08ac6b16 +0x18e:  call   0807e4c0 <_init+0xdb8>
08ac6b1b +0x193:  lea    -0x14(%ebp),%eax
08ac6b1e +0x196:  mov    %eax,(%esp)
08ac6b21 +0x199:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6b26 +0x19e:  add    $0x8,%eax
08ac6b29 +0x1a1:  mov    %eax,(%esp)
08ac6b2c +0x1a4:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ac6b31 +0x1a9:  mov    %eax,0x8(%esp)
08ac6b35 +0x1ad:  movl   $"\"%s\"",0x4(%esp)
08ac6b3d +0x1b5:  mov    -0xc(%ebp),%eax
08ac6b40 +0x1b8:  mov    %eax,(%esp)
08ac6b43 +0x1bb:  call   0807da90 <_init+0x388>
08ac6b48 +0x1c0:  mov    -0xc(%ebp),%eax
08ac6b4b +0x1c3:  mov    %eax,0x4(%esp)
08ac6b4f +0x1c7:  movl   $0x2c,(%esp)
08ac6b56 +0x1ce:  call   0807e4c0 <_init+0xdb8>
08ac6b5b +0x1d3:  lea    -0x14(%ebp),%eax
08ac6b5e +0x1d6:  mov    %eax,(%esp)
08ac6b61 +0x1d9:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6b66 +0x1de:  mov    0xc(%eax),%eax
08ac6b69 +0x1e1:  mov    %eax,0x8(%esp)
08ac6b6d +0x1e5:  movl   $"\"%d\"",0x4(%esp)
08ac6b75 +0x1ed:  mov    -0xc(%ebp),%eax
08ac6b78 +0x1f0:  mov    %eax,(%esp)
08ac6b7b +0x1f3:  call   0807da90 <_init+0x388>
08ac6b80 +0x1f8:  mov    -0xc(%ebp),%eax
08ac6b83 +0x1fb:  mov    %eax,0x4(%esp)
08ac6b87 +0x1ff:  movl   $0x2c,(%esp)
08ac6b8e +0x206:  call   0807e4c0 <_init+0xdb8>
08ac6b93 +0x20b:  lea    -0x14(%ebp),%eax
08ac6b96 +0x20e:  mov    %eax,(%esp)
08ac6b99 +0x211:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6b9e +0x216:  mov    0x10(%eax),%eax
08ac6ba1 +0x219:  mov    %eax,0x8(%esp)
08ac6ba5 +0x21d:  movl   $"\"%d\"",0x4(%esp)
08ac6bad +0x225:  mov    -0xc(%ebp),%eax
08ac6bb0 +0x228:  mov    %eax,(%esp)
08ac6bb3 +0x22b:  call   0807da90 <_init+0x388>
08ac6bb8 +0x230:  mov    -0xc(%ebp),%eax
08ac6bbb +0x233:  mov    %eax,0x4(%esp)
08ac6bbf +0x237:  movl   $0x2c,(%esp)
08ac6bc6 +0x23e:  call   0807e4c0 <_init+0xdb8>
08ac6bcb +0x243:  lea    -0x14(%ebp),%eax
08ac6bce +0x246:  mov    %eax,(%esp)
08ac6bd1 +0x249:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6bd6 +0x24e:  mov    0x14(%eax),%eax
08ac6bd9 +0x251:  mov    %eax,0x8(%esp)
08ac6bdd +0x255:  movl   $"\"%d\"",0x4(%esp)
08ac6be5 +0x25d:  mov    -0xc(%ebp),%eax
08ac6be8 +0x260:  mov    %eax,(%esp)
08ac6beb +0x263:  call   0807da90 <_init+0x388>
08ac6bf0 +0x268:  mov    -0xc(%ebp),%eax
08ac6bf3 +0x26b:  mov    %eax,0x4(%esp)
08ac6bf7 +0x26f:  movl   $0x2c,(%esp)
08ac6bfe +0x276:  call   0807e4c0 <_init+0xdb8>
08ac6c03 +0x27b:  lea    -0x14(%ebp),%eax
08ac6c06 +0x27e:  mov    %eax,(%esp)
08ac6c09 +0x281:  call   08ac8384 <_ZN16IPackFileProcess15getCommonBufferEj+0xc46>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc46
08ac6c0e +0x286:  mov    0x18(%eax),%eax
08ac6c11 +0x289:  mov    %eax,0x8(%esp)
08ac6c15 +0x28d:  movl   $"\"%d\"",0x4(%esp)
08ac6c1d +0x295:  mov    -0xc(%ebp),%eax
08ac6c20 +0x298:  mov    %eax,(%esp)
08ac6c23 +0x29b:  call   0807da90 <_init+0x388>
08ac6c28 +0x2a0:  mov    -0xc(%ebp),%eax
08ac6c2b +0x2a3:  mov    %eax,0x4(%esp)
08ac6c2f +0x2a7:  movl   $0xa,(%esp)
08ac6c36 +0x2ae:  call   0807e4c0 <_init+0xdb8>
08ac6c3b +0x2b3:  lea    -0x14(%ebp),%eax
08ac6c3e +0x2b6:  mov    %eax,(%esp)
08ac6c41 +0x2b9:  call   08ac836e <_ZN16IPackFileProcess15getCommonBufferEj+0xc30>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc30
08ac6c46 +0x2be:  mov    0x8(%ebp),%eax
08ac6c49 +0x2c1:  lea    0x10(%eax),%edx
08ac6c4c +0x2c4:  lea    -0x10(%ebp),%eax
08ac6c4f +0x2c7:  mov    %edx,0x4(%esp)
08ac6c53 +0x2cb:  mov    %eax,(%esp)
08ac6c56 +0x2ce:  call   08ac8316 <_ZN16IPackFileProcess15getCommonBufferEj+0xbd8>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xbd8
08ac6c5b +0x2d3:  sub    $0x4,%esp
08ac6c5e +0x2d6:  lea    -0x10(%ebp),%eax
08ac6c61 +0x2d9:  mov    %eax,0x4(%esp)
08ac6c65 +0x2dd:  lea    -0x14(%ebp),%eax
08ac6c68 +0x2e0:  mov    %eax,(%esp)
08ac6c6b +0x2e3:  call   08ac8342 <_ZN16IPackFileProcess15getCommonBufferEj+0xc04>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0xc04
08ac6c70 +0x2e8:  test   %al,%al
08ac6c72 +0x2ea:  jne    08ac6aac <+0x124>
08ac6c78 +0x2f0:  mov    -0xc(%ebp),%eax
08ac6c7b +0x2f3:  mov    %eax,(%esp)
08ac6c7e +0x2f6:  call   0807dea0 <_init+0x798>
08ac6c83 +0x2fb:  mov    $0x0,%eax
08ac6c88 +0x300:  leave
08ac6c89 +0x301:  ret
```

## 反编译 C

```c
// PackSet::output_file_list @ 0x8ac6988

/* DWARF original prototype: pack_ret_t output_file_list(PackSet * this, TCHAR * pszOutputPath) */

pack_ret_t __thiscall PackSet::output_file_list(PackSet *this,TCHAR *pszOutputPath)

{
  bool bVar1;
  pack_ret_t pVar2;
  char *pcVar3;
  pair<long_unsigned_int,_IndexEntry> *ppVar4;
  undefined1 local_18 [8];
  FILE *local_10;
  
                    /* Unresolved local var: FILE * pFile@[???] */
  bVar1 = is_ready(this);
  if (bVar1) {
    pcVar3 = toMbcs(pszOutputPath);
    local_10 = fopen(pcVar3,"wt");
    if (local_10 == (FILE *)0x0) {
      fprintf(stdout,"%s\n","Failed to output file open.");
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x57a,"output_file_list");
      pVar2 = PACK_ERROR;
    }
    else {
      fwrite("hash,type,name,size,aligned size,crc,offset\n",1,0x2c,local_10);
                    /* Unresolved local var:
                       __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       it@[???] */
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)local_18);
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)(local_18 + 4));
        bVar1 = __gnu_cxx::
                operator!=<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)local_18,
                           (__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)(local_18 + 4));
        if (!bVar1) break;
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",ppVar4->first);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).type_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        pcVar3 = toMbcs(&(ppVar4->second).name_);
        fprintf(local_10,"\"%s\"",pcVar3);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).size_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).aligned_size_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).crc_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).offset_);
        fputc(10,local_10);
        __gnu_cxx::
        __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)local_18);
      }
      fclose(local_10);
      pVar2 = PACK_OK;
    }
  }
  else {
    fprintf(stdout,"%s\n","Not yet opened");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x573,"output_file_list");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}
```
