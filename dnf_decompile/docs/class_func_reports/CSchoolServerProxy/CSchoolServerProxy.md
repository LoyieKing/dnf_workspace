# CSchoolServerProxy

`_ZN18CSchoolServerProxyC1ESsi`

`CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `CSchoolServerProxy` | `0x08471e24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471e24  _ZN18CSchoolServerProxyC1ESsi
#           CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x08471e24, 0x08471e79]
08471e24 +0x00:  push   %ebp
08471e25 +0x01:  mov    %esp,%ebp
08471e27 +0x03:  push   %esi
08471e28 +0x04:  push   %ebx
08471e29 +0x05:  sub    $0x10,%esp
08471e2c +0x08:  mov    0x8(%ebp),%eax
08471e2f +0x0b:  mov    0xc(%ebp),%edx
08471e32 +0x0e:  mov    %edx,0x4(%esp)
08471e36 +0x12:  mov    %eax,(%esp)
08471e39 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08471e3e +0x1a:  mov    0x8(%ebp),%eax
08471e41 +0x1d:  mov    0x10(%ebp),%edx
08471e44 +0x20:  mov    %edx,0x4(%eax)
08471e47 +0x23:  mov    0x8(%ebp),%eax
08471e4a +0x26:  add    $0x8,%eax
08471e4d +0x29:  mov    %eax,(%esp)
08471e50 +0x2c:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
08471e55 +0x31:  jmp    08471e72 <+0x4e>
08471e57 +0x33:  mov    %edx,%ebx
08471e59 +0x35:  mov    %eax,%esi
08471e5b +0x37:  mov    0x8(%ebp),%eax
08471e5e +0x3a:  mov    %eax,(%esp)
08471e61 +0x3d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08471e66 +0x42:  mov    %esi,%eax
08471e68 +0x44:  mov    %ebx,%edx
08471e6a +0x46:  mov    %eax,(%esp)
08471e6d +0x49:  call   08ae3750 <_Unwind_Resume>
08471e72 +0x4e:  add    $0x10,%esp
08471e75 +0x51:  pop    %ebx
08471e76 +0x52:  pop    %esi
08471e77 +0x53:  pop    %ebp
08471e78 +0x54:  ret
08471e79 +0x55:  nop
```

## 反编译 C

```c
// CSchoolServerProxy::CSchoolServerProxy @ 0x8471e24

/* CSchoolServerProxy::CSchoolServerProxy(std::string, int) */

void __thiscall
CSchoolServerProxy::CSchoolServerProxy(CSchoolServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08471e50 to 08471e54 has its CatchHandler @ 08471e57 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}
```
