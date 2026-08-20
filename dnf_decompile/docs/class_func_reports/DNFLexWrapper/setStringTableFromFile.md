# setStringTableFromFile

`_ZN13DNFLexWrapper22setStringTableFromFileEPKc`

`DNFLexWrapper::setStringTableFromFile(char const*)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace530  _ZN13DNFLexWrapper22setStringTableFromFileEPKc
#           DNFLexWrapper::setStringTableFromFile(char const*)
# range [0x08ace530, 0x08ace55a]
08ace530 +0x00:  push   %ebp
08ace531 +0x01:  mov    %esp,%ebp
08ace533 +0x03:  push   %ebx
08ace534 +0x04:  sub    $0x14,%esp
08ace537 +0x07:  mov    0x8(%ebp),%eax
08ace53a +0x0a:  mov    0xc(%ebp),%ebx
08ace53d +0x0d:  add    $0x40bc,%eax
08ace542 +0x12:  mov    %eax,(%esp)
08ace545 +0x15:  call   08ad0070 <_ZN14CompiledDNFLex16getStringManagerEv>  ; CompiledDNFLex::getStringManager()
08ace54a +0x1a:  mov    %ebx,0xc(%ebp)
08ace54d +0x1d:  mov    %eax,0x8(%ebp)
08ace550 +0x20:  add    $0x14,%esp
08ace553 +0x23:  pop    %ebx
08ace554 +0x24:  pop    %ebp
08ace555 +0x25:  jmp    08acfd00 <_ZN19ScriptStringManager14importFromFileEPKc>  ; ScriptStringManager::importFromFile(char const*)
08ace55a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLexWrapper::setStringTableFromFile @ 0x8ace530

/* DWARF original prototype: bool setStringTableFromFile(DNFLexWrapper * this, TCHAR * fileName) */

bool __thiscall DNFLexWrapper::setStringTableFromFile(DNFLexWrapper *this,TCHAR *fileName)

{
  bool bVar1;
  ScriptStringManager *this_00;
  
  this_00 = CompiledDNFLex::getStringManager(&this->compiledDnfLex_);
  bVar1 = ScriptStringManager::importFromFile(this_00,fileName);
  return bVar1;
}
```
