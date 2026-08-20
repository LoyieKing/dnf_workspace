# getConnector

`_ZN13DNFLexWrapper12getConnectorEv`

`DNFLexWrapper::getConnector()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace3f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace3f0  _ZN13DNFLexWrapper12getConnectorEv
#           DNFLexWrapper::getConnector()
# range [0x08ace3f0, 0x08ace41a]
08ace3f0 +0x00:  push   %ebp
08ace3f1 +0x01:  mov    %esp,%ebp
08ace3f3 +0x03:  mov    0x8(%ebp),%edx
08ace3f6 +0x06:  mov    0x14(%edx),%ecx
08ace3f9 +0x09:  test   %ecx,%ecx
08ace3fb +0x0b:  jne    08ace408 <+0x18>
08ace3fd +0x0d:  mov    0x1c(%edx),%eax
08ace400 +0x10:  pop    %ebp
08ace401 +0x11:  ret
08ace402 +0x12:  lea    0x0(%esi),%esi
08ace408 +0x18:  xor    %eax,%eax
08ace40a +0x1a:  cmp    $0x1,%ecx
08ace40d +0x1d:  jne    08ace400 <+0x10>
08ace40f +0x1f:  mov    0x10(%edx),%eax
08ace412 +0x22:  pop    %ebp
08ace413 +0x23:  ret
08ace414 +0x24:  lea    0x0(%esi),%esi
08ace41a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getConnector @ 0x8ace3f0

/* DWARF original prototype: char * getConnector(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getConnector(DNFLexWrapper *this)

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
