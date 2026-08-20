# get_contentEncryptedFile

`_ZN10IndexEntry24get_contentEncryptedFileEP7PackSetmPhjPj`

`IndexEntry::get_contentEncryptedFile(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac41f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac41f6  _ZN10IndexEntry24get_contentEncryptedFileEP7PackSetmPhjPj
#           IndexEntry::get_contentEncryptedFile(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
# range [0x08ac41f6, 0x08ac41ff]
08ac41f6 +0x00:  push   %ebp
08ac41f7 +0x01:  mov    %esp,%ebp
08ac41f9 +0x03:  mov    $0x1,%eax
08ac41fe +0x08:  pop    %ebp
08ac41ff +0x09:  ret
```

## 反编译 C

```c
// IndexEntry::get_contentEncryptedFile @ 0x8ac41f6

/* DWARF original prototype: pack_ret_t get_contentEncryptedFile(IndexEntry * this, PackSet * owner,
   hash_t code, uchar * dst, uint dst_size, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_contentEncryptedFile
          (IndexEntry *this,PackSet *owner,hash_t code,uchar *dst,uint dst_size,uint *content_size)

{
  return PACK_ERROR;
}
```
