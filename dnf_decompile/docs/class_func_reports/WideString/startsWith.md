# startsWith

`_ZNK10WideString10startsWithEPKwb`

`WideString::startsWith(wchar_t const*, bool) const`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08ad9dc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad9dc6  _ZNK10WideString10startsWithEPKwb
#           WideString::startsWith(wchar_t const*, bool) const
# range [0x08ad9dc6, 0x08ad9e57]
08ad9dc6 +0x00:  push   %ebp
08ad9dc7 +0x01:  mov    %esp,%ebp
08ad9dc9 +0x03:  push   %ebx
08ad9dca +0x04:  sub    $0x34,%esp
08ad9dcd +0x07:  mov    0x10(%ebp),%eax
08ad9dd0 +0x0a:  mov    %al,-0x1c(%ebp)
08ad9dd3 +0x0d:  mov    0xc(%ebp),%eax
08ad9dd6 +0x10:  mov    %eax,(%esp)
08ad9dd9 +0x13:  call   0807e130 <_init+0xa28>
08ad9dde +0x18:  mov    %eax,-0xc(%ebp)
08ad9de1 +0x1b:  mov    0x8(%ebp),%eax
08ad9de4 +0x1e:  mov    %eax,(%esp)
08ad9de7 +0x21:  call   08add29c <_ZN10WideString8isupunctEw+0x74c>  ; WideString::isupunct(wchar_t)+0x74c
08ad9dec +0x26:  cmp    -0xc(%ebp),%eax
08ad9def +0x29:  setl   %al
08ad9df2 +0x2c:  test   %al,%al
08ad9df4 +0x2e:  je     08ad9dfd <+0x37>
08ad9df6 +0x30:  mov    $0x0,%eax
08ad9dfb +0x35:  jmp    08ad9e51 <+0x8b>
08ad9dfd +0x37:  cmpb   $0x0,-0x1c(%ebp)
08ad9e01 +0x3b:  je     08ad9e2b <+0x65>
08ad9e03 +0x3d:  mov    -0xc(%ebp),%ebx
08ad9e06 +0x40:  mov    0x8(%ebp),%eax
08ad9e09 +0x43:  mov    %eax,(%esp)
08ad9e0c +0x46:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ad9e11 +0x4b:  mov    %ebx,0x8(%esp)
08ad9e15 +0x4f:  mov    0xc(%ebp),%edx
08ad9e18 +0x52:  mov    %edx,0x4(%esp)
08ad9e1c +0x56:  mov    %eax,(%esp)
08ad9e1f +0x59:  call   0807e6a0 <_init+0xf98>
08ad9e24 +0x5e:  test   %eax,%eax
08ad9e26 +0x60:  sete   %al
08ad9e29 +0x63:  jmp    08ad9e51 <+0x8b>
08ad9e2b +0x65:  mov    -0xc(%ebp),%ebx
08ad9e2e +0x68:  mov    0x8(%ebp),%eax
08ad9e31 +0x6b:  mov    %eax,(%esp)
08ad9e34 +0x6e:  call   08ac2ec0 <_GLOBAL__I__ZN23restrict_inputting_name25RestrictInputtingNameData21unicodeRangeDataList_E+0x1d>  ; global constructors keyed to restrict_inputting_name::RestrictInputtingNameData::unicodeRangeDataList_+0x1d
08ad9e39 +0x73:  mov    %ebx,0x8(%esp)
08ad9e3d +0x77:  mov    0xc(%ebp),%edx
08ad9e40 +0x7a:  mov    %edx,0x4(%esp)
08ad9e44 +0x7e:  mov    %eax,(%esp)
08ad9e47 +0x81:  call   0807df90 <_init+0x888>
08ad9e4c +0x86:  test   %eax,%eax
08ad9e4e +0x88:  sete   %al
08ad9e51 +0x8b:  add    $0x34,%esp
08ad9e54 +0x8e:  pop    %ebx
08ad9e55 +0x8f:  pop    %ebp
08ad9e56 +0x90:  ret
08ad9e57 +0x91:  nop
```

## 反编译 C

```c
// WideString::startsWith @ 0x8ad9dc6

/* DWARF original prototype: bool startsWith(WideString * this, wchar * pat, bool isIgnoreCase) */

bool __thiscall WideString::startsWith(WideString *this,wchar *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  wchar_t *pwVar2;
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
    iVar3 = wcsncasecmp(pwVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pwVar2 = c_str(this);
    iVar3 = wcsncmp(pwVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}
```
