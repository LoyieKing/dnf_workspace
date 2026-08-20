# getLastLineNo

`_ZN13DNFLexWrapper13getLastLineNoEv`

`DNFLexWrapper::getLastLineNo()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace490  _ZN13DNFLexWrapper13getLastLineNoEv
#           DNFLexWrapper::getLastLineNo()
# range [0x08ace490, 0x08ace4c9]
08ace490 +0x00:  push   %ebp
08ace491 +0x01:  mov    %esp,%ebp
08ace493 +0x03:  sub    $0x8,%esp
08ace496 +0x06:  mov    0x8(%ebp),%edx
08ace499 +0x09:  mov    0x14(%edx),%ecx
08ace49c +0x0c:  test   %ecx,%ecx
08ace49e +0x0e:  jne    08ace4a8 <+0x18>
08ace4a0 +0x10:  mov    0x24(%edx),%eax
08ace4a3 +0x13:  leave
08ace4a4 +0x14:  ret
08ace4a5 +0x15:  lea    0x0(%esi),%esi
08ace4a8 +0x18:  cmp    $0x1,%ecx
08ace4ab +0x1b:  mov    $0xffffffff,%eax
08ace4b0 +0x20:  jne    08ace4a3 <+0x13>
08ace4b2 +0x22:  add    $0x40bc,%edx
08ace4b8 +0x28:  mov    %edx,0x8(%ebp)
08ace4bb +0x2b:  leave
08ace4bc +0x2c:  jmp    08acff20 <_ZNK14CompiledDNFLex9GetOffsetEv>  ; CompiledDNFLex::GetOffset() const
08ace4c1 +0x31:  nop
08ace4c2 +0x32:  lea    0x0(%esi,%eiz,1),%esi
08ace4c9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getLastLineNo @ 0x8ace490

/* DWARF original prototype: int getLastLineNo(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getLastLineNo(DNFLexWrapper *this)

{
  int iVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    iVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yylineno;
  }
  else {
    iVar1 = -1;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      iVar1 = CompiledDNFLex::GetOffset(&this->compiledDnfLex_);
      return iVar1;
    }
  }
  return iVar1;
}
```
