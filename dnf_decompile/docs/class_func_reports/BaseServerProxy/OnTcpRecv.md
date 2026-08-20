# OnTcpRecv

`_ZN15BaseServerProxy9OnTcpRecvEv`

`BaseServerProxy::OnTcpRecv()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd90e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd90e  _ZN15BaseServerProxy9OnTcpRecvEv
#           BaseServerProxy::OnTcpRecv()
# range [0x082fd90e, 0x082fdaa9]
082fd90e +0x000:  push   %ebp
082fd90f +0x001:  mov    %esp,%ebp
082fd911 +0x003:  push   %esi
082fd912 +0x004:  push   %ebx
082fd913 +0x005:  sub    $0x40,%esp
082fd916 +0x008:  mov    0x8(%ebp),%eax
082fd919 +0x00b:  add    $0x4,%eax
082fd91c +0x00e:  mov    %eax,(%esp)
082fd91f +0x011:  call   082fe1fe <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x4af>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x4af
082fd924 +0x016:  mov    %eax,-0xc(%ebp)
082fd927 +0x019:  cmpl   $0x0,-0xc(%ebp)
082fd92b +0x01d:  jle    082fd9ff <+0xf1>
082fd931 +0x023:  mov    0x8(%ebp),%eax
082fd934 +0x026:  mov    (%eax),%eax
082fd936 +0x028:  add    $0x8,%eax
082fd939 +0x02b:  mov    (%eax),%edx
082fd93b +0x02d:  mov    -0xc(%ebp),%eax
082fd93e +0x030:  mov    %eax,0x4(%esp)
082fd942 +0x034:  mov    0x8(%ebp),%eax
082fd945 +0x037:  mov    %eax,(%esp)
082fd948 +0x03a:  call   *%edx
082fd94a +0x03c:  xor    $0x1,%eax
082fd94d +0x03f:  test   %al,%al
082fd94f +0x041:  je     082fd9f5 <+0xe7>
082fd955 +0x047:  lea    -0x24(%ebp),%eax
082fd958 +0x04a:  mov    0x8(%ebp),%edx
082fd95b +0x04d:  mov    %edx,0x4(%esp)
082fd95f +0x051:  mov    %eax,(%esp)
082fd962 +0x054:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fd967 +0x059:  sub    $0x4,%esp
082fd96a +0x05c:  lea    -0x24(%ebp),%eax
082fd96d +0x05f:  mov    %eax,(%esp)
082fd970 +0x062:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fd975 +0x067:  mov    %eax,%ebx
082fd977 +0x069:  movl   $0x0,0xc(%esp)
082fd97f +0x071:  movl   $0x16f,0x8(%esp)
082fd987 +0x079:  movl   $&_ZZN15BaseServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x4(%esp)
082fd98f +0x081:  lea    -0x20(%ebp),%eax
082fd992 +0x084:  mov    %eax,(%esp)
082fd995 +0x087:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fd99a +0x08c:  mov    %ebx,0x8(%esp)
082fd99e +0x090:  movl   $"%s occur Error at parsing receive packet",0x4(%esp)
082fd9a6 +0x098:  lea    -0x20(%ebp),%eax
082fd9a9 +0x09b:  mov    %eax,(%esp)
082fd9ac +0x09e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fd9b1 +0x0a3:  jmp    082fd9ce <+0xc0>
082fd9b3 +0x0a5:  mov    %edx,%ebx
082fd9b5 +0x0a7:  mov    %eax,%esi
082fd9b7 +0x0a9:  lea    -0x24(%ebp),%eax
082fd9ba +0x0ac:  mov    %eax,(%esp)
082fd9bd +0x0af:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd9c2 +0x0b4:  mov    %esi,%eax
082fd9c4 +0x0b6:  mov    %ebx,%edx
082fd9c6 +0x0b8:  mov    %eax,(%esp)
082fd9c9 +0x0bb:  call   08ae3750 <_Unwind_Resume>
082fd9ce +0x0c0:  lea    -0x24(%ebp),%eax
082fd9d1 +0x0c3:  mov    %eax,(%esp)
082fd9d4 +0x0c6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fd9d9 +0x0cb:  mov    0x8(%ebp),%eax
082fd9dc +0x0ce:  mov    (%eax),%eax
082fd9de +0x0d0:  add    $0x4,%eax
082fd9e1 +0x0d3:  mov    (%eax),%edx
082fd9e3 +0x0d5:  mov    0x8(%ebp),%eax
082fd9e6 +0x0d8:  mov    %eax,(%esp)
082fd9e9 +0x0db:  call   *%edx
082fd9eb +0x0dd:  mov    $0x0,%eax
082fd9f0 +0x0e2:  jmp    082fda9f <+0x191>
082fd9f5 +0x0e7:  mov    $0x1,%eax
082fd9fa +0x0ec:  jmp    082fda9f <+0x191>
082fd9ff +0x0f1:  cmpl   $0x0,-0xc(%ebp)
082fda03 +0x0f5:  jns    082fda9a <+0x18c>
082fda09 +0x0fb:  lea    -0x10(%ebp),%eax
082fda0c +0x0fe:  mov    0x8(%ebp),%edx
082fda0f +0x101:  mov    %edx,0x4(%esp)
082fda13 +0x105:  mov    %eax,(%esp)
082fda16 +0x108:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fda1b +0x10d:  sub    $0x4,%esp
082fda1e +0x110:  lea    -0x10(%ebp),%eax
082fda21 +0x113:  mov    %eax,(%esp)
082fda24 +0x116:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fda29 +0x11b:  mov    %eax,0x14(%esp)
082fda2d +0x11f:  movl   $"%s maybe Die!!!",0x10(%esp)
082fda35 +0x127:  movl   $0x17a,0xc(%esp)
082fda3d +0x12f:  movl   $&_ZZN15BaseServerProxy9OnTcpRecvEvE19__PRETTY_FUNCTION__,0x8(%esp)
082fda45 +0x137:  movl   $"BaseServerProxy.cpp",0x4(%esp)
082fda4d +0x13f:  movl   $0x1,(%esp)
082fda54 +0x146:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fda59 +0x14b:  jmp    082fda76 <+0x168>
082fda5b +0x14d:  mov    %edx,%ebx
082fda5d +0x14f:  mov    %eax,%esi
082fda5f +0x151:  lea    -0x10(%ebp),%eax
082fda62 +0x154:  mov    %eax,(%esp)
082fda65 +0x157:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fda6a +0x15c:  mov    %esi,%eax
082fda6c +0x15e:  mov    %ebx,%edx
082fda6e +0x160:  mov    %eax,(%esp)
082fda71 +0x163:  call   08ae3750 <_Unwind_Resume>
082fda76 +0x168:  lea    -0x10(%ebp),%eax
082fda79 +0x16b:  mov    %eax,(%esp)
082fda7c +0x16e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fda81 +0x173:  mov    0x8(%ebp),%eax
082fda84 +0x176:  mov    (%eax),%eax
082fda86 +0x178:  add    $0x4,%eax
082fda89 +0x17b:  mov    (%eax),%edx
082fda8b +0x17d:  mov    0x8(%ebp),%eax
082fda8e +0x180:  mov    %eax,(%esp)
082fda91 +0x183:  call   *%edx
082fda93 +0x185:  mov    $0x0,%eax
082fda98 +0x18a:  jmp    082fda9f <+0x191>
082fda9a +0x18c:  mov    $0x1,%eax
082fda9f +0x191:  lea    -0x8(%ebp),%esp
082fdaa2 +0x194:  add    $0x0,%esp
082fdaa5 +0x197:  pop    %ebx
082fdaa6 +0x198:  pop    %esi
082fdaa7 +0x199:  pop    %ebp
082fdaa8 +0x19a:  ret
082fdaa9 +0x19b:  nop
```

## 反编译 C

```c
// BaseServerProxy::OnTcpRecv @ 0x82fd90e

/* BaseServerProxy::OnTcpRecv() */

undefined4 __thiscall BaseServerProxy::OnTcpRecv(BaseServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  string local_28 [4];
  cMyTrace local_24 [16];
  string local_14 [4];
  int local_10;
  
  local_10 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 4));
  if (local_10 < 1) {
    if (local_10 < 0) {
      GetServerName();
                    /* try { // try from 082fda24 to 082fda58 has its CatchHandler @ 082fda5b */
      uVar2 = std::string::c_str(local_14);
      LogManager::logFormat
                (1,"BaseServerProxy.cpp","bool BaseServerProxy::OnTcpRecv()",0x17a,"%s maybe Die!!!"
                 ,uVar2);
      std::string::~string(local_14);
      (**(code **)(*(int *)this + 4))(this);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    cVar1 = (**(code **)(*(int *)this + 8))(this,local_10);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      GetServerName();
                    /* try { // try from 082fd970 to 082fd9b0 has its CatchHandler @ 082fd9b3 */
      uVar2 = std::string::c_str(local_28);
      cMyTrace::cMyTrace(local_24,"bool BaseServerProxy::OnTcpRecv()",0x16f,0);
      cMyTrace::operator()(local_24,"%s occur Error at parsing receive packet",uVar2);
      std::string::~string(local_28);
      (**(code **)(*(int *)this + 4))(this);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
