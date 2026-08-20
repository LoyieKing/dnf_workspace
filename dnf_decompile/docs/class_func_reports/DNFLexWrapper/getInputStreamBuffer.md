# getInputStreamBuffer

`_ZN13DNFLexWrapper20getInputStreamBufferEv`

`DNFLexWrapper::getInputStreamBuffer()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace970  _ZN13DNFLexWrapper20getInputStreamBufferEv
#           DNFLexWrapper::getInputStreamBuffer()
# range [0x08ace970, 0x08ace9aa]
08ace970 +0x00:  push   %ebp
08ace971 +0x01:  mov    %esp,%ebp
08ace973 +0x03:  sub    $0x18,%esp
08ace976 +0x06:  mov    0x8(%ebp),%edx
08ace979 +0x09:  mov    0x14(%edx),%ecx
08ace97c +0x0c:  test   %ecx,%ecx
08ace97e +0x0e:  jne    08ace990 <+0x20>
08ace980 +0x10:  add    $0x18,%edx
08ace983 +0x13:  mov    %edx,(%esp)
08ace986 +0x16:  call   08acd280 <_ZN6DNFLex14GetInputStreamEv>  ; DNFLex::GetInputStream()
08ace98b +0x1b:  mov    0x10(%eax),%eax
08ace98e +0x1e:  leave
08ace98f +0x1f:  ret
08ace990 +0x20:  xor    %eax,%eax
08ace992 +0x22:  cmp    $0x1,%ecx
08ace995 +0x25:  jne    08ace98e <+0x1e>
08ace997 +0x27:  add    $0x40bc,%edx
08ace99d +0x2d:  mov    %edx,(%esp)
08ace9a0 +0x30:  call   08acfea0 <_ZN14CompiledDNFLex14GetInputStreamEv>  ; CompiledDNFLex::GetInputStream()
08ace9a5 +0x35:  mov    0xc(%eax),%eax
08ace9a8 +0x38:  leave
08ace9a9 +0x39:  ret
08ace9aa +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLexWrapper::getInputStreamBuffer @ 0x8ace970

/* DWARF original prototype: char * getInputStreamBuffer(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getInputStreamBuffer(DNFLexWrapper *this)

{
  stream_t *psVar1;
  char *pcVar2;
  stream_t *psVar3;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
    pcVar2 = (psVar1->s).buffer;
  }
  else {
    pcVar2 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      psVar3 = CompiledDNFLex::GetInputStream(&this->compiledDnfLex_);
      return psVar3->buffer;
    }
  }
  return pcVar2;
}
```
