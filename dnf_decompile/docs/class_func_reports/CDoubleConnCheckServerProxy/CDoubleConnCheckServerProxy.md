# CDoubleConnCheckServerProxy

`_ZN27CDoubleConnCheckServerProxyC1ESsi`

`CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d300  _ZN27CDoubleConnCheckServerProxyC1ESsi
#           CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x0846d300, 0x0846d355]
0846d300 +0x00:  push   %ebp
0846d301 +0x01:  mov    %esp,%ebp
0846d303 +0x03:  push   %esi
0846d304 +0x04:  push   %ebx
0846d305 +0x05:  sub    $0x10,%esp
0846d308 +0x08:  mov    0x8(%ebp),%eax
0846d30b +0x0b:  mov    0xc(%ebp),%edx
0846d30e +0x0e:  mov    %edx,0x4(%esp)
0846d312 +0x12:  mov    %eax,(%esp)
0846d315 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0846d31a +0x1a:  mov    0x8(%ebp),%eax
0846d31d +0x1d:  mov    0x10(%ebp),%edx
0846d320 +0x20:  mov    %edx,0x4(%eax)
0846d323 +0x23:  mov    0x8(%ebp),%eax
0846d326 +0x26:  add    $0x8,%eax
0846d329 +0x29:  mov    %eax,(%esp)
0846d32c +0x2c:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
0846d331 +0x31:  jmp    0846d34e <+0x4e>
0846d333 +0x33:  mov    %edx,%ebx
0846d335 +0x35:  mov    %eax,%esi
0846d337 +0x37:  mov    0x8(%ebp),%eax
0846d33a +0x3a:  mov    %eax,(%esp)
0846d33d +0x3d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0846d342 +0x42:  mov    %esi,%eax
0846d344 +0x44:  mov    %ebx,%edx
0846d346 +0x46:  mov    %eax,(%esp)
0846d349 +0x49:  call   08ae3750 <_Unwind_Resume>
0846d34e +0x4e:  add    $0x10,%esp
0846d351 +0x51:  pop    %ebx
0846d352 +0x52:  pop    %esi
0846d353 +0x53:  pop    %ebp
0846d354 +0x54:  ret
0846d355 +0x55:  nop
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy @ 0x846d300

/* CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::string, int) */

void __thiscall
CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy
          (CDoubleConnCheckServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 0846d32c to 0846d330 has its CatchHandler @ 0846d333 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}
```
