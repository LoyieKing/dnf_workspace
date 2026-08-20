# ~__slang_filter__FlexLexer

`_ZN25__slang_filter__FlexLexerD1Ev`

`__slang_filter__FlexLexer::~__slang_filter__FlexLexer()`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x0809391a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809391a  _ZN25__slang_filter__FlexLexerD1Ev
#           __slang_filter__FlexLexer::~__slang_filter__FlexLexer()
# range [0x0809391a, 0x080939d5]
0809391a +0x00:  push   %ebp
0809391b +0x01:  mov    %esp,%ebp
0809391d +0x03:  push   %esi
0809391e +0x04:  push   %ebx
0809391f +0x05:  sub    $0x10,%esp
08093922 +0x08:  mov    0x8(%ebp),%eax
08093925 +0x0b:  movl   $&_ZTV25__slang_filter__FlexLexer+0x8,(%eax)
0809392b +0x11:  mov    0x8(%ebp),%eax
0809392e +0x14:  mov    0x54(%eax),%eax
08093931 +0x17:  test   %eax,%eax
08093933 +0x19:  je     08093943 <+0x29>
08093935 +0x1b:  mov    0x8(%ebp),%eax
08093938 +0x1e:  mov    0x54(%eax),%eax
0809393b +0x21:  mov    %eax,(%esp)
0809393e +0x24:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08093943 +0x29:  mov    0x8(%ebp),%eax
08093946 +0x2c:  mov    0x1c(%eax),%eax
08093949 +0x2f:  mov    %eax,(%esp)
0809394c +0x32:  call   08094da2 <_Z20__slang_filter__freePv>  ; __slang_filter__free(void*)
08093951 +0x37:  mov    0x8(%ebp),%eax
08093954 +0x3a:  mov    0x48(%eax),%eax
08093957 +0x3d:  test   %eax,%eax
08093959 +0x3f:  je     08093971 <+0x57>
0809395b +0x41:  mov    0x8(%ebp),%eax
0809395e +0x44:  mov    0x48(%eax),%edx
08093961 +0x47:  mov    0x8(%ebp),%eax
08093964 +0x4a:  mov    0x40(%eax),%eax
08093967 +0x4d:  shl    $0x2,%eax
0809396a +0x50:  lea    (%edx,%eax,1),%eax
0809396d +0x53:  mov    (%eax),%eax
0809396f +0x55:  jmp    08093976 <+0x5c>
08093971 +0x57:  mov    $0x0,%eax
08093976 +0x5c:  mov    %eax,0x4(%esp)
0809397a +0x60:  mov    0x8(%ebp),%eax
0809397d +0x63:  mov    %eax,(%esp)
08093980 +0x66:  call   08094768 <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state>  ; __slang_filter__FlexLexer::yy_delete_buffer(yy_buffer_state*)
08093985 +0x6b:  mov    0x8(%ebp),%eax
08093988 +0x6e:  mov    0x48(%eax),%eax
0809398b +0x71:  mov    %eax,(%esp)
0809398e +0x74:  call   08094da2 <_Z20__slang_filter__freePv>  ; __slang_filter__free(void*)
08093993 +0x79:  mov    0x8(%ebp),%eax
08093996 +0x7c:  mov    %eax,(%esp)
08093999 +0x7f:  call   08094e12 <_GLOBAL__I__ZN25__slang_filter__FlexLexer6yywrapEv+0x1d>  ; global constructors keyed to __slang_filter__FlexLexer::yywrap()+0x1d
0809399e +0x84:  mov    $0x0,%eax
080939a3 +0x89:  test   %al,%al
080939a5 +0x8b:  je     080939cf <+0xb5>
080939a7 +0x8d:  jmp    080939c4 <+0xaa>
080939a9 +0x8f:  mov    %edx,%ebx
080939ab +0x91:  mov    %eax,%esi
080939ad +0x93:  mov    0x8(%ebp),%eax
080939b0 +0x96:  mov    %eax,(%esp)
080939b3 +0x99:  call   08094e12 <_GLOBAL__I__ZN25__slang_filter__FlexLexer6yywrapEv+0x1d>  ; global constructors keyed to __slang_filter__FlexLexer::yywrap()+0x1d
080939b8 +0x9e:  mov    %esi,%eax
080939ba +0xa0:  mov    %ebx,%edx
080939bc +0xa2:  mov    %eax,(%esp)
080939bf +0xa5:  call   08ae3750 <_Unwind_Resume>
080939c4 +0xaa:  mov    0x8(%ebp),%eax
080939c7 +0xad:  mov    %eax,(%esp)
080939ca +0xb0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080939cf +0xb5:  add    $0x10,%esp
080939d2 +0xb8:  pop    %ebx
080939d3 +0xb9:  pop    %esi
080939d4 +0xba:  pop    %ebp
080939d5 +0xbb:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::~__slang_filter__FlexLexer @ 0x809391a

/* WARNING: Removing unreachable block (ram,0x080939a7) */
/* __slang_filter__FlexLexer::~__slang_filter__FlexLexer() */

void __thiscall
__slang_filter__FlexLexer::~__slang_filter__FlexLexer(__slang_filter__FlexLexer *this)

{
  yy_buffer_state *pyVar1;
  
  *(undefined ***)this = &PTR____slang_filter__FlexLexer_08b12328;
  if (*(int *)(this + 0x54) != 0) {
    operator_delete__(*(void **)(this + 0x54));
  }
  __slang_filter__free(*(void **)(this + 0x1c));
  if (*(int *)(this + 0x48) == 0) {
    pyVar1 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
                    /* try { // try from 08093980 to 08093984 has its CatchHandler @ 080939a9 */
  yy_delete_buffer(this,pyVar1);
  __slang_filter__free(*(void **)(this + 0x48));
  FlexLexer::~FlexLexer((FlexLexer *)this);
  return;
}
```
