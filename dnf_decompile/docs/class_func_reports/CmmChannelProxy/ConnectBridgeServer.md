# ConnectBridgeServer

`_ZN15CmmChannelProxy19ConnectBridgeServerEv`

`CmmChannelProxy::ConnectBridgeServer()`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x08106278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106278  _ZN15CmmChannelProxy19ConnectBridgeServerEv
#           CmmChannelProxy::ConnectBridgeServer()
# range [0x08106278, 0x0810637b]
08106278 +0x000:  push   %ebp
08106279 +0x001:  mov    %esp,%ebp
0810627b +0x003:  sub    $0x38,%esp
0810627e +0x006:  movl   $0x10,0x8(%esp)
08106286 +0x00e:  movl   $0x0,0x4(%esp)
0810628e +0x016:  lea    -0x1c(%ebp),%eax
08106291 +0x019:  mov    %eax,(%esp)
08106294 +0x01c:  call   0807dcc0 <_init+0x5b8>
08106299 +0x021:  movl   $0x0,0x8(%esp)
081062a1 +0x029:  movl   $0x1,0x4(%esp)
081062a9 +0x031:  movl   $0x2,(%esp)
081062b0 +0x038:  call   0807dab0 <_init+0x3a8>
081062b5 +0x03d:  mov    0x8(%ebp),%edx
081062b8 +0x040:  mov    %eax,0x18(%edx)
081062bb +0x043:  mov    0x8(%ebp),%eax
081062be +0x046:  mov    0x18(%eax),%eax
081062c1 +0x049:  test   %eax,%eax
081062c3 +0x04b:  jns    081062db <+0x63>
081062c5 +0x04d:  movl   $"[CmmChannelProxy::SendCheckChannelScript] Can't create socket",(%esp)
081062cc +0x054:  call   0807e570 <_init+0xe68>
081062d1 +0x059:  mov    $0x0,%eax
081062d6 +0x05e:  jmp    08106379 <+0x101>
081062db +0x063:  movw   $0x2,-0x1c(%ebp)
081062e1 +0x069:  mov    0x8(%ebp),%eax
081062e4 +0x06c:  mov    %eax,(%esp)
081062e7 +0x06f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081062ec +0x074:  mov    %eax,(%esp)
081062ef +0x077:  call   0807e530 <_init+0xe28>
081062f4 +0x07c:  mov    %eax,-0x18(%ebp)
081062f7 +0x07f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081062fc +0x084:  mov    %eax,(%esp)
081062ff +0x087:  call   08106cee <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x170>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x170
08106304 +0x08c:  movzwl %ax,%eax
08106307 +0x08f:  mov    %eax,(%esp)
0810630a +0x092:  call   0807e680 <_init+0xf78>
0810630f +0x097:  mov    %ax,-0x1a(%ebp)
08106313 +0x09b:  movl   $0x10,-0xc(%ebp)
0810631a +0x0a2:  mov    -0xc(%ebp),%ecx
0810631d +0x0a5:  lea    -0x1c(%ebp),%edx
08106320 +0x0a8:  mov    0x8(%ebp),%eax
08106323 +0x0ab:  mov    0x18(%eax),%eax
08106326 +0x0ae:  mov    %ecx,0x8(%esp)
0810632a +0x0b2:  mov    %edx,0x4(%esp)
0810632e +0x0b6:  mov    %eax,(%esp)
08106331 +0x0b9:  call   0807e230 <_init+0xb28>
08106336 +0x0be:  shr    $0x1f,%eax
08106339 +0x0c1:  test   %al,%al
0810633b +0x0c3:  je     08106350 <+0xd8>
0810633d +0x0c5:  movl   $"[CmmChannelProxy::SendCheckChannelScript] Can't connect channel bridge server",(%esp)
08106344 +0x0cc:  call   0807e570 <_init+0xe68>
08106349 +0x0d1:  mov    $0x0,%eax
0810634e +0x0d6:  jmp    08106379 <+0x101>
08106350 +0x0d8:  movl   $0x1,-0x20(%ebp)
08106357 +0x0df:  mov    0x8(%ebp),%eax
0810635a +0x0e2:  mov    0x18(%eax),%eax
0810635d +0x0e5:  lea    -0x20(%ebp),%edx
08106360 +0x0e8:  mov    %edx,0x8(%esp)
08106364 +0x0ec:  movl   $0x5421,0x4(%esp)
0810636c +0x0f4:  mov    %eax,(%esp)
0810636f +0x0f7:  call   0807e2b0 <_init+0xba8>
08106374 +0x0fc:  mov    $0x1,%eax
08106379 +0x101:  leave
0810637a +0x102:  ret
0810637b +0x103:  nop
```

## 反编译 C

```c
// CmmChannelProxy::ConnectBridgeServer @ 0x8106278

/* CmmChannelProxy::ConnectBridgeServer() */

undefined4 __thiscall CmmChannelProxy::ConnectBridgeServer(CmmChannelProxy *this)

{
  uint16_t __hostshort;
  int iVar1;
  undefined4 uVar2;
  char *__cp;
  CEnvironment *this_00;
  undefined4 local_24;
  sockaddr local_20;
  undefined4 local_10;
  
  memset(&local_20,0,0x10);
  iVar1 = socket(2,1,0);
  *(int *)(this + 0x18) = iVar1;
  if (*(int *)(this + 0x18) < 0) {
    puts("[CmmChannelProxy::SendCheckChannelScript] Can\'t create socket");
    uVar2 = 0;
  }
  else {
    local_20.sa_family = 2;
    __cp = (char *)std::string::c_str((string *)this);
    local_20.sa_data._2_4_ = inet_addr(__cp);
    this_00 = (CEnvironment *)G_CEnvironment();
    __hostshort = CEnvironment::get_tcp_port_channel(this_00);
    local_20.sa_data._0_2_ = htons(__hostshort);
    local_10 = 0x10;
    iVar1 = connect(*(int *)(this + 0x18),&local_20,0x10);
    if (iVar1 < 0) {
      puts("[CmmChannelProxy::SendCheckChannelScript] Can\'t connect channel bridge server");
      uVar2 = 0;
    }
    else {
      local_24 = 1;
      ioctl(*(int *)(this + 0x18),0x5421,&local_24);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
