# get

`_ZN7PackSet3getEPKcPhjPj`

`PackSet::get(char const*, unsigned char*, unsigned int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac5060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac5060  _ZN7PackSet3getEPKcPhjPj
#           PackSet::get(char const*, unsigned char*, unsigned int, unsigned int*)
# range [0x08ac5060, 0x08ac51cd]
08ac5060 +0x000:  push   %ebp
08ac5061 +0x001:  mov    %esp,%ebp
08ac5063 +0x003:  push   %ebx
08ac5064 +0x004:  sub    $0x44,%esp
08ac5067 +0x007:  lea    -0x10(%ebp),%eax
08ac506a +0x00a:  mov    %eax,(%esp)
08ac506d +0x00d:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac5072 +0x012:  cmpl   $0x0,0xc(%ebp)
08ac5076 +0x016:  je     08ac5084 <+0x24>
08ac5078 +0x018:  cmpl   $0x0,0x10(%ebp)
08ac507c +0x01c:  je     08ac5084 <+0x24>
08ac507e +0x01e:  cmpl   $0x0,0x18(%ebp)
08ac5082 +0x022:  jne    08ac50bb <+0x5b>
08ac5084 +0x024:  mov    &stdout,%eax
08ac5089 +0x029:  movl   $&_ZZN7PackSet3getEPKcPhjPjE12__FUNCTION__,0x10(%esp)
08ac5091 +0x031:  movl   $0x312,0xc(%esp)
08ac5099 +0x039:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac50a1 +0x041:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac50a9 +0x049:  mov    %eax,(%esp)
08ac50ac +0x04c:  call   0807da90 <_init+0x388>
08ac50b1 +0x051:  mov    $0x1,%eax
08ac50b6 +0x056:  jmp    08ac51c8 <+0x168>
08ac50bb +0x05b:  lea    -0x1c(%ebp),%eax
08ac50be +0x05e:  mov    0xc(%ebp),%edx
08ac50c1 +0x061:  mov    %edx,0x8(%esp)
08ac50c5 +0x065:  mov    0x8(%ebp),%edx
08ac50c8 +0x068:  mov    %edx,0x4(%esp)
08ac50cc +0x06c:  mov    %eax,(%esp)
08ac50cf +0x06f:  call   08ac4e00 <_ZN7PackSet4findEPKc>  ; PackSet::find(char const*)
08ac50d4 +0x074:  sub    $0x4,%esp
08ac50d7 +0x077:  mov    -0x1c(%ebp),%eax
08ac50da +0x07a:  mov    %eax,-0x10(%ebp)
08ac50dd +0x07d:  mov    0x8(%ebp),%eax
08ac50e0 +0x080:  lea    0x10(%eax),%edx
08ac50e3 +0x083:  lea    -0xc(%ebp),%eax
08ac50e6 +0x086:  mov    %edx,0x4(%esp)
08ac50ea +0x08a:  mov    %eax,(%esp)
08ac50ed +0x08d:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac50f2 +0x092:  sub    $0x4,%esp
08ac50f5 +0x095:  lea    -0xc(%ebp),%eax
08ac50f8 +0x098:  mov    %eax,0x4(%esp)
08ac50fc +0x09c:  lea    -0x10(%ebp),%eax
08ac50ff +0x09f:  mov    %eax,(%esp)
08ac5102 +0x0a2:  call   08ac7cb7 <_ZN16IPackFileProcess15getCommonBufferEj+0x579>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x579
08ac5107 +0x0a7:  test   %al,%al
08ac5109 +0x0a9:  je     08ac5142 <+0xe2>
08ac510b +0x0ab:  mov    &stdout,%eax
08ac5110 +0x0b0:  movl   $&_ZZN7PackSet3getEPKcPhjPjE12__FUNCTION__,0x10(%esp)
08ac5118 +0x0b8:  movl   $0x319,0xc(%esp)
08ac5120 +0x0c0:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac5128 +0x0c8:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac5130 +0x0d0:  mov    %eax,(%esp)
08ac5133 +0x0d3:  call   0807da90 <_init+0x388>
08ac5138 +0x0d8:  mov    $0x1,%eax
08ac513d +0x0dd:  jmp    08ac51c8 <+0x168>
08ac5142 +0x0e2:  lea    -0x10(%ebp),%eax
08ac5145 +0x0e5:  mov    %eax,(%esp)
08ac5148 +0x0e8:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac514d +0x0ed:  mov    (%eax),%ebx
08ac514f +0x0ef:  lea    -0x10(%ebp),%eax
08ac5152 +0x0f2:  mov    %eax,(%esp)
08ac5155 +0x0f5:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac515a +0x0fa:  lea    0x4(%eax),%edx
08ac515d +0x0fd:  mov    0x18(%ebp),%eax
08ac5160 +0x100:  mov    %eax,0x14(%esp)
08ac5164 +0x104:  mov    0x14(%ebp),%eax
08ac5167 +0x107:  mov    %eax,0x10(%esp)
08ac516b +0x10b:  mov    0x10(%ebp),%eax
08ac516e +0x10e:  mov    %eax,0xc(%esp)
08ac5172 +0x112:  mov    %ebx,0x8(%esp)
08ac5176 +0x116:  mov    0x8(%ebp),%eax
08ac5179 +0x119:  mov    %eax,0x4(%esp)
08ac517d +0x11d:  mov    %edx,(%esp)
08ac5180 +0x120:  call   08ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>  ; IndexEntry::get_content(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
08ac5185 +0x125:  cmp    $0x1,%eax
08ac5188 +0x128:  sete   %al
08ac518b +0x12b:  test   %al,%al
08ac518d +0x12d:  je     08ac51c3 <+0x163>
08ac518f +0x12f:  mov    &stdout,%eax
08ac5194 +0x134:  movl   $&_ZZN7PackSet3getEPKcPhjPjE12__FUNCTION__,0x10(%esp)
08ac519c +0x13c:  movl   $0x31f,0xc(%esp)
08ac51a4 +0x144:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac51ac +0x14c:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac51b4 +0x154:  mov    %eax,(%esp)
08ac51b7 +0x157:  call   0807da90 <_init+0x388>
08ac51bc +0x15c:  mov    $0x1,%eax
08ac51c1 +0x161:  jmp    08ac51c8 <+0x168>
08ac51c3 +0x163:  mov    $0x0,%eax
08ac51c8 +0x168:  mov    -0x4(%ebp),%ebx
08ac51cb +0x16b:  leave
08ac51cc +0x16c:  ret
08ac51cd +0x16d:  nop
```

## 反编译 C

```c
// PackSet::get @ 0x8ac5060

/* DWARF original prototype: pack_ret_t get(PackSet * this, NCHAR * name, uchar * buffer, uint
   buffer_size, uint * content_size) */

pack_ret_t __thiscall
PackSet::get(PackSet *this,NCHAR *name,uchar *buffer,uint buffer_size,uint *content_size)

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
  if (((name == (NCHAR *)0x0) || (buffer == (uchar *)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x312,"get");
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
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x319,"get");
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
      pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,buffer,buffer_size,content_size);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",799,"get");
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
