# CGuildServerProxy

`_ZN17CGuildServerProxyC1ESsii`

`CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846d818` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d818  _ZN17CGuildServerProxyC1ESsii
#           CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)
# range [0x0846d818, 0x0846d8c1]
0846d818 +0x00:  push   %ebp
0846d819 +0x01:  mov    %esp,%ebp
0846d81b +0x03:  push   %esi
0846d81c +0x04:  push   %ebx
0846d81d +0x05:  sub    $0x10,%esp
0846d820 +0x08:  mov    0x8(%ebp),%eax
0846d823 +0x0b:  mov    0xc(%ebp),%edx
0846d826 +0x0e:  mov    %edx,0x4(%esp)
0846d82a +0x12:  mov    %eax,(%esp)
0846d82d +0x15:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0846d832 +0x1a:  mov    0x8(%ebp),%eax
0846d835 +0x1d:  mov    0x10(%ebp),%edx
0846d838 +0x20:  mov    %edx,0x4(%eax)
0846d83b +0x23:  mov    0x8(%ebp),%eax
0846d83e +0x26:  add    $0x8,%eax
0846d841 +0x29:  mov    %eax,(%esp)
0846d844 +0x2c:  call   082ab5a6 <_GLOBAL__I__ZN4CLog5this_E+0x79cd>  ; global constructors keyed to CLog::this_+0x79cd
0846d849 +0x31:  mov    0x8(%ebp),%eax
0846d84c +0x34:  mov    0x14(%ebp),%edx
0846d84f +0x37:  mov    %edx,0x20(%eax)
0846d852 +0x3a:  mov    0x8(%ebp),%eax
0846d855 +0x3d:  add    $0x24,%eax
0846d858 +0x40:  mov    %eax,(%esp)
0846d85b +0x43:  call   082ab4f0 <_GLOBAL__I__ZN4CLog5this_E+0x7917>  ; global constructors keyed to CLog::this_+0x7917
0846d860 +0x48:  mov    0x8(%ebp),%eax
0846d863 +0x4b:  add    $&_ZL14gUnicodeBuffer+0x268f0,%eax
0846d868 +0x50:  mov    %eax,(%esp)
0846d86b +0x53:  call   08483518 <_ZN11CUdpHandlerC1Ev>  ; CUdpHandler::CUdpHandler()
0846d870 +0x58:  jmp    0846d8bb <+0xa3>
0846d872 +0x5a:  mov    %edx,%ebx
0846d874 +0x5c:  mov    %eax,%esi
0846d876 +0x5e:  mov    0x8(%ebp),%eax
0846d879 +0x61:  add    $0x24,%eax
0846d87c +0x64:  mov    %eax,(%esp)
0846d87f +0x67:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
0846d884 +0x6c:  mov    %esi,%eax
0846d886 +0x6e:  mov    %ebx,%edx
0846d888 +0x70:  mov    %edx,%ebx
0846d88a +0x72:  mov    %eax,%esi
0846d88c +0x74:  mov    0x8(%ebp),%eax
0846d88f +0x77:  add    $0x8,%eax
0846d892 +0x7a:  mov    %eax,(%esp)
0846d895 +0x7d:  call   082a6a82 <_GLOBAL__I__ZN4CLog5this_E+0x2ea9>  ; global constructors keyed to CLog::this_+0x2ea9
0846d89a +0x82:  mov    %esi,%eax
0846d89c +0x84:  mov    %ebx,%edx
0846d89e +0x86:  jmp    0846d8a0 <+0x88>
0846d8a0 +0x88:  mov    %edx,%ebx
0846d8a2 +0x8a:  mov    %eax,%esi
0846d8a4 +0x8c:  mov    0x8(%ebp),%eax
0846d8a7 +0x8f:  mov    %eax,(%esp)
0846d8aa +0x92:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0846d8af +0x97:  mov    %esi,%eax
0846d8b1 +0x99:  mov    %ebx,%edx
0846d8b3 +0x9b:  mov    %eax,(%esp)
0846d8b6 +0x9e:  call   08ae3750 <_Unwind_Resume>
0846d8bb +0xa3:  add    $0x10,%esp
0846d8be +0xa6:  pop    %ebx
0846d8bf +0xa7:  pop    %esi
0846d8c0 +0xa8:  pop    %ebp
0846d8c1 +0xa9:  ret
```

## 反编译 C

```c
// CGuildServerProxy::CGuildServerProxy @ 0x846d818

/* CGuildServerProxy::CGuildServerProxy(std::string, int, int) */

void __thiscall
CGuildServerProxy::CGuildServerProxy(CGuildServerProxy *this,string param_1,int param_2,int param_3)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 0846d844 to 0846d848 has its CatchHandler @ 0846d8a0 */
  std::
  map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
  ::map((map<unsigned_int,STGuildProxy,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STGuildProxy>>>
         *)(this + 8));
  *(int *)(this + 0x20) = param_3;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 0x24));
                    /* try { // try from 0846d86b to 0846d86f has its CatchHandler @ 0846d872 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e1c));
  return;
}
```
