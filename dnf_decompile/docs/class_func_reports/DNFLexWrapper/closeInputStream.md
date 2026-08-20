# closeInputStream

`_ZN13DNFLexWrapper16closeInputStreamEv`

`DNFLexWrapper::closeInputStream()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08acea70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acea70  _ZN13DNFLexWrapper16closeInputStreamEv
#           DNFLexWrapper::closeInputStream()
# range [0x08acea70, 0x08acea99]
08acea70 +0x00:  push   %ebp
08acea71 +0x01:  mov    %esp,%ebp
08acea73 +0x03:  push   %ebx
08acea74 +0x04:  sub    $0x14,%esp
08acea77 +0x07:  mov    0x8(%ebp),%ebx
08acea7a +0x0a:  lea    0x18(%ebx),%eax
08acea7d +0x0d:  add    $0x40bc,%ebx
08acea83 +0x13:  mov    %eax,(%esp)
08acea86 +0x16:  call   08acd5b0 <_ZN6DNFLex16CloseInputStreamEv>  ; DNFLex::CloseInputStream()
08acea8b +0x1b:  mov    %ebx,0x8(%ebp)
08acea8e +0x1e:  add    $0x14,%esp
08acea91 +0x21:  pop    %ebx
08acea92 +0x22:  pop    %ebp
08acea93 +0x23:  jmp    08ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>  ; CompiledDNFLex::CloseInputStream()
08acea98 +0x28:  nop
08acea99 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::closeInputStream @ 0x8acea70

/* DWARF original prototype: void closeInputStream(DNFLexWrapper * this) */

void __thiscall DNFLexWrapper::closeInputStream(DNFLexWrapper *this)

{
  DNFLex::CloseInputStream(&this->dnfLex_);
  CompiledDNFLex::CloseInputStream(&this->compiledDnfLex_);
  return;
}
```
