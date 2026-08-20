# getLastTokenData

`_ZN13DNFLexWrapper16getLastTokenDataEv`

`DNFLexWrapper::getLastTokenData()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace430  _ZN13DNFLexWrapper16getLastTokenDataEv
#           DNFLexWrapper::getLastTokenData()
# range [0x08ace430, 0x08ace45a]
08ace430 +0x00:  push   %ebp
08ace431 +0x01:  mov    %esp,%ebp
08ace433 +0x03:  mov    0x8(%ebp),%edx
08ace436 +0x06:  mov    0x14(%edx),%ecx
08ace439 +0x09:  test   %ecx,%ecx
08ace43b +0x0b:  jne    08ace448 <+0x18>
08ace43d +0x0d:  mov    0x1c(%edx),%eax
08ace440 +0x10:  pop    %ebp
08ace441 +0x11:  ret
08ace442 +0x12:  lea    0x0(%esi),%esi
08ace448 +0x18:  xor    %eax,%eax
08ace44a +0x1a:  cmp    $0x1,%ecx
08ace44d +0x1d:  jne    08ace440 <+0x10>
08ace44f +0x1f:  mov    0x10(%edx),%eax
08ace452 +0x22:  pop    %ebp
08ace453 +0x23:  ret
08ace454 +0x24:  lea    0x0(%esi),%esi
08ace45a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getLastTokenData @ 0x8ace430

/* DWARF original prototype: char * getLastTokenData(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getLastTokenData(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
  }
  else {
    pcVar1 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar1;
}
```
