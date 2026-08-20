# SetHandler

`_ZN13DNFLexWrapper10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PN6DNFLex13stream_data_tEE`

`DNFLexWrapper::SetHandler(bool (*)(char), void (*)(char const*, int), void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08acec80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acec80  _ZN13DNFLexWrapper10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PN6DNFLex13stream_data_tEE
#           DNFLexWrapper::SetHandler(bool (*)(char), void (*)(char const*, int), void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))
# range [0x08acec80, 0x08acece9]
08acec80 +0x00:  push   %ebp
08acec81 +0x01:  mov    %esp,%ebp
08acec83 +0x03:  sub    $0x38,%esp
08acec86 +0x06:  mov    0x10(%ebp),%eax
08acec89 +0x09:  mov    %ebx,-0xc(%ebp)
08acec8c +0x0c:  mov    0x8(%ebp),%ebx
08acec8f +0x0f:  mov    %esi,-0x8(%ebp)
08acec92 +0x12:  mov    0x18(%ebp),%esi
08acec95 +0x15:  mov    %edi,-0x4(%ebp)
08acec98 +0x18:  mov    0x14(%ebp),%edi
08acec9b +0x1b:  mov    %eax,0x8(%esp)
08acec9f +0x1f:  mov    0xc(%ebp),%eax
08aceca2 +0x22:  mov    %esi,0x10(%esp)
08aceca6 +0x26:  mov    %edi,0xc(%esp)
08acecaa +0x2a:  mov    %eax,0x4(%esp)
08acecae +0x2e:  lea    0x18(%ebx),%eax
08acecb1 +0x31:  mov    %eax,(%esp)
08acecb4 +0x34:  call   08acd160 <_ZN6DNFLex10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PNS_13stream_data_tEE>  ; DNFLex::SetHandler(bool (*)(char), void (*)(char const*, int), void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))
08acecb9 +0x39:  lea    0x40bc(%ebx),%eax
08acecbf +0x3f:  mov    %esi,0x8(%esp)
08acecc3 +0x43:  mov    %edi,0x4(%esp)
08acecc7 +0x47:  mov    %eax,(%esp)
08acecca +0x4a:  call   08acfdf0 <_ZN14CompiledDNFLex10SetHandlerEPFvPKcEPFbS1_S1_PN6DNFLex13stream_data_tEE>  ; CompiledDNFLex::SetHandler(void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))
08aceccf +0x4f:  mov    %edi,0x6108(%ebx)
08acecd5 +0x55:  mov    %esi,0x610c(%ebx)
08acecdb +0x5b:  mov    -0xc(%ebp),%ebx
08acecde +0x5e:  mov    -0x8(%ebp),%esi
08acece1 +0x61:  mov    -0x4(%ebp),%edi
08acece4 +0x64:  mov    %ebp,%esp
08acece6 +0x66:  pop    %ebp
08acece7 +0x67:  ret
08acece8 +0x68:  nop
08acece9 +0x69:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::SetHandler @ 0x8acec80

/* DWARF original prototype: void SetHandler(DNFLexWrapper * this, TIsDbcsLeadChar
   IsDbcsLeadCharFunc, TLexerOutput LexerOutputFunc, TLexerError LexerErrorFunc, TLoadStream
   LoadStreamFunc) */

void __thiscall
DNFLexWrapper::SetHandler
          (DNFLexWrapper *this,TIsDbcsLeadChar IsDbcsLeadCharFunc,TLexerOutput LexerOutputFunc,
          TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  DNFLex::SetHandler(&this->dnfLex_,IsDbcsLeadCharFunc,LexerOutputFunc,LexerErrorFunc,LoadStreamFunc
                    );
  CompiledDNFLex::SetHandler(&this->compiledDnfLex_,LexerErrorFunc,LoadStreamFunc);
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}
```
