# yy_init_buffer

`_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi`

`__dnf_script__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad25a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad25a0  _ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi
#           __dnf_script__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
# range [0x08ad25a0, 0x08ad261a]
08ad25a0 +0x00:  push   %ebp
08ad25a1 +0x01:  mov    %esp,%ebp
08ad25a3 +0x03:  sub    $0x38,%esp
08ad25a6 +0x06:  mov    %ebx,-0xc(%ebp)
08ad25a9 +0x09:  mov    0xc(%ebp),%ebx
08ad25ac +0x0c:  mov    %esi,-0x8(%ebp)
08ad25af +0x0f:  mov    0x8(%ebp),%esi
08ad25b2 +0x12:  mov    %edi,-0x4(%ebp)
08ad25b5 +0x15:  call   0807dd70 <_init+0x668>
08ad25ba +0x1a:  mov    (%eax),%ecx
08ad25bc +0x1c:  mov    %eax,%edi
08ad25be +0x1e:  mov    %ebx,0x4(%esp)
08ad25c2 +0x22:  mov    %esi,(%esp)
08ad25c5 +0x25:  mov    %ecx,-0x1c(%ebp)
08ad25c8 +0x28:  call   08ad1c70 <_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state>  ; __dnf_script__FlexLexer::yy_flush_buffer(yy_buffer_state*)
08ad25cd +0x2d:  mov    0x10(%ebp),%eax
08ad25d0 +0x30:  mov    0x48(%esi),%edx
08ad25d3 +0x33:  movl   $0x1,0x28(%ebx)
08ad25da +0x3a:  mov    -0x1c(%ebp),%ecx
08ad25dd +0x3d:  mov    %eax,(%ebx)
08ad25df +0x3f:  xor    %eax,%eax
08ad25e1 +0x41:  test   %edx,%edx
08ad25e3 +0x43:  je     08ad25eb <+0x4b>
08ad25e5 +0x45:  mov    0x40(%esi),%eax
08ad25e8 +0x48:  mov    (%edx,%eax,4),%eax
08ad25eb +0x4b:  cmp    %ebx,%eax
08ad25ed +0x4d:  je     08ad25fd <+0x5d>
08ad25ef +0x4f:  movl   $0x1,0x20(%ebx)
08ad25f6 +0x56:  movl   $0x0,0x24(%ebx)
08ad25fd +0x5d:  movl   $0x0,0x18(%ebx)
08ad2604 +0x64:  mov    %ecx,(%edi)
08ad2606 +0x66:  mov    -0xc(%ebp),%ebx
08ad2609 +0x69:  mov    -0x8(%ebp),%esi
08ad260c +0x6c:  mov    -0x4(%ebp),%edi
08ad260f +0x6f:  mov    %ebp,%esp
08ad2611 +0x71:  pop    %ebp
08ad2612 +0x72:  ret
08ad2613 +0x73:  nop
08ad2614 +0x74:  lea    0x0(%esi),%esi
08ad261a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_init_buffer @ 0x8ad25a0

/* DWARF original prototype: void yy_init_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE b,
   istream * file) */

void __thiscall
__dnf_script__FlexLexer::yy_init_buffer
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE b,istream *file)

{
  int iVar1;
  yy_buffer_state **ppyVar2;
  int *piVar3;
  yy_buffer_state *pyVar4;
  
                    /* Unresolved local var: int oerrno@[???] */
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  yy_flush_buffer(this,b);
  ppyVar2 = this->yy_buffer_stack;
  b->yy_fill_buffer = 1;
  b->yy_input_file = file;
  pyVar4 = (yy_buffer_state *)0x0;
  if (ppyVar2 != (yy_buffer_state **)0x0) {
    pyVar4 = ppyVar2[this->yy_buffer_stack_top];
  }
  if (pyVar4 != b) {
    b->yy_bs_lineno = 1;
    b->yy_bs_column = 0;
  }
  b->yy_is_interactive = 0;
  *piVar3 = iVar1;
  return;
}
```
