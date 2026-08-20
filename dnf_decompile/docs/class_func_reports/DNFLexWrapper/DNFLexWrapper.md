# DNFLexWrapper

`_ZN13DNFLexWrapperC1Ev`

`DNFLexWrapper::DNFLexWrapper()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08aced60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aced60  _ZN13DNFLexWrapperC1Ev
#           DNFLexWrapper::DNFLexWrapper()
# range [0x08aced60, 0x08acedda]
08aced60 +0x00:  push   %ebp
08aced61 +0x01:  mov    %esp,%ebp
08aced63 +0x03:  sub    $0x18,%esp
08aced66 +0x06:  mov    %ebx,-0x8(%ebp)
08aced69 +0x09:  mov    0x8(%ebp),%ebx
08aced6c +0x0c:  mov    %esi,-0x4(%ebp)
08aced6f +0x0f:  movl   $&_ZTV13DNFLexWrapper+0x8,(%ebx)
08aced75 +0x15:  lea    0x18(%ebx),%esi
08aced78 +0x18:  movl   $0x0,0x4(%ebx)
08aced7f +0x1f:  movl   $0x0,0x10(%ebx)
08aced86 +0x26:  movl   $0x0,0x14(%ebx)
08aced8d +0x2d:  mov    %esi,(%esp)
08aced90 +0x30:  call   08acd3a0 <_ZN6DNFLexC1Ev>  ; DNFLex::DNFLex()
08aced95 +0x35:  lea    0x40bc(%ebx),%eax
08aced9b +0x3b:  mov    %eax,(%esp)
08aced9e +0x3e:  call   08ad07c0 <_ZN14CompiledDNFLexC1Ev>  ; CompiledDNFLex::CompiledDNFLex()
08aceda3 +0x43:  movl   $0x0,0x6108(%ebx)
08acedad +0x4d:  movl   $0x0,0x610c(%ebx)
08acedb7 +0x57:  mov    -0x8(%ebp),%ebx
08acedba +0x5a:  mov    -0x4(%ebp),%esi
08acedbd +0x5d:  mov    %ebp,%esp
08acedbf +0x5f:  pop    %ebp
08acedc0 +0x60:  ret
08acedc1 +0x61:  mov    %eax,%ebx
08acedc3 +0x63:  mov    %esi,(%esp)
08acedc6 +0x66:  call   08acd5f0 <_ZN6DNFLexD1Ev>  ; DNFLex::~DNFLex()
08acedcb +0x6b:  mov    %ebx,(%esp)
08acedce +0x6e:  call   08ae3750 <_Unwind_Resume>
08acedd3 +0x73:  nop
08acedd4 +0x74:  lea    0x0(%esi),%esi
08acedda +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// DNFLexWrapper::DNFLexWrapper @ 0x8aced60

/* DWARF original prototype: void DNFLexWrapper(DNFLexWrapper * this) */

void __thiscall DNFLexWrapper::DNFLexWrapper(DNFLexWrapper *this)

{
  this->_vptr_DNFLexWrapper = (_func_int_varargs **)&PTR__DNFLexWrapper_08e2ec30;
  this->lastToken_ = DNF_TOK_EOF;
  this->lastStringValue_ = (char *)0x0;
  this->lexType_ = LEX_TYPE_NORMAL;
  DNFLex::DNFLex(&this->dnfLex_);
                    /* try { // try from 08aced9e to 08aceda2 has its CatchHandler @ 08acedc1 */
  CompiledDNFLex::CompiledDNFLex(&this->compiledDnfLex_);
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
  return;
}
```
