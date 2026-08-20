# SetHandler

`_ZN6DNFLex10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PNS_13stream_data_tEE`

`DNFLex::SetHandler(bool (*)(char), void (*)(char const*, int), void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd160  _ZN6DNFLex10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PNS_13stream_data_tEE
#           DNFLex::SetHandler(bool (*)(char), void (*)(char const*, int), void (*)(char const*), bool (*)(char const*, char const*, DNFLex::stream_data_t*))
# range [0x08acd160, 0x08acd18c]
08acd160 +0x00:  push   %ebp
08acd161 +0x01:  mov    %esp,%ebp
08acd163 +0x03:  mov    0x8(%ebp),%eax
08acd166 +0x06:  mov    0xc(%ebp),%edx
08acd169 +0x09:  mov    %edx,0x4094(%eax)
08acd16f +0x0f:  mov    0x10(%ebp),%edx
08acd172 +0x12:  mov    %edx,0x4098(%eax)
08acd178 +0x18:  mov    0x14(%ebp),%edx
08acd17b +0x1b:  mov    %edx,0x409c(%eax)
08acd181 +0x21:  mov    0x18(%ebp),%edx
08acd184 +0x24:  mov    %edx,0x40a0(%eax)
08acd18a +0x2a:  pop    %ebp
08acd18b +0x2b:  ret
08acd18c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLex::SetHandler @ 0x8acd160

/* DWARF original prototype: void SetHandler(DNFLex * this, TIsDbcsLeadChar IsDbcsLeadCharFunc,
   TLexerOutput LexerOutputFunc, TLexerError LexerErrorFunc, TLoadStream LoadStreamFunc) */

void __thiscall
DNFLex::SetHandler(DNFLex *this,TIsDbcsLeadChar IsDbcsLeadCharFunc,TLexerOutput LexerOutputFunc,
                  TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  this->IsDbcsLeadChar_ = IsDbcsLeadCharFunc;
  this->LexerOutput_ = LexerOutputFunc;
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}
```
