# rfind

`_ZNK10WideString5rfindEiRKS_`

`WideString::rfind(int, WideString const&) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada630  _ZNK10WideString5rfindEiRKS_
#           WideString::rfind(int, WideString const&) const
# range [0x08ada630, 0x08ada66f]
08ada630 +0x00:  push   %ebp
08ada631 +0x01:  mov    %esp,%ebp
08ada633 +0x03:  push   %ebx
08ada634 +0x04:  sub    $0x14,%esp
08ada637 +0x07:  mov    0x10(%ebp),%eax
08ada63a +0x0a:  mov    %eax,(%esp)
08ada63d +0x0d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada642 +0x12:  mov    %eax,%ebx
08ada644 +0x14:  mov    0x10(%ebp),%eax
08ada647 +0x17:  mov    %eax,(%esp)
08ada64a +0x1a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada64f +0x1f:  mov    %ebx,0xc(%esp)
08ada653 +0x23:  mov    %eax,0x8(%esp)
08ada657 +0x27:  mov    0xc(%ebp),%eax
08ada65a +0x2a:  mov    %eax,0x4(%esp)
08ada65e +0x2e:  mov    0x8(%ebp),%eax
08ada661 +0x31:  mov    %eax,(%esp)
08ada664 +0x34:  call   08ada53e <_ZNK10WideString5rfindEiPKwi>  ; WideString::rfind(int, wchar_t const*, int) const
08ada669 +0x39:  add    $0x14,%esp
08ada66c +0x3c:  pop    %ebx
08ada66d +0x3d:  pop    %ebp
08ada66e +0x3e:  ret
08ada66f +0x3f:  nop
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada630

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, WideString * pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = rfind(this,pos,pat_00,iVar1);
  return iVar1;
}
```
