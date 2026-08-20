# find

`_ZNK10WideString4findEiRKS_`

`WideString::find(int, WideString const&) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada3a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada3a2  _ZNK10WideString4findEiRKS_
#           WideString::find(int, WideString const&) const
# range [0x08ada3a2, 0x08ada3e1]
08ada3a2 +0x00:  push   %ebp
08ada3a3 +0x01:  mov    %esp,%ebp
08ada3a5 +0x03:  push   %ebx
08ada3a6 +0x04:  sub    $0x14,%esp
08ada3a9 +0x07:  mov    0x10(%ebp),%eax
08ada3ac +0x0a:  mov    %eax,(%esp)
08ada3af +0x0d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada3b4 +0x12:  mov    %eax,%ebx
08ada3b6 +0x14:  mov    0x10(%ebp),%eax
08ada3b9 +0x17:  mov    %eax,(%esp)
08ada3bc +0x1a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ada3c1 +0x1f:  mov    %ebx,0xc(%esp)
08ada3c5 +0x23:  mov    %eax,0x8(%esp)
08ada3c9 +0x27:  mov    0xc(%ebp),%eax
08ada3cc +0x2a:  mov    %eax,0x4(%esp)
08ada3d0 +0x2e:  mov    0x8(%ebp),%eax
08ada3d3 +0x31:  mov    %eax,(%esp)
08ada3d6 +0x34:  call   08ada2ae <_ZNK10WideString4findEiPKwi>  ; WideString::find(int, wchar_t const*, int) const
08ada3db +0x39:  add    $0x14,%esp
08ada3de +0x3c:  pop    %ebx
08ada3df +0x3d:  pop    %ebp
08ada3e0 +0x3e:  ret
08ada3e1 +0x3f:  nop
```

## 反编译 C

```c
// WideString::find @ 0x8ada3a2

/* DWARF original prototype: int32 find(WideString * this, int32 pos, WideString * pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,pos,pat_00,iVar1);
  return iVar1;
}
```
