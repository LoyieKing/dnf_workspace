# yy_create_buffer

`_ZN25__slang_filter__FlexLexer16yy_create_bufferEPSii`

`__slang_filter__FlexLexer::yy_create_buffer(std::basic_istream<char, std::char_traits<char> >*, int)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080946c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080946c4  _ZN25__slang_filter__FlexLexer16yy_create_bufferEPSii
#           __slang_filter__FlexLexer::yy_create_buffer(std::basic_istream<char, std::char_traits<char> >*, int)
# range [0x080946c4, 0x08094767]
080946c4 +0x00:  push   %ebp
080946c5 +0x01:  mov    %esp,%ebp
080946c7 +0x03:  sub    $0x28,%esp
080946ca +0x06:  movl   $0x30,(%esp)
080946d1 +0x0d:  call   08094d75 <_Z21__slang_filter__allocj>  ; __slang_filter__alloc(unsigned int)
080946d6 +0x12:  mov    %eax,-0xc(%ebp)
080946d9 +0x15:  cmpl   $0x0,-0xc(%ebp)
080946dd +0x19:  jne    080946f9 <+0x35>
080946df +0x1b:  mov    0x8(%ebp),%eax
080946e2 +0x1e:  mov    (%eax),%eax
080946e4 +0x20:  add    $0x2c,%eax
080946e7 +0x23:  mov    (%eax),%edx
080946e9 +0x25:  movl   $"out of dynamic memory in yy_create_buffer()",0x4(%esp)
080946f1 +0x2d:  mov    0x8(%ebp),%eax
080946f4 +0x30:  mov    %eax,(%esp)
080946f7 +0x33:  call   *%edx
080946f9 +0x35:  mov    0x10(%ebp),%edx
080946fc +0x38:  mov    -0xc(%ebp),%eax
080946ff +0x3b:  mov    %edx,0xc(%eax)
08094702 +0x3e:  mov    -0xc(%ebp),%eax
08094705 +0x41:  mov    0xc(%eax),%eax
08094708 +0x44:  add    $0x2,%eax
0809470b +0x47:  mov    %eax,(%esp)
0809470e +0x4a:  call   08094d75 <_Z21__slang_filter__allocj>  ; __slang_filter__alloc(unsigned int)
08094713 +0x4f:  mov    %eax,%edx
08094715 +0x51:  mov    -0xc(%ebp),%eax
08094718 +0x54:  mov    %edx,0x4(%eax)
0809471b +0x57:  mov    -0xc(%ebp),%eax
0809471e +0x5a:  mov    0x4(%eax),%eax
08094721 +0x5d:  test   %eax,%eax
08094723 +0x5f:  jne    0809473f <+0x7b>
08094725 +0x61:  mov    0x8(%ebp),%eax
08094728 +0x64:  mov    (%eax),%eax
0809472a +0x66:  add    $0x2c,%eax
0809472d +0x69:  mov    (%eax),%edx
0809472f +0x6b:  movl   $"out of dynamic memory in yy_create_buffer()",0x4(%esp)
08094737 +0x73:  mov    0x8(%ebp),%eax
0809473a +0x76:  mov    %eax,(%esp)
0809473d +0x79:  call   *%edx
0809473f +0x7b:  mov    -0xc(%ebp),%eax
08094742 +0x7e:  movl   $0x1,0x14(%eax)
08094749 +0x85:  mov    0xc(%ebp),%eax
0809474c +0x88:  mov    %eax,0x8(%esp)
08094750 +0x8c:  mov    -0xc(%ebp),%eax
08094753 +0x8f:  mov    %eax,0x4(%esp)
08094757 +0x93:  mov    0x8(%ebp),%eax
0809475a +0x96:  mov    %eax,(%esp)
0809475d +0x99:  call   080947de <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>  ; __slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
08094762 +0x9e:  mov    -0xc(%ebp),%eax
08094765 +0xa1:  leave
08094766 +0xa2:  ret
08094767 +0xa3:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_create_buffer @ 0x80946c4

/* __slang_filter__FlexLexer::yy_create_buffer(std::istream*, int) */

yy_buffer_state * __thiscall
__slang_filter__FlexLexer::yy_create_buffer
          (__slang_filter__FlexLexer *this,istream *param_1,int param_2)

{
  yy_buffer_state *pyVar1;
  char *pcVar2;
  
  pyVar1 = (yy_buffer_state *)__slang_filter__alloc(0x30);
  if (pyVar1 == (yy_buffer_state *)0x0) {
    (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_create_buffer()");
  }
  pyVar1->yy_buf_size = param_2;
  pcVar2 = (char *)__slang_filter__alloc(pyVar1->yy_buf_size + 2);
  pyVar1->yy_ch_buf = pcVar2;
  if (pyVar1->yy_ch_buf == (char *)0x0) {
    (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_create_buffer()");
  }
  pyVar1->yy_is_our_buffer = 1;
  yy_init_buffer(this,pyVar1,param_1);
  return pyVar1;
}
```
