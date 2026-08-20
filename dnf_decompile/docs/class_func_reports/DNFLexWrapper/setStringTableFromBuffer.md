# setStringTableFromBuffer

`_ZN13DNFLexWrapper24setStringTableFromBufferEPKhi`

`DNFLexWrapper::setStringTableFromBuffer(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace560  _ZN13DNFLexWrapper24setStringTableFromBufferEPKhi
#           DNFLexWrapper::setStringTableFromBuffer(unsigned char const*, int)
# range [0x08ace560, 0x08ace59a]
08ace560 +0x00:  push   %ebp
08ace561 +0x01:  mov    %esp,%ebp
08ace563 +0x03:  sub    $0x18,%esp
08ace566 +0x06:  mov    0x8(%ebp),%eax
08ace569 +0x09:  mov    %ebx,-0x8(%ebp)
08ace56c +0x0c:  mov    0xc(%ebp),%ebx
08ace56f +0x0f:  mov    %esi,-0x4(%ebp)
08ace572 +0x12:  mov    0x10(%ebp),%esi
08ace575 +0x15:  add    $0x40bc,%eax
08ace57a +0x1a:  mov    %eax,(%esp)
08ace57d +0x1d:  call   08ad0070 <_ZN14CompiledDNFLex16getStringManagerEv>  ; CompiledDNFLex::getStringManager()
08ace582 +0x22:  mov    %esi,0x10(%ebp)
08ace585 +0x25:  mov    -0x4(%ebp),%esi
08ace588 +0x28:  mov    %ebx,0xc(%ebp)
08ace58b +0x2b:  mov    -0x8(%ebp),%ebx
08ace58e +0x2e:  mov    %eax,0x8(%ebp)
08ace591 +0x31:  mov    %ebp,%esp
08ace593 +0x33:  pop    %ebp
08ace594 +0x34:  jmp    08acf970 <_ZN19ScriptStringManager16importFromBufferEPKhi>  ; ScriptStringManager::importFromBuffer(unsigned char const*, int)
08ace599 +0x39:  nop
08ace59a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLexWrapper::setStringTableFromBuffer @ 0x8ace560

/* DWARF original prototype: bool setStringTableFromBuffer(DNFLexWrapper * this, byte * buffer, int
   size) */

bool __thiscall DNFLexWrapper::setStringTableFromBuffer(DNFLexWrapper *this,byte *buffer,int size)

{
  bool bVar1;
  ScriptStringManager *this_00;
  
  this_00 = CompiledDNFLex::getStringManager(&this->compiledDnfLex_);
  bVar1 = ScriptStringManager::importFromBuffer(this_00,buffer,size);
  return bVar1;
}
```
