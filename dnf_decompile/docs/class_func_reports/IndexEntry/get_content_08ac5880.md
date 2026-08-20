# get_content

`_ZN10IndexEntry11get_contentEP7PackSetmPPhPj`

`IndexEntry::get_content(PackSet*, unsigned long, unsigned char**, unsigned int*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac5880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac5880  _ZN10IndexEntry11get_contentEP7PackSetmPPhPj
#           IndexEntry::get_content(PackSet*, unsigned long, unsigned char**, unsigned int*)
# range [0x08ac5880, 0x08ac58ed]
08ac5880 +0x00:  push   %ebp
08ac5881 +0x01:  mov    %esp,%ebp
08ac5883 +0x03:  sub    $0x28,%esp
08ac5886 +0x06:  cmpl   $0x0,0x14(%ebp)
08ac588a +0x0a:  jne    08ac5893 <+0x13>
08ac588c +0x0c:  mov    $0x1,%eax
08ac5891 +0x11:  jmp    08ac58eb <+0x6b>
08ac5893 +0x13:  mov    0x8(%ebp),%eax
08ac5896 +0x16:  mov    0xc(%eax),%eax
08ac5899 +0x19:  mov    %eax,(%esp)
08ac589c +0x1c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ac58a1 +0x21:  mov    %eax,%edx
08ac58a3 +0x23:  mov    0x14(%ebp),%eax
08ac58a6 +0x26:  mov    %edx,(%eax)
08ac58a8 +0x28:  mov    0x14(%ebp),%eax
08ac58ab +0x2b:  mov    (%eax),%eax
08ac58ad +0x2d:  test   %eax,%eax
08ac58af +0x2f:  jne    08ac58b8 <+0x38>
08ac58b1 +0x31:  mov    $0x1,%eax
08ac58b6 +0x36:  jmp    08ac58eb <+0x6b>
08ac58b8 +0x38:  mov    0x8(%ebp),%eax
08ac58bb +0x3b:  mov    0xc(%eax),%edx
08ac58be +0x3e:  mov    0x14(%ebp),%eax
08ac58c1 +0x41:  mov    (%eax),%eax
08ac58c3 +0x43:  mov    0x18(%ebp),%ecx
08ac58c6 +0x46:  mov    %ecx,0x14(%esp)
08ac58ca +0x4a:  mov    %edx,0x10(%esp)
08ac58ce +0x4e:  mov    %eax,0xc(%esp)
08ac58d2 +0x52:  mov    0x10(%ebp),%eax
08ac58d5 +0x55:  mov    %eax,0x8(%esp)
08ac58d9 +0x59:  mov    0xc(%ebp),%eax
08ac58dc +0x5c:  mov    %eax,0x4(%esp)
08ac58e0 +0x60:  mov    0x8(%ebp),%eax
08ac58e3 +0x63:  mov    %eax,(%esp)
08ac58e6 +0x66:  call   08ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>  ; IndexEntry::get_content(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
08ac58eb +0x6b:  leave
08ac58ec +0x6c:  ret
08ac58ed +0x6d:  nop
```

## 反编译 C

```c
// IndexEntry::get_content @ 0x8ac5880

/* DWARF original prototype: pack_ret_t get_content(IndexEntry * this, PackSet * owner, hash_t code,
   uchar * * dst, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_content(IndexEntry *this,PackSet *owner,hash_t code,uchar **dst,uint *content_size)

{
  pack_ret_t pVar1;
  uchar *puVar2;
  
  if (dst == (uchar **)0x0) {
    pVar1 = PACK_ERROR;
  }
  else {
    puVar2 = operator_new__(this->aligned_size_);
    *dst = puVar2;
    if (*dst == (uchar *)0x0) {
      pVar1 = PACK_ERROR;
    }
    else {
      pVar1 = get_content(this,owner,code,*dst,this->aligned_size_,content_size);
    }
  }
  return pVar1;
}
```
