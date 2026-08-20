# __dnf_script__FlexLexer

`_ZN23__dnf_script__FlexLexerC1EPSiPSo`

`__dnf_script__FlexLexer::__dnf_script__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1940  _ZN23__dnf_script__FlexLexerC1EPSiPSo
#           __dnf_script__FlexLexer::__dnf_script__FlexLexer(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
# range [0x08ad1940, 0x08ad19fa]
08ad1940 +0x00:  push   %ebp
08ad1941 +0x01:  mov    %esp,%ebp
08ad1943 +0x03:  mov    0x8(%ebp),%eax
08ad1946 +0x06:  mov    0xc(%ebp),%edx
08ad1949 +0x09:  movl   $&_ZTV23__dnf_script__FlexLexer+0x8,(%eax)
08ad194f +0x0f:  mov    %edx,0x20(%eax)
08ad1952 +0x12:  mov    0x10(%ebp),%edx
08ad1955 +0x15:  movl   $0x0,0x30(%eax)
08ad195c +0x1c:  movl   $0x0,0x34(%eax)
08ad1963 +0x23:  movl   $0x0,0x38(%eax)
08ad196a +0x2a:  mov    %edx,0x24(%eax)
08ad196d +0x2d:  movl   $0x0,0x10(%eax)
08ad1974 +0x34:  movl   $0x1,0xc(%eax)
08ad197b +0x3b:  movl   $0x0,0x3c(%eax)
08ad1982 +0x42:  movl   $0x0,0x6c(%eax)
08ad1989 +0x49:  movl   $0x0,0x70(%eax)
08ad1990 +0x50:  movl   $0x0,0x74(%eax)
08ad1997 +0x57:  movl   $0x0,0x7c(%eax)
08ad199e +0x5e:  movl   $0x0,0x78(%eax)
08ad19a5 +0x65:  movl   $0x0,0x18(%eax)
08ad19ac +0x6c:  movl   $0x0,0x14(%eax)
08ad19b3 +0x73:  movl   $0x0,0x1c(%eax)
08ad19ba +0x7a:  movl   $0x0,0x48(%eax)
08ad19c1 +0x81:  movl   $0x0,0x40(%eax)
08ad19c8 +0x88:  movl   $0x0,0x44(%eax)
08ad19cf +0x8f:  movl   $0x0,0x54(%eax)
08ad19d6 +0x96:  movl   $0x0,0x50(%eax)
08ad19dd +0x9d:  movl   $0x0,0x58(%eax)
08ad19e4 +0xa4:  movl   $0x0,0x5c(%eax)
08ad19eb +0xab:  movl   $0x0,0x60(%eax)
08ad19f2 +0xb2:  pop    %ebp
08ad19f3 +0xb3:  ret
08ad19f4 +0xb4:  lea    0x0(%esi),%esi
08ad19fa +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::__dnf_script__FlexLexer @ 0x8ad1940

/* DWARF original prototype: void __dnf_script__FlexLexer(__dnf_script__FlexLexer * this, istream *
   arg_yyin, ostream * arg_yyout) */

void __thiscall
__dnf_script__FlexLexer::__dnf_script__FlexLexer
          (__dnf_script__FlexLexer *this,istream *arg_yyin,ostream *arg_yyout)

{
  (this->super_FlexLexer)._vptr_FlexLexer =
       (_func_int_varargs **)&PTR____dnf_script__FlexLexer_08e31568;
  this->yyin = arg_yyin;
  this->yy_c_buf_p = (char *)0x0;
  this->yy_init = 0;
  this->yy_start = 0;
  this->yyout = arg_yyout;
  (this->super_FlexLexer).yy_flex_debug = 0;
  (this->super_FlexLexer).yylineno = 1;
  this->yy_did_buffer_switch_on_eof = 0;
  this->yy_looking_for_trail_begin = 0;
  this->yy_more_flag = 0;
  this->yy_more_len = 0;
  this->yy_prev_more_offset = 0;
  this->yy_more_offset = 0;
  this->yy_start_stack_depth = 0;
  this->yy_start_stack_ptr = 0;
  this->yy_start_stack = (int *)0x0;
  this->yy_buffer_stack = (yy_buffer_state **)0x0;
  this->yy_buffer_stack_top = 0;
  this->yy_buffer_stack_max = 0;
  this->yy_state_buf = (yy_state_type *)0x0;
  this->yy_last_accepting_cpos = (char *)0x0;
  this->yy_state_ptr = (yy_state_type *)0x0;
  this->yy_full_match = (char *)0x0;
  this->yy_full_state = (int *)0x0;
  return;
}
```
