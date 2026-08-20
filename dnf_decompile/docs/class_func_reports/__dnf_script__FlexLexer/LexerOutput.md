# LexerOutput

`_ZN23__dnf_script__FlexLexer11LexerOutputEPKci`

`__dnf_script__FlexLexer::LexerOutput(char const*, int)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2760  _ZN23__dnf_script__FlexLexer11LexerOutputEPKci
#           __dnf_script__FlexLexer::LexerOutput(char const*, int)
# range [0x08ad2760, 0x08ad2779]
08ad2760 +0x00:  push   %ebp
08ad2761 +0x01:  mov    %esp,%ebp
08ad2763 +0x03:  sub    $0x8,%esp
08ad2766 +0x06:  mov    0x8(%ebp),%eax
08ad2769 +0x09:  mov    0x24(%eax),%eax
08ad276c +0x0c:  mov    %eax,0x8(%ebp)
08ad276f +0x0f:  leave
08ad2770 +0x10:  jmp    086fd4e0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8c74>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8c74
08ad2775 +0x15:  nop
08ad2776 +0x16:  lea    0x0(%esi),%esi
08ad2779 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::LexerOutput @ 0x8ad2760

/* DWARF original prototype: void LexerOutput(__dnf_script__FlexLexer * this, char * buf, int size)
    */

void __thiscall
__dnf_script__FlexLexer::LexerOutput(__dnf_script__FlexLexer *this,char *buf,int size)

{
  std::ostream::write((ostream *)this->yyout,buf,size);
  return;
}
```
