# OnTcpSend

`_ZN15BaseServerProxy9OnTcpSendEv`

`BaseServerProxy::OnTcpSend()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fdaaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fdaaa  _ZN15BaseServerProxy9OnTcpSendEv
#           BaseServerProxy::OnTcpSend()
# range [0x082fdaaa, 0x082fdc2d]
082fdaaa +0x000:  push   %ebp
082fdaab +0x001:  mov    %esp,%ebp
082fdaad +0x003:  push   %edi
082fdaae +0x004:  push   %esi
082fdaaf +0x005:  push   %ebx
082fdab0 +0x006:  sub    $0x5c,%esp
082fdab3 +0x009:  mov    0x8(%ebp),%eax
082fdab6 +0x00c:  add    $0x4,%eax
082fdab9 +0x00f:  mov    %eax,(%esp)
082fdabc +0x012:  call   082fe352 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x603>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x603
082fdac1 +0x017:  mov    %eax,-0x1c(%ebp)
082fdac4 +0x01a:  cmpl   $0x0,-0x1c(%ebp)
082fdac8 +0x01e:  jns    082fdc1d <+0x173>
082fdace +0x024:  call   0807dd70 <_init+0x668>
082fdad3 +0x029:  mov    (%eax),%eax
082fdad5 +0x02b:  mov    %eax,(%esp)
082fdad8 +0x02e:  call   0807d730 <_init+0x28>
082fdadd +0x033:  mov    %eax,%edi
082fdadf +0x035:  mov    0x8(%ebp),%eax
082fdae2 +0x038:  mov    %eax,(%esp)
082fdae5 +0x03b:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
082fdaea +0x040:  mov    %eax,(%esp)
082fdaed +0x043:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
082fdaf2 +0x048:  mov    %eax,%esi
082fdaf4 +0x04a:  lea    -0x44(%ebp),%eax
082fdaf7 +0x04d:  mov    0x8(%ebp),%edx
082fdafa +0x050:  mov    %edx,0x4(%esp)
082fdafe +0x054:  mov    %eax,(%esp)
082fdb01 +0x057:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fdb06 +0x05c:  sub    $0x4,%esp
082fdb09 +0x05f:  lea    -0x44(%ebp),%eax
082fdb0c +0x062:  mov    %eax,(%esp)
082fdb0f +0x065:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fdb14 +0x06a:  mov    %eax,%ebx
082fdb16 +0x06c:  movl   $0x0,0xc(%esp)
082fdb1e +0x074:  movl   $0x18f,0x8(%esp)
082fdb26 +0x07c:  movl   $&_ZZN15BaseServerProxy9OnTcpSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
082fdb2e +0x084:  lea    -0x40(%ebp),%eax
082fdb31 +0x087:  mov    %eax,(%esp)
082fdb34 +0x08a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fdb39 +0x08f:  mov    %edi,0x10(%esp)
082fdb3d +0x093:  mov    %esi,0xc(%esp)
082fdb41 +0x097:  mov    %ebx,0x8(%esp)
082fdb45 +0x09b:  movl   $"%s OnSend() Socket[%d] Error(%s)",0x4(%esp)
082fdb4d +0x0a3:  lea    -0x40(%ebp),%eax
082fdb50 +0x0a6:  mov    %eax,(%esp)
082fdb53 +0x0a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fdb58 +0x0ae:  jmp    082fdb75 <+0xcb>
082fdb5a +0x0b0:  mov    %edx,%ebx
082fdb5c +0x0b2:  mov    %eax,%esi
082fdb5e +0x0b4:  lea    -0x44(%ebp),%eax
082fdb61 +0x0b7:  mov    %eax,(%esp)
082fdb64 +0x0ba:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdb69 +0x0bf:  mov    %esi,%eax
082fdb6b +0x0c1:  mov    %ebx,%edx
082fdb6d +0x0c3:  mov    %eax,(%esp)
082fdb70 +0x0c6:  call   08ae3750 <_Unwind_Resume>
082fdb75 +0x0cb:  lea    -0x44(%ebp),%eax
082fdb78 +0x0ce:  mov    %eax,(%esp)
082fdb7b +0x0d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdb80 +0x0d6:  lea    -0x30(%ebp),%eax
082fdb83 +0x0d9:  mov    0x8(%ebp),%edx
082fdb86 +0x0dc:  mov    %edx,0x4(%esp)
082fdb8a +0x0e0:  mov    %eax,(%esp)
082fdb8d +0x0e3:  call   082fdd6c <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1d
082fdb92 +0x0e8:  sub    $0x4,%esp
082fdb95 +0x0eb:  lea    -0x30(%ebp),%eax
082fdb98 +0x0ee:  mov    %eax,(%esp)
082fdb9b +0x0f1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
082fdba0 +0x0f6:  mov    %eax,%ebx
082fdba2 +0x0f8:  movl   $0x0,0xc(%esp)
082fdbaa +0x100:  movl   $0x192,0x8(%esp)
082fdbb2 +0x108:  movl   $&_ZZN15BaseServerProxy9OnTcpSendEvE19__PRETTY_FUNCTION__,0x4(%esp)
082fdbba +0x110:  lea    -0x2c(%ebp),%eax
082fdbbd +0x113:  mov    %eax,(%esp)
082fdbc0 +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fdbc5 +0x11b:  mov    %ebx,0x8(%esp)
082fdbc9 +0x11f:  movl   $"Disconnect to %s (send_packet() returns minus value)",0x4(%esp)
082fdbd1 +0x127:  lea    -0x2c(%ebp),%eax
082fdbd4 +0x12a:  mov    %eax,(%esp)
082fdbd7 +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fdbdc +0x132:  jmp    082fdbf9 <+0x14f>
082fdbde +0x134:  mov    %edx,%ebx
082fdbe0 +0x136:  mov    %eax,%esi
082fdbe2 +0x138:  lea    -0x30(%ebp),%eax
082fdbe5 +0x13b:  mov    %eax,(%esp)
082fdbe8 +0x13e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdbed +0x143:  mov    %esi,%eax
082fdbef +0x145:  mov    %ebx,%edx
082fdbf1 +0x147:  mov    %eax,(%esp)
082fdbf4 +0x14a:  call   08ae3750 <_Unwind_Resume>
082fdbf9 +0x14f:  lea    -0x30(%ebp),%eax
082fdbfc +0x152:  mov    %eax,(%esp)
082fdbff +0x155:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
082fdc04 +0x15a:  mov    0x8(%ebp),%eax
082fdc07 +0x15d:  mov    (%eax),%eax
082fdc09 +0x15f:  add    $0x4,%eax
082fdc0c +0x162:  mov    (%eax),%edx
082fdc0e +0x164:  mov    0x8(%ebp),%eax
082fdc11 +0x167:  mov    %eax,(%esp)
082fdc14 +0x16a:  call   *%edx
082fdc16 +0x16c:  mov    $0xffffffff,%eax
082fdc1b +0x171:  jmp    082fdc23 <+0x179>
082fdc1d +0x173:  mov    0x8(%ebp),%eax
082fdc20 +0x176:  mov    0x1c(%eax),%eax
082fdc23 +0x179:  lea    -0xc(%ebp),%esp
082fdc26 +0x17c:  add    $0x0,%esp
082fdc29 +0x17f:  pop    %ebx
082fdc2a +0x180:  pop    %esi
082fdc2b +0x181:  pop    %edi
082fdc2c +0x182:  pop    %ebp
082fdc2d +0x183:  ret
```

## 反编译 C

```c
// BaseServerProxy::OnTcpSend @ 0x82fdaaa

/* BaseServerProxy::OnTcpSend() */

undefined4 __thiscall BaseServerProxy::OnTcpSend(BaseServerProxy *this)

{
  int *piVar1;
  char *pcVar2;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  string local_48 [4];
  cMyTrace local_44 [16];
  string local_34 [4];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 4));
  if (local_20 < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar3 = CNetwork<100000,100000>::get_socket(this_00);
    GetServerName();
                    /* try { // try from 082fdb0f to 082fdb57 has its CatchHandler @ 082fdb5a */
    uVar4 = std::string::c_str(local_48);
    cMyTrace::cMyTrace(local_44,"int BaseServerProxy::OnTcpSend()",399,0);
    cMyTrace::operator()(local_44,"%s OnSend() Socket[%d] Error(%s)",uVar4,uVar3,pcVar2);
    std::string::~string(local_48);
    GetServerName();
                    /* try { // try from 082fdb9b to 082fdbdb has its CatchHandler @ 082fdbde */
    uVar3 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_30,"int BaseServerProxy::OnTcpSend()",0x192,0);
    cMyTrace::operator()(local_30,"Disconnect to %s (send_packet() returns minus value)",uVar3);
    std::string::~string(local_34);
    (**(code **)(*(int *)this + 4))(this);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x1c);
  }
  return uVar3;
}
```
