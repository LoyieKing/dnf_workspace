# yyunput

`_ZN23__dnf_script__FlexLexer7yyunputEiPc`

`__dnf_script__FlexLexer::yyunput(int, char*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1b60  _ZN23__dnf_script__FlexLexer7yyunputEiPc
#           __dnf_script__FlexLexer::yyunput(int, char*)
# range [0x08ad1b60, 0x08ad1c39]
08ad1b60 +0x00:  push   %ebp
08ad1b61 +0x01:  mov    %esp,%ebp
08ad1b63 +0x03:  push   %edi
08ad1b64 +0x04:  push   %esi
08ad1b65 +0x05:  push   %ebx
08ad1b66 +0x06:  sub    $0x3c,%esp
08ad1b69 +0x09:  mov    0x8(%ebp),%ebx
08ad1b6c +0x0c:  movzbl 0x28(%ebx),%eax
08ad1b70 +0x10:  mov    0x30(%ebx),%edi
08ad1b73 +0x13:  mov    %al,(%edi)
08ad1b75 +0x15:  mov    0x40(%ebx),%eax
08ad1b78 +0x18:  mov    0x48(%ebx),%esi
08ad1b7b +0x1b:  mov    (%esi,%eax,4),%ecx
08ad1b7e +0x1e:  mov    0x4(%ecx),%eax
08ad1b81 +0x21:  mov    %eax,-0x1c(%ebp)
08ad1b84 +0x24:  add    $0x2,%eax
08ad1b87 +0x27:  cmp    %eax,%edi
08ad1b89 +0x29:  jae    08ad1bf5 <+0x95>
08ad1b8b +0x2b:  mov    0xc(%ecx),%edx
08ad1b8e +0x2e:  mov    -0x1c(%ebp),%eax
08ad1b91 +0x31:  mov    %edx,-0x20(%ebp)
08ad1b94 +0x34:  lea    0x2(%eax,%edx,1),%eax
08ad1b98 +0x38:  mov    -0x1c(%ebp),%edx
08ad1b9b +0x3b:  mov    %eax,-0x2c(%ebp)
08ad1b9e +0x3e:  mov    0x2c(%ebx),%eax
08ad1ba1 +0x41:  lea    0x2(%edx,%eax,1),%eax
08ad1ba5 +0x45:  cmp    %eax,%edx
08ad1ba7 +0x47:  jae    08ad1bd2 <+0x72>
08ad1ba9 +0x49:  mov    -0x2c(%ebp),%edx
08ad1bac +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08ad1bb0 +0x50:  sub    $0x1,%eax
08ad1bb3 +0x53:  sub    $0x1,%edx
08ad1bb6 +0x56:  movzbl (%eax),%ecx
08ad1bb9 +0x59:  mov    %cl,(%edx)
08ad1bbb +0x5b:  mov    0x40(%ebx),%ecx
08ad1bbe +0x5e:  mov    0x48(%ebx),%esi
08ad1bc1 +0x61:  mov    (%esi,%ecx,4),%ecx
08ad1bc4 +0x64:  cmp    %eax,0x4(%ecx)
08ad1bc7 +0x67:  jb     08ad1bb0 <+0x50>
08ad1bc9 +0x69:  mov    %edx,-0x2c(%ebp)
08ad1bcc +0x6c:  mov    0xc(%ecx),%edx
08ad1bcf +0x6f:  mov    %edx,-0x20(%ebp)
08ad1bd2 +0x72:  mov    -0x2c(%ebp),%edx
08ad1bd5 +0x75:  sub    %eax,%edx
08ad1bd7 +0x77:  mov    -0x20(%ebp),%eax
08ad1bda +0x7a:  add    %edx,%edi
08ad1bdc +0x7c:  add    %edx,0x10(%ebp)
08ad1bdf +0x7f:  mov    %eax,0x2c(%ebx)
08ad1be2 +0x82:  mov    %eax,0x10(%ecx)
08ad1be5 +0x85:  mov    0x40(%ebx),%eax
08ad1be8 +0x88:  mov    (%esi,%eax,4),%eax
08ad1beb +0x8b:  mov    0x4(%eax),%eax
08ad1bee +0x8e:  add    $0x2,%eax
08ad1bf1 +0x91:  cmp    %eax,%edi
08ad1bf3 +0x93:  jb     08ad1c20 <+0xc0>
08ad1bf5 +0x95:  movzbl 0xc(%ebp),%edx
08ad1bf9 +0x99:  lea    -0x1(%edi),%eax
08ad1bfc +0x9c:  mov    %dl,-0x1(%edi)
08ad1bff +0x9f:  cmpl   $0xa,0xc(%ebp)
08ad1c03 +0xa3:  jne    08ad1c09 <+0xa9>
08ad1c05 +0xa5:  subl   $0x1,0xc(%ebx)
08ad1c09 +0xa9:  mov    0x10(%ebp),%edx
08ad1c0c +0xac:  mov    %edx,0x4(%ebx)
08ad1c0f +0xaf:  movzbl (%eax),%edx
08ad1c12 +0xb2:  mov    %eax,0x30(%ebx)
08ad1c15 +0xb5:  mov    %dl,0x28(%ebx)
08ad1c18 +0xb8:  add    $0x3c,%esp
08ad1c1b +0xbb:  pop    %ebx
08ad1c1c +0xbc:  pop    %esi
08ad1c1d +0xbd:  pop    %edi
08ad1c1e +0xbe:  pop    %ebp
08ad1c1f +0xbf:  ret
08ad1c20 +0xc0:  mov    (%ebx),%eax
08ad1c22 +0xc2:  movl   $"flex scanner push-back overflow",0x4(%esp)
08ad1c2a +0xca:  mov    %ebx,(%esp)
08ad1c2d +0xcd:  call   *0x2c(%eax)
08ad1c30 +0xd0:  jmp    08ad1bf5 <+0x95>
08ad1c32 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
08ad1c39 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yyunput @ 0x8ad1b60

/* DWARF original prototype: void yyunput(__dnf_script__FlexLexer * this, int c, char * yy_bp) */

void __thiscall __dnf_script__FlexLexer::yyunput(__dnf_script__FlexLexer *this,int c,char *yy_bp)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  yy_buffer_state *pyVar5;
  yy_buffer_state **ppyVar6;
  char *pcVar7;
  char *local_30;
  yy_size_t local_24;
  
                    /* Unresolved local var: char * yy_cp@[???] */
  pcVar7 = this->yy_c_buf_p;
  *pcVar7 = this->yy_hold_char;
  ppyVar6 = this->yy_buffer_stack;
  pyVar5 = ppyVar6[this->yy_buffer_stack_top];
  pcVar3 = pyVar5->yy_ch_buf;
  if (pcVar7 < pcVar3 + 2) {
                    /* Unresolved local var: int number_to_move@[???]
                       Unresolved local var: char * dest@[???]
                       Unresolved local var: char * source@[???] */
    local_24 = pyVar5->yy_buf_size;
    local_30 = pcVar3 + local_24 + 2;
    pcVar4 = pcVar3 + this->yy_n_chars + 2;
    if (pcVar3 < pcVar4) {
      do {
        pcVar4 = pcVar4 + -1;
        local_30 = local_30 + -1;
        *local_30 = *pcVar4;
        ppyVar6 = this->yy_buffer_stack;
        pyVar5 = ppyVar6[this->yy_buffer_stack_top];
      } while (pyVar5->yy_ch_buf < pcVar4);
      local_24 = pyVar5->yy_buf_size;
    }
    pcVar7 = pcVar7 + ((int)local_30 - (int)pcVar4);
    yy_bp = yy_bp + ((int)local_30 - (int)pcVar4);
    this->yy_n_chars = local_24;
    pyVar5->yy_n_chars = local_24;
    if (pcVar7 < ppyVar6[this->yy_buffer_stack_top]->yy_ch_buf + 2) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"flex scanner push-back overflow");
    }
  }
  pcVar7[-1] = (char)c;
  if (c == 10) {
    piVar1 = &(this->super_FlexLexer).yylineno;
    *piVar1 = *piVar1 + -1;
  }
  (this->super_FlexLexer).yytext = yy_bp;
  cVar2 = pcVar7[-1];
  this->yy_c_buf_p = pcVar7 + -1;
  this->yy_hold_char = cVar2;
  return;
}
```
