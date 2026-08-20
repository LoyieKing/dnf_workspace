# ~__dnf_script__FlexLexer

`_ZN23__dnf_script__FlexLexerD1Ev`

`__dnf_script__FlexLexer::~__dnf_script__FlexLexer()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad27e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad27e0  _ZN23__dnf_script__FlexLexerD1Ev
#           __dnf_script__FlexLexer::~__dnf_script__FlexLexer()
# range [0x08ad27e0, 0x08ad283c]
08ad27e0 +0x00:  push   %ebp
08ad27e1 +0x01:  mov    %esp,%ebp
08ad27e3 +0x03:  push   %ebx
08ad27e4 +0x04:  sub    $0x14,%esp
08ad27e7 +0x07:  mov    0x8(%ebp),%ebx
08ad27ea +0x0a:  mov    0x54(%ebx),%eax
08ad27ed +0x0d:  movl   $&_ZTV23__dnf_script__FlexLexer+0x8,(%ebx)
08ad27f3 +0x13:  test   %eax,%eax
08ad27f5 +0x15:  je     08ad27ff <+0x1f>
08ad27f7 +0x17:  mov    %eax,(%esp)
08ad27fa +0x1a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad27ff +0x1f:  mov    0x1c(%ebx),%eax
08ad2802 +0x22:  mov    %eax,(%esp)
08ad2805 +0x25:  call   0807ddb0 <_init+0x6a8>
08ad280a +0x2a:  mov    0x48(%ebx),%edx
08ad280d +0x2d:  xor    %eax,%eax
08ad280f +0x2f:  test   %edx,%edx
08ad2811 +0x31:  je     08ad2819 <+0x39>
08ad2813 +0x33:  mov    0x40(%ebx),%eax
08ad2816 +0x36:  mov    (%edx,%eax,4),%eax
08ad2819 +0x39:  mov    %eax,0x4(%esp)
08ad281d +0x3d:  mov    %ebx,(%esp)
08ad2820 +0x40:  call   08ad1e30 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state>  ; __dnf_script__FlexLexer::yy_delete_buffer(yy_buffer_state*)
08ad2825 +0x45:  mov    0x48(%ebx),%eax
08ad2828 +0x48:  mov    %eax,(%esp)
08ad282b +0x4b:  call   0807ddb0 <_init+0x6a8>
08ad2830 +0x50:  movl   $&_ZTV9FlexLexer+0x8,(%ebx)
08ad2836 +0x56:  add    $0x14,%esp
08ad2839 +0x59:  pop    %ebx
08ad283a +0x5a:  pop    %ebp
08ad283b +0x5b:  ret
08ad283c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::~__dnf_script__FlexLexer @ 0x8ad27e0

/* DWARF original prototype: void ~__dnf_script__FlexLexer(__dnf_script__FlexLexer * this, int
   __in_chrg) */

void __thiscall
__dnf_script__FlexLexer::~__dnf_script__FlexLexer(__dnf_script__FlexLexer *this,int __in_chrg)

{
  yy_state_type *pyVar1;
  YY_BUFFER_STATE b;
  
  pyVar1 = this->yy_state_buf;
  (this->super_FlexLexer)._vptr_FlexLexer =
       (_func_int_varargs **)&PTR____dnf_script__FlexLexer_08e31568;
  if (pyVar1 != (yy_state_type *)0x0) {
    operator_delete__(pyVar1);
  }
  free(this->yy_start_stack);
  b = (YY_BUFFER_STATE)0x0;
  if (this->yy_buffer_stack != (yy_buffer_state **)0x0) {
    b = this->yy_buffer_stack[this->yy_buffer_stack_top];
  }
  yy_delete_buffer(this,b);
  free(this->yy_buffer_stack);
  (this->super_FlexLexer)._vptr_FlexLexer = (_func_int_varargs **)&PTR__FlexLexer_08b12368;
  return;
}
```
