# yy_load_buffer_state

`_ZN23__dnf_script__FlexLexer20yy_load_buffer_stateEv`

`__dnf_script__FlexLexer::yy_load_buffer_state()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1c40  _ZN23__dnf_script__FlexLexer20yy_load_buffer_stateEv
#           __dnf_script__FlexLexer::yy_load_buffer_state()
# range [0x08ad1c40, 0x08ad1c6c]
08ad1c40 +0x00:  push   %ebp
08ad1c41 +0x01:  mov    %esp,%ebp
08ad1c43 +0x03:  mov    0x8(%ebp),%eax
08ad1c46 +0x06:  mov    0x48(%eax),%edx
08ad1c49 +0x09:  mov    0x40(%eax),%ecx
08ad1c4c +0x0c:  mov    (%edx,%ecx,4),%ecx
08ad1c4f +0x0f:  mov    0x10(%ecx),%edx
08ad1c52 +0x12:  mov    %edx,0x2c(%eax)
08ad1c55 +0x15:  mov    0x8(%ecx),%edx
08ad1c58 +0x18:  mov    (%ecx),%ecx
08ad1c5a +0x1a:  mov    %edx,0x30(%eax)
08ad1c5d +0x1d:  mov    %edx,0x4(%eax)
08ad1c60 +0x20:  mov    %ecx,0x20(%eax)
08ad1c63 +0x23:  movzbl (%edx),%edx
08ad1c66 +0x26:  mov    %dl,0x28(%eax)
08ad1c69 +0x29:  pop    %ebp
08ad1c6a +0x2a:  ret
08ad1c6b +0x2b:  nop
08ad1c6c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_load_buffer_state @ 0x8ad1c40

/* DWARF original prototype: void yy_load_buffer_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yy_load_buffer_state(__dnf_script__FlexLexer *this)

{
  yy_buffer_state *pyVar1;
  char *pcVar2;
  istream *piVar3;
  
  pyVar1 = this->yy_buffer_stack[this->yy_buffer_stack_top];
  this->yy_n_chars = pyVar1->yy_n_chars;
  pcVar2 = pyVar1->yy_buf_pos;
  piVar3 = pyVar1->yy_input_file;
  this->yy_c_buf_p = pcVar2;
  (this->super_FlexLexer).yytext = pcVar2;
  this->yyin = piVar3;
  this->yy_hold_char = *pcVar2;
  return;
}
```
