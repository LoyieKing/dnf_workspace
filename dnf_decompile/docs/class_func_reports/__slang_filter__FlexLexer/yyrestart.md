# yyrestart

`_ZN25__slang_filter__FlexLexer9yyrestartEPSi`

`__slang_filter__FlexLexer::yyrestart(std::basic_istream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080944bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080944bc  _ZN25__slang_filter__FlexLexer9yyrestartEPSi
#           __slang_filter__FlexLexer::yyrestart(std::basic_istream<char, std::char_traits<char> >*)
# range [0x080944bc, 0x08094573]
080944bc +0x00:  push   %ebp
080944bd +0x01:  mov    %esp,%ebp
080944bf +0x03:  push   %ebx
080944c0 +0x04:  sub    $0x14,%esp
080944c3 +0x07:  mov    0x8(%ebp),%eax
080944c6 +0x0a:  mov    0x48(%eax),%eax
080944c9 +0x0d:  test   %eax,%eax
080944cb +0x0f:  je     080944e5 <+0x29>
080944cd +0x11:  mov    0x8(%ebp),%eax
080944d0 +0x14:  mov    0x48(%eax),%edx
080944d3 +0x17:  mov    0x8(%ebp),%eax
080944d6 +0x1a:  mov    0x40(%eax),%eax
080944d9 +0x1d:  shl    $0x2,%eax
080944dc +0x20:  lea    (%edx,%eax,1),%eax
080944df +0x23:  mov    (%eax),%eax
080944e1 +0x25:  test   %eax,%eax
080944e3 +0x27:  jne    08094528 <+0x6c>
080944e5 +0x29:  mov    0x8(%ebp),%eax
080944e8 +0x2c:  mov    %eax,(%esp)
080944eb +0x2f:  call   08094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>  ; __slang_filter__FlexLexer::yyensure_buffer_stack()
080944f0 +0x34:  mov    0x8(%ebp),%eax
080944f3 +0x37:  mov    0x48(%eax),%edx
080944f6 +0x3a:  mov    0x8(%ebp),%eax
080944f9 +0x3d:  mov    0x40(%eax),%eax
080944fc +0x40:  shl    $0x2,%eax
080944ff +0x43:  lea    (%edx,%eax,1),%ebx
08094502 +0x46:  mov    0x8(%ebp),%eax
08094505 +0x49:  mov    (%eax),%eax
08094507 +0x4b:  add    $0xc,%eax
0809450a +0x4e:  mov    (%eax),%edx
0809450c +0x50:  mov    0x8(%ebp),%eax
0809450f +0x53:  mov    0x20(%eax),%eax
08094512 +0x56:  movl   $0x4000,0x8(%esp)
0809451a +0x5e:  mov    %eax,0x4(%esp)
0809451e +0x62:  mov    0x8(%ebp),%eax
08094521 +0x65:  mov    %eax,(%esp)
08094524 +0x68:  call   *%edx
08094526 +0x6a:  mov    %eax,(%ebx)
08094528 +0x6c:  mov    0x8(%ebp),%eax
0809452b +0x6f:  mov    0x48(%eax),%eax
0809452e +0x72:  test   %eax,%eax
08094530 +0x74:  je     08094548 <+0x8c>
08094532 +0x76:  mov    0x8(%ebp),%eax
08094535 +0x79:  mov    0x48(%eax),%edx
08094538 +0x7c:  mov    0x8(%ebp),%eax
0809453b +0x7f:  mov    0x40(%eax),%eax
0809453e +0x82:  shl    $0x2,%eax
08094541 +0x85:  lea    (%edx,%eax,1),%eax
08094544 +0x88:  mov    (%eax),%eax
08094546 +0x8a:  jmp    0809454d <+0x91>
08094548 +0x8c:  mov    $0x0,%eax
0809454d +0x91:  mov    0xc(%ebp),%edx
08094550 +0x94:  mov    %edx,0x8(%esp)
08094554 +0x98:  mov    %eax,0x4(%esp)
08094558 +0x9c:  mov    0x8(%ebp),%eax
0809455b +0x9f:  mov    %eax,(%esp)
0809455e +0xa2:  call   080947de <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>  ; __slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
08094563 +0xa7:  mov    0x8(%ebp),%eax
08094566 +0xaa:  mov    %eax,(%esp)
08094569 +0xad:  call   0809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>  ; __slang_filter__FlexLexer::yy_load_buffer_state()
0809456e +0xb2:  add    $0x14,%esp
08094571 +0xb5:  pop    %ebx
08094572 +0xb6:  pop    %ebp
08094573 +0xb7:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yyrestart @ 0x80944bc

/* __slang_filter__FlexLexer::yyrestart(std::istream*) */

void __thiscall
__slang_filter__FlexLexer::yyrestart(__slang_filter__FlexLexer *this,istream *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  yy_buffer_state *pyVar4;
  
  if ((*(int *)(this + 0x48) == 0) ||
     (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) == 0)) {
    yyensure_buffer_stack(this);
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x40);
    uVar3 = (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0x20),0x4000);
    *(undefined4 *)(iVar1 + iVar2 * 4) = uVar3;
  }
  if (*(int *)(this + 0x48) == 0) {
    pyVar4 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar4 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  yy_init_buffer(this,pyVar4,param_1);
  yy_load_buffer_state(this);
  return;
}
```
