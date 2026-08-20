# SendTcpPacket

`_ZN15BaseServerProxy13SendTcpPacketEPci`

`BaseServerProxy::SendTcpPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd830  _ZN15BaseServerProxy13SendTcpPacketEPci
#           BaseServerProxy::SendTcpPacket(char*, int)
# range [0x082fd830, 0x082fd90d]
082fd830 +0x00:  push   %ebp
082fd831 +0x01:  mov    %esp,%ebp
082fd833 +0x03:  push   %esi
082fd834 +0x04:  push   %ebx
082fd835 +0x05:  sub    $0x30,%esp
082fd838 +0x08:  mov    0x8(%ebp),%eax
082fd83b +0x0b:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%eax
082fd841 +0x11:  cmp    $0x2,%eax
082fd844 +0x14:  je     082fd8d5 <+0xa5>
082fd84a +0x1a:  lea    -0x1c(%ebp),%eax
082fd84d +0x1d:  mov    0x8(%ebp),%edx
082fd850 +0x20:  mov    %edx,0x4(%esp)
082fd854 +0x24:  mov    %eax,(%esp)
082fd857 +0x27:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fd85c +0x2c:  sub    $0x4,%esp
082fd85f +0x2f:  lea    -0x1c(%ebp),%eax
082fd862 +0x32:  mov    %eax,(%esp)
082fd865 +0x35:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd86a +0x3a:  mov    %eax,%ebx
082fd86c +0x3c:  movl   $0x0,0xc(%esp)
082fd874 +0x44:  movl   $0x15d,0x8(%esp)
082fd87c +0x4c:  movl   $&_ZZN15BaseServerProxy13SendTcpPacketEPciE19__PRETTY_FUNCTION__,0x4(%esp)
082fd884 +0x54:  lea    -0x18(%ebp),%eax
082fd887 +0x57:  mov    %eax,(%esp)
082fd88a +0x5a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fd88f +0x5f:  mov    %ebx,0x8(%esp)
082fd893 +0x63:  movl   $"cannot send packet because %s is disconnected",0x4(%esp)
082fd89b +0x6b:  lea    -0x18(%ebp),%eax
082fd89e +0x6e:  mov    %eax,(%esp)
082fd8a1 +0x71:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fd8a6 +0x76:  jmp    082fd8c3 <+0x93>
082fd8a8 +0x78:  mov    %edx,%ebx
082fd8aa +0x7a:  mov    %eax,%esi
082fd8ac +0x7c:  lea    -0x1c(%ebp),%eax
082fd8af +0x7f:  mov    %eax,(%esp)
082fd8b2 +0x82:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd8b7 +0x87:  mov    %esi,%eax
082fd8b9 +0x89:  mov    %ebx,%edx
082fd8bb +0x8b:  mov    %eax,(%esp)
082fd8be +0x8e:  call   08ae3750 <_Unwind_Resume>
082fd8c3 +0x93:  lea    -0x1c(%ebp),%eax
082fd8c6 +0x96:  mov    %eax,(%esp)
082fd8c9 +0x99:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd8ce +0x9e:  mov    $0x0,%eax
082fd8d3 +0xa3:  jmp    082fd904 <+0xd4>
082fd8d5 +0xa5:  mov    0x8(%ebp),%eax
082fd8d8 +0xa8:  lea    0x4(%eax),%edx
082fd8db +0xab:  mov    0x10(%ebp),%eax
082fd8de +0xae:  mov    %eax,0x8(%esp)
082fd8e2 +0xb2:  mov    0xc(%ebp),%eax
082fd8e5 +0xb5:  mov    %eax,0x4(%esp)
082fd8e9 +0xb9:  mov    %edx,(%esp)
082fd8ec +0xbc:  call   082fdfcc <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x27d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x27d
082fd8f1 +0xc1:  shr    $0x1f,%eax
082fd8f4 +0xc4:  test   %al,%al
082fd8f6 +0xc6:  je     082fd8ff <+0xcf>
082fd8f8 +0xc8:  mov    $0x0,%eax
082fd8fd +0xcd:  jmp    082fd904 <+0xd4>
082fd8ff +0xcf:  mov    $0x1,%eax
082fd904 +0xd4:  lea    -0x8(%ebp),%esp
082fd907 +0xd7:  add    $0x0,%esp
082fd90a +0xda:  pop    %ebx
082fd90b +0xdb:  pop    %esi
082fd90c +0xdc:  pop    %ebp
082fd90d +0xdd:  ret
```

## 反编译 C

```c
// BaseServerProxy::SendTcpPacket @ 0x82fd830

/* BaseServerProxy::SendTcpPacket(char*, int) */

undefined4 __thiscall
BaseServerProxy::SendTcpPacket(BaseServerProxy *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  string local_20 [4];
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x30dfc) == 2) {
    iVar2 = CNetwork<100000,100000>::send_packet
                      ((CNetwork<100000,100000> *)(this + 4),param_1,param_2);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    GetServerName();
                    /* try { // try from 082fd865 to 082fd8a5 has its CatchHandler @ 082fd8a8 */
    uVar1 = std::string::c_str(local_20);
    cMyTrace::cMyTrace(local_1c,"bool BaseServerProxy::SendTcpPacket(char*, int)",0x15d,0);
    cMyTrace::operator()(local_1c,"cannot send packet because %s is disconnected",uVar1);
    std::string::~string(local_20);
    uVar1 = 0;
  }
  return uVar1;
}
```
