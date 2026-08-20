# getToken

`_ZN13DNFLexWrapper8getTokenEv`

`DNFLexWrapper::getToken()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace7e0  _ZN13DNFLexWrapper8getTokenEv
#           DNFLexWrapper::getToken()
# range [0x08ace7e0, 0x08ace89a]
08ace7e0 +0x00:  push   %ebp
08ace7e1 +0x01:  mov    %esp,%ebp
08ace7e3 +0x03:  sub    $0x18,%esp
08ace7e6 +0x06:  mov    %ebx,-0x8(%ebp)
08ace7e9 +0x09:  mov    0x8(%ebp),%ebx
08ace7ec +0x0c:  mov    %esi,-0x4(%ebp)
08ace7ef +0x0f:  mov    0x14(%ebx),%eax
08ace7f2 +0x12:  test   %eax,%eax
08ace7f4 +0x14:  je     08ace808 <+0x28>
08ace7f6 +0x16:  cmp    $0x1,%eax
08ace7f9 +0x19:  je     08ace820 <+0x40>
08ace7fb +0x1b:  mov    0x4(%ebx),%eax
08ace7fe +0x1e:  mov    -0x8(%ebp),%ebx
08ace801 +0x21:  mov    -0x4(%ebp),%esi
08ace804 +0x24:  mov    %ebp,%esp
08ace806 +0x26:  pop    %ebp
08ace807 +0x27:  ret
08ace808 +0x28:  lea    0x18(%ebx),%eax
08ace80b +0x2b:  mov    %eax,(%esp)
08ace80e +0x2e:  call   08acdaa0 <_ZN6DNFLex14get_next_tokenEv>  ; DNFLex::get_next_token()
08ace813 +0x33:  mov    %eax,0x4(%ebx)
08ace816 +0x36:  mov    -0x8(%ebp),%ebx
08ace819 +0x39:  mov    -0x4(%ebp),%esi
08ace81c +0x3c:  mov    %ebp,%esp
08ace81e +0x3e:  pop    %ebp
08ace81f +0x3f:  ret
08ace820 +0x40:  lea    0x40bc(%ebx),%esi
08ace826 +0x46:  mov    %esi,(%esp)
08ace829 +0x49:  call   08ad0fa0 <_ZN14CompiledDNFLex8getTokenEv>  ; CompiledDNFLex::getToken()
08ace82e +0x4e:  cmp    $0x1,%eax
08ace831 +0x51:  mov    %eax,0x4(%ebx)
08ace834 +0x54:  jbe    08ace7fe <+0x1e>
08ace836 +0x56:  lea    -0x2(%eax),%edx
08ace839 +0x59:  cmp    $0x1,%edx
08ace83c +0x5c:  jbe    08ace860 <+0x80>
08ace83e +0x5e:  cmp    $0x9,%eax
08ace841 +0x61:  je     08ace860 <+0x80>
08ace843 +0x63:  cmp    $0x4,%eax
08ace846 +0x66:  je     08ace878 <+0x98>
08ace848 +0x68:  movl   $0x0,0x4(%esp)
08ace850 +0x70:  mov    %esi,(%esp)
08ace853 +0x73:  call   08ad0250 <_ZN14CompiledDNFLex6getStrEPb>  ; CompiledDNFLex::getStr(bool*)
08ace858 +0x78:  mov    %eax,0x10(%ebx)
08ace85b +0x7b:  jmp    08ace7fb <+0x1b>
08ace85d +0x7d:  lea    0x0(%esi),%esi
08ace860 +0x80:  movl   $0x0,0x4(%esp)
08ace868 +0x88:  mov    %esi,(%esp)
08ace86b +0x8b:  call   08acff70 <_ZN14CompiledDNFLex6getIntEPb>  ; CompiledDNFLex::getInt(bool*)
08ace870 +0x90:  mov    %eax,0x8(%ebx)
08ace873 +0x93:  mov    0x4(%ebx),%eax
08ace876 +0x96:  jmp    08ace7fe <+0x1e>
08ace878 +0x98:  movl   $0x0,0x4(%esp)
08ace880 +0xa0:  mov    %esi,(%esp)
08ace883 +0xa3:  call   08acffc0 <_ZN14CompiledDNFLex8getFloatEPb>  ; CompiledDNFLex::getFloat(bool*)
08ace888 +0xa8:  mov    0x4(%ebx),%eax
08ace88b +0xab:  fstps  0xc(%ebx)
08ace88e +0xae:  jmp    08ace7fe <+0x1e>
08ace893 +0xb3:  nop
08ace894 +0xb4:  lea    0x0(%esi),%esi
08ace89a +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// DNFLexWrapper::getToken @ 0x8ace7e0

/* DWARF original prototype: DNFLEX_TOKEN getToken(DNFLexWrapper * this) */

DNFLEX_TOKEN __thiscall DNFLexWrapper::getToken(DNFLexWrapper *this)

{
  CompiledDNFLex *this_00;
  DNFLEX_TOKEN DVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    DVar1 = DNFLex::get_next_token(&this->dnfLex_);
    this->lastToken_ = DVar1;
    return DVar1;
  }
  if (this->lexType_ == LEX_TYPE_COMPILED) {
    this_00 = &this->compiledDnfLex_;
    DVar1 = CompiledDNFLex::getToken(this_00);
    this->lastToken_ = DVar1;
    if (DVar1 < DNF_TOK_DECIMAL) {
      return DVar1;
    }
    if ((DVar1 - DNF_TOK_DECIMAL < 2) || (DVar1 == DNF_TOK_PAIR_INT)) {
      iVar3 = CompiledDNFLex::getInt(this_00,(bool *)0x0);
      this->lastIntValue_ = iVar3;
      return this->lastToken_;
    }
    if (DVar1 == DNF_TOK_FLOAT) {
      fVar4 = CompiledDNFLex::getFloat(this_00,(bool *)0x0);
      this->lastFloatValue_ = fVar4;
      return this->lastToken_;
    }
    pcVar2 = CompiledDNFLex::getStr(this_00,(bool *)0x0);
    this->lastStringValue_ = pcVar2;
  }
  return this->lastToken_;
}
```
