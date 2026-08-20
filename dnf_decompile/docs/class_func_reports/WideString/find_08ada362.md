# find

`_ZNK10WideString4findERKS_`

`WideString::find(WideString const&) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada362  _ZNK10WideString4findERKS_
#           WideString::find(WideString const&) const
# range [0x08ada362, 0x08ada3a1]
08ada362 +0x00:  push   %ebp
08ada363 +0x01:  mov    %esp,%ebp
08ada365 +0x03:  push   %ebx
08ada366 +0x04:  sub    $0x14,%esp
08ada369 +0x07:  mov    0xc(%ebp),%eax
08ada36c +0x0a:  mov    %eax,(%esp)
08ada36f +0x0d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada374 +0x12:  mov    %eax,%ebx
08ada376 +0x14:  mov    0xc(%ebp),%eax
08ada379 +0x17:  mov    %eax,(%esp)
08ada37c +0x1a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada381 +0x1f:  mov    %ebx,0xc(%esp)
08ada385 +0x23:  mov    %eax,0x8(%esp)
08ada389 +0x27:  movl   $0x0,0x4(%esp)
08ada391 +0x2f:  mov    0x8(%ebp),%eax
08ada394 +0x32:  mov    %eax,(%esp)
08ada397 +0x35:  call   08ada2ae <_ZNK10WideString4findEiPKwi>  ; WideString::find(int, wchar_t const*, int) const
08ada39c +0x3a:  add    $0x14,%esp
08ada39f +0x3d:  pop    %ebx
08ada3a0 +0x3e:  pop    %ebp
08ada3a1 +0x3f:  ret
```

## 反编译 C

```c
// WideString::find @ 0x8ada362

/* DWARF original prototype: int32 find(WideString * this, WideString * pat) */

int32 __thiscall WideString::find(WideString *this,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,0,pat_00,iVar1);
  return iVar1;
}
```
