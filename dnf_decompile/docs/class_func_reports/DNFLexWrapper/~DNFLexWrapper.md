# ~DNFLexWrapper

`_ZN13DNFLexWrapperD1Ev`

`DNFLexWrapper::~DNFLexWrapper()`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08acecf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acecf0  _ZN13DNFLexWrapperD1Ev
#           DNFLexWrapper::~DNFLexWrapper()
# range [0x08acecf0, 0x08aced39]
08acecf0 +0x00:  push   %ebp
08acecf1 +0x01:  mov    %esp,%ebp
08acecf3 +0x03:  push   %ebx
08acecf4 +0x04:  sub    $0x24,%esp
08acecf7 +0x07:  mov    0x8(%ebp),%ebx
08acecfa +0x0a:  movl   $&_ZTV13DNFLexWrapper+0x8,(%ebx)
08aced00 +0x10:  lea    0x40bc(%ebx),%eax
08aced06 +0x16:  mov    %eax,(%esp)
08aced09 +0x19:  call   08ad0ed0 <_ZN14CompiledDNFLexD1Ev>  ; CompiledDNFLex::~CompiledDNFLex()
08aced0e +0x1e:  add    $0x18,%ebx
08aced11 +0x21:  mov    %ebx,0x8(%ebp)
08aced14 +0x24:  add    $0x24,%esp
08aced17 +0x27:  pop    %ebx
08aced18 +0x28:  pop    %ebp
08aced19 +0x29:  jmp    08acd5f0 <_ZN6DNFLexD1Ev>  ; DNFLex::~DNFLex()
08aced1e +0x2e:  add    $0x18,%ebx
08aced21 +0x31:  mov    %eax,-0xc(%ebp)
08aced24 +0x34:  mov    %ebx,(%esp)
08aced27 +0x37:  call   08acd5f0 <_ZN6DNFLexD1Ev>  ; DNFLex::~DNFLex()
08aced2c +0x3c:  mov    -0xc(%ebp),%eax
08aced2f +0x3f:  mov    %eax,(%esp)
08aced32 +0x42:  call   08ae3750 <_Unwind_Resume>
08aced37 +0x47:  nop
08aced38 +0x48:  nop
08aced39 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::~DNFLexWrapper @ 0x8acecf0

/* DWARF original prototype: void ~DNFLexWrapper(DNFLexWrapper * this, int __in_chrg) */

void __thiscall DNFLexWrapper::~DNFLexWrapper(DNFLexWrapper *this,int __in_chrg)

{
  int in_stack_ffffffd8;
  
  this->_vptr_DNFLexWrapper = (_func_int_varargs **)&PTR__DNFLexWrapper_08e2ec30;
                    /* try { // try from 08aced09 to 08aced0d has its CatchHandler @ 08aced1e */
  CompiledDNFLex::~CompiledDNFLex(&this->compiledDnfLex_,in_stack_ffffffd8);
  DNFLex::~DNFLex(&this->dnfLex_,__in_chrg);
  return;
}
```
