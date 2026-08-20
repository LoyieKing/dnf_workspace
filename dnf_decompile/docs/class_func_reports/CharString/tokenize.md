# tokenize

`_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EE`

`CharString::tokenize(CharString const&, std::vector<CharString, std::allocator<CharString> >*)`

| 类 | 地址 |
|---|---|
| `CharString` | `0x08ad8c3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad8c3a  _ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EE
#           CharString::tokenize(CharString const&, std::vector<CharString, std::allocator<CharString> >*)
# range [0x08ad8c3a, 0x08ad8c6b]
08ad8c3a +0x00:  push   %ebp
08ad8c3b +0x01:  mov    %esp,%ebp
08ad8c3d +0x03:  sub    $0x28,%esp
08ad8c40 +0x06:  movl   $0x0,0x10(%esp)
08ad8c48 +0x0e:  movl   $".,",0xc(%esp)
08ad8c50 +0x16:  movl   $" \t\n\r",0x8(%esp)
08ad8c58 +0x1e:  mov    0xc(%ebp),%eax
08ad8c5b +0x21:  mov    %eax,0x4(%esp)
08ad8c5f +0x25:  mov    0x8(%ebp),%eax
08ad8c62 +0x28:  mov    %eax,(%esp)
08ad8c65 +0x2b:  call   08ad8c6c <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b>  ; CharString::tokenize(CharString const&, std::vector<CharString, std::allocator<CharString> >*, char const*, char const*, bool)
08ad8c6a +0x30:  leave
08ad8c6b +0x31:  ret
```

## 反编译 C

```c
// CharString::tokenize @ 0x8ad8c3a

int32 CharString::tokenize
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector)

{
  int32 iVar1;
  
  iVar1 = tokenize(str,tokenVector," \t\n\r",".,",false);
  return iVar1;
}
```
