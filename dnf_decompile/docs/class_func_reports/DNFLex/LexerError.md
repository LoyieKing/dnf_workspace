# LexerError

`_ZN6DNFLex10LexerErrorEPKc`

`DNFLex::LexerError(char const*)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd1c0  _ZN6DNFLex10LexerErrorEPKc
#           DNFLex::LexerError(char const*)
# range [0x08acd1c0, 0x08acd1e9]
08acd1c0 +0x00:  push   %ebp
08acd1c1 +0x01:  mov    %esp,%ebp
08acd1c3 +0x03:  sub    $0x8,%esp
08acd1c6 +0x06:  mov    0x8(%ebp),%eax
08acd1c9 +0x09:  mov    0xc(%ebp),%edx
08acd1cc +0x0c:  mov    0x409c(%eax),%eax
08acd1d2 +0x12:  test   %eax,%eax
08acd1d4 +0x14:  je     08acd1e0 <+0x20>
08acd1d6 +0x16:  mov    %edx,0x8(%ebp)
08acd1d9 +0x19:  leave
08acd1da +0x1a:  jmp    *%eax
08acd1dc +0x1c:  lea    0x0(%esi,%eiz,1),%esi
08acd1e0 +0x20:  leave
08acd1e1 +0x21:  ret
08acd1e2 +0x22:  lea    0x0(%esi,%eiz,1),%esi
08acd1e9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::LexerError @ 0x8acd1c0

/* DWARF original prototype: void LexerError(DNFLex * this, char * msg) */

void __thiscall DNFLex::LexerError(DNFLex *this,char *msg)

{
  if (this->LexerError_ != (TLexerError)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerError_)(msg);
    return;
  }
  return;
}
```
