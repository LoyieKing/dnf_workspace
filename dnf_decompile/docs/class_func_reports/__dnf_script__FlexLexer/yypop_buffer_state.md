# yypop_buffer_state

`_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv`

`__dnf_script__FlexLexer::yypop_buffer_state()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1d00  _ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv
#           __dnf_script__FlexLexer::yypop_buffer_state()
# range [0x08ad1d00, 0x08ad1d79]
08ad1d00 +0x00:  push   %ebp
08ad1d01 +0x01:  mov    %esp,%ebp
08ad1d03 +0x03:  push   %ebx
08ad1d04 +0x04:  sub    $0x14,%esp
08ad1d07 +0x07:  mov    0x8(%ebp),%ebx
08ad1d0a +0x0a:  mov    0x48(%ebx),%eax
08ad1d0d +0x0d:  test   %eax,%eax
08ad1d0f +0x0f:  je     08ad1d67 <+0x67>
08ad1d11 +0x11:  mov    0x40(%ebx),%edx
08ad1d14 +0x14:  mov    (%eax,%edx,4),%eax
08ad1d17 +0x17:  test   %eax,%eax
08ad1d19 +0x19:  je     08ad1d67 <+0x67>
08ad1d1b +0x1b:  mov    (%ebx),%edx
08ad1d1d +0x1d:  mov    %eax,0x4(%esp)
08ad1d21 +0x21:  mov    %ebx,(%esp)
08ad1d24 +0x24:  call   *0x10(%edx)
08ad1d27 +0x27:  mov    0x40(%ebx),%edx
08ad1d2a +0x2a:  mov    0x48(%ebx),%eax
08ad1d2d +0x2d:  test   %edx,%edx
08ad1d2f +0x2f:  movl   $0x0,(%eax,%edx,4)
08ad1d36 +0x36:  jne    08ad1d70 <+0x70>
08ad1d38 +0x38:  test   %eax,%eax
08ad1d3a +0x3a:  je     08ad1d67 <+0x67>
08ad1d3c +0x3c:  mov    0x40(%ebx),%edx
08ad1d3f +0x3f:  mov    (%eax,%edx,4),%eax
08ad1d42 +0x42:  test   %eax,%eax
08ad1d44 +0x44:  je     08ad1d67 <+0x67>
08ad1d46 +0x46:  mov    0x10(%eax),%edx
08ad1d49 +0x49:  mov    %edx,0x2c(%ebx)
08ad1d4c +0x4c:  mov    0x8(%eax),%edx
08ad1d4f +0x4f:  mov    (%eax),%eax
08ad1d51 +0x51:  mov    %edx,0x30(%ebx)
08ad1d54 +0x54:  mov    %edx,0x4(%ebx)
08ad1d57 +0x57:  mov    %eax,0x20(%ebx)
08ad1d5a +0x5a:  movzbl (%edx),%eax
08ad1d5d +0x5d:  movl   $0x1,0x3c(%ebx)
08ad1d64 +0x64:  mov    %al,0x28(%ebx)
08ad1d67 +0x67:  add    $0x14,%esp
08ad1d6a +0x6a:  pop    %ebx
08ad1d6b +0x6b:  pop    %ebp
08ad1d6c +0x6c:  ret
08ad1d6d +0x6d:  lea    0x0(%esi),%esi
08ad1d70 +0x70:  sub    $0x1,%edx
08ad1d73 +0x73:  mov    %edx,0x40(%ebx)
08ad1d76 +0x76:  jmp    08ad1d38 <+0x38>
08ad1d78 +0x78:  nop
08ad1d79 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yypop_buffer_state @ 0x8ad1d00

/* DWARF original prototype: void yypop_buffer_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yypop_buffer_state(__dnf_script__FlexLexer *this)

{
  char cVar1;
  yy_buffer_state *pyVar2;
  size_t sVar3;
  yy_buffer_state **ppyVar4;
  char *pcVar5;
  istream *piVar6;
  
  if ((this->yy_buffer_stack != (yy_buffer_state **)0x0) &&
     (pyVar2 = this->yy_buffer_stack[this->yy_buffer_stack_top], pyVar2 != (yy_buffer_state *)0x0))
  {
    (*(this->super_FlexLexer)._vptr_FlexLexer[4])(this,pyVar2);
    sVar3 = this->yy_buffer_stack_top;
    ppyVar4 = this->yy_buffer_stack;
    ppyVar4[sVar3] = (yy_buffer_state *)0x0;
    if (sVar3 != 0) {
      this->yy_buffer_stack_top = sVar3 - 1;
    }
    if ((ppyVar4 != (yy_buffer_state **)0x0) &&
       (pyVar2 = ppyVar4[this->yy_buffer_stack_top], pyVar2 != (yy_buffer_state *)0x0)) {
      this->yy_n_chars = pyVar2->yy_n_chars;
      pcVar5 = pyVar2->yy_buf_pos;
      piVar6 = pyVar2->yy_input_file;
      this->yy_c_buf_p = pcVar5;
      (this->super_FlexLexer).yytext = pcVar5;
      this->yyin = piVar6;
      cVar1 = *pcVar5;
      this->yy_did_buffer_switch_on_eof = 1;
      this->yy_hold_char = cVar1;
    }
  }
  return;
}
```
