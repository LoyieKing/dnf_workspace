# update_content_from_memory

`_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet`

`IndexEntry::update_content_from_memory(unsigned char*, PackSet*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac4378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4378  _ZN10IndexEntry26update_content_from_memoryEPhP7PackSet
#           IndexEntry::update_content_from_memory(unsigned char*, PackSet*)
# range [0x08ac4378, 0x08ac4475]
08ac4378 +0x00:  push   %ebp
08ac4379 +0x01:  mov    %esp,%ebp
08ac437b +0x03:  push   %ebx
08ac437c +0x04:  sub    $0x24,%esp
08ac437f +0x07:  cmpl   $0x0,0xc(%ebp)
08ac4383 +0x0b:  jne    08ac43bc <+0x44>
08ac4385 +0x0d:  mov    &stdout,%eax
08ac438a +0x12:  movl   $&_ZZN10IndexEntry26update_content_from_memoryEPhP7PackSetE12__FUNCTION__,0x10(%esp)
08ac4392 +0x1a:  movl   $0x1e0,0xc(%esp)
08ac439a +0x22:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac43a2 +0x2a:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac43aa +0x32:  mov    %eax,(%esp)
08ac43ad +0x35:  call   0807da90 <_init+0x388>
08ac43b2 +0x3a:  mov    $0x1,%eax
08ac43b7 +0x3f:  jmp    08ac446f <+0xf7>
08ac43bc +0x44:  mov    0x8(%ebp),%eax
08ac43bf +0x47:  mov    (%eax),%eax
08ac43c1 +0x49:  cmp    $0x1,%eax
08ac43c4 +0x4c:  jne    08ac4417 <+0x9f>
08ac43c6 +0x4e:  mov    &stdout,%eax
08ac43cb +0x53:  movl   $"not implemented",0x8(%esp)
08ac43d3 +0x5b:  movl   $"%s\n",0x4(%esp)
08ac43db +0x63:  mov    %eax,(%esp)
08ac43de +0x66:  call   0807da90 <_init+0x388>
08ac43e3 +0x6b:  mov    &stdout,%eax
08ac43e8 +0x70:  movl   $&_ZZN10IndexEntry26update_content_from_memoryEPhP7PackSetE12__FUNCTION__,0x10(%esp)
08ac43f0 +0x78:  movl   $0x1e6,0xc(%esp)
08ac43f8 +0x80:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac4400 +0x88:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac4408 +0x90:  mov    %eax,(%esp)
08ac440b +0x93:  call   0807da90 <_init+0x388>
08ac4410 +0x98:  mov    $0x1,%eax
08ac4415 +0x9d:  jmp    08ac446f <+0xf7>
08ac4417 +0x9f:  mov    0x8(%ebp),%eax
08ac441a +0xa2:  mov    (%eax),%eax
08ac441c +0xa4:  test   %eax,%eax
08ac441e +0xa6:  jne    08ac446a <+0xf2>
08ac4420 +0xa8:  mov    0x8(%ebp),%eax
08ac4423 +0xab:  mov    0xc(%eax),%eax
08ac4426 +0xae:  mov    %eax,(%esp)
08ac4429 +0xb1:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac442e +0xb6:  mov    %eax,%edx
08ac4430 +0xb8:  mov    0x8(%ebp),%eax
08ac4433 +0xbb:  mov    %edx,0x18(%eax)
08ac4436 +0xbe:  mov    0x8(%ebp),%eax
08ac4439 +0xc1:  mov    0xc(%eax),%ebx
08ac443c +0xc4:  mov    0x10(%ebp),%eax
08ac443f +0xc7:  mov    %eax,(%esp)
08ac4442 +0xca:  call   08ac4930 <_ZN7PackSet11header_sizeEv>  ; PackSet::header_size()
08ac4447 +0xcf:  mov    0x8(%ebp),%edx
08ac444a +0xd2:  mov    0x14(%edx),%edx
08ac444d +0xd5:  add    %edx,%eax
08ac444f +0xd7:  mov    %eax,%edx
08ac4451 +0xd9:  add    0xc(%ebp),%edx
08ac4454 +0xdc:  mov    0x8(%ebp),%eax
08ac4457 +0xdf:  mov    0x18(%eax),%eax
08ac445a +0xe2:  mov    %ebx,0x8(%esp)
08ac445e +0xe6:  mov    %edx,0x4(%esp)
08ac4462 +0xea:  mov    %eax,(%esp)
08ac4465 +0xed:  call   0807d8a0 <_init+0x198>
08ac446a +0xf2:  mov    $0x0,%eax
08ac446f +0xf7:  add    $0x24,%esp
08ac4472 +0xfa:  pop    %ebx
08ac4473 +0xfb:  pop    %ebp
08ac4474 +0xfc:  ret
08ac4475 +0xfd:  nop
```

## 反编译 C

```c
// IndexEntry::update_content_from_memory @ 0x8ac4378

/* DWARF original prototype: pack_ret_t update_content_from_memory(IndexEntry * this, uchar * mem,
   PackSet * owner) */

pack_ret_t __thiscall
IndexEntry::update_content_from_memory(IndexEntry *this,uchar *mem,PackSet *owner)

{
  size_t __n;
  pack_ret_t pVar1;
  uchar *puVar2;
  uint uVar3;
  
  if (mem == (uchar *)0x0) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1e0,
            "update_content_from_memory");
    pVar1 = PACK_ERROR;
  }
  else if (this->type_ == ENTRY_FILE) {
    fprintf(stdout,"%s\n","not implemented");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1e6,
            "update_content_from_memory");
    pVar1 = PACK_ERROR;
  }
  else {
    if (this->type_ == ENTRY_PACK) {
      puVar2 = operator_new__(this->aligned_size_);
      this->content_ = puVar2;
      __n = this->aligned_size_;
      uVar3 = PackSet::header_size(owner);
      memcpy(this->content_,mem + uVar3 + this->offset_,__n);
    }
    pVar1 = PACK_OK;
  }
  return pVar1;
}
```
