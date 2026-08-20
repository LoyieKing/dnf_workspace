# concat

`_ZN10WideString6concatEPKwS1_`

`WideString::concat(wchar_t const*, wchar_t const*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb5e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb5e6  _ZN10WideString6concatEPKwS1_
#           WideString::concat(wchar_t const*, wchar_t const*)
# range [0x08adb5e6, 0x08adb63b]
08adb5e6 +0x00:  push   %ebp
08adb5e7 +0x01:  mov    %esp,%ebp
08adb5e9 +0x03:  push   %edi
08adb5ea +0x04:  push   %esi
08adb5eb +0x05:  push   %ebx
08adb5ec +0x06:  sub    $0x2c,%esp
08adb5ef +0x09:  mov    0x8(%ebp),%ebx
08adb5f2 +0x0c:  mov    %ebx,%esi
08adb5f4 +0x0e:  mov    0x10(%ebp),%eax
08adb5f7 +0x11:  mov    %eax,(%esp)
08adb5fa +0x14:  call   0807e130 <_init+0xa28>
08adb5ff +0x19:  mov    %eax,%edi
08adb601 +0x1b:  mov    0xc(%ebp),%eax
08adb604 +0x1e:  mov    %eax,(%esp)
08adb607 +0x21:  call   0807e130 <_init+0xa28>
08adb60c +0x26:  mov    %edi,0x10(%esp)
08adb610 +0x2a:  mov    0x10(%ebp),%edx
08adb613 +0x2d:  mov    %edx,0xc(%esp)
08adb617 +0x31:  mov    %eax,0x8(%esp)
08adb61b +0x35:  mov    0xc(%ebp),%eax
08adb61e +0x38:  mov    %eax,0x4(%esp)
08adb622 +0x3c:  mov    %esi,(%esp)
08adb625 +0x3f:  call   08adb63e <_ZN10WideString6concatEPKwiS1_i>  ; WideString::concat(wchar_t const*, int, wchar_t const*, int)
08adb62a +0x44:  sub    $0x4,%esp
08adb62d +0x47:  mov    %ebx,%eax
08adb62f +0x49:  mov    %ebx,%eax
08adb631 +0x4b:  lea    -0xc(%ebp),%esp
08adb634 +0x4e:  add    $0x0,%esp
08adb637 +0x51:  pop    %ebx
08adb638 +0x52:  pop    %esi
08adb639 +0x53:  pop    %edi
08adb63a +0x54:  pop    %ebp
08adb63b +0x55:  ret    $0x4
```

## 反编译 C

```c
// WideString::concat @ 0x8adb5e6

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar *src1,wchar *src2)

{
  size_t len2;
  size_t len1;
  
  len2 = wcslen(src2);
  len1 = wcslen(src1);
  concat(__return_storage_ptr__,src1,len1,src2,len2);
  return __return_storage_ptr__;
}
```
