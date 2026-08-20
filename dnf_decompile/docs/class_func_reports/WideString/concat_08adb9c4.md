# concat

`_ZN10WideString6concatEPKwiRKS_`

`WideString::concat(wchar_t const*, int, WideString const&)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adb9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adb9c4  _ZN10WideString6concatEPKwiRKS_
#           WideString::concat(wchar_t const*, int, WideString const&)
# range [0x08adb9c4, 0x08adba63]
08adb9c4 +0x00:  push   %ebp
08adb9c5 +0x01:  mov    %esp,%ebp
08adb9c7 +0x03:  push   %edi
08adb9c8 +0x04:  push   %esi
08adb9c9 +0x05:  push   %ebx
08adb9ca +0x06:  sub    $0x2c,%esp
08adb9cd +0x09:  mov    0x8(%ebp),%ebx
08adb9d0 +0x0c:  cmpl   $0x0,0x10(%ebp)
08adb9d4 +0x10:  jne    08adb9e9 <+0x25>
08adb9d6 +0x12:  mov    %ebx,%eax
08adb9d8 +0x14:  mov    0x14(%ebp),%edx
08adb9db +0x17:  mov    %edx,0x4(%esp)
08adb9df +0x1b:  mov    %eax,(%esp)
08adb9e2 +0x1e:  call   08ad9a1a <_ZN10WideStringC1ERKS_>  ; WideString::WideString(WideString const&)
08adb9e7 +0x23:  jmp    08adba52 <+0x8e>
08adb9e9 +0x25:  mov    0x14(%ebp),%eax
08adb9ec +0x28:  mov    %eax,(%esp)
08adb9ef +0x2b:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adb9f4 +0x30:  test   %eax,%eax
08adb9f6 +0x32:  sete   %al
08adb9f9 +0x35:  test   %al,%al
08adb9fb +0x37:  je     08adba17 <+0x53>
08adb9fd +0x39:  mov    %ebx,%eax
08adb9ff +0x3b:  mov    0x10(%ebp),%edx
08adba02 +0x3e:  mov    %edx,0x8(%esp)
08adba06 +0x42:  mov    0xc(%ebp),%edx
08adba09 +0x45:  mov    %edx,0x4(%esp)
08adba0d +0x49:  mov    %eax,(%esp)
08adba10 +0x4c:  call   08ad9ac2 <_ZN10WideStringC1EPKwi>  ; WideString::WideString(wchar_t const*, int)
08adba15 +0x51:  jmp    08adba52 <+0x8e>
08adba17 +0x53:  mov    %ebx,%edi
08adba19 +0x55:  mov    0x14(%ebp),%eax
08adba1c +0x58:  mov    %eax,(%esp)
08adba1f +0x5b:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08adba24 +0x60:  mov    %eax,%esi
08adba26 +0x62:  mov    0x14(%ebp),%eax
08adba29 +0x65:  mov    %eax,(%esp)
08adba2c +0x68:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08adba31 +0x6d:  mov    %esi,0x10(%esp)
08adba35 +0x71:  mov    %eax,0xc(%esp)
08adba39 +0x75:  mov    0x10(%ebp),%eax
08adba3c +0x78:  mov    %eax,0x8(%esp)
08adba40 +0x7c:  mov    0xc(%ebp),%eax
08adba43 +0x7f:  mov    %eax,0x4(%esp)
08adba47 +0x83:  mov    %edi,(%esp)
08adba4a +0x86:  call   08adb63e <_ZN10WideString6concatEPKwiS1_i>  ; WideString::concat(wchar_t const*, int, wchar_t const*, int)
08adba4f +0x8b:  sub    $0x4,%esp
08adba52 +0x8e:  mov    %ebx,%eax
08adba54 +0x90:  mov    %ebx,%eax
08adba56 +0x92:  lea    -0xc(%ebp),%esp
08adba59 +0x95:  add    $0x0,%esp
08adba5c +0x98:  pop    %ebx
08adba5d +0x99:  pop    %esi
08adba5e +0x9a:  pop    %edi
08adba5f +0x9b:  pop    %ebp
08adba60 +0x9c:  ret    $0x4
08adba63 +0x9f:  nop
```

## 反编译 C

```c
// WideString::concat @ 0x8adb9c4

WideString *
WideString::concat(WideString *__return_storage_ptr__,wchar *src1,int32 len1,WideString *src2)

{
  int32 iVar1;
  wchar *src2_00;
  
  if (len1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1,len1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      concat(__return_storage_ptr__,src1,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}
```
