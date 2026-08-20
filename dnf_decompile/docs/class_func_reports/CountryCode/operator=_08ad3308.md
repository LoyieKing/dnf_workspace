# operator=

`_ZN11CountryCodeaSEPKw`

`CountryCode::operator=(wchar_t const*)`

| 类 | 地址 |
|---|---|
| `CountryCode` | `0x08ad3308` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3308  _ZN11CountryCodeaSEPKw
#           CountryCode::operator=(wchar_t const*)
# range [0x08ad3308, 0x08ad332d]
08ad3308 +0x00:  push   %ebp
08ad3309 +0x01:  mov    %esp,%ebp
08ad330b +0x03:  sub    $0x18,%esp
08ad330e +0x06:  mov    0xc(%ebp),%eax
08ad3311 +0x09:  mov    %eax,0x4(%esp)
08ad3315 +0x0d:  lea    -0x1(%ebp),%eax
08ad3318 +0x10:  mov    %eax,(%esp)
08ad331b +0x13:  call   08ad309a <_ZN11CountryCodeC1EPKw>  ; CountryCode::CountryCode(wchar_t const*)
08ad3320 +0x18:  mov    0x8(%ebp),%eax
08ad3323 +0x1b:  movzbl -0x1(%ebp),%edx
08ad3327 +0x1f:  mov    %dl,(%eax)
08ad3329 +0x21:  mov    0x8(%ebp),%eax
08ad332c +0x24:  leave
08ad332d +0x25:  ret
```

## 反编译 C

```c
// CountryCode::operator= @ 0x8ad3308

/* DWARF original prototype: CountryCode * operator=(CountryCode * this, wchar * a2Code) */

CountryCode * __thiscall CountryCode::operator=(CountryCode *this,wchar *a2Code)

{
  CountryCode local_5;
  
  CountryCode(&local_5,a2Code);
  this->idx_ = (byte)local_5;
  return this;
}
```
