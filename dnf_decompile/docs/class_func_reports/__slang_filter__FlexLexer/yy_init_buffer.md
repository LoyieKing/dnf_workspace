# yy_init_buffer

`_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi`

`__slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080947de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080947de  _ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi
#           __slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
# range [0x080947de, 0x08094865]
080947de +0x00:  push   %ebp
080947df +0x01:  mov    %esp,%ebp
080947e1 +0x03:  sub    $0x28,%esp
080947e4 +0x06:  call   0807dd70 <_init+0x668>
080947e9 +0x0b:  mov    (%eax),%eax
080947eb +0x0d:  mov    %eax,-0xc(%ebp)
080947ee +0x10:  mov    0xc(%ebp),%eax
080947f1 +0x13:  mov    %eax,0x4(%esp)
080947f5 +0x17:  mov    0x8(%ebp),%eax
080947f8 +0x1a:  mov    %eax,(%esp)
080947fb +0x1d:  call   08094866 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state>  ; __slang_filter__FlexLexer::yy_flush_buffer(yy_buffer_state*)
08094800 +0x22:  mov    0xc(%ebp),%eax
08094803 +0x25:  mov    0x10(%ebp),%edx
08094806 +0x28:  mov    %edx,(%eax)
08094808 +0x2a:  mov    0xc(%ebp),%eax
0809480b +0x2d:  movl   $0x1,0x28(%eax)
08094812 +0x34:  mov    0x8(%ebp),%eax
08094815 +0x37:  mov    0x48(%eax),%eax
08094818 +0x3a:  test   %eax,%eax
0809481a +0x3c:  je     08094832 <+0x54>
0809481c +0x3e:  mov    0x8(%ebp),%eax
0809481f +0x41:  mov    0x48(%eax),%edx
08094822 +0x44:  mov    0x8(%ebp),%eax
08094825 +0x47:  mov    0x40(%eax),%eax
08094828 +0x4a:  shl    $0x2,%eax
0809482b +0x4d:  lea    (%edx,%eax,1),%eax
0809482e +0x50:  mov    (%eax),%eax
08094830 +0x52:  jmp    08094837 <+0x59>
08094832 +0x54:  mov    $0x0,%eax
08094837 +0x59:  cmp    0xc(%ebp),%eax
0809483a +0x5c:  je     08094850 <+0x72>
0809483c +0x5e:  mov    0xc(%ebp),%eax
0809483f +0x61:  movl   $0x1,0x20(%eax)
08094846 +0x68:  mov    0xc(%ebp),%eax
08094849 +0x6b:  movl   $0x0,0x24(%eax)
08094850 +0x72:  mov    0xc(%ebp),%eax
08094853 +0x75:  movl   $0x0,0x18(%eax)
0809485a +0x7c:  call   0807dd70 <_init+0x668>
0809485f +0x81:  mov    -0xc(%ebp),%edx
08094862 +0x84:  mov    %edx,(%eax)
08094864 +0x86:  leave
08094865 +0x87:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_init_buffer @ 0x80947de

/* __slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::istream*) */

void __thiscall
__slang_filter__FlexLexer::yy_init_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1,istream *param_2)

{
  int iVar1;
  int *piVar2;
  yy_buffer_state *pyVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  yy_flush_buffer(this,param_1);
  param_1->yy_input_file = param_2;
  param_1->yy_fill_buffer = 1;
  if (*(int *)(this + 0x48) == 0) {
    pyVar3 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar3 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  if (pyVar3 != param_1) {
    param_1->yy_bs_lineno = 1;
    param_1->yy_bs_column = 0;
  }
  param_1->yy_is_interactive = 0;
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return;
}
```
