# yy_switch_to_buffer

`_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state`

`__slang_filter__FlexLexer::yy_switch_to_buffer(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08094574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094574  _ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state
#           __slang_filter__FlexLexer::yy_switch_to_buffer(yy_buffer_state*)
# range [0x08094574, 0x0809464d]
08094574 +0x00:  push   %ebp
08094575 +0x01:  mov    %esp,%ebp
08094577 +0x03:  sub    $0x18,%esp
0809457a +0x06:  mov    0x8(%ebp),%eax
0809457d +0x09:  mov    %eax,(%esp)
08094580 +0x0c:  call   08094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>  ; __slang_filter__FlexLexer::yyensure_buffer_stack()
08094585 +0x11:  mov    0x8(%ebp),%eax
08094588 +0x14:  mov    0x48(%eax),%eax
0809458b +0x17:  test   %eax,%eax
0809458d +0x19:  je     080945a5 <+0x31>
0809458f +0x1b:  mov    0x8(%ebp),%eax
08094592 +0x1e:  mov    0x48(%eax),%edx
08094595 +0x21:  mov    0x8(%ebp),%eax
08094598 +0x24:  mov    0x40(%eax),%eax
0809459b +0x27:  shl    $0x2,%eax
0809459e +0x2a:  lea    (%edx,%eax,1),%eax
080945a1 +0x2d:  mov    (%eax),%eax
080945a3 +0x2f:  jmp    080945aa <+0x36>
080945a5 +0x31:  mov    $0x0,%eax
080945aa +0x36:  cmp    0xc(%ebp),%eax
080945ad +0x39:  je     0809464b <+0xd7>
080945b3 +0x3f:  mov    0x8(%ebp),%eax
080945b6 +0x42:  mov    0x48(%eax),%eax
080945b9 +0x45:  test   %eax,%eax
080945bb +0x47:  je     0809461e <+0xaa>
080945bd +0x49:  mov    0x8(%ebp),%eax
080945c0 +0x4c:  mov    0x48(%eax),%edx
080945c3 +0x4f:  mov    0x8(%ebp),%eax
080945c6 +0x52:  mov    0x40(%eax),%eax
080945c9 +0x55:  shl    $0x2,%eax
080945cc +0x58:  lea    (%edx,%eax,1),%eax
080945cf +0x5b:  mov    (%eax),%eax
080945d1 +0x5d:  test   %eax,%eax
080945d3 +0x5f:  je     0809461e <+0xaa>
080945d5 +0x61:  mov    0x8(%ebp),%eax
080945d8 +0x64:  mov    0x30(%eax),%eax
080945db +0x67:  mov    0x8(%ebp),%edx
080945de +0x6a:  movzbl 0x28(%edx),%edx
080945e2 +0x6e:  mov    %dl,(%eax)
080945e4 +0x70:  mov    0x8(%ebp),%eax
080945e7 +0x73:  mov    0x48(%eax),%edx
080945ea +0x76:  mov    0x8(%ebp),%eax
080945ed +0x79:  mov    0x40(%eax),%eax
080945f0 +0x7c:  shl    $0x2,%eax
080945f3 +0x7f:  lea    (%edx,%eax,1),%eax
080945f6 +0x82:  mov    (%eax),%eax
080945f8 +0x84:  mov    0x8(%ebp),%edx
080945fb +0x87:  mov    0x30(%edx),%edx
080945fe +0x8a:  mov    %edx,0x8(%eax)
08094601 +0x8d:  mov    0x8(%ebp),%eax
08094604 +0x90:  mov    0x48(%eax),%edx
08094607 +0x93:  mov    0x8(%ebp),%eax
0809460a +0x96:  mov    0x40(%eax),%eax
0809460d +0x99:  shl    $0x2,%eax
08094610 +0x9c:  lea    (%edx,%eax,1),%eax
08094613 +0x9f:  mov    (%eax),%eax
08094615 +0xa1:  mov    0x8(%ebp),%edx
08094618 +0xa4:  mov    0x2c(%edx),%edx
0809461b +0xa7:  mov    %edx,0x10(%eax)
0809461e +0xaa:  mov    0x8(%ebp),%eax
08094621 +0xad:  mov    0x48(%eax),%edx
08094624 +0xb0:  mov    0x8(%ebp),%eax
08094627 +0xb3:  mov    0x40(%eax),%eax
0809462a +0xb6:  shl    $0x2,%eax
0809462d +0xb9:  add    %eax,%edx
0809462f +0xbb:  mov    0xc(%ebp),%eax
08094632 +0xbe:  mov    %eax,(%edx)
08094634 +0xc0:  mov    0x8(%ebp),%eax
08094637 +0xc3:  mov    %eax,(%esp)
0809463a +0xc6:  call   0809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>  ; __slang_filter__FlexLexer::yy_load_buffer_state()
0809463f +0xcb:  mov    0x8(%ebp),%eax
08094642 +0xce:  movl   $0x1,0x3c(%eax)
08094649 +0xd5:  jmp    0809464c <+0xd8>
0809464b +0xd7:  nop
0809464c +0xd8:  leave
0809464d +0xd9:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_switch_to_buffer @ 0x8094574

/* __slang_filter__FlexLexer::yy_switch_to_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_switch_to_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  yyensure_buffer_stack(this);
  if (*(int *)(this + 0x48) == 0) {
    pyVar1 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  if (pyVar1 != param_1) {
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8) =
           *(undefined4 *)(this + 0x30);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = param_1;
    yy_load_buffer_state(this);
    *(undefined4 *)(this + 0x3c) = 1;
  }
  return;
}
```
