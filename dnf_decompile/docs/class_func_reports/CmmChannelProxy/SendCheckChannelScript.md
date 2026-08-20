# SendCheckChannelScript

`_ZN15CmmChannelProxy22SendCheckChannelScriptEv`

`CmmChannelProxy::SendCheckChannelScript()`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x081066ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081066ea  _ZN15CmmChannelProxy22SendCheckChannelScriptEv
#           CmmChannelProxy::SendCheckChannelScript()
# range [0x081066ea, 0x08106b3d]
081066ea +0x000:  push   %ebp
081066eb +0x001:  mov    %esp,%ebp
081066ed +0x003:  push   %ebx
081066ee +0x004:  sub    $0x4f4,%esp
081066f4 +0x00a:  mov    0x8(%ebp),%eax
081066f7 +0x00d:  mov    %eax,(%esp)
081066fa +0x010:  call   08106278 <_ZN15CmmChannelProxy19ConnectBridgeServerEv>  ; CmmChannelProxy::ConnectBridgeServer()
081066ff +0x015:  movl   $0x14,0x8(%esp)
08106707 +0x01d:  movl   $0x0,0x4(%esp)
0810670f +0x025:  lea    -0x54(%ebp),%eax
08106712 +0x028:  mov    %eax,(%esp)
08106715 +0x02b:  call   0807dcc0 <_init+0x5b8>
0810671a +0x030:  movl   $0x14,0x8(%esp)
08106722 +0x038:  movl   $"channel_info",0x4(%esp)
0810672a +0x040:  lea    -0x54(%ebp),%eax
0810672d +0x043:  mov    %eax,(%esp)
08106730 +0x046:  call   0807d8d0 <_init+0x1c8>
08106735 +0x04b:  lea    -0xd4(%ebp),%eax
0810673b +0x051:  mov    %eax,0x4(%esp)
0810673f +0x055:  lea    -0x54(%ebp),%eax
08106742 +0x058:  mov    %eax,(%esp)
08106745 +0x05b:  call   08106b9a <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x1c>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
0810674a +0x060:  shr    $0x1f,%eax
0810674d +0x063:  test   %al,%al
0810674f +0x065:  je     08106772 <+0x88>
08106751 +0x067:  call   0807dd70 <_init+0x668>
08106756 +0x06c:  mov    (%eax),%eax
08106758 +0x06e:  cmp    $0x2,%eax
0810675b +0x071:  je     08106767 <+0x7d>
0810675d +0x073:  mov    $0x0,%eax
08106762 +0x078:  jmp    08106b35 <+0x44b>
08106767 +0x07d:  lea    -0x54(%ebp),%eax
0810676a +0x080:  mov    %eax,(%esp)
0810676d +0x083:  call   08108ad7 <_ZN7DNFFLib8Make_DirEPc>  ; DNFFLib::Make_Dir(char*)
08106772 +0x088:  movl   $"wb+",0x4(%esp)
0810677a +0x090:  movl   $"channel_info/version",(%esp)
08106781 +0x097:  call   0807e770 <_init+0x1068>
08106786 +0x09c:  mov    %eax,-0x20(%ebp)
08106789 +0x09f:  cmpl   $0x0,-0x20(%ebp)
0810678d +0x0a3:  sete   %al
08106790 +0x0a6:  test   %al,%al
08106792 +0x0a8:  je     081067e4 <+0xfa>
08106794 +0x0aa:  movl   $0x1,0x14(%esp)
0810679c +0x0b2:  movl   $0x1,0x10(%esp)
081067a4 +0x0ba:  movl   $0x9,0xc(%esp)
081067ac +0x0c2:  movl   $0x143,0x8(%esp)
081067b4 +0x0ca:  movl   $&_ZZN15CmmChannelProxy22SendCheckChannelScriptEvE19__PRETTY_FUNCTION__,0x4(%esp)
081067bc +0x0d2:  lea    -0x40(%ebp),%eax
081067bf +0x0d5:  mov    %eax,(%esp)
081067c2 +0x0d8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081067c7 +0x0dd:  movl   $"\t- [ERROR] : cannt open channel_script_version file\n",0x4(%esp)
081067cf +0x0e5:  lea    -0x40(%ebp),%eax
081067d2 +0x0e8:  mov    %eax,(%esp)
081067d5 +0x0eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081067da +0x0f0:  mov    $0x0,%eax
081067df +0x0f5:  jmp    08106b35 <+0x44b>
081067e4 +0x0fa:  movl   $0x0,-0x18(%ebp)
081067eb +0x101:  jmp    08106870 <+0x186>
081067f0 +0x106:  lea    -0x4d4(%ebp),%eax
081067f6 +0x10c:  mov    %eax,-0x14(%ebp)
081067f9 +0x10f:  mov    -0x14(%ebp),%eax
081067fc +0x112:  mov    %eax,-0x10(%ebp)
081067ff +0x115:  jmp    08106805 <+0x11b>
08106801 +0x117:  addl   $0x1,-0x14(%ebp)
08106805 +0x11b:  mov    -0x14(%ebp),%eax
08106808 +0x11e:  movzbl (%eax),%eax
0810680b +0x121:  cmp    $0x20,%al
0810680d +0x123:  je     08106819 <+0x12f>
0810680f +0x125:  mov    -0x14(%ebp),%eax
08106812 +0x128:  movzbl (%eax),%eax
08106815 +0x12b:  cmp    $0x9,%al
08106817 +0x12d:  jne    08106820 <+0x136>
08106819 +0x12f:  mov    $0x1,%eax
0810681e +0x134:  jmp    08106825 <+0x13b>
08106820 +0x136:  mov    $0x0,%eax
08106825 +0x13b:  test   %al,%al
08106827 +0x13d:  jne    08106801 <+0x117>
08106829 +0x13f:  mov    -0x14(%ebp),%eax
0810682c +0x142:  movzbl (%eax),%edx
0810682f +0x145:  mov    -0x10(%ebp),%eax
08106832 +0x148:  mov    %dl,(%eax)
08106834 +0x14a:  addl   $0x1,-0x10(%ebp)
08106838 +0x14e:  mov    -0x14(%ebp),%eax
0810683b +0x151:  movzbl (%eax),%eax
0810683e +0x154:  test   %al,%al
08106840 +0x156:  setne  %al
08106843 +0x159:  addl   $0x1,-0x14(%ebp)
08106847 +0x15d:  test   %al,%al
08106849 +0x15f:  jne    08106805 <+0x11b>
0810684b +0x161:  mov    -0x18(%ebp),%eax
0810684e +0x164:  movzbl -0x4d4(%ebp,%eax,1),%eax
08106856 +0x16c:  cmp    $0xa,%al
08106858 +0x16e:  je     08106869 <+0x17f>
0810685a +0x170:  mov    -0x18(%ebp),%eax
0810685d +0x173:  movzbl -0x4d4(%ebp,%eax,1),%eax
08106865 +0x17b:  cmp    $0x23,%al
08106867 +0x17d:  jne    08106870 <+0x186>
08106869 +0x17f:  movl   $0x0,-0x18(%ebp)
08106870 +0x186:  mov    -0x20(%ebp),%eax
08106873 +0x189:  mov    %eax,0x8(%esp)
08106877 +0x18d:  movl   $0x400,0x4(%esp)
0810687f +0x195:  lea    -0x4d4(%ebp),%eax
08106885 +0x19b:  mov    %eax,(%esp)
08106888 +0x19e:  call   0807e260 <_init+0xb58>
0810688d +0x1a3:  test   %eax,%eax
0810688f +0x1a5:  setne  %al
08106892 +0x1a8:  test   %al,%al
08106894 +0x1aa:  jne    081067f0 <+0x106>
0810689a +0x1b0:  mov    -0x20(%ebp),%eax
0810689d +0x1b3:  mov    %eax,(%esp)
081068a0 +0x1b6:  call   0807dea0 <_init+0x798>
081068a5 +0x1bb:  lea    -0x6f(%ebp),%eax
081068a8 +0x1be:  mov    %eax,(%esp)
081068ab +0x1c1:  call   08106c94 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x116>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x116
081068b0 +0x1c6:  movl   $0x10,0x8(%esp)
081068b8 +0x1ce:  lea    -0x4d4(%ebp),%eax
081068be +0x1d4:  mov    %eax,0x4(%esp)
081068c2 +0x1d8:  lea    -0x6f(%ebp),%eax
081068c5 +0x1db:  add    $0xb,%eax
081068c8 +0x1de:  mov    %eax,(%esp)
081068cb +0x1e1:  call   0807d8d0 <_init+0x1c8>
081068d0 +0x1e6:  lea    -0x6f(%ebp),%eax
081068d3 +0x1e9:  mov    %eax,(%esp)
081068d6 +0x1ec:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
081068db +0x1f1:  mov    %eax,0x8(%esp)
081068df +0x1f5:  lea    -0x6f(%ebp),%eax
081068e2 +0x1f8:  mov    %eax,0x4(%esp)
081068e6 +0x1fc:  mov    0x8(%ebp),%eax
081068e9 +0x1ff:  mov    %eax,(%esp)
081068ec +0x202:  call   0810637c <_ZN15CmmChannelProxy10SendPacketEPci>  ; CmmChannelProxy::SendPacket(char*, int)
081068f1 +0x207:  test   %eax,%eax
081068f3 +0x209:  sete   %al
081068f6 +0x20c:  test   %al,%al
081068f8 +0x20e:  je     08106904 <+0x21a>
081068fa +0x210:  mov    $0x0,%eax
081068ff +0x215:  jmp    08106b35 <+0x44b>
08106904 +0x21a:  mov    0x8(%ebp),%eax
08106907 +0x21d:  mov    %eax,(%esp)
0810690a +0x220:  call   0810645c <_ZN15CmmChannelProxy10RecvPacketEv>  ; CmmChannelProxy::RecvPacket()
0810690f +0x225:  test   %eax,%eax
08106911 +0x227:  sete   %al
08106914 +0x22a:  test   %al,%al
08106916 +0x22c:  je     08106922 <+0x238>
08106918 +0x22e:  mov    $0x0,%eax
0810691d +0x233:  jmp    08106b35 <+0x44b>
08106922 +0x238:  mov    0x8(%ebp),%eax
08106925 +0x23b:  add    $0x20,%eax
08106928 +0x23e:  mov    %eax,-0x1c(%ebp)
0810692b +0x241:  jmp    0810694b <+0x261>
0810692d +0x243:  mov    0x8(%ebp),%eax
08106930 +0x246:  mov    %eax,(%esp)
08106933 +0x249:  call   0810645c <_ZN15CmmChannelProxy10RecvPacketEv>  ; CmmChannelProxy::RecvPacket()
08106938 +0x24e:  test   %eax,%eax
0810693a +0x250:  sete   %al
0810693d +0x253:  test   %al,%al
0810693f +0x255:  je     0810694b <+0x261>
08106941 +0x257:  mov    $0x0,%eax
08106946 +0x25c:  jmp    08106b35 <+0x44b>
0810694b +0x261:  mov    0x8(%ebp),%eax
0810694e +0x264:  mov    0x1c(%eax),%ebx
08106951 +0x267:  mov    -0x1c(%ebp),%eax
08106954 +0x26a:  mov    %eax,(%esp)
08106957 +0x26d:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
0810695c +0x272:  cmp    %eax,%ebx
0810695e +0x274:  setne  %al
08106961 +0x277:  test   %al,%al
08106963 +0x279:  jne    0810692d <+0x243>
08106965 +0x27b:  movl   $"rb+",0x4(%esp)
0810696d +0x283:  movl   $"channel_info/version",(%esp)
08106974 +0x28a:  call   0807e770 <_init+0x1068>
08106979 +0x28f:  mov    %eax,-0x20(%ebp)
0810697c +0x292:  cmpl   $0x0,-0x20(%ebp)
08106980 +0x296:  sete   %al
08106983 +0x299:  test   %al,%al
08106985 +0x29b:  je     081069d7 <+0x2ed>
08106987 +0x29d:  movl   $0x1,0x14(%esp)
0810698f +0x2a5:  movl   $0x1,0x10(%esp)
08106997 +0x2ad:  movl   $0x9,0xc(%esp)
0810699f +0x2b5:  movl   $0x188,0x8(%esp)
081069a7 +0x2bd:  movl   $&_ZZN15CmmChannelProxy22SendCheckChannelScriptEvE19__PRETTY_FUNCTION__,0x4(%esp)
081069af +0x2c5:  lea    -0x30(%ebp),%eax
081069b2 +0x2c8:  mov    %eax,(%esp)
081069b5 +0x2cb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081069ba +0x2d0:  movl   $"\t- [ERROR] : cannt open channel_script_version file\n",0x4(%esp)
081069c2 +0x2d8:  lea    -0x30(%ebp),%eax
081069c5 +0x2db:  mov    %eax,(%esp)
081069c8 +0x2de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081069cd +0x2e3:  mov    $0x0,%eax
081069d2 +0x2e8:  jmp    08106b35 <+0x44b>
081069d7 +0x2ed:  mov    -0x1c(%ebp),%eax
081069da +0x2f0:  lea    0xf(%eax),%edx
081069dd +0x2f3:  mov    -0x20(%ebp),%eax
081069e0 +0x2f6:  mov    %eax,0x4(%esp)
081069e4 +0x2fa:  mov    %edx,(%esp)
081069e7 +0x2fd:  call   0807e720 <_init+0x1018>
081069ec +0x302:  mov    -0x20(%ebp),%eax
081069ef +0x305:  mov    %eax,(%esp)
081069f2 +0x308:  call   0807dea0 <_init+0x798>
081069f7 +0x30d:  mov    0x8(%ebp),%eax
081069fa +0x310:  movl   $0x0,0x1c(%eax)
08106a01 +0x317:  mov    0x8(%ebp),%eax
08106a04 +0x31a:  add    $0x20,%eax
08106a07 +0x31d:  movl   $0x80000,0x8(%esp)
08106a0f +0x325:  movl   $0x0,0x4(%esp)
08106a17 +0x32d:  mov    %eax,(%esp)
08106a1a +0x330:  call   0807dcc0 <_init+0x5b8>
08106a1f +0x335:  lea    -0x7a(%ebp),%eax
08106a22 +0x338:  mov    %eax,(%esp)
08106a25 +0x33b:  call   08106c48 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0xca>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0xca
08106a2a +0x340:  lea    -0x7a(%ebp),%eax
08106a2d +0x343:  mov    %eax,(%esp)
08106a30 +0x346:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
08106a35 +0x34b:  mov    %eax,0x8(%esp)
08106a39 +0x34f:  lea    -0x7a(%ebp),%eax
08106a3c +0x352:  mov    %eax,0x4(%esp)
08106a40 +0x356:  mov    0x8(%ebp),%eax
08106a43 +0x359:  mov    %eax,(%esp)
08106a46 +0x35c:  call   0810637c <_ZN15CmmChannelProxy10SendPacketEPci>  ; CmmChannelProxy::SendPacket(char*, int)
08106a4b +0x361:  test   %eax,%eax
08106a4d +0x363:  sete   %al
08106a50 +0x366:  test   %al,%al
08106a52 +0x368:  je     08106a5e <+0x374>
08106a54 +0x36a:  mov    $0x0,%eax
08106a59 +0x36f:  jmp    08106b35 <+0x44b>
08106a5e +0x374:  mov    0x8(%ebp),%eax
08106a61 +0x377:  mov    %eax,(%esp)
08106a64 +0x37a:  call   0810645c <_ZN15CmmChannelProxy10RecvPacketEv>  ; CmmChannelProxy::RecvPacket()
08106a69 +0x37f:  test   %eax,%eax
08106a6b +0x381:  sete   %al
08106a6e +0x384:  test   %al,%al
08106a70 +0x386:  je     08106a7c <+0x392>
08106a72 +0x388:  mov    $0x0,%eax
08106a77 +0x38d:  jmp    08106b35 <+0x44b>
08106a7c +0x392:  mov    0x8(%ebp),%eax
08106a7f +0x395:  add    $0x20,%eax
08106a82 +0x398:  mov    %eax,-0xc(%ebp)
08106a85 +0x39b:  jmp    08106aa5 <+0x3bb>
08106a87 +0x39d:  mov    0x8(%ebp),%eax
08106a8a +0x3a0:  mov    %eax,(%esp)
08106a8d +0x3a3:  call   0810645c <_ZN15CmmChannelProxy10RecvPacketEv>  ; CmmChannelProxy::RecvPacket()
08106a92 +0x3a8:  test   %eax,%eax
08106a94 +0x3aa:  sete   %al
08106a97 +0x3ad:  test   %al,%al
08106a99 +0x3af:  je     08106aa5 <+0x3bb>
08106a9b +0x3b1:  mov    $0x0,%eax
08106aa0 +0x3b6:  jmp    08106b35 <+0x44b>
08106aa5 +0x3bb:  mov    0x8(%ebp),%eax
08106aa8 +0x3be:  mov    0x1c(%eax),%ebx
08106aab +0x3c1:  mov    -0xc(%ebp),%eax
08106aae +0x3c4:  mov    %eax,(%esp)
08106ab1 +0x3c7:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
08106ab6 +0x3cc:  cmp    %eax,%ebx
08106ab8 +0x3ce:  setne  %al
08106abb +0x3d1:  test   %al,%al
08106abd +0x3d3:  jne    08106a87 <+0x39d>
08106abf +0x3d5:  movl   $"w+",0x4(%esp)
08106ac7 +0x3dd:  movl   $"channel_info/channel_info.etc",(%esp)
08106ace +0x3e4:  call   0807e770 <_init+0x1068>
08106ad3 +0x3e9:  mov    %eax,-0x20(%ebp)
08106ad6 +0x3ec:  cmpl   $0x0,-0x20(%ebp)
08106ada +0x3f0:  sete   %al
08106add +0x3f3:  test   %al,%al
08106adf +0x3f5:  je     08106ae8 <+0x3fe>
08106ae1 +0x3f7:  mov    $0x0,%eax
08106ae6 +0x3fc:  jmp    08106b35 <+0x44b>
08106ae8 +0x3fe:  mov    -0xc(%ebp),%eax
08106aeb +0x401:  mov    %eax,(%esp)
08106aee +0x404:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
08106af3 +0x409:  lea    -0xb(%eax),%ecx
08106af6 +0x40c:  mov    -0xc(%ebp),%eax
08106af9 +0x40f:  lea    0xb(%eax),%edx
08106afc +0x412:  mov    -0x20(%ebp),%eax
08106aff +0x415:  mov    %eax,0xc(%esp)
08106b03 +0x419:  mov    %ecx,0x8(%esp)
08106b07 +0x41d:  movl   $0x1,0x4(%esp)
08106b0f +0x425:  mov    %edx,(%esp)
08106b12 +0x428:  call   0807e320 <_init+0xc18>
08106b17 +0x42d:  mov    -0x20(%ebp),%eax
08106b1a +0x430:  mov    %eax,(%esp)
08106b1d +0x433:  call   0807dea0 <_init+0x798>
08106b22 +0x438:  mov    0x8(%ebp),%eax
08106b25 +0x43b:  mov    0x18(%eax),%eax
08106b28 +0x43e:  mov    %eax,(%esp)
08106b2b +0x441:  call   0807d860 <_init+0x158>
08106b30 +0x446:  mov    $0x1,%eax
08106b35 +0x44b:  add    $0x4f4,%esp
08106b3b +0x451:  pop    %ebx
08106b3c +0x452:  pop    %ebp
08106b3d +0x453:  ret
```

## 反编译 C

```c
// CmmChannelProxy::SendCheckChannelScript @ 0x81066ea

/* CmmChannelProxy::SendCheckChannelScript() */

undefined4 __thiscall CmmChannelProxy::SendCheckChannelScript(CmmChannelProxy *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char local_4d8 [1024];
  stat local_d8;
  tagCS_GET_SCRIPT local_7e [11];
  tagCS_CHECK_SCRIPT_VERSION local_73 [11];
  char acStack_68 [16];
  char local_58 [20];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  FILE *local_24;
  tagPacketHeader *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  tagPacketHeader *local_10;
  
  ConnectBridgeServer(this);
  memset(local_58,0,0x14);
  strncpy(local_58,"channel_info",0x14);
  iVar3 = stat(local_58,&local_d8);
  if (iVar3 < 0) {
    piVar4 = __errno_location();
    if (*piVar4 != 2) {
      return 0;
    }
    DNFFLib::Make_Dir(local_58);
  }
  local_24 = fopen("channel_info/version","wb+");
  if (local_24 == (FILE *)0x0) {
    cMyTrace::cMyTrace(local_44,"bool CmmChannelProxy::SendCheckChannelScript()",0x143,9,true,true);
    cMyTrace::operator()(local_44,"\t- [ERROR] : cannt open channel_script_version file\n");
    return 0;
  }
  local_1c = 0;
  while (pcVar5 = fgets(local_4d8,0x400,local_24), pcVar5 != (char *)0x0) {
    local_18 = local_4d8;
    local_14 = local_18;
    do {
      while( true ) {
        if ((*local_18 == ' ') || (*local_18 == '\t')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        local_18 = local_18 + 1;
      }
      *local_14 = *local_18;
      local_14 = local_14 + 1;
      cVar1 = *local_18;
      local_18 = local_18 + 1;
    } while (cVar1 != '\0');
    if ((local_4d8[local_1c] == '\n') || (local_4d8[local_1c] == '#')) {
      local_1c = 0;
    }
  }
  fclose(local_24);
  tagCS_CHECK_SCRIPT_VERSION::tagCS_CHECK_SCRIPT_VERSION(local_73);
  strncpy(acStack_68,local_4d8,0x10);
  iVar3 = tagPacketHeader::getSize((tagPacketHeader *)local_73);
  iVar3 = SendPacket(this,(char *)local_73,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = RecvPacket(this);
  if (iVar3 == 0) {
    return 0;
  }
  local_20 = (tagPacketHeader *)(this + 0x20);
  while (iVar3 = *(int *)(this + 0x1c), iVar6 = tagPacketHeader::getSize(local_20), iVar3 != iVar6)
  {
    iVar3 = RecvPacket(this);
    if (iVar3 == 0) {
      return 0;
    }
  }
  local_24 = fopen("channel_info/version","rb+");
  if (local_24 == (FILE *)0x0) {
    cMyTrace::cMyTrace(local_34,"bool CmmChannelProxy::SendCheckChannelScript()",0x188,9,true,true);
    cMyTrace::operator()(local_34,"\t- [ERROR] : cannt open channel_script_version file\n");
    return 0;
  }
  fputs((char *)(local_20 + 0xf),local_24);
  fclose(local_24);
  *(undefined4 *)(this + 0x1c) = 0;
  memset(this + 0x20,0,0x80000);
  tagCS_GET_SCRIPT::tagCS_GET_SCRIPT(local_7e);
  iVar3 = tagPacketHeader::getSize((tagPacketHeader *)local_7e);
  iVar3 = SendPacket(this,(char *)local_7e,iVar3);
  if (iVar3 != 0) {
    iVar3 = RecvPacket(this);
    if (iVar3 == 0) {
      return 0;
    }
    local_10 = (tagPacketHeader *)(this + 0x20);
    do {
      iVar3 = *(int *)(this + 0x1c);
      iVar6 = tagPacketHeader::getSize(local_10);
      if (iVar3 == iVar6) {
        local_24 = fopen("channel_info/channel_info.etc","w+");
        if (local_24 == (FILE *)0x0) {
          return 0;
        }
        iVar3 = tagPacketHeader::getSize(local_10);
        fwrite(local_10 + 0xb,1,iVar3 - 0xb,local_24);
        fclose(local_24);
        close(*(int *)(this + 0x18));
        return 1;
      }
      iVar3 = RecvPacket(this);
    } while (iVar3 != 0);
    return 0;
  }
  return 0;
}
```
