# OnTcpError

`_ZN15BaseServerProxy10OnTcpErrorEv`

`BaseServerProxy::OnTcpError()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fdc2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fdc2e  _ZN15BaseServerProxy10OnTcpErrorEv
#           BaseServerProxy::OnTcpError()
# range [0x082fdc2e, 0x082fdd0e]
082fdc2e +0x00:  push   %ebp
082fdc2f +0x01:  mov    %esp,%ebp
082fdc31 +0x03:  push   %edi
082fdc32 +0x04:  push   %esi
082fdc33 +0x05:  push   %ebx
082fdc34 +0x06:  sub    $0x4c,%esp
082fdc37 +0x09:  call   0807dd70 <_init+0x668>
082fdc3c +0x0e:  mov    (%eax),%eax
082fdc3e +0x10:  test   %eax,%eax
082fdc40 +0x12:  je     082fdcff <+0xd1>
082fdc46 +0x18:  call   0807dd70 <_init+0x668>
082fdc4b +0x1d:  mov    (%eax),%eax
082fdc4d +0x1f:  mov    %eax,(%esp)
082fdc50 +0x22:  call   0807d730 <_init+0x28>
082fdc55 +0x27:  mov    %eax,%edi
082fdc57 +0x29:  mov    0x8(%ebp),%eax
082fdc5a +0x2c:  mov    %eax,(%esp)
082fdc5d +0x2f:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
082fdc62 +0x34:  mov    %eax,(%esp)
082fdc65 +0x37:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
082fdc6a +0x3c:  mov    %eax,%esi
082fdc6c +0x3e:  lea    -0x2c(%ebp),%eax
082fdc6f +0x41:  mov    0x8(%ebp),%edx
082fdc72 +0x44:  mov    %edx,0x4(%esp)
082fdc76 +0x48:  mov    %eax,(%esp)
082fdc79 +0x4b:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fdc7e +0x50:  sub    $0x4,%esp
082fdc81 +0x53:  lea    -0x2c(%ebp),%eax
082fdc84 +0x56:  mov    %eax,(%esp)
082fdc87 +0x59:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fdc8c +0x5e:  mov    %eax,%ebx
082fdc8e +0x60:  movl   $0x0,0xc(%esp)
082fdc96 +0x68:  movl   $0x19f,0x8(%esp)
082fdc9e +0x70:  movl   $&_ZZN15BaseServerProxy10OnTcpErrorEvE19__PRETTY_FUNCTION__,0x4(%esp)
082fdca6 +0x78:  lea    -0x28(%ebp),%eax
082fdca9 +0x7b:  mov    %eax,(%esp)
082fdcac +0x7e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fdcb1 +0x83:  mov    %edi,0x10(%esp)
082fdcb5 +0x87:  mov    %esi,0xc(%esp)
082fdcb9 +0x8b:  mov    %ebx,0x8(%esp)
082fdcbd +0x8f:  movl   $"%s OnError() Socket[%d] Error(%s)",0x4(%esp)
082fdcc5 +0x97:  lea    -0x28(%ebp),%eax
082fdcc8 +0x9a:  mov    %eax,(%esp)
082fdccb +0x9d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fdcd0 +0xa2:  jmp    082fdced <+0xbf>
082fdcd2 +0xa4:  mov    %edx,%ebx
082fdcd4 +0xa6:  mov    %eax,%esi
082fdcd6 +0xa8:  lea    -0x2c(%ebp),%eax
082fdcd9 +0xab:  mov    %eax,(%esp)
082fdcdc +0xae:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdce1 +0xb3:  mov    %esi,%eax
082fdce3 +0xb5:  mov    %ebx,%edx
082fdce5 +0xb7:  mov    %eax,(%esp)
082fdce8 +0xba:  call   08ae3750 <_Unwind_Resume>
082fdced +0xbf:  lea    -0x2c(%ebp),%eax
082fdcf0 +0xc2:  mov    %eax,(%esp)
082fdcf3 +0xc5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdcf8 +0xca:  mov    $0x0,%eax
082fdcfd +0xcf:  jmp    082fdd04 <+0xd6>
082fdcff +0xd1:  mov    $0x1,%eax
082fdd04 +0xd6:  lea    -0xc(%ebp),%esp
082fdd07 +0xd9:  add    $0x0,%esp
082fdd0a +0xdc:  pop    %ebx
082fdd0b +0xdd:  pop    %esi
082fdd0c +0xde:  pop    %edi
082fdd0d +0xdf:  pop    %ebp
082fdd0e +0xe0:  ret
```

## 反编译 C

```c
// BaseServerProxy::OnTcpError @ 0x82fdc2e

/* BaseServerProxy::OnTcpError() */

bool __thiscall BaseServerProxy::OnTcpError(BaseServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  string local_30 [4];
  cMyTrace local_2c [28];
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    GetServerName();
                    /* try { // try from 082fdc87 to 082fdccf has its CatchHandler @ 082fdcd2 */
    uVar5 = std::string::c_str(local_30);
    cMyTrace::cMyTrace(local_2c,"bool BaseServerProxy::OnTcpError()",0x19f,0);
    cMyTrace::operator()(local_2c,"%s OnError() Socket[%d] Error(%s)",uVar5,uVar4,pcVar3);
    std::string::~string(local_30);
  }
  return iVar1 == 0;
}
```
