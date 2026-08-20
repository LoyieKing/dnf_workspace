# getType

`_ZN13DNFLexWrapper7getTypeEv`

`DNFLexWrapper::getType()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace390  _ZN13DNFLexWrapper7getTypeEv
#           DNFLexWrapper::getType()
# range [0x08ace390, 0x08ace3ba]
08ace390 +0x00:  push   %ebp
08ace391 +0x01:  mov    %esp,%ebp
08ace393 +0x03:  mov    0x8(%ebp),%edx
08ace396 +0x06:  mov    0x14(%edx),%ecx
08ace399 +0x09:  test   %ecx,%ecx
08ace39b +0x0b:  jne    08ace3a8 <+0x18>
08ace39d +0x0d:  mov    0x1c(%edx),%eax
08ace3a0 +0x10:  pop    %ebp
08ace3a1 +0x11:  ret
08ace3a2 +0x12:  lea    0x0(%esi),%esi
08ace3a8 +0x18:  xor    %eax,%eax
08ace3aa +0x1a:  cmp    $0x1,%ecx
08ace3ad +0x1d:  jne    08ace3a0 <+0x10>
08ace3af +0x1f:  mov    0x10(%edx),%eax
08ace3b2 +0x22:  pop    %ebp
08ace3b3 +0x23:  ret
08ace3b4 +0x24:  lea    0x0(%esi),%esi
08ace3ba +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getType @ 0x8ace390

/* DWARF original prototype: char * getType(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getType(DNFLexWrapper *this)

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
