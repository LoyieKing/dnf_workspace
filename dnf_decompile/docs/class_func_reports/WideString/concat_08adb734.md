# concat

`_ZN10WideString6concatERKS_PKwi`

`WideString::concat(WideString const&, wchar_t const*, int)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb734  _ZN10WideString6concatERKS_PKwi
#           WideString::concat(WideString const&, wchar_t const*, int)
# range [0x08adb734, 0x08adb7d3]
08adb734 +0x00:  push   %ebp
08adb735 +0x01:  mov    %esp,%ebp
08adb737 +0x03:  push   %edi
08adb738 +0x04:  push   %esi
08adb739 +0x05:  push   %ebx
08adb73a +0x06:  sub    $0x2c,%esp
08adb73d +0x09:  mov    0x8(%ebp),%ebx
08adb740 +0x0c:  mov    0xc(%ebp),%eax
08adb743 +0x0f:  mov    %eax,(%esp)
08adb746 +0x12:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb74b +0x17:  test   %eax,%eax
08adb74d +0x19:  sete   %al
08adb750 +0x1c:  test   %al,%al
08adb752 +0x1e:  je     08adb76e <+0x3a>
08adb754 +0x20:  mov    %ebx,%eax
08adb756 +0x22:  mov    0x14(%ebp),%edx
08adb759 +0x25:  mov    %edx,0x8(%esp)
08adb75d +0x29:  mov    0x10(%ebp),%edx
08adb760 +0x2c:  mov    %edx,0x4(%esp)
08adb764 +0x30:  mov    %eax,(%esp)
08adb767 +0x33:  call   08ad9ac2 <_ZN10WideStringC1EPKwi>  ; WideString::WideString(wchar_t const*, int)
08adb76c +0x38:  jmp    08adb7c2 <+0x8e>
08adb76e +0x3a:  cmpl   $0x0,0x14(%ebp)
08adb772 +0x3e:  jne    08adb787 <+0x53>
08adb774 +0x40:  mov    %ebx,%eax
08adb776 +0x42:  mov    0xc(%ebp),%edx
08adb779 +0x45:  mov    %edx,0x4(%esp)
08adb77d +0x49:  mov    %eax,(%esp)
08adb780 +0x4c:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adb785 +0x51:  jmp    08adb7c2 <+0x8e>
08adb787 +0x53:  mov    %ebx,%edi
08adb789 +0x55:  mov    0xc(%ebp),%eax
08adb78c +0x58:  mov    %eax,(%esp)
08adb78f +0x5b:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb794 +0x60:  mov    %eax,%esi
08adb796 +0x62:  mov    0xc(%ebp),%eax
08adb799 +0x65:  mov    %eax,(%esp)
08adb79c +0x68:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adb7a1 +0x6d:  mov    0x14(%ebp),%edx
08adb7a4 +0x70:  mov    %edx,0x10(%esp)
08adb7a8 +0x74:  mov    0x10(%ebp),%edx
08adb7ab +0x77:  mov    %edx,0xc(%esp)
08adb7af +0x7b:  mov    %esi,0x8(%esp)
08adb7b3 +0x7f:  mov    %eax,0x4(%esp)
08adb7b7 +0x83:  mov    %edi,(%esp)
08adb7ba +0x86:  call   08adb63e <_ZN10WideString6concatEPKwiS1_i>  ; WideString::concat(wchar_t const*, int, wchar_t const*, int)
08adb7bf +0x8b:  sub    $0x4,%esp
08adb7c2 +0x8e:  mov    %ebx,%eax
08adb7c4 +0x90:  mov    %ebx,%eax
08adb7c6 +0x92:  lea    -0xc(%ebp),%esp
08adb7c9 +0x95:  add    $0x0,%esp
08adb7cc +0x98:  pop    %ebx
08adb7cd +0x99:  pop    %esi
08adb7ce +0x9a:  pop    %edi
08adb7cf +0x9b:  pop    %ebp
08adb7d0 +0x9c:  ret    $0x4
08adb7d3 +0x9f:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb734

WideString *
WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar *src2,int32 len2)

{
  int32 iVar1;
  wchar *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2,len2);
  }
  else if (len2 == 0) {
    WideString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    src1_00 = c_str(src1);
    concat(__return_storage_ptr__,src1_00,iVar1,src2,len2);
  }
  return __return_storage_ptr__;
}
```
