# getLineNumber

`_ZN6DNFLex13getLineNumberEv`

`DNFLex::getLineNumber()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd2b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd2b0  _ZN6DNFLex13getLineNumberEv
#           DNFLex::getLineNumber()
# range [0x08acd2b0, 0x08acd2bc]
08acd2b0 +0x00:  push   %ebp
08acd2b1 +0x01:  mov    %esp,%ebp
08acd2b3 +0x03:  mov    0x8(%ebp),%eax
08acd2b6 +0x06:  pop    %ebp
08acd2b7 +0x07:  mov    0xc(%eax),%eax
08acd2ba +0x0a:  ret
08acd2bb +0x0b:  nop
08acd2bc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::getLineNumber @ 0x8acd2b0

/* DWARF original prototype: int getLineNumber(DNFLex * this) */

int __thiscall DNFLex::getLineNumber(DNFLex *this)

{
  return (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
}
```
