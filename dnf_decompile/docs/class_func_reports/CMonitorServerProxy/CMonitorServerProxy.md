# CMonitorServerProxy

`_ZN19CMonitorServerProxyC1ESsii`

`CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x0847097c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847097c  _ZN19CMonitorServerProxyC1ESsii
#           CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)
# range [0x0847097c, 0x084709ff]
0847097c +0x00:  push   %ebp
0847097d +0x01:  mov    %esp,%ebp
0847097f +0x03:  push   %esi
08470980 +0x04:  push   %ebx
08470981 +0x05:  sub    $0x10,%esp
08470984 +0x08:  mov    0x8(%ebp),%eax
08470987 +0x0b:  mov    0xc(%ebp),%edx
0847098a +0x0e:  mov    %edx,0x4(%esp)
0847098e +0x12:  mov    %eax,(%esp)
08470991 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08470996 +0x1a:  mov    0x8(%ebp),%eax
08470999 +0x1d:  mov    0x10(%ebp),%edx
0847099c +0x20:  mov    %edx,0x4(%eax)
0847099f +0x23:  mov    0x8(%ebp),%eax
084709a2 +0x26:  mov    0x14(%ebp),%edx
084709a5 +0x29:  mov    %edx,0x8(%eax)
084709a8 +0x2c:  mov    0x8(%ebp),%eax
084709ab +0x2f:  add    $0xc,%eax
084709ae +0x32:  mov    %eax,(%esp)
084709b1 +0x35:  call   082ab4f0 <_GLOBAL__I__ZN4CLog5this_E+0x7917>  ; global constructors keyed to CLog::this_+0x7917
084709b6 +0x3a:  mov    0x8(%ebp),%eax
084709b9 +0x3d:  add    $&_ZL14gUnicodeBuffer+0x268d8,%eax
084709be +0x42:  mov    %eax,(%esp)
084709c1 +0x45:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
084709c6 +0x4a:  jmp    084709f9 <+0x7d>
084709c8 +0x4c:  mov    %edx,%ebx
084709ca +0x4e:  mov    %eax,%esi
084709cc +0x50:  mov    0x8(%ebp),%eax
084709cf +0x53:  add    $0xc,%eax
084709d2 +0x56:  mov    %eax,(%esp)
084709d5 +0x59:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
084709da +0x5e:  mov    %esi,%eax
084709dc +0x60:  mov    %ebx,%edx
084709de +0x62:  mov    %edx,%ebx
084709e0 +0x64:  mov    %eax,%esi
084709e2 +0x66:  mov    0x8(%ebp),%eax
084709e5 +0x69:  mov    %eax,(%esp)
084709e8 +0x6c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084709ed +0x71:  mov    %esi,%eax
084709ef +0x73:  mov    %ebx,%edx
084709f1 +0x75:  mov    %eax,(%esp)
084709f4 +0x78:  call   08ae3750 <_Unwind_Resume>
084709f9 +0x7d:  add    $0x10,%esp
084709fc +0x80:  pop    %ebx
084709fd +0x81:  pop    %esi
084709fe +0x82:  pop    %ebp
084709ff +0x83:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::CMonitorServerProxy @ 0x847097c

/* CMonitorServerProxy::CMonitorServerProxy(std::string, int, int) */

void __thiscall
CMonitorServerProxy::CMonitorServerProxy
          (CMonitorServerProxy *this,string param_1,int param_2,int param_3)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 0xc));
                    /* try { // try from 084709c1 to 084709c5 has its CatchHandler @ 084709c8 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e04));
  return;
}
```
