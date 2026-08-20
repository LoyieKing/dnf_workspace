# SetHandler

`_ZN14CompiledDNFLex10SetHandlerEPFvPKcEPFbS1_S1_PN6DNFLex13stream_data_tEE`

`CompiledDNFLex::SetHandler(void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08acfdf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acfdf0  _ZN14CompiledDNFLex10SetHandlerEPFvPKcEPFbS1_S1_PN6DNFLex13stream_data_tEE
#           CompiledDNFLex::SetHandler(void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))
# range [0x08acfdf0, 0x08acfe0a]
08acfdf0 +0x00:  push   %ebp
08acfdf1 +0x01:  mov    %esp,%ebp
08acfdf3 +0x03:  mov    0x8(%ebp),%eax
08acfdf6 +0x06:  mov    0xc(%ebp),%edx
08acfdf9 +0x09:  mov    %edx,0x2044(%eax)
08acfdff +0x0f:  mov    0x10(%ebp),%edx
08acfe02 +0x12:  mov    %edx,0x2048(%eax)
08acfe08 +0x18:  pop    %ebp
08acfe09 +0x19:  ret
08acfe0a +0x1a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// CompiledDNFLex::SetHandler @ 0x8acfdf0

/* DWARF original prototype: void SetHandler(CompiledDNFLex * this, TLexerError LexerErrorFunc,
   TLoadStream LoadStreamFunc) */

void __thiscall
CompiledDNFLex::SetHandler
          (CompiledDNFLex *this,TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}
```
