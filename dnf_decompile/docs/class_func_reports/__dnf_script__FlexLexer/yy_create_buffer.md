# yy_create_buffer

`_ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii`

`__dnf_script__FlexLexer::yy_create_buffer(std::basic_istream<char, std::char_traits<char> >*, int)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2620  _ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii
#           __dnf_script__FlexLexer::yy_create_buffer(std::basic_istream<char, std::char_traits<char> >*, int)
# range [0x08ad2620, 0x08ad26b9]
08ad2620 +0x00:  push   %ebp
08ad2621 +0x01:  mov    %esp,%ebp
08ad2623 +0x03:  sub    $0x28,%esp
08ad2626 +0x06:  movl   $0x30,(%esp)
08ad262d +0x0d:  mov    %ebx,-0xc(%ebp)
08ad2630 +0x10:  mov    %esi,-0x8(%ebp)
08ad2633 +0x13:  mov    0x10(%ebp),%esi
08ad2636 +0x16:  mov    %edi,-0x4(%ebp)
08ad2639 +0x19:  mov    0x8(%ebp),%edi
08ad263c +0x1c:  call   0807df80 <_init+0x878>
08ad2641 +0x21:  test   %eax,%eax
08ad2643 +0x23:  mov    %eax,%ebx
08ad2645 +0x25:  je     08ad26a0 <+0x80>
08ad2647 +0x27:  mov    %esi,0xc(%ebx)
08ad264a +0x2a:  add    $0x2,%esi
08ad264d +0x2d:  mov    %esi,(%esp)
08ad2650 +0x30:  call   0807df80 <_init+0x878>
08ad2655 +0x35:  test   %eax,%eax
08ad2657 +0x37:  mov    %eax,0x4(%ebx)
08ad265a +0x3a:  je     08ad2688 <+0x68>
08ad265c +0x3c:  mov    0xc(%ebp),%eax
08ad265f +0x3f:  mov    %ebx,0x4(%esp)
08ad2663 +0x43:  mov    %edi,(%esp)
08ad2666 +0x46:  movl   $0x1,0x14(%ebx)
08ad266d +0x4d:  mov    %eax,0x8(%esp)
08ad2671 +0x51:  call   08ad25a0 <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>  ; __dnf_script__FlexLexer::yy_init_buffer(yy_buffer_state*, std::basic_istream<char, std::char_traits<char> >*)
08ad2676 +0x56:  mov    %ebx,%eax
08ad2678 +0x58:  mov    -0x8(%ebp),%esi
08ad267b +0x5b:  mov    -0xc(%ebp),%ebx
08ad267e +0x5e:  mov    -0x4(%ebp),%edi
08ad2681 +0x61:  mov    %ebp,%esp
08ad2683 +0x63:  pop    %ebp
08ad2684 +0x64:  ret
08ad2685 +0x65:  lea    0x0(%esi),%esi
08ad2688 +0x68:  mov    (%edi),%eax
08ad268a +0x6a:  movl   $"out of dynamic memory in yy_create_buffer()",0x4(%esp)
08ad2692 +0x72:  mov    %edi,(%esp)
08ad2695 +0x75:  call   *0x2c(%eax)
08ad2698 +0x78:  jmp    08ad265c <+0x3c>
08ad269a +0x7a:  lea    0x0(%esi),%esi
08ad26a0 +0x80:  mov    (%edi),%eax
08ad26a2 +0x82:  movl   $"out of dynamic memory in yy_create_buffer()",0x4(%esp)
08ad26aa +0x8a:  mov    %edi,(%esp)
08ad26ad +0x8d:  call   *0x2c(%eax)
08ad26b0 +0x90:  jmp    08ad2647 <+0x27>
08ad26b2 +0x92:  lea    0x0(%esi,%eiz,1),%esi
08ad26b9 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_create_buffer @ 0x8ad2620

/* DWARF original prototype: YY_BUFFER_STATE yy_create_buffer(__dnf_script__FlexLexer * this,
   istream * file, int size) */

YY_BUFFER_STATE __thiscall
__dnf_script__FlexLexer::yy_create_buffer(__dnf_script__FlexLexer *this,istream *file,int size)

{
  YY_BUFFER_STATE b;
  char *pcVar1;
  
                    /* Unresolved local var: YY_BUFFER_STATE b@[???] */
  b = malloc(0x30);
  if (b == (YY_BUFFER_STATE)0x0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"out of dynamic memory in yy_create_buffer()");
  }
  b->yy_buf_size = size;
  pcVar1 = malloc(size + 2);
  b->yy_ch_buf = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"out of dynamic memory in yy_create_buffer()");
  }
  b->yy_is_our_buffer = 1;
  yy_init_buffer(this,b,file);
  return b;
}
```
