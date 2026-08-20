# yyrestart

`_ZN23__dnf_script__FlexLexer9yyrestartEPSi`

`__dnf_script__FlexLexer::yyrestart(std::basic_istream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad26c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad26c0  _ZN23__dnf_script__FlexLexer9yyrestartEPSi
#           __dnf_script__FlexLexer::yyrestart(std::basic_istream<char, std::char_traits<char> >*)
# range [0x08ad26c0, 0x08ad275c]
08ad26c0 +0x00:  push   %ebp
08ad26c1 +0x01:  mov    %esp,%ebp
08ad26c3 +0x03:  push   %esi
08ad26c4 +0x04:  push   %ebx
08ad26c5 +0x05:  sub    $0x10,%esp
08ad26c8 +0x08:  mov    0x8(%ebp),%ebx
08ad26cb +0x0b:  mov    0x48(%ebx),%eax
08ad26ce +0x0e:  test   %eax,%eax
08ad26d0 +0x10:  je     08ad2720 <+0x60>
08ad26d2 +0x12:  mov    0x40(%ebx),%edx
08ad26d5 +0x15:  mov    (%eax,%edx,4),%eax
08ad26d8 +0x18:  test   %eax,%eax
08ad26da +0x1a:  je     08ad2720 <+0x60>
08ad26dc +0x1c:  mov    0xc(%ebp),%edx
08ad26df +0x1f:  mov    %eax,0x4(%esp)
08ad26e3 +0x23:  mov    %ebx,(%esp)
08ad26e6 +0x26:  mov    %edx,0x8(%esp)
08ad26ea +0x2a:  call   08ad25a0 <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>  ; __dnf_script__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
08ad26ef +0x2f:  mov    0x48(%ebx),%eax
08ad26f2 +0x32:  mov    0x40(%ebx),%edx
08ad26f5 +0x35:  mov    (%eax,%edx,4),%edx
08ad26f8 +0x38:  mov    0x10(%edx),%eax
08ad26fb +0x3b:  mov    %eax,0x2c(%ebx)
08ad26fe +0x3e:  mov    0x8(%edx),%eax
08ad2701 +0x41:  mov    (%edx),%edx
08ad2703 +0x43:  mov    %eax,0x30(%ebx)
08ad2706 +0x46:  mov    %eax,0x4(%ebx)
08ad2709 +0x49:  mov    %edx,0x20(%ebx)
08ad270c +0x4c:  movzbl (%eax),%eax
08ad270f +0x4f:  mov    %al,0x28(%ebx)
08ad2712 +0x52:  add    $0x10,%esp
08ad2715 +0x55:  pop    %ebx
08ad2716 +0x56:  pop    %esi
08ad2717 +0x57:  pop    %ebp
08ad2718 +0x58:  ret
08ad2719 +0x59:  lea    0x0(%esi,%eiz,1),%esi
08ad2720 +0x60:  mov    %ebx,(%esp)
08ad2723 +0x63:  call   08ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>  ; __dnf_script__FlexLexer::yyensure_buffer_stack()
08ad2728 +0x68:  mov    0x40(%ebx),%esi
08ad272b +0x6b:  mov    (%ebx),%eax
08ad272d +0x6d:  shl    $0x2,%esi
08ad2730 +0x70:  add    0x48(%ebx),%esi
08ad2733 +0x73:  movl   $0x4000,0x8(%esp)
08ad273b +0x7b:  mov    0x20(%ebx),%edx
08ad273e +0x7e:  mov    %ebx,(%esp)
08ad2741 +0x81:  mov    %edx,0x4(%esp)
08ad2745 +0x85:  call   *0xc(%eax)
08ad2748 +0x88:  mov    0x48(%ebx),%edx
08ad274b +0x8b:  mov    %eax,(%esi)
08ad274d +0x8d:  xor    %eax,%eax
08ad274f +0x8f:  test   %edx,%edx
08ad2751 +0x91:  je     08ad26dc <+0x1c>
08ad2753 +0x93:  mov    0x40(%ebx),%eax
08ad2756 +0x96:  mov    (%edx,%eax,4),%eax
08ad2759 +0x99:  jmp    08ad26dc <+0x1c>
08ad275b +0x9b:  nop
08ad275c +0x9c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yyrestart @ 0x8ad26c0

/* DWARF original prototype: void yyrestart(__dnf_script__FlexLexer * this, istream * input_file) */

void __thiscall
__dnf_script__FlexLexer::yyrestart(__dnf_script__FlexLexer *this,istream *input_file)

{
  char *pcVar1;
  istream *piVar2;
  size_t sVar3;
  yy_buffer_state **ppyVar4;
  yy_buffer_state **ppyVar5;
  yy_buffer_state *pyVar6;
  YY_BUFFER_STATE b;
  
  if ((this->yy_buffer_stack == (yy_buffer_state **)0x0) ||
     (b = this->yy_buffer_stack[this->yy_buffer_stack_top], b == (YY_BUFFER_STATE)0x0)) {
    yyensure_buffer_stack(this);
    sVar3 = this->yy_buffer_stack_top;
    ppyVar4 = this->yy_buffer_stack;
    pyVar6 = (yy_buffer_state *)
             (*(this->super_FlexLexer)._vptr_FlexLexer[3])(this,this->yyin,0x4000);
    ppyVar5 = this->yy_buffer_stack;
    ppyVar4[sVar3] = pyVar6;
    b = (YY_BUFFER_STATE)0x0;
    if (ppyVar5 != (yy_buffer_state **)0x0) {
      b = ppyVar5[this->yy_buffer_stack_top];
    }
  }
  yy_init_buffer(this,b,input_file);
  pyVar6 = this->yy_buffer_stack[this->yy_buffer_stack_top];
  this->yy_n_chars = pyVar6->yy_n_chars;
  pcVar1 = pyVar6->yy_buf_pos;
  piVar2 = pyVar6->yy_input_file;
  this->yy_c_buf_p = pcVar1;
  (this->super_FlexLexer).yytext = pcVar1;
  this->yyin = piVar2;
  this->yy_hold_char = *pcVar1;
  return;
}
```
