# rfind

`_ZNK10WideString5rfindEPKwi`

`WideString::rfind(wchar_t const*, int) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada50a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada50a  _ZNK10WideString5rfindEPKwi
#           WideString::rfind(wchar_t const*, int) const
# range [0x08ada50a, 0x08ada53d]
08ada50a +0x00:  push   %ebp
08ada50b +0x01:  mov    %esp,%ebp
08ada50d +0x03:  sub    $0x18,%esp
08ada510 +0x06:  mov    0x8(%ebp),%eax
08ada513 +0x09:  mov    %eax,(%esp)
08ada516 +0x0c:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada51b +0x11:  sub    0x10(%ebp),%eax
08ada51e +0x14:  mov    0x10(%ebp),%edx
08ada521 +0x17:  mov    %edx,0xc(%esp)
08ada525 +0x1b:  mov    0xc(%ebp),%edx
08ada528 +0x1e:  mov    %edx,0x8(%esp)
08ada52c +0x22:  mov    %eax,0x4(%esp)
08ada530 +0x26:  mov    0x8(%ebp),%eax
08ada533 +0x29:  mov    %eax,(%esp)
08ada536 +0x2c:  call   08ada53e <_ZNK10WideString5rfindEiPKwi>  ; WideString::rfind(int, wchar_t const*, int) const
08ada53b +0x31:  leave
08ada53c +0x32:  ret
08ada53d +0x33:  nop
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada50a

/* DWARF original prototype: int32 rfind(WideString * this, wchar * pat, int32 patLength) */

int32 __thiscall WideString::rfind(WideString *this,wchar *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}
```
