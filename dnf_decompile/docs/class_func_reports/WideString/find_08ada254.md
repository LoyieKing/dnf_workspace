# find

`_ZNK10WideString4findEiPKw`

`WideString::find(int, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada254  _ZNK10WideString4findEiPKw
#           WideString::find(int, wchar_t const*) const
# range [0x08ada254, 0x08ada283]
08ada254 +0x00:  push   %ebp
08ada255 +0x01:  mov    %esp,%ebp
08ada257 +0x03:  sub    $0x18,%esp
08ada25a +0x06:  mov    0x10(%ebp),%eax
08ada25d +0x09:  mov    %eax,(%esp)
08ada260 +0x0c:  call   0807e130 <_init+0xa28>
08ada265 +0x11:  mov    %eax,0xc(%esp)
08ada269 +0x15:  mov    0x10(%ebp),%eax
08ada26c +0x18:  mov    %eax,0x8(%esp)
08ada270 +0x1c:  mov    0xc(%ebp),%eax
08ada273 +0x1f:  mov    %eax,0x4(%esp)
08ada277 +0x23:  mov    0x8(%ebp),%eax
08ada27a +0x26:  mov    %eax,(%esp)
08ada27d +0x29:  call   08ada2ae <_ZNK10WideString4findEiPKwi>  ; WideString::find(int, wchar_t const*, int) const
08ada282 +0x2e:  leave
08ada283 +0x2f:  ret
```

## 反编译 C

```c
// WideString::find @ 0x8ada254

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar * pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = find(this,pos,pat,patLength);
  return iVar1;
}
```
