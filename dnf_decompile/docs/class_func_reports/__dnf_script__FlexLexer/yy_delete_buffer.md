# yy_delete_buffer

`_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state`

`__dnf_script__FlexLexer::yy_delete_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1e30  _ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state
#           __dnf_script__FlexLexer::yy_delete_buffer(yy_buffer_state*)
# range [0x08ad1e30, 0x08ad1e8e]
08ad1e30 +0x00:  push   %ebp
08ad1e31 +0x01:  mov    %esp,%ebp
08ad1e33 +0x03:  push   %ebx
08ad1e34 +0x04:  sub    $0x14,%esp
08ad1e37 +0x07:  mov    0xc(%ebp),%ebx
08ad1e3a +0x0a:  mov    0x8(%ebp),%eax
08ad1e3d +0x0d:  test   %ebx,%ebx
08ad1e3f +0x0f:  je     08ad1e88 <+0x58>
08ad1e41 +0x11:  mov    0x48(%eax),%edx
08ad1e44 +0x14:  test   %edx,%edx
08ad1e46 +0x16:  je     08ad1e52 <+0x22>
08ad1e48 +0x18:  mov    0x40(%eax),%eax
08ad1e4b +0x1b:  lea    (%edx,%eax,4),%eax
08ad1e4e +0x1e:  cmp    (%eax),%ebx
08ad1e50 +0x20:  je     08ad1e80 <+0x50>
08ad1e52 +0x22:  mov    0x14(%ebx),%eax
08ad1e55 +0x25:  test   %eax,%eax
08ad1e57 +0x27:  jne    08ad1e68 <+0x38>
08ad1e59 +0x29:  mov    %ebx,0x8(%ebp)
08ad1e5c +0x2c:  add    $0x14,%esp
08ad1e5f +0x2f:  pop    %ebx
08ad1e60 +0x30:  pop    %ebp
08ad1e61 +0x31:  jmp    0807ddb0 <_init+0x6a8>
08ad1e66 +0x36:  xchg   %ax,%ax
08ad1e68 +0x38:  mov    0x4(%ebx),%eax
08ad1e6b +0x3b:  mov    %eax,(%esp)
08ad1e6e +0x3e:  call   0807ddb0 <_init+0x6a8>
08ad1e73 +0x43:  mov    %ebx,0x8(%ebp)
08ad1e76 +0x46:  add    $0x14,%esp
08ad1e79 +0x49:  pop    %ebx
08ad1e7a +0x4a:  pop    %ebp
08ad1e7b +0x4b:  jmp    0807ddb0 <_init+0x6a8>
08ad1e80 +0x50:  movl   $0x0,(%eax)
08ad1e86 +0x56:  jmp    08ad1e52 <+0x22>
08ad1e88 +0x58:  add    $0x14,%esp
08ad1e8b +0x5b:  pop    %ebx
08ad1e8c +0x5c:  pop    %ebp
08ad1e8d +0x5d:  ret
08ad1e8e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_delete_buffer @ 0x8ad1e30

/* DWARF original prototype: void yy_delete_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE
   b) */

void __thiscall
__dnf_script__FlexLexer::yy_delete_buffer(__dnf_script__FlexLexer *this,YY_BUFFER_STATE b)

{
  yy_buffer_state **ppyVar1;
  
  if (b == (YY_BUFFER_STATE)0x0) {
    return;
  }
  if ((this->yy_buffer_stack != (yy_buffer_state **)0x0) &&
     (ppyVar1 = this->yy_buffer_stack + this->yy_buffer_stack_top, b == *ppyVar1)) {
    *ppyVar1 = (yy_buffer_state *)0x0;
  }
  if (b->yy_is_our_buffer == 0) {
    free(b);
    return;
  }
  free(b->yy_ch_buf);
  free(b);
  return;
}
```
