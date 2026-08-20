# yy_pop_state

`_ZN23__dnf_script__FlexLexer12yy_pop_stateEv`

`__dnf_script__FlexLexer::yy_pop_state()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1d80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1d80  _ZN23__dnf_script__FlexLexer12yy_pop_stateEv
#           __dnf_script__FlexLexer::yy_pop_state()
# range [0x08ad1d80, 0x08ad1dc9]
08ad1d80 +0x00:  push   %ebp
08ad1d81 +0x01:  mov    %esp,%ebp
08ad1d83 +0x03:  push   %ebx
08ad1d84 +0x04:  sub    $0x14,%esp
08ad1d87 +0x07:  mov    0x8(%ebp),%ebx
08ad1d8a +0x0a:  mov    0x14(%ebx),%eax
08ad1d8d +0x0d:  sub    $0x1,%eax
08ad1d90 +0x10:  test   %eax,%eax
08ad1d92 +0x12:  mov    %eax,0x14(%ebx)
08ad1d95 +0x15:  js     08ad1db0 <+0x30>
08ad1d97 +0x17:  mov    0x1c(%ebx),%edx
08ad1d9a +0x1a:  mov    (%edx,%eax,4),%eax
08ad1d9d +0x1d:  lea    0x1(%eax,%eax,1),%eax
08ad1da1 +0x21:  mov    %eax,0x38(%ebx)
08ad1da4 +0x24:  add    $0x14,%esp
08ad1da7 +0x27:  pop    %ebx
08ad1da8 +0x28:  pop    %ebp
08ad1da9 +0x29:  ret
08ad1daa +0x2a:  lea    0x0(%esi),%esi
08ad1db0 +0x30:  mov    (%ebx),%eax
08ad1db2 +0x32:  movl   $"start-condition stack underflow",0x4(%esp)
08ad1dba +0x3a:  mov    %ebx,(%esp)
08ad1dbd +0x3d:  call   *0x2c(%eax)
08ad1dc0 +0x40:  mov    0x14(%ebx),%eax
08ad1dc3 +0x43:  jmp    08ad1d97 <+0x17>
08ad1dc5 +0x45:  nop
08ad1dc6 +0x46:  lea    0x0(%esi),%esi
08ad1dc9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_pop_state @ 0x8ad1d80

/* DWARF original prototype: void yy_pop_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yy_pop_state(__dnf_script__FlexLexer *this)

{
  int iVar1;
  
  iVar1 = this->yy_start_stack_ptr + -1;
  this->yy_start_stack_ptr = iVar1;
  if (iVar1 < 0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"start-condition stack underflow");
    iVar1 = this->yy_start_stack_ptr;
  }
  this->yy_start = this->yy_start_stack[iVar1] * 2 + 1;
  return;
}
```
