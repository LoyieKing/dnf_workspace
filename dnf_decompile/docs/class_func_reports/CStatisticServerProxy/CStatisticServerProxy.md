# CStatisticServerProxy

`_ZN21CStatisticServerProxyC1ESsi`

`CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `CStatisticServerProxy` | `0x08471f84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471f84  _ZN21CStatisticServerProxyC1ESsi
#           CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x08471f84, 0x08471fd9]
08471f84 +0x00:  push   %ebp
08471f85 +0x01:  mov    %esp,%ebp
08471f87 +0x03:  push   %esi
08471f88 +0x04:  push   %ebx
08471f89 +0x05:  sub    $0x10,%esp
08471f8c +0x08:  mov    0x8(%ebp),%eax
08471f8f +0x0b:  mov    0xc(%ebp),%edx
08471f92 +0x0e:  mov    %edx,0x4(%esp)
08471f96 +0x12:  mov    %eax,(%esp)
08471f99 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08471f9e +0x1a:  mov    0x8(%ebp),%eax
08471fa1 +0x1d:  mov    0x10(%ebp),%edx
08471fa4 +0x20:  mov    %edx,0x4(%eax)
08471fa7 +0x23:  mov    0x8(%ebp),%eax
08471faa +0x26:  add    $0x8,%eax
08471fad +0x29:  mov    %eax,(%esp)
08471fb0 +0x2c:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
08471fb5 +0x31:  jmp    08471fd2 <+0x4e>
08471fb7 +0x33:  mov    %edx,%ebx
08471fb9 +0x35:  mov    %eax,%esi
08471fbb +0x37:  mov    0x8(%ebp),%eax
08471fbe +0x3a:  mov    %eax,(%esp)
08471fc1 +0x3d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08471fc6 +0x42:  mov    %esi,%eax
08471fc8 +0x44:  mov    %ebx,%edx
08471fca +0x46:  mov    %eax,(%esp)
08471fcd +0x49:  call   08ae3750 <_Unwind_Resume>
08471fd2 +0x4e:  add    $0x10,%esp
08471fd5 +0x51:  pop    %ebx
08471fd6 +0x52:  pop    %esi
08471fd7 +0x53:  pop    %ebp
08471fd8 +0x54:  ret
08471fd9 +0x55:  nop
```

## 反编译 C

```c
// CStatisticServerProxy::CStatisticServerProxy @ 0x8471f84

/* CStatisticServerProxy::CStatisticServerProxy(std::string, int) */

void __thiscall
CStatisticServerProxy::CStatisticServerProxy(CStatisticServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08471fb0 to 08471fb4 has its CatchHandler @ 08471fb7 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}
```
