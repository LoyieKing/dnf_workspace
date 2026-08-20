# runtime_error

`_ZNSt13runtime_errorC1ERKSs`

`std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `std::runtime_error` | `0x086dd180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd180  _ZNSt13runtime_errorC1ERKSs
#           std::runtime_error::runtime_error(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086dd180, 0x086dd1bf]
086dd180 +0x00:  push   %ebp
086dd181 +0x01:  mov    %esp,%ebp
086dd183 +0x03:  push   %ebx
086dd184 +0x04:  sub    $0x24,%esp
086dd187 +0x07:  mov    0x8(%ebp),%ebx
086dd18a +0x0a:  mov    0xc(%ebp),%eax
086dd18d +0x0d:  movl   $&_ZTVSt13runtime_error+0x8,(%ebx)
086dd193 +0x13:  mov    %eax,0x4(%esp)
086dd197 +0x17:  lea    0x4(%ebx),%eax
086dd19a +0x1a:  mov    %eax,(%esp)
086dd19d +0x1d:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086dd1a2 +0x22:  add    $0x24,%esp
086dd1a5 +0x25:  pop    %ebx
086dd1a6 +0x26:  pop    %ebp
086dd1a7 +0x27:  ret
086dd1a8 +0x28:  mov    %eax,-0xc(%ebp)
086dd1ab +0x2b:  mov    %ebx,(%esp)
086dd1ae +0x2e:  call   08725080 <_ZNSt9exceptionD1Ev>  ; std::exception::~exception()
086dd1b3 +0x33:  mov    -0xc(%ebp),%eax
086dd1b6 +0x36:  mov    %eax,(%esp)
086dd1b9 +0x39:  call   08ae3750 <_Unwind_Resume>
086dd1be +0x3e:  nop
086dd1bf +0x3f:  nop
```

## 反编译 C

```c
// std::runtime_error::runtime_error @ 0x86dd180

/* std::runtime_error::runtime_error(std::string const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  *(undefined ***)this = &PTR__runtime_error_08cfe1b8;
                    /* try { // try from 086dd19d to 086dd1a1 has its CatchHandler @ 086dd1a8 */
  string::string((string *)(this + 4),(string *)param_1);
  return;
}
```
