# isDuplicationMessage

`_ZN5CUser20isDuplicationMessageERKSs`

`CUser::isDuplicationMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086887c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086887c4  _ZN5CUser20isDuplicationMessageERKSs
#           CUser::isDuplicationMessage(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x086887c4, 0x08688859]
086887c4 +0x00:  push   %ebp
086887c5 +0x01:  mov    %esp,%ebp
086887c7 +0x03:  sub    $0x28,%esp
086887ca +0x06:  mov    0x8(%ebp),%eax
086887cd +0x09:  lea    0x79664(%eax),%edx
086887d3 +0x0f:  mov    0xc(%ebp),%eax
086887d6 +0x12:  mov    %eax,0x4(%esp)
086887da +0x16:  mov    %edx,(%esp)
086887dd +0x19:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
086887e2 +0x1e:  test   %al,%al
086887e4 +0x20:  jne    08688802 <+0x3e>
086887e6 +0x22:  mov    0x8(%ebp),%eax
086887e9 +0x25:  lea    0x79668(%eax),%edx
086887ef +0x2b:  mov    0xc(%ebp),%eax
086887f2 +0x2e:  mov    %eax,0x4(%esp)
086887f6 +0x32:  mov    %edx,(%esp)
086887f9 +0x35:  call   08171273 <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x138>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x138
086887fe +0x3a:  test   %al,%al
08688800 +0x3c:  je     08688809 <+0x45>
08688802 +0x3e:  mov    $0x1,%eax
08688807 +0x43:  jmp    0868880e <+0x4a>
08688809 +0x45:  mov    $0x0,%eax
0868880e +0x4a:  mov    %al,-0x9(%ebp)
08688811 +0x4d:  mov    0x8(%ebp),%eax
08688814 +0x50:  movzbl 0x7966c(%eax),%eax
0868881b +0x57:  movsbl %al,%eax
0868881e +0x5a:  add    $&_ZL14gUnicodeBuffer+0x1406c,%eax
08688823 +0x5f:  shl    $0x2,%eax
08688826 +0x62:  add    0x8(%ebp),%eax
08688829 +0x65:  lea    0x4(%eax),%edx
0868882c +0x68:  mov    0xc(%ebp),%eax
0868882f +0x6b:  mov    %eax,0x4(%esp)
08688833 +0x6f:  mov    %edx,(%esp)
08688836 +0x72:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0868883b +0x77:  mov    0x8(%ebp),%eax
0868883e +0x7a:  movzbl 0x7966c(%eax),%eax
08688845 +0x81:  mov    %eax,%edx
08688847 +0x83:  xor    $0x1,%edx
0868884a +0x86:  mov    0x8(%ebp),%eax
0868884d +0x89:  mov    %dl,0x7966c(%eax)
08688853 +0x8f:  movzbl -0x9(%ebp),%eax
08688857 +0x93:  leave
08688858 +0x94:  ret
08688859 +0x95:  nop
```

## 反编译 C

```c
// CUser::isDuplicationMessage @ 0x86887c4

/* CUser::isDuplicationMessage(std::string const&) */

undefined1 __thiscall CUser::isDuplicationMessage(CUser *this,string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = std::operator==((string *)(this + 0x79664),param_1);
  if (cVar1 == '\0') {
    cVar1 = std::operator==((string *)(this + 0x79668),param_1);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0868880e;
    }
  }
  uVar2 = 1;
LAB_0868880e:
  std::string::operator=
            ((string *)(this + ((char)this[0x7966c] + 0x1e598) * 4 + 4),(string *)param_1);
  this[0x7966c] = (CUser)((byte)this[0x7966c] ^ 1);
  return uVar2;
}
```
