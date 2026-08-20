# yy_switch_to_buffer

`_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state`

`__dnf_script__FlexLexer::yy_switch_to_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2500  _ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state
#           __dnf_script__FlexLexer::yy_switch_to_buffer(yy_buffer_state*)
# range [0x08ad2500, 0x08ad259c]
08ad2500 +0x00:  push   %ebp
08ad2501 +0x01:  mov    %esp,%ebp
08ad2503 +0x03:  push   %esi
08ad2504 +0x04:  push   %ebx
08ad2505 +0x05:  sub    $0x10,%esp
08ad2508 +0x08:  mov    0x8(%ebp),%ebx
08ad250b +0x0b:  mov    0xc(%ebp),%esi
08ad250e +0x0e:  mov    %ebx,(%esp)
08ad2511 +0x11:  call   08ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>  ; __dnf_script__FlexLexer::yyensure_buffer_stack()
08ad2516 +0x16:  mov    0x48(%ebx),%eax
08ad2519 +0x19:  xor    %edx,%edx
08ad251b +0x1b:  test   %eax,%eax
08ad251d +0x1d:  je     08ad2525 <+0x25>
08ad251f +0x1f:  mov    0x40(%ebx),%edx
08ad2522 +0x22:  mov    (%eax,%edx,4),%edx
08ad2525 +0x25:  cmp    %esi,%edx
08ad2527 +0x27:  je     08ad2588 <+0x88>
08ad2529 +0x29:  test   %eax,%eax
08ad252b +0x2b:  je     08ad2590 <+0x90>
08ad252d +0x2d:  mov    0x40(%ebx),%ecx
08ad2530 +0x30:  lea    (%eax,%ecx,4),%edx
08ad2533 +0x33:  cmpl   $0x0,(%edx)
08ad2536 +0x36:  je     08ad2562 <+0x62>
08ad2538 +0x38:  movzbl 0x28(%ebx),%edx
08ad253c +0x3c:  mov    0x30(%ebx),%eax
08ad253f +0x3f:  mov    %dl,(%eax)
08ad2541 +0x41:  mov    0x40(%ebx),%edx
08ad2544 +0x44:  mov    0x48(%ebx),%eax
08ad2547 +0x47:  mov    0x30(%ebx),%ecx
08ad254a +0x4a:  mov    (%eax,%edx,4),%edx
08ad254d +0x4d:  mov    %ecx,0x8(%edx)
08ad2550 +0x50:  mov    0x2c(%ebx),%ecx
08ad2553 +0x53:  mov    %ecx,0x10(%edx)
08ad2556 +0x56:  mov    0x40(%ebx),%ecx
08ad2559 +0x59:  lea    0x0(,%ecx,4),%edx
08ad2560 +0x60:  add    %eax,%edx
08ad2562 +0x62:  mov    %esi,(%edx)
08ad2564 +0x64:  mov    (%eax,%ecx,4),%edx
08ad2567 +0x67:  mov    0x10(%edx),%eax
08ad256a +0x6a:  mov    %eax,0x2c(%ebx)
08ad256d +0x6d:  mov    0x8(%edx),%eax
08ad2570 +0x70:  mov    (%edx),%edx
08ad2572 +0x72:  mov    %eax,0x30(%ebx)
08ad2575 +0x75:  mov    %eax,0x4(%ebx)
08ad2578 +0x78:  mov    %edx,0x20(%ebx)
08ad257b +0x7b:  movzbl (%eax),%eax
08ad257e +0x7e:  movl   $0x1,0x3c(%ebx)
08ad2585 +0x85:  mov    %al,0x28(%ebx)
08ad2588 +0x88:  add    $0x10,%esp
08ad258b +0x8b:  pop    %ebx
08ad258c +0x8c:  pop    %esi
08ad258d +0x8d:  pop    %ebp
08ad258e +0x8e:  ret
08ad258f +0x8f:  nop
08ad2590 +0x90:  mov    0x40(%ebx),%ecx
08ad2593 +0x93:  lea    0x0(,%ecx,4),%edx
08ad259a +0x9a:  jmp    08ad2562 <+0x62>
08ad259c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_switch_to_buffer @ 0x8ad2500

/* DWARF original prototype: void yy_switch_to_buffer(__dnf_script__FlexLexer * this,
   YY_BUFFER_STATE new_buffer) */

void __thiscall
__dnf_script__FlexLexer::yy_switch_to_buffer
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE new_buffer)

{
  char cVar1;
  char *pcVar2;
  istream *piVar3;
  yy_buffer_state **ppyVar4;
  size_t sVar5;
  yy_buffer_state *pyVar6;
  yy_buffer_state **ppyVar7;
  
  yyensure_buffer_stack(this);
  ppyVar4 = this->yy_buffer_stack;
  pyVar6 = (yy_buffer_state *)0x0;
  if (ppyVar4 != (yy_buffer_state **)0x0) {
    pyVar6 = ppyVar4[this->yy_buffer_stack_top];
  }
  if (pyVar6 != new_buffer) {
    if (ppyVar4 == (yy_buffer_state **)0x0) {
      sVar5 = this->yy_buffer_stack_top;
      ppyVar7 = (yy_buffer_state **)(sVar5 * 4);
    }
    else {
      sVar5 = this->yy_buffer_stack_top;
      ppyVar7 = ppyVar4 + sVar5;
      if (*ppyVar7 != (yy_buffer_state *)0x0) {
        *this->yy_c_buf_p = this->yy_hold_char;
        ppyVar4 = this->yy_buffer_stack;
        pyVar6 = ppyVar4[this->yy_buffer_stack_top];
        pyVar6->yy_buf_pos = this->yy_c_buf_p;
        pyVar6->yy_n_chars = this->yy_n_chars;
        sVar5 = this->yy_buffer_stack_top;
        ppyVar7 = ppyVar4 + sVar5;
      }
    }
    *ppyVar7 = new_buffer;
    pyVar6 = ppyVar4[sVar5];
    this->yy_n_chars = pyVar6->yy_n_chars;
    pcVar2 = pyVar6->yy_buf_pos;
    piVar3 = pyVar6->yy_input_file;
    this->yy_c_buf_p = pcVar2;
    (this->super_FlexLexer).yytext = pcVar2;
    this->yyin = piVar3;
    cVar1 = *pcVar2;
    this->yy_did_buffer_switch_on_eof = 1;
    this->yy_hold_char = cVar1;
  }
  return;
}
```
