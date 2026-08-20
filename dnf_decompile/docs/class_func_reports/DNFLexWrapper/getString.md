# getString

`_ZN13DNFLexWrapper9getStringEv`

`DNFLexWrapper::getString()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace6f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace6f0  _ZN13DNFLexWrapper9getStringEv
#           DNFLexWrapper::getString()
# range [0x08ace6f0, 0x08ace729]
08ace6f0 +0x00:  push   %ebp
08ace6f1 +0x01:  mov    %esp,%ebp
08ace6f3 +0x03:  sub    $0x8,%esp
08ace6f6 +0x06:  mov    0x8(%ebp),%edx
08ace6f9 +0x09:  mov    0x14(%edx),%ecx
08ace6fc +0x0c:  test   %ecx,%ecx
08ace6fe +0x0e:  jne    08ace710 <+0x20>
08ace700 +0x10:  add    $0x18,%edx
08ace703 +0x13:  mov    %edx,0x8(%ebp)
08ace706 +0x16:  leave
08ace707 +0x17:  jmp    08acd1f0 <_ZN6DNFLex7tok_strEv>  ; DNFLex::tok_str()
08ace70c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
08ace710 +0x20:  xor    %eax,%eax
08ace712 +0x22:  cmp    $0x1,%ecx
08ace715 +0x25:  je     08ace720 <+0x30>
08ace717 +0x27:  leave
08ace718 +0x28:  ret
08ace719 +0x29:  lea    0x0(%esi,%eiz,1),%esi
08ace720 +0x30:  mov    0x10(%edx),%eax
08ace723 +0x33:  leave
08ace724 +0x34:  ret
08ace725 +0x35:  nop
08ace726 +0x36:  lea    0x0(%esi),%esi
08ace729 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getString @ 0x8ace6f0

/* DWARF original prototype: char * getString(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getString(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = DNFLex::tok_str(&this->dnfLex_);
    return pcVar1;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return (char *)0x0;
  }
  return this->lastStringValue_;
}
```
