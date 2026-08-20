# ~CompiledDNFLex

`_ZN14CompiledDNFLexD1Ev`

`CompiledDNFLex::~CompiledDNFLex()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0ed0  _ZN14CompiledDNFLexD1Ev
#           CompiledDNFLex::~CompiledDNFLex()
# range [0x08ad0ed0, 0x08ad0f1f]
08ad0ed0 +0x00:  push   %ebp
08ad0ed1 +0x01:  mov    %esp,%ebp
08ad0ed3 +0x03:  push   %ebx
08ad0ed4 +0x04:  sub    $0x24,%esp
08ad0ed7 +0x07:  mov    0x8(%ebp),%ebx
08ad0eda +0x0a:  movl   $&_ZTV14CompiledDNFLex+0x8,(%ebx)
08ad0ee0 +0x10:  mov    %ebx,(%esp)
08ad0ee3 +0x13:  call   08ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>  ; CompiledDNFLex::CloseInputStream()
08ad0ee8 +0x18:  mov    %ebx,(%esp)
08ad0eeb +0x1b:  call   08ad0370 <_ZN14CompiledDNFLex7destroyEv>  ; CompiledDNFLex::destroy()
08ad0ef0 +0x20:  add    $0x2018,%ebx
08ad0ef6 +0x26:  mov    %ebx,0x8(%ebp)
08ad0ef9 +0x29:  add    $0x24,%esp
08ad0efc +0x2c:  pop    %ebx
08ad0efd +0x2d:  pop    %ebp
08ad0efe +0x2e:  jmp    08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad0f03 +0x33:  add    $0x2018,%ebx
08ad0f09 +0x39:  mov    %eax,-0xc(%ebp)
08ad0f0c +0x3c:  mov    %ebx,(%esp)
08ad0f0f +0x3f:  call   08ad15c0 <_ZN14CompiledDNFLex8getTokenEv+0x620>  ; CompiledDNFLex::getToken()+0x620
08ad0f14 +0x44:  mov    -0xc(%ebp),%eax
08ad0f17 +0x47:  mov    %eax,(%esp)
08ad0f1a +0x4a:  call   08ae3750 <_Unwind_Resume>
08ad0f1f +0x4f:  nop
```

## 反编译 C

```c
// CompiledDNFLex::~CompiledDNFLex @ 0x8ad0ed0

/* DWARF original prototype: void ~CompiledDNFLex(CompiledDNFLex * this, int __in_chrg) */

void __thiscall CompiledDNFLex::~CompiledDNFLex(CompiledDNFLex *this,int __in_chrg)

{
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  CloseInputStream(this);
                    /* try { // try from 08ad0eeb to 08ad0eef has its CatchHandler @ 08ad0f03 */
  destroy(this);
  std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::~deque
            (&(this->stream_stack_).c,__in_chrg);
  return;
}
```
