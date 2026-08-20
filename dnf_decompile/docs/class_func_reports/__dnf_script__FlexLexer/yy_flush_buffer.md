# yy_flush_buffer

`_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state`

`__dnf_script__FlexLexer::yy_flush_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1c70  _ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state
#           __dnf_script__FlexLexer::yy_flush_buffer(yy_buffer_state*)
# range [0x08ad1c70, 0x08ad1cf9]
08ad1c70 +0x00:  push   %ebp
08ad1c71 +0x01:  mov    %esp,%ebp
08ad1c73 +0x03:  sub    $0x8,%esp
08ad1c76 +0x06:  mov    0xc(%ebp),%eax
08ad1c79 +0x09:  mov    %ebx,(%esp)
08ad1c7c +0x0c:  mov    0x8(%ebp),%edx
08ad1c7f +0x0f:  mov    %esi,0x4(%esp)
08ad1c83 +0x13:  test   %eax,%eax
08ad1c85 +0x15:  je     08ad1cbe <+0x4e>
08ad1c87 +0x17:  mov    0x4(%eax),%ecx
08ad1c8a +0x1a:  movl   $0x0,0x10(%eax)
08ad1c91 +0x21:  movb   $0x0,(%ecx)
08ad1c94 +0x24:  mov    0x4(%eax),%ecx
08ad1c97 +0x27:  movb   $0x0,0x1(%ecx)
08ad1c9b +0x2b:  mov    0x48(%edx),%ecx
08ad1c9e +0x2e:  mov    0x4(%eax),%ebx
08ad1ca1 +0x31:  movl   $0x1,0x1c(%eax)
08ad1ca8 +0x38:  movl   $0x0,0x2c(%eax)
08ad1caf +0x3f:  test   %ecx,%ecx
08ad1cb1 +0x41:  mov    %ebx,0x8(%eax)
08ad1cb4 +0x44:  je     08ad1cbe <+0x4e>
08ad1cb6 +0x46:  mov    0x40(%edx),%esi
08ad1cb9 +0x49:  cmp    (%ecx,%esi,4),%eax
08ad1cbc +0x4c:  je     08ad1cd0 <+0x60>
08ad1cbe +0x4e:  mov    (%esp),%ebx
08ad1cc1 +0x51:  mov    0x4(%esp),%esi
08ad1cc5 +0x55:  mov    %ebp,%esp
08ad1cc7 +0x57:  pop    %ebp
08ad1cc8 +0x58:  ret
08ad1cc9 +0x59:  lea    0x0(%esi,%eiz,1),%esi
08ad1cd0 +0x60:  mov    0x10(%eax),%ecx
08ad1cd3 +0x63:  mov    (%eax),%eax
08ad1cd5 +0x65:  mov    %ebx,0x30(%edx)
08ad1cd8 +0x68:  mov    %ebx,0x4(%edx)
08ad1cdb +0x6b:  mov    %ecx,0x2c(%edx)
08ad1cde +0x6e:  mov    %eax,0x20(%edx)
08ad1ce1 +0x71:  movzbl (%ebx),%eax
08ad1ce4 +0x74:  mov    %al,0x28(%edx)
08ad1ce7 +0x77:  mov    (%esp),%ebx
08ad1cea +0x7a:  mov    0x4(%esp),%esi
08ad1cee +0x7e:  mov    %ebp,%esp
08ad1cf0 +0x80:  pop    %ebp
08ad1cf1 +0x81:  ret
08ad1cf2 +0x82:  lea    0x0(%esi,%eiz,1),%esi
08ad1cf9 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_flush_buffer @ 0x8ad1c70

/* DWARF original prototype: void yy_flush_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE b)
    */

void __thiscall
__dnf_script__FlexLexer::yy_flush_buffer(__dnf_script__FlexLexer *this,YY_BUFFER_STATE b)

{
  yy_buffer_state **ppyVar1;
  char *pcVar2;
  int iVar3;
  istream *piVar4;
  
  if (b != (YY_BUFFER_STATE)0x0) {
    b->yy_n_chars = 0;
    *b->yy_ch_buf = '\0';
    b->yy_ch_buf[1] = '\0';
    ppyVar1 = this->yy_buffer_stack;
    pcVar2 = b->yy_ch_buf;
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    b->yy_buf_pos = pcVar2;
    if ((ppyVar1 != (yy_buffer_state **)0x0) && (b == ppyVar1[this->yy_buffer_stack_top])) {
      iVar3 = b->yy_n_chars;
      piVar4 = b->yy_input_file;
      this->yy_c_buf_p = pcVar2;
      (this->super_FlexLexer).yytext = pcVar2;
      this->yy_n_chars = iVar3;
      this->yyin = piVar4;
      this->yy_hold_char = *pcVar2;
      return;
    }
  }
  return;
}
```
