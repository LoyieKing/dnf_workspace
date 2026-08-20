# setLexType

`_ZN13DNFLexWrapper10setLexTypeENS_13ENUM_LEX_TYPEE`

`DNFLexWrapper::setLexType(DNFLexWrapper::ENUM_LEX_TYPE)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace290  _ZN13DNFLexWrapper10setLexTypeENS_13ENUM_LEX_TYPEE
#           DNFLexWrapper::setLexType(DNFLexWrapper::ENUM_LEX_TYPE)
# range [0x08ace290, 0x08ace29e]
08ace290 +0x00:  push   %ebp
08ace291 +0x01:  mov    %esp,%ebp
08ace293 +0x03:  mov    0xc(%ebp),%edx
08ace296 +0x06:  mov    0x8(%ebp),%eax
08ace299 +0x09:  mov    %edx,0x14(%eax)
08ace29c +0x0c:  pop    %ebp
08ace29d +0x0d:  ret
08ace29e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLexWrapper::setLexType @ 0x8ace290

/* DWARF original prototype: void setLexType(DNFLexWrapper * this, ENUM_LEX_TYPE lexType) */

void __thiscall DNFLexWrapper::setLexType(DNFLexWrapper *this,ENUM_LEX_TYPE lexType)

{
  this->lexType_ = lexType;
  return;
}
```
