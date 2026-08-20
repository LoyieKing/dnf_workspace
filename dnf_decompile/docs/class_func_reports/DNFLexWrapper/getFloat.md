# getFloat

`_ZN13DNFLexWrapper8getFloatEv`

`DNFLexWrapper::getFloat()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace730  _ZN13DNFLexWrapper8getFloatEv
#           DNFLexWrapper::getFloat()
# range [0x08ace730, 0x08ace77c]
08ace730 +0x00:  push   %ebp
08ace731 +0x01:  mov    %esp,%ebp
08ace733 +0x03:  sub    $0x28,%esp
08ace736 +0x06:  mov    0x8(%ebp),%edx
08ace739 +0x09:  mov    0x14(%edx),%eax
08ace73c +0x0c:  test   %eax,%eax
08ace73e +0x0e:  je     08ace758 <+0x28>
08ace740 +0x10:  cmp    $0x1,%eax
08ace743 +0x13:  je     08ace750 <+0x20>
08ace745 +0x15:  fldz
08ace747 +0x17:  leave
08ace748 +0x18:  ret
08ace749 +0x19:  lea    0x0(%esi,%eiz,1),%esi
08ace750 +0x20:  flds   0xc(%edx)
08ace753 +0x23:  leave
08ace754 +0x24:  ret
08ace755 +0x25:  lea    0x0(%esi),%esi
08ace758 +0x28:  movl   $0x0,0x8(%esp)
08ace760 +0x30:  movl   $0x0,0x4(%esp)
08ace768 +0x38:  mov    0x1c(%edx),%eax
08ace76b +0x3b:  mov    %eax,(%esp)
08ace76e +0x3e:  call   0807d790 <_init+0x88>
08ace773 +0x43:  fstps  -0xc(%ebp)
08ace776 +0x46:  flds   -0xc(%ebp)
08ace779 +0x49:  leave
08ace77a +0x4a:  ret
08ace77b +0x4b:  nop
08ace77c +0x4c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getFloat @ 0x8ace730

/* DWARF original prototype: float getFloat(DNFLexWrapper * this) */

float __thiscall DNFLexWrapper::getFloat(DNFLexWrapper *this)

{
  longdouble lVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    lVar1 = (longdouble)
            __strtod_internal((this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext,0
                              ,0);
    return (float)lVar1;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0.0;
  }
  return this->lastFloatValue_;
}
```
