# rfind

`_ZNK10WideString5rfindERKS_`

`WideString::rfind(WideString const&) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada5e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada5e0  _ZNK10WideString5rfindERKS_
#           WideString::rfind(WideString const&) const
# range [0x08ada5e0, 0x08ada62f]
08ada5e0 +0x00:  push   %ebp
08ada5e1 +0x01:  mov    %esp,%ebp
08ada5e3 +0x03:  push   %ebx
08ada5e4 +0x04:  sub    $0x24,%esp
08ada5e7 +0x07:  mov    0xc(%ebp),%eax
08ada5ea +0x0a:  mov    %eax,(%esp)
08ada5ed +0x0d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada5f2 +0x12:  mov    %eax,-0xc(%ebp)
08ada5f5 +0x15:  mov    0xc(%ebp),%eax
08ada5f8 +0x18:  mov    %eax,(%esp)
08ada5fb +0x1b:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada600 +0x20:  mov    %eax,%ebx
08ada602 +0x22:  mov    0x8(%ebp),%eax
08ada605 +0x25:  mov    %eax,(%esp)
08ada608 +0x28:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada60d +0x2d:  sub    -0xc(%ebp),%eax
08ada610 +0x30:  mov    -0xc(%ebp),%edx
08ada613 +0x33:  mov    %edx,0xc(%esp)
08ada617 +0x37:  mov    %ebx,0x8(%esp)
08ada61b +0x3b:  mov    %eax,0x4(%esp)
08ada61f +0x3f:  mov    0x8(%ebp),%eax
08ada622 +0x42:  mov    %eax,(%esp)
08ada625 +0x45:  call   08ada53e <_ZNK10WideString5rfindEiPKwi>  ; WideString::rfind(int, wchar_t const*, int) const
08ada62a +0x4a:  add    $0x24,%esp
08ada62d +0x4d:  pop    %ebx
08ada62e +0x4e:  pop    %ebp
08ada62f +0x4f:  ret
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada5e0

/* DWARF original prototype: int32 rfind(WideString * this, WideString * pat) */

int32 __thiscall WideString::rfind(WideString *this,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  int32 iVar2;
  
                    /* Unresolved local var: int32 patLength@[???] */
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar2 = length(this);
  iVar1 = rfind(this,iVar2 - iVar1,pat_00,iVar1);
  return iVar1;
}
```
