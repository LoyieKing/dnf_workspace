# SendHadesUdpPacket

`_ZN17CHadesServerProxy18SendHadesUdpPacketEPc`

`CHadesServerProxy::SendHadesUdpPacket(char*)`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x084706be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084706be  _ZN17CHadesServerProxy18SendHadesUdpPacketEPc
#           CHadesServerProxy::SendHadesUdpPacket(char*)
# range [0x084706be, 0x08470751]
084706be +0x00:  push   %ebp
084706bf +0x01:  mov    %esp,%ebp
084706c1 +0x03:  push   %esi
084706c2 +0x04:  push   %ebx
084706c3 +0x05:  sub    $0x30,%esp
084706c6 +0x08:  mov    0x8(%ebp),%edx
084706c9 +0x0b:  lea    -0xc(%ebp),%eax
084706cc +0x0e:  mov    %edx,0x4(%esp)
084706d0 +0x12:  mov    %eax,(%esp)
084706d3 +0x15:  call   0847093a <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x73>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x73
084706d8 +0x1a:  sub    $0x4,%esp
084706db +0x1d:  lea    -0xc(%ebp),%eax
084706de +0x20:  mov    %eax,(%esp)
084706e1 +0x23:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084706e6 +0x28:  mov    0x8(%ebp),%edx
084706e9 +0x2b:  mov    &_ZL14gUnicodeBuffer+0x268e0(%edx),%edx
084706ef +0x31:  movzwl %dx,%ecx
084706f2 +0x34:  mov    0xc(%ebp),%edx
084706f5 +0x37:  movzwl 0x2(%edx),%edx
084706f9 +0x3b:  movzwl %dx,%edx
084706fc +0x3e:  mov    0x8(%ebp),%ebx
084706ff +0x41:  add    $&_ZL14gUnicodeBuffer+0x268e4,%ebx
08470705 +0x47:  mov    %eax,0x10(%esp)
08470709 +0x4b:  mov    %ecx,0xc(%esp)
0847070d +0x4f:  mov    %edx,0x8(%esp)
08470711 +0x53:  mov    0xc(%ebp),%eax
08470714 +0x56:  mov    %eax,0x4(%esp)
08470718 +0x5a:  mov    %ebx,(%esp)
0847071b +0x5d:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
08470720 +0x62:  jmp    0847073d <+0x7f>
08470722 +0x64:  mov    %edx,%ebx
08470724 +0x66:  mov    %eax,%esi
08470726 +0x68:  lea    -0xc(%ebp),%eax
08470729 +0x6b:  mov    %eax,(%esp)
0847072c +0x6e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08470731 +0x73:  mov    %esi,%eax
08470733 +0x75:  mov    %ebx,%edx
08470735 +0x77:  mov    %eax,(%esp)
08470738 +0x7a:  call   08ae3750 <_Unwind_Resume>
0847073d +0x7f:  lea    -0xc(%ebp),%eax
08470740 +0x82:  mov    %eax,(%esp)
08470743 +0x85:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08470748 +0x8a:  lea    -0x8(%ebp),%esp
0847074b +0x8d:  add    $0x0,%esp
0847074e +0x90:  pop    %ebx
0847074f +0x91:  pop    %esi
08470750 +0x92:  pop    %ebp
08470751 +0x93:  ret
```

## 反编译 C

```c
// CHadesServerProxy::SendHadesUdpPacket @ 0x84706be

/* CHadesServerProxy::SendHadesUdpPacket(char*) */

void __thiscall CHadesServerProxy::SendHadesUdpPacket(CHadesServerProxy *this,char *param_1)

{
  char *pcVar1;
  string local_10 [4];
  
  BaseServerProxy::GetServerIP();
                    /* try { // try from 084706e1 to 0847071f has its CatchHandler @ 08470722 */
  pcVar1 = (char *)std::string::c_str(local_10);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 0x30e10),param_1,(uint)*(ushort *)(param_1 + 2),
             (ushort)*(undefined4 *)(this + 0x30e0c),pcVar1);
  std::string::~string(local_10);
  return;
}
```
