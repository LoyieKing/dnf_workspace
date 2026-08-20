# getLexType

`_ZN13DNFLexWrapper10getLexTypeEv`

`DNFLexWrapper::getLexType()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace2a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace2a0  _ZN13DNFLexWrapper10getLexTypeEv
#           DNFLexWrapper::getLexType()
# range [0x08ace2a0, 0x08ace2ac]
08ace2a0 +0x00:  push   %ebp
08ace2a1 +0x01:  mov    %esp,%ebp
08ace2a3 +0x03:  mov    0x8(%ebp),%eax
08ace2a6 +0x06:  pop    %ebp
08ace2a7 +0x07:  mov    0x14(%eax),%eax
08ace2aa +0x0a:  ret
08ace2ab +0x0b:  nop
08ace2ac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getLexType @ 0x8ace2a0

/* DWARF original prototype: ENUM_LEX_TYPE getLexType(DNFLexWrapper * this) */

ENUM_LEX_TYPE __thiscall DNFLexWrapper::getLexType(DNFLexWrapper *this)

{
  return this->lexType_;
}
```
