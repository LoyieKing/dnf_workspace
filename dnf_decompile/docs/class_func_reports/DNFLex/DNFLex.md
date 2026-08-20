# DNFLex

`_ZN6DNFLexC1Ev`

`DNFLex::DNFLex()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd3a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd3a0  _ZN6DNFLexC1Ev
#           DNFLex::DNFLex()
# range [0x08acd3a0, 0x08acd44e]
08acd3a0 +0x00:  push   %ebp
08acd3a1 +0x01:  mov    %esp,%ebp
08acd3a3 +0x03:  push   %edi
08acd3a4 +0x04:  push   %ebx
08acd3a5 +0x05:  sub    $0x10,%esp
08acd3a8 +0x08:  mov    0x8(%ebp),%ebx
08acd3ab +0x0b:  movl   $0x0,0x8(%esp)
08acd3b3 +0x13:  movl   $0x0,0x4(%esp)
08acd3bb +0x1b:  mov    %ebx,(%esp)
08acd3be +0x1e:  call   08ad1940 <_ZN23__dnf_script__FlexLexerC1EPSiPSo>  ; __dnf_script__FlexLexer::__dnf_script__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
08acd3c3 +0x23:  lea    0x8c(%ebx),%edx
08acd3c9 +0x29:  xor    %eax,%eax
08acd3cb +0x2b:  mov    $0x800,%ecx
08acd3d0 +0x30:  mov    %edx,%edi
08acd3d2 +0x32:  rep stos %eax,%es:(%edi)
08acd3d4 +0x34:  movl   $&_ZTV6DNFLex+0x8,(%ebx)
08acd3da +0x3a:  movl   $0x0,0x80(%ebx)
08acd3e4 +0x44:  movl   $0x0,0x84(%ebx)
08acd3ee +0x4e:  movl   $0x0,0x88(%ebx)
08acd3f8 +0x58:  movl   $0x0,0x408c(%ebx)
08acd402 +0x62:  movb   $0x0,0x4090(%ebx)
08acd409 +0x69:  mov    $0x800,%cx
08acd40d +0x6d:  movb   $0x1,0x4091(%ebx)
08acd414 +0x74:  movl   $0x0,0x4094(%ebx)
08acd41e +0x7e:  movl   $0x0,0x4098(%ebx)
08acd428 +0x88:  movl   $0x0,0x409c(%ebx)
08acd432 +0x92:  movl   $0x0,0x40a0(%ebx)
08acd43c +0x9c:  add    $0x208c,%ebx
08acd442 +0xa2:  mov    %ebx,%edi
08acd444 +0xa4:  rep stos %eax,%es:(%edi)
08acd446 +0xa6:  add    $0x10,%esp
08acd449 +0xa9:  pop    %ebx
08acd44a +0xaa:  pop    %edi
08acd44b +0xab:  pop    %ebp
08acd44c +0xac:  ret
08acd44d +0xad:  nop
08acd44e +0xae:  xchg   %ax,%ax
```

## 反编译 C

```c
// DNFLex::DNFLex @ 0x8acd3a0

/* DWARF original prototype: void DNFLex(DNFLex * this) */

void __thiscall DNFLex::DNFLex(DNFLex *this)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  __dnf_script__FlexLexer::__dnf_script__FlexLexer
            (&this->super___dnf_script__FlexLexer,(istream *)0x0,(ostream *)0x0);
  pcVar2 = this->ERR_BUF;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer =
       (_func_int_varargs **)&PTR__DNFLex_08e2eba8;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_start = (stream_t *)0x0;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_finish = (stream_t *)0x0;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_end_of_storage = (stream_t *)0x0;
  this->m_str_tok_pos = (char *)0x0;
  this->is_dbcs_ = false;
  this->allow_inclusion_ = true;
  this->IsDbcsLeadChar_ = (TIsDbcsLeadChar)0x0;
  this->LexerOutput_ = (TLexerOutput)0x0;
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
  pcVar2 = this->STR_TOK_BUF;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  return;
}
```
