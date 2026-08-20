# LexerOutput

`_ZN6DNFLex11LexerOutputEPKci`

`DNFLex::LexerOutput(char const*, int)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd190  _ZN6DNFLex11LexerOutputEPKci
#           DNFLex::LexerOutput(char const*, int)
# range [0x08acd190, 0x08acd1ba]
08acd190 +0x00:  push   %ebp
08acd191 +0x01:  mov    %esp,%ebp
08acd193 +0x03:  sub    $0x8,%esp
08acd196 +0x06:  mov    0x8(%ebp),%eax
08acd199 +0x09:  mov    0xc(%ebp),%edx
08acd19c +0x0c:  mov    0x10(%ebp),%ecx
08acd19f +0x0f:  mov    0x4098(%eax),%eax
08acd1a5 +0x15:  test   %eax,%eax
08acd1a7 +0x17:  je     08acd1b8 <+0x28>
08acd1a9 +0x19:  mov    %ecx,0xc(%ebp)
08acd1ac +0x1c:  mov    %edx,0x8(%ebp)
08acd1af +0x1f:  leave
08acd1b0 +0x20:  jmp    *%eax
08acd1b2 +0x22:  lea    0x0(%esi),%esi
08acd1b8 +0x28:  leave
08acd1b9 +0x29:  ret
08acd1ba +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLex::LexerOutput @ 0x8acd190

/* DWARF original prototype: void LexerOutput(DNFLex * this, char * buf, int size) */

void __thiscall DNFLex::LexerOutput(DNFLex *this,char *buf,int size)

{
  if (this->LexerOutput_ != (TLexerOutput)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerOutput_)(buf,size);
    return;
  }
  return;
}
```
