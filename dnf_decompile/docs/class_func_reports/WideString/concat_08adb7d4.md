# concat

`_ZN10WideString6concatERKS_S1_`

`WideString::concat(WideString const&, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb7d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb7d4  _ZN10WideString6concatERKS_S1_
#           WideString::concat(WideString const&, WideString const&)
# range [0x08adb7d4, 0x08adb893]
08adb7d4 +0x00:  push   %ebp
08adb7d5 +0x01:  mov    %esp,%ebp
08adb7d7 +0x03:  push   %edi
08adb7d8 +0x04:  push   %esi
08adb7d9 +0x05:  push   %ebx
08adb7da +0x06:  sub    $0x3c,%esp
08adb7dd +0x09:  mov    0x8(%ebp),%ebx
08adb7e0 +0x0c:  mov    0xc(%ebp),%eax
08adb7e3 +0x0f:  mov    %eax,(%esp)
08adb7e6 +0x12:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb7eb +0x17:  test   %eax,%eax
08adb7ed +0x19:  sete   %al
08adb7f0 +0x1c:  test   %al,%al
08adb7f2 +0x1e:  je     08adb807 <+0x33>
08adb7f4 +0x20:  mov    %ebx,%eax
08adb7f6 +0x22:  mov    0x10(%ebp),%edx
08adb7f9 +0x25:  mov    %edx,0x4(%esp)
08adb7fd +0x29:  mov    %eax,(%esp)
08adb800 +0x2c:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adb805 +0x31:  jmp    08adb885 <+0xb1>
08adb807 +0x33:  mov    0x10(%ebp),%eax
08adb80a +0x36:  mov    %eax,(%esp)
08adb80d +0x39:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb812 +0x3e:  test   %eax,%eax
08adb814 +0x40:  sete   %al
08adb817 +0x43:  test   %al,%al
08adb819 +0x45:  je     08adb82e <+0x5a>
08adb81b +0x47:  mov    %ebx,%eax
08adb81d +0x49:  mov    0xc(%ebp),%edx
08adb820 +0x4c:  mov    %edx,0x4(%esp)
08adb824 +0x50:  mov    %eax,(%esp)
08adb827 +0x53:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adb82c +0x58:  jmp    08adb885 <+0xb1>
08adb82e +0x5a:  mov    %ebx,-0x20(%ebp)
08adb831 +0x5d:  mov    0x10(%ebp),%eax
08adb834 +0x60:  mov    %eax,(%esp)
08adb837 +0x63:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb83c +0x68:  mov    %eax,-0x1c(%ebp)
08adb83f +0x6b:  mov    0x10(%ebp),%eax
08adb842 +0x6e:  mov    %eax,(%esp)
08adb845 +0x71:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adb84a +0x76:  mov    %eax,%edi
08adb84c +0x78:  mov    0xc(%ebp),%eax
08adb84f +0x7b:  mov    %eax,(%esp)
08adb852 +0x7e:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb857 +0x83:  mov    %eax,%esi
08adb859 +0x85:  mov    0xc(%ebp),%eax
08adb85c +0x88:  mov    %eax,(%esp)
08adb85f +0x8b:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adb864 +0x90:  mov    -0x1c(%ebp),%edx
08adb867 +0x93:  mov    %edx,0x10(%esp)
08adb86b +0x97:  mov    %edi,0xc(%esp)
08adb86f +0x9b:  mov    %esi,0x8(%esp)
08adb873 +0x9f:  mov    %eax,0x4(%esp)
08adb877 +0xa3:  mov    -0x20(%ebp),%eax
08adb87a +0xa6:  mov    %eax,(%esp)
08adb87d +0xa9:  call   08adb63e <_ZN10WideString6concatEPKwiS1_i>  ; WideString::concat(wchar_t const*, int, wchar_t const*, int)
08adb882 +0xae:  sub    $0x4,%esp
08adb885 +0xb1:  mov    %ebx,%eax
08adb887 +0xb3:  mov    %ebx,%eax
08adb889 +0xb5:  lea    -0xc(%ebp),%esp
08adb88c +0xb8:  add    $0x0,%esp
08adb88f +0xbb:  pop    %ebx
08adb890 +0xbc:  pop    %esi
08adb891 +0xbd:  pop    %edi
08adb892 +0xbe:  pop    %ebp
08adb893 +0xbf:  ret    $0x4
```

## 反编译 C

```c
// WideString::concat @ 0x8adb7d4

WideString *
WideString::concat(WideString *__return_storage_ptr__,WideString *src1,WideString *src2)

{
  int32 iVar1;
  wchar *src2_00;
  int32 len1;
  wchar *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      len1 = length(src1);
      src1_00 = c_str(src1);
      concat(__return_storage_ptr__,src1_00,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}
```
