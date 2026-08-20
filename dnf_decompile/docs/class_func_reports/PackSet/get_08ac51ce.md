# get

`_ZN7PackSet3getEPKcPPhPj`

`PackSet::get(char const*, unsigned char**, unsigned int*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac51ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac51ce  _ZN7PackSet3getEPKcPPhPj
#           PackSet::get(char const*, unsigned char**, unsigned int*)
# range [0x08ac51ce, 0x08ac5331]
08ac51ce +0x000:  push   %ebp
08ac51cf +0x001:  mov    %esp,%ebp
08ac51d1 +0x003:  push   %ebx
08ac51d2 +0x004:  sub    $0x44,%esp
08ac51d5 +0x007:  lea    -0x10(%ebp),%eax
08ac51d8 +0x00a:  mov    %eax,(%esp)
08ac51db +0x00d:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac51e0 +0x012:  cmpl   $0x0,0xc(%ebp)
08ac51e4 +0x016:  je     08ac51f2 <+0x24>
08ac51e6 +0x018:  cmpl   $0x0,0x10(%ebp)
08ac51ea +0x01c:  je     08ac51f2 <+0x24>
08ac51ec +0x01e:  cmpl   $0x0,0x14(%ebp)
08ac51f0 +0x022:  jne    08ac5229 <+0x5b>
08ac51f2 +0x024:  mov    &stdout,%eax
08ac51f7 +0x029:  movl   $&_ZZN7PackSet3getEPKcPPhPjE12__FUNCTION__,0x10(%esp)
08ac51ff +0x031:  movl   $0x32c,0xc(%esp)
08ac5207 +0x039:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac520f +0x041:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5217 +0x049:  mov    %eax,(%esp)
08ac521a +0x04c:  call   0807da90 <_init+0x388>
08ac521f +0x051:  mov    $0x1,%eax
08ac5224 +0x056:  jmp    08ac532c <+0x15e>
08ac5229 +0x05b:  lea    -0x1c(%ebp),%eax
08ac522c +0x05e:  mov    0xc(%ebp),%edx
08ac522f +0x061:  mov    %edx,0x8(%esp)
08ac5233 +0x065:  mov    0x8(%ebp),%edx
08ac5236 +0x068:  mov    %edx,0x4(%esp)
08ac523a +0x06c:  mov    %eax,(%esp)
08ac523d +0x06f:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac5242 +0x074:  sub    $0x4,%esp
08ac5245 +0x077:  mov    -0x1c(%ebp),%eax
08ac5248 +0x07a:  mov    %eax,-0x10(%ebp)
08ac524b +0x07d:  mov    0x8(%ebp),%eax
08ac524e +0x080:  lea    0x10(%eax),%edx
08ac5251 +0x083:  lea    -0xc(%ebp),%eax
08ac5254 +0x086:  mov    %edx,0x4(%esp)
08ac5258 +0x08a:  mov    %eax,(%esp)
08ac525b +0x08d:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac5260 +0x092:  sub    $0x4,%esp
08ac5263 +0x095:  lea    -0xc(%ebp),%eax
08ac5266 +0x098:  mov    %eax,0x4(%esp)
08ac526a +0x09c:  lea    -0x10(%ebp),%eax
08ac526d +0x09f:  mov    %eax,(%esp)
08ac5270 +0x0a2:  call   08ac7cb7 <_ZN16IPackFileProcess15getCommonBufferEj+0x579>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x579
08ac5275 +0x0a7:  test   %al,%al
08ac5277 +0x0a9:  je     08ac52ad <+0xdf>
08ac5279 +0x0ab:  mov    &stdout,%eax
08ac527e +0x0b0:  movl   $&_ZZN7PackSet3getEPKcPPhPjE12__FUNCTION__,0x10(%esp)
08ac5286 +0x0b8:  movl   $0x333,0xc(%esp)
08ac528e +0x0c0:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5296 +0x0c8:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac529e +0x0d0:  mov    %eax,(%esp)
08ac52a1 +0x0d3:  call   0807da90 <_init+0x388>
08ac52a6 +0x0d8:  mov    $0x1,%eax
08ac52ab +0x0dd:  jmp    08ac532c <+0x15e>
08ac52ad +0x0df:  lea    -0x10(%ebp),%eax
08ac52b0 +0x0e2:  mov    %eax,(%esp)
08ac52b3 +0x0e5:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac52b8 +0x0ea:  mov    (%eax),%ebx
08ac52ba +0x0ec:  lea    -0x10(%ebp),%eax
08ac52bd +0x0ef:  mov    %eax,(%esp)
08ac52c0 +0x0f2:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac52c5 +0x0f7:  lea    0x4(%eax),%edx
08ac52c8 +0x0fa:  mov    0x14(%ebp),%eax
08ac52cb +0x0fd:  mov    %eax,0x10(%esp)
08ac52cf +0x101:  mov    0x10(%ebp),%eax
08ac52d2 +0x104:  mov    %eax,0xc(%esp)
08ac52d6 +0x108:  mov    %ebx,0x8(%esp)
08ac52da +0x10c:  mov    0x8(%ebp),%eax
08ac52dd +0x10f:  mov    %eax,0x4(%esp)
08ac52e1 +0x113:  mov    %edx,(%esp)
08ac52e4 +0x116:  call   08ac5880 <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj>  ; IndexEntry::get_content(PackSet*, unsigned long, unsigned char**, unsigned int*)
08ac52e9 +0x11b:  cmp    $0x1,%eax
08ac52ec +0x11e:  sete   %al
08ac52ef +0x121:  test   %al,%al
08ac52f1 +0x123:  je     08ac5327 <+0x159>
08ac52f3 +0x125:  mov    &stdout,%eax
08ac52f8 +0x12a:  movl   $&_ZZN7PackSet3getEPKcPPhPjE12__FUNCTION__,0x10(%esp)
08ac5300 +0x132:  movl   $0x339,0xc(%esp)
08ac5308 +0x13a:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5310 +0x142:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5318 +0x14a:  mov    %eax,(%esp)
08ac531b +0x14d:  call   0807da90 <_init+0x388>
08ac5320 +0x152:  mov    $0x1,%eax
08ac5325 +0x157:  jmp    08ac532c <+0x15e>
08ac5327 +0x159:  mov    $0x0,%eax
08ac532c +0x15e:  mov    -0x4(%ebp),%ebx
08ac532f +0x161:  leave
08ac5330 +0x162:  ret
08ac5331 +0x163:  nop
```

## 反编译 C

```c
// PackSet::get @ 0x8ac51ce

/* DWARF original prototype: pack_ret_t get(PackSet * this, NCHAR * name, uchar * * content, uint *
   content_size) */

pack_ret_t __thiscall PackSet::get(PackSet *this,NCHAR *name,uchar **content,uint *content_size)

{
  hash_t code;
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_10 [2];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_14);
  if (((name == (NCHAR *)0x0) || (content == (uchar **)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x32c,"get");
    pVar2 = PACK_ERROR;
  }
  else {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_14._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_10);
    bVar1 = __gnu_cxx::
            operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_14,local_10);
    if (bVar1) {
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x333,"get");
      pVar2 = PACK_ERROR;
    }
    else {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      code = ppVar3->first;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,content,content_size);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x339,"get");
        pVar2 = PACK_ERROR;
      }
      else {
        pVar2 = PACK_OK;
      }
    }
  }
  return pVar2;
}
```
