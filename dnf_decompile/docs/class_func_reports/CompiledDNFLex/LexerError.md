# LexerError

`_ZN14CompiledDNFLex10LexerErrorEPKc`

`CompiledDNFLex::LexerError(char const*)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfe10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfe10  _ZN14CompiledDNFLex10LexerErrorEPKc
#           CompiledDNFLex::LexerError(char const*)
# range [0x08acfe10, 0x08acfe39]
08acfe10 +0x00:  push   %ebp
08acfe11 +0x01:  mov    %esp,%ebp
08acfe13 +0x03:  sub    $0x8,%esp
08acfe16 +0x06:  mov    0x8(%ebp),%eax
08acfe19 +0x09:  mov    0xc(%ebp),%edx
08acfe1c +0x0c:  mov    0x2044(%eax),%eax
08acfe22 +0x12:  test   %eax,%eax
08acfe24 +0x14:  je     08acfe30 <+0x20>
08acfe26 +0x16:  mov    %edx,0x8(%ebp)
08acfe29 +0x19:  leave
08acfe2a +0x1a:  jmp    *%eax
08acfe2c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
08acfe30 +0x20:  leave
08acfe31 +0x21:  ret
08acfe32 +0x22:  lea    0x0(%esi,%eiz,1),%esi
08acfe39 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::LexerError @ 0x8acfe10

/* DWARF original prototype: void LexerError(CompiledDNFLex * this, char * msg) */

void __thiscall CompiledDNFLex::LexerError(CompiledDNFLex *this,char *msg)

{
  if (this->LexerError_ != (TLexerError)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acfe2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerError_)(msg);
    return;
  }
  return;
}
```
