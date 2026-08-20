# switch_streams

`_ZN23__dnf_script__FlexLexer14switch_streamsEPSiPSo`

`__dnf_script__FlexLexer::switch_streams(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1a00  _ZN23__dnf_script__FlexLexer14switch_streamsEPSiPSo
#           __dnf_script__FlexLexer::switch_streams(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
# range [0x08ad1a00, 0x08ad1a7a]
08ad1a00 +0x00:  push   %ebp
08ad1a01 +0x01:  mov    %esp,%ebp
08ad1a03 +0x03:  sub    $0x38,%esp
08ad1a06 +0x06:  mov    0xc(%ebp),%eax
08ad1a09 +0x09:  mov    %ebx,-0xc(%ebp)
08ad1a0c +0x0c:  mov    0x8(%ebp),%ebx
08ad1a0f +0x0f:  mov    %esi,-0x8(%ebp)
08ad1a12 +0x12:  mov    0x10(%ebp),%esi
08ad1a15 +0x15:  mov    %edi,-0x4(%ebp)
08ad1a18 +0x18:  test   %eax,%eax
08ad1a1a +0x1a:  je     08ad1a5f <+0x5f>
08ad1a1c +0x1c:  mov    (%ebx),%edx
08ad1a1e +0x1e:  mov    0x48(%ebx),%ecx
08ad1a21 +0x21:  mov    0x10(%edx),%edi
08ad1a24 +0x24:  xor    %edx,%edx
08ad1a26 +0x26:  test   %ecx,%ecx
08ad1a28 +0x28:  je     08ad1a30 <+0x30>
08ad1a2a +0x2a:  mov    0x40(%ebx),%edx
08ad1a2d +0x2d:  mov    (%ecx,%edx,4),%edx
08ad1a30 +0x30:  mov    %edx,0x4(%esp)
08ad1a34 +0x34:  mov    %eax,-0x1c(%ebp)
08ad1a37 +0x37:  mov    %ebx,(%esp)
08ad1a3a +0x3a:  call   *%edi
08ad1a3c +0x3c:  mov    (%ebx),%edx
08ad1a3e +0x3e:  mov    -0x1c(%ebp),%eax
08ad1a41 +0x41:  mov    0x8(%edx),%edi
08ad1a44 +0x44:  movl   $0x4000,0x8(%esp)
08ad1a4c +0x4c:  mov    %eax,0x4(%esp)
08ad1a50 +0x50:  mov    %ebx,(%esp)
08ad1a53 +0x53:  call   *0xc(%edx)
08ad1a56 +0x56:  mov    %ebx,(%esp)
08ad1a59 +0x59:  mov    %eax,0x4(%esp)
08ad1a5d +0x5d:  call   *%edi
08ad1a5f +0x5f:  test   %esi,%esi
08ad1a61 +0x61:  je     08ad1a66 <+0x66>
08ad1a63 +0x63:  mov    %esi,0x24(%ebx)
08ad1a66 +0x66:  mov    -0xc(%ebp),%ebx
08ad1a69 +0x69:  mov    -0x8(%ebp),%esi
08ad1a6c +0x6c:  mov    -0x4(%ebp),%edi
08ad1a6f +0x6f:  mov    %ebp,%esp
08ad1a71 +0x71:  pop    %ebp
08ad1a72 +0x72:  ret
08ad1a73 +0x73:  nop
08ad1a74 +0x74:  lea    0x0(%esi),%esi
08ad1a7a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::switch_streams @ 0x8ad1a00

/* DWARF original prototype: void switch_streams(__dnf_script__FlexLexer * this, istream * new_in,
   ostream * new_out) */

void __thiscall
__dnf_script__FlexLexer::switch_streams
          (__dnf_script__FlexLexer *this,istream *new_in,ostream *new_out)

{
  _func_int_varargs **pp_Var1;
  _func_int_varargs *p_Var2;
  int iVar3;
  yy_buffer_state *pyVar4;
  
  if (new_in != (istream *)0x0) {
    pyVar4 = (yy_buffer_state *)0x0;
    if (this->yy_buffer_stack != (yy_buffer_state **)0x0) {
      pyVar4 = this->yy_buffer_stack[this->yy_buffer_stack_top];
    }
    (*(this->super_FlexLexer)._vptr_FlexLexer[4])(this,pyVar4);
    pp_Var1 = (this->super_FlexLexer)._vptr_FlexLexer;
    p_Var2 = pp_Var1[2];
    iVar3 = (*pp_Var1[3])(this,new_in,0x4000);
    (*p_Var2)(this,iVar3);
  }
  if (new_out != (ostream *)0x0) {
    this->yyout = new_out;
  }
  return;
}
```
