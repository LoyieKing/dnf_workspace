# find

`_ZNK10WideString4findEPKwi`

`WideString::find(wchar_t const*, int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada284  _ZNK10WideString4findEPKwi
#           WideString::find(wchar_t const*, int) const
# range [0x08ada284, 0x08ada2ad]
08ada284 +0x00:  push   %ebp
08ada285 +0x01:  mov    %esp,%ebp
08ada287 +0x03:  sub    $0x18,%esp
08ada28a +0x06:  mov    0x10(%ebp),%eax
08ada28d +0x09:  mov    %eax,0xc(%esp)
08ada291 +0x0d:  mov    0xc(%ebp),%eax
08ada294 +0x10:  mov    %eax,0x8(%esp)
08ada298 +0x14:  movl   $0x0,0x4(%esp)
08ada2a0 +0x1c:  mov    0x8(%ebp),%eax
08ada2a3 +0x1f:  mov    %eax,(%esp)
08ada2a6 +0x22:  call   08ada2ae <_ZNK10WideString4findEiPKwi>  ; WideString::find(int, wchar_t const*, int) const
08ada2ab +0x27:  leave
08ada2ac +0x28:  ret
08ada2ad +0x29:  nop
```

## 反编译 C

```c
// WideString::find @ 0x8ada284

/* DWARF original prototype: int32 find(WideString * this, wchar * pat, int32 patLength) */

int32 __thiscall WideString::find(WideString *this,wchar *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}
```
