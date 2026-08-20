# switch_streams

`_ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo`

`__slang_filter__FlexLexer::switch_streams(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080939f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080939f4  _ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo
#           __slang_filter__FlexLexer::switch_streams(std::basic_istream<char, std::char_traits<char> >*, std::basic_ostream<char, std::char_traits<char> >*)
# range [0x080939f4, 0x08093a87]
080939f4 +0x00:  push   %ebp
080939f5 +0x01:  mov    %esp,%ebp
080939f7 +0x03:  push   %ebx
080939f8 +0x04:  sub    $0x14,%esp
080939fb +0x07:  cmpl   $0x0,0xc(%ebp)
080939ff +0x0b:  je     08093a73 <+0x7f>
08093a01 +0x0d:  mov    0x8(%ebp),%eax
08093a04 +0x10:  mov    (%eax),%eax
08093a06 +0x12:  add    $0x10,%eax
08093a09 +0x15:  mov    (%eax),%edx
08093a0b +0x17:  mov    0x8(%ebp),%eax
08093a0e +0x1a:  mov    0x48(%eax),%eax
08093a11 +0x1d:  test   %eax,%eax
08093a13 +0x1f:  je     08093a2b <+0x37>
08093a15 +0x21:  mov    0x8(%ebp),%eax
08093a18 +0x24:  mov    0x48(%eax),%ecx
08093a1b +0x27:  mov    0x8(%ebp),%eax
08093a1e +0x2a:  mov    0x40(%eax),%eax
08093a21 +0x2d:  shl    $0x2,%eax
08093a24 +0x30:  lea    (%ecx,%eax,1),%eax
08093a27 +0x33:  mov    (%eax),%eax
08093a29 +0x35:  jmp    08093a30 <+0x3c>
08093a2b +0x37:  mov    $0x0,%eax
08093a30 +0x3c:  mov    %eax,0x4(%esp)
08093a34 +0x40:  mov    0x8(%ebp),%eax
08093a37 +0x43:  mov    %eax,(%esp)
08093a3a +0x46:  call   *%edx
08093a3c +0x48:  mov    0x8(%ebp),%eax
08093a3f +0x4b:  mov    (%eax),%eax
08093a41 +0x4d:  add    $0x8,%eax
08093a44 +0x50:  mov    (%eax),%ebx
08093a46 +0x52:  mov    0x8(%ebp),%eax
08093a49 +0x55:  mov    (%eax),%eax
08093a4b +0x57:  add    $0xc,%eax
08093a4e +0x5a:  mov    (%eax),%edx
08093a50 +0x5c:  movl   $0x4000,0x8(%esp)
08093a58 +0x64:  mov    0xc(%ebp),%eax
08093a5b +0x67:  mov    %eax,0x4(%esp)
08093a5f +0x6b:  mov    0x8(%ebp),%eax
08093a62 +0x6e:  mov    %eax,(%esp)
08093a65 +0x71:  call   *%edx
08093a67 +0x73:  mov    %eax,0x4(%esp)
08093a6b +0x77:  mov    0x8(%ebp),%eax
08093a6e +0x7a:  mov    %eax,(%esp)
08093a71 +0x7d:  call   *%ebx
08093a73 +0x7f:  cmpl   $0x0,0x10(%ebp)
08093a77 +0x83:  je     08093a82 <+0x8e>
08093a79 +0x85:  mov    0x8(%ebp),%eax
08093a7c +0x88:  mov    0x10(%ebp),%edx
08093a7f +0x8b:  mov    %edx,0x24(%eax)
08093a82 +0x8e:  add    $0x14,%esp
08093a85 +0x91:  pop    %ebx
08093a86 +0x92:  pop    %ebp
08093a87 +0x93:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::switch_streams @ 0x80939f4

/* __slang_filter__FlexLexer::switch_streams(std::istream*, std::ostream*) */

void __thiscall
__slang_filter__FlexLexer::switch_streams
          (__slang_filter__FlexLexer *this,istream *param_1,ostream *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != (istream *)0x0) {
    if (*(int *)(this + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    (**(code **)(*(int *)this + 0x10))(this,uVar2);
    pcVar1 = *(code **)(*(int *)this + 8);
    uVar2 = (**(code **)(*(int *)this + 0xc))(this,param_1,0x4000);
    (*pcVar1)(this,uVar2);
  }
  if (param_2 != (ostream *)0x0) {
    *(ostream **)(this + 0x24) = param_2;
  }
  return;
}
```
