# yy_flush_buffer

`_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state`

`__slang_filter__FlexLexer::yy_flush_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094866  _ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state
#           __slang_filter__FlexLexer::yy_flush_buffer(yy_buffer_state*)
# range [0x08094866, 0x080948eb]
08094866 +0x00:  push   %ebp
08094867 +0x01:  mov    %esp,%ebp
08094869 +0x03:  sub    $0x4,%esp
0809486c +0x06:  cmpl   $0x0,0xc(%ebp)
08094870 +0x0a:  je     080948e8 <+0x82>
08094872 +0x0c:  mov    0xc(%ebp),%eax
08094875 +0x0f:  movl   $0x0,0x10(%eax)
0809487c +0x16:  mov    0xc(%ebp),%eax
0809487f +0x19:  mov    0x4(%eax),%eax
08094882 +0x1c:  movb   $0x0,(%eax)
08094885 +0x1f:  mov    0xc(%ebp),%eax
08094888 +0x22:  mov    0x4(%eax),%eax
0809488b +0x25:  add    $0x1,%eax
0809488e +0x28:  movb   $0x0,(%eax)
08094891 +0x2b:  mov    0xc(%ebp),%eax
08094894 +0x2e:  mov    0x4(%eax),%edx
08094897 +0x31:  mov    0xc(%ebp),%eax
0809489a +0x34:  mov    %edx,0x8(%eax)
0809489d +0x37:  mov    0xc(%ebp),%eax
080948a0 +0x3a:  movl   $0x1,0x1c(%eax)
080948a7 +0x41:  mov    0xc(%ebp),%eax
080948aa +0x44:  movl   $0x0,0x2c(%eax)
080948b1 +0x4b:  mov    0x8(%ebp),%eax
080948b4 +0x4e:  mov    0x48(%eax),%eax
080948b7 +0x51:  test   %eax,%eax
080948b9 +0x53:  je     080948d1 <+0x6b>
080948bb +0x55:  mov    0x8(%ebp),%eax
080948be +0x58:  mov    0x48(%eax),%edx
080948c1 +0x5b:  mov    0x8(%ebp),%eax
080948c4 +0x5e:  mov    0x40(%eax),%eax
080948c7 +0x61:  shl    $0x2,%eax
080948ca +0x64:  lea    (%edx,%eax,1),%eax
080948cd +0x67:  mov    (%eax),%eax
080948cf +0x69:  jmp    080948d6 <+0x70>
080948d1 +0x6b:  mov    $0x0,%eax
080948d6 +0x70:  cmp    0xc(%ebp),%eax
080948d9 +0x73:  jne    080948e9 <+0x83>
080948db +0x75:  mov    0x8(%ebp),%eax
080948de +0x78:  mov    %eax,(%esp)
080948e1 +0x7b:  call   0809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>  ; __slang_filter__FlexLexer::yy_load_buffer_state()
080948e6 +0x80:  jmp    080948e9 <+0x83>
080948e8 +0x82:  nop
080948e9 +0x83:  leave
080948ea +0x84:  ret
080948eb +0x85:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_flush_buffer @ 0x8094866

/* __slang_filter__FlexLexer::yy_flush_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_flush_buffer(__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    param_1->yy_n_chars = 0;
    *param_1->yy_ch_buf = '\0';
    param_1->yy_ch_buf[1] = '\0';
    param_1->yy_buf_pos = param_1->yy_ch_buf;
    param_1->yy_at_bol = 1;
    param_1->yy_buffer_status = 0;
    if (*(int *)(this + 0x48) == 0) {
      pyVar1 = (yy_buffer_state *)0x0;
    }
    else {
      pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    if (pyVar1 == param_1) {
      yy_load_buffer_state(this);
    }
  }
  return;
}
```
