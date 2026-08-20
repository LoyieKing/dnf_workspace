# getInputStreamSize

`_ZN13DNFLexWrapper18getInputStreamSizeEv`

`DNFLexWrapper::getInputStreamSize()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace930  _ZN13DNFLexWrapper18getInputStreamSizeEv
#           DNFLexWrapper::getInputStreamSize()
# range [0x08ace930, 0x08ace96e]
08ace930 +0x00:  push   %ebp
08ace931 +0x01:  mov    %esp,%ebp
08ace933 +0x03:  sub    $0x18,%esp
08ace936 +0x06:  mov    0x8(%ebp),%edx
08ace939 +0x09:  mov    0x14(%edx),%ecx
08ace93c +0x0c:  test   %ecx,%ecx
08ace93e +0x0e:  jne    08ace950 <+0x20>
08ace940 +0x10:  add    $0x18,%edx
08ace943 +0x13:  mov    %edx,(%esp)
08ace946 +0x16:  call   08acd280 <_ZN6DNFLex14GetInputStreamEv>  ; DNFLex::GetInputStream()
08ace94b +0x1b:  mov    0xc(%eax),%eax
08ace94e +0x1e:  leave
08ace94f +0x1f:  ret
08ace950 +0x20:  cmp    $0x1,%ecx
08ace953 +0x23:  mov    $0xffffffff,%eax
08ace958 +0x28:  jne    08ace94e <+0x1e>
08ace95a +0x2a:  add    $0x40bc,%edx
08ace960 +0x30:  mov    %edx,(%esp)
08ace963 +0x33:  call   08acfea0 <_ZN14CompiledDNFLex14GetInputStreamEv>  ; CompiledDNFLex::GetInputStream()
08ace968 +0x38:  mov    0x8(%eax),%eax
08ace96b +0x3b:  leave
08ace96c +0x3c:  ret
08ace96d +0x3d:  nop
08ace96e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLexWrapper::getInputStreamSize @ 0x8ace930

/* DWARF original prototype: int getInputStreamSize(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getInputStreamSize(DNFLexWrapper *this)

{
  stream_t *psVar1;
  uint uVar2;
  stream_t *psVar3;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
    uVar2 = (psVar1->s).size;
  }
  else {
    uVar2 = 0xffffffff;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      psVar3 = CompiledDNFLex::GetInputStream(&this->compiledDnfLex_);
      return psVar3->size;
    }
  }
  return uVar2;
}
```
