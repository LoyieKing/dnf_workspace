# endsWith

`_ZNK10WideString8endsWithEPKwb`

`WideString::endsWith(wchar_t const*, bool) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9e58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9e58  _ZNK10WideString8endsWithEPKwb
#           WideString::endsWith(wchar_t const*, bool) const
# range [0x08ad9e58, 0x08ad9f29]
08ad9e58 +0x00:  push   %ebp
08ad9e59 +0x01:  mov    %esp,%ebp
08ad9e5b +0x03:  push   %esi
08ad9e5c +0x04:  push   %ebx
08ad9e5d +0x05:  sub    $0x30,%esp
08ad9e60 +0x08:  mov    0x10(%ebp),%eax
08ad9e63 +0x0b:  mov    %al,-0x1c(%ebp)
08ad9e66 +0x0e:  mov    0xc(%ebp),%eax
08ad9e69 +0x11:  mov    %eax,(%esp)
08ad9e6c +0x14:  call   0807e130 <_init+0xa28>
08ad9e71 +0x19:  mov    %eax,-0xc(%ebp)
08ad9e74 +0x1c:  mov    0x8(%ebp),%eax
08ad9e77 +0x1f:  mov    %eax,(%esp)
08ad9e7a +0x22:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9e7f +0x27:  cmp    -0xc(%ebp),%eax
08ad9e82 +0x2a:  setl   %al
08ad9e85 +0x2d:  test   %al,%al
08ad9e87 +0x2f:  je     08ad9e93 <+0x3b>
08ad9e89 +0x31:  mov    $0x0,%eax
08ad9e8e +0x36:  jmp    08ad9f23 <+0xcb>
08ad9e93 +0x3b:  cmpb   $0x0,-0x1c(%ebp)
08ad9e97 +0x3f:  je     08ad9edf <+0x87>
08ad9e99 +0x41:  mov    -0xc(%ebp),%ebx
08ad9e9c +0x44:  mov    0x8(%ebp),%eax
08ad9e9f +0x47:  mov    %eax,(%esp)
08ad9ea2 +0x4a:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ad9ea7 +0x4f:  mov    %eax,%esi
08ad9ea9 +0x51:  mov    0x8(%ebp),%eax
08ad9eac +0x54:  mov    %eax,(%esp)
08ad9eaf +0x57:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9eb4 +0x5c:  mov    %eax,%edx
08ad9eb6 +0x5e:  mov    -0xc(%ebp),%eax
08ad9eb9 +0x61:  mov    %edx,%ecx
08ad9ebb +0x63:  sub    %eax,%ecx
08ad9ebd +0x65:  mov    %ecx,%eax
08ad9ebf +0x67:  shl    $0x2,%eax
08ad9ec2 +0x6a:  lea    (%esi,%eax,1),%edx
08ad9ec5 +0x6d:  mov    %ebx,0x8(%esp)
08ad9ec9 +0x71:  mov    0xc(%ebp),%eax
08ad9ecc +0x74:  mov    %eax,0x4(%esp)
08ad9ed0 +0x78:  mov    %edx,(%esp)
08ad9ed3 +0x7b:  call   0807e6a0 <_init+0xf98>
08ad9ed8 +0x80:  test   %eax,%eax
08ad9eda +0x82:  sete   %al
08ad9edd +0x85:  jmp    08ad9f23 <+0xcb>
08ad9edf +0x87:  mov    -0xc(%ebp),%ebx
08ad9ee2 +0x8a:  mov    0x8(%ebp),%eax
08ad9ee5 +0x8d:  mov    %eax,(%esp)
08ad9ee8 +0x90:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ad9eed +0x95:  mov    %eax,%esi
08ad9eef +0x97:  mov    0x8(%ebp),%eax
08ad9ef2 +0x9a:  mov    %eax,(%esp)
08ad9ef5 +0x9d:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9efa +0xa2:  mov    %eax,%edx
08ad9efc +0xa4:  mov    -0xc(%ebp),%eax
08ad9eff +0xa7:  mov    %edx,%ecx
08ad9f01 +0xa9:  sub    %eax,%ecx
08ad9f03 +0xab:  mov    %ecx,%eax
08ad9f05 +0xad:  shl    $0x2,%eax
08ad9f08 +0xb0:  lea    (%esi,%eax,1),%edx
08ad9f0b +0xb3:  mov    %ebx,0x8(%esp)
08ad9f0f +0xb7:  mov    0xc(%ebp),%eax
08ad9f12 +0xba:  mov    %eax,0x4(%esp)
08ad9f16 +0xbe:  mov    %edx,(%esp)
08ad9f19 +0xc1:  call   0807df90 <_init+0x888>
08ad9f1e +0xc6:  test   %eax,%eax
08ad9f20 +0xc8:  sete   %al
08ad9f23 +0xcb:  add    $0x30,%esp
08ad9f26 +0xce:  pop    %ebx
08ad9f27 +0xcf:  pop    %esi
08ad9f28 +0xd0:  pop    %ebp
08ad9f29 +0xd1:  ret
```

## 反编译 C

```c
// WideString::endsWith @ 0x8ad9e58

/* DWARF original prototype: bool endsWith(WideString * this, wchar * pat, bool isIgnoreCase) */

bool __thiscall WideString::endsWith(WideString *this,wchar *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  wchar *pwVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = wcslen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncasecmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```
