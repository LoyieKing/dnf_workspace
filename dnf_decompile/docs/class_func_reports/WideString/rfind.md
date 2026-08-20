# rfind

`_ZNK10WideString5rfindEPKw`

`WideString::rfind(wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada498  _ZNK10WideString5rfindEPKw
#           WideString::rfind(wchar_t const*) const
# range [0x08ada498, 0x08ada4d9]
08ada498 +0x00:  push   %ebp
08ada499 +0x01:  mov    %esp,%ebp
08ada49b +0x03:  sub    $0x28,%esp
08ada49e +0x06:  mov    0xc(%ebp),%eax
08ada4a1 +0x09:  mov    %eax,(%esp)
08ada4a4 +0x0c:  call   0807e130 <_init+0xa28>
08ada4a9 +0x11:  mov    %eax,-0xc(%ebp)
08ada4ac +0x14:  mov    0x8(%ebp),%eax
08ada4af +0x17:  mov    %eax,(%esp)
08ada4b2 +0x1a:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ada4b7 +0x1f:  sub    -0xc(%ebp),%eax
08ada4ba +0x22:  mov    -0xc(%ebp),%edx
08ada4bd +0x25:  mov    %edx,0xc(%esp)
08ada4c1 +0x29:  mov    0xc(%ebp),%edx
08ada4c4 +0x2c:  mov    %edx,0x8(%esp)
08ada4c8 +0x30:  mov    %eax,0x4(%esp)
08ada4cc +0x34:  mov    0x8(%ebp),%eax
08ada4cf +0x37:  mov    %eax,(%esp)
08ada4d2 +0x3a:  call   08ada53e <_ZNK10WideString5rfindEiPKwi>  ; WideString::rfind(int, wchar_t const*, int) const
08ada4d7 +0x3f:  leave
08ada4d8 +0x40:  ret
08ada4d9 +0x41:  nop
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada498

/* DWARF original prototype: int32 rfind(WideString * this, wchar * pat) */

int32 __thiscall WideString::rfind(WideString *this,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
                    /* Unresolved local var: int32 patLength@[???] */
  patLength = wcslen(pat);
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}
```
