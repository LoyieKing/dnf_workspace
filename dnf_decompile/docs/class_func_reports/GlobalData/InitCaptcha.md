# InitCaptcha

`_ZN10GlobalData11InitCaptchaEv`

`GlobalData::InitCaptcha()`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x0829d438` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829d438  _ZN10GlobalData11InitCaptchaEv
#           GlobalData::InitCaptcha()
# range [0x0829d438, 0x0829d4af]
0829d438 +0x00:  push   %ebp
0829d439 +0x01:  mov    %esp,%ebp
0829d43b +0x03:  sub    $0x28,%esp
0829d43e +0x06:  movl   $0x24,0x8(%esp)
0829d446 +0x0e:  movl   $"captcha_font/SeoulHangangL.ttf",0x4(%esp)
0829d44e +0x16:  movl   $&_ZN10GlobalData3cg_E,(%esp)
0829d455 +0x1d:  call   080de794 <_ZN10CaptchaGen7addFontEPKci>  ; CaptchaGen::addFont(char const*, int)
0829d45a +0x22:  xor    $0x1,%eax
0829d45d +0x25:  test   %al,%al
0829d45f +0x27:  je     0829d48c <+0x54>
0829d461 +0x29:  movl   $"[GlobalData::Init] cg.loadFont fail",0x4(%esp)
0829d469 +0x31:  movl   $&_ZSt4cerr,(%esp)
0829d470 +0x38:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829d475 +0x3d:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829d47d +0x45:  mov    %eax,(%esp)
0829d480 +0x48:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829d485 +0x4d:  mov    $0x0,%eax
0829d48a +0x52:  jmp    0829d4ae <+0x76>
0829d48c +0x54:  movl   $0x0,-0xc(%ebp)
0829d493 +0x5b:  jmp    0829d49e <+0x66>
0829d495 +0x5d:  call   0829d4b0 <_ZN10GlobalData19GenerateCaptchaDataEv>  ; GlobalData::GenerateCaptchaData()
0829d49a +0x62:  addl   $0x1,-0xc(%ebp)
0829d49e +0x66:  cmpl   $0x27,-0xc(%ebp)
0829d4a2 +0x6a:  setle  %al
0829d4a5 +0x6d:  test   %al,%al
0829d4a7 +0x6f:  jne    0829d495 <+0x5d>
0829d4a9 +0x71:  mov    $0x1,%eax
0829d4ae +0x76:  leave
0829d4af +0x77:  ret
```

## 反编译 C

```c
// GlobalData::InitCaptcha @ 0x829d438

/* GlobalData::InitCaptcha() */

undefined4 GlobalData::InitCaptcha(void)

{
  char cVar1;
  ostream *this;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = CaptchaGen::addFont((CaptchaGen *)cg_,"captcha_font/SeoulHangangL.ttf",0x24);
  if (cVar1 == '\x01') {
    for (local_10 = 0; local_10 < 0x28; local_10 = local_10 + 1) {
      GenerateCaptchaData();
    }
    uVar2 = 1;
  }
  else {
    this = std::operator<<((ostream *)&std::cerr,"[GlobalData::Init] cg.loadFont fail");
    std::ostream::operator<<(this,std::endl<char,std::char_traits<char>>);
    uVar2 = 0;
  }
  return uVar2;
}
```
