# CmmChannelProxy

`_ZN15CmmChannelProxyC1ESsi`

`CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x081060f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081060f4  _ZN15CmmChannelProxyC1ESsi
#           CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x081060f4, 0x08106149]
081060f4 +0x00:  push   %ebp
081060f5 +0x01:  mov    %esp,%ebp
081060f7 +0x03:  push   %esi
081060f8 +0x04:  push   %ebx
081060f9 +0x05:  sub    $0x10,%esp
081060fc +0x08:  mov    0x8(%ebp),%eax
081060ff +0x0b:  mov    0xc(%ebp),%edx
08106102 +0x0e:  mov    %edx,0x4(%esp)
08106106 +0x12:  mov    %eax,(%esp)
08106109 +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0810610e +0x1a:  mov    0x8(%ebp),%eax
08106111 +0x1d:  mov    0x10(%ebp),%edx
08106114 +0x20:  mov    %edx,0x4(%eax)
08106117 +0x23:  mov    0x8(%ebp),%eax
0810611a +0x26:  add    $0x10,%eax
0810611d +0x29:  mov    %eax,(%esp)
08106120 +0x2c:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
08106125 +0x31:  jmp    08106142 <+0x4e>
08106127 +0x33:  mov    %edx,%ebx
08106129 +0x35:  mov    %eax,%esi
0810612b +0x37:  mov    0x8(%ebp),%eax
0810612e +0x3a:  mov    %eax,(%esp)
08106131 +0x3d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08106136 +0x42:  mov    %esi,%eax
08106138 +0x44:  mov    %ebx,%edx
0810613a +0x46:  mov    %eax,(%esp)
0810613d +0x49:  call   08ae3750 <_Unwind_Resume>
08106142 +0x4e:  add    $0x10,%esp
08106145 +0x51:  pop    %ebx
08106146 +0x52:  pop    %esi
08106147 +0x53:  pop    %ebp
08106148 +0x54:  ret
08106149 +0x55:  nop
```

## 反编译 C

```c
// CmmChannelProxy::CmmChannelProxy @ 0x81060f4

/* CmmChannelProxy::CmmChannelProxy(std::string, int) */

void __thiscall CmmChannelProxy::CmmChannelProxy(CmmChannelProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08106120 to 08106124 has its CatchHandler @ 08106127 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x10));
  return;
}
```
