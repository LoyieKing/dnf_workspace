# yy_delete_buffer

`_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state`

`__slang_filter__FlexLexer::yy_delete_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094768  _ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state
#           __slang_filter__FlexLexer::yy_delete_buffer(yy_buffer_state*)
# range [0x08094768, 0x080947dd]
08094768 +0x00:  push   %ebp
08094769 +0x01:  mov    %esp,%ebp
0809476b +0x03:  sub    $0x18,%esp
0809476e +0x06:  cmpl   $0x0,0xc(%ebp)
08094772 +0x0a:  je     080947db <+0x73>
08094774 +0x0c:  mov    0x8(%ebp),%eax
08094777 +0x0f:  mov    0x48(%eax),%eax
0809477a +0x12:  test   %eax,%eax
0809477c +0x14:  je     08094794 <+0x2c>
0809477e +0x16:  mov    0x8(%ebp),%eax
08094781 +0x19:  mov    0x48(%eax),%edx
08094784 +0x1c:  mov    0x8(%ebp),%eax
08094787 +0x1f:  mov    0x40(%eax),%eax
0809478a +0x22:  shl    $0x2,%eax
0809478d +0x25:  lea    (%edx,%eax,1),%eax
08094790 +0x28:  mov    (%eax),%eax
08094792 +0x2a:  jmp    08094799 <+0x31>
08094794 +0x2c:  mov    $0x0,%eax
08094799 +0x31:  cmp    0xc(%ebp),%eax
0809479c +0x34:  jne    080947b6 <+0x4e>
0809479e +0x36:  mov    0x8(%ebp),%eax
080947a1 +0x39:  mov    0x48(%eax),%edx
080947a4 +0x3c:  mov    0x8(%ebp),%eax
080947a7 +0x3f:  mov    0x40(%eax),%eax
080947aa +0x42:  shl    $0x2,%eax
080947ad +0x45:  lea    (%edx,%eax,1),%eax
080947b0 +0x48:  movl   $0x0,(%eax)
080947b6 +0x4e:  mov    0xc(%ebp),%eax
080947b9 +0x51:  mov    0x14(%eax),%eax
080947bc +0x54:  test   %eax,%eax
080947be +0x56:  je     080947ce <+0x66>
080947c0 +0x58:  mov    0xc(%ebp),%eax
080947c3 +0x5b:  mov    0x4(%eax),%eax
080947c6 +0x5e:  mov    %eax,(%esp)
080947c9 +0x61:  call   08094da2 <_Z20__slang_filter__freePv>  ; __slang_filter__free(void*)
080947ce +0x66:  mov    0xc(%ebp),%eax
080947d1 +0x69:  mov    %eax,(%esp)
080947d4 +0x6c:  call   08094da2 <_Z20__slang_filter__freePv>  ; __slang_filter__free(void*)
080947d9 +0x71:  jmp    080947dc <+0x74>
080947db +0x73:  nop
080947dc +0x74:  leave
080947dd +0x75:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_delete_buffer @ 0x8094768

/* __slang_filter__FlexLexer::yy_delete_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_delete_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    if (*(int *)(this + 0x48) == 0) {
      pyVar1 = (yy_buffer_state *)0x0;
    }
    else {
      pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    if (pyVar1 == param_1) {
      *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = 0;
    }
    if (param_1->yy_is_our_buffer != 0) {
      __slang_filter__free(param_1->yy_ch_buf);
    }
    __slang_filter__free(param_1);
  }
  return;
}
```
