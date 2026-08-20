# getLastToken

`_ZN13DNFLexWrapper12getLastTokenEv`

`DNFLexWrapper::getLastToken()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace420  _ZN13DNFLexWrapper12getLastTokenEv
#           DNFLexWrapper::getLastToken()
# range [0x08ace420, 0x08ace42c]
08ace420 +0x00:  push   %ebp
08ace421 +0x01:  mov    %esp,%ebp
08ace423 +0x03:  mov    0x8(%ebp),%eax
08ace426 +0x06:  pop    %ebp
08ace427 +0x07:  mov    0x4(%eax),%eax
08ace42a +0x0a:  ret
08ace42b +0x0b:  nop
08ace42c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getLastToken @ 0x8ace420

/* DWARF original prototype: DNFLEX_TOKEN getLastToken(DNFLexWrapper * this) */

DNFLEX_TOKEN __thiscall DNFLexWrapper::getLastToken(DNFLexWrapper *this)

{
  return this->lastToken_;
}
```
