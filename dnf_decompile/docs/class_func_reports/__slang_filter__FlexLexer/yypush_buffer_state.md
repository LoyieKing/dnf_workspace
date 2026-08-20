# yypush_buffer_state

`_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state`

`__slang_filter__FlexLexer::yypush_buffer_state(yy_buffer_state*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080948ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080948ec  _ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state
#           __slang_filter__FlexLexer::yypush_buffer_state(yy_buffer_state*)
# range [0x080948ec, 0x080949d3]
080948ec +0x00:  push   %ebp
080948ed +0x01:  mov    %esp,%ebp
080948ef +0x03:  sub    $0x18,%esp
080948f2 +0x06:  cmpl   $0x0,0xc(%ebp)
080948f6 +0x0a:  je     080949d0 <+0xe4>
080948fc +0x10:  mov    0x8(%ebp),%eax
080948ff +0x13:  mov    %eax,(%esp)
08094902 +0x16:  call   08094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>  ; __slang_filter__FlexLexer::yyensure_buffer_stack()
08094907 +0x1b:  mov    0x8(%ebp),%eax
0809490a +0x1e:  mov    0x48(%eax),%eax
0809490d +0x21:  test   %eax,%eax
0809490f +0x23:  je     08094972 <+0x86>
08094911 +0x25:  mov    0x8(%ebp),%eax
08094914 +0x28:  mov    0x48(%eax),%edx
08094917 +0x2b:  mov    0x8(%ebp),%eax
0809491a +0x2e:  mov    0x40(%eax),%eax
0809491d +0x31:  shl    $0x2,%eax
08094920 +0x34:  lea    (%edx,%eax,1),%eax
08094923 +0x37:  mov    (%eax),%eax
08094925 +0x39:  test   %eax,%eax
08094927 +0x3b:  je     08094972 <+0x86>
08094929 +0x3d:  mov    0x8(%ebp),%eax
0809492c +0x40:  mov    0x30(%eax),%eax
0809492f +0x43:  mov    0x8(%ebp),%edx
08094932 +0x46:  movzbl 0x28(%edx),%edx
08094936 +0x4a:  mov    %dl,(%eax)
08094938 +0x4c:  mov    0x8(%ebp),%eax
0809493b +0x4f:  mov    0x48(%eax),%edx
0809493e +0x52:  mov    0x8(%ebp),%eax
08094941 +0x55:  mov    0x40(%eax),%eax
08094944 +0x58:  shl    $0x2,%eax
08094947 +0x5b:  lea    (%edx,%eax,1),%eax
0809494a +0x5e:  mov    (%eax),%eax
0809494c +0x60:  mov    0x8(%ebp),%edx
0809494f +0x63:  mov    0x30(%edx),%edx
08094952 +0x66:  mov    %edx,0x8(%eax)
08094955 +0x69:  mov    0x8(%ebp),%eax
08094958 +0x6c:  mov    0x48(%eax),%edx
0809495b +0x6f:  mov    0x8(%ebp),%eax
0809495e +0x72:  mov    0x40(%eax),%eax
08094961 +0x75:  shl    $0x2,%eax
08094964 +0x78:  lea    (%edx,%eax,1),%eax
08094967 +0x7b:  mov    (%eax),%eax
08094969 +0x7d:  mov    0x8(%ebp),%edx
0809496c +0x80:  mov    0x2c(%edx),%edx
0809496f +0x83:  mov    %edx,0x10(%eax)
08094972 +0x86:  mov    0x8(%ebp),%eax
08094975 +0x89:  mov    0x48(%eax),%eax
08094978 +0x8c:  test   %eax,%eax
0809497a +0x8e:  je     080949a3 <+0xb7>
0809497c +0x90:  mov    0x8(%ebp),%eax
0809497f +0x93:  mov    0x48(%eax),%edx
08094982 +0x96:  mov    0x8(%ebp),%eax
08094985 +0x99:  mov    0x40(%eax),%eax
08094988 +0x9c:  shl    $0x2,%eax
0809498b +0x9f:  lea    (%edx,%eax,1),%eax
0809498e +0xa2:  mov    (%eax),%eax
08094990 +0xa4:  test   %eax,%eax
08094992 +0xa6:  je     080949a3 <+0xb7>
08094994 +0xa8:  mov    0x8(%ebp),%eax
08094997 +0xab:  mov    0x40(%eax),%eax
0809499a +0xae:  lea    0x1(%eax),%edx
0809499d +0xb1:  mov    0x8(%ebp),%eax
080949a0 +0xb4:  mov    %edx,0x40(%eax)
080949a3 +0xb7:  mov    0x8(%ebp),%eax
080949a6 +0xba:  mov    0x48(%eax),%edx
080949a9 +0xbd:  mov    0x8(%ebp),%eax
080949ac +0xc0:  mov    0x40(%eax),%eax
080949af +0xc3:  shl    $0x2,%eax
080949b2 +0xc6:  add    %eax,%edx
080949b4 +0xc8:  mov    0xc(%ebp),%eax
080949b7 +0xcb:  mov    %eax,(%edx)
080949b9 +0xcd:  mov    0x8(%ebp),%eax
080949bc +0xd0:  mov    %eax,(%esp)
080949bf +0xd3:  call   0809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>  ; __slang_filter__FlexLexer::yy_load_buffer_state()
080949c4 +0xd8:  mov    0x8(%ebp),%eax
080949c7 +0xdb:  movl   $0x1,0x3c(%eax)
080949ce +0xe2:  jmp    080949d1 <+0xe5>
080949d0 +0xe4:  nop
080949d1 +0xe5:  leave
080949d2 +0xe6:  ret
080949d3 +0xe7:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yypush_buffer_state @ 0x80948ec

/* __slang_filter__FlexLexer::yypush_buffer_state(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yypush_buffer_state
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  if (param_1 != (yy_buffer_state *)0x0) {
    yyensure_buffer_stack(this);
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8) =
           *(undefined4 *)(this + 0x30);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    }
    *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = param_1;
    yy_load_buffer_state(this);
    *(undefined4 *)(this + 0x3c) = 1;
  }
  return;
}
```
