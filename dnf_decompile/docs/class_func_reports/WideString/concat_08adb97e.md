# concat

`_ZN10WideString6concatEPKwRKS_`

`WideString::concat(wchar_t const*, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb97e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb97e  _ZN10WideString6concatEPKwRKS_
#           WideString::concat(wchar_t const*, WideString const&)
# range [0x08adb97e, 0x08adb9c3]
08adb97e +0x00:  push   %ebp
08adb97f +0x01:  mov    %esp,%ebp
08adb981 +0x03:  push   %esi
08adb982 +0x04:  push   %ebx
08adb983 +0x05:  sub    $0x10,%esp
08adb986 +0x08:  mov    0x8(%ebp),%ebx
08adb989 +0x0b:  mov    %ebx,%esi
08adb98b +0x0d:  mov    0xc(%ebp),%eax
08adb98e +0x10:  mov    %eax,(%esp)
08adb991 +0x13:  call   0807e130 <_init+0xa28>
08adb996 +0x18:  mov    0x10(%ebp),%edx
08adb999 +0x1b:  mov    %edx,0xc(%esp)
08adb99d +0x1f:  mov    %eax,0x8(%esp)
08adb9a1 +0x23:  mov    0xc(%ebp),%eax
08adb9a4 +0x26:  mov    %eax,0x4(%esp)
08adb9a8 +0x2a:  mov    %esi,(%esp)
08adb9ab +0x2d:  call   08adb9c4 <_ZN10WideString6concatEPKwiRKS_>  ; WideString::concat(wchar_t const*, int, WideString const&)
08adb9b0 +0x32:  sub    $0x4,%esp
08adb9b3 +0x35:  mov    %ebx,%eax
08adb9b5 +0x37:  mov    %ebx,%eax
08adb9b7 +0x39:  lea    -0x8(%ebp),%esp
08adb9ba +0x3c:  add    $0x0,%esp
08adb9bd +0x3f:  pop    %ebx
08adb9be +0x40:  pop    %esi
08adb9bf +0x41:  pop    %ebp
08adb9c0 +0x42:  ret    $0x4
08adb9c3 +0x45:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb97e

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar *src1,WideString *src2)

{
  size_t len1;
  
  len1 = wcslen(src1);
  concat(__return_storage_ptr__,src1,len1,src2);
  return __return_storage_ptr__;
}
```
