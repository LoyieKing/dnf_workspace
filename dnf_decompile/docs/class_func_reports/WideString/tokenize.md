# tokenize

`_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EE`

`WideString::tokenize(WideString const&, std::vector<WideString, std::allocator<WideString> >*)`

| 类 | 地址 |
|---|---|
| `WideString` | `0x08adbd24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08adbd24  _ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EE
#           WideString::tokenize(WideString const&, std::vector<WideString, std::allocator<WideString> >*)
# range [0x08adbd24, 0x08adbd55]
08adbd24 +0x00:  push   %ebp
08adbd25 +0x01:  mov    %esp,%ebp
08adbd27 +0x03:  sub    $0x28,%esp
08adbd2a +0x06:  movl   $0x0,0x10(%esp)
08adbd32 +0x0e:  movl   $".",0xc(%esp)
08adbd3a +0x16:  movl   $" ",0x8(%esp)
08adbd42 +0x1e:  mov    0xc(%ebp),%eax
08adbd45 +0x21:  mov    %eax,0x4(%esp)
08adbd49 +0x25:  mov    0x8(%ebp),%eax
08adbd4c +0x28:  mov    %eax,(%esp)
08adbd4f +0x2b:  call   08adbd56 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b>  ; WideString::tokenize(WideString const&, std::vector<WideString, std::allocator<WideString> >*, wchar_t const*, wchar_t const*, bool)
08adbd54 +0x30:  leave
08adbd55 +0x31:  ret
```

## 反编译 C

```c
// WideString::tokenize @ 0x8adbd24

int32 WideString::tokenize
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector)

{
  int32 iVar1;
  
  iVar1 = tokenize(str,tokenVector,(wchar *)&DAT_08e32c74,(wchar *)&DAT_08e32c68,false);
  return iVar1;
}
```
