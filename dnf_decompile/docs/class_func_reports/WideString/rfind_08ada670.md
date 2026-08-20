# rfind

`_ZNK10WideString5rfindEw`

`WideString::rfind(wchar_t) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada670  _ZNK10WideString5rfindEw
#           WideString::rfind(wchar_t) const
# range [0x08ada670, 0x08ada69b]
08ada670 +0x00:  push   %ebp
08ada671 +0x01:  mov    %esp,%ebp
08ada673 +0x03:  sub    $0x18,%esp
08ada676 +0x06:  mov    0x8(%ebp),%eax
08ada679 +0x09:  mov    %eax,(%esp)
08ada67c +0x0c:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada681 +0x11:  lea    -0x1(%eax),%edx
08ada684 +0x14:  mov    0xc(%ebp),%eax
08ada687 +0x17:  mov    %eax,0x8(%esp)
08ada68b +0x1b:  mov    %edx,0x4(%esp)
08ada68f +0x1f:  mov    0x8(%ebp),%eax
08ada692 +0x22:  mov    %eax,(%esp)
08ada695 +0x25:  call   08ada69c <_ZNK10WideString5rfindEiw>  ; WideString::rfind(int, wchar_t) const
08ada69a +0x2a:  leave
08ada69b +0x2b:  ret
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada670

/* DWARF original prototype: int32 rfind(WideString * this, wchar pat) */

int32 __thiscall WideString::rfind(WideString *this,wchar pat)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 + -1,pat);
  return iVar1;
}
```
