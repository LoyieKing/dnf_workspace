# find

`_ZNK10WideString4findEPKw`

`WideString::find(wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada222  _ZNK10WideString4findEPKw
#           WideString::find(wchar_t const*) const
# range [0x08ada222, 0x08ada253]
08ada222 +0x00:  push   %ebp
08ada223 +0x01:  mov    %esp,%ebp
08ada225 +0x03:  sub    $0x18,%esp
08ada228 +0x06:  mov    0xc(%ebp),%eax
08ada22b +0x09:  mov    %eax,(%esp)
08ada22e +0x0c:  call   0807e130 <_init+0xa28>
08ada233 +0x11:  mov    %eax,0xc(%esp)
08ada237 +0x15:  mov    0xc(%ebp),%eax
08ada23a +0x18:  mov    %eax,0x8(%esp)
08ada23e +0x1c:  movl   $0x0,0x4(%esp)
08ada246 +0x24:  mov    0x8(%ebp),%eax
08ada249 +0x27:  mov    %eax,(%esp)
08ada24c +0x2a:  call   08ada2ae <_ZNK10WideString4findEiPKwi>  ; WideString::find(int, wchar_t const*, int) const
08ada251 +0x2f:  leave
08ada252 +0x30:  ret
08ada253 +0x31:  nop
```

## 反编译 C

```c
// WideString::find @ 0x8ada222

/* DWARF original prototype: int32 find(WideString * this, wchar * pat) */

int32 __thiscall WideString::find(WideString *this,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}
```
