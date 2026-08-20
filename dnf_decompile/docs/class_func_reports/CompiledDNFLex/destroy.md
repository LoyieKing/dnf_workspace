# destroy

`_ZN14CompiledDNFLex7destroyEv`

`CompiledDNFLex::destroy()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0370` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0370  _ZN14CompiledDNFLex7destroyEv
#           CompiledDNFLex::destroy()
# range [0x08ad0370, 0x08ad03c9]
08ad0370 +0x00:  push   %ebp
08ad0371 +0x01:  mov    %esp,%ebp
08ad0373 +0x03:  push   %ebx
08ad0374 +0x04:  sub    $0x14,%esp
08ad0377 +0x07:  mov    0x8(%ebp),%ebx
08ad037a +0x0a:  cmpb   $0x0,0xc(%ebx)
08ad037e +0x0e:  je     08ad03b8 <+0x48>
08ad0380 +0x10:  mov    0x10(%ebx),%eax
08ad0383 +0x13:  test   %eax,%eax
08ad0385 +0x15:  je     08ad0396 <+0x26>
08ad0387 +0x17:  mov    (%eax),%edx
08ad0389 +0x19:  mov    %eax,(%esp)
08ad038c +0x1c:  call   *0x4(%edx)
08ad038f +0x1f:  movl   $0x0,0x10(%ebx)
08ad0396 +0x26:  movb   $0x0,0xc(%ebx)
08ad039a +0x2a:  mov    0x14(%ebx),%eax
08ad039d +0x2d:  test   %eax,%eax
08ad039f +0x2f:  je     08ad03b0 <+0x40>
08ad03a1 +0x31:  mov    %eax,(%esp)
08ad03a4 +0x34:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad03a9 +0x39:  movl   $0x0,0x14(%ebx)
08ad03b0 +0x40:  add    $0x14,%esp
08ad03b3 +0x43:  pop    %ebx
08ad03b4 +0x44:  pop    %ebp
08ad03b5 +0x45:  ret
08ad03b6 +0x46:  xchg   %ax,%ax
08ad03b8 +0x48:  movl   $0x0,0x10(%ebx)
08ad03bf +0x4f:  jmp    08ad039a <+0x2a>
08ad03c1 +0x51:  nop
08ad03c2 +0x52:  lea    0x0(%esi,%eiz,1),%esi
08ad03c9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::destroy @ 0x8ad0370

/* DWARF original prototype: void destroy(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::destroy(CompiledDNFLex *this)

{
  ScriptStringManager *pSVar1;
  
  if (this->stringManagerDelete_ == false) {
    this->stringManager_ = (ScriptStringManager *)0x0;
  }
  else {
    pSVar1 = this->stringManager_;
    if (pSVar1 != (ScriptStringManager *)0x0) {
      (*pSVar1->_vptr_ScriptStringManager[1])(pSVar1);
      this->stringManager_ = (ScriptStringManager *)0x0;
    }
    this->stringManagerDelete_ = false;
  }
  if (this->stringBuffer_ != (char *)0x0) {
    operator_delete__(this->stringBuffer_);
    this->stringBuffer_ = (char *)0x0;
  }
  return;
}
```
