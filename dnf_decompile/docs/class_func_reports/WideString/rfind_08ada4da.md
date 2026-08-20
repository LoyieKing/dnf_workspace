# rfind

`_ZNK10WideString5rfindEiPKw`

`WideString::rfind(int, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ada4da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ada4da  _ZNK10WideString5rfindEiPKw
#           WideString::rfind(int, wchar_t const*) const
# range [0x08ada4da, 0x08ada509]
08ada4da +0x00:  push   %ebp
08ada4db +0x01:  mov    %esp,%ebp
08ada4dd +0x03:  sub    $0x18,%esp
08ada4e0 +0x06:  mov    0x10(%ebp),%eax
08ada4e3 +0x09:  mov    %eax,(%esp)
08ada4e6 +0x0c:  call   0807e130 <_init+0xa28>
08ada4eb +0x11:  mov    %eax,0xc(%esp)
08ada4ef +0x15:  mov    0x10(%ebp),%eax
08ada4f2 +0x18:  mov    %eax,0x8(%esp)
08ada4f6 +0x1c:  mov    0xc(%ebp),%eax
08ada4f9 +0x1f:  mov    %eax,0x4(%esp)
08ada4fd +0x23:  mov    0x8(%ebp),%eax
08ada500 +0x26:  mov    %eax,(%esp)
08ada503 +0x29:  call   08ada53e <_ZNK10WideString5rfindEiPKwi>  ; WideString::rfind(int, wchar_t const*, int) const
08ada508 +0x2e:  leave
08ada509 +0x2f:  ret
```

## 反编译 C

```c
// WideString::rfind @ 0x8ada4da

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar * pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = rfind(this,pos,pat,patLength);
  return iVar1;
}
```
