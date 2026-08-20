# LexerError

`_ZN23__dnf_script__FlexLexer10LexerErrorEPKc`

`__dnf_script__FlexLexer::LexerError(char const*)`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad2ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad2ee0  _ZN23__dnf_script__FlexLexer10LexerErrorEPKc
#           __dnf_script__FlexLexer::LexerError(char const*)
# range [0x08ad2ee0, 0x08ad2fa3]
08ad2ee0 +0x00:  push   %ebp
08ad2ee1 +0x01:  mov    %esp,%ebp
08ad2ee3 +0x03:  push   %ebx
08ad2ee4 +0x04:  sub    $0x14,%esp
08ad2ee7 +0x07:  mov    0xc(%ebp),%ebx
08ad2eea +0x0a:  test   %ebx,%ebx
08ad2eec +0x0c:  je     08ad2f78 <+0x98>
08ad2ef2 +0x12:  mov    %ebx,(%esp)
08ad2ef5 +0x15:  call   0807e3b0 <_init+0xca8>
08ad2efa +0x1a:  mov    %ebx,0x4(%esp)
08ad2efe +0x1e:  movl   $&_ZSt4cerr,(%esp)
08ad2f05 +0x25:  mov    %eax,0x8(%esp)
08ad2f09 +0x29:  call   086fcf60 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x86f4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x86f4
08ad2f0e +0x2e:  mov    &_ZSt4cerr,%eax
08ad2f13 +0x33:  mov    -0xc(%eax),%eax
08ad2f16 +0x36:  mov    &_ZSt4cerr+0x7c(%eax),%ebx
08ad2f1c +0x3c:  test   %ebx,%ebx
08ad2f1e +0x3e:  je     08ad2f9d <+0xbd>
08ad2f20 +0x40:  cmpb   $0x0,0x1c(%ebx)
08ad2f24 +0x44:  je     08ad2f58 <+0x78>
08ad2f26 +0x46:  movzbl 0x27(%ebx),%eax
08ad2f2a +0x4a:  movsbl %al,%eax
08ad2f2d +0x4d:  mov    %eax,0x4(%esp)
08ad2f31 +0x51:  movl   $&_ZSt4cerr,(%esp)
08ad2f38 +0x58:  call   086fd630 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8dc4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8dc4
08ad2f3d +0x5d:  mov    %eax,(%esp)
08ad2f40 +0x60:  call   086fc340 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4
08ad2f45 +0x65:  movl   $0x2,(%esp)
08ad2f4c +0x6c:  call   0807e1c0 <_init+0xab8>
08ad2f51 +0x71:  lea    0x0(%esi,%eiz,1),%esi
08ad2f58 +0x78:  mov    %ebx,(%esp)
08ad2f5b +0x7b:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
08ad2f60 +0x80:  mov    (%ebx),%eax
08ad2f62 +0x82:  movl   $0xa,0x4(%esp)
08ad2f6a +0x8a:  mov    %ebx,(%esp)
08ad2f6d +0x8d:  call   *0x18(%eax)
08ad2f70 +0x90:  jmp    08ad2f2a <+0x4a>
08ad2f72 +0x92:  lea    0x0(%esi),%esi
08ad2f78 +0x98:  mov    &_ZSt4cerr,%edx
08ad2f7e +0x9e:  mov    $&_ZSt4cerr,%eax
08ad2f83 +0xa3:  add    -0xc(%edx),%eax
08ad2f86 +0xa6:  mov    0x14(%eax),%edx
08ad2f89 +0xa9:  mov    %eax,(%esp)
08ad2f8c +0xac:  or     $0x1,%edx
08ad2f8f +0xaf:  mov    %edx,0x4(%esp)
08ad2f93 +0xb3:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08ad2f98 +0xb8:  jmp    08ad2f0e <+0x2e>
08ad2f9d +0xbd:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
08ad2fa2 +0xc2:  nop
08ad2fa3 +0xc3:  nop
```

## 反编译 C

```c
// __dnf_script__FlexLexer::LexerError @ 0x8ad2ee0

/* DWARF original prototype: void LexerError(__dnf_script__FlexLexer * this, char * msg) */

void __thiscall __dnf_script__FlexLexer::LexerError(__dnf_script__FlexLexer *this,char *msg)

{
  ctype<char> *this_00;
  ctype<char> cVar1;
  size_t sVar2;
  ostream *this_01;
  
  if (msg == (char *)0x0) {
    std::ios::clear((ios *)((int)&std::cerr + *(int *)(std::cerr + -0xc)),
                    *(_Ios_Iostate *)(&DAT_0948b474 + *(int *)(std::cerr + -0xc)) | _S_badbit);
  }
  else {
    sVar2 = strlen(msg);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cerr,msg,sVar2);
  }
  this_00 = *(ctype<char> **)(&DAT_0948b4dc + *(int *)(std::cerr + -0xc));
  if (this_00 != (ctype<char> *)0x0) {
    if (this_00[0x1c] == (ctype<char>)0x0) {
      std::ctype<char>::_M_widen_init(this_00);
      cVar1 = (ctype<char>)(**(code **)(*(int *)this_00 + 0x18))(this_00,10);
    }
    else {
      cVar1 = this_00[0x27];
    }
    this_01 = (ostream *)std::ostream::put((ostream *)&std::cerr,(char)cVar1);
    std::ostream::flush(this_01);
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_bad_cast();
}
```
